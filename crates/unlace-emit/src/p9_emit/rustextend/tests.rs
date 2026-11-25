use super::*;
use crate::dtype::flags;

#[test]
fn only_signed_text_storage_needs_reinterpretation() {
    let mut input = Datatype::new_with_align(1, -1, type_metatype::TYPE_INT);
    input.flags |= flags::chartype | flags::coretype;
    let mut output = Datatype::new_with_align(8, -1, type_metatype::TYPE_INT);
    assert_eq!(signed_text_input(&input, &output), Some("i8"));
    output.metatype = type_metatype::TYPE_PTR;
    assert_eq!(signed_text_input(&input, &output), None);
    output.metatype = type_metatype::TYPE_FLOAT;
    assert_eq!(signed_text_input(&input, &output), None);
    output.metatype = type_metatype::TYPE_UINT;
    assert_eq!(signed_text_input(&input, &output), Some("i8"));
    input.flags &= !flags::coretype;
    assert_eq!(signed_text_input(&input, &output), None);
    input.flags |= flags::coretype;
    input.metatype = type_metatype::TYPE_UINT;
    assert_eq!(signed_text_input(&input, &output), None);
}
