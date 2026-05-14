//! FLIRT-style signature generation from compiled static libraries.
//!
//! This module implements FLIRT signature generation from Unix archive (`.a`)
//! files.  The workflow is:
//!
//! 1. Parse the archive and enumerate each object-file member.
//! 2. For each member, use the symbol table to find defined function symbols
//!    and their extents within the `.text` section.
//! 3. Apply relocation-aware wildcarding: bytes covered by relocations are
//!    masked out so that the pattern is position-independent.
//! 4. Compute a CRC16/CCITT-FALSE checksum over the tail region of each
//!    function to disambiguate signatures that share a common wildcarded prefix.
//! 5. Emit the resulting [`FlirtDb`] which can be serialized to TOML for
//!    persistent storage and later loaded by [`crate::load_patterns_from_toml`].

use std::borrow::Cow;
use std::collections::HashMap;
use std::path::Path;

use object::read::archive::ArchiveFile;
use object::{Object, ObjectSection, ObjectSymbol, SectionIndex, SymbolKind};

use crate::{FlirtDb, FlirtError, FlirtPattern};

const DEFAULT_PREFIX_LEN: usize = 32;
const DEFAULT_CRC_LEN: usize = 32;

/// Options controlling signature generation.
#[derive(Clone, Debug, PartialEq, Eq)]
pub struct GeneratorOptions {
    /// Number of leading bytes to encode into the pattern prefix.
    pub prefix_len: usize,
    /// Number of bytes to include in the CRC tail region.
    pub crc_len: usize,
    /// Whether to wildcard relocation sites in the emitted mask.
    ///
    /// When `true` (default), bytes at relocation target offsets within a
    /// function's prefix are set to `mask = 0x00`, making the pattern
    /// independent of link-time address resolution.
    pub wildcard_relocations: bool,
    /// Skip archive members that produce no code bytes.
    pub skip_non_code_members: bool,
    /// Minimum function size (in bytes) to emit a pattern for.
    /// Functions shorter than this are skipped. Default: 4.
    pub min_function_len: usize,
}

impl Default for GeneratorOptions {
    fn default() -> Self {
        Self {
            prefix_len: DEFAULT_PREFIX_LEN,
            crc_len: DEFAULT_CRC_LEN,
            wildcard_relocations: true,
            skip_non_code_members: true,
            min_function_len: 4,
        }
    }
}

/// Generate FLIRT patterns from a static archive on disk.
pub fn generate_patterns_from_archive(
    path: &Path,
    options: &GeneratorOptions,
) -> Result<FlirtDb, FlirtError> {
    let data = std::fs::read(path)?;
    generate_patterns_from_archive_bytes(&data, options)
}

/// Generate FLIRT patterns from in-memory archive bytes.
///
/// Each archive member is parsed as an object file. Defined function symbols
/// in the `.text` section are extracted, and a pattern is generated per
/// function using the symbol's address range. Relocations within the pattern
/// prefix are automatically wildcarded.
pub fn generate_patterns_from_archive_bytes(
    archive_bytes: &[u8],
    options: &GeneratorOptions,
) -> Result<FlirtDb, FlirtError> {
    let archive = ArchiveFile::parse(archive_bytes).map_err(|err| FlirtError::ArchiveParse {
        detail: err.to_string(),
    })?;

    let mut db = FlirtDb::new();
    for member in archive.members() {
        let member = member.map_err(|err| FlirtError::ArchiveParse {
            detail: err.to_string(),
        })?;
        let member_name = String::from_utf8_lossy(member.name()).into_owned();
        let member_bytes = member
            .data(archive_bytes)
            .map_err(|err| FlirtError::ArchiveParse {
                detail: err.to_string(),
            })?;
        if member_bytes.is_empty() {
            continue;
        }

        let file = match object::File::parse(member_bytes) {
            Ok(f) => f,
            Err(err) => {
                if options.skip_non_code_members {
                    continue;
                }
                return Err(FlirtError::ObjectParse {
                    member: member_name,
                    detail: err.to_string(),
                });
            }
        };

        let patterns = extract_patterns_from_object(&file, &member_name, options)?;
        if patterns.is_empty() && !options.skip_non_code_members {
            return Err(FlirtError::NoCodeSection {
                member: member_name,
            });
        }
        for pat in patterns {
            db.add_pattern(pat);
        }
    }

    Ok(db)
}

/// Information about a defined function within an object file.
struct FuncInfo {
    name: String,
    offset: u64,
    size: u64,
    section_index: SectionIndex,
}

