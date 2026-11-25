use super::*;
use std::rc::Rc;
use unlace_base::space::{AddrSpace, spacetype};

fn register(big: bool, size: u32) -> VarnodeData {
    VarnodeData {
        space: Some(Rc::new(AddrSpace::new(
            spacetype::IPTR_PROCESSOR,
            "register",
            big,
            4,
            1,
            4,
            0,
            0,
            0,
        ))),
        offset: 0x20,
        size,
    }
}

#[test]
fn register_extension_does_not_invent_a_subword_extension() {
    use crate::{
        dtype::type_class,
        fspec::{ParamListKind, ParamListStandard},
    };
    use unlace_base::{space::AddrSpaceManager, xml::DocumentStorage};
    let mut storage = DocumentStorage::new();
    let document = storage
        .parse_document(b"<pentry registerextension=\"sign\"/>")
        .unwrap();
    for big in [false, true] {
        let reg = register(big, 8);
        let extension = decode(document.get_root(), Some(reg.clone()), 4, 0, 0)
            .unwrap()
            .unwrap();
        let slot = extension.input.get_addr();
        let mut entry = ParamEntry::seed(
            0,
            type_class::TYPECLASS_GENERAL,
            reg.space.clone().unwrap(),
            slot.get_offset(),
            4,
            1,
            0,
            0,
            true,
            false,
            &[],
            &AddrSpaceManager::new(),
        )
        .unwrap();
        entry.register_extension = Some(extension);
        let mut model = ParamListStandard::new(ParamListKind::StandardOut);
        model.push_entry(entry);
        model.finish_decode();
        let mut result = VarnodeData::default();
        assert_eq!(
            model.assumed_extension(&slot, 4, &mut result),
            OpCode::CPUI_INT_SEXT
        );
        assert_eq!(result.get_addr(), reg.get_addr());
        assert_eq!(result.size, 8);
        let byte = &slot + if big { 3 } else { 0 };
        assert_eq!(
            model.assumed_extension(&byte, 1, &mut result),
            OpCode::CPUI_COPY
        );
    }
    assert!(decode(document.get_root(), Some(register(false, 4)), 4, 0, 0).is_err());
    assert!(decode(document.get_root(), None, 4, 0, 0).is_err());
    let invalid = storage
        .parse_document(b"<pentry registerextension=\"inttype\"/>")
        .unwrap();
    assert!(decode(invalid.get_root(), Some(register(false, 8)), 4, 0, 0).is_err());
}

#[test]
fn word_slots_keep_their_physical_container_in_both_byte_orders() {
    for big in [false, true] {
        for (flag, opcode) in [
            (param_entry_flags::SMALLSIZE_SEXT, OpCode::CPUI_INT_SEXT),
            (param_entry_flags::SMALLSIZE_ZEXT, OpCode::CPUI_INT_ZEXT),
        ] {
            let extension = declared(Some(register(big, 8)), 4, 0, flag).unwrap();
            assert_eq!(extension.input.offset, if big { 0x24 } else { 0x20 });
            assert_eq!(extension.input.size, 4);
            assert_eq!(extension.output.offset, 0x20);
            assert_eq!(extension.output.size, 8);
            assert_eq!(extension.opcode, opcode);
        }
    }
}

#[test]
fn aliases_and_conditional_or_missing_extensions_do_not_invent_upper_bits() {
    for big in [false, true] {
        assert!(
            declared(
                Some(register(big, 4)),
                4,
                0,
                param_entry_flags::SMALLSIZE_SEXT
            )
            .is_none()
        );
        for flag in [
            0,
            param_entry_flags::SMALLSIZE_INTTYPE,
            param_entry_flags::SMALLSIZE_FLOATEXT,
        ] {
            assert!(declared(Some(register(big, 8)), 4, 0, flag).is_none());
        }
        assert!(
            declared(
                Some(register(big, 8)),
                4,
                4,
                param_entry_flags::SMALLSIZE_SEXT
            )
            .is_none()
        );
        assert!(declared(None, 4, 0, param_entry_flags::SMALLSIZE_SEXT).is_none());
    }
}

#[test]
fn alternative_entries_may_overlap_either_end_of_the_register() {
    use crate::dtype::type_class;
    use unlace_base::space::AddrSpaceManager;
    let register = register(false, 8);
    let extension = declared(
        Some(register.clone()),
        4,
        0,
        param_entry_flags::SMALLSIZE_SEXT,
    )
    .unwrap();
    for (base, size, expected) in [
        (0x1c, 4, false),
        (0x1c, 8, true),
        (0x20, 8, true),
        (0x24, 8, true),
        (0x28, 4, false),
    ] {
        let entry = ParamEntry::seed(
            0,
            type_class::TYPECLASS_GENERAL,
            register.space.clone().unwrap(),
            base,
            size,
            1,
            0,
            0,
            true,
            false,
            &[],
            &AddrSpaceManager::new(),
        )
        .unwrap();
        assert_eq!(overlaps(&extension, &entry), expected);
    }
}
