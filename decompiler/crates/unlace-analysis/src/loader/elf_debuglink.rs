//! (kuna `debuglink`) An ELF's separate debug information: the companion file
//! its build-id or `.gnu_debuglink` names, and the MiniDebugInfo
//! (`.gnu_debugdata`) a distribution embeds in a stripped image.
//!
//! A distribution strips its binaries and ships the symbol table and DWARF in a
//! separate `.debug` file (`debuginfod`, `-dbg`/`-debuginfo` packages). The image
//! names that file two ways, and gdb, IDA and Ghidra search the same places:
//!
//! - the GNU build-id note: `<dir>/.build-id/<xx>/<rest>.debug`, the first byte
//!   of the id as two hex digits and the rest after it;
//! - `.gnu_debuglink` (a file name plus a CRC32 of the file): next to the image,
//!   in its `.debug/` directory, and under `<dir>/<image's directory>/`.
//!
//! `<dir>` is each entry of `KUNA_DEBUG_DIRS` (colon-separated), then
//! `/usr/lib/debug`. A candidate is accepted only if its build-id matches, or
//! (for a debuglink) its CRC32 does. Fedora and RHEL also keep a function-only
//! `.symtab` inside the stripped image, as an XZ-compressed ELF in
//! `.gnu_debugdata`.

use std::path::{Path, PathBuf};

use object::read::{Object, ObjectSection, ObjectSymbol};
use object::SymbolKind;

/// The companion search directories.
fn debug_dirs() -> Vec<PathBuf> {
    let mut dirs: Vec<PathBuf> = std::env::var("KUNA_DEBUG_DIRS")
        .map(|v| v.split(':').filter(|d| !d.is_empty()).map(PathBuf::from).collect())
        .unwrap_or_default();
    dirs.push(PathBuf::from("/usr/lib/debug"));
    dirs
}

fn hex(bytes: &[u8]) -> String {
    bytes.iter().map(|b| format!("{b:02x}")).collect()
}

/// Where the image's build-id and debuglink say its debug file may be, in
/// search order, each with the check it must pass.
pub fn candidates(file: &object::File, image: &Path) -> Vec<(PathBuf, Check)> {
    let mut out = Vec::new();
    if let Ok(Some(id)) = file.build_id() {
        if id.len() >= 2 {
            for dir in debug_dirs() {
                let path = dir.join(".build-id").join(hex(&id[..1])).join(format!("{}.debug", hex(&id[1..])));
                out.push((path, Check::BuildId(id.to_vec())));
            }
        }
    }
    if let Ok(Some((name, crc))) = file.gnu_debuglink() {
        let name = String::from_utf8_lossy(name).into_owned();
        let parent = image.parent().unwrap_or(Path::new("."));
        let absolute = std::fs::canonicalize(parent).unwrap_or_else(|_| parent.to_path_buf());
        out.push((parent.join(&name), Check::Crc(crc)));
        out.push((parent.join(".debug").join(&name), Check::Crc(crc)));
        for dir in debug_dirs() {
            let relative = absolute.strip_prefix("/").unwrap_or(&absolute);
            out.push((dir.join(relative).join(&name), Check::Crc(crc)));
        }
    }
    out
}

/// How a candidate proves it belongs to the image.
#[derive(Debug, Clone)]
pub enum Check {
    BuildId(Vec<u8>),
    Crc(u32),
}

/// The first candidate that exists and passes its check, with its bytes.
pub fn find_companion(file: &object::File, image: &Path) -> Option<(PathBuf, Vec<u8>)> {
    for (path, check) in candidates(file, image) {
        if path == image {
            continue;
        }
        let Ok(bytes) = std::fs::read(&path) else { continue };
        let ok = match &check {
            Check::BuildId(id) => object::File::parse(&*bytes)
                .ok()
                .and_then(|companion| companion.build_id().ok().flatten().map(|other| other == id.as_slice()))
                .unwrap_or(false),
            Check::Crc(crc) => {
                let mut sum = flate2::Crc::new();
                sum.update(&bytes);
                sum.sum() == *crc
            }
        };
        if ok {
            return Some((path, bytes));
        }
    }
    None
}

/// The ELF inside `.gnu_debugdata`, decompressed.
pub fn minidebuginfo(file: &object::File) -> Option<Vec<u8>> {
    let section = file.section_by_name(".gnu_debugdata")?;
    let data = section.data().ok()?;
    let mut out = Vec::new();
    lzma_rs::xz_decompress(&mut std::io::BufReader::new(data), &mut out).ok()?;
    Some(out)
}

/// The defined function symbols of an ELF given as bytes, as `(addr, name)`.
pub fn function_symbols(bytes: &[u8]) -> Vec<(u64, Vec<u8>)> {
    let Ok(file) = object::File::parse(bytes) else { return Vec::new() };
    file.symbols()
        .filter(|s| s.kind() == SymbolKind::Text && !s.is_undefined() && s.address() != 0)
        .filter_map(|s| {
            let name = s.name_bytes().ok()?;
            (!name.is_empty()).then(|| (s.address(), name.to_vec()))
        })
        .collect()
}

/// The function symbols a stripped image's debug companion or MiniDebugInfo
/// supplies, and where they came from. Empty when the image keeps its own
/// `.symtab`.
pub fn companion_symbols(file: &object::File, image: Option<&Path>) -> (Vec<(u64, Vec<u8>)>, Option<String>) {
    if file.format() != object::BinaryFormat::Elf || file.section_by_name(".symtab").is_some() {
        return (Vec::new(), None);
    }
    if let Some((path, bytes)) = image.and_then(|image| find_companion(file, image)) {
        let symbols = function_symbols(&bytes);
        if !symbols.is_empty() {
            return (symbols, Some(path.display().to_string()));
        }
    }
    match minidebuginfo(file) {
        Some(bytes) => (function_symbols(&bytes), Some(".gnu_debugdata".to_string())),
        None => (Vec::new(), None),
    }
}

/// Program-header `PT_LOAD`s that map one address to two different file
/// offsets: the later segment overwrites bytes the earlier one already placed,
/// a shape only a hand-made or hostile image has. `(first, second)` vaddrs.
pub fn overlapping_loads(bytes: &[u8]) -> Vec<(u64, u64)> {
    let Ok(file) = object::File::parse(bytes) else { return Vec::new() };
    if file.format() != object::BinaryFormat::Elf {
        return Vec::new();
    }
    use object::read::ObjectSegment;
    let loads: Vec<(u64, u64, u64)> = file
        .segments()
        .filter_map(|s| {
            let (offset, filesz) = s.file_range();
            (filesz != 0).then(|| (s.address(), filesz, offset))
        })
        .collect();
    let mut out = Vec::new();
    for (i, &(va, size, off)) in loads.iter().enumerate() {
        for &(vb, sb, ob) in &loads[i + 1..] {
            let overlap = va < vb.saturating_add(sb) && vb < va.saturating_add(size);
            if overlap && va.wrapping_sub(off) != vb.wrapping_sub(ob) {
                out.push((va, vb));
            }
        }
    }
    out
}
