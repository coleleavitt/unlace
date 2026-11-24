//! Tests moved out of `heritage` because they read higher-band modules. They live in the
//! driver so the middle band can become its own crate (unlace-middle).

#![allow(unused_imports, dead_code)]

use crate::context::ArchContext;
use crate::context::BlockId;
use crate::coreoptions::LEVEL_FULL;
use crate::coreoptions::LEVEL_GLOBAL;
use crate::coreoptions::LEVEL_OFF;
use crate::funcdata::Funcdata;
use crate::heritage::*;
use crate::overrides::Override;
use crate::restartlog::RestartLog;
use crate::restartlog::UnlaceRestartReason;
use crate::varnode::varnode_flags;
use std::collections::BTreeMap;
use std::rc::Rc;
use unlace_base::address::Address;
use unlace_base::error::UnlaceResult;
use unlace_base::space::AddrSpace;
use unlace_base::space::AddrSpaceManager;
use unlace_base::space::ConstantSpace;
use unlace_base::space::IopSpace;
use unlace_base::space::JoinSpace;
use unlace_base::space::UniqueSpace;
use unlace_base::space::VarnodeStorage;
use unlace_base::space::addrspace_flags;
use unlace_base::space::spacetype;
use unlace_base::types::int4;
use unlace_base::types::uint4;
use unlace_base::types::uintb;
use unlace_num::opcodes::OpCode as TOpCode;

fn build_manager() -> AddrSpaceManager {
    let mut m = AddrSpaceManager::new();
    m.insert_space(Rc::new(ConstantSpace::new())).unwrap();
    m.insert_space(Rc::new(UniqueSpace::new(1, 0, false)))
        .unwrap();
    m.insert_space(Rc::new(AddrSpace::new(
        spacetype::IPTR_PROCESSOR,
        "ram",
        false,
        8,
        1,
        2,
        addrspace_flags::hasphysical,
        1,
        1,
    )))
    .unwrap();
    m
}

fn build_fd() -> Funcdata {
    let manage = build_manager();
    let glb = Rc::new(ArchContext::new(manage));
    let ram = Rc::clone(glb.manage().get_space_by_name("ram").unwrap());
    let addr = Address::new(ram, 0x1000);
    Funcdata::new("func", "func", glb, addr, 0x10000000, 0x40).unwrap()
}

fn ram(fd: &Funcdata) -> Rc<AddrSpace> {
    Rc::clone(fd.get_arch().manage().get_space_by_name("ram").unwrap())
}

fn raddr(fd: &Funcdata, off: u64) -> Address {
    Address::new(ram(fd), off)
}

/// Build a CFG of `n` basic blocks (indices 0..n in creation order) inside
/// the function's `bblocks` graph, wire `edges`, set reverse-post-order
/// indices to creation order, and run the forward-dominator pass.  Returns
/// the block ids (index i is `blocks[i]`).
///
/// The blocks are created in DFS/reverse-post order (the C++ `buildADT`
/// precondition); for the small acyclic/loop CFGs below, creation order IS
/// a valid reverse-post order with block 0 the start.
fn build_cfg(fd: &mut Funcdata, n: usize, edges: &[(usize, usize)]) -> Vec<BlockId> {
    let root = fd.bblocks_ref().root.expect("bblocks root");
    let g = fd.bblocks_mut();
    let mut blocks = Vec::with_capacity(n);
    for _ in 0..n {
        blocks.push(g.new_block_basic(root));
    }
    for (i, &id) in blocks.iter().enumerate() {
        g.block_mut(id).set_index(i as int4);
    }
    for &(a, b) in edges {
        g.add_edge(blocks[a], blocks[b]);
    }
    g.calc_forward_dominator(root, &[blocks[0]]);
    blocks
}

fn stack_fixture() -> (Funcdata, Rc<AddrSpace>) {
    let mut manager = build_manager();
    let ram = manager.get_space_by_name("ram").unwrap().clone();
    let stack = Rc::new(unlace_base::space::SpacebaseSpace::new(
        "stack", 3, 4, &ram, 0, true, false,
    ));
    manager.insert_space(stack.clone()).unwrap();
    manager
        .insert_space(Rc::new(unlace_base::space::IopSpace::new(4)))
        .unwrap();
    let arch = Rc::new(ArchContext::new(manager));
    let entry = Address::new(ram, 0x1000);
    let fd = Funcdata::new("func", "func", arch, entry, 0x10000000, 0x40).unwrap();
    (fd, stack)
}

