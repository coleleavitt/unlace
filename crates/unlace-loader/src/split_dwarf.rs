//! Split DWARF (.dwo / .dwp) skeleton + linkage.
//!
//! In GCC -gsplit-dwarf mode, the main object holds a "skeleton" CU referring
//! to a separate .dwo file via DW_AT_GNU_dwo_id + DW_AT_GNU_dwo_name. This
//! module recognizes those attributes and exposes the linkage.
//!
//! DW_AT_GNU_dwo_id  = 0x2130
//! DW_AT_GNU_dwo_name = 0x2131
//! DW_AT_GNU_addr_base = 0x2132
//! DW_AT_GNU_ranges_base = 0x2133

pub const DW_AT_GNU_DWO_ID: u16 = 0x2130;
pub const DW_AT_GNU_DWO_NAME: u16 = 0x2131;
pub const DW_AT_GNU_ADDR_BASE: u16 = 0x2132;
pub const DW_AT_GNU_RANGES_BASE: u16 = 0x2133;

/// Skeleton CU reference: pairs the .dwo file with its 64-bit ID.
#[derive(Clone, Debug, PartialEq, Eq)]
pub struct SkeletonRef {
    pub dwo_id: u64,
    pub dwo_name: String,
    pub addr_base: Option<u64>,
    pub ranges_base: Option<u64>,
}

/// .dwp (DWARF package) header magic and version.
pub const DWP_VERSION_2: u16 = 2;
pub const DWP_VERSION_5: u16 = 5;

/// Recognize a skeleton CU from raw (attr_code, raw_value) pairs.
pub fn extract_skeleton(attrs: &[(u16, Vec<u8>)]) -> Option<SkeletonRef> {
    let mut dwo_id: Option<u64> = None;
    let mut dwo_name: Option<String> = None;
    let mut addr_base: Option<u64> = None;
    let mut ranges_base: Option<u64> = None;

    for (code, data) in attrs {
        match *code {
            DW_AT_GNU_DWO_ID if data.len() >= 8 => {
                dwo_id = Some(u64::from_le_bytes(data[..8].try_into().unwrap()));
            }
            DW_AT_GNU_DWO_NAME => {
                dwo_name = std::str::from_utf8(data)
                    .ok()
                    .map(|s| s.trim_end_matches('\0').to_string());
            }
            DW_AT_GNU_ADDR_BASE if data.len() >= 8 => {
                addr_base = Some(u64::from_le_bytes(data[..8].try_into().unwrap()));
            }
            DW_AT_GNU_RANGES_BASE if data.len() >= 8 => {
                ranges_base = Some(u64::from_le_bytes(data[..8].try_into().unwrap()));
            }
            _ => {}
        }
    }

    let id = dwo_id?;
    let name = dwo_name?;
    Some(SkeletonRef {
        dwo_id: id,
        dwo_name: name,
        addr_base,
        ranges_base,
    })
}

/// Resolve a .dwo file path next to the main binary.
pub fn resolve_dwo_path(main_binary: &str, dwo_name: &str) -> std::path::PathBuf {
    let main = std::path::Path::new(main_binary);
    if let Some(parent) = main.parent() {
        parent.join(dwo_name)
    } else {
        std::path::PathBuf::from(dwo_name)
    }
}

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn test_split_dwarf_extract_skeleton_simple() {
        let mut name_bytes = b"foo.dwo".to_vec();
        name_bytes.push(0);
        let attrs = vec![
            (
                DW_AT_GNU_DWO_ID,
                0xDEADBEEFCAFEBABE_u64.to_le_bytes().to_vec(),
            ),
            (DW_AT_GNU_DWO_NAME, name_bytes),
        ];
        let s = extract_skeleton(&attrs).unwrap();
        assert_eq!(s.dwo_id, 0xDEADBEEFCAFEBABE);
        assert_eq!(s.dwo_name, "foo.dwo");
    }

    #[test]
    fn test_split_dwarf_missing_id() {
        let attrs = vec![(DW_AT_GNU_DWO_NAME, b"foo.dwo\0".to_vec())];
        assert!(extract_skeleton(&attrs).is_none());
    }

    #[test]
    fn test_split_dwarf_missing_name() {
        let attrs = vec![(DW_AT_GNU_DWO_ID, 1u64.to_le_bytes().to_vec())];
        assert!(extract_skeleton(&attrs).is_none());
    }

    #[test]
    fn test_split_dwarf_with_addr_base() {
        let attrs = vec![
            (DW_AT_GNU_DWO_ID, 1u64.to_le_bytes().to_vec()),
            (DW_AT_GNU_DWO_NAME, b"foo.dwo\0".to_vec()),
            (DW_AT_GNU_ADDR_BASE, 0x1000u64.to_le_bytes().to_vec()),
        ];
        let s = extract_skeleton(&attrs).unwrap();
        assert_eq!(s.addr_base, Some(0x1000));
    }

    #[test]
    fn test_split_dwarf_resolve_path() {
        let p = resolve_dwo_path("/tmp/bin/main", "foo.dwo");
        assert_eq!(p, std::path::Path::new("/tmp/bin/foo.dwo"));
    }

    #[test]
    fn test_split_dwarf_resolve_no_parent() {
        let p = resolve_dwo_path("main", "foo.dwo");
        assert_eq!(p, std::path::Path::new("foo.dwo"));
    }
}
