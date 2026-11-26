use std::borrow::Cow;
use std::cell::Cell;
use unlace_base::address::Address;
use unlace_base::marshal::{PackedDecode, PackedEncode};
use unlace_base::space::{AddrSpaceManager, ConstantSpace, UniqueSpace, addrspace_flags};

use super::*;
use crate::slghpatexpress::PatternExpressionContext;
use crate::slghsymbol::ConstructorRef;

// -- fixtures ------------------------------------------------------------

fn test_manager() -> AddrSpaceManager {
    let mut manager = AddrSpaceManager::new();
    manager.insert_space(Rc::new(ConstantSpace::new())).unwrap();
    let ram = AddrSpace::new(
        spacetype::IPTR_PROCESSOR,
        "ram",
        false,
        4,
        2, // wordsize 2 to exercise addressToByte
        1,
        addrspace_flags::hasphysical,
        1,
        1,
    );
    manager.insert_space(Rc::new(ram)).unwrap();
    manager
        .insert_space(Rc::new(UniqueSpace::new(2, 0, false)))
        .unwrap();
    manager
}

fn cspace(manager: &AddrSpaceManager) -> Rc<AddrSpace> {
    Rc::clone(manager.get_constant_space().unwrap())
}

fn ram(manager: &AddrSpaceManager) -> Rc<AddrSpace> {
    Rc::clone(manager.get_space_by_name("ram").unwrap())
}

fn uniq(manager: &AddrSpaceManager) -> Rc<AddrSpace> {
    Rc::clone(manager.get_space_by_name("unique").unwrap())
}

/// Synthetic ParserWalker seam for the fix() resolution matrix.
struct TestWalker {
    addr: Address,
    naddr: Address,
    n2addr: Option<Address>,
    ref_addr: Option<Address>,
    dest_addr: Option<Address>,
    const_space: Rc<AddrSpace>,
    cur_space: Rc<AddrSpace>,
    handles: Vec<FixedHandle>,
    borrowed_handles: bool,
    owned_reads: Cell<usize>,
}

impl TestWalker {
    fn new(manager: &AddrSpaceManager) -> TestWalker {
        TestWalker {
            addr: Address::new(ram(manager), 0x1000),
            naddr: Address::new(ram(manager), 0x1004),
            n2addr: None,
            ref_addr: None,
            dest_addr: None,
            const_space: cspace(manager),
            cur_space: ram(manager),
            handles: Vec::new(),
            borrowed_handles: false,
            owned_reads: Cell::new(0),
        }
    }
}

impl PatternExpressionContext for TestWalker {
    fn get_instruction_bytes(&self, _byteoff: i32, _numbytes: i32) -> UnlaceResult<u32> {
        Err(UnlaceError::sleigh(
            "no instruction bytes in semantics tests",
        ))
    }
    fn get_context_bytes(&self, _byteoff: i32, _numbytes: i32) -> UnlaceResult<u32> {
        Err(UnlaceError::sleigh("no context bytes in semantics tests"))
    }
    fn get_addr(&self) -> Address {
        self.addr.clone()
    }
    fn get_naddr(&self) -> Address {
        self.naddr.clone()
    }
    fn get_n2addr(&self) -> UnlaceResult<Address> {
        self.n2addr
            .clone()
            .ok_or_else(|| UnlaceError::lowlevel("inst_next2 not available in this context"))
    }
    fn operand_value(&self, _index: i32, _table_id: u32, _ct_id: u32) -> UnlaceResult<i64> {
        Err(UnlaceError::sleigh("no operand values in semantics tests"))
    }
}

impl SymbolWalker for TestWalker {
    fn push_operand(&mut self, _i: i32) -> UnlaceResult<()> {
        Ok(())
    }
    fn pop_operand(&mut self) -> UnlaceResult<()> {
        Ok(())
    }
    fn get_constructor(&self) -> UnlaceResult<ConstructorRef> {
        Err(UnlaceError::sleigh("no constructor in semantics tests"))
    }
    fn get_fixed_handle(&self, i: i32) -> UnlaceResult<FixedHandle> {
        self.owned_reads.set(self.owned_reads.get() + 1);
        self.handles
            .get(i as usize)
            .cloned()
            .ok_or_else(|| UnlaceError::sleigh("no fixed handle for operand"))
    }
    fn borrow_fixed_handle(&self, i: i32) -> UnlaceResult<Cow<'_, FixedHandle>> {
        if self.borrowed_handles {
            self.handles
                .get(i as usize)
                .map(Cow::Borrowed)
                .ok_or_else(|| UnlaceError::sleigh("no fixed handle for operand"))
        } else {
            self.get_fixed_handle(i).map(Cow::Owned)
        }
    }
    fn get_const_space(&self) -> Rc<AddrSpace> {
        Rc::clone(&self.const_space)
    }
    fn get_cur_space(&self) -> Rc<AddrSpace> {
        Rc::clone(&self.cur_space)
    }
    fn get_dest_addr(&self) -> UnlaceResult<Address> {
        self.dest_addr
            .clone()
            .ok_or_else(|| UnlaceError::lowlevel("no flowdest"))
    }
    fn get_ref_addr(&self) -> UnlaceResult<Address> {
        self.ref_addr
            .clone()
            .ok_or_else(|| UnlaceError::lowlevel("no flowref"))
    }
    fn get_instruction_bits(&self, _startbit: i32, _size: i32) -> UnlaceResult<u32> {
        Err(UnlaceError::sleigh(
            "no instruction bits in semantics tests",
        ))
    }
    fn get_context_bits(&self, _startbit: i32, _size: i32) -> UnlaceResult<u32> {
        Err(UnlaceError::sleigh("no context bits in semantics tests"))
    }
}

