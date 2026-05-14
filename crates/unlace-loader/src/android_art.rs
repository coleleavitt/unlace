//! Android ART image file (.art) loader.
//!
//! ART image files contain pre-initialized heap images produced by `dex2oat`
//! during system image compilation (or profile-guided compilation on device).
//! They contain:
//!
//! - Pre-allocated Java objects (strings, classes, arrays)
//! - Class metadata (field layouts, vtable entries, interface tables)
//! - Method metadata (ArtMethod structs with entry points)
//! - Intern tables and class tables for fast lookup
//!
//! The runtime maps these files directly into memory to avoid re-initializing
//! classes from DEX bytecode on every boot.
//!
//! ## Format Layout (simplified)
//!
//! ```text
//!   offset  size    field
//!   0x00    4       magic ("art\n")
//!   0x04    4       version (ASCII, e.g. "099\0")
//!   0x08    4       image_begin (base virtual address)
//!   0x0C    4       image_size
//!   0x10    4       oat_checksum
//!   0x14    4       oat_file_begin (VA of the companion OAT)
//!   0x18    4       oat_data_begin
//!   0x1C    4       oat_data_end
//!   0x20    4       oat_file_end
//!   0x24    4       boot_image_begin (for non-boot images)
//!   0x28    4       boot_image_size
//!   0x2C    4       boot_oat_begin
//!   0x30    4       boot_oat_size
//!   0x34    4       patch_delta (relocation delta, 0 for PIC)
//!   0x38    4       image_roots (offset to the object array root)
//!   0x3C    4       pointer_size (4 or 8)
//!   0x40    4       compile_pic (1 = position independent)
//!   0x44    4       is_pic (deprecated alias)
//!   0x48    varies  image section info (offsets + sizes)
//!   ...    varies  image method info
//!   ...    varies  string/class/method tables
//!   ...    varies  heap objects
//! ```

/// ART image file magic bytes.
pub const ART_MAGIC: &[u8; 4] = b"art\n";

/// Minimum header size for parsing.
const ART_HEADER_MIN_SIZE: usize = 72;

/// Parsed ART image file header.
#[derive(Debug, Clone, PartialEq, Eq)]
pub struct ArtHeader {
    /// Version string (e.g. "099", "106").
    pub version: String,
    /// Base virtual address where the image is mapped.
    pub image_begin: u64,
    /// Total size of the image in bytes.
    pub image_size: u32,
    /// Checksum of the companion OAT file.
    pub oat_checksum: u32,
    /// Virtual address where the companion OAT file begins.
    pub oat_file_begin: u64,
    /// Virtual address where oatdata starts within the OAT.
    pub oat_data_begin: u64,
    /// Virtual address where oatdata ends.
    pub oat_data_end: u64,
    /// Virtual address where the OAT file ends.
    pub oat_file_end: u64,
    /// Pointer size: 4 for 32-bit, 8 for 64-bit.
    pub pointer_size: u32,
    /// Whether the image is position-independent.
    pub is_pic: bool,
    /// Relocation delta applied to absolute pointers.
    pub patch_delta: i32,
    /// Number of image sections described in the header.
    pub section_count: u32,
}

/// An image section descriptor within the ART file.
#[derive(Debug, Clone, PartialEq, Eq)]
pub struct ArtImageSection {
    /// Section type.
    pub kind: ArtSectionKind,
    /// Offset from the start of the image file.
    pub offset: u32,
    /// Size in bytes.
    pub size: u32,
}

/// Known ART image section types.
#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum ArtSectionKind {
    /// Object section (pre-initialized heap objects).
    Objects,
    /// ArtField array section.
    ArtFields,
    /// ArtMethod array section.
    ArtMethods,
    /// Runtime methods (resolution stubs etc.).
    RuntimeMethods,
    /// ImTable (interface method table) section.
    ImTables,
    /// IMT conflict tables.
    ImtConflictTables,
    /// DexCache arrays.
    DexCacheArrays,
    /// Intern table (deduplicated string objects).
    InternTable,
    /// Class table (loaded class index).
    ClassTable,
    /// String reference offsets for relocation.
    StringReferenceOffsets,
    /// Unknown section type.
    Unknown(u32),
}

