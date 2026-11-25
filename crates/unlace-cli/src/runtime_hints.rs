//! Runtime and packer recognition for orientation: which wrapper or toolchain
//! produced an image, and what to do next when native decompilation of it is the
//! wrong tool (a managed assembly, a bundled interpreter, a packed stub).
//!
//! Detection reads raw bytes and a lenient PE header walk that does not insist
//! on the `MZ` magic, so a file whose DOS header was damaged on purpose is still
//! recognized even though it cannot be loaded. `functions --summary` reports the
//! result as `summary.runtime`; every other binary subcommand prints the
//! actionable entries as one `note:` line each on stderr (see `docs/cli.md`).

use object::{Object, ObjectSection};
use unlace_analysis::analyzers::sourcelang::{Compiler, effective_compiler_bytes};

use crate::jsonfmt::Json;

/// One recognized runtime, packer or toolchain.
#[derive(Debug, Clone, PartialEq, Eq)]
pub struct RuntimeHint {
    pub id: &'static str,
    pub version: Option<String>,
    pub hint: String,
    /// `true` when native decompilation is not the whole answer and the hint says
    /// what to run instead; only these are echoed to stderr.
    pub actionable: bool,
    /// The registry crates a Rust image names, as `(name, version)`; `None` for
    /// every other row.
    pub crates: Option<Vec<(String, String)>>,
}

const PYI_MAGIC: &[u8] = b"MEI\x0c\x0b\x0a\x0b\x0e";

#[derive(Clone, Copy, PartialEq, Eq)]
enum Marker {
    PyInstaller,
    AutoIt,
    TwinBasic,
    Vb6,
    Nuitka,
}

const MARKERS: &[(&[u8], Marker)] = &[
    (PYI_MAGIC, Marker::PyInstaller),
    (b"AU3!EA06", Marker::AutoIt),
    (b"AU3!EA05", Marker::AutoIt),
    (b"twinBASIC", Marker::TwinBasic),
    (b"MSVBVM60.DLL", Marker::Vb6),
    (b"msvbvm60.dll", Marker::Vb6),
    (b"MSVBVM60.dll", Marker::Vb6),
    (b"NUITKA_ONEFILE_PARENT", Marker::Nuitka),
    (b"__nuitka_binary_dir", Marker::Nuitka),
];

/// What a lenient PE header walk found.
struct PeView {
    section_names: Vec<Vec<u8>>,
    clr: bool,
    debug_header_export: bool,
}

fn u16_at(b: &[u8], off: usize) -> Option<u16> {
    Some(u16::from_le_bytes(b.get(off..off + 2)?.try_into().ok()?))
}

fn u32_at(b: &[u8], off: usize) -> Option<u32> {
    Some(u32::from_le_bytes(b.get(off..off + 4)?.try_into().ok()?))
}

/// Walk the PE headers without checking the DOS `MZ` magic.
fn pe_view(b: &[u8]) -> Option<PeView> {
    let lfanew = u32_at(b, 0x3c)? as usize;
    if b.get(lfanew..lfanew.checked_add(4)?)? != b"PE\0\0" {
        return None;
    }
    let coff = lfanew + 4;
    let nsections = u16_at(b, coff + 2)? as usize;
    let opt_size = u16_at(b, coff + 16)? as usize;
    let opt = coff + 20;
    let (ndirs_at, dirs_at) = match u16_at(b, opt)? {
        0x10b => (opt + 92, opt + 96),
        0x20b => (opt + 108, opt + 112),
        _ => return None,
    };
    let ndirs = u32_at(b, ndirs_at).unwrap_or(0);
    let clr = ndirs > 14
        && u32_at(b, dirs_at + 14 * 8).unwrap_or(0) != 0
        && u32_at(b, dirs_at + 14 * 8 + 4).unwrap_or(0) != 0;
    let table = opt + opt_size;
    let nsections = nsections.min(96);
    let section_names = (0..nsections)
        .map_while(|i| b.get(table + i * 40..table + i * 40 + 8))
        .map(|n| n.iter().copied().take_while(|&c| c != 0).collect())
        .collect();
    let export_rva = (ndirs > 0)
        .then(|| u32_at(b, dirs_at))
        .flatten()
        .filter(|&rva| rva != 0);
    let debug_header_export = export_rva
        .and_then(|rva| pe_exports(b, table, nsections, rva, b"DotNetRuntimeDebugHeader"))
        .unwrap_or(false);
    Some(PeView {
        section_names,
        clr,
        debug_header_export,
    })
}

