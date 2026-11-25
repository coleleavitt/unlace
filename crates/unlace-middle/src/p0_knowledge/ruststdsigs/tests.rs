use super::*;

#[test]
fn values_parse_and_print() {
    for (v, want) in [
        ("off", RustStdSigs::Off),
        ("exact", RustStdSigs::Exact),
        ("on", RustStdSigs::Exact),
        ("Nearest", RustStdSigs::Nearest),
    ] {
        assert_eq!(RustStdSigs::parse(v), Some(want), "{v}");
    }
    assert_eq!(RustStdSigs::parse("closest"), None);
    assert_eq!(RustStdSigs::Nearest.as_str(), "nearest");
}
