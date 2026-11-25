use super::*;
use crate::dtype::{TypeFactory, TypeFactoryImpl};

fn factory() -> TypeFactoryImpl {
    let types = TypeFactoryImpl::new();
    types.set_default_alignment_map();
    types.set_max_basetype_size(8);
    types
        .set_core_type("undefined", 1, type_metatype::TYPE_UNKNOWN, false)
        .unwrap();
    types.cache_core_types().unwrap();
    types
}

#[test]
fn views_preserve_the_exact_bytes_and_value_width() {
    let types = factory();
    let byte = types.get_base(1, type_metatype::TYPE_UNKNOWN).unwrap();
    let array = types.get_type_array(16, byte).unwrap();
    for size in [1, 2, 4, 8] {
        let value = types.get_base(size, type_metatype::TYPE_UINT).unwrap();
        assert_eq!(
            whole_view(&array, &value, 16 - i64::from(size), size),
            Some(false)
        );
    }
    let wide = Datatype::new(16, type_metatype::TYPE_UNKNOWN);
    assert_eq!(whole_view(&array, &wide, 0, 16), Some(true));
    assert_eq!(whole_view(&array, &array, 0, 16), Some(true));
    let piece = types.get_type_partial_struct(array.clone(), 8, 8).unwrap();
    let stripped = value_type(piece).unwrap();
    assert_eq!(whole_view(&array, &stripped, 8, 8), Some(false));
}

#[test]
fn incompatible_types_and_unbounded_pieces_stay_explicit() {
    let types = factory();
    let byte = types.get_base(1, type_metatype::TYPE_UNKNOWN).unwrap();
    let array = types.get_type_array(16, byte).unwrap();
    let word = types.get_base(8, type_metatype::TYPE_UINT).unwrap();
    for (offset, size) in [(-1, 8), (9, 8), (i64::MAX, 8), (0, 0), (0, 4)] {
        assert_eq!(whole_view(&array, &word, offset, size), None);
    }
    let float = types.get_base(8, type_metatype::TYPE_FLOAT).unwrap();
    assert_eq!(whole_view(&array, &float, 0, 8), None);
    let volatile = types
        .get_qualified_type(array.clone(), crate::typequal::VOLATILE)
        .unwrap();
    assert_eq!(whole_view(&volatile, &word, 0, 8), None);
    let volatile = types
        .get_qualified_type(word.clone(), crate::typequal::VOLATILE)
        .unwrap();
    assert_eq!(whole_view(&array, &volatile, 0, 8), None);
    assert!(value_type(volatile).is_none());
    let volatile = types
        .get_qualified_type(array.get_array_base().unwrap(), crate::typequal::VOLATILE)
        .unwrap();
    let volatile = types.get_type_array(16, volatile).unwrap();
    assert_eq!(whole_view(&volatile, &word, 0, 8), None);
    let odd = types.get_base(3, type_metatype::TYPE_UNKNOWN).unwrap();
    assert_eq!(whole_view(&array, &odd, 1, 3), None);
    assert_eq!(whole_view(&word, &word, 0, 8), None);
    let words = types.get_type_array(2, word.clone()).unwrap();
    assert_eq!(whole_view(&words, &word, 0, 8), None);
    let piece = types.get_type_partial_struct(words, 0, 8).unwrap();
    assert!(value_type(piece).is_none());
}
