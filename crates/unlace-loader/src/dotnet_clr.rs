//! .NET CLR PE metadata loader.
//!
//! Parses .NET assemblies (PE files with CLI metadata) to extract type
//! definitions, method tables, and IL method bodies.

/// .NET CLI metadata header magic.
pub const CLR_MAGIC: u32 = 0x424A5342; // "BSJB"

/// A .NET assembly's metadata summary.
#[derive(Debug, Clone, Default, PartialEq, Eq)]
pub struct ClrMetadata {
    pub runtime_version: String,
    pub types: Vec<ClrTypeDef>,
    pub methods: Vec<ClrMethodDef>,
    pub assembly_name: Option<String>,
}

/// A .NET type definition.
#[derive(Debug, Clone, PartialEq, Eq)]
pub struct ClrTypeDef {
    pub namespace: String,
    pub name: String,
    pub flags: u32,
}

/// A .NET method definition.
#[derive(Debug, Clone, PartialEq, Eq)]
pub struct ClrMethodDef {
    pub name: String,
    pub rva: u32,
    pub flags: u16,
    pub signature_blob_idx: u32,
}

/// Detect whether a PE file contains .NET CLR metadata.
pub fn detect_clr(pe_data: &[u8]) -> bool {
    // Look for the BSJB signature in the file.
    let magic_bytes = CLR_MAGIC.to_le_bytes();
    pe_data.windows(4).any(|w| w == magic_bytes)
}

/// Parse CLR metadata header (simplified - extracts version string).
pub fn parse_clr_header(data: &[u8], offset: usize) -> Option<ClrMetadata> {
    if offset + 16 > data.len() {
        return None;
    }
    let magic = u32::from_le_bytes(data[offset..offset+4].try_into().ok()?);
    if magic != CLR_MAGIC {
        return None;
    }
    // Version string length at offset+12.
    let ver_len = u32::from_le_bytes(data[offset+12..offset+16].try_into().ok()?) as usize;
    if offset + 16 + ver_len > data.len() {
        return None;
    }
    let version = String::from_utf8_lossy(&data[offset+16..offset+16+ver_len])
        .trim_end_matches('\0')
        .to_string();

    Some(ClrMetadata {
        runtime_version: version,
        ..Default::default()
    })
}

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn test_detect_clr() {
        let mut data = vec![0u8; 256];
        assert!(!detect_clr(&data));
        // Insert BSJB magic.
        let offset = 100;
        data[offset..offset+4].copy_from_slice(&CLR_MAGIC.to_le_bytes());
        assert!(detect_clr(&data));
    }

    #[test]
    fn test_parse_clr_header() {
        let mut data = vec![0u8; 256];
        let offset = 0;
        data[0..4].copy_from_slice(&CLR_MAGIC.to_le_bytes());
        // Major/minor version (skip).
        // Version length at offset 12.
        let ver = b"v4.0.30319\0\0"; // padded to 4-byte boundary
        data[12..16].copy_from_slice(&(ver.len() as u32).to_le_bytes());
        data[16..16+ver.len()].copy_from_slice(ver);

        let meta = parse_clr_header(&data, offset).unwrap();
        assert_eq!(meta.runtime_version, "v4.0.30319");
    }
}
