use super::*;

#[test]
fn the_flag_is_removed_and_the_last_count_wins() {
    let mut argv: Vec<String> = ["cache", "--follow-images", "0", "0x10", "--follow-images=3"]
        .map(String::from)
        .to_vec();
    assert_eq!(take_limit(&mut argv), Ok(3));
    assert_eq!(argv, ["cache", "0x10"]);
    assert_eq!(take_limit(&mut argv), Ok(DEFAULT_LIMIT));
    assert!(take_limit(&mut vec!["--follow-images".into(), "many".into()]).is_err());
}

#[test]
fn only_a_0x_token_is_an_address() {
    assert_eq!(address("0x1870ac53c"), Some(0x1_870a_c53c));
    assert_eq!(address("1870ac53c"), None);
    assert_eq!(address("0xzz"), None);
}
