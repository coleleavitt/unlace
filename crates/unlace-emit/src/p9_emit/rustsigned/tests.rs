use super::*;
use crate::dtype::flags;

#[test]
fn core_unsigned_and_signed_text_require_signed_interpretation() {
    let mut ty = Datatype::new_with_align(1, -1, type_metatype::TYPE_INT);
    ty.flags |= flags::chartype | flags::coretype;
    assert_eq!(signed_operand_name(&ty), Some("i8"));
    ty.flags &= !flags::chartype;
    assert_eq!(signed_operand_name(&ty), None);
    ty.flags |= flags::chartype;
    ty.flags &= !flags::coretype;
    assert_eq!(signed_operand_name(&ty), None);
    ty.flags |= flags::coretype;
    ty.metatype = type_metatype::TYPE_UINT;
    assert_eq!(signed_operand_name(&ty), Some("i8"));
    ty.metatype = type_metatype::TYPE_PTR;
    assert_eq!(signed_operand_name(&ty), None);
}
