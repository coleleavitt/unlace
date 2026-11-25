use super::*;

#[test]
fn local_linkage_does_not_override_an_external_import() {
    let mut sub = DieSnap::new(gimli::DW_TAG_subprogram, 1);
    sub.low_pc = Some(0x1000);
    sub.linkage_name = "shared_name".into();
    let imports = BTreeMap::from([("shared_name".into(), vec![0x2000])]);
    let mut out = Vec::new();
    let pieces = PrototypePieces::default();
    append(
        &sub,
        &BTreeMap::new(),
        &pieces,
        &imports,
        &BTreeSet::new(),
        &mut out,
    );
    assert!(out.is_empty());
    sub.external = Some(false);
    append(
        &sub,
        &BTreeMap::new(),
        &pieces,
        &imports,
        &BTreeSet::new(),
        &mut out,
    );
    assert!(out.is_empty());
    sub.external = Some(true);
    append(
        &sub,
        &BTreeMap::new(),
        &pieces,
        &imports,
        &BTreeSet::new(),
        &mut out,
    );
    assert_eq!(out.len(), 1);
}

#[test]
fn exact_linkage_without_guessed_names_or_abstract_origins() {
    let mut sub = DieSnap::new(gimli::DW_TAG_subprogram, 1);
    sub.name = "sample".into();
    let mut declaration = sub.clone();
    declaration.linkage_name = "_ZN7samples7shiftedEf".into();
    let dies = BTreeMap::from([(7, declaration)]);
    assert_eq!(linkage(&sub, &dies), None);
    sub.origin_ref = Some(7);
    assert_eq!(linkage(&sub, &dies), None);
    sub.origin_is_spec = true;
    assert_eq!(linkage(&sub, &dies), Some("_ZN7samples7shiftedEf"));
    sub.linkage_name = "exact_name".into();
    assert_eq!(linkage(&sub, &dies), Some("exact_name"));
}

#[test]
fn absent_linkage_requires_an_exact_defined_symbol_at_the_entry() {
    let mut sub = DieSnap::new(gimli::DW_TAG_subprogram, 1);
    sub.name = "set_float".into();
    sub.external = Some(true);
    sub.low_pc = Some(0x1000);
    let imports = BTreeMap::from([("set_float".into(), vec![0x2000])]);
    let mut out = Vec::new();
    let pieces = PrototypePieces::default();
    for definitions in [
        BTreeSet::new(),
        BTreeSet::from([(0x1001, "set_float".into())]),
        BTreeSet::from([(0x1000, "different".into())]),
    ] {
        append(
            &sub,
            &BTreeMap::new(),
            &pieces,
            &imports,
            &definitions,
            &mut out,
        );
        assert!(out.is_empty());
    }
    let definitions = BTreeSet::from([(0x1000, "set_float".into())]);
    append(
        &sub,
        &BTreeMap::new(),
        &pieces,
        &imports,
        &definitions,
        &mut out,
    );
    assert_eq!(out.len(), 1);
    sub.linkage_name = "authoritative_other_name".into();
    out.clear();
    append(
        &sub,
        &BTreeMap::new(),
        &pieces,
        &imports,
        &definitions,
        &mut out,
    );
    assert!(out.is_empty());
}
