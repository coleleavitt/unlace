//! GNU SFrame (.sframe section) reader.
//!
//! SFrame is a compact stack-unwinding format meant to be faster to parse
//! than DWARF CFI. Header layout (sframe_v1):
//!   preamble: magic (u16=0xDEE2), version (u8), flags (u8)
//!   abi_arch (u8), cfa_fixed_fp_offset (i8), cfa_fixed_ra_offset (i8),
//!   auxhdr_len (u8), num_fdes (u32), num_fres (u32),
//!   fre_len (u32), fdes_off (u32), fres_off (u32)

pub const SFRAME_MAGIC: u16 = 0xDEE2;

#[derive(Clone, Debug, PartialEq, Eq)]
pub struct SFrameHeader {
    pub magic: u16,
    pub version: u8,
    pub flags: u8,
    pub abi_arch: u8,
    pub cfa_fixed_fp_offset: i8,
    pub cfa_fixed_ra_offset: i8,
    pub auxhdr_len: u8,
    pub num_fdes: u32,
    pub num_fres: u32,
    pub fre_len: u32,
    pub fdes_off: u32,
    pub fres_off: u32,
}

pub fn is_sframe(bytes: &[u8]) -> bool {
    bytes.len() >= 2 && u16::from_le_bytes([bytes[0], bytes[1]]) == SFRAME_MAGIC
}

pub fn parse_sframe_header(bytes: &[u8]) -> Option<SFrameHeader> {
    if bytes.len() < 28 {
        return None;
    }
    let magic = u16::from_le_bytes([bytes[0], bytes[1]]);
    if magic != SFRAME_MAGIC {
        return None;
    }
    Some(SFrameHeader {
        magic,
        version: bytes[2],
        flags: bytes[3],
        abi_arch: bytes[4],
        cfa_fixed_fp_offset: bytes[5] as i8,
        cfa_fixed_ra_offset: bytes[6] as i8,
        auxhdr_len: bytes[7],
        num_fdes: u32::from_le_bytes(bytes[8..12].try_into().unwrap()),
        num_fres: u32::from_le_bytes(bytes[12..16].try_into().unwrap()),
        fre_len: u32::from_le_bytes(bytes[16..20].try_into().unwrap()),
        fdes_off: u32::from_le_bytes(bytes[20..24].try_into().unwrap()),
        fres_off: u32::from_le_bytes(bytes[24..28].try_into().unwrap()),
    })
}

/// A single Frame Description Entry (FDE).
#[derive(Clone, Debug, PartialEq, Eq)]
pub struct SFrameFde {
    pub start_addr: i32,
    pub size: u32,
    pub start_fre_off: u32,
    pub num_fres: u32,
}

const FDE_SIZE: usize = 16;

pub fn parse_fdes(bytes: &[u8], count: usize) -> Vec<SFrameFde> {
    let mut out = Vec::with_capacity(count);
    let mut offset = 0;
    for _ in 0..count {
        if offset + FDE_SIZE > bytes.len() {
            break;
        }
        let start_addr = i32::from_le_bytes(bytes[offset..offset + 4].try_into().unwrap());
        let size = u32::from_le_bytes(bytes[offset + 4..offset + 8].try_into().unwrap());
        let start_fre_off =
            u32::from_le_bytes(bytes[offset + 8..offset + 12].try_into().unwrap());
        let num_fres =
            u32::from_le_bytes(bytes[offset + 12..offset + 16].try_into().unwrap());
        out.push(SFrameFde {
            start_addr,
            size,
            start_fre_off,
            num_fres,
        });
        offset += FDE_SIZE;
    }
    out
}

#[cfg(test)]
mod tests {
    use super::*;

    fn make_header() -> Vec<u8> {
        let mut out = Vec::new();
        out.extend_from_slice(&SFRAME_MAGIC.to_le_bytes());
        out.push(2); // version
        out.push(0); // flags
        out.push(3); // abi_arch
        out.push(0); // cfa_fixed_fp_offset
        out.push(0); // cfa_fixed_ra_offset
        out.push(0); // auxhdr_len
        out.extend_from_slice(&5u32.to_le_bytes()); // num_fdes
        out.extend_from_slice(&10u32.to_le_bytes()); // num_fres
        out.extend_from_slice(&4u32.to_le_bytes()); // fre_len
        out.extend_from_slice(&100u32.to_le_bytes()); // fdes_off
        out.extend_from_slice(&200u32.to_le_bytes()); // fres_off
        out
    }

    #[test]
    fn test_sframe_magic() {
        let bytes = make_header();
        assert!(is_sframe(&bytes));
    }

    #[test]
    fn test_sframe_parse_header() {
        let bytes = make_header();
        let h = parse_sframe_header(&bytes).unwrap();
        assert_eq!(h.magic, SFRAME_MAGIC);
        assert_eq!(h.version, 2);
        assert_eq!(h.num_fdes, 5);
        assert_eq!(h.num_fres, 10);
    }

    #[test]
    fn test_sframe_parse_fdes() {
        let mut bytes = Vec::new();
        bytes.extend_from_slice(&0x1000i32.to_le_bytes());
        bytes.extend_from_slice(&0x100u32.to_le_bytes());
        bytes.extend_from_slice(&0u32.to_le_bytes());
        bytes.extend_from_slice(&3u32.to_le_bytes());
        let fdes = parse_fdes(&bytes, 1);
        assert_eq!(fdes.len(), 1);
        assert_eq!(fdes[0].start_addr, 0x1000);
        assert_eq!(fdes[0].num_fres, 3);
    }

    #[test]
    fn test_sframe_rejects_bad_magic() {
        let bytes = vec![0xFF; 28];
        assert!(parse_sframe_header(&bytes).is_none());
    }
}