fn overflowing_input_fixture() -> (Funcdata, Address) {
    let (mut fd, stack) = stack_fixture();
    let existing = fd.new_varnode(4, &Address::new(stack.clone(), 0), None);
    fd.set_input_varnode(existing).unwrap();
    (fd, Address::new(stack, 0xffff_fffa))
}

fn append_overflowing_read(fd: &mut Funcdata, block: BlockId, addr: &Address) {
    append_read(fd, block, addr, 10);
}

fn append_read(fd: &mut Funcdata, block: BlockId, addr: &Address, size: int4) {
    let op = fd.new_op(1, fd.get_address().clone());
    fd.op_set_opcode_code(op, unlace_num::opcodes::OpCode::CPUI_COPY);
    let input = fd.new_varnode(size, addr, None);
    fd.vbank_mut().get_mut(input).unwrap().set_active_heritage();
    fd.op_set_input(op, input, 0).unwrap();
    fd.new_unique_out(size, op).unwrap();
    fd.op_insert_end(op, block);
}

#[test]
fn complete_register_partition_extracts_call_slots_in_both_byte_orders() {
    use unlace_num::opcodes::OpCode;
    for big in [false, true] {
        let mut manager = build_manager();
        let register = Rc::new(AddrSpace::new(
            spacetype::IPTR_PROCESSOR,
            "register",
            big,
            4,
            1,
            3,
            addrspace_flags::hasphysical,
            1,
            1,
        ));
        manager.insert_space(register.clone()).unwrap();
        let arch = Rc::new(ArchContext::new(manager));
        let entry = Address::new(
            arch.manage().get_space_by_name("ram").unwrap().clone(),
            0x1000,
        );
        let mut fd = Funcdata::new("func", "func", arch, entry.clone(), 0x10000000, 0x40).unwrap();
        let block = build_cfg(&mut fd, 1, &[])[0];
        let call = fd.new_op(1, entry.clone());
        fd.op_set_opcode(call, typeop_skeleton(OpCode::CPUI_CALL));
        let target = fd.new_constant(8, 0x2000);
        fd.op_set_input(call, target, 0).unwrap();
        fd.op_insert_end(call, block);
        let mut model = crate::fspec::ProtoModel::new(fd.get_arch().manage());
        model.build_param_list("standard").unwrap();
        for (group, offset) in [0x24, 0x20].into_iter().enumerate() {
            let entry = crate::fspec::ParamEntry::seed(
                group as int4,
                crate::dtype::type_class::TYPECLASS_GENERAL,
                register.clone(),
                offset,
                4,
                1,
                0,
                0,
                true,
                false,
                model.input().get_entry(),
                fd.get_arch().manage(),
            )
            .unwrap();
            model.input_mut().push_entry(entry);
        }
        model.input_mut().finish_decode();
        let mut specs = crate::fspec::FuncCallSpecs::new(call, entry);
        specs.proto_mut().set_internal(
            Rc::new(model),
            Rc::new(crate::dtype::Datatype::new(
                0,
                crate::dtype::type_metatype::TYPE_VOID,
            )),
        );
        specs.init_active_input();
        let whole = Address::new(register.clone(), 0x20);
        for _ in 0..2 {
            Heritage::guard_call_input(
                &mut fd,
                &mut specs,
                &whole,
                &whole,
                8,
                crate::calloverlap::LEVEL_OFF,
            );
        }
        for (slot, offset) in [0x20, 0x24].into_iter().enumerate() {
            let piece = Address::new(register.clone(), offset);
            let input = fd
                .obank()
                .get(call)
                .unwrap()
                .get_in(slot as int4 + 1)
                .unwrap();
            let value = fd.vbank().get(input).unwrap();
            assert_eq!(value.get_addr(), &piece);
            assert_eq!(value.get_size(), 4);
            let subpiece = fd.obank().get(value.get_def().unwrap()).unwrap();
            assert_eq!(subpiece.code(), OpCode::CPUI_SUBPIECE);
            let amount = fd
                .vbank()
                .get(subpiece.get_in(1).unwrap())
                .unwrap()
                .get_addr()
                .get_offset();
            assert_eq!(
                amount,
                if big {
                    4 - slot as u64 * 4
                } else {
                    slot as u64 * 4
                }
            );
        }
        assert_eq!(fd.obank().get(call).unwrap().num_input(), 3);
    }
}

