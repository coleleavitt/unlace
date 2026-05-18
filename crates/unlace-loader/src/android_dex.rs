//! Android DEX and OAT file loader.
//!
//! Parses the DEX (Dalvik Executable) format to extract class definitions,
//! method signatures, and string constants. Also handles OAT (ahead-of-time
//! compiled) wrappers that embed DEX files with native code pointers.

/// DEX file magic bytes.
pub const DEX_MAGIC: &[u8; 4] = b"dex\n";
/// OAT file magic bytes.
pub const OAT_MAGIC: &[u8; 4] = b"oat\n";

/// A parsed DEX file header.
#[derive(Debug, Clone, PartialEq, Eq)]
pub struct DexHeader {
    pub version: u32,
    pub file_size: u32,
    pub string_ids_size: u32,
    pub type_ids_size: u32,
    pub method_ids_size: u32,
    pub class_defs_size: u32,
}

/// A DEX class definition.
#[derive(Debug, Clone, PartialEq, Eq)]
pub struct DexClass {
    pub name: String,
    pub super_class: Option<String>,
    pub access_flags: u32,
    pub methods: Vec<DexMethod>,
}

/// A DEX method definition.
#[derive(Debug, Clone, PartialEq, Eq)]
pub struct DexMethod {
    pub name: String,
    pub prototype: String,
    pub access_flags: u32,
    pub code_offset: u32,
}

/// Error type for DEX parsing.
#[derive(Debug, Clone, PartialEq, Eq)]
pub enum DexError {
    BadMagic,
    Truncated,
    InvalidOffset,
}

impl std::fmt::Display for DexError {
    fn fmt(&self, f: &mut std::fmt::Formatter<'_>) -> std::fmt::Result {
        match self {
            Self::BadMagic => write!(f, "invalid DEX magic"),
            Self::Truncated => write!(f, "truncated DEX file"),
            Self::InvalidOffset => write!(f, "invalid offset in DEX file"),
        }
    }
}

/// Parse a DEX file header.
pub fn parse_dex_header(data: &[u8]) -> Result<DexHeader, DexError> {
    if data.len() < 112 {
        return Err(DexError::Truncated);
    }
    if &data[0..4] != DEX_MAGIC {
        return Err(DexError::BadMagic);
    }
    // Version is ASCII "035\0" or "039\0" at offset 4..8.
    let version = u32::from_le_bytes([data[4], data[5], data[6], 0]);
    let file_size = u32::from_le_bytes(data[32..36].try_into().unwrap());
    let string_ids_size = u32::from_le_bytes(data[56..60].try_into().unwrap());
    let type_ids_size = u32::from_le_bytes(data[64..68].try_into().unwrap());
    let method_ids_size = u32::from_le_bytes(data[80..84].try_into().unwrap());
    let class_defs_size = u32::from_le_bytes(data[96..100].try_into().unwrap());

    Ok(DexHeader {
        version,
        file_size,
        string_ids_size,
        type_ids_size,
        method_ids_size,
        class_defs_size,
    })
}

/// Detect whether bytes are a DEX file.
pub fn is_dex(data: &[u8]) -> bool {
    data.len() >= 4 && &data[0..4] == DEX_MAGIC
}

/// Detect whether bytes are an OAT file.
pub fn is_oat(data: &[u8]) -> bool {
    data.len() >= 4 && &data[0..4] == OAT_MAGIC
}

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn test_parse_dex_header() {
        let mut data = vec![0u8; 112];
        data[0..4].copy_from_slice(DEX_MAGIC);
        data[4..7].copy_from_slice(b"035");
        data[32..36].copy_from_slice(&1024u32.to_le_bytes()); // file_size
        data[56..60].copy_from_slice(&100u32.to_le_bytes()); // string_ids
        data[64..68].copy_from_slice(&50u32.to_le_bytes()); // type_ids
        data[80..84].copy_from_slice(&200u32.to_le_bytes()); // method_ids
        data[96..100].copy_from_slice(&10u32.to_le_bytes()); // class_defs

        let hdr = parse_dex_header(&data).unwrap();
        assert_eq!(hdr.file_size, 1024);
        assert_eq!(hdr.string_ids_size, 100);
        assert_eq!(hdr.class_defs_size, 10);
    }

    #[test]
    fn test_bad_magic() {
        let mut data = vec![0xDE, 0xAD, 0xBE, 0xEF];
        data.resize(112, 0);
        assert!(matches!(parse_dex_header(&data), Err(DexError::BadMagic)));
    }

    #[test]
    fn test_detection() {
        let mut dex = vec![0u8; 100];
        dex[0..4].copy_from_slice(DEX_MAGIC);
        assert!(is_dex(&dex));
        assert!(!is_oat(&dex));

        let mut oat = vec![0u8; 100];
        oat[0..4].copy_from_slice(OAT_MAGIC);
        assert!(is_oat(&oat));
        assert!(!is_dex(&oat));
    }
}
