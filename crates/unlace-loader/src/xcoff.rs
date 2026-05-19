//! XCOFF (AIX / PowerPC) loader — minimal header detection and section
//! enumeration. Just enough to recognize XCOFF binaries.

/// XCOFF32 magic: 0x01DF.
pub const XCOFF32_MAGIC: u16 = 0x01DF;
/// XCOFF64 magic: 0x01F7.
pub const XCOFF64_MAGIC: u16 = 0x01F7;

#[derive(Copy, Clone, Debug, PartialEq, Eq)]
pub enum XcoffClass {
    Xcoff32,
    Xcoff64,
}

#[derive(Clone, Debug)]
pub struct XcoffHeader {
    pub class: XcoffClass,
    pub nsections: u16,
    pub timestamp: u32,
}

#[derive(Clone, Debug, PartialEq, Eq)]
pub struct XcoffSection {
    pub name: String,
    pub vaddr: u64,
    pub size: u64,
    pub offset: u64,
}

/// Detect XCOFF magic.
pub fn is_xcoff(bytes: &[u8]) -> bool {
    if bytes.len() < 2 {
        return false;
    }
    let magic = u16::from_be_bytes([bytes[0], bytes[1]]);
    magic == XCOFF32_MAGIC || magic == XCOFF64_MAGIC
}

/// Parse the XCOFF file header.
pub fn parse_header(bytes: &[u8]) -> Option<XcoffHeader> {
    if bytes.len() < 20 {
        return None;
    }
    let magic = u16::from_be_bytes([bytes[0], bytes[1]]);
    let class = match magic {
        XCOFF32_MAGIC => XcoffClass::Xcoff32,
        XCOFF64_MAGIC => XcoffClass::Xcoff64,
        _ => return None,
    };
    let nsections = u16::from_be_bytes([bytes[2], bytes[3]]);
    let timestamp = u32::from_be_bytes([bytes[4], bytes[5], bytes[6], bytes[7]]);
    Some(XcoffHeader {
        class,
        nsections,
        timestamp,
    })
}

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn test_xcoff_magic_32() {
        let bytes = [0x01, 0xDF, 0x00, 0x01, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0];
        assert!(is_xcoff(&bytes));
        let h = parse_header(&bytes).unwrap();
        assert_eq!(h.class, XcoffClass::Xcoff32);
        assert_eq!(h.nsections, 1);
    }

    #[test]
    fn test_xcoff_magic_64() {
        let bytes = [0x01, 0xF7, 0x00, 0x05, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0];
        assert!(is_xcoff(&bytes));
        let h = parse_header(&bytes).unwrap();
        assert_eq!(h.class, XcoffClass::Xcoff64);
        assert_eq!(h.nsections, 5);
    }

    #[test]
    fn test_xcoff_rejects_non_xcoff() {
        assert!(!is_xcoff(b"ELF"));
        assert!(!is_xcoff(b""));
    }

    #[test]
    fn test_xcoff_short_input() {
        let bytes = [0x01, 0xDF, 0x00, 0x01];
        assert!(is_xcoff(&bytes));
        // Header parse requires 20 bytes.
        assert!(parse_header(&bytes).is_none());
    }
}