/// The file offset of `rva` under the section table at `table`.
fn pe_offset(b: &[u8], table: usize, nsections: usize, rva: u32) -> Option<usize> {
    (0..nsections).find_map(|i| {
        let s = table + i * 40;
        let delta = rva.checked_sub(u32_at(b, s + 12)?)?;
        let at = (u32_at(b, s + 20)? as usize).checked_add(delta as usize)?;
        (delta < u32_at(b, s + 16)?).then_some(at)
    })
}

/// Whether the export directory at `export_rva` names `name`. The name pointer
/// table of a PE is sorted, so this is a binary search over it.
fn pe_exports(
    b: &[u8],
    table: usize,
    nsections: usize,
    export_rva: u32,
    name: &[u8],
) -> Option<bool> {
    let offset = |rva: u32| pe_offset(b, table, nsections, rva);
    let dir = offset(export_rva)?;
    let names = offset(u32_at(b, dir.checked_add(32)?)?)?;
    let (mut lo, mut hi) = (0usize, u32_at(b, dir.checked_add(24)?)? as usize);
    while lo < hi {
        let mid = lo + (hi - lo) / 2;
        let tail = b.get(offset(u32_at(b, names.checked_add(mid.checked_mul(4)?)?)?)?..)?;
        let tail = &tail[..tail.len().min(name.len() + 1)];
        let entry = tail.split(|&c| c == 0).next().unwrap_or(tail);
        match entry.cmp(name) {
            std::cmp::Ordering::Less => lo = mid + 1,
            std::cmp::Ordering::Greater => hi = mid,
            std::cmp::Ordering::Equal => return Some(true),
        }
    }
    Some(false)
}

/// The Python version a PyInstaller CArchive cookie at `at` records, e.g. `3.12`.
///
/// The cookie is the magic, three big-endian lengths, the big-endian
/// `pyvers` (`312`, or `27` from old builds) and, since PyInstaller 2.1, a
/// 64-byte library name. A stray copy of the magic (the bootloader carries one)
/// is rejected by the version range and the library name.
fn pyinstaller_version(b: &[u8], at: usize) -> Option<String> {
    let field = |i: usize| -> Option<u32> {
        Some(u32::from_be_bytes(
            b.get(at + 8 + i * 4..at + 12 + i * 4)?.try_into().ok()?,
        ))
    };
    let pyvers = field(3)?;
    let (major, minor) = match pyvers {
        100..=399 => (pyvers / 100, pyvers % 100),
        20..=39 => (pyvers / 10, pyvers % 10),
        _ => return None,
    };
    let libname = b.get(at + 24..(at + 88).min(b.len())).unwrap_or(&[]);
    let names_python = libname
        .windows(6)
        .any(|w| w.eq_ignore_ascii_case(b"python"));
    (names_python || b.len() == at + 24).then(|| format!("{major}.{minor}"))
}

/// The ILC version in a `.comment` string such as
/// `.NET: ilc 10.0.2-servicing.25612.105+hash`.
fn ilc_version(b: &[u8]) -> Option<String> {
    let at = b.windows(4).position(|w| w == b"ilc ")? + 4;
    let rest = b.get(at..)?;
    let end = rest
        .iter()
        .position(|c| !(c.is_ascii_digit() || *c == b'.'))
        .unwrap_or(rest.len());
    let version = std::str::from_utf8(&rest[..end]).ok()?;
    version.contains('.').then(|| version.to_string())
}

/// Strong markers of a .NET NativeAOT image, with the ILC release its
/// `.comment` section records. On ELF, `__managedcode` and `.dotnet_eh_table`
/// are both section names. A Windows link merges the managed sections into
/// `.text` and `.rdata`, so there the marker is the `DotNetRuntimeDebugHeader`
/// data export the runtime publishes for debuggers; a link that keeps the
/// `.unbox` and `.modules` sections is accepted too. Section and export names
/// keep an image that merely spells the markers out in its data from being
/// labeled.
fn nativeaot_version(b: &[u8], pe: Option<&PeView>) -> Option<Option<String>> {
    let windows = pe.is_some_and(|p| {
        let named = |name: &[u8]| p.section_names.iter().any(|n| n.as_slice() == name);
        !p.clr && (p.debug_header_export || (named(b".unbox") && named(b".modules")))
    });
    if !windows && !b.starts_with(b"\x7fELF") {
        return None;
    }
    let file = object::File::parse(b).ok();
    let section = |name: &str| file.as_ref()?.section_by_name(name);
    let elf = section("__managedcode").is_some() && section(".dotnet_eh_table").is_some();
    let comment = || section(".comment").and_then(|s| s.data().ok());
    (windows || elf).then(|| comment().and_then(ilc_version))
}

