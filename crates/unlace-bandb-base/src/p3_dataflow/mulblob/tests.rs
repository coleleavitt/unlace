use super::*;
use std::rc::Rc;

fn undefined_array(elems: int4) -> Datatype {
    let elem = Datatype::new(1, type_metatype::TYPE_UNKNOWN);
    let mut arr = Datatype::new(elems, type_metatype::TYPE_ARRAY);
    arr.kind = crate::dtype::DatatypeKind::Array {
        arrayof: Rc::new(elem),
        arraysize: elems,
    };
    arr
}

/// The width fallback `TypeFactory::get_base(16, TYPE_UNKNOWN)` hands out is
/// the only array shape this module declines for.
#[test]
fn size_fallback_array_is_the_only_accepted_shape() {
    assert!(is_size_fallback_array(&undefined_array(16), 16));
    // right shape, wrong width for the Varnode
    assert!(!is_size_fallback_array(&undefined_array(16), 8));
    // a recovered array of a real element type is not the fallback
    let elem = Datatype::new(1, type_metatype::TYPE_INT);
    let mut arr = Datatype::new(16, type_metatype::TYPE_ARRAY);
    arr.kind = crate::dtype::DatatypeKind::Array {
        arrayof: Rc::new(elem),
        arraysize: 16,
    };
    assert!(!is_size_fallback_array(&arr, 16));
    // a struct is piece-structured but is not an array
    assert!(!is_size_fallback_array(
        &Datatype::new(16, type_metatype::TYPE_STRUCT),
        16
    ));
}

/// Only integer arithmetic consumes a widened operand as a value; a LOAD,
/// a STORE or a CALL reading it means it is storage.
#[test]
fn wide_arithmetic_set_excludes_memory_and_calls() {
    assert!(is_wide_arithmetic(OpCode::CPUI_INT_MULT));
    assert!(is_wide_arithmetic(OpCode::CPUI_INT_ADD));
    assert!(is_wide_arithmetic(OpCode::CPUI_INT_OR));
    assert!(!is_wide_arithmetic(OpCode::CPUI_LOAD));
    assert!(!is_wide_arithmetic(OpCode::CPUI_STORE));
    assert!(!is_wide_arithmetic(OpCode::CPUI_CALL));
    assert!(!is_wide_arithmetic(OpCode::CPUI_PIECE));
    assert!(!is_wide_arithmetic(OpCode::CPUI_SUBPIECE));
}
