use super::*;

fn record(name: &str, prototype: Option<&str>) -> FidRecord {
    FidRecord {
        full_hash: 1,
        specific_hash: 2,
        code_unit_size: 4,
        specific_addl: 0,
        flags: 0,
        name: name.into(),
        prototype: prototype.map(str::to_owned),
        typedefs: Default::default(),
    }
}

#[test]
fn a_stated_prototype_reaches_its_records_and_replaces_a_read_one() {
    let mut declared = Declared::default();
    declared
        .add("typedef struct hdr { unsigned int  magic; }")
        .unwrap();
    declared
        .add("prototype parse int parse(hdr *out);")
        .unwrap();
    declared.add("prototype absent void absent(void)").unwrap();
    assert!(declared.add("name v1 total").is_err());
    let mut records = [
        record("parse", Some("int parse(void *a)")),
        record("other", None),
    ];
    assert_eq!(declared.fill(&mut records), ["absent"]);
    assert_eq!(records[0].prototype.as_deref(), Some("int parse(hdr *out)"));
    assert_eq!(
        *records[0].typedefs,
        ["struct hdr { unsigned int magic; };"]
    );
    assert_eq!(records[1], record("other", None));
}
