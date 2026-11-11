//! FLIRT-like signature generation from static library archives.
//!
//! This is intentionally a small, text-first generator rather than a full
//! IDA `.sig` clone. It consumes a compiled `.a` archive, extracts text
//! symbols from each object member, wildcards relocated bytes, and emits the
//! same TOML pattern schema understood by `unlace-flirt` and easy to review in
//! diffs.

use std::collections::BTreeSet;
use std::fmt::Write as _;
use std::path::Path;

use object::read::archive::ArchiveFile;
use object::{Object, ObjectSection, ObjectSymbol, RelocationTarget, SymbolKind};
use thiserror::Error;

use super::crc16_ccitt;

/// Errors returned while generating FLIRT patterns from an archive.
#[derive(Debug, Error)]
pub enum SigGenerateError {
    /// The archive file could not be read from disk.
    #[error("failed to read archive: {0}")]
    Io(#[from] std::io::Error),
    /// The archive or one of its object members could not be parsed.
    #[error("failed to parse object/archive: {0}")]
    Object(#[from] object::Error),
}

/// Tunables for signature generation.
#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub struct SigGenerateOptions {
    /// Number of leading function bytes to place in the pattern.
    pub pattern_len: usize,
    /// Maximum number of bytes after the leading pattern to include in the
    /// CRC16 disambiguator.
    pub crc_len: usize,
    /// Skip text symbols shorter than this many bytes.
    pub min_function_len: usize,
}

impl Default for SigGenerateOptions {
    fn default() -> Self {
        Self {
            pattern_len: 32,
            crc_len: 32,
            min_function_len: 1,
        }
    }
}

/// A generated FLIRT pattern for one archive member symbol.
#[derive(Debug, Clone, PartialEq, Eq)]
pub struct GeneratedSigPattern {
    /// Symbol name to assign when matched.
    pub name: String,
    /// Archive member from which this symbol was extracted.
    pub member: String,
    /// Leading pattern bytes. Bytes at wildcarded positions are zeroed.
    pub bytes: Vec<u8>,
    /// Per-byte mask (`0xff` = exact, `0x00` = wildcard).
    pub mask: Vec<u8>,
    /// Original symbol size.
    pub length: u32,
    /// Offset of the CRC region from function start, if any.
    pub crc_offset: u32,
    /// Length of the CRC region, if any.
    pub crc_length: u32,
    /// CRC16/CCITT-FALSE over the CRC region, if any.
    pub crc16: Option<u16>,
}

/// Generate FLIRT patterns from a compiled static archive (`.a`).
pub fn generate_archive_patterns(
    path: &Path,
    options: SigGenerateOptions,
) -> Result<Vec<GeneratedSigPattern>, SigGenerateError> {
    let data = std::fs::read(path)?;
    generate_archive_patterns_from_bytes(&data, options)
}

/// Generate FLIRT patterns from in-memory archive bytes.
pub fn generate_archive_patterns_from_bytes(
    archive_bytes: &[u8],
    options: SigGenerateOptions,
) -> Result<Vec<GeneratedSigPattern>, SigGenerateError> {
    let archive = ArchiveFile::parse(archive_bytes)?;
    let mut patterns = Vec::new();

    for member in archive.members() {
        let member = member?;
        let member_name = String::from_utf8_lossy(member.name()).to_string();
        let member_data = member.data(archive_bytes)?;
        if member_data.is_empty() {
            // Thin archives keep object data outside the archive. The object
            // crate intentionally returns an empty slice here; skip rather than
            // inventing filesystem-relative semantics in a library helper.
            continue;
        }

        let object = object::File::parse(member_data)?;
        collect_object_patterns(&object, &member_name, options, &mut patterns)?;
    }

    patterns.sort_by(|a, b| a.name.cmp(&b.name).then(a.member.cmp(&b.member)));
    Ok(patterns)
}

fn collect_object_patterns<'data>(
    object: &object::File<'data>,
    member_name: &str,
    options: SigGenerateOptions,
    out: &mut Vec<GeneratedSigPattern>,
) -> Result<(), SigGenerateError> {
    let mut seen = BTreeSet::new();

    for sym in object.symbols() {
        if sym.kind() != SymbolKind::Text || sym.is_undefined() || sym.size() == 0 {
            continue;
        }
        let name = match sym.name() {
            Ok(name) if !name.is_empty() => name,
            _ => continue,
        };
        let Some(section_index) = sym.section_index() else {
            continue;
        };
        let section = object.section_by_index(section_index)?;
        let section_data = section.data()?;
        let section_addr = section.address();
        let sym_addr = sym.address();
        if sym_addr < section_addr {
            continue;
        }
        let start = (sym_addr - section_addr) as usize;
        let size = sym.size() as usize;
        let Some(end) = start.checked_add(size) else {
            continue;
        };
        if end > section_data.len() || size < options.min_function_len {
            continue;
        }
        if !seen.insert((name.to_string(), start, size)) {
            continue;
        }

        let func = &section_data[start..end];
        if let Some(pattern) = build_pattern(name, member_name, func, &section, start, options) {
            out.push(pattern);
        }
    }

    Ok(())
}