/// Static handle: ram:0x80, size 4.
fn static_handle(manager: &AddrSpaceManager) -> FixedHandle {
    FixedHandle {
        space: Some(ram(manager)),
        size: 4,
        offset_space: None,
        offset_offset: 0x80,
        offset_size: 0,
        temp_space: None,
        temp_offset: 0,
    }
}

/// Dynamic handle: value lives at unique:0x300, pointer in ram.
fn dynamic_handle(manager: &AddrSpaceManager) -> FixedHandle {
    FixedHandle {
        space: Some(ram(manager)),
        size: 4,
        offset_space: Some(ram(manager)),
        offset_offset: 0x40,
        offset_size: 4,
        temp_space: Some(uniq(manager)),
        temp_offset: 0x300,
    }
}

/// Constant handle: const-space value.
fn const_handle(manager: &AddrSpaceManager) -> FixedHandle {
    FixedHandle {
        space: Some(cspace(manager)),
        size: 8,
        offset_space: None,
        offset_offset: 0xdead_beef_1234_5678,
        offset_size: 0,
        temp_space: None,
        temp_offset: 0,
    }
}

// -- ConstTpl::fix resolution matrix ---------------------------------------

#[test]
fn semantics_consttpl_fix_addresses_and_spaces() {
    let manager = test_manager();
    let mut walker = TestWalker::new(&manager);
    walker.ref_addr = Some(Address::new(ram(&manager), 0x2000));
    walker.dest_addr = Some(Address::new(ram(&manager), 0x3000));

    assert_eq!(
        ConstTpl::new_real(ConstType::Real, 0x55)
            .fix(&walker)
            .unwrap(),
        0x55
    );
    assert_eq!(
        ConstTpl::new_real(ConstType::JRelative, 7)
            .fix(&walker)
            .unwrap(),
        7
    );
    assert_eq!(
        ConstTpl::new_type(ConstType::JStart).fix(&walker).unwrap(),
        0x1000
    );
    assert_eq!(
        ConstTpl::new_type(ConstType::JNext).fix(&walker).unwrap(),
        0x1004
    );
    // j_next2 errors through the walker when unavailable
    assert!(ConstTpl::new_type(ConstType::JNext2).fix(&walker).is_err());
    assert_eq!(
        ConstTpl::new_type(ConstType::JFlowref)
            .fix(&walker)
            .unwrap(),
        0x2000
    );
    assert_eq!(
        ConstTpl::new_type(ConstType::JFlowrefSize)
            .fix(&walker)
            .unwrap(),
        4
    );
    assert_eq!(
        ConstTpl::new_type(ConstType::JFlowdest)
            .fix(&walker)
            .unwrap(),
        0x3000
    );
    assert_eq!(
        ConstTpl::new_type(ConstType::JFlowdestSize)
            .fix(&walker)
            .unwrap(),
        4
    );
    assert_eq!(
        ConstTpl::new_type(ConstType::JCurspaceSize)
            .fix(&walker)
            .unwrap(),
        4
    );
    // spaces resolve to their manager index (the C++ pointer-as-uintb)
    assert_eq!(
        ConstTpl::new_type(ConstType::JCurspace)
            .fix(&walker)
            .unwrap(),
        u64::try_from(ram(&manager).get_index()).unwrap()
    );
    assert_eq!(
        ConstTpl::new_space(uniq(&manager)).fix(&walker).unwrap(),
        u64::try_from(uniq(&manager).get_index()).unwrap()
    );
}

#[test]
fn semantics_consttpl_fix_handle_static_and_dynamic() {
    let manager = test_manager();
    let mut walker = TestWalker::new(&manager);
    walker.handles.push(static_handle(&manager));
    walker.handles.push(dynamic_handle(&manager));

    // static handle: space, offset, size
    assert_eq!(
        ConstTpl::new_handle(0, VField::VSpace)
            .fix(&walker)
            .unwrap(),
        u64::try_from(ram(&manager).get_index()).unwrap()
    );
    assert_eq!(
        ConstTpl::new_handle(0, VField::VOffset)
            .fix(&walker)
            .unwrap(),
        0x80
    );
    assert_eq!(
        ConstTpl::new_handle(0, VField::VSize).fix(&walker).unwrap(),
        4
    );
    // dynamic handle reads the temporary storage
    assert_eq!(
        ConstTpl::new_handle(1, VField::VSpace)
            .fix(&walker)
            .unwrap(),
        u64::try_from(uniq(&manager).get_index()).unwrap()
    );
    assert_eq!(
        ConstTpl::new_handle(1, VField::VOffset)
            .fix(&walker)
            .unwrap(),
        0x300
    );
}

