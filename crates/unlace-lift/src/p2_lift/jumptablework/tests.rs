use super::*;

#[test]
fn the_bound_sums_instructions_and_off_never_stops() {
    assert!(!exhausted(None, u64::MAX));
    assert!(!exhausted(Some(DEFAULT_LIMIT), DEFAULT_LIMIT));
    assert!(exhausted(Some(DEFAULT_LIMIT), DEFAULT_LIMIT + 1));
    assert_eq!(OptionJumpTableWork.apply("off").unwrap().0, None);
    assert_eq!(OptionJumpTableWork.apply("4096").unwrap().0, Some(4096));
    assert!(OptionJumpTableWork.apply("on").is_err());
    assert!(OptionJumpTableWork.apply("-1").is_err());
}