/// A 10-byte read at stack -6 of a 4-byte stack space runs past the top.
/// It is split into the 6 bytes below the top and the 4 from offset 0,
/// each an entry input (the one at 0 already existed); no heritaged
/// Varnode wraps or lies across the cover.
#[test]
fn heritage_splits_a_read_that_wraps_past_the_top_of_its_space() {
    use unlace_num::opcodes::OpCode;
    let (mut fd, addr) = overflowing_input_fixture();
    let block = build_cfg(&mut fd, 1, &[])[0];
    append_overflowing_read(&mut fd, block, &addr);
    let mut h = Heritage::new();
    h.build_info_list(&fd);
    h.build_adt(&fd);
    h.heritage(&mut fd, None).unwrap();

    let stack = addr.get_space().unwrap().clone();
    for vn in fd.vbank().loc_space_ids(&stack) {
        let v = fd.vbank().get(vn).unwrap();
        if v.is_write_mask() || (!v.is_written() && v.has_no_descend()) {
            continue;
        }
        let off = v.get_addr().get_offset();
        assert_eq!(
            crate::wrapsplit::wrap_cut(off, v.get_size(), stack.get_highest()),
            None
        );
        let (start, range) = h.globaldisjoint.find(v.get_addr()).expect("heritaged");
        assert!(
            off - start.get_offset() + v.get_size() as u64 <= range.size as u64,
            "{off:#x}+{} lies across the cover {:#x}+{}",
            v.get_size(),
            start.get_offset(),
            range.size
        );
    }
    let copy = *fd.bb_ops(block).last().unwrap();
    let whole = fd.obank().get(copy).unwrap().get_in(0).unwrap();
    let piece = fd.vbank().get(whole).unwrap().get_def().unwrap();
    assert_eq!(fd.obank().get(piece).unwrap().code(), OpCode::CPUI_PIECE);
    let parts: Vec<_> = (0..2)
        .map(|slot| {
            let vn = fd.obank().get(piece).unwrap().get_in(slot).unwrap();
            let v = fd.vbank().get(vn).unwrap();
            (v.get_addr().get_offset(), v.get_size(), v.is_input())
        })
        .collect();
    assert!(parts.contains(&(0xffff_fffa, 6, true)), "{parts:x?}");
    assert!(parts.contains(&(0, 4, true)), "{parts:x?}");
}

/// A read at stack 0 whose entry input would straddle a write-masked
/// input piece at stack 1..5 that no heritage range holds.
#[test]
fn heritage_action_returns_error_and_can_process_the_next_function() {
    use crate::action::ActionContext;
    let (mut fd, stack) = stack_fixture();
    let piece = fd.new_varnode(4, &Address::new(stack.clone(), 1), None);
    let piece = fd.set_input_varnode(piece).unwrap();
    fd.vbank_mut().get_mut(piece).unwrap().set_write_mask();
    let block = build_cfg(&mut fd, 1, &[])[0];
    append_read(&mut fd, block, &Address::new(stack, 0), 4);
    let mut action = crate::coreaction_early::ActionHeritage::boxed("base");
    let mut ctx = ActionContext::new();
    assert_eq!(action.perform(&mut fd, &mut ctx), -1);
    assert!(
        ctx.error
            .unwrap()
            .to_string()
            .contains("requested input stack")
    );
    assert_eq!(fd.get_heritage_pass(), 0);
    let mut good = build_fd();
    build_cfg(&mut good, 1, &[]);
    action.reset(&mut good);
    let mut next_ctx = ActionContext::new();
    assert_eq!(action.perform(&mut good, &mut next_ctx), 0);
    assert!(next_ctx.error.is_none());
    assert_eq!(good.get_heritage_pass(), 1);
}

