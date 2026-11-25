use super::*;

fn result(name: &str, code: Option<&str>) -> FuncResult {
    FuncResult {
        stack_objects: Vec::new(),
        name: name.into(),
        address: 0x1000,
        byte_address: 0x1000,
        size: 16,
        code: code.map(Into::into),
        error: code.is_none().then(|| "failed".into()),
        proto: None,
        emitted_c_name: None,
        call_declarations: Vec::new(),
        callwide_prototypes: Vec::new(),
        variables: Vec::new(),
        types: Vec::new(),
        globals: Vec::new(),
        field_calls: Vec::new(),
        line_mappings: Vec::new(),
        aliases: vec!["alias".into()],
        object_location: None,
        callee_hints: Vec::new(),
        synth: None,
        pointerargs: None,
        warnings: Vec::new(),
        detail: None,
    }
}

fn check(mut store: ResultStore) {
    let warning = unlace_decomp::functionwarnings::Warning {
        address: Some(0x1004),
        text: "WARNING: Bad instruction".into(),
        line: 2,
    };
    store.put(
        2,
        FuncResult {
            warnings: vec![warning.clone()],
            ..result("c", Some("int c(void)\n{\n}"))
        },
    );
    store.put(0, result("a", None));
    store.put(0, result("a2", Some("void a(void)")));
    let mut tokens = result("d", Some("void d(void)"));
    tokens.detail = Some(Box::default());
    store.put(3, tokens);
    assert_eq!(store.get(1).map(|r| r.name), None);
    assert_eq!(store.get(0).map(|r| r.name).as_deref(), Some("a2"));
    assert_eq!(
        (
            store.lines(0),
            store.lines(1),
            store.lines(2),
            store.printed()
        ),
        (1, 0, 3, 5)
    );
    let all = store.into_results();
    assert_eq!(
        all.iter().map(|r| r.name.as_str()).collect::<Vec<_>>(),
        ["a2", "c", "d"]
    );
    assert_eq!(all[1].code.as_deref(), Some("int c(void)\n{\n}"));
    assert_eq!(all[1].aliases, ["alias"]);
    assert_eq!(all[1].warnings, [warning]);
    assert!(all[2].detail.is_some());
}

#[test]
fn results_read_back_as_written_from_the_file_and_from_memory() {
    let store = ResultStore::new(4);
    assert!(store.file.is_some());
    check(store);
    check(ResultStore::over(None, 4));
}

#[test]
fn a_failed_write_keeps_the_results_already_on_file() {
    let spool = tempfile::NamedTempFile::new().unwrap();
    let mut store = ResultStore::over(Some(spool.reopen().unwrap()), 3);
    store.put(0, result("a", Some("void a(void)")));
    assert!(matches!(
        store.slots[0].as_ref().map(|s| &s.body),
        Some(Body::File { .. })
    ));
    store.file = Some(std::fs::File::open(spool.path()).unwrap());
    store.put(1, result("b", Some("void b(void)")));
    assert!(matches!(
        store.slots[1].as_ref().map(|s| &s.body),
        Some(Body::Memory(_))
    ));
    store.put(2, result("c", None));
    assert_eq!(store.get(0).map(|r| r.name).as_deref(), Some("a"));
    let all = store.into_results();
    assert_eq!(
        all.iter().map(|r| r.name.as_str()).collect::<Vec<_>>(),
        ["a", "b", "c"]
    );
}
