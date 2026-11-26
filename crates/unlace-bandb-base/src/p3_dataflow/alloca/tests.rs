use super::*;

#[test]
fn wide_constants_do_not_sign_extend() {
    assert_eq!(sign_extend(0xfff0, 2), Some(-16));
    assert_eq!(sign_extend(0xffff_fff0, 8), Some(0xffff_fff0));
    assert_eq!(sign_extend(1, 16), None);
    assert_eq!(sign_extend(1, 0), None);
}

#[test]
fn masks_at_the_i64_extremes() {
    for m in [i64::MIN, i64::MIN + 1, i64::MAX, i64::MAX - 0xf] {
        assert!(!align_mask(m));
        assert!(!remainder_mask(m));
    }
    assert!(page_mask(i64::MIN));
    assert!(align_mask(-16) && page_mask(-4096) && remainder_mask(0xff0));
}
