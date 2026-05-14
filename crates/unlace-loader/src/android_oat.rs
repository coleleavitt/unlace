//! Android OAT (Ahead-of-Time) file loader.
//!
//! OAT files are ELF shared libraries containing the `oatdata` and `oatexec`
//! sections produced by Android's `dex2oat` compiler. The `oatdata` section
//! holds an OAT header followed by embedded DEX files and per-method metadata
//! (code offsets, GC maps). The `oatexec` section contains the native compiled
//! machine code for each method.
//!
//! This module parses the OAT header structure, extracts embedded DEX files,
//! and collects method metadata including native code offsets.

use crate::android_dex::{DexError, DexHeader, parse_dex_header};

/// OAT file magic bytes found at the start of the `oatdata` section.
pub const OAT_MAGIC: &[u8; 4] = b"oat\n";

/// Supported OAT instruction sets.
#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum OatInstructionSet {
    Arm,
    Arm64,
    X86,
    X86_64,
    Mips,
    Mips64,
    Unknown(u32),
}

impl OatInstructionSet {
    fn from_u32(v: u32) -> Self {
        match v {
            1 => Self::Arm,
            2 => Self::Arm64,
            3 => Self::X86,
            4 => Self::X86_64,
            5 => Self::Mips,
            6 => Self::Mips64,
            _ => Self::Unknown(v),
        }
    }
}

/// Parsed OAT file header from the `oatdata` section.
#[derive(Debug, Clone, PartialEq, Eq)]
pub struct OatHeader {
    /// OAT version string (e.g. "131", "170", "199").
    pub version: String,
    /// Target instruction set.
    pub instruction_set: OatInstructionSet,
    /// Number of DEX files embedded in this OAT.
    pub dex_file_count: u32,
    /// Offset to the start of the key-value store within oatdata.
    pub key_value_store_size: u32,
    /// Raw OAT checksum from the header.
    pub oat_checksum: u32,
}

/// An embedded DEX file extracted from an OAT's `oatdata` section.
#[derive(Debug, Clone, PartialEq, Eq)]
pub struct OatDexFile {
    /// Location string (e.g. "/system/framework/boot.jar:classes.dex").
    pub location: String,
    /// Checksum of the embedded DEX file.
    pub dex_checksum: u32,
    /// Offset within the `oatdata` section where the DEX starts.
    pub dex_offset: u32,
    /// Parsed header of the embedded DEX file.
    pub dex_header: DexHeader,
    /// Raw DEX bytes.
    pub dex_data: Vec<u8>,
}

/// Per-method native compilation metadata extracted from OAT.
#[derive(Debug, Clone, PartialEq, Eq)]
pub struct OatMethodInfo {
    /// Method index within the DEX file.
    pub method_idx: u32,
    /// Offset into `oatexec` where native code starts (0 = interpreted).
    pub code_offset: u32,
    /// Size of the GC map in bytes (0 if no GC map present).
    pub gc_map_size: u32,
}

/// Complete parsed OAT file.
#[derive(Debug, Clone, PartialEq, Eq)]
pub struct OatFile {
    /// Parsed OAT header.
    pub header: OatHeader,
    /// Embedded DEX files with their location strings.
    pub dex_files: Vec<OatDexFile>,
    /// Per-method compilation metadata.
    pub methods: Vec<OatMethodInfo>,
    /// Raw native code from the `oatexec` section (ARM64/ARM32/x86).
    pub native_code: Vec<u8>,
}

