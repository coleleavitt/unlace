use super::*;
use unlace_decomp::dtype::TypeFactoryImpl;
fn factory() -> TypeFactoryImpl {
    let types = TypeFactoryImpl::new();
    types.set_default_alignment_map();
    types.set_max_basetype_size(8);
    types.setup_sizes(Some(8), 8, 4);
    types.cache_core_types().unwrap();
    types
}
#[test]
fn only_verified_target_abis_use_pair_layouts() {
    use object::{Architecture as A, BinaryFormat as B};
    assert_eq!(max_size(B::Elf, A::X86_64, "x86:LE:64:default:gcc"), 16);
    assert_eq!(max_size(B::Pe, A::I386, "x86:LE:32:default:windows"), 8);
    assert_eq!(max_size(B::Pe, A::X86_64, "x86:LE:64:default:windows"), 16);
    assert_eq!(max_size(B::MachO, A::X86_64, "x86:LE:64:default:gcc"), 0);
    assert_eq!(max_size(B::Pe, A::X86_64, "x86:LE:64:default:gcc"), 0);
    assert_eq!(max_size(B::Elf, A::I386, "x86:LE:32:default:gcc"), 0);
    assert_eq!(max_size(B::Elf, A::Aarch64, "AARCH64:LE:64:v8A:default"), 0);
}
#[test]
fn repeated_components_reuse_complete_layouts() {
    let types = factory();
    for size in [8, 16] {
        let first = complex_type(&types, size).unwrap();
        let second = complex_type(&types, size).unwrap();
        assert!(matches_layout(&first, size));
        assert!(Rc::ptr_eq(&first, &second));
    }
    for size in [4, 20, 24, 32] {
        assert!(complex_type(&types, size).is_none());
    }
}
#[test]
fn user_names_are_not_reused_or_completed() {
    let types = factory();
    let user = types.get_type_struct("unlace_complex_float").unwrap();
    let generated = complex_type(&types, 8).unwrap();
    assert_ne!(generated.get_name(), user.get_name());
    assert!(user.is_incomplete());
    let shell = types.get_type_struct("unlace_complex_double").unwrap();
    let integer = types.get_base(8, type_metatype::TYPE_UINT).unwrap();
    let user = types
        .set_fields_struct_raw(
            &shell,
            vec![
                TypeField::new(0, 0, "real", integer.clone()),
                TypeField::new(8, 8, "imag", integer),
            ],
            Vec::new(),
            16,
            8,
            0,
        )
        .unwrap();
    let generated = complex_type(&types, 16).unwrap();
    assert_ne!(generated.get_name(), user.get_name());
    assert!(matches_layout(&generated, 16));
}