/// Extract patterns from a single object file, generating one pattern per
/// defined function symbol.
fn extract_patterns_from_object(
    file: &object::File<'_>,
    member_name: &str,
    options: &GeneratorOptions,
) -> Result<Vec<FlirtPattern>, FlirtError> {
    let mut funcs: Vec<FuncInfo> = Vec::new();
    for sym in file.symbols() {
        if sym.kind() != SymbolKind::Text {
            continue;
        }
        if !sym.is_definition() {
            continue;
        }
        let name = match sym.name() {
            Ok(n) if !n.is_empty() => n.to_string(),
            _ => continue,
        };
        let section_index = match sym.section_index() {
            Some(idx) => idx,
            None => continue,
        };
        funcs.push(FuncInfo {
            name,
            offset: sym.address(),
            size: sym.size(),
            section_index,
        });
    }

    // If no symbols found, fall back to whole-section extraction using member name.
    if funcs.is_empty() {
        return match first_code_blob(file) {
            Some(code) if code.len() >= options.min_function_len => {
                let pat = pattern_from_code(
                    &sanitize_member_name(member_name),
                    &code,
                    &[],
                    options,
                )?;
                Ok(vec![pat])
            }
            _ => Ok(Vec::new()),
        };
    }

    // Sort by section then offset for extent computation.
    funcs.sort_by_key(|f| (f.section_index.0, f.offset));

    // Build relocation map: section_index -> sorted vec of (offset, size).
    let reloc_map = build_relocation_map(file);
    let mut patterns = Vec::new();

    for (i, func) in funcs.iter().enumerate() {
        let section = match file.section_by_index(func.section_index) {
            Ok(s) => s,
            Err(_) => continue,
        };
        if section.kind() != object::SectionKind::Text {
            continue;
        }
        let section_data = match section.data() {
            Ok(d) => d,
            Err(_) => continue,
        };

        let section_base = section.address();
        let func_start = func.offset.saturating_sub(section_base) as usize;

        // Determine function extent.
        let func_end = if func.size > 0 {
            func_start + func.size as usize
        } else {
            // Extend to next symbol in same section or end of section.
            let next = funcs[i + 1..]
                .iter()
                .find(|f| f.section_index == func.section_index && f.offset > func.offset);
            match next {
                Some(nf) => nf.offset.saturating_sub(section_base) as usize,
                None => section_data.len(),
            }
        };

        if func_start >= section_data.len() || func_end > section_data.len() {
            continue;
        }

        let code = &section_data[func_start..func_end];
        if code.len() < options.min_function_len {
            continue;
        }

        // Get relocations relevant to the prefix region of this function.
        let relocs = reloc_map
            .get(&func.section_index)
            .map(|v| v.as_slice())
            .unwrap_or(&[]);

        // Filter to relocations within this function's prefix window.
        let prefix_len = options.prefix_len.min(code.len());
        let prefix_relocs: Vec<(usize, usize)> = relocs
            .iter()
            .filter_map(|&(roff, rsize)| {
                if roff >= func_start && roff < func_start + prefix_len {
                    let local = roff - func_start;
                    Some((local, rsize))
                } else {
                    None
                }
            })
            .collect();

        let pat = pattern_from_code(&func.name, code, &prefix_relocs, options)?;
        patterns.push(pat);
    }

    Ok(patterns)
}

/// Build a map from section index to sorted (section-relative-offset, relocation_size) pairs.
fn build_relocation_map(file: &object::File<'_>) -> HashMap<SectionIndex, Vec<(usize, usize)>> {
    let mut map: HashMap<SectionIndex, Vec<(usize, usize)>> = HashMap::new();

    for section in file.sections() {
        if section.kind() != object::SectionKind::Text {
            continue;
        }
        let idx = section.index();
        let mut relocs: Vec<(usize, usize)> = Vec::new();
        for (offset, reloc) in section.relocations() {
            let size = relocation_size(&reloc);
            if size > 0 {
                relocs.push((offset as usize, size));
            }
        }
        relocs.sort_by_key(|r| r.0);
        if !relocs.is_empty() {
            map.insert(idx, relocs);
        }
    }

    map
}

/// Determine the byte-width of a relocation entry.
fn relocation_size(reloc: &object::Relocation) -> usize {
    let bits = reloc.size();
    if bits > 0 {
        (bits as usize + 7) / 8
    } else {
        4
    }
}

fn first_code_blob(file: &object::File<'_>) -> Option<Vec<u8>> {
    for section in file.sections() {
        if section.kind() != object::SectionKind::Text {
            continue;
        }
        let Ok(bytes) = section.data() else {
            continue;
        };
        if !bytes.is_empty() {
            return Some(bytes.to_vec());
        }
    }
    None
}

/// Create a FLIRT pattern from raw function bytes.
///
/// `relocs` is a slice of `(offset_within_code, byte_width)` pairs marking
/// known relocation sites that should be wildcarded in the prefix mask.
fn pattern_from_code(
    name: &str,
    code: &[u8],
    relocs: &[(usize, usize)],
    options: &GeneratorOptions,
) -> Result<FlirtPattern, FlirtError> {
    if code.is_empty() {
        return Err(FlirtError::NoCodeSection {
            member: name.to_string(),
        });
    }

    let prefix_len = options.prefix_len.min(code.len());
    let crc_offset = prefix_len;
    let crc_len = code.len().saturating_sub(crc_offset).min(options.crc_len);

    let bytes = code[..prefix_len].to_vec();
    let mut mask = vec![0xFF; prefix_len];

    // Wildcard explicit relocation sites.
    for &(roff, rsize) in relocs {
        let end = (roff + rsize).min(prefix_len);
        if roff < prefix_len {
            mask[roff..end].fill(0x00);
        }
    }

    // Additionally apply heuristic wildcarding for common patterns.
    if options.wildcard_relocations {
        wildcard_relocation_like_runs(&code[..prefix_len], &mut mask);
    }

    let crc16 = if crc_len == 0 {
        0
    } else {
        crc16_ccitt(&code[crc_offset..crc_offset + crc_len])
    };

    Ok(FlirtPattern {
        bytes,
        mask,
        name: name.to_string(),
        length: code.len() as u32,
        crc16,
        crc_offset: crc_offset as u32,
        crc_length: crc_len as u32,
    })
}

fn sanitize_member_name(member_name: &str) -> Cow<'_, str> {
    if let Some(stripped) = member_name.strip_suffix(".o") {
        Cow::Owned(stripped.to_string())
    } else if let Some(stripped) = member_name.strip_suffix(".obj") {
        Cow::Owned(stripped.to_string())
    } else {
        Cow::Borrowed(member_name)
    }
}

/// Heuristic: wildcard runs of bytes that look like relocation immediates.
///
/// This catches cases where the object file lacks relocation metadata (e.g.
/// fully-linked objects archived after stripping) by detecting 4-byte windows
/// that appear to be absolute or relative address references.
fn wildcard_relocation_like_runs(bytes: &[u8], mask: &mut [u8]) {
    if bytes.len() < 4 {
        return;
    }
    for i in 0..=bytes.len() - 4 {
        if mask[i] == 0x00 {
            continue;
        }
        let window = &bytes[i..i + 4];
        if looks_like_relocation_immediate(window) {
            mask[i..i + 4].fill(0x00);
        }
    }
}

