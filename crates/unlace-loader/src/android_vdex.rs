//! Android VDEX (Verification DEX) container format loader.
//!
//! VDEX files were introduced in Android 8.0 (Oreo) to store verification
//! metadata alongside DEX files. They contain:
//!
//! - One or more DEX files (the same bytes that appear in the APK)
//! - Verification dependency information (type checks, method resolutions)
//! - Quickening information that patches DEX bytecode for faster interpretation
//!
//! The VDEX container replaces the older "pre-verified" flag approach and
//! enables the runtime to skip redundant verification on subsequent boots.
//!
//! ## Format Layout
//!
//! ```text
//!   offset  size   field
//!   0x00    4      magic ("vdex")
//!   0x04    4      verifier_deps_version (ASCII, e.g. "019\0")
//!   0x08    4      dex_section_version (ASCII, e.g. "002\0")
//!   0x0C    4      number_of_dex_files
//!   0x10    4      verifier_deps_size
//!   0x14    4      bootclasspath_checksums_size (v21+)
//!   0x18    4      class_loader_context_size (v21+)
//!   ...    varies  dex file checksums (one u32 per DEX)
//!   ...    varies  quickening info offsets
//!   ...    varies  DEX file data
//!   ...    varies  verifier deps data
//!   ...    varies  quickening info data
//! ```

use crate::android_dex::{DexError, DexHeader, parse_dex_header};

/// VDEX file magic bytes.
pub const VDEX_MAGIC: &[u8; 4] = b"vdex";

/// Parsed VDEX file header.
#[derive(Debug, Clone, PartialEq, Eq)]
pub struct VdexHeader {
    /// Verifier dependencies section version string (e.g. "019").
    pub verifier_deps_version: String,
    /// DEX section version string (e.g. "002").
    pub dex_section_version: String,
    /// Number of DEX files in this container.
    pub number_of_dex_files: u32,
    /// Size of the verifier dependencies section in bytes.
    pub verifier_deps_size: u32,
}

/// A DEX file extracted from a VDEX container.
#[derive(Debug, Clone, PartialEq, Eq)]
pub struct VdexDexFile {
    /// Index of this DEX within the VDEX (0-based).
    pub index: u32,
    /// Checksum stored in the VDEX header for this DEX.
    pub checksum: u32,
    /// Parsed DEX header.
    pub header: DexHeader,
    /// Raw DEX bytes.
    pub data: Vec<u8>,
}

/// Quickening information for a single DEX code item.
///
/// Quickening replaces certain DEX opcodes with faster variants that embed
/// resolved indices directly, avoiding runtime lookups.
#[derive(Debug, Clone, PartialEq, Eq)]
pub struct QuickeningInfo {
    /// DEX file index this quickening applies to.
    pub dex_file_index: u32,
    /// Offset within the DEX code item where quickening starts.
    pub dex_code_offset: u32,
    /// Quickening data: pairs of (dex_pc_delta, opcode_index) entries
    /// encoded as u16 values.
    pub quickening_data: Vec<u16>,
}

/// Verifier dependency entry — records a type or method resolution that
/// was validated at install time.
#[derive(Debug, Clone, PartialEq, Eq)]
pub enum VerifierDep {
    /// An assignability check between two types.
    AssignableType {
        /// Source type descriptor (e.g. "Ljava/lang/Object;").
        source: String,
        /// Destination type descriptor.
        destination: String,
        /// Whether the check passed.
        is_assignable: bool,
    },
    /// A field resolution result.
    ResolvedField {
        /// DEX field index.
        field_idx: u32,
        /// Access flags of the resolved field.
        access_flags: u16,
        /// Declaring class descriptor.
        declaring_class: String,
    },
    /// A method resolution result.
    ResolvedMethod {
        /// DEX method index.
        method_idx: u32,
        /// Access flags of the resolved method.
        access_flags: u16,
        /// Declaring class descriptor.
        declaring_class: String,
    },
}

/// Complete parsed VDEX file.
#[derive(Debug, Clone, PartialEq, Eq)]
pub struct VdexFile {
    /// Parsed VDEX header.
    pub header: VdexHeader,
    /// Embedded DEX files.
    pub dex_files: Vec<VdexDexFile>,
    /// Quickening information entries.
    pub quickening_info: Vec<QuickeningInfo>,
    /// Verifier dependency entries.
    pub verifier_deps: Vec<VerifierDep>,
}