fn hint(id: &'static str, version: Option<String>, text: String, actionable: bool) -> RuntimeHint {
    RuntimeHint {
        id,
        version,
        hint: text,
        actionable,
        crates: None,
    }
}

/// Whether an invocation with these arguments loads a managed assembly as CIL:
/// its last `--option cil` is not off and it names no `--target`.
pub fn cil_view(args: &[String]) -> bool {
    let off = args
        .windows(3)
        .rev()
        .find(|w| w[0] == "--option" && w[1] == "cil")
        .is_some_and(|w| {
            matches!(
                w[2].trim().to_ascii_lowercase().as_str(),
                "off" | "0" | "false"
            )
        });
    !off && !args.iter().any(|a| a == "--target")
}

/// Recognize the runtimes and packers `bytes` carries. `toolchain` adds the Go
/// and Rust verdicts, which need a full object parse and are informational.
/// `cil` says a managed assembly is being read from its CIL.
pub fn detect(bytes: &[u8], toolchain: bool, cil: bool) -> Vec<RuntimeHint> {
    let pe = pe_view(bytes);
    let mut seen: Vec<Marker> = Vec::new();
    let mut last_cookie = None;
    for &(lit, marker) in MARKERS {
        if marker == Marker::PyInstaller {
            last_cookie = memchr::memmem::rfind(bytes, lit);
        } else if !seen.contains(&marker) && memchr::memmem::find(bytes, lit).is_some() {
            seen.push(marker);
        }
    }
    let windows_only = |m: Marker| pe.is_some() && seen.contains(&m);
    let mut out = Vec::new();

    if pe.as_ref().is_some_and(|p| p.clr) {
        out.push(if cil {
            hint(
                "dotnet",
                None,
                "managed .NET assembly: decompiled from its CIL method bodies; a body the lift does not cover is marked unimplemented".into(),
                false,
            )
        } else {
            hint(
                "dotnet",
                None,
                "managed .NET assembly: native decompilation shows only the stub; the default `--option cil on` without --target decompiles its methods".into(),
                true,
            )
        });
    }
    if let Some(version) = nativeaot_version(bytes, pe.as_ref()) {
        let label = version
            .as_deref()
            .map(|v| format!("NativeAOT (ILC {v})"))
            .unwrap_or_else(|| "NativeAOT".into());
        out.push(hint(
            "nativeaot",
            version,
            format!(
                "{label} image: native code from C#; decompiles as native C, but method names \
                 need the .dbg sidecar or a NativeAOT metadata tool"
            ),
            false,
        ));
    }
    if let Some(version) = last_cookie.and_then(|at| pyinstaller_version(bytes, at)) {
        out.push(hint(
            "pyinstaller",
            Some(version.clone()),
            format!("PyInstaller bundle (Python {version}): extract with pyinstxtractor-ng"),
            true,
        ));
    }
    if seen.contains(&Marker::Nuitka) {
        out.push(hint(
            "nuitka",
            None,
            "Nuitka-compiled Python: the code is C generated from Python; extract a onefile \
             payload with nuitka-extractor"
                .into(),
            true,
        ));
    }
    if windows_only(Marker::AutoIt) {
        out.push(hint(
            "autoit",
            None,
            "AutoIt compiled script: extract the script with autoit-ripper".into(),
            true,
        ));
    }
    let upx_sections = pe.as_ref().is_some_and(|p| {
        p.section_names
            .iter()
            .any(|n| n.as_slice() == b"UPX0" || n.as_slice() == b"UPX1")
    });
    let upx_magic = bytes[..bytes.len().min(0x1000)]
        .windows(4)
        .any(|w| w == b"UPX!");
    if upx_sections || upx_magic || unlace_analysis::upx::detect(bytes).is_some() {
        out.push(hint(
            "upx",
            None,
            "UPX packed: run 'unlace unpack'".into(),
            true,
        ));
    } else if pe.is_some() && unlace_analysis::neolite::detect(bytes) {
        out.push(hint(
            "neolite",
            None,
            "NEOLite packed: run 'unlace unpack'".into(),
            true,
        ));
    } else if unlace_analysis::pklite::detect(bytes) {
        out.push(hint(
            "pklite",
            None,
            "PKLITE packed: run 'unlace unpack'".into(),
            true,
        ));
    }
    if windows_only(Marker::TwinBasic) {
        out.push(hint(
            "twinbasic",
            None,
            "twinBASIC program: native code over a COM runtime; strings are BSTRs (UTF-16) and \
             most calls go through vtables"
                .into(),
            true,
        ));
    } else if windows_only(Marker::Vb6) {
        out.push(hint(
            "vb6",
            None,
            "Visual Basic 6 program (MSVBVM60): P-Code is not native code; use a VB6 decompiler \
             for forms and P-Code"
                .into(),
            true,
        ));
    }
    if toolchain {
        match effective_compiler_bytes(bytes) {
            Compiler::Go => out.push(hint(
                "go",
                None,
                "Go binary: function names come from pclntab; start at main.main".into(),
                false,
            )),
            Compiler::Rustc => {
                let version = unlace_analysis::sourcelang::rustc_version_label(bytes);
                let label = version
                    .as_deref()
                    .map(|v| format!("Rust binary (rustc {v})"))
                    .unwrap_or_else(|| "Rust binary".into());
                let mut row = hint(
                    "rust",
                    version,
                    format!("{label}: output defaults to --language rust"),
                    false,
                );
                row.crates = Some(unlace_analysis::sourcelang::registry_crates(bytes));
                out.push(row);
            }
            _ => {}
        }
    }
    out
}

