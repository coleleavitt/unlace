use super::*;
use unlace_sleigh::sleigh::OperandView;

fn insn(operands: Vec<OperandView>) -> InsnMask {
    InsnMask {
        bytes: vec![0xE8, 0x10, 0x20, 0x30, 0x40],
        fixed_mask: vec![0xFF, 0, 0, 0, 0],
        length: 5,
        operands,
    }
}

fn value_bits() -> Vec<u8> {
    vec![0, 0xFF, 0xFF, 0xFF, 0xFF]
}

#[test]
fn address_operands_are_masked() {
    let m = insn(vec![OperandView {
        value_mask: value_bits(),
        objects: vec![OpObject::Address],
    }]);
    assert_eq!(calcrel_mask(&m, &[], false, false), value_bits());
    assert_eq!(calcrel_mask(&m, &[], true, false), value_bits());
    assert_eq!(calcrel_mask(&m, &[], true, true), vec![0; 5]);
}

#[test]
fn x86_masks_only_bytes_the_operand_owns() {
    // mov eax, [rip+disp32]: 8b 05 <disp32>; the memory operand also owns ModRM's mod and r/m bits.
    let m = InsnMask {
        bytes: vec![0x8B, 0x05, 0x10, 0x20, 0x30, 0x40],
        fixed_mask: vec![0xFF, 0x38, 0, 0, 0, 0],
        length: 6,
        operands: vec![OperandView {
            value_mask: vec![0, 0xC7, 0xFF, 0xFF, 0xFF, 0xFF],
            objects: vec![OpObject::Address],
        }],
    };
    assert_eq!(
        calcrel_mask(&m, &[], true, false),
        vec![0, 0, 0xFF, 0xFF, 0xFF, 0xFF]
    );
    assert_eq!(
        calcrel_mask(&m, &[], false, false),
        vec![0, 0xC7, 0xFF, 0xFF, 0xFF, 0xFF]
    );
}

#[test]
fn registers_and_small_constants_are_kept() {
    let m = insn(vec![
        OperandView {
            value_mask: vec![0, 0x38, 0, 0, 0],
            objects: vec![OpObject::Register { offset: 0 }],
        },
        OperandView {
            value_mask: value_bits(),
            objects: vec![OpObject::Scalar {
                signed: 0x10,
                whole_operand: true,
                is_address: false,
            }],
        },
    ]);
    assert_eq!(
        calcrel_mask(&m, &[(0x40_0000, 0x50_0000)], true, false),
        vec![0; 5]
    );
}

#[test]
fn a_scalar_inside_a_section_is_an_address() {
    let m = insn(vec![OperandView {
        value_mask: value_bits(),
        objects: vec![OpObject::Scalar {
            signed: 0x40_1000,
            whole_operand: true,
            is_address: false,
        }],
    }]);
    assert_eq!(
        calcrel_mask(&m, &[(0x40_0000, 0x50_0000)], true, false),
        value_bits()
    );
    assert_eq!(calcrel_mask(&m, &[], true, false), vec![0; 5]);
}

#[test]
fn padding_is_recognized() {
    assert!(is_padding(&[0xCC, 0xCC], true));
    assert!(is_padding(&[0x90], true));
    assert!(is_padding(
        &[0x66, 0x2E, 0x0F, 0x1F, 0x84, 0, 0, 0, 0, 0],
        true
    ));
    assert!(is_padding(&[0, 0], true));
    assert!(is_padding(&[0x1F, 0x20, 0x03, 0xD5], false));
    assert!(!is_padding(&[0xC3], true));
    assert!(!is_padding(&[0x90], false));
    assert!(!is_padding(&[], true));
}

#[test]
fn placeholder_names_are_not_real() {
    assert!(is_real_name("parse_header"));
    assert!(!is_real_name("sub_401000"));
    assert!(!is_real_name("FUN_00401000"));
    assert!(!is_real_name(""));
}
