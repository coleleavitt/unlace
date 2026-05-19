//! BTF (BPF Type Format) reader.
//!
//! BTF is a compact debug info format used by Linux eBPF programs.
//! Header: 16 bytes (magic, version, flags, hdr_len, type_off, type_len,
//! str_off, str_len). All little-endian.

pub const BTF_MAGIC: u16 = 0xEB9F;

#[derive(Clone, Debug)]
pub struct BtfHeader {
    pub magic: u16,
    pub version: u8,
    pub flags: u8,
    pub hdr_len: u32,
    pub type_off: u32,
    pub type_len: u32,
    pub str_off: u32,
    pub str_len: u32,
}

pub fn is_btf(bytes: &[u8]) -> bool {
    bytes.len() >= 2 && u16::from_le_bytes([bytes[0], bytes[1]]) == BTF_MAGIC
}

pub fn parse_btf_header(bytes: &[u8]) -> Option<BtfHeader> {
    if bytes.len() < 24 {
        return None;
    }
    let magic = u16::from_le_bytes([bytes[0], bytes[1]]);
    if magic != BTF_MAGIC {
        return None;
    }
    let version = bytes[2];
    let flags = bytes[3];
    let hdr_len = u32::from_le_bytes([bytes[4], bytes[5], bytes[6], bytes[7]]);
    let type_off = u32::from_le_bytes([bytes[8], bytes[9], bytes[10], bytes[11]]);
    let type_len = u32::from_le_bytes([bytes[12], bytes[13], bytes[14], bytes[15]]);
    let str_off = u32::from_le_bytes([bytes[16], bytes[17], bytes[18], bytes[19]]);
    let str_len = u32::from_le_bytes([bytes[20], bytes[21], bytes[22], bytes[23]]);
    Some(BtfHeader {
        magic,
        version,
        flags,
        hdr_len,
        type_off,
        type_len,
        str_off,
        str_len,
    })
}

/// Read a NUL-terminated string from the BTF string table at offset `idx`.
pub fn read_string<'a>(strings: &'a [u8], idx: u32) -> Option<&'a str> {
    let start = idx as usize;
    if start >= strings.len() {
        return None;
    }
    let end = strings[start..].iter().position(|&b| b == 0)?;
    std::str::from_utf8(&strings[start..start + end]).ok()
}

#[cfg(test)]
mod tests {
    use super::*;

    fn make_btf_header() -> Vec<u8> {
        let mut out = Vec::new();
        out.extend_from_slice(&BTF_MAGIC.to_le_bytes());
        out.push(1); // version
        out.push(0); // flags
        out.extend_from_slice(&24u32.to_le_bytes()); // hdr_len
        out.extend_from_slice(&0u32.to_le_bytes()); // type_off
        out.extend_from_slice(&100u32.to_le_bytes()); // type_len
        out.extend_from_slice(&100u32.to_le_bytes()); // str_off
        out.extend_from_slice(&50u32.to_le_bytes()); // str_len
        out
    }

    #[test]
    fn test_btf_magic() {
        let bytes = make_btf_header();
        assert!(is_btf(&bytes));
        assert!(!is_btf(b"\xff\xff"));
    }

    #[test]
    fn test_btf_parse_header() {
        let bytes = make_btf_header();
        let h = parse_btf_header(&bytes).unwrap();
        assert_eq!(h.magic, BTF_MAGIC);
        assert_eq!(h.version, 1);
        assert_eq!(h.hdr_len, 24);
        assert_eq!(h.type_len, 100);
        assert_eq!(h.str_off, 100);
    }

    #[test]
    fn test_btf_read_string_simple() {
        let strings = b"hello\0world\0".as_slice();
        assert_eq!(read_string(strings, 0), Some("hello"));
        assert_eq!(read_string(strings, 6), Some("world"));
    }

    #[test]
    fn test_btf_read_string_out_of_bounds() {
        let strings = b"abc\0".as_slice();
        assert_eq!(read_string(strings, 99), None);
    }

    #[test]
    fn test_btf_rejects_short() {
        assert!(parse_btf_header(b"\x9f\xeb\x01").is_none());
    }
}
