use super::macro_name;

#[test]
fn names_follow_the_part_macros() {
    assert_eq!(macro_name(4, 0, 1).as_deref(), Some("LOBYTE"));
    assert_eq!(macro_name(4, 1, 1).as_deref(), Some("BYTE1"));
    assert_eq!(macro_name(4, 0, 2).as_deref(), Some("LOWORD"));
    assert_eq!(macro_name(4, 2, 2).as_deref(), Some("HIWORD"));
    assert_eq!(macro_name(8, 0, 4).as_deref(), Some("LODWORD"));
    assert_eq!(macro_name(8, 4, 4).as_deref(), Some("HIDWORD"));
    assert_eq!(macro_name(8, 2, 2).as_deref(), Some("WORD1"));
    assert_eq!(macro_name(8, 7, 1).as_deref(), Some("BYTE7"));
}

#[test]
fn unaligned_or_out_of_range_parts_have_no_macro() {
    assert_eq!(macro_name(4, 1, 2), None);
    assert_eq!(macro_name(4, 2, 4), None);
    assert_eq!(macro_name(4, 4, 1), None);
    assert_eq!(macro_name(4, 0, 8), None);
}
