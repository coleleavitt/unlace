//! WebAssembly module / object format parser.
//!
//! Parses the wasm module header and section list:
//!   magic = b"\0asm" (0x00 0x61 0x73 0x6D)
//!   version = u32_le (typically 1)
//!   then sections of (id: u8, size: leb128, payload: size bytes)
//!
//! This is the canonical wasm 1.0 binary format.

pub const WASM_MAGIC: &[u8] = b"\0asm";
pub const WASM_VERSION: u32 = 1;

#[derive(Copy, Clone, Debug, PartialEq, Eq)]
pub enum WasmSectionKind {
    Custom = 0,
    Type = 1,
    Import = 2,
    Function = 3,
    Table = 4,
    Memory = 5,
    Global = 6,
    Export = 7,
    Start = 8,
    Element = 9,
    Code = 10,
    Data = 11,
    DataCount = 12,
    Unknown = 0xFF,
}

#[derive(Clone, Debug)]
pub struct WasmSection {
    pub kind: WasmSectionKind,
    pub offset: usize,
    pub size: u64,
}

pub fn is_wasm(bytes: &[u8]) -> bool {
    bytes.len() >= 8 && bytes.starts_with(WASM_MAGIC)
}

/// Read a LEB128 unsigned varint. Returns (value, bytes_consumed).
fn read_leb128(bytes: &[u8]) -> Option<(u64, usize)> {
    let mut result: u64 = 0;
    let mut shift = 0u32;
    for (i, &b) in bytes.iter().enumerate().take(10) {
        result |= ((b & 0x7F) as u64) << shift;
        if b & 0x80 == 0 {
            return Some((result, i + 1));
        }
        shift += 7;
    }
    None
}

/// Parse a wasm module and enumerate its sections.
pub fn parse_wasm(bytes: &[u8]) -> Option<Vec<WasmSection>> {
    if !is_wasm(bytes) {
        return None;
    }
    let version = u32::from_le_bytes([bytes[4], bytes[5], bytes[6], bytes[7]]);
    if version != WASM_VERSION {
        return None;
    }
    let mut offset = 8;
    let mut sections = Vec::new();
    while offset < bytes.len() {
        let kind_byte = bytes[offset];
        offset += 1;
        let (size, consumed) = read_leb128(&bytes[offset..])?;
        offset += consumed;
        let kind = match kind_byte {
            0 => WasmSectionKind::Custom,
            1 => WasmSectionKind::Type,
            2 => WasmSectionKind::Import,
            3 => WasmSectionKind::Function,
            4 => WasmSectionKind::Table,
            5 => WasmSectionKind::Memory,
            6 => WasmSectionKind::Global,
            7 => WasmSectionKind::Export,
            8 => WasmSectionKind::Start,
            9 => WasmSectionKind::Element,
            10 => WasmSectionKind::Code,
            11 => WasmSectionKind::Data,
            12 => WasmSectionKind::DataCount,
            _ => WasmSectionKind::Unknown,
        };
        sections.push(WasmSection {
            kind,
            offset,
            size,
        });
        offset = offset.saturating_add(size as usize);
        if offset > bytes.len() {
            break;
        }
    }
    Some(sections)
}

#[cfg(test)]
mod tests {
    use super::*;

    fn make_wasm_with_code() -> Vec<u8> {
        let mut out = WASM_MAGIC.to_vec();
        out.extend_from_slice(&1u32.to_le_bytes()); // version
        // Code section: id=10, size=2, payload 2 bytes
        out.push(10);
        out.push(2); // LEB128 for 2
        out.push(0xAA);
        out.push(0xBB);
        out
    }

    #[test]
    fn test_wasm_magic_detection() {
        let bytes = make_wasm_with_code();
        assert!(is_wasm(&bytes));
        assert!(!is_wasm(b"ELF"));
    }

    #[test]
    fn test_wasm_parses_sections() {
        let bytes = make_wasm_with_code();
        let sections = parse_wasm(&bytes).unwrap();
        assert_eq!(sections.len(), 1);
        assert_eq!(sections[0].kind, WasmSectionKind::Code);
        assert_eq!(sections[0].size, 2);
    }

    #[test]
    fn test_wasm_leb128_simple() {
        let (v, n) = read_leb128(&[0x05]).unwrap();
        assert_eq!(v, 5);
        assert_eq!(n, 1);
    }

    #[test]
    fn test_wasm_leb128_multi_byte() {
        let (v, n) = read_leb128(&[0xE5, 0x8E, 0x26]).unwrap();
        // 0xE5 & 0x7F = 0x65; 0x8E & 0x7F = 0x0E; 0x26 = 0x26
        // = 0x65 | 0x0E << 7 | 0x26 << 14 = 0x65 | 0x700 | 0x98000 = 0x98765
        assert_eq!(v, 0x98765);
        assert_eq!(n, 3);
    }

    #[test]
    fn test_wasm_rejects_wrong_version() {
        let mut bytes = WASM_MAGIC.to_vec();
        bytes.extend_from_slice(&999u32.to_le_bytes());
        assert!(parse_wasm(&bytes).is_none());
    }
}
