use super::*;

#[test]
fn test_wrap_unsigned_wraparound() {
    assert_eq!(u64::MAX.wadd(1), 0);
    assert_eq!(0u64.wsub(1), u64::MAX);
    assert_eq!(0x8000_0000_0000_0000u64.wmul(2), 0);
    assert_eq!(1u64.wneg(), u64::MAX);
    assert_eq!(u32::MAX.wadd(2), 1);
    assert_eq!(0u32.wsub(1), u32::MAX);
}

#[test]
fn test_wrap_signed_wraparound() {
    assert_eq!(i64::MAX.wadd(1), i64::MIN);
    assert_eq!(i64::MIN.wsub(1), i64::MAX);
    assert_eq!(i64::MIN.wneg(), i64::MIN); // two's-complement edge
    assert_eq!(i64::MIN.wdiv(-1), i64::MIN); // wraps instead of trapping
    assert_eq!(i32::MIN.wmul(-1), i32::MIN);
}

#[test]
fn test_wrap_shift_counts_mask_like_x86() {
    // Count is taken modulo the bit width, matching x86 shifts.
    assert_eq!(1u64.wshl(64), 1);
    assert_eq!(1u64.wshl(65), 2);
    assert_eq!(0x8000_0000u32.wshr(32), 0x8000_0000);
    // Arithmetic shift on signed types.
    assert_eq!((-8i64).wshr(1), -4);
    // Logical shift on unsigned types.
    assert_eq!(0x8000_0000_0000_0000u64.wshr(63), 1);
}

#[test]
fn test_host_endian_value() {
    if cfg!(target_endian = "big") {
        assert_eq!(HOST_ENDIAN, 1);
    } else {
        assert_eq!(HOST_ENDIAN, 0);
    }
}
