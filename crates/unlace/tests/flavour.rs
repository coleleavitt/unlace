//! `unlace::unstable::flavour`: a language flavour file through the embedding API (needs the
//! checkout's `specs/`, as every workspace integration test does).

use std::io::Write as _;

use unlace::{Decompiler, Error, Language, Target};

/// `add` at 0x1000 (`lea eax, [rdi+rsi]; ret`).
fn add() -> Decompiler {
    Decompiler::from_raw(
        [0x8d, 0x04, 0x37, 0xc3],
        Target::X86_64,
        0x1000,
        &[],
        &[0x1000],
    )
    .unwrap()
    .with_function(0x1000, Some(0x1004), Some("add"))
    .with_prototype(0x1000, "int add(int a, int b)")
}

fn flavour(text: &str) -> tempfile::NamedTempFile {
    let mut file = tempfile::Builder::new().suffix(".toml").tempfile().unwrap();
    file.write_all(text.as_bytes()).unwrap();
    file
}

#[test]
fn a_flavour_file_respells_the_output() {
    let plain = add().decompile(0x1000).unwrap();
    let sum = plain
        .c
        .lines()
        .find(|line| line.trim_start().starts_with("return ") && line.contains(" + "))
        .unwrap_or_else(|| panic!("no returned sum in:\n{}", plain.c));

    let file =
        flavour("base = \"c\"\n[keywords]\nreturn = \"ret\"\n[operators]\nplus = \"plus\"\n");
    let mut decompiler = add().with_language_file(file.path()).unwrap();
    let function = decompiler.decompile(0x1000).unwrap();
    let respelled = sum.replace("return ", "ret ").replace(" + ", " plus ");
    assert_eq!(function.c, plain.c.replace(sum, &respelled));
    assert_eq!(
        function.json["functions"][0]["code"].as_str(),
        Some(function.c.as_str())
    );
    assert_eq!(function.json["language"], "c-language");
}

#[test]
fn a_file_that_overrides_nothing_changes_nothing() {
    let plain = add().with_language(Language::C).decompile(0x1000).unwrap();
    let file = flavour("base = \"c\"\n");
    let function = add()
        .with_language_file(file.path())
        .unwrap()
        .decompile(0x1000)
        .unwrap();
    assert_eq!(function.c, plain.c);
    assert_eq!(function.json["functions"], plain.json["functions"]);
    assert_eq!(function.json["language"], plain.json["language"]);
}

#[test]
fn a_refused_file_names_its_field() {
    let file = flavour("base = \"c\"\n[forms]\nswitch = \"rust-match\"\n");
    match add().with_language_file(file.path()) {
        Err(Error::Request(message)) => {
            assert!(message.contains("forms.switch"), "{message}");
            assert!(message.contains("rust-match"), "{message}");
        }
        other => panic!("expected a refused request, got {:?}", other.err()),
    }
    assert!(matches!(
        add().with_language_file("/nonexistent/flavour.toml"),
        Err(Error::Io { .. })
    ));
}

#[test]
fn the_file_names_the_language() {
    let file = flavour("base = \"c\"\n");
    let mut decompiler = add()
        .with_language(Language::Rust)
        .with_language_file(file.path())
        .unwrap();
    match decompiler.decompile(0x1000) {
        Err(Error::Request(message)) => assert!(message.contains("--language"), "{message}"),
        other => panic!("expected a refused request, got {other:?}"),
    }
}
