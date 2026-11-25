use super::*;

#[test]
fn test_parse_arch_id() {
    assert_eq!(parse_arch_id(b"0"), 0);
    assert_eq!(parse_arch_id(b"17"), 17);
    assert_eq!(parse_arch_id(b" 3"), 3);
    assert_eq!(parse_arch_id(b"5xyz"), 5); // stops at first non-digit
    assert_eq!(parse_arch_id(b"-2"), -2);
    assert_eq!(parse_arch_id(b""), -1); // unlace divergence: -1, not 0
    assert_eq!(parse_arch_id(b"abc"), -1);
}