fn looks_like_relocation_immediate(window: &[u8]) -> bool {
    let value = u32::from_le_bytes([window[0], window[1], window[2], window[3]]);
    value != 0 && (value & 0xFFFF_0000 == 0 || value & 0x0000_FFFF == 0)
}

/// Compute CRC16/CCITT-FALSE over a byte slice.
///
/// Uses polynomial 0x1021, initial value 0xFFFF, no final XOR.
/// This matches IDA/FLAIR's CRC16 algorithm for tail disambiguation.
fn crc16_ccitt(data: &[u8]) -> u16 {
    let mut crc: u16 = 0xFFFF;
    for &byte in data {
        crc ^= (byte as u16) << 8;
        for _ in 0..8 {
            if crc & 0x8000 != 0 {
                crc = (crc << 1) ^ 0x1021;
            } else {
                crc <<= 1;
            }
        }
    }
    crc
}

/// Serialize a generated FLIRT DB to the TOML format understood by
/// [`crate::load_patterns_from_toml`].
pub fn render_db_as_toml(db: &FlirtDb) -> String {
    let mut out = String::new();
    for pattern in &db.patterns {
        out.push_str("[[pattern]]\n");
        out.push_str(&format!(
            "name = \"{}\"\n",
            escape_toml_string(&pattern.name)
        ));
        out.push_str(&format!("bytes = \"{}\"\n", encode_hex(&pattern.bytes)));
        out.push_str(&format!("mask = \"{}\"\n", encode_hex(&pattern.mask)));
        out.push_str(&format!("length = {}\n", pattern.length));
        if pattern.crc_length > 0 {
            out.push_str(&format!("crc16 = {}\n", pattern.crc16));
            out.push_str(&format!("crc_offset = {}\n", pattern.crc_offset));
            out.push_str(&format!("crc_length = {}\n", pattern.crc_length));
        }
        out.push('\n');
    }
    out
}

fn escape_toml_string(value: &str) -> String {
    value.replace('\\', "\\\\").replace('"', "\\\"")
}

fn encode_hex(bytes: &[u8]) -> String {
    let mut out = String::with_capacity(bytes.len() * 2);
    for byte in bytes {
        use std::fmt::Write as _;
        let _ = write!(&mut out, "{byte:02x}");
    }
    out
}

#[cfg(test)]
mod tests {
    use std::process::Command;
    use std::time::{SystemTime, UNIX_EPOCH};

    use super::*;

    fn unique_temp_dir() -> std::path::PathBuf {
        let nanos = SystemTime::now()
            .duration_since(UNIX_EPOCH)
            .unwrap()
            .as_nanos();
        let dir = std::env::temp_dir().join(format!("unlace-flirt-{nanos}"));
        std::fs::create_dir_all(&dir).unwrap();
        dir
    }

    fn have_cc_and_ar() -> bool {
        Command::new("cc").arg("--version").output().is_ok()
            && Command::new("ar").arg("--version").output().is_ok()
    }

    #[test]
    fn render_round_trips_through_toml_loader() {
        let db = FlirtDb {
            patterns: vec![FlirtPattern {
                bytes: vec![0x55, 0x48, 0x89, 0xE5],
                mask: vec![0xFF, 0xFF, 0xFF, 0xFF],
                name: "demo".into(),
                length: 12,
                crc16: 1234,
                crc_offset: 4,
                crc_length: 8,
            }],
        };
        let toml = render_db_as_toml(&db);
        let loaded = crate::load_patterns_from_toml_str(&toml).unwrap();
        assert_eq!(loaded.patterns, db.patterns);
    }

    #[test]
    fn generates_patterns_from_archive() {
        if !have_cc_and_ar() {
            return;
        }

        let dir = unique_temp_dir();
        let c_path = dir.join("adder.c");
        let o_path = dir.join("adder.o");
        let a_path = dir.join("libadder.a");
        std::fs::write(&c_path, "int adder(int a, int b) { return a + b + 7; }\n").unwrap();

        let status = Command::new("cc")
            .arg("-c")
            .arg(&c_path)
            .arg("-o")
            .arg(&o_path)
            .status()
            .unwrap();
        assert!(status.success(), "cc failed with {status:?}");

        let status = Command::new("ar")
            .arg("crs")
            .arg(&a_path)
            .arg(&o_path)
            .status()
            .unwrap();
        assert!(status.success(), "ar failed with {status:?}");

        let db = generate_patterns_from_archive(&a_path, &GeneratorOptions::default()).unwrap();
        assert_eq!(db.patterns.len(), 1);
        let pattern = &db.patterns[0];
        assert_eq!(pattern.name, "adder");
        assert!(!pattern.bytes.is_empty());
        assert_eq!(pattern.bytes.len(), pattern.mask.len());
        assert!(pattern.length as usize >= pattern.bytes.len());

        let toml = render_db_as_toml(&db);
        let round_trip = crate::load_patterns_from_toml_str(&toml).unwrap();
        assert_eq!(round_trip.patterns.len(), 1);
        assert_eq!(round_trip.patterns[0].name, "adder");

        let _ = std::fs::remove_dir_all(dir);
    }

