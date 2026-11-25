use super::*;

#[test]
fn off_clears_and_a_missing_directory_is_refused() {
    assert_eq!(parse_option_value("off").unwrap(), None);
    assert_eq!(parse_option_value("").unwrap(), None);
    assert!(parse_option_value("/definitely/not/here").is_err());
    let here = std::env::temp_dir();
    assert_eq!(
        parse_option_value(here.to_str().unwrap()).unwrap(),
        Some(here)
    );
}