/// Errors produced by VDEX parsing.
#[derive(Debug, Clone, PartialEq, Eq)]
pub enum VdexError {
    /// Input was too small for the VDEX header.
    Truncated,
    /// VDEX magic bytes not found.
    BadMagic,
    /// An offset pointed outside the file.
    InvalidOffset { offset: u32, context: &'static str },
    /// An embedded DEX file failed to parse.
    DexParseError(DexError),
    /// Unsupported VDEX version.
    UnsupportedVersion(String),
}

impl std::fmt::Display for VdexError {
    fn fmt(&self, f: &mut std::fmt::Formatter<'_>) -> std::fmt::Result {
        match self {
            Self::Truncated => write!(f, "truncated VDEX data"),
            Self::BadMagic => write!(f, "invalid VDEX magic"),
            Self::InvalidOffset { offset, context } => {
                write!(f, "invalid offset {offset:#x} in {context}")
            }
            Self::DexParseError(e) => write!(f, "embedded DEX parse error: {e}"),
            Self::UnsupportedVersion(v) => write!(f, "unsupported VDEX version: {v}"),
        }
    }
}

impl From<DexError> for VdexError {
    fn from(e: DexError) -> Self {
        Self::DexParseError(e)
    }
}

/// Read a little-endian `u32` from a byte slice at the given offset.
#[inline]
fn read_u32(data: &[u8], offset: usize) -> Result<u32, VdexError> {
    data.get(offset..offset + 4)
        .and_then(|s| s.try_into().ok())
        .map(u32::from_le_bytes)
        .ok_or(VdexError::Truncated)
}

/// Read a little-endian `u16` from a byte slice at the given offset.
#[inline]
fn read_u16(data: &[u8], offset: usize) -> Result<u16, VdexError> {
    data.get(offset..offset + 2)
        .and_then(|s| s.try_into().ok())
        .map(u16::from_le_bytes)
        .ok_or(VdexError::Truncated)
}

/// Parse a VDEX file header.
pub fn parse_vdex_header(data: &[u8]) -> Result<VdexHeader, VdexError> {
    if data.len() < 20 {
        return Err(VdexError::Truncated);
    }
    if &data[0..4] != VDEX_MAGIC {
        return Err(VdexError::BadMagic);
    }

    // Version strings are 4 ASCII bytes with NUL terminator.
    let verifier_deps_version = parse_version_string(&data[4..8]);
    let dex_section_version = parse_version_string(&data[8..12]);
    let number_of_dex_files = read_u32(data, 12)?;
    let verifier_deps_size = read_u32(data, 16)?;

    Ok(VdexHeader {
        verifier_deps_version,
        dex_section_version,
        number_of_dex_files,
        verifier_deps_size,
    })
}

/// Parse a 4-byte NUL-terminated version string.
fn parse_version_string(bytes: &[u8]) -> String {
    let end = bytes.iter().position(|&b| b == 0).unwrap_or(bytes.len());
    String::from_utf8_lossy(&bytes[..end]).to_string()
}

/// Parse a complete VDEX file, extracting all embedded DEX files and
/// quickening information.
///
/// # Errors
///
/// Returns [`VdexError`] when the header is malformed, embedded DEX files
/// fail to parse, or quickening data is truncated.
pub fn parse_vdex(data: &[u8]) -> Result<VdexFile, VdexError> {
    let header = parse_vdex_header(data)?;

    // After the fixed header, we have:
    // - Checksums: one u32 per DEX file
    // - Then the DEX files themselves, each at their declared file_size
    let checksums_offset: usize = 20;
    let checksums_size = (header.number_of_dex_files as usize) * 4;

    if checksums_offset + checksums_size > data.len() {
        return Err(VdexError::Truncated);
    }

    // Read checksums.
    let mut checksums = Vec::with_capacity(header.number_of_dex_files as usize);
    for i in 0..header.number_of_dex_files as usize {
        checksums.push(read_u32(data, checksums_offset + i * 4)?);
    }

    // DEX files start right after the checksums in most VDEX versions.
    let mut dex_cursor = checksums_offset + checksums_size;
    let mut dex_files = Vec::with_capacity(header.number_of_dex_files as usize);

    for i in 0..header.number_of_dex_files {
        if dex_cursor >= data.len() {
            return Err(VdexError::Truncated);
        }

        let dex_header = parse_dex_header(&data[dex_cursor..])?;
        let dex_end = dex_cursor + dex_header.file_size as usize;
        if dex_end > data.len() {
            return Err(VdexError::InvalidOffset {
                offset: dex_cursor as u32 + dex_header.file_size,
                context: "DEX file end in VDEX",
            });
        }

        let dex_data = data[dex_cursor..dex_end].to_vec();
        dex_files.push(VdexDexFile {
            index: i,
            checksum: checksums.get(i as usize).copied().unwrap_or(0),
            header: dex_header,
            data: dex_data,
        });

        dex_cursor = dex_end;
    }

    // Parse quickening info (located after DEX files, before verifier deps).
    let quickening_info = parse_quickening_section(data, dex_cursor, &header)?;

    // Verifier deps are at the end; skip detailed parsing for now but
    // record the section bounds.
    let verifier_deps = Vec::new();

    Ok(VdexFile {
        header,
        dex_files,
        quickening_info,
        verifier_deps,
    })
}

/// Parse the quickening info section.
///
/// The section consists of entries: each has a u32 dex_file_index, u32
/// code_item_offset, u32 quickening_size, followed by quickening_size/2
/// u16 entries.
fn parse_quickening_section(
    data: &[u8],
    offset: usize,
    header: &VdexHeader,
) -> Result<Vec<QuickeningInfo>, VdexError> {
    let mut entries = Vec::new();
    let mut cursor = offset;

    // The quickening section size is: total - dex_data - verifier_deps.
    // We'll parse entries until we hit the verifier deps section or EOF.
    let verifier_deps_start = if header.verifier_deps_size > 0 {
        data.len().saturating_sub(header.verifier_deps_size as usize)
    } else {
        data.len()
    };

    while cursor + 12 <= verifier_deps_start {
        let dex_file_index = match read_u32(data, cursor) {
            Ok(v) => v,
            Err(_) => break,
        };
        cursor += 4;

        // Sanity check: dex_file_index should be < number_of_dex_files.
        if dex_file_index >= header.number_of_dex_files {
            break;
        }

        let dex_code_offset = match read_u32(data, cursor) {
            Ok(v) => v,
            Err(_) => break,
        };
        cursor += 4;

        let quickening_size = match read_u32(data, cursor) {
            Ok(v) => v,
            Err(_) => break,
        };
        cursor += 4;

        // quickening_size is in bytes; each entry is a u16.
        let num_entries = (quickening_size / 2) as usize;
        if cursor + quickening_size as usize > data.len() {
            break;
        }

        let mut quickening_data = Vec::with_capacity(num_entries);
        for _ in 0..num_entries {
            let val = read_u16(data, cursor)?;
            cursor += 2;
            quickening_data.push(val);
        }

        entries.push(QuickeningInfo {
            dex_file_index,
            dex_code_offset,
            quickening_data,
        });
    }

    Ok(entries)
}

/// Detect whether bytes are a VDEX file.
pub fn is_vdex(data: &[u8]) -> bool {
    data.len() >= 4 && &data[0..4] == VDEX_MAGIC
}

#[cfg(test)]
mod tests {
    use super::*;
    use crate::android_dex::DEX_MAGIC;