    #[test]
    fn generates_multiple_symbols_from_single_object() {
        if !have_cc_and_ar() {
            return;
        }

        let dir = unique_temp_dir();
        let c_path = dir.join("multi.c");
        let o_path = dir.join("multi.o");
        let a_path = dir.join("libmulti.a");
        std::fs::write(
            &c_path,
            "int alpha(int x) { return x * 3 + 1; }\n\
             int beta(int x) { return x - 42; }\n\
             int gamma(int a, int b) { return alpha(a) + beta(b); }\n",
        )
        .unwrap();

        let status = Command::new("cc")
            .arg("-c")
            .arg("-O1")
            .arg(&c_path)
            .arg("-o")
            .arg(&o_path)
            .status()
            .unwrap();
        assert!(status.success());

        let status = Command::new("ar")
            .arg("crs")
            .arg(&a_path)
            .arg(&o_path)
            .status()
            .unwrap();
        assert!(status.success());

        let db = generate_patterns_from_archive(&a_path, &GeneratorOptions::default()).unwrap();
        assert!(
            db.patterns.len() >= 3,
            "expected >= 3 patterns, got {} -- names: {:?}",
            db.patterns.len(),
            db.patterns.iter().map(|p| &p.name).collect::<Vec<_>>()
        );

        let names: Vec<&str> = db.patterns.iter().map(|p| p.name.as_str()).collect();
        assert!(names.contains(&"alpha"), "missing 'alpha' in {names:?}");
        assert!(names.contains(&"beta"), "missing 'beta' in {names:?}");
        assert!(names.contains(&"gamma"), "missing 'gamma' in {names:?}");

        let _ = std::fs::remove_dir_all(dir);
    }

    #[test]
    fn crc16_disambiguates_similar_prefixes() {
        let code_a: Vec<u8> = vec![
            0x55, 0x48, 0x89, 0xe5,
            0x89, 0x7d, 0xfc, 0x8b, 0x45, 0xfc, 0x83, 0xc0, 0x01, 0x5d, 0xc3, 0x90,
        ];
        let code_b: Vec<u8> = vec![
            0x55, 0x48, 0x89, 0xe5,
            0x89, 0x7d, 0xfc, 0x8b, 0x45, 0xfc, 0x83, 0xe8, 0x01, 0x5d, 0xc3, 0x90,
        ];

        let opts = GeneratorOptions {
            prefix_len: 4,
            crc_len: 12,
            wildcard_relocations: false,
            ..Default::default()
        };

        let pat_a = pattern_from_code("func_a", &code_a, &[], &opts).unwrap();
        let pat_b = pattern_from_code("func_b", &code_b, &[], &opts).unwrap();

        assert_eq!(pat_a.bytes, pat_b.bytes);
        assert_ne!(pat_a.crc16, pat_b.crc16);
        assert!(pat_a.matches(&code_a));
        assert!(!pat_a.matches(&code_b));
        assert!(pat_b.matches(&code_b));
        assert!(!pat_b.matches(&code_a));
    }

    #[test]
    fn relocation_wildcarding_masks_correct_bytes() {
        let code: Vec<u8> = vec![
            0xe8, 0x12, 0x34, 0x56, 0x78,
            0x55, 0x48, 0x89, 0xe5, 0x90, 0x90, 0x90, 0x90, 0x90, 0x90, 0x90,
        ];
        let relocs = vec![(1usize, 4usize)];

        let opts = GeneratorOptions {
            prefix_len: 8,
            crc_len: 4,
            wildcard_relocations: false,
            ..Default::default()
        };

        let pat = pattern_from_code("test_func", &code, &relocs, &opts).unwrap();
        assert_eq!(pat.mask[0], 0xFF);
        assert_eq!(pat.mask[1], 0x00);
        assert_eq!(pat.mask[2], 0x00);
        assert_eq!(pat.mask[3], 0x00);
        assert_eq!(pat.mask[4], 0x00);
        assert_eq!(pat.mask[5], 0xFF);
        assert_eq!(pat.mask[6], 0xFF);
        assert_eq!(pat.mask[7], 0xFF);
    }

    #[test]
    fn min_function_len_filters_small_functions() {
        if !have_cc_and_ar() {
            return;
        }

        let dir = unique_temp_dir();
        let c_path = dir.join("tiny.c");
        let o_path = dir.join("tiny.o");
        let a_path = dir.join("libtiny.a");
        std::fs::write(
            &c_path,
            "void nop(void) {} \nint big(int x) { return x*x*x + x*x + x + 1; }\n",
        )
        .unwrap();

        let status = Command::new("cc")
            .arg("-c")
            .arg("-O0")
            .arg(&c_path)
            .arg("-o")
            .arg(&o_path)
            .status()
            .unwrap();
        assert!(status.success());

        let status = Command::new("ar")
            .arg("crs")
            .arg(&a_path)
            .arg(&o_path)
            .status()
            .unwrap();
        assert!(status.success());

        let opts = GeneratorOptions {
            min_function_len: 16,
            ..Default::default()
        };
        let db = generate_patterns_from_archive(&a_path, &opts).unwrap();
        let names: Vec<&str> = db.patterns.iter().map(|p| p.name.as_str()).collect();
        assert!(
            !names.contains(&"nop"),
            "expected 'nop' to be filtered out, got: {names:?}"
        );

        let _ = std::fs::remove_dir_all(dir);
    }

    #[test]
    fn crc16_known_vector() {
        let crc = crc16_ccitt(b"123456789");
        assert_eq!(crc, 0x29B1, "CRC16 mismatch: got {crc:#06x}");
    }

