use super::address_unit_bytes;

#[test]
fn c2000_counts_words_and_everything_else_bytes() {
    assert_eq!(address_unit_bytes(Some(141)), 2);
    assert_eq!(address_unit_bytes(Some(62)), 1);
    assert_eq!(address_unit_bytes(None), 1);
}
