use super::*;

fn layout() -> VariantLayout {
    VariantLayout {
        type_name: "Option<&u32>".into(),
        size: 8,
        tag_offset: 0,
        tag_size: 8,
        payload_offset: 0,
        niche: true,
        union_type: "Option<&u32>::payload".into(),
        variants: vec![
            VariantFacet {
                name: "None".into(),
                discr: Some(0),
                label: String::new(),
                payload_type: String::new(),
                fields: vec![],
            },
            VariantFacet {
                name: "Some".into(),
                discr: None,
                label: "Some".into(),
                payload_type: "Option<&u32>::Some".into(),
                fields: vec![("__0".into(), 0)],
            },
        ],
    }
}

/// A value a variant claims picks that variant; every other value falls to
/// the DEFAULT variant, which is the whole point of the niche encoding.
#[test]
fn facet_for_discr_prefers_exact_then_default() {
    let l = layout();
    assert_eq!(l.facet_for_discr(0).unwrap().name, "None");
    assert_eq!(l.facet_for_discr(1).unwrap().name, "Some");
    assert_eq!(l.facet_for_discr(0xdeadbeef).unwrap().name, "Some");
    assert_eq!(
        l.facet_named("Some").unwrap().fields,
        vec![("__0".to_string(), 0)]
    );
    assert!(l.facet_named("Err").is_none());
}

/// A single payload-carrying variant keeps its name; two that overlay the
/// same bytes do not, and `names_any_variant` is what says which happened.
#[test]
fn names_any_variant_tracks_the_suppression() {
    let l = layout();
    assert!(
        l.names_any_variant(),
        "`Some` is the only payload variant here"
    );

    let mut r = layout();
    r.type_name = "Result<u64, u64>".into();
    r.variants[0] = VariantFacet {
        name: "Ok".into(),
        discr: Some(0),
        label: "field_0x8".into(),
        payload_type: "Result<u64, u64>::field_0x8".into(),
        fields: vec![("__0".into(), 8)],
    };
    r.variants[1] = VariantFacet {
        name: "Err".into(),
        discr: Some(1),
        label: "field_0x8".into(),
        payload_type: "Result<u64, u64>::field_0x8".into(),
        fields: vec![("__0".into(), 8)],
    };
    assert!(
        !r.names_any_variant(),
        "two variants at one offset name neither"
    );
    // The SOURCE names are still on the table -- suppression is a rendering
    // decision, not a loss of what DWARF said.
    assert_eq!(r.facet_for_discr(1).unwrap().name, "Err");
}

/// With no default variant an unclaimed value selects nothing -- the lookup
/// must not fall back to "the first one".
#[test]
fn facet_for_discr_without_default_refuses_unclaimed() {
    let mut l = layout();
    l.niche = false;
    l.variants[1].discr = Some(1);
    assert_eq!(l.facet_for_discr(1).unwrap().name, "Some");
    assert!(
        l.facet_for_discr(7).is_none(),
        "no default variant => no answer"
    );
}
