use super::*;

#[test]
fn the_limit_counts_cloned_ops_and_off_never_declines() {
    assert!(!split_is_declined(None, 1 << 20, 1 << 20));
    assert!(!split_is_declined(Some(DEFAULT_LIMIT), 3000, 349));
    assert!(split_is_declined(Some(DEFAULT_LIMIT), 3000, 350));
    assert!(!split_is_declined(Some(0), 0, 10));
    assert_eq!(OptionRetSplitLimit.apply("off").unwrap().0, None);
    assert_eq!(OptionRetSplitLimit.apply("4096").unwrap().0, Some(4096));
    assert!(OptionRetSplitLimit.apply("on").is_err());
    assert!(OptionRetSplitLimit.apply("-1").is_err());
}
