//! FLIRT-style signature generation from compiled static libraries.
//!
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
