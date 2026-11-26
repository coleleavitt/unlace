use super::int_converts_exactly;

#[test]
fn constants_need_only_their_own_significant_bits() {
    assert!(int_converts_exactly(24, 4, Some(1)));
    assert!(int_converts_exactly(24, 4, Some(0)));
    assert!(int_converts_exactly(24, 4, Some(0xffff_ffff)));
    assert!(int_converts_exactly(24, 4, Some(0x4000_0000)));
    assert!(!int_converts_exactly(24, 4, Some(0x0100_0001)));
    assert!(int_converts_exactly(53, 8, Some(0x8000_0000_0000_0000)));
    assert!(!int_converts_exactly(53, 8, Some(0x7fff_ffff_ffff_ffff)));
}

#[test]
fn variables_need_the_width_less_the_sign() {
    assert!(int_converts_exactly(24, 3, None));
    assert!(!int_converts_exactly(24, 4, None));
    assert!(int_converts_exactly(53, 4, None));
    assert!(!int_converts_exactly(53, 8, None));
    assert!(int_converts_exactly(64, 8, None));
}
