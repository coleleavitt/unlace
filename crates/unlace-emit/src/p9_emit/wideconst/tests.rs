use super::*;

#[test]
fn shifts_and_prints_across_limbs() {
    let a = shl([0x00ff_ffff_ffff_ffff, 0, 0, 0], 64);
    let b = or(a, [u64::MAX, 0, 0, 0]);
    let c = or(shl(b, 40), [0xff_ffff_ffff, 0, 0, 0]);
    assert_eq!(hex(mask(c, 32)), format!("0x{}", "f".repeat(40)));
    assert_eq!(hex([0x2a, 0, 0, 0]), "0x2a");
    assert_eq!(hex([0, 1, 0, 0]), "0x10000000000000000");
}
