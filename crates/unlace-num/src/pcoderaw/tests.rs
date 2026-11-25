use super::*;
use unlace_base::address::ELEM_ADDR;
use unlace_base::error::UnlaceError;
use unlace_base::marshal::{Encoder, IdRegistry, PackedDecode, PackedEncode, XmlDecode};
use unlace_base::space::{ConstantSpace, addrspace_flags, spacetype};

use crate::opcodes::OpcodeEncoder;

/// Build a manager with a constant space (index 0) and a small "ram"
/// space (index 1), mirroring the minimal C++ test setups.
fn test_manager() -> AddrSpaceManager {
    let mut manager = AddrSpaceManager::new();
    manager.insert_space(Rc::new(ConstantSpace::new())).unwrap();
    let ram = AddrSpace::new(
        spacetype::IPTR_PROCESSOR,
        "ram",
        false,
        8,
        1,
        1,
        addrspace_flags::hasphysical,
        1,
        1,
    );
    manager.insert_space(Rc::new(ram)).unwrap();
    manager
}

fn ram(manager: &AddrSpaceManager) -> Rc<AddrSpace> {
    Rc::clone(manager.get_space_by_name("ram").unwrap())
}

fn vn(space: Rc<AddrSpace>, offset: u64, size: u32) -> VarnodeData {
    VarnodeData {
        space: Some(space),
        offset,
        size,
    }
}

#[test]
fn test_pcoderaw_varnodedata_compare() {
    let manager = test_manager();
    let r = ram(&manager);
    let constant = Rc::clone(manager.get_constant_space().unwrap());
    // Equality requires identical space/offset/size.
    assert_eq!(vn(Rc::clone(&r), 0x10, 4), vn(Rc::clone(&r), 0x10, 4));
    assert_ne!(vn(Rc::clone(&r), 0x10, 4), vn(Rc::clone(&r), 0x10, 8));
    assert_ne!(vn(Rc::clone(&r), 0x10, 4), vn(Rc::clone(&r), 0x11, 4));
    assert_ne!(
        vn(Rc::clone(&r), 0x10, 4),
        vn(Rc::clone(&constant), 0x10, 4)
    );
    // Ordering: space index, then offset, then BIG sizes first.
    assert!(vn(Rc::clone(&constant), 0x10, 4) < vn(Rc::clone(&r), 0x0, 4));
    assert!(vn(Rc::clone(&r), 0x10, 4) < vn(Rc::clone(&r), 0x11, 4));
    assert!(vn(Rc::clone(&r), 0x10, 8) < vn(Rc::clone(&r), 0x10, 4));
}

#[test]
fn test_pcoderaw_varnodedata_contains_contiguous() {
    let manager = test_manager();
    let r = ram(&manager);
    let big = vn(Rc::clone(&r), 0x100, 8);
    assert!(big.contains(&vn(Rc::clone(&r), 0x100, 8)));
    assert!(big.contains(&vn(Rc::clone(&r), 0x104, 4)));
    assert!(!big.contains(&vn(Rc::clone(&r), 0x105, 4)));
    assert!(!big.contains(&vn(Rc::clone(&r), 0xff, 2)));
    let constant = Rc::clone(manager.get_constant_space().unwrap());
    assert!(!big.contains(&vn(constant, 0x100, 4)));
    // little-endian: `this` is the most significant piece, so lo's end
    // must reach this's offset
    let hi = vn(Rc::clone(&r), 0x104, 4);
    let lo = vn(Rc::clone(&r), 0x100, 4);
    assert!(hi.is_contiguous(&lo));
    assert!(!lo.is_contiguous(&hi));
    assert!(!hi.is_contiguous(&vn(Rc::clone(&r), 0x101, 4)));
}

#[test]
fn test_pcoderaw_opraw_accessors() {
    use crate::opbehavior::OpBehaviorIntAdd;
    let manager = test_manager();
    let r = ram(&manager);
    let mut op = PcodeOpRaw::default();
    assert!(op.get_behavior().is_none());
    op.set_behavior(Rc::new(OpBehaviorIntAdd));
    assert_eq!(op.get_opcode(), OpCode::CPUI_INT_ADD);
    let addr = Address::new(Rc::clone(&r), 0x1000);
    op.set_seq_num(&addr, 7);
    assert_eq!(op.get_seq_num().get_time(), 7);
    assert_eq!(op.get_addr().get_offset(), 0x1000);
    assert!(op.get_output().is_none());
    op.set_output(Some(vn(Rc::clone(&r), 0x20, 4)));
    assert_eq!(op.get_output().unwrap().offset, 0x20);
    assert_eq!(op.num_input(), 0);
    op.add_input(vn(Rc::clone(&r), 0x30, 4));
    op.add_input(vn(Rc::clone(&r), 0x34, 4));
    assert_eq!(op.num_input(), 2);
    assert_eq!(op.get_input(1).offset, 0x34);
    op.clear_inputs();
    assert_eq!(op.num_input(), 0);
}

