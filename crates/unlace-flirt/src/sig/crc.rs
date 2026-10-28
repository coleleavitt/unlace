//! The FLIRT CRC16 (`sub_813280` in libida).
//!
//! Reflected CRC-16 with polynomial 0x8408 and initial value 0xFFFF; the
//! result is byte-swapped and inverted. libida uses a slicing-by-4 table
//! whose first 256 entries are exactly the table built below.

const TABLE: [u16; 256] = {
    let mut table = [0u16; 256];
    let mut i = 0;
    while i < 256 {
        let mut crc = i as u16;
        let mut bit = 0;
        while bit < 8 {
            crc = if crc & 1 != 0 { (crc >> 1) ^ 0x8408 } else { crc >> 1 };
            bit += 1;
        }
        table[i] = crc;
        i += 1;
    }
    table
};

pub fn crc16(bytes: &[u8]) -> u16 {
    let crc = bytes.iter().fold(0xFFFFu16, |crc, &byte| {
        (crc >> 8) ^ TABLE[usize::from((crc ^ u16::from(byte)) & 0xFF)]
    });
    !crc.rotate_left(8)
}
