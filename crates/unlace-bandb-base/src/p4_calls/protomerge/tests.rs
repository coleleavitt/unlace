use super::*;

fn dt(size: i32, meta: type_metatype) -> Rc<Datatype> {
    Rc::new(Datatype::new(size, meta))
}

fn pieces(intypes: Vec<Rc<Datatype>>, innames: &[&str]) -> PrototypePieces {
    PrototypePieces {
        name: "f".into(),
        outtype: None,
        intypes,
        innames: innames.iter().map(|s| s.to_string()).collect(),
        first_var_arg_slot: -1,
        output_storage: None,
        input_storage: Vec::new(),
        unlace_library_names: None,
    }
}

#[test]
fn keeps_the_more_specific_slot_and_fills_names() {
    let old = pieces(
        vec![
            dt(8, type_metatype::TYPE_FLOAT),
            dt(4, type_metatype::TYPE_INT),
        ],
        &["x", "n"],
    );
    let new = pieces(
        vec![
            dt(8, type_metatype::TYPE_UINT),
            dt(4, type_metatype::TYPE_UNKNOWN),
        ],
        &["", "count"],
    );
    // a later pointer is kept over an earlier one of another kind
    let p_old = pieces(vec![dt(8, type_metatype::TYPE_STRUCT)], &[""]);
    let p_new = pieces(vec![dt(8, type_metatype::TYPE_PTR)], &[""]);
    assert_eq!(
        merge(&p_old, p_new).intypes[0].get_metatype(),
        type_metatype::TYPE_PTR
    );
    let m = merge(&old, new);
    assert_eq!(m.intypes[0].get_metatype(), type_metatype::TYPE_FLOAT);
    assert_eq!(m.intypes[1].get_metatype(), type_metatype::TYPE_INT);
    assert_eq!(m.innames, vec!["x", "count"]);
}

#[test]
fn a_different_shape_replaces() {
    let old = pieces(vec![dt(8, type_metatype::TYPE_FLOAT)], &["x"]);
    let new = pieces(vec![dt(4, type_metatype::TYPE_INT)], &[""]);
    let m = merge(&old, new);
    assert_eq!(m.intypes[0].get_metatype(), type_metatype::TYPE_INT);
    assert_eq!(m.innames, vec![""]);
}
