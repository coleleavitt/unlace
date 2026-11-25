use std::rc::Rc;

use super::*;
use crate::dtype::TypeFactoryImpl;

fn factory() -> TypeFactoryImpl {
    let f = TypeFactoryImpl::new();
    f.set_default_alignment_map();
    f.set_max_basetype_size(8);
    f
}

fn field(off: int4, ct: &Rc<Datatype>) -> TypeField {
    TypeField::new(off, off, format!("field_0x{off:x}"), Rc::clone(ct))
}

/// grep's `treenext` reads the four fields of a node through its `llink`
/// that it reads through the node itself; `_obstack_newchunk` reads the
/// chunk's `prev` pointer at 8 and its `limit` at 0, where the obstack
/// keeps an integer word and a pointer to that chunk.
#[test]
fn a_loaded_record_is_the_same_only_when_the_enclosing_one_holds_all_it_read() {
    let f = factory();
    let ptr = f
        .get_type_pointer(8, f.get_base(8, type_metatype::TYPE_UINT).unwrap(), 1)
        .unwrap();
    let long = f.get_base(8, type_metatype::TYPE_INT).unwrap();
    let byte = f.get_base(1, type_metatype::TYPE_UINT).unwrap();
    let node = vec![
        field(0, &ptr),
        field(8, &ptr),
        field(0x10, &long),
        field(0x18, &byte),
    ];
    assert!(is_same_record(&node, 0x20, &node, 0x20, &[]));
    let part = vec![field(0, &ptr), field(0x10, &long)];
    assert!(is_same_record(&node, 0x20, &part, 0x18, &[]));
    assert!(
        !is_same_record(&part, 0x18, &node, 0x20, &[]),
        "the loaded record reads more"
    );

    let obstack = vec![field(0, &long), field(8, &ptr), field(0x10, &ptr)];
    let chunk = vec![field(0, &ptr), field(8, &ptr)];
    assert!(
        !is_same_record(&obstack, 0x18, &chunk, 0x10, &[]),
        "a pointer where the holder keeps an integer"
    );

    // Bytes the loaded record touched without claiming must be laid out alike.
    let ints = f.get_base(4, type_metatype::TYPE_INT).unwrap();
    let split = vec![
        field(0, &ptr),
        field(8, &ints),
        field(0xc, &ints),
        field(0x10, &long),
    ];
    let whole = vec![field(0, &ptr), field(0x10, &long)];
    assert!(is_same_record(&split, 0x18, &whole, 0x18, &[]));
    assert!(!is_same_record(&split, 0x18, &whole, 0x18, &[(8, 8)]));
}
