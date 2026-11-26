use super::*;
use std::cell::RefCell;
use std::rc::Rc;
use unlace_base::marshal::{
    ATTRIB_NAME, Encoder, PackedDecode, PackedEncode, XmlDecode, XmlEncode,
};
use unlace_base::space::{
    AddrSpace, ConstantSpace, JoinSpace, OtherSpace, UniqueSpace, addrspace_flags, spacetype,
};
use unlace_num::opcodes::OpcodeEncoder;

/// A minimal RegisterLookup stub: a fixed register table over one
/// "register" space (what the sleigh engine will derive from its symbol
/// table).
struct TestRegisters {
    space: Rc<AddrSpace>,
    regs: Vec<(&'static str, u64, u32)>,
}

impl RegisterLookup for TestRegisters {
    fn get_register(&self, nm: &str) -> UnlaceResult<VarnodeStorage> {
        for (name, offset, size) in &self.regs {
            if *name == nm {
                return Ok(VarnodeStorage {
                    space: Some(Rc::clone(&self.space)),
                    offset: *offset,
                    size: *size,
                });
            }
        }
        // sleighbase.cc throws SleighError (caught as a LowlevelError)
        Err(UnlaceError::sleigh(format!("Unknown register name: {nm}")))
    }

    fn get_register_name(&self, base: &Rc<AddrSpace>, off: u64, size: i32) -> String {
        for (name, offset, sz) in &self.regs {
            if Rc::ptr_eq(base, &self.space)
                && *offset <= off
                && off + u64::from(size as u32) <= *offset + u64::from(*sz)
            {
                return (*name).to_string();
            }
        }
        String::new()
    }

