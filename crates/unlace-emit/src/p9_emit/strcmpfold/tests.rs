use std::rc::Rc;

use slotmap::KeyData;

use super::*;
use crate::dtype::{TypeFactory, TypeFactoryImpl};

fn vn(n: u64) -> VarnodeId {
    VarnodeId::from(KeyData::from_ffi(n))
}

fn array(n: i32, element: i32) -> Rc<Datatype> {
    let f = TypeFactoryImpl::new();
    f.set_default_alignment_map();
    let element = Rc::new(Datatype::new(element, type_metatype::TYPE_INT));
    f.get_type_array(n, element).unwrap()
}

fn variable(ty: &Rc<Datatype>, name: &str) -> Base {
    Base::Variable {
        name: name.to_string(),
        ty: Rc::clone(ty),
    }
}

fn pointer(key: u64) -> Base {
    Base::Pointer {
        root: vn(key),
        reader: OpId::from(KeyData::from_ffi(key)),
        key: PointerKey::Varnode(vn(key)),
    }
}

fn piece(base: &Base, at: u32, bytes: &[u8]) -> Piece {
    Piece {
        base: base.clone(),
        at,
        bytes: bytes.to_vec(),
        vn: vn(u64::from(at) + 100),
    }
}

#[test]
fn a_word_and_a_byte_are_strncmp_of_their_run() {
    let buf = variable(&array(64, 1), "v2");
    let f = fold(&[piece(&buf, 2, b" "), piece(&buf, 0, b"SH")]).unwrap();
    assert_eq!(f.callee, Callee::Strncmp);
    assert_eq!((f.at, f.len, f.text.as_slice()), (0, 3, &b"SH "[..]));
    assert_eq!(f.vn, vn(100));
}

#[test]
fn a_run_ending_in_its_only_nul_is_strcmp() {
    let buf = variable(&array(64, 1), "v2");
    let f = fold(&[piece(&buf, 4, b"OK"), piece(&buf, 6, b"\0")]).unwrap();
    assert_eq!(f.callee, Callee::Strcmp);
    assert_eq!((f.at, f.len, f.text.as_slice()), (4, 3, &b"OK"[..]));
}

#[test]
fn overlapping_reads_must_agree() {
    let buf = variable(&array(64, 1), "v2");
    let both = [piece(&buf, 0, b"PRIV"), piece(&buf, 3, b"VMSG")];
    assert_eq!(fold(&both).unwrap().text, b"PRIVMSG");
    let clash = [piece(&buf, 0, b"PRIV"), piece(&buf, 3, b"XMSG")];
    assert!(fold(&clash).is_none());
}

#[test]
fn gaps_bytes_only_and_other_objects_do_not_fold() {
    let buf = variable(&array(64, 1), "v2");
    let other = variable(&array(64, 1), "v3");
    let short = variable(&array(2, 1), "v2");
    assert!(fold(&[piece(&buf, 0, b"SH"), piece(&buf, 3, b" ")]).is_none());
    assert!(fold(&[piece(&buf, 0, b"S"), piece(&buf, 1, b"H")]).is_none());
    assert!(fold(&[piece(&buf, 0, b"SH"), piece(&other, 2, b" ")]).is_none());
    assert!(fold(&[piece(&short, 0, b"SH"), piece(&short, 2, b" ")]).is_none());
    assert!(fold(&[piece(&pointer(1), 0, b"SH"), piece(&pointer(2), 2, b" ")]).is_none());
}

#[test]
fn only_printable_text_with_at_most_a_final_nul_folds() {
    let buf = variable(&array(64, 1), "v2");
    assert!(fold(&[piece(&buf, 0, b"A\0B\0")]).is_none());
    assert!(fold(&[piece(&buf, 0, b"\x7fELF")]).is_none());
    assert!(fold(&[piece(&buf, 0, b"\0\0")]).is_none());
    assert_eq!(fold(&[piece(&buf, 0, b"\r\n")]).unwrap().callee, Callee::Strncmp);
}

#[test]
fn a_wide_read_of_an_int_array_does_not_fold() {
    assert!(fold(&[piece(&variable(&array(16, 4), "v2"), 0, b"PING")]).is_none());
}

#[test]
fn reads_through_one_pointer_have_no_bound() {
    let p = pointer(1);
    let f = fold(&[piece(&p, 100, b"incl"), piece(&p, 103, b"lude")]).unwrap();
    assert_eq!((f.at, f.len, f.text.as_slice()), (100, 7, &b"include"[..]));
}