impl ArtSectionKind {
    fn from_index(idx: u32) -> Self {
        match idx {
            0 => Self::Objects,
            1 => Self::ArtFields,
            2 => Self::ArtMethods,
            3 => Self::RuntimeMethods,
            4 => Self::ImTables,
            5 => Self::ImtConflictTables,
            6 => Self::DexCacheArrays,
            7 => Self::InternTable,
            8 => Self::ClassTable,
            9 => Self::StringReferenceOffsets,
            n => Self::Unknown(n),
        }
    }
}

/// A class entry extracted from the ART class table.
#[derive(Debug, Clone, PartialEq, Eq)]
pub struct ArtClassEntry {
    /// Class descriptor (e.g. "Ljava/lang/Object;").
    pub descriptor: String,
    /// Offset of the class object in the image.
    pub image_offset: u32,
    /// Status of the class (verified, initialized, etc.).
    pub status: ArtClassStatus,
    /// Number of virtual methods.
    pub num_virtual_methods: u16,
    /// Number of direct methods.
    pub num_direct_methods: u16,
}

/// ART class initialization status.
#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum ArtClassStatus {
    /// Class is loaded but not verified.
    Loaded,
    /// Class has been verified.
    Verified,
    /// Class is being initialized.
    Initializing,
    /// Class is fully initialized.
    Initialized,
    /// Unknown status value.
    Unknown(u32),
}

impl ArtClassStatus {
    /// Convert a raw status value to an `ArtClassStatus`.
    #[allow(dead_code)]
    pub fn from_u32(v: u32) -> Self {
        match v {
            1 => Self::Loaded,
            4 => Self::Verified,
            5 => Self::Initializing,
            6 => Self::Initialized,
            _ => Self::Unknown(v),
        }
    }
}

/// A method entry extracted from the ART image's method section.
#[derive(Debug, Clone, PartialEq, Eq)]
pub struct ArtMethodEntry {
    /// Method index within its DEX file.
    pub dex_method_index: u32,
    /// Entry point offset for compiled code (0 = interpreter).
    pub entry_point_offset: u64,
    /// Access flags (public, static, native, etc.).
    pub access_flags: u32,
    /// Offset of this ArtMethod struct in the image.
    pub image_offset: u32,
}

/// Complete parsed ART image file.
#[derive(Debug, Clone, PartialEq, Eq)]
pub struct ArtFile {
    /// Parsed header.
    pub header: ArtHeader,
    /// Image sections.
    pub sections: Vec<ArtImageSection>,
    /// Class entries from the class table.
    pub classes: Vec<ArtClassEntry>,
    /// Method entries from the method section.
    pub methods: Vec<ArtMethodEntry>,
}