#[test]
fn semantics_consttpl_fix_offset_plus() {
    let manager = test_manager();
    let mut walker = TestWalker::new(&manager);
    walker.handles.push(static_handle(&manager));
    walker.handles.push(dynamic_handle(&manager));
    walker.handles.push(const_handle(&manager));

    // non-constant static: offset adjusted by the low-16 truncation amount
    assert_eq!(
        ConstTpl::new_handle_plus(0, VField::VOffsetPlus, 0x0003_0002)
            .fix(&walker)
            .unwrap(),
        0x80 + 2
    );
    // non-constant dynamic: temp offset adjusted
    assert_eq!(
        ConstTpl::new_handle_plus(1, VField::VOffsetPlus, 0x0003_0002)
            .fix(&walker)
            .unwrap(),
        0x300 + 2
    );
    // constant: value shifted down by 8*(plus>>16) bits
    assert_eq!(
        ConstTpl::new_handle_plus(2, VField::VOffsetPlus, 0x0004_0004)
            .fix(&walker)
            .unwrap(),
        0xdead_beef_1234_5678u64 >> 32
    );
}

#[test]
fn semantics_consttpl_fixspace_matrix() {
    let manager = test_manager();
    let mut walker = TestWalker::new(&manager);
    walker.ref_addr = Some(Address::new(ram(&manager), 0x2000));
    walker.handles.push(static_handle(&manager));
    walker.handles.push(dynamic_handle(&manager));

    let cur = ConstTpl::new_type(ConstType::JCurspace)
        .fix_space(&walker)
        .unwrap()
        .unwrap();
    assert!(Rc::ptr_eq(&cur, &ram(&manager)));
    let sid = ConstTpl::new_space(uniq(&manager))
        .fix_space(&walker)
        .unwrap()
        .unwrap();
    assert!(Rc::ptr_eq(&sid, &uniq(&manager)));
    let h0 = ConstTpl::new_handle(0, VField::VSpace)
        .fix_space(&walker)
        .unwrap()
        .unwrap();
    assert!(Rc::ptr_eq(&h0, &ram(&manager)));
    let h1 = ConstTpl::new_handle(1, VField::VSpace)
        .fix_space(&walker)
        .unwrap()
        .unwrap();
    assert!(Rc::ptr_eq(&h1, &uniq(&manager)));
    let fr = ConstTpl::new_type(ConstType::JFlowref)
        .fix_space(&walker)
        .unwrap()
        .unwrap();
    assert!(Rc::ptr_eq(&fr, &ram(&manager)));
    // not a space: the C++ LowlevelError
    let err = ConstTpl::new_real(ConstType::Real, 4)
        .fix_space(&walker)
        .unwrap_err();
    assert_eq!(err.explain(), "ConstTpl is not a spaceid as expected");
    // handle with a non-space select also throws
    assert!(
        ConstTpl::new_handle(0, VField::VOffset)
            .fix_space(&walker)
            .is_err()
    );
}

#[test]
fn semantics_handletpl_fix_unstarred() {
    let manager = test_manager();
    let walker = TestWalker::new(&manager);

    // HandleTpl(vn) for a static varnode ram:0x42:4
    let vn = VarnodeTpl::new(
        ConstTpl::new_space(ram(&manager)),
        ConstTpl::new_real(ConstType::Real, 0x42),
        ConstTpl::new_real(ConstType::Real, 4),
    );
    let tpl = HandleTpl::new_from_varnode(&vn);
    let mut hand = FixedHandle::default();
    tpl.fix(&mut hand, &walker).unwrap();
    assert!(Rc::ptr_eq(hand.space.as_ref().unwrap(), &ram(&manager)));
    assert_eq!(hand.size, 4);
    assert!(hand.offset_space.is_none());
    assert_eq!(hand.offset_offset, 0x42);
}

#[test]
fn semantics_handletpl_fix_starred_constant_pointer() {
    let manager = test_manager();
    let walker = TestWalker::new(&manager);

    // *[ram]:4 of the constant 0x21 (a star that wasn't dynamic):
    // ptrspace is the constant space, so fix folds the pointer into a
    // static offset, converting address units to bytes (wordsize 2).
    let ptr_vn = VarnodeTpl::new(
        ConstTpl::new_space(cspace(&manager)),
        ConstTpl::new_real(ConstType::Real, 0x21),
        ConstTpl::new_real(ConstType::Real, 4),
    );
    let tpl = HandleTpl::new_ptr(
        &ConstTpl::new_space(ram(&manager)),
        &ConstTpl::new_real(ConstType::Real, 4),
        &ptr_vn,
        uniq(&manager),
        0x100,
    );
    let mut hand = FixedHandle::default();
    tpl.fix(&mut hand, &walker).unwrap();
    assert!(Rc::ptr_eq(hand.space.as_ref().unwrap(), &ram(&manager)));
    assert_eq!(hand.size, 4);
    assert!(hand.offset_space.is_none());
    // addressToByte multiplies by the wordsize
    assert_eq!(hand.offset_offset, 0x42);
}

