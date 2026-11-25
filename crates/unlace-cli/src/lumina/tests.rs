use super::*;

fn argv(v: &[&str]) -> Vec<String> {
    v.iter().map(|s| s.to_string()).collect()
}

#[test]
fn parse_takes_each_subcommands_flags_only() {
    let a = parse(
        "pull",
        &argv(&[
            "bin",
            "--server",
            "h:1",
            "--addr",
            "0x10",
            "--json",
            "--define-out",
            "d",
        ]),
    )
    .unwrap();
    assert_eq!(a.binary.as_deref(), Some("bin"));
    assert_eq!(a.addrs, vec![0x10]);
    assert!(a.json);
    assert!(parse("hash", &argv(&["bin", "--server", "h:1"])).is_err());
    assert!(parse("serve", &argv(&["--bind", "127.0.0.1:1"])).is_err());
    assert!(parse("serve", &argv(&["--db", "x", "--admin"])).is_err());
    assert!(parse("push", &argv(&["bin", "--mode", "sometimes"])).is_err());
    assert!(parse("pull", &argv(&["bin", "--timeout", "0"])).is_err());
    assert!(parse("pull", &argv(&[])).is_err());
    assert!(parse("frob", &argv(&["bin"])).is_err());
}

#[test]
fn modes_roundtrip_their_names() {
    for m in ["override-if-better", "override", "keep", "merge"] {
        assert_eq!(mode_name(parse_mode(m).unwrap()), m);
    }
}

#[test]
fn define_file_names_must_survive_its_grammar() {
    assert!(writable_name("_ZN3foo3barEv"));
    assert!(writable_name("?func@@YAXXZ"));
    assert!(!writable_name("operator new"));
    assert!(!writable_name("a#b"));
    assert!(!writable_name(""));
}

fn hit(name: &str, named: bool, rename: bool, prototype: Option<&str>) -> Match {
    Match {
        entry: 0x401000,
        current: if named {
            "kept".into()
        } else {
            "sub_401000".into()
        },
        named,
        size: 16,
        hash: [0; 16],
        name: name.into(),
        remote_size: 16,
        popularity: 1,
        prototype: prototype.map(str::to_string),
        calling_convention: None,
        comment: None,
        repeatable_comment: None,
        metadata_keys: Vec::new(),
        metadata_malformed: false,
        rename,
        declare: prototype.is_some(),
    }
}

#[test]
fn pulled_directives_name_then_declare() {
    let matches = [
        hit("parse", false, true, Some("int parse(char *buf)")),
        hit("other", true, false, Some("void kept(void)")),
        hit("bare", false, true, None),
    ];
    assert_eq!(
        pulled_directives(&matches),
        vec![
            "function 0x401000=parse".to_string(),
            "function 0x401000=bare".to_string(),
            "prototype parse int parse(char *buf)".to_string(),
            "prototype kept void kept(void)".to_string(),
        ]
    );
}

#[test]
fn result_names_cover_the_codes() {
    assert_eq!(result_name(None), "not_sent");
    assert_eq!(result_name(Some(codes::ADDED)), "added");
    assert_eq!(result_name(Some(codes::OK)), "updated");
    assert_eq!(result_name(Some(-7)), "error");
}