/// END-TO-END SSA: the full driver (collect → guard → calcMultiequals →
/// MULTIEQUAL construction → rename) builds real SSA on a hand-built diamond.
///
/// A single-manager `Funcdata` (glb's manager *is* the `ram` space the
/// Varnodes use — the dual-manager boundary the corpus B3 gate documents is
/// absent here), so heritage reaches the Varnodes.  CFG:
/// ```text
///   0 (entry) ─┬─▶ 1 ─┐
///              └─▶ 2 ─┴─▶ 3
/// ```
/// Blocks 1 and 2 each WRITE `ram[0x100]` (a 1-byte COPY of a constant);
/// block 3 READS `ram[0x100]`.  Post-heritage we must see exactly one
/// MULTIEQUAL at block 3, its two inputs the two writes, and the block-3
/// read linked to the phi's output.
#[test]
fn heritage_builds_real_ssa_on_a_diamond() {
    use unlace_base::space::{ConstantSpace, UniqueSpace, addrspace_flags};
    use unlace_num::opcodes::OpCode;
    // A manager whose `ram` space has heritage delay 0 (so the first pass
    // processes it — registers in a real cspec have delay 0; the shared
    // `build_manager` uses delay 1, which would skip pass 0).
    let mut m = AddrSpaceManager::new();
    m.insert_space(Rc::new(ConstantSpace::new())).unwrap();
    m.insert_space(Rc::new(UniqueSpace::new(1, 0, false)))
        .unwrap();
    m.insert_space(Rc::new(AddrSpace::new(
        spacetype::IPTR_PROCESSOR,
        "ram",
        false,
        8,
        1,
        2,
        addrspace_flags::hasphysical,
        0, // delay 0 -> heritaged on pass 0
        0,
    )))
    .unwrap();
    let glb = Rc::new(ArchContext::new(m));
    let ram = Rc::clone(glb.manage().get_space_by_name("ram").unwrap());
    let entry = Address::new(Rc::clone(&ram), 0x2000);
    let mut fd = Funcdata::new("func", "func", glb, entry, 0x10000000, 0x40).unwrap();
    let b = build_cfg(&mut fd, 4, &[(0, 1), (0, 2), (1, 3), (2, 3)]);
    // Give each block a 1-byte code range so seqnums are distinct/ordered.
    for (i, &bl) in b.iter().enumerate() {
        let a = raddr(&fd, 0x2000 + i as u64);
        fd.set_basic_block_range(bl, &a, &a);
    }
    let loc = raddr(&fd, 0x100); // the heritaged ram location
    let copy = |fl: u32| crate::context::TypeOp::new(OpCode::CPUI_COPY, fl, "copy");

    // Block 1: ram[0x100] = #0xaa  (a free write at 0x2001).
    let w1 = fd.new_op(1, raddr(&fd, 0x2001));
    fd.op_set_opcode(w1, copy(0));
    let c1 = fd.new_constant(1, 0xaa);
    fd.op_set_input(w1, c1, 0).unwrap();
    let w1out = fd.new_varnode_out(1, &loc, w1).unwrap();
    fd.op_insert_end(w1, b[1]);
    // Block 2: ram[0x100] = #0xbb  (free write at 0x2002).
    let w2 = fd.new_op(1, raddr(&fd, 0x2002));
    fd.op_set_opcode(w2, copy(0));
    let c2 = fd.new_constant(1, 0xbb);
    fd.op_set_input(w2, c2, 0).unwrap();
    let _w2out = fd.new_varnode_out(1, &loc, w2).unwrap();
    fd.op_insert_end(w2, b[2]);
    // Block 3: ram[0x200] = ram[0x100]  (free read of the heritaged loc).
    let r3 = fd.new_op(1, raddr(&fd, 0x2003));
    fd.op_set_opcode(r3, copy(0));
    let rin = fd.new_varnode(1, &loc, None);
    fd.op_set_input(r3, rin, 0).unwrap();
    let _r3out = fd.new_varnode_out(1, &raddr(&fd, 0x200), r3).unwrap();
    fd.op_insert_end(r3, b[3]);

    // Pre-heritage: the block-3 read input is free.
    assert!(
        fd.vbank().get(rin).unwrap().is_free(),
        "pre-heritage read is free"
    );
    let before_w1out_def = fd.vbank().get(w1out).unwrap().is_written();
    assert!(before_w1out_def, "the writes are defined");

    // Run the full driver.
    let first = fd.vbank_mut().reserve_create_index(0);
    let mut h = Heritage::new();
    h.build_info_list(&fd);
    h.heritage(&mut fd, None).unwrap();

    // Exactly one MULTIEQUAL, at block 3 (the join).
    let phis: Vec<crate::context::OpId> = fd
        .obank()
        .iter_alive()
        .filter(|&op| fd.obank().get(op).unwrap().code() == OpCode::CPUI_MULTIEQUAL)
        .collect();
    assert_eq!(phis.len(), 1, "exactly one phi placed");
    let phi = phis[0];
    let phi_block = fd.obank().get(phi).unwrap().get_parent().unwrap();
    assert_eq!(
        fd.bblocks_ref().block(phi_block).get_index(),
        3,
        "phi at the join block 3"
    );

    // The phi has 2 inputs (block 3 has two preds) and an output at `loc`.
    assert_eq!(
        fd.obank().get(phi).unwrap().num_input(),
        2,
        "phi has 2 in-edges"
    );
    let phi_out = fd.obank().get(phi).unwrap().get_out().unwrap();
    assert_eq!(
        fd.vbank().get(phi_out).unwrap().get_addr(),
        &loc,
        "phi output at the loc"
    );

    // The block-3 read is now linked to the phi output (rename replaced the
    // free read with the reaching definition — the phi).
    let r3in = fd.obank().get(r3).unwrap().get_in(0).unwrap();
    assert_eq!(
        r3in, phi_out,
        "block-3 read linked to the phi output (real SSA)"
    );
    assert!(
        !fd.vbank().get(r3in).unwrap().is_free(),
        "the linked read is no longer free"
    );

    // The phi's two inputs are the two write Varnodes (def-use of the writes).
    let in0 = fd.obank().get(phi).unwrap().get_in(0).unwrap();
    let in1 = fd.obank().get(phi).unwrap().get_in(1).unwrap();
    let in_defs: Vec<crate::context::OpId> = [in0, in1]
        .iter()
        .filter_map(|&v| fd.vbank().get(v).unwrap().get_def())
        .collect();
    assert!(
        in_defs.contains(&w1) && in_defs.contains(&w2),
        "phi merges the two writes"
    );

    // Renaming filled the slots directly, and the two placeholders upstream
    // builds kept their creation indices: the next Varnode is numbered
    // after them.
    assert_eq!(fd.vbank().get(phi_out).unwrap().get_create_index(), first);
    assert_eq!(fd.vbank_mut().reserve_create_index(0), first + 3);
    assert!(
        !crate::renamereads::pending(&fd, phi),
        "phi no longer marked"
    );
}