#[test]
fn semantics_handletpl_fix_starred_dynamic_pointer() {
    let manager = test_manager();
    let mut walker = TestWalker::new(&manager);
    walker.handles.push(static_handle(&manager));

    // *[ram]:4 handle0 — a dynamic export: pointer pieces + temp location
    let ptr_vn = VarnodeTpl::new_from_handle(0, false);
    let tpl = HandleTpl::new_ptr(
        &ConstTpl::new_space(ram(&manager)),
        &ConstTpl::new_real(ConstType::Real, 4),
        &ptr_vn,
        uniq(&manager),
        0x100,
    );
    let mut hand = FixedHandle::default();
    tpl.fix(&mut hand, &walker).unwrap();
    assert!(Rc::ptr_eq(hand.space.as_ref().unwrap(), &ram(&manager)));
    assert_eq!(hand.size, 4);
    assert!(Rc::ptr_eq(
        hand.offset_space.as_ref().unwrap(),
        &ram(&manager)
    ));
    assert_eq!(hand.offset_offset, 0x80);
    assert_eq!(hand.offset_size, 4);
    assert!(Rc::ptr_eq(
        hand.temp_space.as_ref().unwrap(),
        &uniq(&manager)
    ));
    assert_eq!(hand.temp_offset, 0x100);
}

// -- equality / ordering ----------------------------------------------------

#[test]
fn borrowed_handles_preserve_scalar_fields_and_dynamic_exports() {
    let manager = test_manager();
    let mut owned = TestWalker::new(&manager);
    owned.handles = vec![
        static_handle(&manager),
        dynamic_handle(&manager),
        const_handle(&manager),
    ];
    let mut borrowed = TestWalker::new(&manager);
    borrowed.handles = owned.handles.clone();
    borrowed.borrowed_handles = true;
    let space_id = |space: &Option<Rc<AddrSpace>>| space.as_ref().map(Rc::as_ptr);
    for index in 0..3 {
        for field in [
            VField::VSpace,
            VField::VOffset,
            VField::VSize,
            VField::VOffsetPlus,
        ] {
            let tpl = ConstTpl::new_handle_plus(index, field, 0x0004_0002);
            assert_eq!(tpl.fix(&owned).unwrap(), tpl.fix(&borrowed).unwrap());
        }
        let space = ConstTpl::new_handle(index, VField::VSpace);
        assert_eq!(
            space_id(&space.fix_space(&owned).unwrap()),
            space_id(&space.fix_space(&borrowed).unwrap())
        );
        let varnode = VarnodeTpl::new_from_handle(index, false);
        assert_eq!(
            varnode.is_dynamic(&owned).unwrap(),
            varnode.is_dynamic(&borrowed).unwrap()
        );
        let tpl = HandleTpl::new_from_varnode(&varnode);
        let mut owned_export = FixedHandle::default();
        let mut borrowed_export = FixedHandle::default();
        tpl.fix(&mut owned_export, &owned).unwrap();
        tpl.fix(&mut borrowed_export, &borrowed).unwrap();
        assert_eq!(
            space_id(&owned_export.space),
            space_id(&borrowed_export.space)
        );
        assert_eq!(owned_export.size, borrowed_export.size);
        assert_eq!(
            space_id(&owned_export.offset_space),
            space_id(&borrowed_export.offset_space)
        );
        assert_eq!(owned_export.offset_offset, borrowed_export.offset_offset);
        assert_eq!(owned_export.offset_size, borrowed_export.offset_size);
        assert_eq!(
            space_id(&owned_export.temp_space),
            space_id(&borrowed_export.temp_space)
        );
        assert_eq!(owned_export.temp_offset, borrowed_export.temp_offset);
    }
    assert!(
        ConstTpl::new_handle(3, VField::VSize)
            .fix(&borrowed)
            .is_err()
    );
    assert_eq!(borrowed.owned_reads.get(), 0);
    assert!(owned.owned_reads.get() > 0);
}

#[test]
fn semantics_consttpl_equality_and_order() {
    let manager = test_manager();
    let r5 = ConstTpl::new_real(ConstType::Real, 5);
    let r9 = ConstTpl::new_real(ConstType::Real, 9);
    assert_eq!(r5, ConstTpl::new_real(ConstType::Real, 5));
    assert_ne!(r5, r9);
    assert!(r5.less_than(&r9));
    assert!(!r9.less_than(&r5));
    // type order dominates
    assert!(r9.less_than(&ConstTpl::new_handle(0, VField::VSpace)));
    // handle order: index then select
    let h0s = ConstTpl::new_handle(0, VField::VSpace);
    let h0o = ConstTpl::new_handle(0, VField::VOffset);
    let h1s = ConstTpl::new_handle(1, VField::VSpace);
    assert!(h0s.less_than(&h0o));
    assert!(h0o.less_than(&h1s));
    assert_ne!(h0s, h0o);
    // spaceid: pointer equality
    let s1 = ConstTpl::new_space(ram(&manager));
    let s2 = ConstTpl::new_space(ram(&manager));
    assert_eq!(s1, s2);
    assert!(!s1.less_than(&s2));
    assert_ne!(s1, ConstTpl::new_space(uniq(&manager)));
    // j_* types compare equal beyond the type
    assert_eq!(
        ConstTpl::new_type(ConstType::JStart),
        ConstTpl::new_type(ConstType::JStart)
    );
    assert!(ConstTpl::new_real(ConstType::Real, 0).is_zero());
    assert!(!ConstTpl::new_real(ConstType::JRelative, 0).is_zero());
}

// -- transfer ---------------------------------------------------------------

