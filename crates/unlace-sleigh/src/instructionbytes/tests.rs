use super::*;

const BYTES: [u8; 16] = [
    0x12, 0x34, 0x56, 0x78, 0x9a, 0xbc, 0xde, 0xf0, 0xfe, 0xdc, 0xba, 0x98, 0x76, 0x54, 0x32, 0x10,
];

#[test]
fn packed_reads_and_zero_filled_tails() {
    assert_eq!(read_bytes(&BYTES, 0, 1), 0x12);
    assert_eq!(read_bytes(&BYTES, 1, 2), 0x3456);
    assert_eq!(read_bytes(&BYTES, 2, 3), 0x56789a);
    assert_eq!(read_bytes(&BYTES, 3, 4), 0x789abcde);
    assert_eq!(read_bytes(&BYTES, 12, 4), 0x76543210);
    assert_eq!(read_bytes(&BYTES, 13, 4), 0x54321000);
    assert_eq!(read_bytes(&BYTES, 14, 4), 0x32100000);
    assert_eq!(read_bytes(&BYTES, 15, 4), 0x10000000);
    assert_eq!(read_bytes(&BYTES, 0, 5), 0x3456789a);
    assert_eq!(read_bytes(&BYTES, 15, 0), 0);
    assert_eq!(read_bytes(&BYTES, 15, -1), 0);
}

#[test]
fn bit_reads_keep_masked_shifts_and_tail_padding() {
    assert_eq!(read_bits(&BYTES, 0, 0, 32), 0x12345678);
    assert_eq!(read_bits(&BYTES, 0, 4, 12), 0x234);
    assert_eq!(read_bits(&BYTES, 0, 7, 25), 0x345678);
    assert_eq!(read_bits(&BYTES, 13, 0, 32), 0x54321000);
    assert_eq!(read_bits(&BYTES, 15, 4, 16), 0);
    assert_eq!(read_bits(&BYTES, 0, 1, 32), 0x34000000);
    assert_eq!(read_bits(&BYTES, 0, 0, 0), 0x12000000);
}

#[test]
fn little_endian_fields_keep_only_the_requested_bytes() {
    for size in -1..=10 {
        for value in [0, 0x123456789abcdef0, -1, i64::MIN] {
            let mut expected = value;
            unlace_base::address::byte_swap_inplace(&mut expected, size);
            assert_eq!(little_endian(value, size), expected);
        }
    }
}
