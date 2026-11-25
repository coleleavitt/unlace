use super::*;

#[test]
fn thumb_pointer_context_is_restored_after_success_and_error() {
    let fixture = std::path::Path::new(env!("CARGO_MANIFEST_DIR"))
        .join("../unlace-analysis/tests/fixtures/arm_interwork_le32");
    let args = parse_args(&[fixture.to_str().unwrap().into(), "0x2000000".into()]).unwrap();
    let prog = load_program(&load_args(&args, Vec::new()), DriverDefaults::Inventory).unwrap();
    let original = prog.disassemble_at(0x2000000).unwrap();
    assert_eq!(original.0, 4);
    let thumb = prog
        .with_thumb_pointer(0x2000000, || prog.disassemble_at(0x2000000))
        .unwrap()
        .unwrap();
    assert_eq!(thumb.0, 2);
    assert_eq!(prog.disassemble_at(0x2000000).unwrap(), original);
    let result = prog
        .with_thumb_pointer(0x2000000, || -> Result<(), &str> { Err("stop") })
        .unwrap();
    assert_eq!(result, Err("stop"));
    assert_eq!(prog.disassemble_at(0x2000000).unwrap(), original);
}

#[test]
fn rows_rendered_one_by_one_splice_into_the_document_dumps_would_render() {
    let row = |n: u64| {
        Json::Object(vec![
            ("address".into(), Json::Number(n.to_string())),
            (
                "ops".into(),
                Json::Array(vec![Json::Object(vec![("x".into(), Json::Null)])]),
            ),
        ])
    };
    let members = || vec![("binary".to_string(), Json::Str("a.out".into()))];
    for count in [0, 1, 3] {
        let rows: Vec<Json> = (0..count).map(row).collect();
        let rendered: Vec<String> = rows.iter().map(dumps_indent2).collect();
        let mut whole = members();
        whole.push(("instructions".into(), Json::Array(rows)));
        assert_eq!(
            object_with_rows(members(), "instructions", &rendered),
            dumps_indent2(&Json::Object(whole))
        );
    }
}