    #[test]
    fn empty_archive_produces_empty_db() {
        let empty_ar = b"!<arch>\n";
        let db =
            generate_patterns_from_archive_bytes(empty_ar, &GeneratorOptions::default()).unwrap();
        assert!(db.patterns.is_empty());
//! This implements task t271's core workflow: read a Unix archive (`.a`),
//! enumerate object members, extract their text/code sections, and emit a
//! TOML FLIRT database whose patterns can later be matched by `unlace-flirt`.

use std::borrow::Cow;
use std::path::Path;

use object::read::archive::ArchiveFile;
use object::{Object, ObjectSection};

use crate::{FlirtDb, FlirtError, FlirtPattern};

const DEFAULT_PREFIX_LEN: usize = 32;
const DEFAULT_CRC_LEN: usize = 32;

/// Options controlling signature generation.
#[derive(Clone, Debug, PartialEq, Eq)]
pub struct GeneratorOptions {
    /// Number of leading bytes to encode into the pattern.
    pub prefix_len: usize,
    /// Number of bytes to include in the CRC tail region.
    pub crc_len: usize,
    /// Whether to wildcard relocation sites in the emitted mask.
    pub wildcard_relocations: bool,
    /// Skip archive members that produce no code bytes.
    pub skip_non_code_members: bool,
}

impl Default for GeneratorOptions {
    fn default() -> Self {
        Self {
            prefix_len: DEFAULT_PREFIX_LEN,
            crc_len: DEFAULT_CRC_LEN,
            wildcard_relocations: true,
            skip_non_code_members: true,
        }
    }
}

/// Generate FLIRT patterns from a static archive on disk.
pub fn generate_patterns_from_archive(
    path: &Path,
    options: &GeneratorOptions,
) -> Result<FlirtDb, FlirtError> {
    let data = std::fs::read(path)?;
    generate_patterns_from_archive_bytes(&data, options)
}

/// Generate FLIRT patterns from in-memory archive bytes.
pub fn generate_patterns_from_archive_bytes(
    archive_bytes: &[u8],
    options: &GeneratorOptions,
) -> Result<FlirtDb, FlirtError> {
    let archive = ArchiveFile::parse(archive_bytes).map_err(|err| FlirtError::ArchiveParse {
        detail: err.to_string(),
    })?;

    let mut db = FlirtDb::new();
    for member in archive.members() {
        let member = member.map_err(|err| FlirtError::ArchiveParse {
            detail: err.to_string(),
        })?;
        let member_name = String::from_utf8_lossy(member.name()).into_owned();
        let member_bytes = member.data(archive_bytes).map_err(|err| FlirtError::ArchiveParse {
            detail: err.to_string(),
        })?;
        if member_bytes.is_empty() {
            continue;
        }

        let file = object::File::parse(member_bytes).map_err(|err| FlirtError::ObjectParse {
            member: member_name.clone(),
            detail: err.to_string(),
        })?;

        let code = first_code_blob(&file).ok_or_else(|| FlirtError::NoCodeSection {
            member: member_name.clone(),
        });

        match code {
            Ok(code) => {
                let pattern = pattern_from_code(&member_name, code, options)?;
                db.add_pattern(pattern);
            }
            Err(_err) if options.skip_non_code_members => continue,
            Err(err) => return Err(err),
        }
    }

    Ok(db)
}

fn first_code_blob<'a>(file: &'a object::File<'a>) -> Option<Vec<u8>> {
    for section in file.sections() {
        if section.kind() != object::SectionKind::Text {
            continue;
        }
        let Ok(bytes) = section.data() else {
            continue;
        };
        if !bytes.is_empty() {
            return Some(bytes.to_vec());
        }
    }
    None
}

fn pattern_from_code(
    member_name: &str,
    code: Vec<u8>,
    options: &GeneratorOptions,
) -> Result<FlirtPattern, FlirtError> {
    if code.is_empty() {
        return Err(FlirtError::NoCodeSection {
            member: member_name.to_string(),
        });
    }

    let prefix_len = options.prefix_len.min(code.len());
    let crc_offset = prefix_len;
    let crc_len = code.len().saturating_sub(crc_offset).min(options.crc_len);

    let bytes = code[..prefix_len].to_vec();
    let mut mask = vec![0xFF; prefix_len];
    if options.wildcard_relocations {
        wildcard_relocation_like_runs(&code[..prefix_len], &mut mask);
    }

    let crc16 = if crc_len == 0 {
        0
    } else {
        crc16_ccitt(&code[crc_offset..crc_offset + crc_len])
    };

    Ok(FlirtPattern {
        bytes,
        mask,
        name: sanitize_member_name(member_name).into_owned(),
        length: code.len() as u32,
        crc16,
        crc_offset: crc_offset as u32,
        crc_length: crc_len as u32,
    })
}

fn sanitize_member_name(member_name: &str) -> Cow<'_, str> {
    if let Some(stripped) = member_name.strip_suffix(".o") {
        Cow::Owned(stripped.to_string())
    } else if let Some(stripped) = member_name.strip_suffix(".obj") {
        Cow::Owned(stripped.to_string())
    } else {
        Cow::Borrowed(member_name)
    }
}

fn wildcard_relocation_like_runs(bytes: &[u8], mask: &mut [u8]) {
    if bytes.len() < 4 {
        return;
    }

    for i in 0..=bytes.len() - 4 {
        let window = &bytes[i..i + 4];
        if looks_like_relocation_immediate(window) {
            mask[i..i + 4].fill(0x00);
        }
    }
}

fn looks_like_relocation_immediate(window: &[u8]) -> bool {
    let value = u32::from_le_bytes([window[0], window[1], window[2], window[3]]);
    value != 0 && (value & 0xFFFF_0000 == 0 || value & 0x0000_FFFF == 0)
}

fn crc16_ccitt(data: &[u8]) -> u16 {
    let mut crc: u16 = 0xFFFF;
    for &byte in data {
        crc ^= (byte as u16) << 8;
        for _ in 0..8 {
            if crc & 0x8000 != 0 {
                crc = (crc << 1) ^ 0x1021;
            } else {
                crc <<= 1;
            }
        }
    }
    crc
}