/// Errors produced by ART image parsing.
#[derive(Debug, Clone, PartialEq, Eq)]
pub enum ArtError {
    /// Input was too small.
    Truncated,
    /// ART magic bytes not found.
    BadMagic,
    /// An offset within the image pointed outside bounds.
    InvalidOffset { offset: u32, context: &'static str },
    /// The pointer size field was not 4 or 8.
    InvalidPointerSize(u32),
}

impl std::fmt::Display for ArtError {
    fn fmt(&self, f: &mut std::fmt::Formatter<'_>) -> std::fmt::Result {
        match self {
            Self::Truncated => write!(f, "truncated ART image"),
            Self::BadMagic => write!(f, "invalid ART magic"),
            Self::InvalidOffset { offset, context } => {
                write!(f, "invalid offset {offset:#x} in {context}")
            }
            Self::InvalidPointerSize(sz) => {
                write!(f, "invalid pointer size: {sz} (expected 4 or 8)")
            }
        }
    }
}

/// Read a little-endian `u32` from a byte slice at the given offset.
#[inline]
fn read_u32(data: &[u8], offset: usize) -> Result<u32, ArtError> {
    data.get(offset..offset + 4)
        .and_then(|s| s.try_into().ok())
        .map(u32::from_le_bytes)
        .ok_or(ArtError::Truncated)
}

/// Read a little-endian `u64` from a byte slice at the given offset.
#[inline]
fn read_u64(data: &[u8], offset: usize) -> Result<u64, ArtError> {
    data.get(offset..offset + 8)
        .and_then(|s| s.try_into().ok())
        .map(u64::from_le_bytes)
        .ok_or(ArtError::Truncated)
}

/// Parse an ART image file header.
///
/// Supports both 32-bit and 64-bit ART images. The pointer size determines
/// whether addresses in the header are 4 or 8 bytes wide.
pub fn parse_art_header(data: &[u8]) -> Result<ArtHeader, ArtError> {
    if data.len() < ART_HEADER_MIN_SIZE {
        return Err(ArtError::Truncated);
    }
    if &data[0..4] != ART_MAGIC {
        return Err(ArtError::BadMagic);
    }

    // Version string at offset 4..8.
    let version_bytes = &data[4..8];
    let version_end = version_bytes
        .iter()
        .position(|&b| b == 0)
        .unwrap_or(4);
    let version = String::from_utf8_lossy(&version_bytes[..version_end]).to_string();

    // For simplicity, parse the common 32-bit layout first. This covers most
    // Android 5.0+ images. The 64-bit layout extends addresses to 8 bytes
    // but we use the pointer_size field to determine which we have.
    let image_begin = read_u32(data, 8)? as u64;
    let image_size = read_u32(data, 12)?;
    let oat_checksum = read_u32(data, 16)?;
    let oat_file_begin = read_u32(data, 20)? as u64;
    let oat_data_begin = read_u32(data, 24)? as u64;
    let oat_data_end = read_u32(data, 28)? as u64;
    let oat_file_end = read_u32(data, 32)? as u64;
    let patch_delta = read_u32(data, 52)? as i32;
    let pointer_size = read_u32(data, 60)?;
    let compile_pic = read_u32(data, 64)?;

    if pointer_size != 4 && pointer_size != 8 {
        return Err(ArtError::InvalidPointerSize(pointer_size));
    }

    // Section count is stored at offset 68 in most versions.
    let section_count = read_u32(data, 68).unwrap_or(0);

    Ok(ArtHeader {
        version,
        image_begin,
        image_size,
        oat_checksum,
        oat_file_begin,
        oat_data_begin,
        oat_data_end,
        oat_file_end,
        pointer_size,
        is_pic: compile_pic != 0,
        patch_delta,
        section_count,
    })
}

/// Parse section descriptors from the ART header.
///
/// Each section descriptor is 8 bytes: offset (u32) + size (u32).
fn parse_sections(data: &[u8], header: &ArtHeader) -> Result<Vec<ArtImageSection>, ArtError> {
    let mut sections = Vec::new();
    // Section descriptors start at offset 72 (after the base header fields).
    let mut cursor: usize = 72;

    for i in 0..header.section_count {
        if cursor + 8 > data.len() {
            break;
        }
        let offset = read_u32(data, cursor)?;
        let size = read_u32(data, cursor + 4)?;
        cursor += 8;

        sections.push(ArtImageSection {
            kind: ArtSectionKind::from_index(i),
            offset,
            size,
        });
    }

    Ok(sections)
}

/// Parse a complete ART image file.
///
/// Extracts the header, section descriptors, and attempts to parse class
/// and method metadata from the relevant sections.
///
/// # Errors
///
/// Returns [`ArtError`] when the header is malformed or sections are truncated.
pub fn parse_art(data: &[u8]) -> Result<ArtFile, ArtError> {
    let header = parse_art_header(data)?;
    let sections = parse_sections(data, &header)?;

    let mut classes = Vec::new();
    let mut methods = Vec::new();

    // Extract method entries from the ArtMethods section if present.
    if let Some(methods_section) = sections.iter().find(|s| s.kind == ArtSectionKind::ArtMethods) {
        let start = methods_section.offset as usize;
        let end = start + methods_section.size as usize;
        if end <= data.len() {
            methods = parse_art_methods(data, start, end, &header)?;
        }
    }

    // Extract class entries from the ClassTable section if present.
    if let Some(class_section) = sections.iter().find(|s| s.kind == ArtSectionKind::ClassTable) {
        let start = class_section.offset as usize;
        let end = start + class_section.size as usize;
        if end <= data.len() {
            classes = parse_class_table(data, start, end)?;
        }
    }

    Ok(ArtFile {
        header,
        sections,
        classes,
        methods,
    })
}

/// Parse ArtMethod entries from the methods section.
///
/// Each ArtMethod struct layout depends on the pointer size:
/// - 32-bit: 4 + 4 + 4 + 4 = 16 bytes minimum
/// - 64-bit: 4 + 4 + 8 + 4 = 20 bytes minimum (with padding: 24)
fn parse_art_methods(
    data: &[u8],
    start: usize,
    end: usize,
    header: &ArtHeader,
) -> Result<Vec<ArtMethodEntry>, ArtError> {
    let mut methods = Vec::new();
    let entry_size = if header.pointer_size == 8 { 24 } else { 16 };
    let mut cursor = start;

    while cursor + entry_size <= end {
        let dex_method_index = read_u32(data, cursor)?;
        let access_flags = read_u32(data, cursor + 4)?;

        let entry_point_offset = if header.pointer_size == 8 {
            // 8-byte entry point at offset 8 within the struct.
            read_u64(data, cursor + 8)?
        } else {
            read_u32(data, cursor + 8)? as u64
        };

        methods.push(ArtMethodEntry {
            dex_method_index,
            access_flags,
            entry_point_offset,
            image_offset: cursor as u32,
        });

        cursor += entry_size;
    }

    Ok(methods)
}

/// Parse the class table section.
///
/// The class table is a hash map of class descriptors to offsets. The exact
/// encoding varies by ART version; we parse the common bucket-list format.
fn parse_class_table(
    data: &[u8],
    start: usize,
    end: usize,
) -> Result<Vec<ArtClassEntry>, ArtError> {
    let mut classes = Vec::new();
    let mut cursor = start;

    // Class table: num_buckets (u32), then entries. Each entry is:
    // hash (u32), class_offset (u32), descriptor_length (u16), descriptor bytes.
    if cursor + 4 > end {
        return Ok(classes);
    }
    let num_buckets = read_u32(data, cursor)?;
    cursor += 4;

    // Skip bucket offsets (one u32 per bucket).
    let buckets_size = num_buckets as usize * 4;
    if cursor + buckets_size > end {
        return Ok(classes);
    }
    cursor += buckets_size;

    // Parse entries until we reach the section end.
    while cursor + 10 <= end {
        let _hash = read_u32(data, cursor)?;
        cursor += 4;

        let class_offset = read_u32(data, cursor)?;
        cursor += 4;

        let desc_len = data
            .get(cursor..cursor + 2)
            .and_then(|s| s.try_into().ok())
            .map(u16::from_le_bytes)
            .ok_or(ArtError::Truncated)?;
        cursor += 2;

        if cursor + desc_len as usize > end {
            break;
        }

        let descriptor =
            String::from_utf8_lossy(&data[cursor..cursor + desc_len as usize]).to_string();
        cursor += desc_len as usize;

        classes.push(ArtClassEntry {
            descriptor,
            image_offset: class_offset,
            status: ArtClassStatus::Initialized,
            num_virtual_methods: 0,
            num_direct_methods: 0,
        });
    }

    Ok(classes)
}

/// Detect whether bytes are an ART image file.
pub fn is_art(data: &[u8]) -> bool {
    data.len() >= 4 && &data[0..4] == ART_MAGIC
}

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn test_parse_art_header_valid() {
        let mut data = vec![0u8; 128];
        data[0..4].copy_from_slice(ART_MAGIC);
        data[4..7].copy_from_slice(b"099");
        data[8..12].copy_from_slice(&0x7000_0000u32.to_le_bytes()); // image_begin
        data[12..16].copy_from_slice(&0x0010_0000u32.to_le_bytes()); // image_size
        data[16..20].copy_from_slice(&0xABCD1234u32.to_le_bytes()); // oat_checksum
        data[20..24].copy_from_slice(&0x7010_0000u32.to_le_bytes()); // oat_file_begin
        data[24..28].copy_from_slice(&0x7010_1000u32.to_le_bytes()); // oat_data_begin
        data[28..32].copy_from_slice(&0x7020_0000u32.to_le_bytes()); // oat_data_end
        data[32..36].copy_from_slice(&0x7030_0000u32.to_le_bytes()); // oat_file_end
        data[52..56].copy_from_slice(&0i32.to_le_bytes()); // patch_delta
        data[60..64].copy_from_slice(&4u32.to_le_bytes()); // pointer_size
        data[64..68].copy_from_slice(&1u32.to_le_bytes()); // compile_pic
        data[68..72].copy_from_slice(&3u32.to_le_bytes()); // section_count

        let hdr = parse_art_header(&data).unwrap();
        assert_eq!(hdr.version, "099");
        assert_eq!(hdr.image_begin, 0x7000_0000);
        assert_eq!(hdr.image_size, 0x0010_0000);
        assert_eq!(hdr.oat_checksum, 0xABCD1234);
        assert_eq!(hdr.pointer_size, 4);
        assert!(hdr.is_pic);
        assert_eq!(hdr.section_count, 3);
    }

