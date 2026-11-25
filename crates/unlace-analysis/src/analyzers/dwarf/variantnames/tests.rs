use super::*;

fn facet(name: &str, discr: Option<u64>) -> VariantFacet {
    VariantFacet {
        name: name.to_string(),
        discr,
        label: String::new(),
        payload_type: String::new(),
        fields: Vec::new(),
    }
}

#[test]
fn namemap_masks_skips_default_and_keeps_first() {
    let facets = [
        facet("Ok", Some(0)),
        facet("Err", Some(1)),
        facet("None", None),                 // default variant: no single value
        facet("", Some(2)),                  // nameless: nothing to print
        facet("Alias", Some(0x1_0000_0001)), // masked to 1 at width 4 -> Err wins
    ];
    let m = tag_namemap(&facets, 4);
    assert_eq!(m.len(), 2);
    assert_eq!(m[&0], "Ok");
    assert_eq!(m[&1], "Err");
    // width 8: the alias keeps its own key.
    let m8 = tag_namemap(&facets, 8);
    assert_eq!(m8[&0x1_0000_0001], "Alias");
    // a one-byte tag masks to its width.
    let m1 = tag_namemap(&[facet("X", Some(0x101))], 1);
    assert_eq!(m1[&1], "X");
}
