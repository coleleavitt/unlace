use super::*;
use std::rc::Rc;

use unlace_base::address::Address;
use unlace_base::space::{
    AddrSpace, AddrSpaceManager, ConstantSpace, FspecSpace, IopSpace, UniqueSpace, addrspace_flags,
    spacetype,
};

use crate::context::{ArchContext, TypeOp};
use crate::dtype::{Datatype, TypeFactory, type_metatype};
use crate::varnode::DefOpInfo;

// ---- scaffolding (mirrors funcdata_varnode.rs test scaffolding) --------

fn build_manager() -> AddrSpaceManager {
    build_manager_endian(false)
}

fn build_manager_endian(big_endian: bool) -> AddrSpaceManager {
    let mut m = AddrSpaceManager::new();
    m.insert_space(Rc::new(ConstantSpace::new())).unwrap();
    m.insert_space(Rc::new(UniqueSpace::new(1, 0, false)))
        .unwrap();
    m.insert_space(Rc::new(IopSpace::new(2))).unwrap();
    m.insert_space(Rc::new(FspecSpace::new(3))).unwrap();
    m.insert_space(Rc::new(AddrSpace::new(
        spacetype::IPTR_PROCESSOR,
        "ram",
        big_endian,
        8,
        1,
        4,
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

fn build_fd_endian(big_endian: bool) -> Funcdata {
    let glb = Rc::new(ArchContext::new(build_manager_endian(big_endian)));
    let ram = Rc::clone(glb.manage().get_space_by_name("ram").unwrap());
    Funcdata::new(
        "func",
        "func",
        glb,
        Address::new(ram, 0x1000),
        0x10000000,
        0x40,
    )
    .unwrap()
}

fn ram(fd: &Funcdata) -> Rc<AddrSpace> {
    Rc::clone(fd.get_arch().manage().get_space_by_name("ram").unwrap())
}

fn unk(size: int4) -> Rc<Datatype> {
    Rc::new(Datatype::new(size, type_metatype::TYPE_UNKNOWN))
}

fn no_replace()
-> impl FnMut(&mut crate::varnode::VarnodeBank, VarnodeId, VarnodeId) -> UnlaceResult<()> {
    |_: &mut crate::varnode::VarnodeBank, _: VarnodeId, _: VarnodeId| -> UnlaceResult<()> { Ok(()) }
}

/// Create an op with a given opcode at a (fresh) program address.
fn mk_op(fd: &mut Funcdata, off: u64, ninput: int4, opc: OpCode) -> OpId {
    let r = ram(fd);
    let pc = Address::new(r, off);
    let op = fd.obank_mut().create_at(ninput, pc);
    fd.obank_mut()
        .change_opcode(op, TypeOp::new(opc, 0, format!("{opc:?}")));
    op
}

/// A register varnode at a ram address (free / "free"-like until wired).
fn mk_reg(fd: &mut Funcdata, off: u64, size: int4) -> VarnodeId {
    let r = ram(fd);
    fd.new_varnode(size, &Address::new(r, off), Some(unk(size)))
}

/// A register varnode promoted to a function input (so it isn't \e free, the
/// abort condition in `setReplacement`).
fn mk_input(fd: &mut Funcdata, off: u64, size: int4) -> VarnodeId {
    let vn = mk_reg(fd, off, size);
    fd.vbank_mut().set_input(vn, &mut no_replace()).unwrap()
}

/// Wire `vn` as input `slot` of `op` (descend list + op input).
fn wire_in(fd: &mut Funcdata, op: OpId, vn: VarnodeId, slot: int4) {
    fd.vbank_mut().add_descend(vn, op).unwrap();
    fd.obank_mut()
        .get_mut(op)
        .unwrap()
        .set_input(Some(vn), slot);
}

/// Make `vn` the output of `defop` (promote to written).
fn wire_out(fd: &mut Funcdata, defop: OpId, vn: VarnodeId) -> VarnodeId {
    let seq = fd.obank().get(defop).unwrap().get_seq_num().clone();
    let info = DefOpInfo {
        id: defop,
        seqnum: seq,
    };
    let vn = fd.vbank_mut().set_def(vn, info, &mut no_replace()).unwrap();
    fd.obank_mut().get_mut(defop).unwrap().set_output(Some(vn));
    vn
}

// ---- constructor / flowsize (subflow.cc:1372-1404) ---------------------

#[test]
fn subvariable_replacements_preserve_byte_sources_without_inventing_bit_homes() {
    for big_endian in [false, true] {
        for mask in [0xffff_0000, 0xfe] {
            let mut fd = build_fd_endian(big_endian);
            let home = mk_input(&mut fd, 0x80, 8);
            let root = fd.new_unique(8, Some(unk(8)));
            let copy = mk_op(&mut fd, 0x1000, 1, OpCode::CPUI_COPY);
            wire_in(&mut fd, copy, home, 0);
            let root = wire_out(&mut fd, copy, root);
            fd.unlace_inherit_storage(root, home);
            let mut subflow =
                SubvariableFlow::new(&mut fd, root, mask, true, false, false).unwrap();
            let rvn = subflow.varmap[&root];
            let replacement = subflow.get_replace_varnode(&mut fd, rvn).unwrap();
            let sources = fd.unlace_storage_sources(replacement);
            if mask == 0xfe {
                assert!(sources.is_empty());
            } else {
                assert_eq!(sources.len(), 1);
                assert_eq!(sources[0].size, 2);
                assert_eq!(
                    sources[0].address.get_offset(),
                    if big_endian { 0x84 } else { 0x82 }
                );
            }
        }
    }
}

#[test]
fn subvariable_accepts_shifts_at_the_mask_boundary() {
    for (code, offset, mask) in [
        (OpCode::CPUI_SUBPIECE, 7, 0xff),
        (OpCode::CPUI_INT_LEFT, 63, 1u64 << 63),
        (OpCode::CPUI_INT_RIGHT, 63, 1),
        (OpCode::CPUI_INT_SRIGHT, 63, 1),
    ] {
        let mut fd = build_fd();
        let seed = mk_input(&mut fd, 0x20, 8);
        let copy = mk_op(&mut fd, 0xff0, 1, OpCode::CPUI_COPY);
        wire_in(&mut fd, copy, seed, 0);
        let input = mk_reg(&mut fd, 0x40, 8);
        let input = wire_out(&mut fd, copy, input);
        let amount = fd.new_constant(8, offset);
        let op = mk_op(&mut fd, 0x1000, 2, code);
        wire_in(&mut fd, op, input, 0);
        wire_in(&mut fd, op, amount, 1);
        let output = mk_reg(
            &mut fd,
            0x80,
            if code == OpCode::CPUI_SUBPIECE { 1 } else { 8 },
        );
        let output = wire_out(&mut fd, op, output);
        let mut flow = SubvariableFlow::new(&mut fd, output, mask, true, false, false).unwrap();
        let root = flow.varmap[&output];
        assert!(flow.trace_backward(&mut fd, root).unwrap(), "{code:?}");
    }
}

#[test]
fn subvariable_rejects_oversized_subpiece_offsets_before_scaling() {
    for offset in [8, 9, 0x1000_0000, 1u64 << 32, u64::MAX] {
        let mut fd = build_fd();
        let input = mk_input(&mut fd, 0x40, 16);
        let op = mk_op(&mut fd, 0x1000, 2, OpCode::CPUI_SUBPIECE);
        let amount = fd.new_constant(8, offset);
        wire_in(&mut fd, op, input, 0);
        wire_in(&mut fd, op, amount, 1);
        let output = mk_reg(&mut fd, 0x80, 1);
        let output = wire_out(&mut fd, op, output);
        let mut flow = SubvariableFlow::new(&mut fd, output, 0xff, true, false, false).unwrap();
        assert!(flow.valid);
        let root = flow.varmap[&output];
        assert!(
            !flow.trace_backward(&mut fd, root).unwrap(),
            "offset {offset:#x}"
        );
    }
}

#[test]
fn subvariable_rejects_oversized_bit_shifts_in_both_directions() {
    for code in [
        OpCode::CPUI_INT_LEFT,
        OpCode::CPUI_INT_RIGHT,
        OpCode::CPUI_INT_SRIGHT,
    ] {
        for offset in [64, 65, 0x8000_0000, 1u64 << 32, u64::MAX] {
            for forward in [false, true] {
                let mut fd = build_fd();
                let input = mk_input(&mut fd, 0x40, 8);
                let amount = fd.new_constant(8, offset);
                let op = mk_op(&mut fd, 0x1000, 2, code);
                wire_in(&mut fd, op, input, 0);
                wire_in(&mut fd, op, amount, 1);
                let output = mk_reg(&mut fd, 0x80, 8);
                let output = wire_out(&mut fd, op, output);
                let vn = if forward { input } else { output };
                let mut flow = SubvariableFlow::new(&mut fd, vn, 0xff, true, false, false).unwrap();
                assert!(flow.valid);
                let root = flow.varmap[&vn];
                let result = if forward {
                    flow.trace_forward(&mut fd, root)
                } else {
                    flow.trace_backward(&mut fd, root)
                };
                assert!(!result.unwrap(), "{code:?} {offset:#x}, forward={forward}");
            }
        }
    }
}

#[test]
fn subvariable_piece_rejects_a_high_half_beyond_mask_precision() {
    for low_size in [8, 9, 16] {
        let mut fd = build_fd();
        let high = mk_input(&mut fd, 0x40, 4);
        let low = mk_input(&mut fd, 0x60, low_size);
        let op = mk_op(&mut fd, 0x1000, 2, OpCode::CPUI_PIECE);
        wire_in(&mut fd, op, high, 0);
        wire_in(&mut fd, op, low, 1);
        let output = mk_reg(&mut fd, 0x80, low_size + 4);
        wire_out(&mut fd, op, output);
        let mut flow = SubvariableFlow::new(&mut fd, high, 0xff, true, false, false).unwrap();
        let root = flow.varmap[&high];
        assert!(
            !flow.trace_forward(&mut fd, root).unwrap(),
            "low size {low_size}"
        );
    }
}

#[test]
fn subvariable_refuses_masks_that_would_be_shifted_out_of_precision() {
    let mut fd = build_fd();
    let input = mk_input(&mut fd, 0x40, 16);
    let amount = fd.new_constant(4, 1);
    let op = mk_op(&mut fd, 0x1000, 2, OpCode::CPUI_SUBPIECE);
    wire_in(&mut fd, op, input, 0);
    wire_in(&mut fd, op, amount, 1);
    let output = mk_reg(&mut fd, 0x80, 8);
    let output = wire_out(&mut fd, op, output);
    let mut flow = SubvariableFlow::new(&mut fd, output, 1u64 << 63, true, false, false).unwrap();
    let root = flow.varmap[&output];
    assert!(!flow.trace_backward(&mut fd, root).unwrap());
    let zero_mask = flow.set_replacement(&mut fd, input, 0, true);
    assert!(zero_mask.0.is_none());
}

#[test]
fn subvariable_trigger_rules_reject_oversized_offsets() {
    for code in [OpCode::CPUI_SUBPIECE, OpCode::CPUI_INT_RIGHT] {
        for offset in [64, 65, 0x1000_0000, 1u64 << 32, u64::MAX] {
            let mut fd = build_fd();
            let input = mk_input(&mut fd, 0x40, 1);
            let amount = fd.new_constant(8, offset);
            let op = mk_op(&mut fd, 0x1000, 2, code);
            wire_in(&mut fd, op, input, 0);
            wire_in(&mut fd, op, amount, 1);
            let output = mk_reg(&mut fd, 0x80, 1);
            wire_out(&mut fd, op, output);
            let count = if code == OpCode::CPUI_SUBPIECE {
                RuleSubvarSubpiece::new("base").apply_op(op, &mut fd)
            } else {
                RuleSubvarShift::new("base").apply_op(op, &mut fd)
            };
            assert_eq!(count, 0, "{code:?} {offset:#x}");
            assert_eq!(fd.obank().get(op).unwrap().code(), code);
        }
    }
}

#[test]
fn ctor_flowsize_from_mask_width() {
    let mut fd = build_fd();
    let root = mk_reg(&mut fd, 0x40, 8);
    // 1 bit -> 1 byte
    let sf = SubvariableFlow::new(&mut fd, root, 0x1, false, false, false).unwrap();
    assert!(sf.valid);
    assert_eq!(sf.flowsize, 1);
    assert_eq!(sf.bitsize, 1);
    // byte mask 0xff -> 1 byte, 8 bits
    let sf = SubvariableFlow::new(&mut fd, root, 0xff, false, false, false).unwrap();
    assert_eq!(sf.flowsize, 1);
    assert_eq!(sf.bitsize, 8);
    // 0xffff -> 2 bytes
    let sf = SubvariableFlow::new(&mut fd, root, 0xffff, false, false, false).unwrap();
    assert_eq!(sf.flowsize, 2);
    // 0xffffff -> 3 bytes
    let sf = SubvariableFlow::new(&mut fd, root, 0xff_ffff, false, false, false).unwrap();
    assert_eq!(sf.flowsize, 3);
    // 0xffffffff -> 4 bytes
    let sf = SubvariableFlow::new(&mut fd, root, 0xffff_ffff, false, false, false).unwrap();
    assert_eq!(sf.flowsize, 4);
}

#[test]
fn ctor_invalid_masks_yield_invalid_engine() {
    let mut fd = build_fd();
    let root = mk_reg(&mut fd, 0x40, 8);
    // mask == 0 -> invalid (the C++ `fd=0` sentinel)
    let sf = SubvariableFlow::new(&mut fd, root, 0x0, false, false, false).unwrap();
    assert!(!sf.valid);
    // 8-byte logical value, big=false -> invalid
    let sf = SubvariableFlow::new(&mut fd, root, u64::MAX, false, false, false).unwrap();
    assert!(!sf.valid);
    // 8-byte logical value, big=true -> valid, flowsize 8
    let sf = SubvariableFlow::new(&mut fd, root, u64::MAX, false, false, true).unwrap();
    assert!(sf.valid);
    assert_eq!(sf.flowsize, 8);
}

#[test]
fn invalid_engine_do_trace_is_false() {
    let mut fd = build_fd();
    let root = mk_reg(&mut fd, 0x40, 8);
    let mut sf = SubvariableFlow::new(&mut fd, root, 0x0, false, false, false).unwrap();
    // Invalid engine: doTrace returns false (pullcount==0 / not valid).
    assert!(!sf.do_trace(&mut fd).unwrap());
}

// ---- doesOrSet / doesAndClear (subflow.cc:26-53) -----------------------

#[test]
fn does_or_set_detects_full_cover() {
    let mut fd = build_fd();
    let a = mk_reg(&mut fd, 0x40, 4);
    let c = fd.new_constant(4, 0xff); // sets low byte
    let orop = mk_op(&mut fd, 0x100, 2, OpCode::CPUI_INT_OR);
    wire_in(&mut fd, orop, a, 0);
    wire_in(&mut fd, orop, c, 1);
    // mask 0xff fully covered by the OR constant -> returns slot 1
    assert_eq!(SubvariableFlow::does_or_set(&fd, orop, 0xff), 1);
    // mask 0x1ff not fully covered -> -1
    assert_eq!(SubvariableFlow::does_or_set(&fd, orop, 0x1ff), -1);
}

#[test]
fn does_and_clear_detects_full_clear() {
    let mut fd = build_fd();
    let a = mk_reg(&mut fd, 0x40, 4);
    let c = fd.new_constant(4, 0xffff_ff00); // clears low byte
    let andop = mk_op(&mut fd, 0x100, 2, OpCode::CPUI_INT_AND);
    wire_in(&mut fd, andop, a, 0);
    wire_in(&mut fd, andop, c, 1);
    // mask 0xff fully cleared by the AND constant -> slot 1
    assert_eq!(SubvariableFlow::does_and_clear(&fd, andop, 0xff), 1);
    // mask 0x100 not cleared -> -1
    assert_eq!(SubvariableFlow::does_and_clear(&fd, andop, 0x100), -1);
}

// ---- forward SUBPIECE terminal: sub-register pull (subflow.cc:528-546) --

#[test]
fn forward_subpiece_low_byte_is_terminal_copy() {
    // root: 4-byte reg; SUBPIECE(root, 0) -> 1-byte out.  The low-byte mask
    // flows to a SUBPIECE whose out size == flowsize and newmask&1 -> a
    // copy_patch terminal (pullcount bumped, doTrace succeeds).
    let mut fd = build_fd();
    let root = mk_input(&mut fd, 0x40, 4);
    fd.vbank_mut().get_mut(root).unwrap().set_consume(0xff); // only low byte consumed
    let outvn = mk_reg(&mut fd, 0x80, 1);
    let zero = fd.new_constant(4, 0);
    let sub = mk_op(&mut fd, 0x100, 2, OpCode::CPUI_SUBPIECE);
    wire_in(&mut fd, sub, root, 0);
    wire_in(&mut fd, sub, zero, 1);
    let outvn = wire_out(&mut fd, sub, outvn);
    let _ = outvn;

    // aggressive=true so set_replacement of the root doesn't bail on consume.
    let mut sf = SubvariableFlow::new(&mut fd, root, 0xff, true, false, false).unwrap();
    assert!(sf.valid);
    assert!(sf.do_trace(&mut fd).unwrap());
    // Exactly one terminal copy patch (the SUBPIECE pull).
    assert_eq!(sf.pullcount, 1);
    assert_eq!(sf.patchlist.len(), 1);
    assert_eq!(sf.patchlist[0].typ, PatchType::CopyPatch);
    assert_eq!(sf.patchlist[0].patch_op, sub);
    // Marks cleared after doTrace.
    assert!(!fd.vbank().get(root).unwrap().is_mark());
}

#[test]
fn forward_subpiece_no_terminal_fails_trace() {
    // SUBPIECE that does not terminate (out size != flowsize, mask passes
    // through as a COPY link) leaves pullcount==0 -> doTrace returns false.
    let mut fd = build_fd();
    let root = mk_input(&mut fd, 0x40, 4);
    fd.vbank_mut().get_mut(root).unwrap().set_consume(0xffff);
    let outvn = mk_reg(&mut fd, 0x80, 2); // 2-byte out, flowsize would be 1
    let zero = fd.new_constant(4, 0);
    let sub = mk_op(&mut fd, 0x100, 2, OpCode::CPUI_SUBPIECE);
    wire_in(&mut fd, sub, root, 0);
    wire_in(&mut fd, sub, zero, 1);
    let _outvn = wire_out(&mut fd, sub, outvn);

    // logical value is the low byte (mask 0xff); SUBPIECE keeps 2 bytes so it
    // does not terminate here -> no terminal patch -> doTrace false.
    let mut sf = SubvariableFlow::new(&mut fd, root, 0xff, true, false, false).unwrap();
    assert!(!sf.do_trace(&mut fd).unwrap());
    assert_eq!(sf.pullcount, 0);
}

// ---- forward INT_AND mask-extract terminal (subflow.cc:411-424) --------

#[test]
fn forward_int_and_full_mask_is_terminal() {
    // root (4-byte) & 0xff -> out (1-byte, == flowsize).  The AND constant
    // equals the mask and outvn->getSize()==flowsize with mask&1 -> the
    // INT_AND terminal branch (subflow.cc:412-417) fires a copy_patch.
    let mut fd = build_fd();
    let root = mk_input(&mut fd, 0x40, 4);
    fd.vbank_mut().get_mut(root).unwrap().set_consume(0xff);
    let cst = fd.new_constant(4, 0xff);
    let outvn = mk_reg(&mut fd, 0x80, 1);
    let andop = mk_op(&mut fd, 0x100, 2, OpCode::CPUI_INT_AND);
    wire_in(&mut fd, andop, root, 0);
    wire_in(&mut fd, andop, cst, 1);
    let _outvn = wire_out(&mut fd, andop, outvn);

    let mut sf = SubvariableFlow::new(&mut fd, root, 0xff, true, false, false).unwrap();
    assert!(sf.do_trace(&mut fd).unwrap());
    assert_eq!(sf.pullcount, 1);
    assert_eq!(sf.patchlist.len(), 1);
    assert_eq!(sf.patchlist[0].typ, PatchType::CopyPatch);
}

// ---- backward trace: COPY def propagates the same mask -----------------

#[test]
fn backward_copy_then_forward_terminal() {
    // mid = COPY(src); SUBPIECE(mid,0) -> out(1 byte).  Tracing the low byte of
    // `mid` goes backward through the COPY (creating a COPY ReplaceOp shadowing
    // src) and forward through the SUBPIECE (terminal).  doTrace succeeds.
    let mut fd = build_fd();
    let src = mk_input(&mut fd, 0x40, 4);
    fd.vbank_mut().get_mut(src).unwrap().set_consume(0xff);
    // def op: mid = COPY(src)
    let copyop = mk_op(&mut fd, 0x100, 1, OpCode::CPUI_COPY);
    let mid = mk_reg(&mut fd, 0x80, 4);
    fd.vbank_mut().get_mut(mid).unwrap().set_consume(0xff);
    wire_in(&mut fd, copyop, src, 0);
    let mid = wire_out(&mut fd, copyop, mid);
    // forward use: out = SUBPIECE(mid, 0)
    let zero = fd.new_constant(4, 0);
    let sub = mk_op(&mut fd, 0x180, 2, OpCode::CPUI_SUBPIECE);
    let outvn = mk_reg(&mut fd, 0xc0, 1);
    wire_in(&mut fd, sub, mid, 0);
    wire_in(&mut fd, sub, zero, 1);
    let _outvn = wire_out(&mut fd, sub, outvn);

    let mut sf = SubvariableFlow::new(&mut fd, mid, 0xff, true, false, false).unwrap();
    assert!(sf.do_trace(&mut fd).unwrap());
    assert_eq!(sf.pullcount, 1);
    // A backward COPY ReplaceOp was created (shadowing the def COPY).
    assert!(
        sf.oplist
            .iter()
            .any(|r| r.opc == OpCode::CPUI_COPY && r.op == Some(copyop))
    );
}

// ---- rule heads: detection guards return 0 cleanly ---------------------

#[test]
fn rule_subvar_and_rejects_nonconstant() {
    // RuleSubvarAnd::applyOp on (a & b) with non-constant b returns 0.
    let mut fd = build_fd();
    let a = mk_reg(&mut fd, 0x40, 4);
    let b = mk_reg(&mut fd, 0x48, 4);
    let andop = mk_op(&mut fd, 0x100, 2, OpCode::CPUI_INT_AND);
    let outvn = mk_reg(&mut fd, 0x80, 4);
    wire_in(&mut fd, andop, a, 0);
    wire_in(&mut fd, andop, b, 1);
    let _outvn = wire_out(&mut fd, andop, outvn);
    let mut rule = RuleSubvarAnd::new("g");
    assert_eq!(rule.apply_op(andop, &mut fd), 0);
}

#[test]
fn rule_subvar_shift_requires_byte_input() {
    // RuleSubvarShift::applyOp on INT_RIGHT whose in0 is not 1 byte returns 0.
    let mut fd = build_fd();
    let a = mk_reg(&mut fd, 0x40, 4); // 4-byte, not 1
    let c = fd.new_constant(4, 1);
    let shr = mk_op(&mut fd, 0x100, 2, OpCode::CPUI_INT_RIGHT);
    let outvn = mk_reg(&mut fd, 0x80, 4);
    wire_in(&mut fd, shr, a, 0);
    wire_in(&mut fd, shr, c, 1);
    let _outvn = wire_out(&mut fd, shr, outvn);
    let mut rule = RuleSubvarShift::new("g");
    assert_eq!(rule.apply_op(shr, &mut fd), 0);
}

#[test]
fn rule_get_op_lists_match_cpp() {
    assert_eq!(
        RuleSubvarAnd::new("g").get_op_list(),
        vec![OpCode::CPUI_INT_AND]
    );
    assert_eq!(
        RuleSubvarSubpiece::new("g").get_op_list(),
        vec![OpCode::CPUI_SUBPIECE]
    );
    assert_eq!(
        RuleSubvarCompZero::new("g").get_op_list(),
        vec![OpCode::CPUI_INT_NOTEQUAL, OpCode::CPUI_INT_EQUAL]
    );
    assert_eq!(
        RuleSubvarShift::new("g").get_op_list(),
        vec![OpCode::CPUI_INT_RIGHT]
    );
    assert_eq!(
        RuleSubvarZext::new("g").get_op_list(),
        vec![OpCode::CPUI_INT_ZEXT]
    );
    assert_eq!(
        RuleSubvarSext::new("g").get_op_list(),
        vec![OpCode::CPUI_INT_SEXT]
    );
    // w8x-subflow-splits rules.
    assert_eq!(
        RuleSplitFlow::new("g").get_op_list(),
        vec![OpCode::CPUI_SUBPIECE]
    );
    assert_eq!(
        RuleSplitCopy::new("g").get_op_list(),
        vec![OpCode::CPUI_COPY]
    );
    assert_eq!(
        RuleSplitLoad::new("g").get_op_list(),
        vec![OpCode::CPUI_LOAD]
    );
    assert_eq!(
        RuleSplitStore::new("g").get_op_list(),
        vec![OpCode::CPUI_STORE]
    );
    assert_eq!(
        RuleDumptyHumpLate::new("g").get_op_list(),
        vec![OpCode::CPUI_SUBPIECE]
    );
    assert_eq!(
        RuleSubfloatConvert::new("g").get_op_list(),
        vec![OpCode::CPUI_FLOAT_FLOAT2FLOAT]
    );
}

#[test]
fn specs_lists_rules_in_definition_order() {
    let s = specs();
    assert_eq!(s.len(), 12);
    // Each ctor builds a rule whose getOpList matches the C++ definition order.
    let lists: Vec<Vec<OpCode>> = s.iter().map(|sp| (sp.ctor)().get_op_list()).collect();
    assert_eq!(lists[0], vec![OpCode::CPUI_INT_AND]); // subvar_and
    assert_eq!(lists[1], vec![OpCode::CPUI_SUBPIECE]); // subvar_subpiece
    assert_eq!(
        lists[2],
        vec![OpCode::CPUI_INT_NOTEQUAL, OpCode::CPUI_INT_EQUAL]
    ); // subvar_compzero
    assert_eq!(lists[3], vec![OpCode::CPUI_INT_RIGHT]); // subvar_shift
    assert_eq!(lists[4], vec![OpCode::CPUI_INT_ZEXT]); // subvar_zext
    assert_eq!(lists[5], vec![OpCode::CPUI_INT_SEXT]); // subvar_sext
    assert_eq!(lists[6], vec![OpCode::CPUI_SUBPIECE]); // splitflow
    assert_eq!(lists[7], vec![OpCode::CPUI_COPY]); // splitcopy
    assert_eq!(lists[8], vec![OpCode::CPUI_LOAD]); // splitload
    assert_eq!(lists[9], vec![OpCode::CPUI_STORE]); // splitstore
    assert_eq!(lists[10], vec![OpCode::CPUI_SUBPIECE]); // dumptyhumplate
    assert_eq!(lists[11], vec![OpCode::CPUI_FLOAT_FLOAT2FLOAT]); // subfloat_convert
}

#[test]
fn clone_rule_filters_by_group() {
    let rule = RuleSubvarAnd::new("mygroup");
    let yes = ActionGroupList::from_names(["mygroup"]);
    let no = ActionGroupList::from_names(["other"]);
    assert!(rule.clone_rule(&yes).is_some());
    assert!(rule.clone_rule(&no).is_none());
}

// ===== w8x-subflow-splits =================================================

fn mk_const(fd: &mut Funcdata, size: int4, val: u64) -> VarnodeId {
    fd.new_constant(size, val)
}

// ---- SplitFlow / RuleSplitFlow (subflow.cc:1754-2088) ------------------

#[test]
fn split_flow_lane_above_advances_piece() {
    // The C++ `rvn+1` pointer arithmetic maps to advancing the piece index.
    let r = lane_above(TVarRef::Piece { key: 7, idx: 0 });
    assert_eq!(r, TVarRef::Piece { key: 7, idx: 1 });
}

#[test]
fn split_flow_traces_subpiece_of_piece() {
    // whole = PIECE(hi, lo);  out = SUBPIECE(whole, 4)  -> grabs the high lane.
    // SplitFlow from `whole` with lowSize=4 traces backward through the PIECE
    // (low/high COPY lanes) and forward through the SUBPIECE (high-lane COPY).
    // doTrace succeeds (the discovery half is fully ported).
    let mut fd = build_fd();
    let lo = mk_input(&mut fd, 0x40, 4);
    let hi = mk_input(&mut fd, 0x48, 4);
    // whole = PIECE(hi, lo)
    let pieceop = mk_op(&mut fd, 0x100, 2, OpCode::CPUI_PIECE);
    let whole = mk_reg(&mut fd, 0x80, 8);
    wire_in(&mut fd, pieceop, hi, 0); // most significant
    wire_in(&mut fd, pieceop, lo, 1); // least significant
    let whole = wire_out(&mut fd, pieceop, whole);
    // out = SUBPIECE(whole, 4)  (most significant 4 bytes)
    let four = mk_const(&mut fd, 4, 4);
    let sub = mk_op(&mut fd, 0x180, 2, OpCode::CPUI_SUBPIECE);
    let outvn = mk_reg(&mut fd, 0xc0, 4);
    wire_in(&mut fd, sub, whole, 0);
    wire_in(&mut fd, sub, four, 1);
    let _outvn = wire_out(&mut fd, sub, outvn);

    let mut sf = SplitFlow::new(&mut fd, whole, 4);
    assert!(sf.do_trace(&mut fd));
    // Marks cleared after doTrace.
    assert!(!fd.vbank().get(whole).unwrap().is_mark());
}

#[test]
fn split_flow_aborts_on_unsplittable_use() {
    // whole = PIECE(hi, lo); used by an op SplitFlow can't push through
    // (FLOAT_ADD) -> traceForward returns false -> doTrace false.
    let mut fd = build_fd();
    let lo = mk_input(&mut fd, 0x40, 4);
    let hi = mk_input(&mut fd, 0x48, 4);
    let pieceop = mk_op(&mut fd, 0x100, 2, OpCode::CPUI_PIECE);
    let whole = mk_reg(&mut fd, 0x80, 8);
    wire_in(&mut fd, pieceop, hi, 0);
    wire_in(&mut fd, pieceop, lo, 1);
    let whole = wire_out(&mut fd, pieceop, whole);
    let fadd = mk_op(&mut fd, 0x180, 2, OpCode::CPUI_FLOAT_ADD);
    let other = mk_input(&mut fd, 0x90, 8);
    let outvn = mk_reg(&mut fd, 0xc0, 8);
    wire_in(&mut fd, fadd, whole, 0);
    wire_in(&mut fd, fadd, other, 1);
    let _outvn = wire_out(&mut fd, fadd, outvn);

    let mut sf = SplitFlow::new(&mut fd, whole, 4);
    assert!(!sf.do_trace(&mut fd));
}

#[test]
fn rule_split_flow_rejects_low_subpiece() {
    // SUBPIECE taking the least significant part (offset 0) -> rule returns 0.
    let mut fd = build_fd();
    let vn = mk_input(&mut fd, 0x40, 8);
    let zero = mk_const(&mut fd, 4, 0);
    let sub = mk_op(&mut fd, 0x100, 2, OpCode::CPUI_SUBPIECE);
    let outvn = mk_reg(&mut fd, 0x80, 4);
    wire_in(&mut fd, sub, vn, 0);
    wire_in(&mut fd, sub, zero, 1);
    let _outvn = wire_out(&mut fd, sub, outvn);
    let mut rule = RuleSplitFlow::new("g");
    assert_eq!(rule.apply_op(sub, &mut fd), 0);
}

#[test]
fn rule_split_flow_rejects_without_concat() {
    // SUBPIECE of the most significant part but the source is not written by a
    // PIECE (it's a plain input) -> no concat found -> rule returns 0.
    let mut fd = build_fd();
    let copyop = mk_op(&mut fd, 0x100, 1, OpCode::CPUI_COPY);
    let src = mk_input(&mut fd, 0x40, 8);
    let whole = mk_reg(&mut fd, 0x80, 8);
    wire_in(&mut fd, copyop, src, 0);
    let whole = wire_out(&mut fd, copyop, whole);
    let four = mk_const(&mut fd, 4, 4);
    let sub = mk_op(&mut fd, 0x180, 2, OpCode::CPUI_SUBPIECE);
    let outvn = mk_reg(&mut fd, 0xc0, 4);
    wire_in(&mut fd, sub, whole, 0);
    wire_in(&mut fd, sub, four, 1);
    let _outvn = wire_out(&mut fd, sub, outvn);
    let mut rule = RuleSplitFlow::new("g");
    assert_eq!(rule.apply_op(sub, &mut fd), 0);
}

// ---- RuleDumptyHumpLate (subflow.cc:3021-3083) ------------------------

#[test]
fn dumpty_hump_late_sub_concat_low_replaces_with_component() {
    // whole = PIECE(V, W);  out = SUBPIECE(whole, 0)  with out size == W size.
    // RuleDumptyHumpLate backtracks thru the PIECE to W (exact match), and,
    // since the SUBPIECE output is not addr-tied, totalReplaces out with W.
    let mut fd = build_fd();
    let v = mk_input(&mut fd, 0x40, 4); // most significant component
    let w = mk_input(&mut fd, 0x48, 4); // least significant component
    let pieceop = mk_op(&mut fd, 0x100, 2, OpCode::CPUI_PIECE);
    let whole = mk_reg(&mut fd, 0x80, 8);
    wire_in(&mut fd, pieceop, v, 0); // most significant
    wire_in(&mut fd, pieceop, w, 1); // least significant
    let whole = wire_out(&mut fd, pieceop, whole);
    // out = SUBPIECE(whole, 0)  (least significant 4 bytes == W)
    let zero = mk_const(&mut fd, 4, 0);
    let sub = mk_op(&mut fd, 0x180, 2, OpCode::CPUI_SUBPIECE);
    let outvn = mk_reg(&mut fd, 0xc0, 4);
    wire_in(&mut fd, sub, whole, 0);
    wire_in(&mut fd, sub, zero, 1);
    let outvn = wire_out(&mut fd, sub, outvn);
    // Give the output a descendant so the SUBPIECE op survives the destroy.
    let user = mk_op(&mut fd, 0x200, 1, OpCode::CPUI_COPY);
    wire_in(&mut fd, user, outvn, 0);

    let mut rule = RuleDumptyHumpLate::new("g");
    assert_eq!(rule.apply_op(sub, &mut fd), 1);
    // The user now reads W directly (totalReplace).
    assert_eq!(fd.obank().get(user).unwrap().get_in(0), Some(w));
}

#[test]
fn dumpty_hump_late_sub_concat_high_preserves_subpiece() {
    // whole = PIECE(V, W);  out = SUBPIECE(whole, 6) with out size 2.  The
    // truncation lands inside V (the most significant component), so the rule
    // backtracks to V and rewrites the SUBPIECE to read V with the adjusted
    // truncation (6 - W.size = 2) — SUBPIECE preserved, in0 now V.
    let mut fd = build_fd();
    let v = mk_input(&mut fd, 0x40, 4);
    let w = mk_input(&mut fd, 0x48, 4);
    let pieceop = mk_op(&mut fd, 0x100, 2, OpCode::CPUI_PIECE);
    let whole = mk_reg(&mut fd, 0x80, 8);
    wire_in(&mut fd, pieceop, v, 0);
    wire_in(&mut fd, pieceop, w, 1);
    let whole = wire_out(&mut fd, pieceop, whole);
    let six = mk_const(&mut fd, 4, 6);
    let sub = mk_op(&mut fd, 0x180, 2, OpCode::CPUI_SUBPIECE);
    let outvn = mk_reg(&mut fd, 0xc0, 2);
    wire_in(&mut fd, sub, whole, 0);
    wire_in(&mut fd, sub, six, 1);
    let outvn = wire_out(&mut fd, sub, outvn);
    let user = mk_op(&mut fd, 0x200, 1, OpCode::CPUI_COPY);
    wire_in(&mut fd, user, outvn, 0);

    let mut rule = RuleDumptyHumpLate::new("g");
    assert_eq!(rule.apply_op(sub, &mut fd), 1);
    // SUBPIECE now reads V (the most significant component) at truncation 2.
    assert_eq!(fd.obank().get(sub).unwrap().get_in(0), Some(v));
    assert_eq!(fd.obank().get(sub).unwrap().code(), OpCode::CPUI_SUBPIECE);
    let nin1 = fd.obank().get(sub).unwrap().get_in(1).unwrap();
    assert_eq!(fd.vbank().get(nin1).unwrap().get_offset(), 2);
}

#[test]
fn dumpty_hump_late_rejects_non_piece_input() {
    // SUBPIECE whose input is not written by a PIECE -> rule returns 0.
    let mut fd = build_fd();
    let src = mk_input(&mut fd, 0x40, 8);
    let copyop = mk_op(&mut fd, 0x100, 1, OpCode::CPUI_COPY);
    let mid = mk_reg(&mut fd, 0x80, 8);
    wire_in(&mut fd, copyop, src, 0);
    let mid = wire_out(&mut fd, copyop, mid);
    let zero = mk_const(&mut fd, 4, 0);
    let sub = mk_op(&mut fd, 0x180, 2, OpCode::CPUI_SUBPIECE);
    let outvn = mk_reg(&mut fd, 0xc0, 4);
    wire_in(&mut fd, sub, mid, 0);
    wire_in(&mut fd, sub, zero, 1);
    let _outvn = wire_out(&mut fd, sub, outvn);
    let mut rule = RuleDumptyHumpLate::new("g");
    assert_eq!(rule.apply_op(sub, &mut fd), 0);
}

// ---- SplitDatatype categorization (subflow.cc:2219-2384) --------------

#[test]
fn split_datatype_categorizes_primitive_and_struct() {
    use crate::dtype::TypeFactoryImpl;
    let factory = TypeFactoryImpl::new();
    factory.set_default_alignment_map();
    factory.set_max_basetype_size(8);
    // Structures off / arrays off -> nothing is splittable except primitives.
    let sd = SplitDatatype::new(0);
    let int4t = factory.get_base(4, type_metatype::TYPE_INT).unwrap();
    assert_eq!(sd.categorize_datatype(&int4t), 2); // TYPE_INT -> primitive
    let unk2 = unk(2);
    assert_eq!(sd.categorize_datatype(&unk2), 2); // TYPE_UNKNOWN -> primitive
}

#[test]
fn split_datatype_array_compatibility_splits_primitive_into_elements() {
    use crate::dtype::TypeFactoryImpl;
    let factory = TypeFactoryImpl::new();
    factory.set_default_alignment_map();
    factory.set_max_basetype_size(8);
    // out = int4[2] (size 8); in = unknown8 (primitive).  With arrays enabled,
    // testDatatypeCompatibility splits the primitive into the two int4 lanes.
    let int4t = factory.get_base(4, type_metatype::TYPE_INT).unwrap();
    let arr = factory.get_type_array(2, Rc::clone(&int4t)).unwrap();
    let unk8 = factory.get_base(8, type_metatype::TYPE_UNKNOWN).unwrap();
    // option_array bit set (config == 2).
    let mut sd = SplitDatatype::new(2);
    assert_eq!(sd.categorize_datatype(&arr), 1); // array
    assert_eq!(sd.categorize_datatype(&unk8), 2); // primitive
    let ok = sd
        .test_datatype_compatibility(&factory, &unk8, &arr, false)
        .unwrap();
    assert!(ok);
    assert_eq!(sd.data_type_pieces.len(), 2);
    assert_eq!(sd.data_type_pieces[0].offset, 0);
    assert_eq!(sd.data_type_pieces[1].offset, 4);
    assert_eq!(sd.data_type_pieces[0].out_type.get_size(), 4);
    // getComponent of the array at offset 4 yields the second element.
    let (comp, hole) = sd.get_component(&factory, &arr, 4).unwrap();
    assert!(!hole);
    assert_eq!(comp.unwrap().get_size(), 4);
}

#[test]
fn split_datatype_extracts_fields_from_the_original_container() {
    for big_endian in [false, true] {
        for truncated in [false, true] {
            let mut fd = build_fd_endian(big_endian);
            ram(&fd).clear_flags(addrspace_flags::does_deadcode);
            let root_block = fd.bblocks_ref().root.unwrap();
            let block = fd.bblocks_mut().new_block_basic(root_block);
            let whole = mk_input(&mut fd, 0x40, 16);
            let mut source = whole;
            if truncated {
                let op = mk_op(&mut fd, 0x100, 2, OpCode::CPUI_SUBPIECE);
                wire_in(&mut fd, op, whole, 0);
                let offset = fd.new_constant(4, 4);
                wire_in(&mut fd, op, offset, 1);
                let partial = mk_reg(&mut fd, 0x80, 12);
                source = wire_out(&mut fd, op, partial);
                fd.op_insert(op, block, None);
            }
            let copy = mk_op(&mut fd, 0x104, 1, OpCode::CPUI_COPY);
            wire_in(&mut fd, copy, source, 0);
            fd.op_insert(copy, block, None);
            let mut splitter = SplitDatatype::new(3);
            for (offset, size) in [(0, 8), (8, 4)] {
                splitter.data_type_pieces.push(Component {
                    in_type: unk(size),
                    out_type: unk(size),
                    offset,
                });
            }
            let mut parts = Vec::new();
            splitter
                .build_in_subpieces(&mut fd, source, copy, &mut parts)
                .unwrap();
            crate::aggregatefields::discard_unused_truncations(&mut fd, source);
            if truncated {
                let def = fd.vbank().get(source).unwrap().get_def().unwrap();
                assert!(
                    !fd.obank().get(def).unwrap().is_dead(),
                    "the COPY still reads this slice"
                );
            }
            for (i, part) in parts.into_iter().enumerate() {
                let op = fd
                    .obank()
                    .get(fd.vbank().get(part).unwrap().get_def().unwrap())
                    .unwrap();
                assert_eq!(op.get_in(0), Some(whole));
                let offset = fd.vbank().get(op.get_in(1).unwrap()).unwrap().get_offset();
                let expected = if big_endian {
                    [8, 4][i]
                } else {
                    [0, 8][i] + if truncated { 4 } else { 0 }
                };
                assert_eq!(offset, expected);
            }
            let def = fd.vbank().get(source).unwrap().get_def();
            fd.op_destroy(copy);
            crate::aggregatefields::discard_unused_truncations(&mut fd, source);
            if let Some(def) = def {
                assert!(fd.obank().get(def).is_none_or(|op| op.is_dead()));
            }
            assert!(fd.vbank().get(whole).unwrap().is_input());
        }
    }
}

#[test]
fn build_pointers_on_zero_sized_type_is_an_error_not_a_panic() {
    // An empty C++ class is a zero-sized struct. buildPointers used to compute
    // `curOff % size` / `/ size` on it: "attempt to calculate the remainder with a
    // divisor of zero" (seen on GCC cc1). It must give up on the split instead.
    use crate::dtype::TypeFactoryImpl;
    let factory = TypeFactoryImpl::new();
    factory.set_default_alignment_map();
    factory.set_max_basetype_size(8);
    let empty = Rc::new(Datatype::new(0, type_metatype::TYPE_STRUCT));
    let ptr = factory.get_type_pointer(8, Rc::clone(&empty), 1).unwrap();
    let int4t = factory.get_base(4, type_metatype::TYPE_INT).unwrap();

    let mut fd = build_fd();
    let root = mk_input(&mut fd, 0x40, 8);
    let copyop = mk_op(&mut fd, 0x100, 1, OpCode::CPUI_COPY);
    let mut sd = SplitDatatype::new(3);
    sd.data_type_pieces.push(Component {
        in_type: Rc::clone(&int4t),
        out_type: int4t,
        offset: 0,
    });
    let mut ptrs = Vec::new();
    let r = sd.build_pointers(&mut fd, root, &ptr, 0, copyop, &mut ptrs, true);
    assert!(r.is_err());
    assert!(ptrs.is_empty());
}

#[test]
fn split_datatype_struct_disabled_when_config_zero() {
    // With split_datatype_config == 0, splitStructures/splitArrays are false,
    // so a struct categorizes as not-splittable (-1).
    let sd = SplitDatatype::new(0);
    // Build a 2-field struct (size 8) via the factory not required: a bare
    // TYPE_STRUCT with >1 depend is needed; use a partial-struct's parent path
    // instead exercising the metatype switch's struct arm.
    let struct_ty = Rc::new(Datatype::new(8, type_metatype::TYPE_STRUCT));
    assert_eq!(sd.categorize_datatype(&struct_ty), -1);
}

#[test]
fn split_load_store_get_value_datatype_is_stub_none() {
    // getValueDatatype needs getTypeReadFacing off the arch stub -> None, so
    // RuleSplitLoad / RuleSplitStore return 0 (no change).
    let mut fd = build_fd();
    let spaceid = mk_const(&mut fd, 8, 0);
    let ptr = mk_input(&mut fd, 0x40, 8);
    let load = mk_op(&mut fd, 0x100, 2, OpCode::CPUI_LOAD);
    let outvn = mk_reg(&mut fd, 0x80, 8);
    wire_in(&mut fd, load, spaceid, 0);
    wire_in(&mut fd, load, ptr, 1);
    let _outvn = wire_out(&mut fd, load, outvn);
    assert!(SplitDatatype::get_value_datatype(&fd, load, 8).is_none());
    let mut rule = RuleSplitLoad::new("g");
    assert_eq!(rule.apply_op(load, &mut fd), 0);
}

#[test]
fn rule_split_copy_is_stub_gated() {
    // RuleSplitCopy's getTypeReadFacing/getTypeDefFacing are arch-stubbed, so
    // the rule returns 0 cleanly.
    let mut fd = build_fd();
    let src = mk_input(&mut fd, 0x40, 8);
    let copyop = mk_op(&mut fd, 0x100, 1, OpCode::CPUI_COPY);
    let outvn = mk_reg(&mut fd, 0x80, 8);
    wire_in(&mut fd, copyop, src, 0);
    let _outvn = wire_out(&mut fd, copyop, outvn);
    let mut rule = RuleSplitCopy::new("g");
    assert_eq!(rule.apply_op(copyop, &mut fd), 0);
}

// ---- SplitDatatype split build path (subflow.cc:2390-2954) -------------
// item: rport/w10-splitdatatype (round 1).  Verifier adversarial tests
// targeting the fragile transcriptions: the testCopyConstraints boolean
// ladder, the generateConstants extended-precision shift arithmetic, and the
// getValueDatatype TYPE_PTR guard.

/// `SplitDatatype::testCopyConstraints` (subflow.cc:2390): the C++ rejects
/// COPYs whose input is a function input, and the written-LOAD-lone-descend
/// form (handled by splitCopy itself).  Verifies both early-false arms and the
/// true fallthrough for a plain written non-LOAD input.
#[test]
fn w10_splitdt_test_copy_constraints_ladder() {
    // (a) input Varnode -> false (inVn->isInput()).
    let mut fd = build_fd();
    let sd = SplitDatatype::new(3);
    let src = mk_input(&mut fd, 0x40, 8);
    let copyop = mk_op(&mut fd, 0x100, 1, OpCode::CPUI_COPY);
    let outvn = mk_reg(&mut fd, 0x80, 8);
    wire_in(&mut fd, copyop, src, 0);
    let _ = wire_out(&mut fd, copyop, outvn);
    assert!(
        !sd.test_copy_constraints(&fd, copyop),
        "input must be rejected"
    );

    // (b) written non-input, non-LOAD def -> the LOAD-lone-descend arm is
    // skipped and the method returns true (the splittable case).
    let mut fd = build_fd();
    let sd = SplitDatatype::new(3);
    let predop = mk_op(&mut fd, 0x80, 1, OpCode::CPUI_INT_2COMP);
    let inarg = mk_input(&mut fd, 0x40, 8);
    wire_in(&mut fd, predop, inarg, 0);
    let mid = mk_reg(&mut fd, 0x48, 8);
    let mid = wire_out(&mut fd, predop, mid); // written, def is not a LOAD
    let copyop = mk_op(&mut fd, 0x100, 1, OpCode::CPUI_COPY);
    let outvn = mk_reg(&mut fd, 0x88, 8);
    wire_in(&mut fd, copyop, mid, 0);
    let _ = wire_out(&mut fd, copyop, outvn);
    assert!(
        sd.test_copy_constraints(&fd, copyop),
        "written non-LOAD input is splittable"
    );

    // (c) written LOAD def whose lone descendant is the COPY -> false
    // (handled by splitCopy()).  Exercises inVn->getDef()->code()==LOAD and
    // loneDescend()==copyOp.
    let mut fd = build_fd();
    let sd = SplitDatatype::new(3);
    let spaceid = mk_const(&mut fd, 8, 0);
    let ptr = mk_input(&mut fd, 0x40, 8);
    let loadop = mk_op(&mut fd, 0x90, 2, OpCode::CPUI_LOAD);
    wire_in(&mut fd, loadop, spaceid, 0);
    wire_in(&mut fd, loadop, ptr, 1);
    let loaded = mk_reg(&mut fd, 0x50, 8);
    let loaded = wire_out(&mut fd, loadop, loaded);
    let copyop = mk_op(&mut fd, 0x100, 1, OpCode::CPUI_COPY);
    let outvn = mk_reg(&mut fd, 0x88, 8);
    wire_in(&mut fd, copyop, loaded, 0); // loaded's lone descend is copyOp
    let _ = wire_out(&mut fd, copyop, outvn);
    assert!(
        !sd.test_copy_constraints(&fd, copyop),
        "LOAD-into-lone-COPY must be deferred to splitCopy()"
    );
}

/// `SplitDatatype::generateConstants` (subflow.cc:2413): a little-endian
/// `INT_ZEXT(c)` is split into the precomputed `dataTypePieces`.  Verifies the
/// exact shift arithmetic (`val = lo >> sa*8` with `sa = offset`) and the
/// `dt->getSize() > sizeof(uintb)` overflow bail that clears the accumulator.
#[test]
fn w10_splitdt_generate_constants_zext_and_oversize_bail() {
    let mut fd = build_fd();
    let mut sd = SplitDatatype::new(3);
    // Build a little-endian ZEXT(0x11223344 : 4) -> 8.  loneDescend must be
    // present (a sink op) and the value must be a constant input.
    let cst = mk_const(&mut fd, 4, 0x1122_3344);
    let zext = mk_op(&mut fd, 0x80, 1, OpCode::CPUI_INT_ZEXT);
    wire_in(&mut fd, zext, cst, 0);
    let zout = mk_reg(&mut fd, 0x50, 8);
    let zout = wire_out(&mut fd, zext, zout);
    // A single descendant so loneDescend() != null.
    let sink = mk_op(&mut fd, 0x100, 1, OpCode::CPUI_COPY);
    wire_in(&mut fd, sink, zout, 0);
    let sinkout = mk_reg(&mut fd, 0x88, 8);
    let _ = wire_out(&mut fd, sink, sinkout);

    // Two int2 pieces at offsets 0 and 2 (low half of the ZEXT value).
    let int2 = Rc::new(Datatype::new(2, type_metatype::TYPE_INT));
    sd.data_type_pieces.push(Component {
        in_type: Rc::clone(&int2),
        out_type: Rc::clone(&int2),
        offset: 0,
    });
    sd.data_type_pieces.push(Component {
        in_type: Rc::clone(&int2),
        out_type: Rc::clone(&int2),
        offset: 2,
    });
    let mut inv: Vec<VarnodeId> = Vec::new();
    assert!(sd.generate_constants(&mut fd, zout, &mut inv).unwrap());
    assert_eq!(inv.len(), 2);
    // ram space is little-endian here: offset 0 -> low 16 bits (0x3344),
    // offset 2 -> next 16 bits (0x1122).  losize=4, sa<losize so val=lo>>sa*8.
    assert_eq!(fd.vbank().get(inv[0]).unwrap().get_offset(), 0x3344);
    assert_eq!(fd.vbank().get(inv[1]).unwrap().get_offset(), 0x1122);

    // Oversize bail: a piece larger than sizeof(uintb) clears inVarnodes and
    // returns false (the C++ `dt->getSize() > sizeof(uintb)` guard).
    let mut fd = build_fd();
    let mut sd = SplitDatatype::new(3);
    let cst = mk_const(&mut fd, 4, 0xdead_beef);
    let zext = mk_op(&mut fd, 0x80, 1, OpCode::CPUI_INT_ZEXT);
    wire_in(&mut fd, zext, cst, 0);
    let zout = mk_reg(&mut fd, 0x50, 16);
    let zout = wire_out(&mut fd, zext, zout);
    let sink = mk_op(&mut fd, 0x100, 1, OpCode::CPUI_COPY);
    wire_in(&mut fd, sink, zout, 0);
    let sinkout = mk_reg(&mut fd, 0x90, 16);
    let _ = wire_out(&mut fd, sink, sinkout);
    let big = Rc::new(Datatype::new(16, type_metatype::TYPE_INT)); // > sizeof(uintb)
    sd.data_type_pieces.push(Component {
        in_type: Rc::clone(&big),
        out_type: Rc::clone(&big),
        offset: 0,
    });
    let mut inv: Vec<VarnodeId> = Vec::new();
    assert!(!sd.generate_constants(&mut fd, zout, &mut inv).unwrap());
    assert!(inv.is_empty(), "oversize piece must clear the accumulator");
}

fn pieces_with_byte_oracle(bytes: &[u8], big_endian: bool) -> (SplitDatatype, Vec<u64>) {
    let mut memory = bytes.to_vec();
    if big_endian {
        memory.reverse();
    }
    let mut split = SplitDatatype::new(3);
    let mut expected = Vec::new();
    for size in [1, 2, 4, 8] {
        for offset in 0..=memory.len() - size {
            let ty = Rc::new(Datatype::new(size as i32, type_metatype::TYPE_UINT));
            split.data_type_pieces.push(Component {
                in_type: ty.clone(),
                out_type: ty,
                offset: offset as i32,
            });
            let mut value = [0u8; 8];
            if big_endian {
                value[8 - size..].copy_from_slice(&memory[offset..offset + size]);
                expected.push(u64::from_be_bytes(value));
            } else {
                value[..size].copy_from_slice(&memory[offset..offset + size]);
                expected.push(u64::from_le_bytes(value));
            }
        }
    }
    (split, expected)
}

#[test]
fn split_wide_constants_zero_extend_the_host_payload() {
    for big_endian in [false, true] {
        for payload in [0u64, u64::MAX, 0xfedcba9876543210] {
            let mut bytes = [0u8; 16];
            bytes[..8].copy_from_slice(&payload.to_le_bytes());
            let (split, expected) = pieces_with_byte_oracle(&bytes, big_endian);
            let mut fd = build_fd_endian(big_endian);
            let root = mk_const(&mut fd, 16, payload);
            let mut parts = Vec::new();
            split.build_in_constants(&mut fd, root, &mut parts, big_endian);
            let actual: Vec<_> = parts
                .iter()
                .map(|&v| fd.vbank().get(v).unwrap().get_offset())
                .collect();
            assert_eq!(
                actual, expected,
                "big_endian={big_endian}, payload={payload:x}"
            );
        }
    }
}

#[test]
fn split_extended_constants_use_byte_offsets_across_both_words() {
    for big_endian in [false, true] {
        for (low_size, high_size) in [(4, 4), (8, 8), (16, 8)] {
            for (low, high) in [
                (0u64, 0u64),
                (u64::MAX, u64::MAX),
                (0xfedcba9876543210, 0x0123456789abcdef),
            ] {
                for zero_extend in [false, true] {
                    let mut bytes = vec![0u8; low_size + high_size];
                    let n = low_size.min(8);
                    bytes[..n].copy_from_slice(&low.to_le_bytes()[..n]);
                    if !zero_extend {
                        let n = high_size.min(8);
                        bytes[low_size..low_size + n].copy_from_slice(&high.to_le_bytes()[..n]);
                    }
                    let (split, expected) = pieces_with_byte_oracle(&bytes, big_endian);
                    let mut fd = build_fd_endian(big_endian);
                    let lo = mk_const(&mut fd, low_size as i32, low & calc_mask(low_size as i32));
                    let opcode = if zero_extend {
                        OpCode::CPUI_INT_ZEXT
                    } else {
                        OpCode::CPUI_PIECE
                    };
                    let op = mk_op(&mut fd, 0x80, if zero_extend { 1 } else { 2 }, opcode);
                    if zero_extend {
                        wire_in(&mut fd, op, lo, 0);
                    } else {
                        let hi = mk_const(
                            &mut fd,
                            high_size as i32,
                            high & calc_mask(high_size as i32),
                        );
                        wire_in(&mut fd, op, hi, 0);
                        wire_in(&mut fd, op, lo, 1);
                    }
                    let root = mk_reg(&mut fd, 0x50, bytes.len() as i32);
                    let root = wire_out(&mut fd, op, root);
                    let sink = mk_op(&mut fd, 0x100, 1, OpCode::CPUI_COPY);
                    wire_in(&mut fd, sink, root, 0);
                    let mut parts = Vec::new();
                    assert!(split.generate_constants(&mut fd, root, &mut parts).unwrap());
                    let actual: Vec<_> = parts
                        .iter()
                        .map(|&v| fd.vbank().get(v).unwrap().get_offset())
                        .collect();
                    assert_eq!(
                        actual, expected,
                        "big_endian={big_endian}, lo={low_size}, hi={high_size}, zext={zero_extend}"
                    );
                }
            }
        }
    }
}

/// `SplitDatatype::getValueDatatype` (subflow.cc:2925): a non-pointer
/// read-facing type returns None (the TYPE_PTR guard), regardless of size.
/// This is the guard `RuleSplitLoad`/`RuleSplitStore` lean on to early-out.
#[test]
fn w10_splitdt_get_value_datatype_rejects_non_pointer() {
    let mut fd = build_fd();
    let spaceid = mk_const(&mut fd, 8, 0);
    // ptr Varnode carries a plain int8 (NOT a pointer) read-facing type.
    let ptr = mk_input(&mut fd, 0x40, 8);
    fd.vbank_mut()
        .get_mut(ptr)
        .unwrap()
        .update_type(Rc::new(Datatype::new(8, type_metatype::TYPE_INT)));
    let load = mk_op(&mut fd, 0x100, 2, OpCode::CPUI_LOAD);
    wire_in(&mut fd, load, spaceid, 0);
    wire_in(&mut fd, load, ptr, 1);
    let loadout = mk_reg(&mut fd, 0x80, 8);
    let _ = wire_out(&mut fd, load, loadout);
    assert!(
        SplitDatatype::get_value_datatype(&fd, load, 8).is_none(),
        "non-pointer read-facing type must yield None"
    );
}

// ---- SubfloatFlow / RuleSubfloatConvert (subflow.cc:3085-3522) --------

#[test]
fn subfloat_flow_no_format_does_not_trace() {
    // The Funcdata arch stub exposes no Translate/FloatFormat, so SubfloatFlow
    // reports no format and doTrace returns false (the C++ null-format path).
    let mut fd = build_fd();
    let root = mk_input(&mut fd, 0x40, 8);
    let mut sf = SubfloatFlow::new(&mut fd, root, 4);
    assert!(!sf.has_format);
    assert!(!sf.do_trace(&mut fd).unwrap());
}

#[test]
fn rule_subfloat_convert_returns_zero_under_stub() {
    // FLOAT_FLOAT2FLOAT widening (out>in): SubfloatFlow can't acquire a format
    // (arch stub) so doTrace is false and the rule returns 0.
    let mut fd = build_fd();
    let invn = mk_input(&mut fd, 0x40, 4);
    let f2f = mk_op(&mut fd, 0x100, 1, OpCode::CPUI_FLOAT_FLOAT2FLOAT);
    let outvn = mk_reg(&mut fd, 0x80, 8);
    wire_in(&mut fd, f2f, invn, 0);
    let _outvn = wire_out(&mut fd, f2f, outvn);
    let mut rule = RuleSubfloatConvert::new("g");
    assert_eq!(rule.apply_op(f2f, &mut fd), 0);
}

// ---- tryReturnPull (subflow.cc:238-284) — verifier adversarial tests ----
// item: rport/w10-return-narrow (round 1).  These target the three fragile
// decision branches of the now-closed stub: the slot==0 return-address bail,
// the non-aggressive consume-outside-mask bail, and the terminal trim patch
// (which sets returnsTraversed and emits exactly one parameter_patch).

/// Build an engine + a single RETURN op consuming `root` (4-byte reg) at the
/// given input slot.  Returns (sf, returnop, root_rvid).  The engine is
/// seeded on the low-byte logical value (mask 0xff).
fn return_setup(slot: int4, consume: uintb) -> (Funcdata, OpId, VarnodeId) {
    let mut fd = build_fd();
    let root = mk_input(&mut fd, 0x40, 4);
    fd.vbank_mut().get_mut(root).unwrap().set_consume(consume);
    // RETURN(retaddr, root) — slot 0 is the return-address container, slot 1
    // the first return value.  We wire `root` at the requested slot.
    let retop = mk_op(&mut fd, 0x200, slot + 1, OpCode::CPUI_RETURN);
    let retaddr = fd.new_constant(8, 0);
    wire_in(&mut fd, retop, retaddr, 0);
    if slot != 0 {
        wire_in(&mut fd, retop, root, slot);
    }
    (fd, retop, root)
}

#[test]
fn try_return_pull_slot0_is_return_address_bail() {
    // subflow.cc:241 — slot==0 is the actual return-address container; never
    // trimmed.  Must return Ok(false) WITHOUT touching patchlist/pullcount or
    // flipping returns_traversed.
    let (mut fd, retop, root) = return_setup(0, 0xff);
    let mut sf = SubvariableFlow::new(&mut fd, root, 0xff, true, false, false).unwrap();
    let rvn = *sf.varmap.get(&root).expect("root must be linked");
    let before = sf.pullcount;
    let ok = sf.try_return_pull(&mut fd, retop, rvn, 0).unwrap();
    assert!(!ok, "slot 0 must bail (return-address container)");
    assert_eq!(sf.pullcount, before, "slot-0 bail must not bump pullcount");
    assert!(sf.patchlist.is_empty(), "slot-0 bail must not patch");
    assert!(
        !sf.returns_traversed,
        "slot-0 bail must not mark returns traversed"
    );
}

#[test]
fn try_return_pull_nonaggressive_consume_outside_mask_bails() {
    // subflow.cc:243-246 — non-aggressive: if the varnode consumes any bit
    // outside the logical mask, do not truncate.  Must bail BEFORE the
    // returns-traversed propagation.  Seed with consume==mask (so the
    // non-aggressive constructor links the root), then widen consume to
    // 0xffff to trip the gate exactly at try_return_pull.
    let (mut fd, retop, root) = return_setup(1, 0xff);
    let mut sf = SubvariableFlow::new(&mut fd, root, 0xff, false, false, false).unwrap();
    let rvn = *sf.varmap.get(&root).expect("root must be linked");
    fd.vbank_mut().get_mut(root).unwrap().set_consume(0xffff);
    let ok = sf.try_return_pull(&mut fd, retop, rvn, 1).unwrap();
    assert!(!ok, "consume outside mask (non-aggressive) must bail");
    assert!(sf.patchlist.is_empty(), "consume-bail must not patch");
    assert!(
        !sf.returns_traversed,
        "consume-bail must not mark returns traversed"
    );
    // Sanity: the SAME setup with aggressive=true does NOT bail on consume
    // (the consume gate is skipped) and reaches the terminal trim.
    let (mut fd2, retop2, root2) = return_setup(1, 0xffff);
    let mut sf2 = SubvariableFlow::new(&mut fd2, root2, 0xff, true, false, false).unwrap();
    let rvn2 = *sf2.varmap.get(&root2).expect("root must be linked");
    let ok2 = sf2.try_return_pull(&mut fd2, retop2, rvn2, 1).unwrap();
    assert!(ok2, "aggressive engine skips the consume gate and trims");
}

#[test]
fn try_return_pull_terminal_trim_emits_one_patch_and_sets_traversed() {
    // subflow.cc:248-283 — the happy path: returns_traversed starts false, the
    // single RETURN is traversed, the terminal parameter_patch on `op` is
    // pushed, pullcount bumps by exactly one, and returns_traversed flips true.
    // A SECOND call must NOT re-run the propagation loop (idempotent flag) but
    // still emits its own terminal patch (C++ pushes the terminal each call).
    let (mut fd, retop, root) = return_setup(1, 0xff);
    let mut sf = SubvariableFlow::new(&mut fd, root, 0xff, true, false, false).unwrap();
    let rvn = *sf.varmap.get(&root).expect("root must be linked");
    assert!(!sf.returns_traversed);
    let before = sf.pullcount;
    let ok = sf.try_return_pull(&mut fd, retop, rvn, 1).unwrap();
    assert!(ok, "valid trim must succeed");
    assert!(sf.returns_traversed, "first trim sets returns_traversed");
    assert_eq!(sf.pullcount, before + 1, "exactly one terminal patch bump");
    // The terminal patch is a parameter_patch on the RETURN op at slot 1.
    let term = sf.patchlist.last().expect("a terminal patch exists");
    assert_eq!(term.typ, PatchType::ParameterPatch);
    assert_eq!(term.patch_op, retop);
    assert_eq!(term.slot, 1);
    assert_eq!(term.in1, rvn);
    // Second call: returns_traversed already true, so NO new propagation, but
    // the terminal patch still fires (mirrors C++ emitting the terminal each
    // time tryReturnPull is reached for a RETURN).
    let mid = sf.pullcount;
    let patches_mid = sf.patchlist.len();
    let ok2 = sf.try_return_pull(&mut fd, retop, rvn, 1).unwrap();
    assert!(ok2);
    assert_eq!(
        sf.pullcount,
        mid + 1,
        "second call adds exactly one terminal"
    );
    assert_eq!(
        sf.patchlist.len(),
        patches_mid + 1,
        "second call must not re-traverse RETURNs, only add its terminal"
    );
}

#[test]
fn free_pointer_chain_marks_shared_remainder_freed_for_the_other_chain() {
    let mut fd = build_fd();
    let root = mk_input(&mut fd, 0x10, 8);
    let ptr = mk_reg(&mut fd, 0x20, 8);
    let add = mk_op(&mut fd, 0x1000, 2, OpCode::CPUI_INT_ADD);
    let c = mk_const(&mut fd, 8, 4);
    wire_in(&mut fd, add, root, 0);
    wire_in(&mut fd, add, c, 1);
    let ptr = wire_out(&mut fd, add, ptr);
    let load = mk_op(&mut fd, 0x1004, 2, OpCode::CPUI_LOAD);
    wire_in(&mut fd, load, ptr, 1);
    let mut load_root = RootPointer {
        load_store: Some(load),
        first_pointer: Some(ptr),
        pointer: root,
        ..Default::default()
    };
    let mut store_root = RootPointer {
        load_store: None,
        first_pointer: Some(ptr),
        pointer: root,
        ..Default::default()
    };
    fd.op_destroy(load);
    load_root.free_pointer_chain(&mut fd, Some(&mut store_root));
    store_root.free_pointer_chain(&mut fd, None);
    assert_eq!(store_root.first_pointer, Some(root));
}