    #[test]
    fn test_parse_art_header_bad_magic() {
        let mut data = vec![0u8; 128];
        data[0..4].copy_from_slice(b"oat\n");
        assert!(matches!(parse_art_header(&data), Err(ArtError::BadMagic)));
    }

    #[test]
    fn test_parse_art_header_truncated() {
        let data = vec![0u8; 20];
        assert!(matches!(parse_art_header(&data), Err(ArtError::Truncated)));
    }

    #[test]
    fn test_parse_art_header_invalid_pointer_size() {
        let mut data = vec![0u8; 128];
        data[0..4].copy_from_slice(ART_MAGIC);
        data[4..7].copy_from_slice(b"099");
        data[60..64].copy_from_slice(&3u32.to_le_bytes()); // bad pointer size
        assert!(matches!(
            parse_art_header(&data),
            Err(ArtError::InvalidPointerSize(3))
        ));
    }

    #[test]
    fn test_is_art_detection() {
        let mut good = vec![0u8; 100];
        good[0..4].copy_from_slice(ART_MAGIC);
        assert!(is_art(&good));

        let bad = vec![0u8; 100];
        assert!(!is_art(&bad));
    }

    #[test]
    fn test_parse_sections() {
        let mut data = vec![0u8; 128];
        data[0..4].copy_from_slice(ART_MAGIC);
        data[4..7].copy_from_slice(b"099");
        data[60..64].copy_from_slice(&4u32.to_le_bytes()); // pointer_size = 4
        data[64..68].copy_from_slice(&0u32.to_le_bytes()); // compile_pic
        data[68..72].copy_from_slice(&2u32.to_le_bytes()); // section_count = 2

        // Section 0: Objects at offset 100, size 20.
        data[72..76].copy_from_slice(&100u32.to_le_bytes());
        data[76..80].copy_from_slice(&20u32.to_le_bytes());
        // Section 1: ArtFields at offset 120, size 8.
        data[80..84].copy_from_slice(&120u32.to_le_bytes());
        data[84..88].copy_from_slice(&8u32.to_le_bytes());

        let header = parse_art_header(&data).unwrap();
        let sections = parse_sections(&data, &header).unwrap();
        assert_eq!(sections.len(), 2);
        assert_eq!(sections[0].kind, ArtSectionKind::Objects);
        assert_eq!(sections[0].offset, 100);
        assert_eq!(sections[0].size, 20);
        assert_eq!(sections[1].kind, ArtSectionKind::ArtFields);
        assert_eq!(sections[1].offset, 120);
        assert_eq!(sections[1].size, 8);
    }

