//! .NET CLR PE metadata loader.
//!
//! Parses .NET assemblies (PE files with CLI metadata) to extract type
//! definitions, method tables, and IL method bodies.

/// .NET CLI metadata header magic (`"BSJB"` LE).
pub const CLR_MAGIC: u32 = 0x424A5342;

/// IMAGE_COR20_HEADER (the CLI Runtime header) parsed from the PE's
/// `IMAGE_DIRECTORY_ENTRY_COMHEADER` directory entry. ECMA-335 §II.25.3.3.
#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub struct Cor20Header {
    pub cb: u32,
    pub major_runtime_version: u16,
    pub minor_runtime_version: u16,
    /// RVA of the CLI metadata blob ("BSJB" header).
    pub metadata_rva: u32,
    pub metadata_size: u32,
    pub flags: u32,
    /// Entry-point token (or RVA depending on `flags`).
    pub entry_point_token: u32,
}

/// Parse `IMAGE_COR20_HEADER` from a slice anchored at the directory
/// entry's file offset. Returns `None` on truncation or mismatched
/// `cb` (size) field.
pub fn parse_cor20_header(bytes: &[u8]) -> Option<Cor20Header> {
    if bytes.len() < 72 {
        return None;
    }
    let cb = u32::from_le_bytes(bytes[0..4].try_into().ok()?);
    if cb != 72 {
        return None;
    }
    Some(Cor20Header {
        cb,
        major_runtime_version: u16::from_le_bytes(bytes[4..6].try_into().ok()?),
        minor_runtime_version: u16::from_le_bytes(bytes[6..8].try_into().ok()?),
        metadata_rva: u32::from_le_bytes(bytes[8..12].try_into().ok()?),
        metadata_size: u32::from_le_bytes(bytes[12..16].try_into().ok()?),
        flags: u32::from_le_bytes(bytes[16..20].try_into().ok()?),
        entry_point_token: u32::from_le_bytes(bytes[20..24].try_into().ok()?),
    })
}

/// Project a parsed `ClrMetadata` onto a generic `BinaryImage`. Each
/// `ClrMethodDef` becomes a Function symbol at its RVA (relocated by
/// `image_base`). The assembly name lands in the string table at the
/// reserved manifest slot for downstream inspection.
pub fn cil_to_binary_image(meta: &ClrMetadata, image_base: u64) -> crate::image::BinaryImage {
    use crate::image::{ArchId, BinaryImage, Endian, Symbol, SymbolKind};
    let mut out = BinaryImage::empty(ArchId::Unknown(0xC11), Endian::Little); // "CIL"
    if let Some(name) = &meta.assembly_name {
        out.string_table.insert(0xFFFF_FFFF_FFFF_FF03, name.clone());
    }
    out.string_table
        .insert(0xFFFF_FFFF_FFFF_FF04, meta.runtime_version.clone());
    for method in &meta.methods {
        if method.rva == 0 {
            continue;
        }
        let addr = image_base.wrapping_add(method.rva as u64);
        out.symbols.insert(
            addr,
            Symbol {
                name: method.name.clone(),
                addr,
                size: 0,
                kind: SymbolKind::Function,
            },
        );
    }
    out
}

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
    let magic = u32::from_le_bytes(data[offset..offset + 4].try_into().ok()?);
    if magic != CLR_MAGIC {
        return None;
    }
    // Version string length at offset+12.
    let ver_len = u32::from_le_bytes(data[offset + 12..offset + 16].try_into().ok()?) as usize;
    if offset + 16 + ver_len > data.len() {
        return None;
    }
    let version = String::from_utf8_lossy(&data[offset + 16..offset + 16 + ver_len])
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
        data[offset..offset + 4].copy_from_slice(&CLR_MAGIC.to_le_bytes());
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
        data[16..16 + ver.len()].copy_from_slice(ver);

        let meta = parse_clr_header(&data, offset).unwrap();
        assert_eq!(meta.runtime_version, "v4.0.30319");
    }

    /// `cil_recognises_clr_header` — construct a synthetic 72-byte
    /// `IMAGE_COR20_HEADER` and decode every field.
    #[test]
    fn cil_recognises_clr_header() {
        let mut bytes = vec![0u8; 72];
        bytes[0..4].copy_from_slice(&72u32.to_le_bytes()); // cb
        bytes[4..6].copy_from_slice(&2u16.to_le_bytes()); // major
        bytes[6..8].copy_from_slice(&5u16.to_le_bytes()); // minor
        bytes[8..12].copy_from_slice(&0x2050u32.to_le_bytes()); // metadata RVA
        bytes[12..16].copy_from_slice(&0x4321u32.to_le_bytes()); // metadata size
        bytes[16..20].copy_from_slice(&0x1u32.to_le_bytes()); // flags = IL_ONLY
        bytes[20..24].copy_from_slice(&0x0600_0001u32.to_le_bytes()); // entry token

        let hdr = parse_cor20_header(&bytes).expect("cor20 must parse");
        assert_eq!(hdr.cb, 72);
        assert_eq!(hdr.major_runtime_version, 2);
        assert_eq!(hdr.minor_runtime_version, 5);
        assert_eq!(hdr.metadata_rva, 0x2050);
        assert_eq!(hdr.metadata_size, 0x4321);
        assert_eq!(hdr.flags, 1);
        assert_eq!(hdr.entry_point_token, 0x0600_0001);
    }

    /// `cil_method_table_yields_symbols` — `cil_to_binary_image` must
    /// produce one Function symbol per non-zero method RVA and store
    /// the assembly name in the string table.
    #[test]
    fn cil_method_table_yields_symbols() {
        use crate::image::SymbolKind;
        let meta = ClrMetadata {
            runtime_version: "v4.0.30319".to_string(),
            types: vec![],
            methods: vec![
                ClrMethodDef {
                    name: "MyApp.Program.Main".to_string(),
                    rva: 0x2050,
                    flags: 0x16,
                    signature_blob_idx: 0,
                },
                ClrMethodDef {
                    name: "MyApp.Program.Helper".to_string(),
                    rva: 0x2080,
                    flags: 0x16,
                    signature_blob_idx: 0,
                },
                // RVA == 0 is an abstract / pinvoke method — skipped.
                ClrMethodDef {
                    name: "MyApp.External.Abstract".to_string(),
                    rva: 0,
                    flags: 0,
                    signature_blob_idx: 0,
                },
            ],
            assembly_name: Some("MyApp".to_string()),
        };
        let bin = cil_to_binary_image(&meta, 0x0040_0000);
        assert_eq!(bin.symbols.len(), 2, "RVA==0 method must be skipped");
        let main_sym = bin.symbols.get(&0x0040_2050).unwrap();
        assert_eq!(main_sym.name, "MyApp.Program.Main");
        assert!(matches!(main_sym.kind, SymbolKind::Function));
        let helper = bin.symbols.get(&0x0040_2080).unwrap();
        assert_eq!(helper.name, "MyApp.Program.Helper");
        assert_eq!(
            bin.string_table
                .get(&0xFFFF_FFFF_FFFF_FF03)
                .map(|s| s.as_str()),
            Some("MyApp")
        );
    }
}