/// XML path of PcodeOpRaw::decode: an INT_ADD with an output and two
/// register inputs, then a LOAD whose first input is a <spaceid>.
#[test]
fn test_pcoderaw_decode_xml() {
    let manager = test_manager();
    let mut registry = IdRegistry::with_base_ids();
    // This standalone registry needs the translation element too.
    registry.register_element(&ELEM_SPACEID);
    let mut dec = XmlDecode::new(&manager, &registry);
    dec.ingest_stream(
        b"<op code=\"INT_ADD\"><addr space=\"ram\" offset=\"0x20\" size=\"4\"/>\
              <addr space=\"ram\" offset=\"0x30\" size=\"4\"/>\
              <addr space=\"ram\" offset=\"0x34\" size=\"4\"/></op>",
    )
    .unwrap();
    let el = dec.open_element().unwrap();
    let mut invar = vec![VarnodeData::default(), VarnodeData::default()];
    let mut outvar = Some(VarnodeData::default());
    let opc = PcodeOpRaw::decode(&mut dec, 2, &mut invar, &mut outvar).unwrap();
    dec.close_element(el).unwrap();
    assert_eq!(opc, OpCode::CPUI_INT_ADD);
    let out = outvar.unwrap();
    assert_eq!((out.offset, out.size), (0x20, 4));
    assert!(Rc::ptr_eq(out.space.as_ref().unwrap(), &ram(&manager)));
    assert_eq!((invar[0].offset, invar[0].size), (0x30, 4));
    assert_eq!((invar[1].offset, invar[1].size), (0x34, 4));

    // LOAD: void output, <spaceid> first input.
    let mut dec = XmlDecode::new(&manager, &registry);
    dec.ingest_stream(
        b"<op code=\"LOAD\"><void/><spaceid name=\"ram\"/>\
              <addr space=\"ram\" offset=\"0x40\" size=\"8\"/></op>",
    )
    .unwrap();
    let el = dec.open_element().unwrap();
    let mut invar = vec![VarnodeData::default(), VarnodeData::default()];
    let mut outvar = Some(VarnodeData::default());
    let opc = PcodeOpRaw::decode(&mut dec, 2, &mut invar, &mut outvar).unwrap();
    dec.close_element(el).unwrap();
    assert_eq!(opc, OpCode::CPUI_LOAD);
    assert!(outvar.is_none());
    // spaceid input: constant space, offset = encoded space, size 8
    assert!(Rc::ptr_eq(
        invar[0].space.as_ref().unwrap(),
        manager.get_constant_space().unwrap()
    ));
    assert_eq!(invar[0].size, 8);
    let recovered = invar[0].get_space_from_const(&manager).unwrap();
    assert!(Rc::ptr_eq(&recovered, &ram(&manager)));
    assert_eq!((invar[1].offset, invar[1].size), (0x40, 8));
}

/// Packed path: encode an op with the OpcodeEncoder/Encoder halves and
/// decode it back through PcodeOpRaw::decode.
#[test]
fn test_pcoderaw_decode_packed_roundtrip() {
    let manager = test_manager();
    let r = ram(&manager);
    let mut stream: Vec<u8> = Vec::new();
    {
        let mut enc = PackedEncode::new(&mut stream);
        enc.open_element(&ELEM_ADDR); // any element: decode assumes <op> is open
        enc.write_opcode(&ATTRIB_CODE, OpCode::CPUI_INT_SUB);
        // output varnode
        Address::new(Rc::clone(&r), 0x50)
            .encode_sized(&mut enc, 4)
            .unwrap();
        // two input varnodes
        Address::new(Rc::clone(&r), 0x60)
            .encode_sized(&mut enc, 4)
            .unwrap();
        Address::new(Rc::clone(&r), 0x64)
            .encode_sized(&mut enc, 4)
            .unwrap();
        enc.close_element(&ELEM_ADDR);
    }
    let mut dec = PackedDecode::new(&manager);
    dec.ingest_stream(&stream).unwrap();
    let el = dec.open_element().unwrap();
    let mut invar = vec![VarnodeData::default(), VarnodeData::default()];
    let mut outvar = Some(VarnodeData::default());
    let opc = PcodeOpRaw::decode(&mut dec, 2, &mut invar, &mut outvar).unwrap();
    dec.close_element(el).unwrap();
    assert_eq!(opc, OpCode::CPUI_INT_SUB);
    let out = outvar.unwrap();
    assert_eq!((out.offset, out.size), (0x50, 4));
    assert_eq!((invar[0].offset, invar[0].size), (0x60, 4));
    assert_eq!((invar[1].offset, invar[1].size), (0x64, 4));
    assert!(Rc::ptr_eq(invar[1].space.as_ref().unwrap(), &r));
}

/// VarnodeData::decode rejects the register-name form for now (the
/// Translate deferral) and bad opcodes surface as decoder errors.
#[test]
fn test_pcoderaw_decode_errors() {
    let manager = test_manager();
    let registry = IdRegistry::with_base_ids();
    let mut dec = XmlDecode::new(&manager, &registry);
    dec.ingest_stream(b"<addr name=\"EAX\"/>").unwrap();
    let mut v = VarnodeData::default();
    assert!(matches!(
        v.decode(&mut dec),
        Err(UnlaceError::Lowlevel { .. })
    ));

    let mut dec = XmlDecode::new(&manager, &registry);
    dec.ingest_stream(b"<op code=\"NOT_AN_OP\"><void/></op>")
        .unwrap();
    dec.open_element().unwrap();
    let mut invar: Vec<VarnodeData> = Vec::new();
    let mut outvar = Some(VarnodeData::default());
    assert!(matches!(
        PcodeOpRaw::decode(&mut dec, 0, &mut invar, &mut outvar),
        Err(UnlaceError::Decoder { .. })
    ));
}
