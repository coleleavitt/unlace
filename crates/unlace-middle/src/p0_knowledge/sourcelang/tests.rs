use super::*;

#[test]
fn tokens_round_trip() {
    for lang in [
        SourceLang::C,
        SourceLang::Rust,
        SourceLang::Go,
        SourceLang::Swift,
    ] {
        assert_eq!(SourceLang::parse_forced(lang.as_str()), Some(lang));
    }
    assert_eq!(SourceLang::parse_forced("golang"), Some(SourceLang::Go));
    assert_eq!(SourceLang::parse_forced(" RUST "), Some(SourceLang::Rust));
    // `auto`/`unknown` are not forceable languages.
    assert_eq!(SourceLang::parse_forced("auto"), None);
    assert_eq!(SourceLang::parse_forced("unknown"), None);
    assert_eq!(SourceLang::parse_forced("cpp"), None);
}

#[test]
fn option_values_parse_and_refuse() {
    assert_eq!(parse_option_value("auto"), Ok(None));
    assert_eq!(parse_option_value(""), Ok(None));
    assert_eq!(parse_option_value("go"), Ok(Some(SourceLang::Go)));
    assert!(parse_option_value("fortran").is_err());
}