#[test]
fn a_slot_renaming_never_reaches_gets_upstreams_placeholder() {
    use unlace_num::opcodes::OpCode;
    let mut fd = build_fd();
    let b = build_cfg(&mut fd, 3, &[(0, 1), (0, 2), (1, 2)]);
    let loc = raddr(&fd, 0x100);
    let mut pending = Vec::new();

    let phi = fd.new_op(2, raddr(&fd, 0x1002));
    let phi_out = fd.new_varnode_out(1, &loc, phi).unwrap();
    fd.op_set_opcode(phi, typeop_skeleton(OpCode::CPUI_MULTIEQUAL));
    crate::renamereads::mark(&mut fd, phi, 2, &mut pending);
    fd.op_insert_begin(phi, b[2]);
    let first = pending[0].1;
    let reached = fd.new_varnode(1, &loc, None);
    fd.op_set_input(phi, reached, 0).unwrap();

    let copy = fd.new_op(1, raddr(&fd, 0x1002));
    let copy_out = fd.new_varnode_out(1, &raddr(&fd, 0x200), copy).unwrap();
    fd.op_set_opcode_code(copy, OpCode::CPUI_COPY);
    crate::renamereads::mark(&mut fd, copy, 1, &mut pending);
    fd.op_insert_end(copy, b[2]);
    let copy_first = pending[1].1;
    assert_eq!(
        copy_first,
        first + 4,
        "the slots' indices are taken when they are left empty"
    );

    crate::renamereads::finish(&mut fd, &mut pending);
    assert!(pending.is_empty());
    assert_eq!(fd.obank().get(phi).unwrap().get_in(0), Some(reached));
    let slot = fd
        .obank()
        .get(phi)
        .unwrap()
        .get_in(1)
        .expect("unreached slot filled");
    let v = fd.vbank().get(slot).unwrap();
    assert!(v.is_free() && !v.is_active_heritage());
    assert_eq!((v.get_addr(), v.get_size()), (&loc, 1));
    assert_eq!(v.get_create_index(), first + 1);
    let slot = fd
        .obank()
        .get(copy)
        .unwrap()
        .get_in(0)
        .expect("COPY input filled");
    let v = fd.vbank().get(slot).unwrap();
    assert!(
        v.is_free() && v.is_active_heritage(),
        "a guard read stays a heritage read"
    );
    assert_eq!((v.get_addr(), v.get_size()), (&raddr(&fd, 0x200), 1));
    assert_eq!(v.get_create_index(), copy_first);
    assert!(!crate::renamereads::pending(&fd, phi));
    assert!(!crate::renamereads::pending(&fd, copy));
    let _ = (phi_out, copy_out);
}

