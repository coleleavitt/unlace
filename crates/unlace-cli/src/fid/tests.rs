use super::*;

fn record(full_hash: u64, specific_hash: u64, name: &str) -> FidRecord {
    FidRecord {
        full_hash,
        specific_hash,
        code_unit_size: 4,
        specific_addl: 2,
        flags: 0,
        name: name.to_string(),
        prototype: None,
        typedefs: Default::default(),
    }
}

#[test]
fn dedup_preserves_first_metadata_and_input_order() {
    let first = record(9, 2, "same");
    let earlier_hash = record(1, 2, "same");
    let other_specific = record(9, 3, "same");
    let alias = record(9, 2, "alias");
    let mut duplicate = first.clone();
    duplicate.code_unit_size = -1;
    duplicate.specific_addl = 255;
    duplicate.flags = 255;
    let expected = vec![
        first.clone(),
        earlier_hash.clone(),
        other_specific.clone(),
        alias.clone(),
    ];
    let mut records = vec![first, earlier_hash, duplicate, other_specific, alias];
    records.push(records[1].clone());

    dedup_records(&mut records);

    assert_eq!(records, expected);
}

#[test]
fn dedup_handles_empty_and_all_duplicate_inputs() {
    let mut records = Vec::new();
    dedup_records(&mut records);
    assert!(records.is_empty());

    let first = record(u64::MAX, u64::MAX, "");
    records = vec![first.clone(); 8];
    dedup_records(&mut records);
    assert_eq!(records, vec![first]);
}
