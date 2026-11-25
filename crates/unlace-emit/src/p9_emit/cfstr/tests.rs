use std::rc::Rc;

use super::{declare_types, wrap};
use crate::dtype::type_metatype::TYPE_INT;
use crate::dtype::{TypeFactory, TypeFactoryImpl};

#[test]
fn a_pointer_to_the_entry_is_a_cfstringref() {
    let f = TypeFactoryImpl::new();
    f.set_default_alignment_map();
    f.set_max_basetype_size(8);
    f.set_size_of_pointer(8);
    let record = declare_types(&f, 32, 1)
        .unwrap()
        .expect("a fresh factory declares it");
    assert_eq!((record.get_name(), record.get_size()), ("__CFString", 32));
    let ptr = f.get_type_pointer(8, Rc::clone(&record), 1).unwrap();
    assert_eq!(ptr.get_name(), "CFStringRef");
    let other = f
        .get_type_pointer(8, f.get_base(4, TYPE_INT).unwrap(), 1)
        .unwrap();
    assert_eq!(other.get_name(), "");
    assert!(
        declare_types(&f, 32, 1)
            .unwrap()
            .is_some_and(|r| Rc::ptr_eq(&r, &record))
    );
    assert!(declare_types(&f, 16, 1).unwrap().is_none());
}

#[test]
fn wraps_and_annotates() {
    assert_eq!(wrap("\"hi\"", 0x100004008, false), "CFSTR(\"hi\")");
    assert_eq!(
        wrap("\"hi\"", 0x100004008, true),
        "CFSTR(\"hi\") /* cfstring@0x100004008 */"
    );
}