/// Serialize a generated FLIRT DB to the TOML format understood by
/// `load_patterns_from_toml`.
pub fn render_db_as_toml(db: &FlirtDb) -> String {
    let mut out = String::new();
    for pattern in &db.patterns {
        out.push_str("[[pattern]]\n");
        out.push_str(&format!("name = \"{}\"\n", escape_toml_string(&pattern.name)));
        out.push_str(&format!("bytes = \"{}\"\n", encode_hex(&pattern.bytes)));
        out.push_str(&format!("mask = \"{}\"\n", encode_hex(&pattern.mask)));
        out.push_str(&format!("length = {}\n", pattern.length));
        if pattern.crc_length > 0 {
            out.push_str(&format!("crc16 = {}\n", pattern.crc16));
            out.push_str(&format!("crc_offset = {}\n", pattern.crc_offset));
            out.push_str(&format!("crc_length = {}\n", pattern.crc_length));
        }
        out.push('\n');
    }
    out
}

fn escape_toml_string(value: &str) -> String {
    value.replace('\\', "\\\\").replace('"', "\\\"")
}

fn encode_hex(bytes: &[u8]) -> String {
    let mut out = String::with_capacity(bytes.len() * 2);
    for byte in bytes {
        use std::fmt::Write as _;
        let _ = write!(&mut out, "{byte:02x}");
    }
    out
}

#[cfg(test)]
mod tests {
    use std::process::Command;
    use std::time::{SystemTime, UNIX_EPOCH};

    use super::*;

    fn unique_temp_dir() -> std::path::PathBuf {
        let nanos = SystemTime::now()
            .duration_since(UNIX_EPOCH)
            .unwrap()
            .as_nanos();
        let dir = std::env::temp_dir().join(format!("unlace-flirt-{nanos}"));
        std::fs::create_dir_all(&dir).unwrap();
        dir
    }

    #[test]
    fn render_round_trips_through_toml_loader() {
        let db = FlirtDb {
            patterns: vec![FlirtPattern {
                bytes: vec![0x55, 0x48, 0x89, 0xE5],
                mask: vec![0xFF, 0xFF, 0xFF, 0xFF],
                name: "demo".into(),
                length: 12,
                crc16: 1234,
                crc_offset: 4,
                crc_length: 8,
            }],
        };
        let toml = render_db_as_toml(&db);
        let loaded = crate::load_patterns_from_toml_str(&toml).unwrap();
        assert_eq!(loaded.patterns, db.patterns);
    }