    fn get_exact_register_name(&self, base: &Rc<AddrSpace>, off: u64, size: i32) -> String {
        for (name, offset, sz) in &self.regs {
            if Rc::ptr_eq(base, &self.space) && *offset == off && *sz == size as u32 {
                return (*name).to_string();
            }
        }
        String::new()
    }
}

/// Manager with const(0)/OTHER(1)/unique(2)/ram(3)/register(4)/join(5)
/// spaces, mirroring the minimal C++ Architecture bootstrap order.
fn test_manager(big_end: bool) -> AddrSpaceManager {
    let mut manager = AddrSpaceManager::new();
    manager.insert_space(Rc::new(ConstantSpace::new())).unwrap();
    manager.insert_space(Rc::new(OtherSpace::new(1))).unwrap();
    manager
        .insert_space(Rc::new(UniqueSpace::new(2, 0, big_end)))
        .unwrap();
    manager
        .insert_space(Rc::new(AddrSpace::new(
            spacetype::IPTR_PROCESSOR,
            "ram",
            big_end,
            8,
            1,
            3,
            addrspace_flags::hasphysical,
            1,
            1,
        )))
        .unwrap();
    manager
        .insert_space(Rc::new(AddrSpace::new(
            spacetype::IPTR_PROCESSOR,
            "register",
            big_end,
            4,
            1,
            4,
            0,
            0,
            0,
        )))
        .unwrap();
    manager
        .insert_space(Rc::new(JoinSpace::new(5, big_end)))
        .unwrap();
    manager.set_default_code_space(3).unwrap();
    manager
}

fn install_x86ish_registers(manager: &mut AddrSpaceManager) {
    let space = Rc::clone(manager.get_space_by_name("register").unwrap());
    manager.set_register_lookup(Rc::new(TestRegisters {
        space,
        // EAX/AX/EDX-style layout: a 2-byte subregister at 0 within the
        // 4-byte EAX, EDX at 8, and an 8-byte whole at 0
        regs: vec![
            ("EAX", 0, 4),
            ("AX", 0, 2),
            ("EDX", 8, 4),
            ("EDX_EAX", 0, 8),
        ],
    }));
}

fn reg(manager: &AddrSpaceManager, offset: u64, size: u32) -> VarnodeStorage {
    VarnodeStorage {
        space: Some(Rc::clone(manager.get_space_by_name("register").unwrap())),
        offset,
        size,
    }
}

/// findAddJoin: allocation offsets advance by 16-rounded sizes, repeat
/// lookups return the existing record, and the validation errors match
/// the C++ strings.
#[test]
fn test_translate_find_add_join_allocation_and_dedup() {
    let manager = test_manager(false);
    let pieces = vec![reg(&manager, 8, 4), reg(&manager, 0, 4)];
    let rec = manager.find_add_join(&pieces, 0).unwrap();
    assert_eq!(rec.get_unified().offset, 0);
    assert_eq!(rec.get_unified().size, 8);
    assert_eq!(rec.num_pieces(), 2);
    assert!(Rc::ptr_eq(
        rec.get_unified().space.as_ref().unwrap(),
        manager.get_join_space().unwrap()
    ));
    // identical pieces: same record (splitset dedup)
    let rec2 = manager.find_add_join(&pieces, 0).unwrap();
    assert!(Rc::ptr_eq(&rec, &rec2));
    // different pieces: new record at the next 16-rounded offset (8 -> 16)
    let rec3 = manager
        .find_add_join(&[reg(&manager, 8, 4), reg(&manager, 0, 2)], 0)
        .unwrap();
    assert_eq!(rec3.get_unified().offset, 16);
    assert_eq!(rec3.get_unified().size, 6);
    // float-extension join: single piece with a logical size; same
    // pieces as an 8-byte whole would be, but distinct unified size
    let rec4 = manager.find_add_join(&[reg(&manager, 0, 8)], 4).unwrap();
    assert_eq!(rec4.get_unified().offset, 32);
    assert_eq!(rec4.get_unified().size, 4);
    assert!(rec4.is_float_extension());
    // validation errors (exact C++ strings)
    assert_eq!(
        manager.find_add_join(&[], 0).unwrap_err().explain(),
        "Cannot create a join without pieces"
    );
    assert_eq!(
        manager
            .find_add_join(&[reg(&manager, 0, 4)], 0)
            .unwrap_err()
            .explain(),
        "Cannot create a single piece join without a logical size"
    );
    assert_eq!(
        manager.find_add_join(&pieces, 8).unwrap_err().explain(),
        "Cannot specify logical size for multiple piece join"
    );
    assert_eq!(
        manager
            .find_add_join(&[reg(&manager, 0, 0), reg(&manager, 4, 0)], 0)
            .unwrap_err()
            .explain(),
        "Cannot create a zero size join"
    );
}

/// findJoin: exact-start binary search over several records, the
/// "Unlinked join address" error for interior offsets, and
/// getEquivalentAddress piece mapping for both endians.
#[test]
fn test_translate_find_join_and_equivalent_address() {
    let manager = test_manager(false);
    let recs: Vec<Rc<JoinRecord>> = (0u64..5)
        .map(|i| {
            manager
                .find_add_join(&[reg(&manager, 32 * i + 8, 4), reg(&manager, 32 * i, 4)], 0)
                .unwrap()
        })
        .collect();
    for (i, rec) in recs.iter().enumerate() {
        let off = rec.get_unified().offset;
        assert_eq!(off, 16 * i as u64);
        assert!(Rc::ptr_eq(&manager.find_join(off).unwrap(), rec));
    }
    assert_eq!(
        manager.find_join(1).unwrap_err().explain(),
        "Unlinked join address"
    );
    // little endian: offset 0 maps into the LEAST significant piece
    // (pieces[1], the low register), offset 4 into pieces[0]
    let mut pos = 0i32;
    let addr = recs[0].get_equivalent_address(0, &mut pos);
    assert_eq!(pos, 1);
    assert_eq!(addr.get_offset(), 0);
    let addr = recs[0].get_equivalent_address(5, &mut pos);
    assert_eq!(pos, 0);
    assert_eq!(addr.get_offset(), 9);
    // past the end: invalid address
    let addr = recs[0].get_equivalent_address(8, &mut pos);
    assert!(addr.is_invalid());
    // big endian variant: offset 0 maps into the MOST significant piece
    let manager = test_manager(true);
    let rec = manager
        .find_add_join(&[reg(&manager, 8, 4), reg(&manager, 0, 4)], 0)
        .unwrap();
    let addr = rec.get_equivalent_address(0, &mut pos);
    assert_eq!(pos, 0);
    assert_eq!(addr.get_offset(), 8);
    let addr = rec.get_equivalent_address(6, &mut pos);
    assert_eq!(pos, 1);
    assert_eq!(addr.get_offset(), 2);
}

/// JoinSpace::overlapJoin: join-space points translate into pieces,
/// non-join points accumulate piece offsets in data order, constants
/// never overlap.
#[test]
fn test_translate_join_overlap_join() {
    let manager = test_manager(false);
    let join = Rc::clone(manager.get_join_space().unwrap());
    let register = Rc::clone(manager.get_space_by_name("register").unwrap());
    let rec = manager
        .find_add_join(&[reg(&manager, 8, 4), reg(&manager, 0, 4)], 0)
        .unwrap();
    let off = rec.get_unified().offset;
    // register point inside the low piece: little-endian data order
    // starts at the least significant piece, so (reg,0) is byte 0
    assert_eq!(join.overlap_join(off, 8, &register, 0, 0).unwrap(), 0);
    assert_eq!(join.overlap_join(off, 8, &register, 2, 0).unwrap(), 2);
    // high piece (reg,8) starts after the 4 low bytes
    assert_eq!(join.overlap_join(off, 8, &register, 8, 0).unwrap(), 4);
    assert_eq!(join.overlap_join(off, 8, &register, 11, 0).unwrap(), 7);
    // size cut-off: result must fall before offset+size
    assert_eq!(join.overlap_join(off, 4, &register, 8, 0).unwrap(), -1);
    // unrelated register bytes
    assert_eq!(join.overlap_join(off, 8, &register, 4, 0).unwrap(), -1);
    // a point in the join space itself is translated through its record
    assert_eq!(join.overlap_join(off, 8, &join, off, 2).unwrap(), 2);
    // constant points never overlap
    let cst = Rc::clone(manager.get_constant_space().unwrap());
    assert_eq!(join.overlap_join(off, 8, &cst, 0, 0).unwrap(), -1);
}

/// JoinSpace::printRaw through AddrSpace::print_raw: piece list in
/// braces, and the single-piece ":size" suffix.
#[test]
fn test_translate_join_print_raw() {
    let manager = test_manager(false);
    let join = Rc::clone(manager.get_join_space().unwrap());
    let rec = manager
        .find_add_join(&[reg(&manager, 8, 4), reg(&manager, 0, 4)], 0)
        .unwrap();
    let mut s = String::new();
    join.print_raw(&mut s, rec.get_unified().offset).unwrap();
    assert_eq!(s, "{0x00000008,0x00000000}");
    let rec = manager.find_add_join(&[reg(&manager, 0, 8)], 4).unwrap();
    let mut s = String::new();
    join.print_raw(&mut s, rec.get_unified().offset).unwrap();
    assert_eq!(s, "{0x00000000:4}");
    // unknown offset propagates the C++ error
    let mut s = String::new();
    assert_eq!(
        join.print_raw(&mut s, 7).unwrap_err().explain(),
        "Unlinked join address"
    );
}

/// JoinSpace encodeAttributes/decodeAttributes round-trip through the
/// XML encoder: piece1/piece2 attributes (and logicalsize for the
/// single-piece form), reconstructing the same records via findAddJoin.
#[test]
fn test_translate_join_encode_decode_roundtrip_xml() {
    let mut manager = test_manager(false);
    install_x86ish_registers(&mut manager);
    let join = Rc::clone(manager.get_join_space().unwrap());
    let rec = manager
        .find_add_join(&[reg(&manager, 8, 4), reg(&manager, 0, 4)], 0)
        .unwrap();

    let mut stream: Vec<u8> = Vec::new();
    {
        let mut enc = XmlEncode::new_with_format(&mut stream, false);
        enc.open_element(&ELEM_SPACEID); // any open element carries the attributes
        join.encode_attributes(&mut enc, rec.get_unified().offset)
            .unwrap();
        enc.close_element(&ELEM_SPACEID);
    }
    let text = String::from_utf8(stream.clone()).unwrap();
    assert_eq!(
        text,
        "<spaceid space=\"join\" piece1=\"register:0x8:4\" piece2=\"register:0x0:4\"/>"
    );

    let mut registry = unlace_base::marshal::IdRegistry::with_base_ids();
    register_translate_ids(&mut registry);
    let mut dec = XmlDecode::new(&manager, &registry);
    dec.ingest_stream(&stream).unwrap();
    let el = dec.open_element().unwrap();
    // position past the space attribute, as VarnodeData::decode does
    let spc = loop {
        let attrib_id = dec.get_next_attribute_id().unwrap();
        if attrib_id == ATTRIB_SPACE.get_id() {
            break dec.read_space().unwrap();
        }
    };
    assert!(Rc::ptr_eq(&spc, &join));
    dec.rewind_attributes();
    let mut size: u32 = 0;
    let offset = spc.decode_attributes(&mut dec, &mut size).unwrap();
    dec.close_element(el).unwrap();
    assert_eq!(offset, rec.get_unified().offset);
    assert_eq!(size, 8);

    // single-piece (float extension) form carries logicalsize, and a
    // register-name piece decodes through the installed lookup
    let rec4 = manager.find_add_join(&[reg(&manager, 0, 8)], 4).unwrap();
    let mut stream: Vec<u8> = Vec::new();
    {
        let mut enc = XmlEncode::new_with_format(&mut stream, false);
        enc.open_element(&ELEM_SPACEID);
        join.encode_attributes(&mut enc, rec4.get_unified().offset)
            .unwrap();
        enc.close_element(&ELEM_SPACEID);
    }
    // (writeUnsignedInteger renders hex with the 0x prefix, as in C++)
    assert_eq!(
        String::from_utf8(stream).unwrap(),
        "<spaceid space=\"join\" piece1=\"register:0x0:8\" logicalsize=\"0x4\"/>"
    );
    let mut dec = XmlDecode::new(&manager, &registry);
    dec.ingest_stream(b"<spaceid space=\"join\" piece1=\"EDX_EAX\" logicalsize=\"4\"/>")
        .unwrap();
    let el = dec.open_element().unwrap();
    loop {
        let attrib_id = dec.get_next_attribute_id().unwrap();
        if attrib_id == ATTRIB_SPACE.get_id() {
            break;
        }
    }
    let spc = dec.read_space().unwrap();
    dec.rewind_attributes();
    let mut size: u32 = 0;
    let offset = spc.decode_attributes(&mut dec, &mut size).unwrap();
    dec.close_element(el).unwrap();
    assert_eq!(offset, rec4.get_unified().offset);
    assert_eq!(size, 4);
}

/// JoinSpace::read: register names, shortcut-prefixed offsets, and the
/// failure string; AddrSpace::read register branch: name, name+offset
/// and name:size suffixes against the C++ semantics.
#[test]
fn test_translate_read_register_branch_and_join_read() {
    let mut manager = test_manager(false);
    install_x86ish_registers(&mut manager);
    let register = Rc::clone(manager.get_space_by_name("register").unwrap());
    let mut size: i32 = 0;
    // plain register name
    let off = register.read("EDX", &mut size, &manager).unwrap();
    assert_eq!((off, size), (8, 4));
    // register with '+' offset suffix (eax+2 form)
    let off = register.read("EAX+2", &mut size, &manager).unwrap();
    assert_eq!((off, size), (2, 4));
    // register with ':' size suffix
    let off = register.read("EDX:2", &mut size, &manager).unwrap();
    assert_eq!((off, size), (8, 2));
    // unknown register falls back to hex parsing (the C++ catch branch)
    let off = register.read("0x10:2", &mut size, &manager).unwrap();
    assert_eq!((off, size), (0x10, 2));

    // join space console read
    let join = Rc::clone(manager.get_join_space().unwrap());
    let off = join.read("EDX,EAX", &mut size, &manager).unwrap();
    assert_eq!(size, 8);
    let rec = manager.find_join(off).unwrap();
    assert_eq!(rec.num_pieces(), 2);
    assert_eq!(rec.get_piece(0).offset, 8);
    assert_eq!(rec.get_piece(1).offset, 0);
    // shortcut-prefixed piece: %-register space, hex offset with size
    let off = join.read("EDX,%0x0:4", &mut size, &manager).unwrap();
    assert!(Rc::ptr_eq(&manager.find_join(off).unwrap(), &rec));
    // unparseable piece
    assert_eq!(
        join.read("EDX,@bogus", &mut size, &manager)
            .unwrap_err()
            .explain(),
        "Could not parse join string"
    );
}

/// renormalizeJoinAddress through Address::renormalize: perfect match,
/// single-piece collapse, and a re-split creating a new truncated record.
#[test]
fn test_translate_renormalize_join_address() {
    let manager = test_manager(false);
    let join = Rc::clone(manager.get_join_space().unwrap());
    let rec = manager
        .find_add_join(&[reg(&manager, 8, 4), reg(&manager, 0, 4)], 0)
        .unwrap();
    // perfect match: no change
    let mut addr = Address::new(Rc::clone(&join), rec.get_unified().offset);
    addr.renormalize(8, &manager).unwrap();
    assert!(Rc::ptr_eq(addr.get_space().unwrap(), &join));
    assert_eq!(addr.get_offset(), 0);
    // sub-range within one piece: collapses to the piece's space
    let mut addr = Address::new(Rc::clone(&join), 1);
    addr.renormalize(2, &manager).unwrap();
    assert!(Rc::ptr_eq(
        addr.get_space().unwrap(),
        manager.get_space_by_name("register").unwrap()
    ));
    assert_eq!(addr.get_offset(), 1);
    // straddling range: a new JoinRecord with truncated pieces
    let mut addr = Address::new(Rc::clone(&join), 2);
    addr.renormalize(4, &manager).unwrap();
    assert!(Rc::ptr_eq(addr.get_space().unwrap(), &join));
    let newrec = manager.find_join(addr.get_offset()).unwrap();
    assert_eq!(newrec.get_unified().size, 4);
    assert_eq!(newrec.num_pieces(), 2);
    // little-endian split keeps most->least significant piece order:
    // 2 bytes of the high register, then the top 2 bytes of the low one
    assert_eq!(
        (newrec.get_piece(0).offset, newrec.get_piece(0).size),
        (8, 2)
    );
    assert_eq!(
        (newrec.get_piece(1).offset, newrec.get_piece(1).size),
        (2, 2)
    );
    // range past the record errs
    let mut addr = Address::new(Rc::clone(&join), 4);
    assert_eq!(
        addr.renormalize(8, &manager).unwrap_err().explain(),
        "Join address range not covered"
    );
    // offset outside any record errs
    let mut addr = Address::new(Rc::clone(&join), 0x1000);
    assert_eq!(
        addr.renormalize(4, &manager).unwrap_err().explain(),
        "Join address not covered by a JoinRecord"
    );
}

/// constructJoinAddress / constructFloatExtensionAddress /
/// stripJoinPiece / JoinRecord::mergeSequence against the C++ decision
/// table (contiguous + named parent register vs join record).
#[test]
fn test_translate_construct_join_and_merge_sequence() {
    let mut manager = test_manager(false);
    install_x86ish_registers(&mut manager);
    let lookup = Rc::clone(manager.register_lookup().unwrap());
    let register = Rc::clone(manager.get_space_by_name("register").unwrap());
    let ram = Rc::clone(manager.get_space_by_name("ram").unwrap());

    // contiguous registers with a formal parent name: hi=(reg,2,2),
    // lo=(reg,0,2) is contiguous (little endian) and EAX names the whole
    let hi = Address::new(Rc::clone(&register), 2);
    let lo = Address::new(Rc::clone(&register), 0);
    let addr = manager
        .construct_join_address(lookup.as_ref(), &hi, 2, &lo, 2)
        .unwrap();
    assert!(Rc::ptr_eq(addr.get_space().unwrap(), &register));
    assert_eq!(addr.get_offset(), 0); // little endian returns loaddr
    // contiguous in the default code space: earliest address, no join
    let hi = Address::new(Rc::clone(&ram), 0x1004);
    let lo = Address::new(Rc::clone(&ram), 0x1000);
    let addr = manager
        .construct_join_address(lookup.as_ref(), &hi, 4, &lo, 4)
        .unwrap();
    assert!(Rc::ptr_eq(addr.get_space().unwrap(), &ram));
    assert_eq!(addr.get_offset(), 0x1000);
    // non-contiguous registers: a formal JoinRecord
    let hi = Address::new(Rc::clone(&register), 8);
    let lo = Address::new(Rc::clone(&register), 0);
    let addr = manager
        .construct_join_address(lookup.as_ref(), &hi, 4, &lo, 4)
        .unwrap();
    assert!(Rc::ptr_eq(
        addr.get_space().unwrap(),
        manager.get_join_space().unwrap()
    ));
    let rec = manager.find_join(addr.get_offset()).unwrap();
    // strip the most significant piece -> remaining single piece
    let stripped = manager.strip_join_piece(&rec, 0).unwrap();
    assert_eq!((stripped.offset, stripped.size), (0, 4));
    // constant space is not joinable (exact C++ string, typo included)
    let cst = manager.get_constant(4);
    assert_eq!(
        manager
            .construct_join_address(lookup.as_ref(), &cst, 4, &lo, 4)
            .unwrap_err()
            .explain(),
        "Trying to join in appropriate locations"
    );
    // float extension address: same size returns the real address,
    // smaller logical size makes a single-piece join
    let realaddr = Address::new(Rc::clone(&register), 0);
    let addr = manager
        .construct_float_extension_address(&realaddr, 8, 8)
        .unwrap();
    assert_eq!(addr.get_offset(), 0);
    assert!(Rc::ptr_eq(addr.get_space().unwrap(), &register));
    let addr = manager
        .construct_float_extension_address(&realaddr, 8, 4)
        .unwrap();
    let rec = manager.find_join(addr.get_offset()).unwrap();
    assert!(rec.is_float_extension());
    assert_eq!(rec.get_unified().size, 4);

    // mergeSequence: AX-halves merge into the formally-named EAX...
    let mut seq = vec![reg(&manager, 2, 2), reg(&manager, 0, 2)];
    JoinRecord::merge_sequence(&mut seq, lookup.as_ref());
    assert_eq!(seq.len(), 1);
    assert_eq!((seq[0].offset, seq[0].size), (0, 4));
    // ...but an informally-named merge keeps the original sequence
    let mut seq = vec![reg(&manager, 6, 2), reg(&manager, 4, 2)];
    let orig = seq.clone();
    JoinRecord::merge_sequence(&mut seq, lookup.as_ref());
    assert_eq!(seq, orig);
}

/// SpacebaseSpace: constructor wiring, base-register attachment with
/// truncation, the one-base-register rule, and decode via decode_space
/// (<space_base> element) inside a <spaces> walk.
#[test]
fn test_translate_spacebase_space() {
    let manager = test_manager(false);
    let ram = Rc::clone(manager.get_space_by_name("ram").unwrap());
    let stack = SpacebaseSpace::new("stack", 6, 8, &ram, 1, true, false);
    assert_eq!(stack.get_type(), spacetype::IPTR_SPACEBASE);
    assert!(stack.is_formal_stack_space());
    assert_eq!(stack.num_spacebase(), 0);
    assert!(stack.stack_grows_negative());
    assert!(stack.get_spacebase(0).is_err());
    let stack = Rc::new(stack);
    assert!(Rc::ptr_eq(stack.get_contain().unwrap(), &ram));
    assert_eq!(stack.get_word_size(), ram.get_word_size());

    // attach a truncated base register (8-byte pointer truncated to 4)
    let rsp = reg(&manager, 0x20, 8);
    manager
        .add_spacebase_pointer(&stack, &rsp, 4, true)
        .unwrap();
    assert_eq!(stack.num_spacebase(), 1);
    let baseloc = stack.get_spacebase(0).unwrap();
    assert_eq!((baseloc.offset, baseloc.size), (0x20, 4)); // little endian keeps the offset
    let full = stack.get_spacebase_full(0).unwrap();
    assert_eq!((full.offset, full.size), (0x20, 8));
    // a second attachment compares against the (already truncated)
    // baseloc, so even the same original register errs, as in C++
    assert_eq!(
        manager
            .add_spacebase_pointer(&stack, &rsp, 4, true)
            .unwrap_err()
            .explain(),
        "Attempt to assign more than one base register to space: stack"
    );
    // re-attaching the exact current baseloc (post-truncation) is allowed
    let truncated = reg(&manager, 0x20, 4);
    manager
        .add_spacebase_pointer(&stack, &truncated, 4, true)
        .unwrap();
    // big endian truncation moves the offset forward
    let manager_be = test_manager(true);
    let ram_be = Rc::clone(manager_be.get_space_by_name("ram").unwrap());
    let stack_be = Rc::new(SpacebaseSpace::new("stack", 6, 8, &ram_be, 1, false, true));
    let rsp_be = VarnodeStorage {
        space: Some(Rc::clone(manager_be.get_space_by_name("register").unwrap())),
        offset: 0x20,
        size: 8,
    };
    manager_be
        .add_spacebase_pointer(&stack_be, &rsp_be, 4, false)
        .unwrap();
    let baseloc = stack_be.get_spacebase(0).unwrap();
    assert_eq!((baseloc.offset, baseloc.size), (0x24, 4));
    assert!(!stack_be.stack_grows_negative());

    // decode_space/decode_spaces shape: constant space first, <space>
    // and <space_base> children, defaultspace resolution.  (The
    // decode-against-growing-manager pattern is exercised stepwise
    // because Rust cannot alias the manager mutably while the decoder
    // borrows it; the C++ decodeSpaces loop body is identical.)
    let mut registry = unlace_base::marshal::IdRegistry::with_base_ids();
    register_translate_ids(&mut registry);
    let mut manager2 = AddrSpaceManager::new();
    manager2
        .insert_space(Rc::new(ConstantSpace::new()))
        .unwrap();
    let spc = {
        let mut dec = XmlDecode::new(&manager2, &registry);
        dec.ingest_stream(
            b"<space name=\"ram\" index=\"3\" size=\"8\" bigendian=\"false\" \
                  delay=\"1\" physical=\"true\"/>",
        )
        .unwrap();
        manager2.decode_space(&mut dec).unwrap()
    };
    assert_eq!(spc.get_name(), "ram");
    manager2.insert_space(spc).unwrap();
    let spc = {
        let mut dec = XmlDecode::new(&manager2, &registry);
        dec.ingest_stream(
            b"<space_base name=\"stack\" index=\"6\" size=\"8\" contain=\"ram\" delay=\"1\"/>",
        )
        .unwrap();
        manager2.decode_space(&mut dec).unwrap()
    };
    assert_eq!(spc.get_type(), spacetype::IPTR_SPACEBASE);
    manager2.insert_space(spc).unwrap();
    let stack2 = Rc::clone(manager2.get_space_by_name("stack").unwrap());
    assert!(Rc::ptr_eq(manager2.get_stack_space().unwrap(), &stack2));
    assert!(Rc::ptr_eq(
        stack2.get_contain().unwrap(),
        manager2.get_space_by_name("ram").unwrap()
    ));
    assert_eq!(stack2.get_delay(), 1);
    assert_eq!(stack2.get_shortcut(), 's');
}

/// TruncationTag decode + manager truncate_space application.
#[test]
fn test_translate_truncation_tag() {
    let manager = test_manager(false);
    let mut registry = unlace_base::marshal::IdRegistry::with_base_ids();
    register_translate_ids(&mut registry);
    let mut dec = XmlDecode::new(&manager, &registry);
    dec.ingest_stream(b"<truncate_space space=\"ram\" size=\"4\"/>")
        .unwrap();
    let mut tag = TruncationTag::default();
    tag.decode(&mut dec).unwrap();
    assert_eq!(tag.get_name(), "ram");
    assert_eq!(tag.get_size(), 4);
    // C++ AddrSpaceManager::truncateSpace(tag)
    manager
        .truncate_space(tag.get_name(), tag.get_size())
        .unwrap();
    let ram = manager.get_space_by_name("ram").unwrap();
    assert!(ram.is_truncated());
    assert_eq!(ram.get_addr_size(), 4);
}

/// parseAddressSimple: default data space, named space, 0x prefix and
/// the unknown-space error.
#[test]
fn test_translate_parse_address_simple() {
    let manager = test_manager(false);
    let addr = manager.parse_address_simple("0x1000").unwrap();
    assert!(Rc::ptr_eq(
        addr.get_space().unwrap(),
        manager.get_default_data_space().unwrap()
    ));
    assert_eq!(addr.get_offset(), 0x1000);
    let addr = manager.parse_address_simple("register:10").unwrap();
    assert!(Rc::ptr_eq(
        addr.get_space().unwrap(),
        manager.get_space_by_name("register").unwrap()
    ));
    assert_eq!(addr.get_offset(), 0x10); // hex with or without 0x
    assert_eq!(
        manager
            .parse_address_simple("bogus:0x10")
            .unwrap_err()
            .explain(),
        "Unknown address space: bogus"
    );
}

/// AddressResolver installation and resolve_constant dispatch: the
/// default wordsize/wrap path vs an installed segment-style resolver.
struct PlusOneResolver {
    space: Rc<AddrSpace>,
}
impl AddressResolver for PlusOneResolver {
    fn resolve(
        &self,
        val: u64,
        _sz: i32,
        _point: &Address,
        full_encoding: &mut u64,
    ) -> UnlaceResult<Address> {
        *full_encoding = val;
        Ok(Address::new(Rc::clone(&self.space), val + 1))
    }
}

#[test]
fn test_translate_address_resolver() {
    let mut manager = test_manager(false);
    let ram = Rc::clone(manager.get_space_by_name("ram").unwrap());
    let register = Rc::clone(manager.get_space_by_name("register").unwrap());
    let point = Address::new(Rc::clone(&ram), 0);
    let mut full: u64 = 0;
    // no resolver: wordsize conversion + wrap
    let addr = manager
        .resolve_constant(&ram, 0x1234, 4, &point, &mut full)
        .unwrap();
    assert_eq!(addr.get_offset(), 0x1234);
    assert_eq!(full, 0x1234);
    // installed resolver takes over for its space only
    manager.insert_resolver(
        &ram,
        Box::new(PlusOneResolver {
            space: Rc::clone(&ram),
        }),
    );
    let addr = manager
        .resolve_constant(&ram, 0x1234, 4, &point, &mut full)
        .unwrap();
    assert_eq!(addr.get_offset(), 0x1235);
    let addr = manager
        .resolve_constant(&register, 0x10, 4, &point, &mut full)
        .unwrap();
    assert_eq!(addr.get_offset(), 0x10);
}

/// A PcodeEmit implementation collecting dumped ops; decode_op via XML
/// and via the packed format, including the void-output and <spaceid>
/// paths and the negative-size error.
#[derive(Default)]
struct CollectEmit {
    ops: Vec<(u64, OpCode, Option<(u64, u32)>, Vec<(u64, u32)>)>,
}

impl PcodeEmit for CollectEmit {
    fn dump(
        &mut self,
        addr: &Address,
        opc: OpCode,
        outvar: Option<&VarnodeData>,
        vars: &[VarnodeData],
    ) {
        self.ops.push((
            addr.get_offset(),
            opc,
            outvar.map(|v| (v.offset, v.size)),
            vars.iter().map(|v| (v.offset, v.size)).collect(),
        ));
    }
}

#[test]
fn test_translate_pcode_emit_decode_op() {
    let manager = test_manager(false);
    let ram = Rc::clone(manager.get_space_by_name("ram").unwrap());
    let mut registry = unlace_base::marshal::IdRegistry::with_base_ids();
    register_translate_ids(&mut registry);
    let addr = Address::new(Rc::clone(&ram), 0x1000);

    // XML path: INT_ADD with output + 2 inputs
    let mut dec = XmlDecode::new(&manager, &registry);
    dec.ingest_stream(
        b"<op code=\"INT_ADD\" size=\"2\">\
              <addr space=\"register\" offset=\"0x0\" size=\"4\"/>\
              <addr space=\"register\" offset=\"0x8\" size=\"4\"/>\
              <addr space=\"register\" offset=\"0xc\" size=\"4\"/></op>",
    )
    .unwrap();
    let mut emit = CollectEmit::default();
    emit.decode_op(&addr, &mut dec).unwrap();
    assert_eq!(
        emit.ops,
        vec![(
            0x1000,
            OpCode::CPUI_INT_ADD,
            Some((0x0, 4)),
            vec![(0x8, 4), (0xc, 4)]
        )]
    );

    // packed round-trip with void output and a <spaceid> input (the
    // STORE shape)
    let mut stream: Vec<u8> = Vec::new();
    {
        let mut enc = PackedEncode::new(&mut stream);
        enc.open_element(&ELEM_OP);
        enc.write_signed_integer(&ATTRIB_SIZE, 2);
        enc.write_opcode(&ATTRIB_CODE, OpCode::CPUI_STORE);
        enc.open_element(&unlace_base::marshal::ELEM_VOID);
        enc.close_element(&unlace_base::marshal::ELEM_VOID);
        enc.open_element(&ELEM_SPACEID);
        enc.write_space(&ATTRIB_NAME, &ram);
        enc.close_element(&ELEM_SPACEID);
        Address::new(Rc::clone(&ram), 0x2000)
            .encode_sized(&mut enc, 8)
            .unwrap();
        enc.close_element(&ELEM_OP);
    }
    let mut dec = PackedDecode::new(&manager);
    dec.ingest_stream(&stream).unwrap();
    let mut emit = CollectEmit::default();
    emit.decode_op(&addr, &mut dec).unwrap();
    assert_eq!(emit.ops.len(), 1);
    let (_, opc, out, ins) = &emit.ops[0];
    assert_eq!(*opc, OpCode::CPUI_STORE);
    assert!(out.is_none());
    // spaceid input carries the space's manager index (LOSS-015)
    assert_eq!(ins[0], (ram.get_index() as u64, 8));
    assert_eq!(ins[1], (0x2000, 8));

    // negative size attribute -> DecoderError, exact C++ string
    let mut dec = XmlDecode::new(&manager, &registry);
    dec.ingest_stream(b"<op code=\"INT_ADD\" size=\"-1\"><void/></op>")
        .unwrap();
    let mut emit = CollectEmit::default();
    let err = emit.decode_op(&addr, &mut dec).unwrap_err();
    assert!(matches!(err, UnlaceError::Decoder { .. }));
    assert_eq!(err.explain(), "Bad <op> size attribute");
}

/// TranslateBase concrete behavior: unique base monotonicity,
/// getUniqueStart layout math, default float formats, endianness.
#[test]
fn test_translate_base_state() {
    let mut base = TranslateBase::new();
    assert!(!base.is_big_endian());
    assert_eq!(base.get_alignment(), 1);
    assert_eq!(base.get_unique_base(), 0);
    // setUniqueBase only ever grows
    base.set_unique_base(0x100);
    base.set_unique_base(0x80);
    assert_eq!(base.get_unique_base(), 0x100);
    assert_eq!(
        base.get_unique_start(UniqueLayout::RUNTIME_BOOLEAN_INVERT),
        0x100
    );
    assert_eq!(
        base.get_unique_start(UniqueLayout::RUNTIME_RETURN_LOCATION),
        0x180
    );
    assert_eq!(
        base.get_unique_start(UniqueLayout::RUNTIME_BITRANGE_EA),
        0x200
    );
    assert_eq!(base.get_unique_start(UniqueLayout::INJECT), 0x300);
    // ANALYSIS is absolute, not offset by the unique base
    assert_eq!(base.get_unique_start(UniqueLayout::ANALYSIS), 0x10000000);
    assert!(base.get_float_format(4).is_none());
    base.set_default_float_formats();
    assert_eq!(base.get_float_format(4).unwrap().get_size(), 4);
    assert_eq!(base.get_float_format(8).unwrap().get_size(), 8);
    assert_eq!(base.get_float_format(2).unwrap().get_size(), 2);
    assert!(base.get_float_format(10).is_none());
    // second call does not duplicate
    base.set_default_float_formats();
    assert_eq!(base.floatformats.len(), 3);
    base.set_big_endian(true);
    assert!(base.is_big_endian());
}

/// A minimal Translate implementor: the trait is object-safe, the
/// provided methods route through TranslateBase, and the implementor
/// doubles as the manager's RegisterLookup.
struct DummyTranslate {
    base: TranslateBase,
    regs: TestRegisters,
    context_calls: RefCell<Vec<String>>,
}

impl RegisterLookup for DummyTranslate {
    fn get_register(&self, nm: &str) -> UnlaceResult<VarnodeStorage> {
        self.regs.get_register(nm)
    }
    fn get_register_name(&self, base: &Rc<AddrSpace>, off: u64, size: i32) -> String {
        self.regs.get_register_name(base, off, size)
    }
    fn get_exact_register_name(&self, base: &Rc<AddrSpace>, off: u64, size: i32) -> String {
        self.regs.get_exact_register_name(base, off, size)
    }
}

impl Translate for DummyTranslate {
    fn translate_base(&self) -> &TranslateBase {
        &self.base
    }
    fn translate_base_mut(&mut self) -> &mut TranslateBase {
        &mut self.base
    }
    fn initialize(&mut self, _store: &mut DocumentStorage) -> UnlaceResult<()> {
        self.base.set_big_endian(false);
        self.base.set_unique_base(0x1000);
        self.base.set_default_float_formats();
        Ok(())
    }
    fn allow_context_set(&self, val: bool) {
        self.context_calls
            .borrow_mut()
            .push(format!("allow({val})"));
    }
    #[allow(clippy::mutable_key_type)] // see the trait method's note
    fn get_all_registers(&self, reglist: &mut BTreeMap<VarnodeData, String>) {
        for (name, offset, size) in &self.regs.regs {
            reglist.insert(
                VarnodeData {
                    space: Some(Rc::clone(&self.regs.space)),
                    offset: *offset,
                    size: *size,
                },
                (*name).to_string(),
            );
        }
    }
    fn get_user_op_names(&self, res: &mut Vec<String>) {
        res.push("pcodeop_one".to_string());
    }
    fn instruction_length(&self, _baseaddr: &Address) -> UnlaceResult<i32> {
        Ok(4)
    }
    fn one_instruction(&self, emit: &mut dyn PcodeEmit, baseaddr: &Address) -> UnlaceResult<i32> {
        let vars = [VarnodeData {
            space: Some(Rc::clone(&self.regs.space)),
            offset: 0,
            size: 4,
        }];
        emit.dump(baseaddr, OpCode::CPUI_COPY, None, &vars);
        Ok(4)
    }
    fn print_assembly(&self, emit: &mut dyn AssemblyEmit, baseaddr: &Address) -> UnlaceResult<i32> {
        if baseaddr.get_offset() == 4 {
            emit.dump(baseaddr, "PARTIAL", "assembly");
            return Err(UnlaceError::lowlevel("assembly failed"));
        }
        emit.dump(baseaddr, "NOP", "");
        Ok(4)
    }
}

struct CollectAsm(Vec<(u64, String, String)>);
impl AssemblyEmit for CollectAsm {
    fn dump(&mut self, addr: &Address, mnem: &str, body: &str) {
        self.0
            .push((addr.get_offset(), mnem.to_string(), body.to_string()));
    }
}

#[test]
fn test_translate_trait_object_and_lookup_install() {
    let mut manager = test_manager(false);
    let register = Rc::clone(manager.get_space_by_name("register").unwrap());
    let trans: Rc<DummyTranslate> = Rc::new(DummyTranslate {
        base: {
            let mut b = TranslateBase::new();
            b.set_unique_base(0x1000);
            b.set_default_float_formats();
            b
        },
        regs: TestRegisters {
            space: Rc::clone(&register),
            regs: vec![("EAX", 0, 4), ("EDX", 8, 4)],
        },
        context_calls: RefCell::new(Vec::new()),
    });
    // the engine installs itself as the manager's register lookup
    manager.set_register_lookup(Rc::clone(&trans) as Rc<dyn RegisterLookup>);
    let mut size = 0i32;
    let off = register.read("EDX", &mut size, &manager).unwrap();
    assert_eq!((off, size), (8, 4));

    // dyn Translate is usable and provided methods route to the base
    let dyn_trans: &dyn Translate = trans.as_ref();
    assert!(!dyn_trans.is_big_endian());
    assert_eq!(dyn_trans.get_unique_base(), 0x1000);
    assert_eq!(dyn_trans.get_alignment(), 1);
    assert_eq!(dyn_trans.get_float_format(8).unwrap().get_size(), 8);
    let vd = dyn_trans.get_register_data("EAX").unwrap();
    assert_eq!((vd.offset, vd.size), (0, 4));
    assert!(Rc::ptr_eq(vd.space.as_ref().unwrap(), &register));
    // unknown register propagates the SleighError shape
    assert!(dyn_trans.get_register_data("XMM0").is_err());
    dyn_trans.allow_context_set(true);
    assert_eq!(trans.context_calls.borrow().as_slice(), ["allow(true)"]);

    let mut regs = BTreeMap::new();
    dyn_trans.get_all_registers(&mut regs);
    // BTreeMap keyed by VarnodeData order: (space index, offset, size)
    let names: Vec<&str> = regs.values().map(String::as_str).collect();
    assert_eq!(names, ["EAX", "EDX"]);
    let mut userops = Vec::new();
    dyn_trans.get_user_op_names(&mut userops);
    assert_eq!(userops, ["pcodeop_one"]);

    let addr = Address::new(Rc::clone(&register), 0);
    assert_eq!(dyn_trans.instruction_length(&addr).unwrap(), 4);
    let mut emit = CollectEmit::default();
    assert_eq!(dyn_trans.one_instruction(&mut emit, &addr).unwrap(), 4);
    assert_eq!(emit.ops.len(), 1);
    let mut asm = CollectAsm(Vec::new());
    assert_eq!(dyn_trans.print_assembly(&mut asm, &addr).unwrap(), 4);
    assert_eq!(asm.0, vec![(0, "NOP".to_string(), String::new())]);

    let mut mnemonic = String::from("stale mnemonic");
    let mut body = String::from("stale body");
    assert_eq!(
        dyn_trans
            .print_assembly_into(&addr, &mut mnemonic, &mut body)
            .unwrap(),
        4
    );
    assert_eq!(mnemonic, "NOP");
    assert!(body.is_empty());

    let error_addr = Address::new(Rc::clone(&register), 4);
    mnemonic.push_str(" stale");
    body.push_str("stale");
    assert!(
        dyn_trans
            .print_assembly_into(&error_addr, &mut mnemonic, &mut body)
            .is_err()
    );
    assert!(mnemonic.is_empty());
    assert!(body.is_empty());

    let mut combined_ops = CollectEmit::default();
    let mut combined_text = CollectAsm(Vec::new());
    assert_eq!(
        dyn_trans
            .one_instruction_with_assembly(&mut combined_ops, &mut combined_text, &error_addr)
            .unwrap(),
        4
    );
    assert_eq!(combined_ops.ops.len(), 1);
    assert_eq!(
        combined_text.0,
        vec![(4, "PARTIAL".into(), "assembly".into())]
    );
}

/// The VarnodeStorage <-> VarnodeData conversions are exact and the two
/// transcriptions of the C++ comparator agree.
#[test]
fn test_translate_storage_conversions_and_comparator_parity() {
    let manager = test_manager(false);
    let cases = [
        reg(&manager, 0, 4),
        reg(&manager, 0, 8),
        reg(&manager, 8, 4),
        VarnodeStorage {
            space: Some(Rc::clone(manager.get_space_by_name("ram").unwrap())),
            offset: 0,
            size: 4,
        },
    ];
    for a in &cases {
        let vd = varnode_data_from_storage(a);
        let back = storage_from_varnode_data(&vd);
        assert_eq!(*a, back);
        assert_eq!((vd.offset, vd.size), (a.offset, a.size));
        for b in &cases {
            // Ord parity between the unlace-base and unlace-num transcriptions
            assert_eq!(
                a.cmp(b),
                varnode_data_from_storage(a).cmp(&varnode_data_from_storage(b)),
                "comparator parity"
            );
        }
    }
}
