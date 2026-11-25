use super::*;

#[test]
fn a_run_ends_after_its_last_adjacent_word() {
    let words: BTreeSet<u64> = [0x1000, 0x1004, 0x100c].into_iter().collect();
    assert_eq!(run_end(&words, 0x1000), Some(0x1008));
    assert_eq!(run_end(&words, 0x1002), Some(0x1008));
    assert_eq!(run_end(&words, 0x1006), Some(0x1008));
    assert_eq!(run_end(&words, 0x1008), None);
    assert_eq!(run_end(&words, 0x100e), Some(0x1010));
    assert_eq!(run_end(&words, 0x0ffe), None);
}