fn build_pattern<'data, S>(
    name: &str,
    member_name: &str,
    func: &[u8],
    section: &S,
    section_start: usize,
    options: SigGenerateOptions,
) -> Option<GeneratedSigPattern>
where
    S: ObjectSection<'data>,
{
    let pattern_len = options.pattern_len.min(func.len());
    if pattern_len == 0 {
        return None;
    }

    let mut bytes = func[..pattern_len].to_vec();
    let mut mask = vec![0xff; pattern_len];

    for (reloc_off, reloc) in section.relocations() {
        let Ok(reloc_off) = usize::try_from(reloc_off) else {
            continue;
        };
        if reloc_off < section_start || reloc_off >= section_start + func.len() {
            continue;
        }
        // Relocations against symbols or sections encode addresses/addends
        // that drift between builds; wildcard the encoded field.
        if !matches!(
            reloc.target(),
            RelocationTarget::Symbol(_) | RelocationTarget::Section(_)
        ) {
            continue;
        }
        let rel_start = reloc_off - section_start;
        if rel_start >= pattern_len {
            continue;
        }
        let rel_size = usize::from(reloc.size()).div_ceil(8).max(1);
        let rel_end = (rel_start + rel_size).min(pattern_len);
        for i in rel_start..rel_end {
            bytes[i] = 0;
            mask[i] = 0x00;
        }
    }

    let crc_offset = pattern_len;
    let crc_window_len = options.crc_len.min(func.len().saturating_sub(crc_offset));
    let (crc16, crc_offset, crc_length) = if crc_window_len > 0 {
        (
            Some(crc16_ccitt(&func[crc_offset..crc_offset + crc_window_len])),
            crc_offset as u32,
            crc_window_len as u32,
        )
    } else {
        (None, 0, 0)
    };

    Some(GeneratedSigPattern {
        name: name.to_string(),
        member: member_name.to_string(),
        bytes,
        mask,
        length: func.len().min(u32::MAX as usize) as u32,
        crc_offset,
        crc_length,
        crc16,
    })
}

/// Render generated patterns as TOML accepted by `unlace-flirt`.
pub fn render_patterns_toml(patterns: &[GeneratedSigPattern]) -> String {
    let mut out = String::new();
    out.push_str("# Generated by unlace siggen from a compiled archive.\n");
    out.push_str("# Relocated bytes in the leading pattern are wildcarded via mask.\n\n");
    for pattern in patterns {
        out.push_str("[[pattern]]\n");
        write_toml_string(&mut out, "name", &pattern.name);
        write_toml_string(&mut out, "member", &pattern.member);
        let _ = writeln!(out, "bytes = \"{}\"", hex(&pattern.bytes));
        let _ = writeln!(out, "mask = \"{}\"", hex(&pattern.mask));
        let _ = writeln!(out, "length = {}", pattern.length);
        if let Some(crc) = pattern.crc16 {
            let _ = writeln!(out, "crc16 = 0x{crc:04x}");
            let _ = writeln!(out, "crc_offset = {}", pattern.crc_offset);
            let _ = writeln!(out, "crc_length = {}", pattern.crc_length);
        }
        out.push('\n');
    }
    out
}

fn write_toml_string(out: &mut String, key: &str, value: &str) {
    let _ = write!(out, "{key} = \"");
    for ch in value.chars() {
        match ch {
            '\\' => out.push_str("\\\\"),
            '"' => out.push_str("\\\""),
            '\n' => out.push_str("\\n"),
            '\r' => out.push_str("\\r"),
            '\t' => out.push_str("\\t"),
            c => out.push(c),
        }
    }
    out.push_str("\"\n");
}

fn hex(bytes: &[u8]) -> String {
    let mut s = String::with_capacity(bytes.len() * 2);
    for b in bytes {
        let _ = write!(s, "{b:02x}");
    }
    s
}

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn render_toml_includes_crc_and_mask() {
        let pattern = GeneratedSigPattern {
            name: "foo".into(),
            member: "foo.o".into(),
            bytes: vec![0x55, 0x00, 0x90],
            mask: vec![0xff, 0x00, 0xff],
            length: 12,
            crc_offset: 3,
            crc_length: 4,
            crc16: Some(0xabcd),
        };
        let toml = render_patterns_toml(&[pattern]);
        assert!(toml.contains("name = \"foo\""));
        assert!(toml.contains("member = \"foo.o\""));
        assert!(toml.contains("bytes = \"550090\""));
        assert!(toml.contains("mask = \"ff00ff\""));
        assert!(toml.contains("crc16 = 0xabcd"));
    }
}