#[test]
fn the_guards_of_one_call_share_its_annotation() {
    use unlace_base::space::IopSpace;
    use unlace_num::opcodes::OpCode;
    let mut manager = build_manager();
    manager.insert_space(Rc::new(IopSpace::new(3))).unwrap();
    let glb = Rc::new(ArchContext::new(manager));
    let entry = Address::new(
        Rc::clone(glb.manage().get_space_by_name("ram").unwrap()),
        0x1000,
    );
    let mut fd = Funcdata::new("func", "func", glb, entry, 0x10000000, 0x40).unwrap();
    let b = build_cfg(&mut fd, 1, &[]);
    let call = fd.new_op(1, raddr(&fd, 0x1000));
    fd.op_set_opcode_code(call, OpCode::CPUI_CALL);
    fd.op_insert_end(call, b[0]);
    let (mut pending, mut iops) = (Vec::new(), Default::default());
    let renamereads = crate::renamereads::new_indirect;
    let (a1, a2) = (raddr(&fd, 0x100), raddr(&fd, 0x200));
    let g1 = renamereads(&mut fd, call, &a1, 4, 0, &mut pending, &mut iops);
    let g2 = renamereads(&mut fd, call, &a2, 8, 0, &mut pending, &mut iops);
    let index = |fd: &Funcdata, op: crate::context::OpId, slot: Option<int4>| {
        let o = fd.obank().get(op).unwrap();
        let vn = slot.map_or_else(|| o.get_out(), |s| o.get_in(s)).unwrap();
        fd.vbank().get(vn).unwrap().get_create_index()
    };
    let iop = fd.obank().get(g1).unwrap().get_in(1).unwrap();
    assert_eq!(fd.obank().get(g2).unwrap().get_in(1), Some(iop));
    assert_eq!(fd.vbank().get(iop).unwrap().descend_iter().count(), 2);
    assert_eq!(
        index(&fd, g2, None),
        index(&fd, g1, None) + 3,
        "a reuse keeps the numbering"
    );
    assert_eq!(index(&fd, g1, Some(1)), index(&fd, g1, None) + 1);
    crate::renamereads::finish(&mut fd, &mut pending);
    fd.op_destroy(g1);
    assert_eq!(fd.obank().get(g2).unwrap().get_in(1), Some(iop));
    assert_eq!(
        fd.vbank()
            .get(iop)
            .unwrap()
            .descend_iter()
            .collect::<Vec<_>>(),
        vec![g2]
    );
    let mut wave = Default::default();
    crate::action::add_wave_ops(&fd, &mut wave, &[g1], &[iop]);
    assert!(
        !wave.contains(&g2),
        "a removed guard's siblings are not its wave neighbours"
    );
}