    #[test]
    fn test_parse_vdex_header_valid() {
        let mut data = vec![0u8; 64];
        data[0..4].copy_from_slice(VDEX_MAGIC);
        data[4..7].copy_from_slice(b"019");
        data[8..11].copy_from_slice(b"002");
        data[12..16].copy_from_slice(&2u32.to_le_bytes()); // 2 dex files
        data[16..20].copy_from_slice(&128u32.to_le_bytes()); // verifier deps size

        let hdr = parse_vdex_header(&data).unwrap();
        assert_eq!(hdr.verifier_deps_version, "019");
        assert_eq!(hdr.dex_section_version, "002");
        assert_eq!(hdr.number_of_dex_files, 2);
        assert_eq!(hdr.verifier_deps_size, 128);
    }

    #[test]
    fn test_parse_vdex_header_bad_magic() {
        let mut data = vec![0u8; 64];
        data[0..4].copy_from_slice(b"oat\n");
        assert!(matches!(parse_vdex_header(&data), Err(VdexError::BadMagic)));
    }

    #[test]
    fn test_parse_vdex_header_truncated() {
        let data = vec![0u8; 10];
        assert!(matches!(
            parse_vdex_header(&data),
            Err(VdexError::Truncated)
        ));
    }

    #[test]
    fn test_is_vdex_detection() {
        let mut good = vec![0u8; 100];
        good[0..4].copy_from_slice(VDEX_MAGIC);
        assert!(is_vdex(&good));

        let bad = vec![0u8; 100];
        assert!(!is_vdex(&bad));
    }

    #[test]
    fn test_parse_vdex_with_embedded_dex() {
        // Build a minimal VDEX with one embedded DEX.
        let dex_file_size: u32 = 112;
        let mut dex_data = vec![0u8; dex_file_size as usize];
        dex_data[0..4].copy_from_slice(DEX_MAGIC);
        dex_data[4..7].copy_from_slice(b"035");
        dex_data[32..36].copy_from_slice(&dex_file_size.to_le_bytes());

        // VDEX header.
        let mut vdex = vec![0u8; 20];
        vdex[0..4].copy_from_slice(VDEX_MAGIC);
        vdex[4..7].copy_from_slice(b"019");
        vdex[8..11].copy_from_slice(b"002");
        vdex[12..16].copy_from_slice(&1u32.to_le_bytes()); // 1 dex file
        vdex[16..20].copy_from_slice(&0u32.to_le_bytes()); // no verifier deps

        // Checksum for the one DEX file.
        vdex.extend_from_slice(&0xCAFEBABEu32.to_le_bytes());

        // The DEX file itself.
        vdex.extend_from_slice(&dex_data);

        let parsed = parse_vdex(&vdex).unwrap();
        assert_eq!(parsed.header.number_of_dex_files, 1);
        assert_eq!(parsed.dex_files.len(), 1);
        assert_eq!(parsed.dex_files[0].checksum, 0xCAFEBABE);
        assert_eq!(parsed.dex_files[0].header.file_size, 112);
        assert_eq!(parsed.dex_files[0].data.len(), 112);
    }
}