#[test]
fn semantics_consttpl_transfer_through_handles() {
    let manager = test_manager();
    // params[0]: handle exporting ram:0x42:4
    let vn = VarnodeTpl::new(
        ConstTpl::new_space(ram(&manager)),
        ConstTpl::new_real(ConstType::Real, 0x42),
        ConstTpl::new_real(ConstType::Real, 4),
    );
    let params = vec![HandleTpl::new_from_varnode(&vn)];

    let mut space = ConstTpl::new_handle(0, VField::VSpace);
    space.transfer(&params).unwrap();
    assert_eq!(space.get_type(), ConstType::Spaceid);
    assert!(Rc::ptr_eq(&space.get_space(), &ram(&manager)));

    let mut off = ConstTpl::new_handle(0, VField::VOffset);
    off.transfer(&params).unwrap();
    assert_eq!(off.get_type(), ConstType::Real);
    assert_eq!(off.get_real(), 0x42);

    let mut size = ConstTpl::new_handle(0, VField::VSize);
    size.transfer(&params).unwrap();
    assert_eq!(size.get_real(), 4);

    // offset_plus onto a real ptroffset adds the truncation amount
    let mut plus = ConstTpl::new_handle_plus(0, VField::VOffsetPlus, 0x0001_0002);
    plus.transfer(&params).unwrap();
    assert_eq!(plus.get_type(), ConstType::Real);
    assert_eq!(plus.get_real(), 0x42 + 2);

    // offset_plus onto a handle ptroffset re-targets the truncation
    let hvn = VarnodeTpl::new_from_handle(3, false);
    let hparams = vec![HandleTpl::new_from_varnode(&hvn)];
    let mut plus2 = ConstTpl::new_handle_plus(0, VField::VOffsetPlus, 0x0001_0002);
    plus2.transfer(&hparams).unwrap();
    assert_eq!(plus2.get_type(), ConstType::Handle);
    assert_eq!(plus2.get_handle_index(), 3);
    assert_eq!(plus2.get_select(), VField::VOffsetPlus);
    assert_eq!(plus2.get_real(), 0x0001_0002);

    // offset_plus onto anything else is the C++ LowlevelError
    let jvn = VarnodeTpl::new(
        ConstTpl::new_space(ram(&manager)),
        ConstTpl::new_type(ConstType::JStart),
        ConstTpl::new_real(ConstType::Real, 4),
    );
    let jparams = vec![HandleTpl::new_from_varnode(&jvn)];
    let mut plus3 = ConstTpl::new_handle_plus(0, VField::VOffsetPlus, 2);
    let err = plus3.transfer(&jparams).unwrap_err();
    assert_eq!(err.explain(), "Cannot truncate macro input in this way");
}

#[test]
fn semantics_varnodetpl_transfer_truncation_returns() {
    let manager = test_manager();
    // local-temp varnode with an offset_plus offset
    let mut vn = VarnodeTpl::new(
        ConstTpl::new_space(uniq(&manager)),
        ConstTpl::new_handle_plus(0, VField::VOffsetPlus, 0x0000_0002),
        ConstTpl::new_real(ConstType::Real, 2),
    );
    // params[0] export: unique:0x10:4 (so vn stays a local temp)
    let exp = VarnodeTpl::new(
        ConstTpl::new_space(uniq(&manager)),
        ConstTpl::new_real(ConstType::Real, 0x10),
        ConstTpl::new_real(ConstType::Real, 4),
    );
    let params = vec![HandleTpl::new_from_varnode(&exp)];
    assert_eq!(vn.transfer(&params).unwrap(), 2);

    // non-temp varnode without offset_plus returns -1
    let mut plain = VarnodeTpl::new(
        ConstTpl::new_space(ram(&manager)),
        ConstTpl::new_real(ConstType::Real, 0x42),
        ConstTpl::new_real(ConstType::Real, 4),
    );
    assert_eq!(plain.transfer(&params).unwrap(), -1);
}

#[test]
fn semantics_varnodetpl_adjust_truncation() {
    // little endian: encoded as (byteoffset<<16) | byteoffset
    let mut vn = VarnodeTpl::new(
        ConstTpl::new_real(ConstType::Real, 0),
        ConstTpl::new_handle_plus(2, VField::VOffsetPlus, 2),
        ConstTpl::new_real(ConstType::Real, 2),
    );
    assert!(vn.adjust_truncation(8, false));
    assert_eq!(vn.get_offset().get_type(), ConstType::Handle);
    assert_eq!(vn.get_offset().get_handle_index(), 2);
    assert_eq!(vn.get_offset().get_real(), (2u64 << 16) | 2);

    // big endian flips the in-byte offset: size 2 at byteoffset 2 of 8
    let mut vn2 = VarnodeTpl::new(
        ConstTpl::new_real(ConstType::Real, 0),
        ConstTpl::new_handle_plus(2, VField::VOffsetPlus, 2),
        ConstTpl::new_real(ConstType::Real, 2),
    );
    assert!(vn2.adjust_truncation(8, true));
    assert_eq!(vn2.get_offset().get_real(), (2u64 << 16) | 4);

    // out of bounds
    let mut vn3 = VarnodeTpl::new(
        ConstTpl::new_real(ConstType::Real, 0),
        ConstTpl::new_handle_plus(2, VField::VOffsetPlus, 7),
        ConstTpl::new_real(ConstType::Real, 4),
    );
    assert!(!vn3.adjust_truncation(8, false));
}

// -- ConstructTpl bookkeeping -------------------------------------------

