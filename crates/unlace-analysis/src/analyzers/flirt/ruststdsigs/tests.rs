use super::*;

fn rustc(raw: &str) -> Rustc {
    Rustc::parse(raw).expect("parses")
}

#[test]
fn records_parse_with_their_date() {
    let r = rustc("1.94.0-nightly (b68e16cfc 2026-01-11)");
    assert_eq!(r.version, (1, 94, 0));
    assert_eq!(r.day, parse_date("2026-01-11"));
    assert_eq!(parse_date("1970-01-01"), Some(0));
    assert_eq!(
        parse_date("2026-01-12").zip(r.day).map(|(a, b)| a - b),
        Some(1)
    );
    assert_eq!(rustc("1.100.0-dev").day, None);
}

#[test]
fn exact_takes_only_the_same_compiler_and_nearest_the_closest_release() {
    let toolchains = vec![
        (PathBuf::from("a"), rustc("1.95.0 (59807616e 2026-04-14)")),
        (PathBuf::from("b"), rustc("1.100.0 (0ef1bc386 2026-11-09)")),
        (
            PathBuf::from("c"),
            rustc("1.102.0-nightly (29a5d066d 2026-11-12)"),
        ),
    ];
    let image = rustc("1.101.0-nightly (712e1d350 2026-11-05)");
    assert!(choose(&image, &toolchains, RustStdSigs::Exact).is_none());
    let near = choose(&image, &toolchains, RustStdSigs::Nearest).unwrap();
    assert_eq!(near.0, PathBuf::from("b"));
    let old = rustc("1.94.0-nightly (b68e16cfc 2026-01-11)");
    assert_eq!(
        choose(&old, &toolchains, RustStdSigs::Nearest).unwrap().0,
        PathBuf::from("a")
    );
    let same = rustc("1.95.0 (59807616e 2026-04-14)");
    assert_eq!(
        choose(&same, &toolchains, RustStdSigs::Exact).unwrap().0,
        PathBuf::from("a")
    );
}