/// The `summary.runtime` array.
pub fn to_json(hints: &[RuntimeHint]) -> Json {
    Json::Array(
        hints
            .iter()
            .map(|h| {
                let mut row = vec![
                    ("id".into(), Json::Str(h.id.into())),
                    (
                        "version".into(),
                        h.version.clone().map(Json::Str).unwrap_or(Json::Null),
                    ),
                    ("hint".into(), Json::Str(h.hint.clone())),
                    ("actionable".into(), Json::Bool(h.actionable)),
                ];
                if let Some(crates) = &h.crates {
                    let crates = crates.iter().map(|(name, version)| {
                        Json::Object(vec![
                            ("name".into(), Json::Str(name.clone())),
                            ("version".into(), Json::Str(version.clone())),
                        ])
                    });
                    row.push(("crates".into(), Json::Array(crates.collect())));
                }
                Json::Object(row)
            })
            .collect(),
    )
}

/// Print each actionable hint for `binary` as one `note:` line on stderr.
pub fn note_to_stderr(binary: &str, cil: bool) {
    let Some(hints) = crate::image::inspect(binary, |bytes| Some(detect(bytes, false, cil))) else {
        return;
    };
    for h in hints.iter().filter(|h| h.actionable) {
        eprintln!("note: {binary}: {}", h.hint);
    }
}

/// The subcommands that take a binary and are not themselves the answer to a
/// hint (`unpack` is what the UPX hint points at).
const NOTED_SUBCOMMANDS: &[&str] = &[
    "decompile",
    "decompile-all",
    "decompile-project",
    "decompile-graph",
    "functions",
    "disassemble",
    "read",
    "xrefs",
    "strings",
];

/// The stderr note for one `unlace <sub> <rest..>` invocation, before dispatch.
///
/// Silent for help, for a `--jobs` worker (its parent already spoke) and for
/// `--summary`, which carries the hints in its own document.
pub fn note_for_invocation(sub: &str, rest: &[String]) {
    if !NOTED_SUBCOMMANDS.contains(&sub)
        || rest.iter().any(|a| {
            matches!(
                a.as_str(),
                "-h" | "--help" | "--summary" | "--jobs-worker" | "--raw-image"
            )
        })
    {
        return;
    }
    if let Some(binary) = rest
        .iter()
        .find(|a| !a.starts_with('-') && std::path::Path::new(a.as_str()).is_file())
    {
        note_to_stderr(binary, cil_view(rest));
    }
}

#[cfg(test)]
mod tests;