fn copy_op(manager: &AddrSpaceManager) -> OpTpl {
    let mut op = OpTpl::new(OpCode::CPUI_COPY);
    op.add_input(VarnodeTpl::new(
        ConstTpl::new_space(ram(manager)),
        ConstTpl::new_real(ConstType::Real, 0x42),
        ConstTpl::new_real(ConstType::Real, 4),
    ));
    op.set_output(VarnodeTpl::new(
        ConstTpl::new_space(uniq(manager)),
        ConstTpl::new_real(ConstType::Real, 0x10),
        ConstTpl::new_real(ConstType::Real, 4),
    ));
    op
}

fn build_op(manager: &AddrSpaceManager, index: u64) -> OpTpl {
    let mut op = OpTpl::new(BUILD);
    op.add_input(VarnodeTpl::new(
        ConstTpl::new_space(cspace(manager)),
        ConstTpl::new_real(ConstType::Real, index),
        ConstTpl::new_real(ConstType::Real, 4),
    ));
    op
}

#[test]
fn semantics_constructtpl_addop_counts_labels_and_delayslots() {
    let manager = test_manager();
    let mut ct = ConstructTpl::new();

    let mut label = OpTpl::new(LABELBUILD);
    label.add_input(VarnodeTpl::new(
        ConstTpl::new_space(cspace(&manager)),
        ConstTpl::new_real(ConstType::Real, 0),
        ConstTpl::new_real(ConstType::Real, 4),
    ));
    assert!(ct.add_op(label));
    assert_eq!(ct.num_labels(), 1);

    let mut ds = OpTpl::new(DELAY_SLOT);
    ds.add_input(VarnodeTpl::new(
        ConstTpl::new_space(cspace(&manager)),
        ConstTpl::new_real(ConstType::Real, 1),
        ConstTpl::new_real(ConstType::Real, 4),
    ));
    assert!(ct.add_op(ds));
    assert_eq!(ct.delay_slot(), 1);

    // second delay slot refused
    let mut ds2 = OpTpl::new(DELAY_SLOT);
    ds2.add_input(VarnodeTpl::new(
        ConstTpl::new_space(cspace(&manager)),
        ConstTpl::new_real(ConstType::Real, 2),
        ConstTpl::new_real(ConstType::Real, 4),
    ));
    assert!(!ct.add_op(ds2));
}

#[test]
fn semantics_constructtpl_fillin_build_and_buildonly() {
    let manager = test_manager();
    let mut ct = ConstructTpl::new();
    ct.add_op(build_op(&manager, 1));
    // operands 0 and 2 have no BUILD: fillinBuild inserts them at the front
    let mut check = vec![0i32; 3];
    assert_eq!(ct.fillin_build(&mut check, &cspace(&manager)), 0);
    assert_eq!(ct.get_opvec().len(), 3);
    assert!(ct.build_only());
    // inserted BUILDs are prepended (op for index 2 inserted last, ends
    // up first)
    let offsets: Vec<u64> = ct
        .get_opvec()
        .iter()
        .map(|op| op.get_in(0).get_offset().get_real())
        .collect();
    assert_eq!(offsets, vec![2, 0, 1]);

    // duplicate BUILD reports the stored check value
    let mut ct2 = ConstructTpl::new();
    ct2.add_op(build_op(&manager, 0));
    ct2.add_op(build_op(&manager, 0));
    let mut check2 = vec![0i32; 1];
    assert_eq!(ct2.fillin_build(&mut check2, &cspace(&manager)), 1);

    // non-subtable marker 2 is propagated
    let mut ct3 = ConstructTpl::new();
    ct3.add_op(build_op(&manager, 0));
    let mut check3 = vec![2i32; 1];
    assert_eq!(ct3.fillin_build(&mut check3, &cspace(&manager)), 2);

    let mut ct4 = ConstructTpl::new();
    ct4.add_op(copy_op(&manager));
    assert!(!ct4.build_only());
}

#[test]
fn semantics_constructtpl_delete_ops_compacts_in_order() {
    let manager = test_manager();
    let mut ct = ConstructTpl::new();
    for i in 0..5 {
        ct.add_op(build_op(&manager, i));
    }
    ct.delete_ops(&[1, 3]);
    let offsets: Vec<u64> = ct
        .get_opvec()
        .iter()
        .map(|op| op.get_in(0).get_offset().get_real())
        .collect();
    assert_eq!(offsets, vec![0, 2, 4]);
}

#[test]
fn semantics_change_handle_index_remaps_builds_and_handles() {
    let manager = test_manager();
    let mut ct = ConstructTpl::new();
    ct.add_op(build_op(&manager, 0));
    let mut op = OpTpl::new(OpCode::CPUI_COPY);
    op.add_input(VarnodeTpl::new_from_handle(1, false));
    op.set_output(VarnodeTpl::new_from_handle(0, false));
    ct.add_op(op);
    ct.set_result(Some(HandleTpl::new_from_varnode(
        &VarnodeTpl::new_from_handle(1, false),
    )));

    let handmap = vec![5, 7];
    ct.change_handle_index(&handmap);
    // BUILD input offset remapped through the map
    assert_eq!(ct.get_opvec()[0].get_in(0).get_offset().get_real(), 5);
    // ordinary op handles remapped
    assert_eq!(
        ct.get_opvec()[1].get_in(0).get_offset().get_handle_index(),
        7
    );
    assert_eq!(
        ct.get_opvec()[1]
            .get_out()
            .unwrap()
            .get_offset()
            .get_handle_index(),
        5
    );
    // result handle remapped
    assert_eq!(
        ct.get_result().unwrap().get_ptr_offset().get_handle_index(),
        7
    );
}