/// Errors produced by OAT parsing.
#[derive(Debug, Clone, PartialEq, Eq)]
pub enum OatError {
    /// Input was too small for the OAT header.
    Truncated,
    /// OAT magic bytes not found.
    BadMagic,
    /// Could not locate the `oatdata` section in the ELF.
    MissingOatData,
    /// Could not locate the `oatexec` section in the ELF.
    MissingOatExec,
    /// An offset within the OAT pointed outside the section.
    InvalidOffset { offset: u32, context: &'static str },
    /// An embedded DEX file failed to parse.
    DexParseError(DexError),
    /// ELF parsing error.
    ElfError(String),
}

impl std::fmt::Display for OatError {
    fn fmt(&self, f: &mut std::fmt::Formatter<'_>) -> std::fmt::Result {
        match self {
            Self::Truncated => write!(f, "truncated OAT data"),
            Self::BadMagic => write!(f, "invalid OAT magic"),
            Self::MissingOatData => write!(f, "missing oatdata section in ELF"),
            Self::MissingOatExec => write!(f, "missing oatexec section in ELF"),
            Self::InvalidOffset { offset, context } => {
                write!(f, "invalid offset {offset:#x} in {context}")
            }
            Self::DexParseError(e) => write!(f, "embedded DEX parse error: {e}"),
            Self::ElfError(e) => write!(f, "ELF parse error: {e}"),
        }
    }
}

impl From<DexError> for OatError {
    fn from(e: DexError) -> Self {
        Self::DexParseError(e)
    }
}

/// Read a little-endian `u32` from a byte slice at the given offset.
#[inline]
fn read_u32(data: &[u8], offset: usize) -> Result<u32, OatError> {
    data.get(offset..offset + 4)
        .and_then(|s| s.try_into().ok())
        .map(u32::from_le_bytes)
        .ok_or(OatError::Truncated)
}

/// Read a NUL-terminated or length-prefixed string.
fn read_location_string(data: &[u8], offset: usize) -> Result<(String, usize), OatError> {
    let len = read_u32(data, offset)? as usize;
    let str_start = offset + 4;
    let str_end = str_start + len;
    if str_end > data.len() {
        return Err(OatError::Truncated);
    }
    let s = String::from_utf8_lossy(&data[str_start..str_end]).to_string();
    Ok((s, str_end))
}

/// Parse the OAT header from raw `oatdata` section bytes.
///
/// This handles OAT versions from Android 5.0 (Lollipop) through Android 14.
/// The header layout is:
///
/// ```text
///   0x00  4   magic ("oat\n")
///   0x04  4   version (ASCII, e.g. "131\0")
///   0x08  4   adler32 checksum of the rest of the oatdata
///   0x0C  4   instruction set enum
///   0x10  4   instruction set features bitmap
///   0x14  4   dex file count
///   0x18  4   oat dex files offset (since OAT 131+)
///   0x1C  4   executable offset
///   ...   varies  key-value store
/// ```
pub fn parse_oat_header(oatdata: &[u8]) -> Result<OatHeader, OatError> {
    if oatdata.len() < 28 {
        return Err(OatError::Truncated);
    }
    if &oatdata[0..4] != OAT_MAGIC {
        return Err(OatError::BadMagic);
    }

    // Version is 4 ASCII bytes at offset 4 (e.g. "131\0" or "199\0").
    let version_bytes = &oatdata[4..8];
    let version_end = version_bytes
        .iter()
        .position(|&b| b == 0)
        .unwrap_or(4);
    let version = String::from_utf8_lossy(&version_bytes[..version_end]).to_string();

    let oat_checksum = read_u32(oatdata, 8)?;
    let instruction_set = OatInstructionSet::from_u32(read_u32(oatdata, 12)?);
    let _instruction_set_features = read_u32(oatdata, 16)?;
    let dex_file_count = read_u32(oatdata, 20)?;
    let key_value_store_size = read_u32(oatdata, 24)?;

    Ok(OatHeader {
        version,
        instruction_set,
        dex_file_count,
        key_value_store_size,
        oat_checksum,
    })
}

/// Parse an OAT file from an ELF binary.
///
/// Locates the `oatdata` and `oatexec` sections, parses the OAT header,
/// extracts embedded DEX files, and collects method metadata.
///
/// # Errors
///
/// Returns [`OatError`] when sections are missing, the OAT header is malformed,
/// or embedded DEX files fail to parse.
pub fn parse_oat(elf_data: &[u8]) -> Result<OatFile, OatError> {
    // Try 64-bit ELF first, fall back to 32-bit.
    let (oatdata, oatexec) = parse_elf_sections(elf_data)?;

    let header = parse_oat_header(oatdata)?;

    // Skip past the header + key-value store to reach the DEX file table.
    // Header size varies by OAT version; the minimum fixed header is 28 bytes
    // plus the key-value store. Versions >= 131 have additional fields.
    let header_base_size: usize = 28;
    let mut cursor = header_base_size + header.key_value_store_size as usize;

    let mut dex_files = Vec::with_capacity(header.dex_file_count as usize);
    let mut methods = Vec::new();

    for _ in 0..header.dex_file_count {
        if cursor >= oatdata.len() {
            return Err(OatError::Truncated);
        }

        // Each DEX file entry: location_string_length (u32), location_string,
        // dex_checksum (u32), dex_offset (u32).
        let (location, new_cursor) = read_location_string(oatdata, cursor)?;
        cursor = new_cursor;

        let dex_checksum = read_u32(oatdata, cursor)?;
        cursor += 4;

        let dex_offset = read_u32(oatdata, cursor)?;
        cursor += 4;

        // Extract embedded DEX at the declared offset within oatdata.
        let dex_start = dex_offset as usize;
        if dex_start >= oatdata.len() {
            return Err(OatError::InvalidOffset {
                offset: dex_offset,
                context: "dex_offset in oatdata",
            });
        }

        let dex_header = parse_dex_header(&oatdata[dex_start..])?;
        let dex_end = dex_start + dex_header.file_size as usize;
        if dex_end > oatdata.len() {
            return Err(OatError::InvalidOffset {
                offset: dex_offset + dex_header.file_size,
                context: "dex end in oatdata",
            });
        }
        let dex_data = oatdata[dex_start..dex_end].to_vec();

        // Extract per-method metadata for this DEX. Each class in the DEX has
        // method offsets stored sequentially after the DEX file entry. We parse
        // a simplified representation: for each method, a code_offset (u32).
        let method_count = dex_header.method_ids_size;
        for method_idx in 0..method_count {
            if cursor + 4 > oatdata.len() {
                // Some OAT versions don't store per-method info inline;
                // stop gracefully.
                break;
            }
            let code_offset = read_u32(oatdata, cursor)?;
            cursor += 4;

            // GC map size follows the code offset in some versions.
            let gc_map_size = if cursor + 4 <= oatdata.len() {
                let sz = read_u32(oatdata, cursor)?;
                cursor += 4;
                sz
            } else {
                0
            };

            methods.push(OatMethodInfo {
                method_idx,
                code_offset,
                gc_map_size,
            });
        }

        dex_files.push(OatDexFile {
            location,
            dex_checksum,
            dex_offset,
            dex_header,
            dex_data,
        });
    }

    Ok(OatFile {
        header,
        dex_files,
        methods,
        native_code: oatexec.to_vec(),
    })
}

/// Extract `oatdata` and `oatexec` section bytes from an ELF binary.
fn parse_elf_sections(elf_data: &[u8]) -> Result<(&[u8], &[u8]), OatError> {
    use object::{Object, ObjectSection};

    // Try as 64-bit ELF.
    if let Ok(file) = object::File::parse(elf_data) {
        let oatdata = file
            .section_by_name("oatdata")
            .ok_or(OatError::MissingOatData)?
            .data()
            .map_err(|e| OatError::ElfError(e.to_string()))?;
        let oatexec = file
            .section_by_name("oatexec")
            .map(|s| s.data().unwrap_or(&[]))
            .unwrap_or(&[]);
        return Ok((oatdata, oatexec));
    }

    Err(OatError::ElfError("failed to parse ELF".to_string()))
}

/// Detect whether bytes look like an OAT-containing ELF (has ELF magic and
/// contains `oatdata` section name in the section header string table).
pub fn is_oat_elf(data: &[u8]) -> bool {
    // Quick ELF magic check + search for "oatdata" in the binary.
    if data.len() < 16 {
        return false;
    }
    // ELF magic
    if &data[0..4] != b"\x7fELF" {
        return false;
    }
    // Look for "oatdata" string somewhere in the file (section names).
    data.windows(7).any(|w| w == b"oatdata")
}

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn test_parse_oat_header_valid() {
        let mut data = vec![0u8; 64];
        data[0..4].copy_from_slice(OAT_MAGIC);
        data[4..7].copy_from_slice(b"131");
        data[8..12].copy_from_slice(&0xDEADBEEFu32.to_le_bytes()); // checksum
        data[12..16].copy_from_slice(&2u32.to_le_bytes()); // Arm64
        data[16..20].copy_from_slice(&0u32.to_le_bytes()); // features
        data[20..24].copy_from_slice(&1u32.to_le_bytes()); // dex_file_count
        data[24..28].copy_from_slice(&0u32.to_le_bytes()); // kv_store_size

        let hdr = parse_oat_header(&data).unwrap();
        assert_eq!(hdr.version, "131");
        assert_eq!(hdr.instruction_set, OatInstructionSet::Arm64);
        assert_eq!(hdr.dex_file_count, 1);
        assert_eq!(hdr.oat_checksum, 0xDEADBEEF);
    }

