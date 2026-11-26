use super::*;

fn slots(entries: &[(&str, Option<&str>)]) -> DeclaredSlots {
    let declared = entries
        .iter()
        .map(|(name, ty)| Declared {
            name: name.to_string(),
            type_name: ty.map(str::to_string),
            pointer_or_float: ty.is_some_and(|t| t.ends_with('*') || t == "double"),
        })
        .collect();
    DeclaredSlots {
        slots: HashMap::from([((-0x18, 8), declared)]),
    }
}

#[test]
fn one_declaration_types_its_slot() {
    assert_eq!(
        slots(&[("v1", Some("double"))])
            .covering_type(-0x18, 8)
            .as_deref(),
        Some("double")
    );
}

#[test]
fn same_width_declarations_that_agree_type_the_slot() {
    let s = slots(&[("v1", Some("char *")), ("v4", Some("char *"))]);
    assert_eq!(s.covering_type(-0x18, 8).as_deref(), Some("char *"));
}

#[test]
fn same_width_declarations_that_differ_leave_it_undefined() {
    assert_eq!(
        slots(&[("v1", Some("char *")), ("v4", Some("long"))]).covering_type(-0x18, 8),
        None
    );
}

#[test]
fn a_byte_scalar_declaration_leaves_it_undefined() {
    assert_eq!(slots(&[("v1", None)]).covering_type(-0x18, 8), None);
    assert_eq!(
        slots(&[("v1", None), ("v2", None)]).covering_type(-0x18, 8),
        None
    );
    assert_eq!(
        slots(&[("v1", Some("long")), ("v2", None)]).covering_type(-0x18, 8),
        None
    );
}

#[test]
fn a_declaration_of_another_width_is_not_consulted() {
    let s = slots(&[("v1", Some("double"))]);
    assert_eq!(s.covering_type(-0x18, 4), None);
    assert_eq!(s.covering_type(-0x10, 8), None);
}

#[test]
fn a_symbol_takes_its_own_declaration_among_sharers() {
    let s = slots(&[("v1", Some("char *")), ("v4", Some("long"))]);
    assert_eq!(s.declared_type("v4", -0x18, 8).as_deref(), Some("long"));
    assert_eq!(s.declared_type("v9", -0x18, 8), None);
}