// -- decode round-trips -----------------------------------------------------

/// Encode with PackedEncode, decode, re-encode, compare byte streams.
fn roundtrip_consttpl(manager: &AddrSpaceManager, ct: &ConstTpl) -> ConstTpl {
    let mut buf = Vec::new();
    {
        let mut enc = PackedEncode::new(&mut buf);
        ct.encode(&mut enc);
    }
    let mut dec = PackedDecode::new(manager);
    dec.ingest_stream(&buf).unwrap();
    let mut out = ConstTpl::new();
    out.decode(&mut dec).unwrap();
    let mut buf2 = Vec::new();
    {
        let mut enc = PackedEncode::new(&mut buf2);
        out.encode(&mut enc);
    }
    assert_eq!(buf, buf2);
    out
}

#[test]
fn semantics_consttpl_decode_roundtrip_all_variants() {
    let manager = test_manager();
    let variants = vec![
        ConstTpl::new_real(ConstType::Real, 0x1234),
        ConstTpl::new_real(ConstType::JRelative, 9),
        ConstTpl::new_handle(2, VField::VOffset),
        ConstTpl::new_handle_plus(1, VField::VOffsetPlus, 0x0002_0001),
        ConstTpl::new_type(ConstType::JStart),
        ConstTpl::new_type(ConstType::JNext),
        ConstTpl::new_type(ConstType::JNext2),
        ConstTpl::new_type(ConstType::JCurspace),
        ConstTpl::new_type(ConstType::JCurspaceSize),
        ConstTpl::new_type(ConstType::JFlowref),
        ConstTpl::new_type(ConstType::JFlowrefSize),
        ConstTpl::new_type(ConstType::JFlowdest),
        ConstTpl::new_type(ConstType::JFlowdestSize),
        ConstTpl::new_space(ram(&manager)),
    ];
    for v in &variants {
        let out = roundtrip_consttpl(&manager, v);
        assert_eq!(out.get_type(), v.get_type());
        assert_eq!(*v, out);
        match v.get_type() {
            ConstType::Real | ConstType::JRelative => {
                assert_eq!(out.get_real(), v.get_real());
            }
            ConstType::Handle => {
                assert_eq!(out.get_handle_index(), v.get_handle_index());
                assert_eq!(out.get_select(), v.get_select());
                if v.get_select() == VField::VOffsetPlus {
                    assert_eq!(out.get_real(), v.get_real());
                }
            }
            ConstType::Spaceid => {
                assert!(Rc::ptr_eq(&out.get_space(), &v.get_space()));
            }
            _ => {}
        }
    }
}

#[test]
fn semantics_consttpl_decode_bad_selector() {
    let manager = test_manager();
    let mut buf = Vec::new();
    {
        let mut enc = PackedEncode::new(&mut buf);
        enc.open_element(&sla::ELEM_CONST_HANDLE);
        enc.write_signed_integer(&sla::ATTRIB_VAL, 0);
        enc.write_signed_integer(&sla::ATTRIB_S, 9);
        enc.close_element(&sla::ELEM_CONST_HANDLE);
    }
    let mut dec = PackedDecode::new(&manager);
    dec.ingest_stream(&buf).unwrap();
    let mut out = ConstTpl::new();
    let err = out.decode(&mut dec).unwrap_err();
    assert_eq!(err.explain(), "Bad handle selector encoding");
}

#[test]
fn semantics_optpl_and_constructtpl_decode_roundtrip() {
    let manager = test_manager();
    let mut ct = ConstructTpl::new();
    ct.add_op(copy_op(&manager));
    let mut noout = OpTpl::new(OpCode::CPUI_STORE);
    noout.add_input(VarnodeTpl::new(
        ConstTpl::new_space(cspace(&manager)),
        ConstTpl::new_real(ConstType::Real, 1),
        ConstTpl::new_real(ConstType::Real, 8),
    ));
    noout.add_input(VarnodeTpl::new_from_handle(0, false));
    noout.add_input(VarnodeTpl::new_from_handle(1, true));
    ct.add_op(noout);
    ct.set_result(Some(HandleTpl::new_from_varnode(
        &VarnodeTpl::new_from_handle(0, false),
    )));

    let mut buf = Vec::new();
    {
        let mut enc = PackedEncode::new(&mut buf);
        ct.encode(&mut enc, 3);
    }
    let mut dec = PackedDecode::new(&manager);
    dec.ingest_stream(&buf).unwrap();
    let mut out = ConstructTpl::new();
    let sectionid = out.decode(&mut dec).unwrap();
    assert_eq!(sectionid, 3);
    assert_eq!(out.get_opvec().len(), 2);
    assert_eq!(out.get_opvec()[0].get_opcode(), OpCode::CPUI_COPY);
    assert_eq!(out.get_opvec()[0].num_input(), 1);
    assert!(out.get_opvec()[0].get_out().is_some());
    assert_eq!(out.get_opvec()[1].get_opcode(), OpCode::CPUI_STORE);
    assert_eq!(out.get_opvec()[1].num_input(), 3);
    assert!(out.get_opvec()[1].get_out().is_none());
    assert!(out.get_result().is_some());

    // re-encode is byte-identical
    let mut buf2 = Vec::new();
    {
        let mut enc = PackedEncode::new(&mut buf2);
        out.encode(&mut enc, 3);
    }
    assert_eq!(buf, buf2);
}