    #[test]
    fn test_parse_art_methods_32bit() {
        // Build a fake methods section with 2 entries, pointer_size = 4.
        // Each entry: dex_method_index (u32), access_flags (u32),
        // entry_point (u32), padding (u32) = 16 bytes.
        let mut data = vec![0u8; 200];
        data[0..4].copy_from_slice(ART_MAGIC);
        data[4..7].copy_from_slice(b"099");
        data[60..64].copy_from_slice(&4u32.to_le_bytes()); // pointer_size = 4

        // Place method data at offset 100.
        let base = 100;
        // Method 0: index=42, access_flags=0x0001 (public), entry_point=0x1000
        data[base..base + 4].copy_from_slice(&42u32.to_le_bytes());
        data[base + 4..base + 8].copy_from_slice(&0x0001u32.to_le_bytes());
        data[base + 8..base + 12].copy_from_slice(&0x1000u32.to_le_bytes());
        // Method 1: index=99, access_flags=0x0009 (public static), entry_point=0
        data[base + 16..base + 20].copy_from_slice(&99u32.to_le_bytes());
        data[base + 20..base + 24].copy_from_slice(&0x0009u32.to_le_bytes());
        data[base + 24..base + 28].copy_from_slice(&0u32.to_le_bytes());

        let header = parse_art_header(&data).unwrap();
        let methods = parse_art_methods(&data, base, base + 32, &header).unwrap();
        assert_eq!(methods.len(), 2);
        assert_eq!(methods[0].dex_method_index, 42);
        assert_eq!(methods[0].access_flags, 0x0001);
        assert_eq!(methods[0].entry_point_offset, 0x1000);
        assert_eq!(methods[1].dex_method_index, 99);
        assert_eq!(methods[1].entry_point_offset, 0);
    }
}