    #[test]
    fn generates_patterns_from_archive() {
        let cc = if Command::new("cc").arg("--version").output().is_ok() {
            "cc"
        } else {
            return;
        };
        let ar = if Command::new("ar").arg("--version").output().is_ok() {
            "ar"
        } else {
            return;
        };

        let dir = unique_temp_dir();
        let c_path = dir.join("adder.c");
        let o_path = dir.join("adder.o");
        let a_path = dir.join("libadder.a");
        std::fs::write(&c_path, "int adder(int a, int b) { return a + b + 7; }\n").unwrap();

        let status = Command::new(cc)
            .arg("-c")
            .arg(&c_path)
            .arg("-o")
            .arg(&o_path)
            .status()
            .unwrap();
        assert!(status.success(), "cc failed with {status:?}");

        let status = Command::new(ar)
            .arg("crs")
            .arg(&a_path)
            .arg(&o_path)
            .status()
            .unwrap();
        assert!(status.success(), "ar failed with {status:?}");

        let db = generate_patterns_from_archive(&a_path, &GeneratorOptions::default()).unwrap();
        assert_eq!(db.patterns.len(), 1);
        let pattern = &db.patterns[0];
        assert_eq!(pattern.name, "adder");
        assert!(!pattern.bytes.is_empty());
        assert_eq!(pattern.bytes.len(), pattern.mask.len());
        assert!(pattern.length as usize >= pattern.bytes.len());
//! This implements task t271's core workflow: read a Unix archive (`.a`),
//! enumerate object members, extract their text/code sections, and emit a
//! TOML FLIRT database whose patterns can later be matched by `unlace-flirt`.

use std::borrow::Cow;
use std::path::Path;

use object::read::archive::ArchiveFile;
use object::{Object, ObjectSection};

use crate::{FlirtDb, FlirtError, FlirtPattern};

const DEFAULT_PREFIX_LEN: usize = 32;
const DEFAULT_CRC_LEN: usize = 32;

/// Options controlling signature generation.
#[derive(Clone, Debug, PartialEq, Eq)]
pub struct GeneratorOptions {
    /// Number of aligned body bytes to encode into the pattern.
    pub prefix_len: usize,
    /// Whether to identify and skip common function-prologue/alignment bytes
    /// before capturing the match pattern.
    pub align_after_prologue: bool,
    /// Emit `exact_length` for generated patterns so matches must have the
    /// same length-prefixed body size as the archive member.
    pub length_prefixed: bool,
    /// Number of bytes to include in the CRC tail region.
    pub crc_len: usize,
    /// Whether to wildcard relocation sites in the emitted mask.
    pub wildcard_relocations: bool,
    /// Skip archive members that produce no code bytes.
    pub skip_non_code_members: bool,
}

impl Default for GeneratorOptions {
    fn default() -> Self {
        Self {
            prefix_len: DEFAULT_PREFIX_LEN,
            align_after_prologue: true,
            length_prefixed: true,
            crc_len: DEFAULT_CRC_LEN,
            wildcard_relocations: true,
            skip_non_code_members: true,
        }
    }
}

/// Generate FLIRT patterns from a static archive on disk.
pub fn generate_patterns_from_archive(
    path: &Path,
    options: &GeneratorOptions,
) -> Result<FlirtDb, FlirtError> {
    let data = std::fs::read(path)?;
    generate_patterns_from_archive_bytes(&data, options)
}

/// Generate FLIRT patterns from in-memory archive bytes.
pub fn generate_patterns_from_archive_bytes(
    archive_bytes: &[u8],
    options: &GeneratorOptions,
) -> Result<FlirtDb, FlirtError> {
    let archive = ArchiveFile::parse(archive_bytes).map_err(|err| FlirtError::ArchiveParse {
        detail: err.to_string(),
    })?;

    let mut db = FlirtDb::new();
    for member in archive.members() {
        let member = member.map_err(|err| FlirtError::ArchiveParse {
            detail: err.to_string(),
        })?;
        let member_name = String::from_utf8_lossy(member.name()).into_owned();
        let member_bytes = member
            .data(archive_bytes)
            .map_err(|err| FlirtError::ArchiveParse {
                detail: err.to_string(),
            })?;
        if member_bytes.is_empty() {
            continue;
        }

        let file = object::File::parse(member_bytes).map_err(|err| FlirtError::ObjectParse {
            member: member_name.clone(),
            detail: err.to_string(),
        })?;

        let code = first_code_blob(&file).ok_or_else(|| FlirtError::NoCodeSection {
            member: member_name.clone(),
        });

        match code {
            Ok(code) => {
                let pattern = pattern_from_code(&member_name, code, options)?;
                db.add_pattern(pattern);
            }
            Err(_err) if options.skip_non_code_members => continue,
            Err(err) => return Err(err),
        }
    }

    Ok(db)
}

fn first_code_blob<'a>(file: &'a object::File<'a>) -> Option<Vec<u8>> {
    for section in file.sections() {
        if section.kind() != object::SectionKind::Text {
            continue;
        }
        let Ok(bytes) = section.data() else {
            continue;
        };
        if !bytes.is_empty() {
            return Some(bytes.to_vec());
        }
    }
    None
}

fn pattern_from_code(
    member_name: &str,
    code: Vec<u8>,
    options: &GeneratorOptions,
) -> Result<FlirtPattern, FlirtError> {
    if code.is_empty() {
        return Err(FlirtError::NoCodeSection {
            member: member_name.to_string(),
        });
    }

    let prologue_len = if options.align_after_prologue {
        detect_prologue_len(&code)
    } else {
        0
    };
    let aligned = &code[prologue_len..];
    let prefix_len = options.prefix_len.min(aligned.len());
    let crc_offset = prologue_len + prefix_len;
    let crc_len = code.len().saturating_sub(crc_offset).min(options.crc_len);

    let bytes = aligned[..prefix_len].to_vec();
    let mut mask = vec![0xFF; prefix_len];
    if options.wildcard_relocations {
        wildcard_relocation_like_runs(&aligned[..prefix_len], &mut mask);
    }

    let crc16 = if crc_len == 0 {
        0
    } else {
        crc16_ccitt(&code[crc_offset..crc_offset + crc_len])
    };

    Ok(FlirtPattern {
        bytes,
        mask,
        name: sanitize_member_name(member_name).into_owned(),
        length: if options.length_prefixed {
            0
        } else {
            code.len() as u32
        },
        exact_length: if options.length_prefixed {
            code.len() as u32
        } else {
            0
        },
        prologue_len: prologue_len as u32,
        crc16,
        crc_offset: crc_offset as u32,
        crc_length: crc_len as u32,
    })
}

fn detect_prologue_len(code: &[u8]) -> usize {
    let mut offset = 0;

    // CET/IBT landing pad: endbr64 / endbr32.
    if code.get(offset..offset + 4) == Some(&[0xF3, 0x0F, 0x1E, 0xFA])
        || code.get(offset..offset + 4) == Some(&[0xF3, 0x0F, 0x1E, 0xFB])
    {
        offset += 4;
    }

    // Common hotpatch/alignment NOPs before the frame setup.
    offset += leading_nop_len(&code[offset..]);

    // x86-64 / i386 frame prologues.
    if code.get(offset..offset + 4) == Some(&[0x55, 0x48, 0x89, 0xE5]) {
        offset += 4;
    } else if code.get(offset..offset + 3) == Some(&[0x55, 0x89, 0xE5])
        || code.get(offset..offset + 3) == Some(&[0x55, 0x8B, 0xEC])
    {
        offset += 3;
    } else if code.get(offset) == Some(&0x55) {
        offset += 1;
    }

    // Stack allocation immediately after the frame prologue is toolchain
    // boilerplate and often differs only by local-frame size.
    if code
        .get(offset..offset + 4)
        .is_some_and(|b| b[0] == 0x48 && b[1] == 0x83 && b[2] == 0xEC)
    {
        offset += 4;
    } else if code
        .get(offset..offset + 7)
        .is_some_and(|b| b[0] == 0x48 && b[1] == 0x81 && b[2] == 0xEC)
    {
        offset += 7;
    } else if code
        .get(offset..offset + 3)
        .is_some_and(|b| b[0] == 0x83 && b[1] == 0xEC)
    {
        offset += 3;
    } else if code
        .get(offset..offset + 6)
        .is_some_and(|b| b[0] == 0x81 && b[1] == 0xEC)
    {
        offset += 6;
    }

    offset += leading_nop_len(&code[offset..]);
    offset.min(code.len())
}

fn leading_nop_len(bytes: &[u8]) -> usize {
    let mut offset = 0;
    while let Some(&byte) = bytes.get(offset) {
        match byte {
            0x90 => offset += 1,
            // multi-byte NOP: 0f 1f /0 and variants; consume the common encodings conservatively.
            0x0F if bytes.get(offset + 1) == Some(&0x1F) => {
                offset += match bytes.get(offset + 2).copied() {
                    Some(0x00) => 3,
                    Some(0x40) | Some(0x44) => 4.min(bytes.len() - offset),
                    Some(0x80) | Some(0x84) => 7.min(bytes.len() - offset),
                    _ => 2,
                };
            }
            _ => break,
        }
    }
    offset
}

fn sanitize_member_name(member_name: &str) -> Cow<'_, str> {
    if let Some(stripped) = member_name.strip_suffix(".o") {
        Cow::Owned(stripped.to_string())
    } else if let Some(stripped) = member_name.strip_suffix(".obj") {
        Cow::Owned(stripped.to_string())
    } else {
        Cow::Borrowed(member_name)
    }
}

