use super::*;

/// Spot-check entries against the literal values in the C++ source
/// (crc32.cc:21-72): the first row, the reflected polynomial at index
/// 128, and the final entry.
#[test]
fn test_crc32_table_known_entries_from_cpp_source() {
    assert_eq!(crc32tab[0], 0x0);
    assert_eq!(crc32tab[1], 0x77073096);
    assert_eq!(crc32tab[2], 0xee0e612c);
    assert_eq!(crc32tab[3], 0x990951ba);
    assert_eq!(crc32tab[4], 0x76dc419);
    assert_eq!(crc32tab[5], 0x706af48f);
    assert_eq!(crc32tab[8], 0xedb8832); // 0x0edb8832 -- leading zero dropped in C++
    assert_eq!(crc32tab[128], 0xedb88320); // the reflected polynomial itself
    assert_eq!(crc32tab[254], 0x5a05df1b);
    assert_eq!(crc32tab[255], 0x2d02ef8d);
}

/// Regenerate the whole table from the reflected polynomial 0xEDB88320
/// and compare entry-for-entry, proving the 256-value transcription has
/// no typos.
#[test]
fn test_crc32_table_matches_generator_polynomial() {
    for (i, &entry) in crc32tab.iter().enumerate() {
        let mut r = i as u32;
        for _ in 0..8 {
            r = if r & 1 != 0 {
                (r >> 1) ^ 0xEDB88320
            } else {
                r >> 1
            };
        }
        assert_eq!(entry, r, "crc32tab[{}] mismatch", i);
    }
}

/// Known-answer vector: the standard CRC-32 ("CRC-32/ISO-HDLC") of
/// "123456789" is 0xCBF43926.  Driving crc_update with the standard
/// 0xFFFFFFFF pre/post conditioning must reproduce it, validating both
/// the table and the update step end to end.
#[test]
fn test_crc32_known_answer_check_string() {
    let mut reg: u32 = 0xFFFFFFFF;
    for &b in b"123456789" {
        reg = crc_update(reg, b as u32);
    }
    assert_eq!(reg ^ 0xFFFFFFFF, 0xCBF43926);
}

/// Raw crc_update vectors as the C++ callers use it (no conditioning),
/// computed from the C++ table by hand:
///   crc_update(0,0)               = crc32tab[0]        = 0
///   crc_update(0,1)               = crc32tab[1]        = 0x77073096
///   crc_update(0x12345678,0x9a)   = crc32tab[0xe2]^0x123456 = 0x4e16b702
///   feeding "SLEIGH" from reg 0   = 0x03a7c131
#[test]
fn test_crc32_update_raw_register_vectors() {
    assert_eq!(crc_update(0, 0), 0);
    assert_eq!(crc_update(0, 1), 0x77073096);
    assert_eq!(crc_update(0x12345678, 0x9a), 0x4e16b702);
    let mut reg: u32 = 0;
    for &b in b"SLEIGH" {
        reg = crc_update(reg, b as u32);
    }
    assert_eq!(reg, 0x03a7c131);
}

/// `val` is documented as "8 bits (least significant)": upper bits of val
/// only participate through the `& 0xff` mask -- same as C++.
#[test]
fn test_crc32_update_masks_val_to_low_byte() {
    assert_eq!(crc_update(0xdeadbeef, 0x141), crc_update(0xdeadbeef, 0x41));
}
