//! Apple compact unwind format (__unwind_info and __compact_unwind sections).
//!
//! Compact unwind is a per-function frame description that avoids the
//! verbose DWARF .eh_frame format. Used by macOS / iOS Mach-O binaries.

/// One entry in __compact_unwind section.
#[derive(Clone, Debug, PartialEq, Eq)]
pub struct CompactUnwindEntry {
    pub func_start: u64,
    pub func_length: u32,
    pub encoding: u32,
    pub personality: u64,
    pub lsda: u64,
}

const ENTRY_SIZE_64: usize = 32; // 8 + 4 + 4 + 8 + 8

/// Parse a __compact_unwind section into entries (64-bit format).
pub fn parse_compact_unwind_64(bytes: &[u8]) -> Vec<CompactUnwindEntry> {
    let mut out = Vec::new();
    let mut offset = 0;
    while offset + ENTRY_SIZE_64 <= bytes.len() {
        let func_start = u64::from_le_bytes(bytes[offset..offset + 8].try_into().unwrap());
        let func_length =
            u32::from_le_bytes(bytes[offset + 8..offset + 12].try_into().unwrap());
        let encoding = u32::from_le_bytes(bytes[offset + 12..offset + 16].try_into().unwrap());
        let personality =
            u64::from_le_bytes(bytes[offset + 16..offset + 24].try_into().unwrap());
        let lsda = u64::from_le_bytes(bytes[offset + 24..offset + 32].try_into().unwrap());
        out.push(CompactUnwindEntry {
            func_start,
            func_length,
            encoding,
            personality,
            lsda,
        });
        offset += ENTRY_SIZE_64;
    }
    out
}

/// __unwind_info section header (Apple-specific second-level lookup table).
#[derive(Clone, Debug, PartialEq, Eq)]
pub struct UnwindInfoHeader {
    pub version: u32,
    pub common_encodings_off: u32,
    pub common_encodings_count: u32,
    pub personalities_off: u32,
    pub personalities_count: u32,
    pub indexes_off: u32,
    pub indexes_count: u32,
}

pub fn parse_unwind_info_header(bytes: &[u8]) -> Option<UnwindInfoHeader> {
    if bytes.len() < 28 {
        return None;
    }
    Some(UnwindInfoHeader {
        version: u32::from_le_bytes(bytes[0..4].try_into().unwrap()),
        common_encodings_off: u32::from_le_bytes(bytes[4..8].try_into().unwrap()),
        common_encodings_count: u32::from_le_bytes(bytes[8..12].try_into().unwrap()),
        personalities_off: u32::from_le_bytes(bytes[12..16].try_into().unwrap()),
        personalities_count: u32::from_le_bytes(bytes[16..20].try_into().unwrap()),
        indexes_off: u32::from_le_bytes(bytes[20..24].try_into().unwrap()),
        indexes_count: u32::from_le_bytes(bytes[24..28].try_into().unwrap()),
    })
}

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn test_compact_unwind_parse_one_entry() {
        let mut bytes = Vec::new();
        bytes.extend_from_slice(&0x1000u64.to_le_bytes()); // func_start
        bytes.extend_from_slice(&0x100u32.to_le_bytes()); // length
        bytes.extend_from_slice(&0x42u32.to_le_bytes()); // encoding
        bytes.extend_from_slice(&0u64.to_le_bytes()); // personality
        bytes.extend_from_slice(&0u64.to_le_bytes()); // lsda
        let entries = parse_compact_unwind_64(&bytes);
        assert_eq!(entries.len(), 1);
        assert_eq!(entries[0].func_start, 0x1000);
        assert_eq!(entries[0].func_length, 0x100);
        assert_eq!(entries[0].encoding, 0x42);
    }

    #[test]
    fn test_compact_unwind_multiple_entries() {
        let mut bytes = Vec::new();
        for i in 0..3u64 {
            bytes.extend_from_slice(&(0x1000 + i * 0x100).to_le_bytes());
            bytes.extend_from_slice(&0x100u32.to_le_bytes());
            bytes.extend_from_slice(&0u32.to_le_bytes());
            bytes.extend_from_slice(&0u64.to_le_bytes());
            bytes.extend_from_slice(&0u64.to_le_bytes());
        }
        let entries = parse_compact_unwind_64(&bytes);
        assert_eq!(entries.len(), 3);
        assert_eq!(entries[2].func_start, 0x1200);
    }

    #[test]
    fn test_unwind_info_header() {
        let mut bytes = Vec::new();
        bytes.extend_from_slice(&1u32.to_le_bytes()); // version
        for _ in 0..6 {
            bytes.extend_from_slice(&0u32.to_le_bytes());
        }
        let h = parse_unwind_info_header(&bytes).unwrap();
        assert_eq!(h.version, 1);
    }

    #[test]
    fn test_compact_unwind_empty_input() {
        let entries = parse_compact_unwind_64(b"");
        assert!(entries.is_empty());
    }
}