fn wildcard_relocation_like_runs(bytes: &[u8], mask: &mut [u8]) {
    if bytes.len() < 4 {
        return;
    }

    for i in 0..=bytes.len() - 4 {
        let window = &bytes[i..i + 4];
        if looks_like_relocation_immediate(window) {
            mask[i..i + 4].fill(0x00);
        }
    }
}

fn looks_like_relocation_immediate(window: &[u8]) -> bool {
    let value = u32::from_le_bytes([window[0], window[1], window[2], window[3]]);
    value != 0 && (value & 0xFFFF_0000 == 0 || value & 0x0000_FFFF == 0)
}

fn crc16_ccitt(data: &[u8]) -> u16 {
    let mut crc: u16 = 0xFFFF;
    for &byte in data {
        crc ^= (byte as u16) << 8;
        for _ in 0..8 {
            if crc & 0x8000 != 0 {
                crc = (crc << 1) ^ 0x1021;
            } else {
                crc <<= 1;
            }
        }
    }
    crc
}

/// Serialize a generated FLIRT DB to the TOML format understood by
/// `load_patterns_from_toml`.
pub fn render_db_as_toml(db: &FlirtDb) -> String {
    let mut out = String::new();
    for pattern in &db.patterns {
        out.push_str("[[pattern]]\n");
        out.push_str(&format!(
            "name = \"{}\"\n",
            escape_toml_string(&pattern.name)
        ));
        out.push_str(&format!("bytes = \"{}\"\n", encode_hex(&pattern.bytes)));
        out.push_str(&format!("mask = \"{}\"\n", encode_hex(&pattern.mask)));
        if pattern.length > 0 {
            out.push_str(&format!("length = {}\n", pattern.length));
        }
        if pattern.exact_length > 0 {
            out.push_str(&format!("exact_length = {}\n", pattern.exact_length));
        }
        if pattern.prologue_len > 0 {
            out.push_str(&format!("prologue_len = {}\n", pattern.prologue_len));
        }
        if pattern.crc_length > 0 {
            out.push_str(&format!("crc16 = {}\n", pattern.crc16));
            out.push_str(&format!("crc_offset = {}\n", pattern.crc_offset));
            out.push_str(&format!("crc_length = {}\n", pattern.crc_length));
        }
        out.push('\n');
    }
    out
}

fn escape_toml_string(value: &str) -> String {
    value.replace('\\', "\\\\").replace('"', "\\\"")
}

fn encode_hex(bytes: &[u8]) -> String {
    let mut out = String::with_capacity(bytes.len() * 2);
    for byte in bytes {
        use std::fmt::Write as _;
        let _ = write!(&mut out, "{byte:02x}");
    }
    out
}

#[cfg(test)]
mod tests {
    use std::process::Command;
    use std::time::{SystemTime, UNIX_EPOCH};

    use super::*;

    fn unique_temp_dir() -> std::path::PathBuf {
        let nanos = SystemTime::now()
            .duration_since(UNIX_EPOCH)
            .unwrap()
            .as_nanos();
        let dir = std::env::temp_dir().join(format!("unlace-flirt-{nanos}"));
        std::fs::create_dir_all(&dir).unwrap();
        dir
    }

    #[test]
    fn render_round_trips_through_toml_loader() {
        let db = FlirtDb {
            patterns: vec![FlirtPattern {
                bytes: vec![0x55, 0x48, 0x89, 0xE5],
                mask: vec![0xFF, 0xFF, 0xFF, 0xFF],
                name: "demo".into(),
                length: 0,
                exact_length: 12,
                prologue_len: 4,
                crc16: 1234,
                crc_offset: 4,
                crc_length: 8,
            }],
        };
        let toml = render_db_as_toml(&db);
        let loaded = crate::load_patterns_from_toml_str(&toml).unwrap();
        assert_eq!(loaded.patterns, db.patterns);
    }

    #[test]
    fn generates_patterns_from_archive() {
        let cc = if Command::new("cc").arg("--version").output().is_ok() {
            "cc"
        } else {
            return;
        };
        let ar = if Command::new("ar").arg("--version").output().is_ok() {
            "ar"
        } else {
            return;
        };

        let dir = unique_temp_dir();
        let c_path = dir.join("adder.c");
        let o_path = dir.join("adder.o");
        let a_path = dir.join("libadder.a");
        std::fs::write(&c_path, "int adder(int a, int b) { return a + b + 7; }\n").unwrap();

        let status = Command::new(cc)
            .arg("-c")
            .arg(&c_path)
            .arg("-o")
            .arg(&o_path)
            .status()
            .unwrap();
        assert!(status.success(), "cc failed with {status:?}");

        let status = Command::new(ar)
            .arg("crs")
            .arg(&a_path)
            .arg(&o_path)
            .status()
            .unwrap();
        assert!(status.success(), "ar failed with {status:?}");

        let db = generate_patterns_from_archive(&a_path, &GeneratorOptions::default()).unwrap();
        assert_eq!(db.patterns.len(), 1);
        let pattern = &db.patterns[0];
        assert_eq!(pattern.name, "adder");
        assert!(!pattern.bytes.is_empty());
        assert_eq!(pattern.bytes.len(), pattern.mask.len());
        assert!(
            pattern.exact_length as usize >= pattern.bytes.len() + pattern.prologue_len as usize
        );

        let toml = render_db_as_toml(&db);
        let round_trip = crate::load_patterns_from_toml_str(&toml).unwrap();
        assert_eq!(round_trip.patterns.len(), 1);
        assert_eq!(round_trip.patterns[0].name, "adder");

        let _ = std::fs::remove_dir_all(dir);
    }
}