#[test]
fn semantics_constructtpl_decode_null_result_and_attributes() {
    let manager = test_manager();
    let mut ct = ConstructTpl::new();
    // a labeled template with a delay slot, no result export
    let mut label = OpTpl::new(LABELBUILD);
    label.add_input(VarnodeTpl::new(
        ConstTpl::new_space(cspace(&manager)),
        ConstTpl::new_real(ConstType::Real, 0),
        ConstTpl::new_real(ConstType::Real, 4),
    ));
    ct.add_op(label);
    let mut ds = OpTpl::new(DELAY_SLOT);
    ds.add_input(VarnodeTpl::new(
        ConstTpl::new_space(cspace(&manager)),
        ConstTpl::new_real(ConstType::Real, 1),
        ConstTpl::new_real(ConstType::Real, 4),
    ));
    ct.add_op(ds);

    let mut buf = Vec::new();
    {
        let mut enc = PackedEncode::new(&mut buf);
        ct.encode(&mut enc, -1);
    }
    let mut dec = PackedDecode::new(&manager);
    dec.ingest_stream(&buf).unwrap();
    let mut out = ConstructTpl::new();
    assert_eq!(out.decode(&mut dec).unwrap(), -1);
    assert_eq!(out.delay_slot(), 1);
    assert_eq!(out.num_labels(), 1);
    assert!(out.get_result().is_none());
}

// -- PcodeBuilder dispatch ----------------------------------------------------

struct TestBuilder {
    labelbase: u32,
    labelcount: u32,
    calls: Vec<String>,
    /// (labelbase, labelcount) observed while inside build()
    inside: Vec<(u32, u32)>,
}

impl TestBuilder {
    fn new(lbcnt: u32) -> TestBuilder {
        TestBuilder {
            labelbase: lbcnt,
            labelcount: lbcnt,
            calls: Vec::new(),
            inside: Vec::new(),
        }
    }
}

impl PcodeBuilder for TestBuilder {
    fn get_label_base(&self) -> u32 {
        self.labelbase
    }
    fn set_label_base(&mut self, val: u32) {
        self.labelbase = val;
    }
    fn get_label_count(&self) -> u32 {
        self.labelcount
    }
    fn set_label_count(&mut self, val: u32) {
        self.labelcount = val;
    }
    fn dump(&mut self, op: &OpTpl) -> UnlaceResult<()> {
        self.calls.push(format!("dump:{:?}", op.get_opcode()));
        self.inside.push((self.labelbase, self.labelcount));
        Ok(())
    }
    fn append_build(&mut self, _bld: &OpTpl, secnum: i32) -> UnlaceResult<()> {
        self.calls.push(format!("build:{secnum}"));
        Ok(())
    }
    fn delay_slot(&mut self, _op: &OpTpl) -> UnlaceResult<()> {
        self.calls.push("delayslot".to_string());
        Ok(())
    }
    fn set_label(&mut self, _op: &OpTpl) -> UnlaceResult<()> {
        self.calls.push("setlabel".to_string());
        Ok(())
    }
    fn append_cross_build(&mut self, _bld: &OpTpl, secnum: i32) -> UnlaceResult<()> {
        self.calls.push(format!("crossbuild:{secnum}"));
        Ok(())
    }
}

#[test]
fn semantics_pcodebuilder_build_dispatch_and_labels() {
    let manager = test_manager();
    let mut ct = ConstructTpl::new();
    let mkin = |val: u64| {
        VarnodeTpl::new(
            ConstTpl::new_space(cspace(&manager)),
            ConstTpl::new_real(ConstType::Real, val),
            ConstTpl::new_real(ConstType::Real, 4),
        )
    };
    let mut bld = OpTpl::new(BUILD);
    bld.add_input(mkin(0));
    ct.add_op(bld);
    let mut ds = OpTpl::new(DELAY_SLOT);
    ds.add_input(mkin(1));
    ct.add_op(ds);
    let mut lab = OpTpl::new(LABELBUILD);
    lab.add_input(mkin(0));
    ct.add_op(lab);
    let mut cb = OpTpl::new(CROSSBUILD);
    cb.add_input(mkin(0));
    ct.add_op(cb);
    ct.add_op(copy_op(&manager));

    let mut builder = TestBuilder::new(5);
    builder.build(Some(&ct), 2).unwrap();
    assert_eq!(
        builder.calls,
        vec![
            "build:2".to_string(),
            "delayslot".to_string(),
            "setlabel".to_string(),
            "crossbuild:2".to_string(),
            "dump:CPUI_COPY".to_string(),
        ]
    );
    // during the build: labelbase moved to old labelcount and labelcount
    // grew by the template's label count (1)
    assert_eq!(builder.inside, vec![(5, 6)]);
    // labelbase restored afterwards
    assert_eq!(builder.get_label_base(), 5);
    assert_eq!(builder.get_label_count(), 6);

    // null template is UnimplError
    let err = builder.build(None, 0).unwrap_err();
    assert!(matches!(err, UnlaceError::Unimpl { .. }));
}
