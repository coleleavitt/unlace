#[test]
fn printable_range() {
    assert!((0x20..0x7f).contains(&0x41u64));
    assert!(!(0x20..0x7f).contains(&0u64));
    assert!(!(0x20..0x7f).contains(&0x7fu64));
}
