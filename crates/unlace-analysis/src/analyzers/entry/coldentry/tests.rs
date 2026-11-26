use super::*;

#[test]
fn rel32_patterns() {
    let data = [
        0x90, 0xE9, 0x10, 0, 0, 0, 0x0F, 0x84, 0xF0, 0xFF, 0xFF, 0xFF,
    ];
    let got: Vec<_> = rel32_branches(0x1000, &data).collect();
    assert!(got.contains(&(0x1001, 0x1016)));
    assert!(got.contains(&(0x1006, 0x1006 + 6 - 0x10)));
}

#[test]
fn containing_body_is_half_open() {
    let bodies = [(0x1000, 0x1100), (0x2000, 0x2010)];
    assert_eq!(containing_body(&bodies, 0x1000), Some((0x1000, 0x1100)));
    assert_eq!(containing_body(&bodies, 0x10ff), Some((0x1000, 0x1100)));
    assert_eq!(containing_body(&bodies, 0x1100), None);
    assert_eq!(containing_body(&bodies, 0x0fff), None);
}