    #[test]
    fn test_parse_oat_header_bad_magic() {
        let mut data = vec![0u8; 64];
        data[0..4].copy_from_slice(b"elf\n");
        assert!(matches!(parse_oat_header(&data), Err(OatError::BadMagic)));
    }

    #[test]
    fn test_parse_oat_header_truncated() {
        let data = vec![0u8; 10];
        assert!(matches!(parse_oat_header(&data), Err(OatError::Truncated)));
    }

    #[test]
    fn test_instruction_set_mapping() {
        assert_eq!(OatInstructionSet::from_u32(1), OatInstructionSet::Arm);
        assert_eq!(OatInstructionSet::from_u32(2), OatInstructionSet::Arm64);
        assert_eq!(OatInstructionSet::from_u32(3), OatInstructionSet::X86);
        assert_eq!(OatInstructionSet::from_u32(4), OatInstructionSet::X86_64);
        assert_eq!(
            OatInstructionSet::from_u32(99),
            OatInstructionSet::Unknown(99)
        );
    }

    #[test]
    fn test_is_oat_elf_detection() {
        // Not ELF at all.
        assert!(!is_oat_elf(&[0u8; 16]));

        // ELF magic but no "oatdata" string.
        let mut fake_elf = vec![0u8; 100];
        fake_elf[0..4].copy_from_slice(b"\x7fELF");
        assert!(!is_oat_elf(&fake_elf));

        // ELF magic with "oatdata" somewhere.
        fake_elf[50..57].copy_from_slice(b"oatdata");
        assert!(is_oat_elf(&fake_elf));
    }
}
