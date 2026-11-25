use super::*;
use crate::dtype::TypeField;

fn record(size: i32, offsets: &[i32]) -> Datatype {
    let word = Rc::new(Datatype::new(4, type_metatype::TYPE_UINT));
    let mut ty = Datatype::new(size, type_metatype::TYPE_STRUCT);
    ty.kind = DatatypeKind::Struct {
        field: offsets
            .iter()
            .enumerate()
            .map(|(i, offset)| TypeField::new(i as i32, *offset, format!("f{i}"), word.clone()))
            .collect(),
        bitfield: vec![],
    };
    ty
}

#[test]
fn object_representation_must_have_no_unrepresented_bytes() {
    assert!(padding_free(&record(8, &[0, 4]), 0));
    assert!(!padding_free(&record(12, &[0, 8]), 0));
    assert!(!padding_free(&record(12, &[0, 4]), 0));
    assert!(!padding_free(&record(8, &[0, 0]), 0));
    let mut union = record(8, &[0, 0]);
    let DatatypeKind::Struct { field, .. } = union.kind else {
        unreachable!()
    };
    union.kind = DatatypeKind::Union { field };
    assert!(!padding_free(&union, 0));
}
