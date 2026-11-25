use super::*;

#[test]
fn view_struct_is_built_once_and_lays_out_granules() {
    let types = &crate::dtype::TypeFactoryImpl::new();
    types.set_default_alignment_map();
    types.set_max_basetype_size(8);
    types.setup_sizes(Some(8), 8, 4);
    types.cache_core_types().unwrap();
    let v = KallocView {
        name: "Widget".into(),
        signature: "12".into(),
        size: 0x14,
        is_class: true,
        pointers: false,
    };
    assert!(
        types.find_by_name("Widget").unwrap().is_none(),
        "nothing is interned before use"
    );
    let st = view_struct(types, &v).unwrap();
    assert_eq!(st.get_size(), 0x14);
    assert!(Rc::ptr_eq(&st, &view_struct(types, &v).unwrap()));
    let other = KallocView { size: 0x20, ..v };
    assert!(
        view_struct(types, &other).is_none(),
        "a different size never reuses the name"
    );
}
