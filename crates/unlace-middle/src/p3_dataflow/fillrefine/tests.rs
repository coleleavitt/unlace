use super::*;

#[test]
fn a_piece_holds_its_own_bytes_of_the_constant() {
    assert_eq!(piece(0x0000_0000_d016_0250, 0, 4), 0xd016_0250);
    assert_eq!(piece(0x0000_0000_d016_0250, 4, 4), 0);
    assert_eq!(piece(0x0000_3412_0000_0000, 4, 2), 0x3412);
    assert_eq!(piece(0x1122_3344_5566_7788, 1, 2), 0x6677);
    assert_eq!(piece(0x1122_3344_5566_7788, 0, 8), 0x1122_3344_5566_7788);
}

#[test]
fn a_fill_repeats_one_byte() {
    assert!(is_fill(0, 16));
    assert!(is_fill(0, 8));
    assert!(is_fill(u64::MAX, 8));
    assert!(is_fill(0x4141_4141, 4));
    assert!(!is_fill(0x40_2000, 8), "an address is not a fill");
    assert!(
        !is_fill(1, 16),
        "a wide constant is a fill only when it is zero"
    );
    assert!(!is_fill(0x6f77_206f_6c6c_6568, 8));
}

#[test]
fn bytes_above_the_low_64_bits_are_zero() {
    assert_eq!(piece(u64::MAX, 8, 4), 0);
    assert_eq!(piece(u64::MAX, 12, 4), 0);
    assert_eq!(piece(u64::MAX, 6, 10), 0xffff);
}
