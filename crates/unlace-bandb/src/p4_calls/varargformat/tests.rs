use super::integer_arguments;

#[test]
fn consumes_promoted_integers_and_star_operands() {
    assert_eq!(
        integer_arguments(b"%i %hhu %% %*.*d"),
        Some(vec![false, true, false, false, false])
    );
    assert_eq!(integer_arguments(b"%08x %c"), Some(vec![true, false]));
    assert_eq!(integer_arguments(b"plain %%"), Some(vec![]));
}

#[test]
fn declines_unknown_widths_classes_and_positions() {
    for format in [
        b"%lld".as_slice(),
        b"%f",
        b"%s",
        b"%n",
        b"%q",
        b"%hc",
        b"%2$d",
        b"%*2$d",
        b"tail %",
        b"%*.*",
    ] {
        assert_eq!(integer_arguments(format), None, "{format:?}");
    }
    assert_eq!(integer_arguments(&b"%i".repeat(17)), None);
}
