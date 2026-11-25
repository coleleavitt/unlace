use super::*;

fn record(specific: u64, prototype: Option<&str>) -> FidRecord {
    FidRecord {
        full_hash: 42,
        specific_hash: specific,
        code_unit_size: 5,
        specific_addl: 0,
        flags: 0,
        name: "f".into(),
        prototype: prototype.map(str::to_owned),
        typedefs: Default::default(),
    }
}

#[test]
fn the_exact_record_wins_and_a_disagreement_applies_nothing() {
    let query = FidHashQuad {
        full_hash: 42,
        specific_hash: 9,
        code_unit_size: 5,
        specific_addl_size: 0,
    };
    assert!(pick(&[record(9, None)], &query).is_none());
    let agree = [
        record(1, Some("int f(void)")),
        record(2, None),
        record(3, Some("int f(void)")),
    ];
    assert_eq!(pick(&agree, &query).unwrap().specific_hash, 1);
    let differ = [
        record(1, Some("int f(void)")),
        record(3, Some("int f(int a)")),
    ];
    assert!(pick(&differ, &query).is_none());
    let exact = [
        record(1, Some("int f(void)")),
        record(9, Some("int f(int a)")),
    ];
    assert_eq!(pick(&exact, &query).unwrap().specific_hash, 9);
}

#[test]
fn a_type_two_objects_define_differently_is_left_opaque() {
    let forward = |n: &str| format!("typedef struct {n} {n};");
    let mut records = [
        record(1, Some("int f(s *p,t *q)")),
        record(2, Some("int g(s *p,t *q)")),
    ];
    records[0].typedefs = vec![
        forward("s"),
        forward("t"),
        "struct s { int4 a; };".into(),
        "struct t { int4 a; };".into(),
    ]
    .into();
    records[1].typedefs = vec![
        forward("s"),
        forward("t"),
        "struct s { int8 b; };".into(),
        "struct t { int4 a; };".into(),
    ]
    .into();
    assert_eq!(drop_disputed(&mut records), ["s"]);
    assert_eq!(
        *records[0].typedefs,
        [forward("s"), forward("t"), "struct t { int4 a; };".into()]
    );
    assert_eq!(
        *records[1].typedefs,
        [forward("s"), forward("t"), "struct t { int4 a; };".into()]
    );
}

#[test]
fn an_enumeration_two_objects_define_differently_is_left_out() {
    let mut records = [
        record(1, Some("int f(mode m)")),
        record(2, Some("int g(mode m)")),
    ];
    records[0].typedefs = vec!["typedef enum mode : uint4 { A = 0x0 } mode;".to_string()].into();
    records[1].typedefs = vec!["typedef enum mode : uint4 { B = 0x2 } mode;".to_string()].into();
    assert_eq!(drop_disputed(&mut records), ["mode"]);
    assert!(records.iter().all(|r| r.typedefs.is_empty()));
}
