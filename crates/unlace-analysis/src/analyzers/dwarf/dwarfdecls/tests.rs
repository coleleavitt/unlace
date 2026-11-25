use super::*;

fn decl(name: &str) -> DieSnap {
    let mut sub = DieSnap::new(gimli::DW_TAG_subprogram, 1);
    sub.name = name.into();
    sub.declaration = true;
    sub.prototyped = true;
    sub.external = Some(true);
    sub
}

#[test]
fn only_a_prototyped_declaration_of_an_undefined_import_is_kept() {
    let types = unlace_decomp::dtype::TypeFactoryImpl::new();
    types.set_default_alignment_map();
    types.set_max_basetype_size(8);
    types.setup_sizes(Some(8), 8, 4);
    types.cache_core_types().unwrap();
    let imports = BTreeMap::from([
        ("paint".to_owned(), vec![0x1030]),
        ("defined".to_owned(), vec![0x1040]),
        ("knr".to_owned(), vec![0x1050]),
    ]);
    let dies = BTreeMap::new();
    let mut decls = Decls::default();
    decls.note(&decl("paint"), &dies, &types, 8, &imports);
    decls.note(&decl("local"), &dies, &types, 8, &imports);
    decls.note(&decl("defined"), &dies, &types, 8, &imports);
    let mut definition = decl("defined");
    definition.declaration = false;
    definition.low_pc = Some(0x2000);
    decls.note(&definition, &dies, &types, 8, &imports);
    let mut knr = decl("knr");
    knr.prototyped = false;
    decls.note(&knr, &dies, &types, 8, &imports);
    let mut out = Vec::new();
    decls.finish(&imports, &mut out);
    assert_eq!(out.len(), 1);
    assert_eq!(out[0].0, 0x1030);
    assert_eq!(out[0].1.name, "paint");
}
