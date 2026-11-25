use super::*;
use std::rc::Rc;
use unlace_base::error::UnlaceResult;

/// Regression: the opcode seam must cover the equality comparisons (a
/// `markLabelBumpUp`-hoisted loop-head `==`/`!=` guard re-set its opcode
/// through it and panicked — #150 regression).  The flags match
/// Ghidra `TypeOpEqual`/`TypeOpNotEqual` (binary | booloutput | commutative).
#[test]
fn opcode_seam_covers_int_equality() {
    use pcodeop_flags::*;
    let expect = binary | booloutput | commutative;
    assert_eq!(
        crate::typeop::seam_type_op_for(OpCode::CPUI_INT_EQUAL).get_flags(),
        expect
    );
    assert_eq!(
        crate::typeop::seam_type_op_for(OpCode::CPUI_INT_NOTEQUAL).get_flags(),
        expect
    );
}

/// Durability: the seam every `set_opcode` in this batch routes through must
/// answer for *every* op-code.  The hand-maintained whitelist it replaced
/// was missing INT_SRIGHT / FLOAT_INT2FLOAT / FLOAT_LESS / FLOAT_ADD, and a
/// rule that produced one of those panicked the whole function away.
#[test]
fn opcode_seam_answers_for_every_opcode() {
    for raw in 1..(OpCode::CPUI_MAX as i32) {
        let opc = match OpCode::from_i32(raw) {
            Some(o) => o,
            None => continue,
        };
        let t = crate::typeop::seam_type_op_for(opc);
        assert_eq!(t.get_opcode(), opc);
        assert_ne!(
            t.get_flags(),
            0,
            "{opc:?}: seam produced a property-less TypeOp"
        );
    }
}

use unlace_base::address::Address;
use unlace_base::space::{
    AddrSpace, AddrSpaceManager, ConstantSpace, FspecSpace, IopSpace, UniqueSpace, addrspace_flags,
    spacetype,
};

use crate::context::TypeOp;
use unlace_base::types::int4;
use unlace_num::opcodes::OpCode;

use crate::context::ArchContext;

// --- harness ----------------------------------------------------------

fn build_manager() -> AddrSpaceManager {
    let mut m = AddrSpaceManager::new();
    m.insert_space(Rc::new(ConstantSpace::new())).unwrap();
    m.insert_space(Rc::new(UniqueSpace::new(1, 0, false)))
        .unwrap();
    m.insert_space(Rc::new(IopSpace::new(2))).unwrap();
    m.insert_space(Rc::new(FspecSpace::new(3))).unwrap();
    m.insert_space(Rc::new(AddrSpace::new(
        spacetype::IPTR_PROCESSOR,
        "ram",
        false,
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

/// A function with one basic block (so ops can be inserted and rules that
/// call `opInsertBefore`/`opInsertAfter` find a parent).
struct Fd {
    fd: Funcdata,
    block: crate::context::BlockId,
}

impl std::ops::Deref for Fd {
    type Target = Funcdata;
    fn deref(&self) -> &Funcdata {
        &self.fd
    }
}
impl std::ops::DerefMut for Fd {
    fn deref_mut(&mut self) -> &mut Funcdata {
        &mut self.fd
    }
}

fn build_fd() -> Fd {
    let manage = build_manager();
    let glb = Rc::new(ArchContext::new(manage));
    let ram = Rc::clone(glb.manage().get_space_by_name("ram").unwrap());
    let addr = Address::new(ram, 0x1000);
    let mut fd = Funcdata::new("func", "func", glb, addr, 0x10000000, 0x40).unwrap();
    let root = fd.bblocks_root_pub();
    let block = fd.bblocks_mut().new_block_basic(root);
    Fd { fd, block }
}

fn ram(fd: &Funcdata) -> Rc<AddrSpace> {
    Rc::clone(fd.get_arch().manage().get_space_by_name("ram").unwrap())
}

fn pc(fd: &Funcdata) -> Address {
    Address::new(ram(fd), 0x1000)
}

/// Make a free input-register varnode at `(off,size)` in ram and promote it
/// to a function input (so it is heritage-known and not free).
fn make_input(fd: &mut Fd, off: u64, size: int4) -> VarnodeId {
    let r = ram(fd);
    let vn = fd.new_varnode(size, &Address::new(r, off), None);
    let mut no_replace = |_: &mut crate::varnode::VarnodeBank,
                          _: VarnodeId,
                          _: VarnodeId|
     -> UnlaceResult<()> { Ok(()) };
    fd.vbank_mut().set_input(vn, &mut no_replace).unwrap()
}

/// Cached `opflags` for the opcodes the test harness builds as *inputs*.
/// This is the full table the real `glb->inst[opc]` would carry for these
/// opcodes (transcribed from `typeop.cc`), covering the input shapes the rule
/// tests construct; the production [`opflags_for`] is intentionally narrow
/// (rule-produced opcodes only), so the harness needs its own.
fn test_opflags(opc: OpCode) -> u32 {
    use pcodeop_flags::*;
    match opc {
        OpCode::CPUI_COPY => unary | nocollapse,
        OpCode::CPUI_LOAD => special | nocollapse,
        OpCode::CPUI_BOOL_NEGATE => unary | booloutput,
        OpCode::CPUI_BOOL_AND | OpCode::CPUI_BOOL_OR | OpCode::CPUI_BOOL_XOR => {
            binary | commutative | booloutput
        }
        OpCode::CPUI_INT_EQUAL | OpCode::CPUI_INT_NOTEQUAL => binary | booloutput | commutative,
        OpCode::CPUI_INT_SLESS | OpCode::CPUI_INT_SLESSEQUAL | OpCode::CPUI_INT_LESSEQUAL => {
            binary | booloutput
        }
        OpCode::CPUI_INT_ADD | OpCode::CPUI_INT_MULT => binary | commutative,
        OpCode::CPUI_INT_AND | OpCode::CPUI_INT_OR | OpCode::CPUI_INT_XOR => binary | commutative,
        OpCode::CPUI_INT_SUB
        | OpCode::CPUI_INT_LEFT
        | OpCode::CPUI_INT_RIGHT
        | OpCode::CPUI_INT_SRIGHT
        | OpCode::CPUI_INT_SBORROW
        | OpCode::CPUI_INT_SCARRY
        | OpCode::CPUI_INT_CARRY
        | OpCode::CPUI_PIECE
        | OpCode::CPUI_SUBPIECE => binary,
        OpCode::CPUI_INT_2COMP | OpCode::CPUI_INT_ZEXT | OpCode::CPUI_INT_SEXT => unary,
        OpCode::CPUI_MULTIEQUAL => marker,
        OpCode::CPUI_INDIRECT => marker | special | nocollapse,
        other => panic!("test_opflags: add an entry for {other:?}"),
    }
}

/// Create an op of the given opcode at the function's pc with `ninput`
/// inputs (no output assigned), inserted at the end of the function's single
/// basic block (so it has a parent for `opInsertBefore`/`After`).
fn mk_op(fd: &mut Fd, ninput: int4, opc: OpCode) -> OpId {
    let addr = pc(fd);
    let op = fd.new_op(ninput, addr);
    fd.op_set_opcode(op, TypeOp::new(opc, test_opflags(opc), format!("{opc:?}")));
    let bl = fd.block;
    fd.bb_insert_op(op, bl, None);
    op
}

/// Wire `vn` into `op`'s slot `slot`.
fn wire(fd: &mut Fd, op: OpId, vn: VarnodeId, slot: int4) {
    fd.op_set_input(op, vn, slot).unwrap();
}

/// Build an op with a fresh unique output of `outsize` and the given inputs.
/// Returns the op and its output varnode.
fn def_op(fd: &mut Fd, opc: OpCode, ins: &[VarnodeId], outsize: int4) -> (OpId, VarnodeId) {
    let op = mk_op(fd, ins.len() as int4, opc);
    for (i, &vn) in ins.iter().enumerate() {
        wire(fd, op, vn, i as int4);
    }
    let out = fd.fd.new_unique_out(outsize, op).expect("newUniqueOut");
    (op, out)
}

// --- RuleBooleanNegate ------------------------------------------------

#[test]
fn boolean_negate_eq_false_becomes_negate() {
    // (bool == 0) with INT_EQUAL, val==0 => negate = !(false) = true => BOOL_NEGATE
    let mut fd = build_fd();
    // A boolean-valued subexpression: make it the output of a BOOL_AND (which
    // is a boolean value by opcode).
    let a = make_input(&mut fd, 0x100, 1);
    let b = make_input(&mut fd, 0x101, 1);
    let (_andop, subbool) = def_op(&mut fd, OpCode::CPUI_BOOL_AND, &[a, b], 1);
    let zero = fd.new_constant(1, 0);
    let op = mk_op(&mut fd, 2, OpCode::CPUI_INT_EQUAL);
    wire(&mut fd, op, subbool, 0);
    wire(&mut fd, op, zero, 1);

    assert_eq!(RuleBooleanNegate.apply_op(op, &mut fd), 1);
    assert_eq!(op_code(&fd, op), OpCode::CPUI_BOOL_NEGATE);
    assert_eq!(op_num_input(&fd, op), 1);
    assert_eq!(op_in(&fd, op, 0), Some(subbool));
}

#[test]
fn boolean_negate_eq_true_becomes_copy() {
    // (bool == 1) with INT_EQUAL, val==1 => negate stays false => COPY
    let mut fd = build_fd();
    let a = make_input(&mut fd, 0x100, 1);
    let b = make_input(&mut fd, 0x101, 1);
    let (_andop, subbool) = def_op(&mut fd, OpCode::CPUI_BOOL_OR, &[a, b], 1);
    let one = fd.new_constant(1, 1);
    let op = mk_op(&mut fd, 2, OpCode::CPUI_INT_EQUAL);
    wire(&mut fd, op, subbool, 0);
    wire(&mut fd, op, one, 1);

    assert_eq!(RuleBooleanNegate.apply_op(op, &mut fd), 1);
    assert_eq!(op_code(&fd, op), OpCode::CPUI_COPY);
    assert_eq!(op_num_input(&fd, op), 1);
}

#[test]
fn boolean_negate_notequal_true_becomes_negate() {
    // (bool != 1) with INT_NOTEQUAL, val==1 => negate = true => BOOL_NEGATE
    let mut fd = build_fd();
    let a = make_input(&mut fd, 0x100, 1);
    let b = make_input(&mut fd, 0x101, 1);
    let (_andop, subbool) = def_op(&mut fd, OpCode::CPUI_BOOL_AND, &[a, b], 1);
    let one = fd.new_constant(1, 1);
    let op = mk_op(&mut fd, 2, OpCode::CPUI_INT_NOTEQUAL);
    wire(&mut fd, op, subbool, 0);
    wire(&mut fd, op, one, 1);

    assert_eq!(RuleBooleanNegate.apply_op(op, &mut fd), 1);
    assert_eq!(op_code(&fd, op), OpCode::CPUI_BOOL_NEGATE);
}

#[test]
fn boolean_negate_guards() {
    let mut fd = build_fd();
    // non-constant second operand -> 0
    let a = make_input(&mut fd, 0x100, 1);
    let b = make_input(&mut fd, 0x101, 1);
    let (_op0, sb) = def_op(&mut fd, OpCode::CPUI_BOOL_AND, &[a, b], 1);
    let nonconst = make_input(&mut fd, 0x200, 1);
    let op = mk_op(&mut fd, 2, OpCode::CPUI_INT_EQUAL);
    wire(&mut fd, op, sb, 0);
    wire(&mut fd, op, nonconst, 1);
    assert_eq!(RuleBooleanNegate.apply_op(op, &mut fd), 0);

    // constant != {0,1} -> 0
    let op2 = mk_op(&mut fd, 2, OpCode::CPUI_INT_EQUAL);
    let c2 = fd.new_constant(1, 2);
    wire(&mut fd, op2, sb, 0);
    wire(&mut fd, op2, c2, 1);
    assert_eq!(RuleBooleanNegate.apply_op(op2, &mut fd), 0);

    // subbool is NOT a boolean value (a plain 4-byte input) -> 0
    let notbool = make_input(&mut fd, 0x300, 4);
    let op3 = mk_op(&mut fd, 2, OpCode::CPUI_INT_EQUAL);
    let z = fd.new_constant(4, 0);
    wire(&mut fd, op3, notbool, 0);
    wire(&mut fd, op3, z, 1);
    assert_eq!(RuleBooleanNegate.apply_op(op3, &mut fd), 0);
}

// --- RuleLogic2Bool ---------------------------------------------------

#[test]
fn logic2bool_and_both_bool() {
    let mut fd = build_fd();
    // Both inputs boolean: outputs of BOOL_NEGATE (a boolean by opcode).
    let x = make_input(&mut fd, 0x100, 1);
    let y = make_input(&mut fd, 0x101, 1);
    let (_nx, bx) = def_op(&mut fd, OpCode::CPUI_BOOL_NEGATE, &[x], 1);
    let (_ny, by) = def_op(&mut fd, OpCode::CPUI_BOOL_NEGATE, &[y], 1);
    let op = mk_op(&mut fd, 2, OpCode::CPUI_INT_AND);
    wire(&mut fd, op, bx, 0);
    wire(&mut fd, op, by, 1);
    assert_eq!(RuleLogic2Bool.apply_op(op, &mut fd), 1);
    assert_eq!(op_code(&fd, op), OpCode::CPUI_BOOL_AND);
}

#[test]
fn logic2bool_const_0_or_1_ok_but_2_rejected() {
    let mut fd = build_fd();
    let x = make_input(&mut fd, 0x100, 1);
    let (_nx, bx) = def_op(&mut fd, OpCode::CPUI_BOOL_NEGATE, &[x], 1);
    // second input constant 1 -> OK, INT_OR => BOOL_OR
    let one = fd.new_constant(1, 1);
    let op = mk_op(&mut fd, 2, OpCode::CPUI_INT_OR);
    wire(&mut fd, op, bx, 0);
    wire(&mut fd, op, one, 1);
    assert_eq!(RuleLogic2Bool.apply_op(op, &mut fd), 1);
    assert_eq!(op_code(&fd, op), OpCode::CPUI_BOOL_OR);

    // second input constant 2 -> rejected
    let two = fd.new_constant(1, 2);
    let op2 = mk_op(&mut fd, 2, OpCode::CPUI_INT_XOR);
    wire(&mut fd, op2, bx, 0);
    wire(&mut fd, op2, two, 1);
    assert_eq!(RuleLogic2Bool.apply_op(op2, &mut fd), 0);
    assert_eq!(op_code(&fd, op2), OpCode::CPUI_INT_XOR);
}

#[test]
fn logic2bool_first_not_bool_rejected() {
    let mut fd = build_fd();
    let nb = make_input(&mut fd, 0x100, 4); // not boolean
    let other = make_input(&mut fd, 0x104, 4);
    let op = mk_op(&mut fd, 2, OpCode::CPUI_INT_AND);
    wire(&mut fd, op, nb, 0);
    wire(&mut fd, op, other, 1);
    assert_eq!(RuleLogic2Bool.apply_op(op, &mut fd), 0);
}

// --- RuleTrivialShift -------------------------------------------------

#[test]
fn trivial_shift_by_zero_is_copy() {
    let mut fd = build_fd();
    let v = make_input(&mut fd, 0x100, 4);
    let z = fd.new_constant(4, 0);
    let op = mk_op(&mut fd, 2, OpCode::CPUI_INT_LEFT);
    wire(&mut fd, op, v, 0);
    wire(&mut fd, op, z, 1);
    assert_eq!(RuleTrivialShift.apply_op(op, &mut fd), 1);
    assert_eq!(op_code(&fd, op), OpCode::CPUI_COPY);
    assert_eq!(op_num_input(&fd, op), 1);
    assert_eq!(op_in(&fd, op, 0), Some(v));
}

#[test]
fn trivial_shift_oversized_left_yields_zero_copy() {
    let mut fd = build_fd();
    let v = make_input(&mut fd, 0x100, 4); // 32 bits
    let big = fd.new_constant(4, 32); // >= 8*4
    let op = mk_op(&mut fd, 2, OpCode::CPUI_INT_LEFT);
    wire(&mut fd, op, v, 0);
    wire(&mut fd, op, big, 1);
    assert_eq!(RuleTrivialShift.apply_op(op, &mut fd), 1);
    assert_eq!(op_code(&fd, op), OpCode::CPUI_COPY);
    assert_eq!(op_num_input(&fd, op), 1);
    // input replaced with a zero constant
    let in0 = op_in(&fd, op, 0).unwrap();
    assert!(vn_is_constant(&fd, in0));
    assert_eq!(vn_offset(&fd, in0), 0);
}

#[test]
fn trivial_shift_guards() {
    let mut fd = build_fd();
    // non-constant shift amount -> 0
    let v = make_input(&mut fd, 0x100, 4);
    let amt = make_input(&mut fd, 0x104, 4);
    let op = mk_op(&mut fd, 2, OpCode::CPUI_INT_LEFT);
    wire(&mut fd, op, v, 0);
    wire(&mut fd, op, amt, 1);
    assert_eq!(RuleTrivialShift.apply_op(op, &mut fd), 0);

    // non-trivial (val < 32) -> 0
    let v2 = make_input(&mut fd, 0x200, 4);
    let small = fd.new_constant(4, 3);
    let op2 = mk_op(&mut fd, 2, OpCode::CPUI_INT_LEFT);
    wire(&mut fd, op2, v2, 0);
    wire(&mut fd, op2, small, 1);
    assert_eq!(RuleTrivialShift.apply_op(op2, &mut fd), 0);

    // oversized SRIGHT (cant predict signbit) -> 0
    let v3 = make_input(&mut fd, 0x300, 4);
    let big = fd.new_constant(4, 40);
    let op3 = mk_op(&mut fd, 2, OpCode::CPUI_INT_SRIGHT);
    wire(&mut fd, op3, v3, 0);
    wire(&mut fd, op3, big, 1);
    assert_eq!(RuleTrivialShift.apply_op(op3, &mut fd), 0);
}

// --- RuleIdentityEl ---------------------------------------------------

#[test]
fn identity_add_zero_is_copy() {
    let mut fd = build_fd();
    let v = make_input(&mut fd, 0x100, 4);
    let z = fd.new_constant(4, 0);
    let op = mk_op(&mut fd, 2, OpCode::CPUI_INT_ADD);
    wire(&mut fd, op, v, 0);
    wire(&mut fd, op, z, 1);
    assert_eq!(RuleIdentityEl.apply_op(op, &mut fd), 1);
    assert_eq!(op_code(&fd, op), OpCode::CPUI_COPY);
    assert_eq!(op_num_input(&fd, op), 1);
    assert_eq!(op_in(&fd, op, 0), Some(v));
}

#[test]
fn identity_mult_one_is_copy_and_mult_zero_drops_slot0() {
    let mut fd = build_fd();
    // V * 1 => COPY(V) (removes slot 1)
    let v = make_input(&mut fd, 0x100, 4);
    let one = fd.new_constant(4, 1);
    let op = mk_op(&mut fd, 2, OpCode::CPUI_INT_MULT);
    wire(&mut fd, op, v, 0);
    wire(&mut fd, op, one, 1);
    assert_eq!(RuleIdentityEl.apply_op(op, &mut fd), 1);
    assert_eq!(op_code(&fd, op), OpCode::CPUI_COPY);
    assert_eq!(op_in(&fd, op, 0), Some(v));

    // V * 0 => COPY of the (zero) constant: removes slot 0, leaving the const.
    let v2 = make_input(&mut fd, 0x200, 4);
    let zero = fd.new_constant(4, 0);
    let op2 = mk_op(&mut fd, 2, OpCode::CPUI_INT_MULT);
    wire(&mut fd, op2, v2, 0);
    wire(&mut fd, op2, zero, 1);
    assert_eq!(RuleIdentityEl.apply_op(op2, &mut fd), 1);
    assert_eq!(op_code(&fd, op2), OpCode::CPUI_COPY);
    assert_eq!(op_num_input(&fd, op2), 1);
    let rem = op_in(&fd, op2, 0).unwrap();
    assert_eq!(rem, zero);
}

#[test]
fn identity_mult_other_const_rejected() {
    let mut fd = build_fd();
    let v = make_input(&mut fd, 0x100, 4);
    let c = fd.new_constant(4, 7);
    let op = mk_op(&mut fd, 2, OpCode::CPUI_INT_MULT);
    wire(&mut fd, op, v, 0);
    wire(&mut fd, op, c, 1);
    assert_eq!(RuleIdentityEl.apply_op(op, &mut fd), 0);
    // non-constant second operand -> 0
    let nc = make_input(&mut fd, 0x200, 4);
    let op2 = mk_op(&mut fd, 2, OpCode::CPUI_INT_ADD);
    wire(&mut fd, op2, v, 0);
    wire(&mut fd, op2, nc, 1);
    assert_eq!(RuleIdentityEl.apply_op(op2, &mut fd), 0);
}

// --- RuleCarryElim ----------------------------------------------------

#[test]
fn carry_elim_zero_constant_is_false_copy() {
    let mut fd = build_fd();
    let v = make_input(&mut fd, 0x100, 4);
    let z = fd.new_constant(4, 0);
    let op = mk_op(&mut fd, 2, OpCode::CPUI_INT_CARRY);
    wire(&mut fd, op, v, 0);
    wire(&mut fd, op, z, 1);
    assert_eq!(RuleCarryElim.apply_op(op, &mut fd), 1);
    assert_eq!(op_code(&fd, op), OpCode::CPUI_COPY);
    assert_eq!(op_num_input(&fd, op), 1);
    let in0 = op_in(&fd, op, 0).unwrap();
    assert!(vn_is_constant(&fd, in0));
    assert_eq!(vn_offset(&fd, in0), 0);
}

#[test]
fn carry_elim_nonzero_const_becomes_lessequal() {
    // carry(V, c) with c != 0 => (-c) <= V : INT_LESSEQUAL, slot0 = const(-c),
    // slot1 = V.
    let mut fd = build_fd();
    let v = make_input(&mut fd, 0x100, 4);
    let c = fd.new_constant(4, 5);
    let op = mk_op(&mut fd, 2, OpCode::CPUI_INT_CARRY);
    wire(&mut fd, op, v, 0);
    wire(&mut fd, op, c, 1);
    assert_eq!(RuleCarryElim.apply_op(op, &mut fd), 1);
    assert_eq!(op_code(&fd, op), OpCode::CPUI_INT_LESSEQUAL);
    assert_eq!(op_in(&fd, op, 1), Some(v));
    let in0 = op_in(&fd, op, 0).unwrap();
    assert!(vn_is_constant(&fd, in0));
    // (-5) & mask(4 bytes) == 0xFFFFFFFB
    assert_eq!(vn_offset(&fd, in0), (5u64.wrapping_neg()) & calc_mask(4));
}

#[test]
fn carry_elim_guards() {
    let mut fd = build_fd();
    // non-constant second operand -> 0
    let v = make_input(&mut fd, 0x100, 4);
    let nc = make_input(&mut fd, 0x104, 4);
    let op = mk_op(&mut fd, 2, OpCode::CPUI_INT_CARRY);
    wire(&mut fd, op, v, 0);
    wire(&mut fd, op, nc, 1);
    assert_eq!(RuleCarryElim.apply_op(op, &mut fd), 0);
}

// --- Rule2Comp2Mult ---------------------------------------------------

#[test]
fn two_comp_to_mult() {
    let mut fd = build_fd();
    let v = make_input(&mut fd, 0x100, 4);
    let op = mk_op(&mut fd, 1, OpCode::CPUI_INT_2COMP);
    wire(&mut fd, op, v, 0);
    assert_eq!(Rule2Comp2Mult.apply_op(op, &mut fd), 1);
    assert_eq!(op_code(&fd, op), OpCode::CPUI_INT_MULT);
    assert_eq!(op_num_input(&fd, op), 2);
    assert_eq!(op_in(&fd, op, 0), Some(v));
    let neg = op_in(&fd, op, 1).unwrap();
    assert!(vn_is_constant(&fd, neg));
    assert_eq!(vn_offset(&fd, neg), calc_mask(4)); // -1 == all ones
}

// --- RuleSub2Add ------------------------------------------------------

#[test]
fn sub_to_add_inserts_mult_neg_one() {
    for high in [false, true] {
        let mut fd = build_fd();
        let a = make_input(&mut fd, 0x100, 4);
        let b = make_input(&mut fd, 0x104, 4);
        let op = mk_op(&mut fd, 2, OpCode::CPUI_INT_SUB);
        wire(&mut fd, op, a, 0);
        wire(&mut fd, op, b, 1);
        if high {
            fd.set_high_level();
        }
        assert_eq!(RuleSub2Add.apply_op(op, &mut fd), 1);
        assert_eq!(op_code(&fd, op), OpCode::CPUI_INT_ADD);
        assert_eq!(op_in(&fd, op, 0), Some(a));
        let newvn = op_in(&fd, op, 1).unwrap();
        assert_eq!(fd.vbank().get(newvn).unwrap().get_high().is_some(), high);
        let multop = vn_def(&fd, newvn).unwrap();
        assert_eq!(op_code(&fd, multop), OpCode::CPUI_INT_MULT);
        assert_eq!(op_in(&fd, multop, 0), Some(b));
        let negone = op_in(&fd, multop, 1).unwrap();
        assert!(vn_is_constant(&fd, negone));
        assert_eq!(vn_offset(&fd, negone), calc_mask(4));
    }
}

// --- RuleXorCollapse --------------------------------------------------

#[test]
fn xor_collapse_const_const_folds() {
    // (V ^ c) == d  =>  V == (c^d)
    let mut fd = build_fd();
    let v = make_input(&mut fd, 0x100, 4);
    let c = fd.new_constant(4, 0x0f);
    let (_xorop, xorout) = def_op(&mut fd, OpCode::CPUI_INT_XOR, &[v, c], 4);
    let d = fd.new_constant(4, 0x33);
    let op = mk_op(&mut fd, 2, OpCode::CPUI_INT_EQUAL);
    wire(&mut fd, op, xorout, 0);
    wire(&mut fd, op, d, 1);
    assert_eq!(RuleXorCollapse.apply_op(op, &mut fd), 1);
    // slot0 becomes V, slot1 becomes constant 0x0f ^ 0x33.
    assert_eq!(op_in(&fd, op, 0), Some(v));
    let folded = op_in(&fd, op, 1).unwrap();
    assert!(vn_is_constant(&fd, folded));
    assert_eq!(vn_offset(&fd, folded), 0x0f ^ 0x33);
}

#[test]
fn xor_collapse_var_with_zero_moves_term() {
    // (V ^ W) == 0  =>  V == W
    let mut fd = build_fd();
    let v = make_input(&mut fd, 0x100, 4);
    let w = make_input(&mut fd, 0x104, 4);
    let (_xorop, xorout) = def_op(&mut fd, OpCode::CPUI_INT_XOR, &[v, w], 4);
    let zero = fd.new_constant(4, 0);
    let op = mk_op(&mut fd, 2, OpCode::CPUI_INT_EQUAL);
    wire(&mut fd, op, xorout, 0);
    wire(&mut fd, op, zero, 1);
    assert_eq!(RuleXorCollapse.apply_op(op, &mut fd), 1);
    // slot1 := W (the xor's second term), slot0 := V (the xor's first term)
    assert_eq!(op_in(&fd, op, 0), Some(v));
    assert_eq!(op_in(&fd, op, 1), Some(w));
}

#[test]
fn xor_collapse_guards() {
    let mut fd = build_fd();
    // second operand not constant -> 0
    let v = make_input(&mut fd, 0x100, 4);
    let c = fd.new_constant(4, 0x0f);
    let (_xorop, xorout) = def_op(&mut fd, OpCode::CPUI_INT_XOR, &[v, c], 4);
    let dvar = make_input(&mut fd, 0x200, 4);
    let op = mk_op(&mut fd, 2, OpCode::CPUI_INT_EQUAL);
    wire(&mut fd, op, xorout, 0);
    wire(&mut fd, op, dvar, 1);
    assert_eq!(RuleXorCollapse.apply_op(op, &mut fd), 0);

    // slot0 not defined by an XOR -> 0
    let other = make_input(&mut fd, 0x300, 4);
    let d = fd.new_constant(4, 1);
    let op2 = mk_op(&mut fd, 2, OpCode::CPUI_INT_EQUAL);
    wire(&mut fd, op2, other, 0);
    wire(&mut fd, op2, d, 1);
    assert_eq!(RuleXorCollapse.apply_op(op2, &mut fd), 0);
}

// --- RuleAddMultCollapse ---------------------------------------------

#[test]
fn add_mult_collapse_nested_add_constants() {
    // ((V + c1) + c0) => V + (c0+c1)
    let mut fd = build_fd();
    let v = make_input(&mut fd, 0x100, 4);
    let c1 = fd.new_constant(4, 10);
    let (_inner, innerout) = def_op(&mut fd, OpCode::CPUI_INT_ADD, &[v, c1], 4);
    let c0 = fd.new_constant(4, 20);
    let op = mk_op(&mut fd, 2, OpCode::CPUI_INT_ADD);
    wire(&mut fd, op, innerout, 0);
    wire(&mut fd, op, c0, 1);
    assert_eq!(RuleAddMultCollapse.apply_op(op, &mut fd), 1);
    // slot0 := V (sub2), slot1 := const(30)
    assert_eq!(op_in(&fd, op, 0), Some(v));
    let folded = op_in(&fd, op, 1).unwrap();
    assert!(vn_is_constant(&fd, folded));
    assert_eq!(vn_offset(&fd, folded), 30);
}

#[test]
fn add_mult_collapse_nested_mult_constants() {
    // ((V * c1) * c0) => V * (c0*c1)
    let mut fd = build_fd();
    let v = make_input(&mut fd, 0x100, 4);
    let c1 = fd.new_constant(4, 3);
    let (_inner, innerout) = def_op(&mut fd, OpCode::CPUI_INT_MULT, &[v, c1], 4);
    let c0 = fd.new_constant(4, 7);
    let op = mk_op(&mut fd, 2, OpCode::CPUI_INT_MULT);
    wire(&mut fd, op, innerout, 0);
    wire(&mut fd, op, c0, 1);
    assert_eq!(RuleAddMultCollapse.apply_op(op, &mut fd), 1);
    assert_eq!(op_in(&fd, op, 0), Some(v));
    let folded = op_in(&fd, op, 1).unwrap();
    assert_eq!(vn_offset(&fd, folded), 21);
}

#[test]
fn add_mult_collapse_guards() {
    let mut fd = build_fd();
    // second operand not constant -> 0
    let v = make_input(&mut fd, 0x100, 4);
    let nc = make_input(&mut fd, 0x104, 4);
    let op = mk_op(&mut fd, 2, OpCode::CPUI_INT_ADD);
    wire(&mut fd, op, v, 0);
    wire(&mut fd, op, nc, 1);
    assert_eq!(RuleAddMultCollapse.apply_op(op, &mut fd), 0);

    // inner op is a different opcode -> 0
    let c1 = fd.new_constant(4, 10);
    let (_inner, innerout) = def_op(&mut fd, OpCode::CPUI_INT_MULT, &[v, c1], 4);
    let c0 = fd.new_constant(4, 20);
    let op2 = mk_op(&mut fd, 2, OpCode::CPUI_INT_ADD); // ADD over a MULT sub
    wire(&mut fd, op2, innerout, 0);
    wire(&mut fd, op2, c0, 1);
    assert_eq!(RuleAddMultCollapse.apply_op(op2, &mut fd), 0);
}

// --- RuleShift2Mult ---------------------------------------------------

#[test]
fn shift2mult_feeding_arithmetic() {
    // (V << 2) feeding an INT_ADD => V * 4
    let mut fd = build_fd();
    let v = make_input(&mut fd, 0x100, 4);
    let two = fd.new_constant(4, 2);
    let (shiftop, shiftout) = def_op(&mut fd, OpCode::CPUI_INT_LEFT, &[v, two], 4);
    // descendant arithmetic op that reads shiftout
    let other = make_input(&mut fd, 0x200, 4);
    let _arith = def_op(&mut fd, OpCode::CPUI_INT_ADD, &[shiftout, other], 4);
    assert_eq!(RuleShift2Mult.apply_op(shiftop, &mut fd), 1);
    assert_eq!(op_code(&fd, shiftop), OpCode::CPUI_INT_MULT);
    let c = op_in(&fd, shiftop, 1).unwrap();
    assert!(vn_is_constant(&fd, c));
    assert_eq!(vn_offset(&fd, c), 1u64 << 2); // 4
}

#[test]
fn shift2mult_no_arithmetic_rejected_and_oversized_rejected() {
    let mut fd = build_fd();
    // No arithmetic descendant, def of in0 is none => flag stays 0 => reject.
    let v = make_input(&mut fd, 0x100, 4);
    let two = fd.new_constant(4, 2);
    let (shiftop, _shiftout) = def_op(&mut fd, OpCode::CPUI_INT_LEFT, &[v, two], 4);
    assert_eq!(RuleShift2Mult.apply_op(shiftop, &mut fd), 0);
    assert_eq!(op_code(&fd, shiftop), OpCode::CPUI_INT_LEFT);

    // val >= 32 -> reject regardless of arithmetic.
    let v2 = make_input(&mut fd, 0x300, 4);
    let big = fd.new_constant(4, 40);
    let (shiftop2, sout2) = def_op(&mut fd, OpCode::CPUI_INT_LEFT, &[v2, big], 4);
    let o2 = make_input(&mut fd, 0x400, 4);
    let _arith2 = def_op(&mut fd, OpCode::CPUI_INT_ADD, &[sout2, o2], 4);
    assert_eq!(RuleShift2Mult.apply_op(shiftop2, &mut fd), 0);
}

// --- RuleSborrow / RuleScarry trivial cases (the ported half) ---------

#[test]
fn sborrow_trivial_zero_is_false() {
    let mut fd = build_fd();
    let v = make_input(&mut fd, 0x100, 4);
    let z = fd.new_constant(4, 0);
    let op = mk_op(&mut fd, 2, OpCode::CPUI_INT_SBORROW);
    wire(&mut fd, op, v, 0);
    wire(&mut fd, op, z, 1);
    assert_eq!(RuleSborrow.apply_op(op, &mut fd), 1);
    assert_eq!(op_code(&fd, op), OpCode::CPUI_COPY);
    assert_eq!(op_num_input(&fd, op), 1);
    let in0 = op_in(&fd, op, 0).unwrap();
    assert!(vn_is_constant(&fd, in0) && vn_offset(&fd, in0) == 0);
    // non-trivial sborrow(a,b) with no comparison consuming the output ->
    // the descend-walk finds no INT_EQUAL/INT_NOTEQUAL descendant -> 0.
    let a = make_input(&mut fd, 0x200, 4);
    let b = make_input(&mut fd, 0x204, 4);
    let (op2, _sout) = def_op(&mut fd, OpCode::CPUI_INT_SBORROW, &[a, b], 1);
    assert_eq!(RuleSborrow.apply_op(op2, &mut fd), 0);
}

#[test]
fn scarry_trivial_zero_is_false() {
    let mut fd = build_fd();
    let v = make_input(&mut fd, 0x100, 4);
    let z = fd.new_constant(4, 0);
    let op = mk_op(&mut fd, 2, OpCode::CPUI_INT_SCARRY);
    wire(&mut fd, op, v, 0);
    wire(&mut fd, op, z, 1);
    assert_eq!(RuleScarry.apply_op(op, &mut fd), 1);
    assert_eq!(op_code(&fd, op), OpCode::CPUI_COPY);
    assert_eq!(op_num_input(&fd, op), 1);
    // also fires when the *first* operand is the zero constant
    let z2 = fd.new_constant(4, 0);
    let w = make_input(&mut fd, 0x200, 4);
    let op2 = mk_op(&mut fd, 2, OpCode::CPUI_INT_SCARRY);
    wire(&mut fd, op2, z2, 0);
    wire(&mut fd, op2, w, 1);
    assert_eq!(RuleScarry.apply_op(op2, &mut fd), 1);
}

#[test]
fn sborrow_notequal_folds_to_sless() {
    // `sborrow(a,b) != ((a + b*-1) s< 0)  =>  a s< b`  (RuleSborrow, the
    // NOTEQUAL/zside==0 branch).  Builds the canonical lifted form and
    // checks the consuming INT_NOTEQUAL is rewritten in place to INT_SLESS(a,b).
    let mut fd = build_fd();
    let a = make_input(&mut fd, 0x200, 4);
    let b = make_input(&mut fd, 0x204, 4);
    // a - b  ==  a + b*(-1)
    let neg1 = fd.new_constant(4, 0xffffffff);
    let (_multop, negb) = def_op(&mut fd, OpCode::CPUI_INT_MULT, &[b, neg1], 4);
    let (_addop, sub) = def_op(&mut fd, OpCode::CPUI_INT_ADD, &[a, negb], 4);
    // (a - b) s< 0
    let zero = fd.new_constant(4, 0);
    let (_slessop, slessout) = def_op(&mut fd, OpCode::CPUI_INT_SLESS, &[sub, zero], 1);
    // sborrow(a,b)
    let (sbop, sbout) = def_op(&mut fd, OpCode::CPUI_INT_SBORROW, &[a, b], 1);
    // sborrow(a,b) != ((a-b) s< 0)
    let cmp = mk_op(&mut fd, 2, OpCode::CPUI_INT_NOTEQUAL);
    wire(&mut fd, cmp, sbout, 0);
    wire(&mut fd, cmp, slessout, 1);

    assert_eq!(RuleSborrow.apply_op(sbop, &mut fd), 1);
    // The NOTEQUAL was rewritten in place to a simple INT_SLESS(a,b).
    assert_eq!(op_code(&fd, cmp), OpCode::CPUI_INT_SLESS);
    assert_eq!(op_in(&fd, cmp, 0).unwrap(), a);
    assert_eq!(op_in(&fd, cmp, 1).unwrap(), b);
}

// --- RuleTestSign -----------------------------------------------------

#[test]
fn test_sign_srights_to_signed_compare() {
    // (V s>> 31) != 0  =>  V s< 0  (sgn = 1 from offset 0, complemented by
    // NOTEQUAL to -1 => SLESS path).
    let mut fd = build_fd();
    let v = make_input(&mut fd, 0x100, 4);
    let shamt = fd.new_constant(4, 31);
    let (srop, srout) = def_op(&mut fd, OpCode::CPUI_INT_SRIGHT, &[v, shamt], 4);
    // a comparison (srout != 0)
    let zero = fd.new_constant(4, 0);
    let cmp = mk_op(&mut fd, 2, OpCode::CPUI_INT_NOTEQUAL);
    wire(&mut fd, cmp, srout, 0);
    wire(&mut fd, cmp, zero, 1);
    assert_eq!(RuleTestSign.apply_op(srop, &mut fd), 1);
    // offset 0 => sgn=1, NOTEQUAL complements to -1 => SLESS: in0=V, in1=0.
    assert_eq!(op_code(&fd, cmp), OpCode::CPUI_INT_SLESS);
    assert_eq!(op_in(&fd, cmp, 0), Some(v));
    let in1 = op_in(&fd, cmp, 1).unwrap();
    assert!(vn_is_constant(&fd, in1) && vn_offset(&fd, in1) == 0);
}

#[test]
fn test_sign_wrong_shift_amount_rejected() {
    let mut fd = build_fd();
    let v = make_input(&mut fd, 0x100, 4);
    let shamt = fd.new_constant(4, 16); // not 8*size-1
    let (srop, srout) = def_op(&mut fd, OpCode::CPUI_INT_SRIGHT, &[v, shamt], 4);
    let zero = fd.new_constant(4, 0);
    let cmp = mk_op(&mut fd, 2, OpCode::CPUI_INT_NOTEQUAL);
    wire(&mut fd, cmp, srout, 0);
    wire(&mut fd, cmp, zero, 1);
    assert_eq!(RuleTestSign.apply_op(srop, &mut fd), 0);
}

// --- RuleBoolZext (the EQUAL/NOTEQUAL branch is fully portable) --------

#[test]
fn bool_zext_compare_extended_bool() {
    // (zext(B) * -1) == -1  =>  B == 1
    let mut fd = build_fd();
    let b_in0 = make_input(&mut fd, 0x100, 1);
    let b_in1 = make_input(&mut fd, 0x101, 1);
    // boolean value: output of a BOOL_AND
    let (_aop, boolvn) = def_op(&mut fd, OpCode::CPUI_BOOL_AND, &[b_in0, b_in1], 1);
    // zext(B) : 4 bytes
    let (_zop, zout) = def_op(&mut fd, OpCode::CPUI_INT_ZEXT, &[boolvn], 4);
    // mult by -1 (mask of 4 bytes)
    let negone = fd.new_constant(4, calc_mask(4));
    let (_mop, mout) = def_op(&mut fd, OpCode::CPUI_INT_MULT, &[zout, negone], 4);
    // compare == -1
    let minus1 = fd.new_constant(4, calc_mask(4));
    let cmp = mk_op(&mut fd, 2, OpCode::CPUI_INT_EQUAL);
    wire(&mut fd, cmp, mout, 0);
    wire(&mut fd, cmp, minus1, 1);

    // Apply on the ZEXT op.
    let zop = vn_def(&fd, zout).unwrap();
    assert_eq!(RuleBoolZext.apply_op(zop, &mut fd), 1);
    // comparison's slot0 becomes the unextended boolean, slot1 the constant 1.
    assert_eq!(op_in(&fd, cmp, 0), Some(boolvn));
    let one = op_in(&fd, cmp, 1).unwrap();
    assert!(vn_is_constant(&fd, one));
    assert_eq!(vn_offset(&fd, one), 1);
}

// --- RulePropagateCopy ------------------------------------------------

#[test]
fn propagate_copy_replaces_input() {
    // op reads X where X = COPY(Y); propagate Y into op.
    let mut fd = build_fd();
    let y = make_input(&mut fd, 0x100, 4); // heritage-known input
    let (_copyop, x) = def_op(&mut fd, OpCode::CPUI_COPY, &[y], 4);
    let other = make_input(&mut fd, 0x200, 4);
    // a non-marker consumer (INT_ADD) reading x in slot 0
    let op = mk_op(&mut fd, 2, OpCode::CPUI_INT_ADD);
    wire(&mut fd, op, x, 0);
    wire(&mut fd, op, other, 1);
    assert_eq!(RulePropagateCopy.apply_op(op, &mut fd), 1);
    assert_eq!(op_in(&fd, op, 0), Some(y));
}

#[test]
fn propagate_copy_records_machine_destinations_without_load_address_sources() {
    let mut fd = build_fd();
    let pointer = make_input(&mut fd, 0x100, 8);
    let memory = ram(&fd);
    let space = fd.new_varnode_space(&memory);
    let (_, loaded) = def_op(&mut fd, OpCode::CPUI_LOAD, &[space, pointer], 4);
    for offset in [0x80, 0x84] {
        let copyop = mk_op(&mut fd, 1, OpCode::CPUI_COPY);
        let copied = fd
            .new_varnode_out(4, &Address::new(memory.clone(), offset), copyop)
            .unwrap();
        wire(&mut fd, copyop, loaded, 0);
        let other = make_input(&mut fd, 0x200 + offset, 4);
        let consumer = mk_op(&mut fd, 2, OpCode::CPUI_INT_ADD);
        wire(&mut fd, consumer, copied, 0);
        wire(&mut fd, consumer, other, 1);
        assert_eq!(RulePropagateCopy.apply_op(consumer, &mut fd), 1);
        assert_eq!(op_in(&fd, consumer, 0), Some(loaded));
    }
    let sources = fd.unlace_storage_sources(loaded);
    assert_eq!(sources.len(), 2);
    assert_eq!(sources[0].address.get_offset(), 0x80);
    assert_eq!(sources[1].address.get_offset(), 0x84);
    assert!(fd.unlace_storage_sources(pointer).is_empty());
}

#[test]
fn propagate_copy_skips_non_written_and_non_copy() {
    let mut fd = build_fd();
    // input not written -> skip; defined-but-not-copy -> skip.
    let a = make_input(&mut fd, 0x100, 4);
    let b = make_input(&mut fd, 0x104, 4);
    let (_addop, addout) = def_op(&mut fd, OpCode::CPUI_INT_ADD, &[a, b], 4);
    let c = make_input(&mut fd, 0x200, 4);
    let op = mk_op(&mut fd, 2, OpCode::CPUI_INT_MULT);
    wire(&mut fd, op, addout, 0); // written by INT_ADD, not COPY
    wire(&mut fd, op, c, 1); // not written
    assert_eq!(RulePropagateCopy.apply_op(op, &mut fd), 0);
    assert!(fd.unlace_storage_sources(addout).is_empty());
    assert!(fd.unlace_storage_sources(a).is_empty());
    assert!(fd.unlace_storage_sources(b).is_empty());
}

#[test]
fn propagate_copy_preserves_partial_global_store_for_markers() {
    use crate::dtype::{Datatype, type_metatype};
    use crate::varnode::varnode_flags;
    for (persistent, meta, marker, expected) in [
        (true, type_metatype::TYPE_PARTIALSTRUCT, true, 0),
        (true, type_metatype::TYPE_ARRAY, true, 0),
        (false, type_metatype::TYPE_PARTIALSTRUCT, true, 1),
        (true, type_metatype::TYPE_UINT, true, 1),
        (true, type_metatype::TYPE_STRUCT, true, 1),
        (true, type_metatype::TYPE_PARTIALSTRUCT, false, 1),
    ] {
        let mut fd = build_fd();
        let input = make_input(&mut fd, 0x100, 8);
        let (_, stored) = def_op(&mut fd, OpCode::CPUI_COPY, &[input], 8);
        let v = fd.vbank_mut().get_mut(stored).unwrap();
        if persistent {
            v.set_flags_pub(varnode_flags::persist);
        }
        v.update_type_locked(Rc::new(Datatype::new(8, meta)), true, true);
        let consumer = if marker {
            let iop = fd.new_constant(8, 0);
            let (op, _) = def_op(&mut fd, OpCode::CPUI_INDIRECT, &[stored, iop], 8);
            op
        } else {
            let zero = fd.new_constant(8, 0);
            let (op, _) = def_op(&mut fd, OpCode::CPUI_INT_ADD, &[stored, zero], 8);
            op
        };
        assert_eq!(RulePropagateCopy.apply_op(consumer, &mut fd), expected);
        assert_eq!(
            op_in(&fd, consumer, 0),
            Some(if expected == 0 { stored } else { input })
        );
    }
}

#[test]
fn aggregate_load_store_needs_global_alias_ordering() {
    use crate::dtype::{Datatype, type_metatype};
    use crate::varnode::varnode_flags;
    for (level, expected) in [
        (crate::indexaliasguard::LEVEL_OFF, false),
        (crate::indexaliasguard::LEVEL_LOAD, false),
        (crate::indexaliasguard::LEVEL_FULL, false),
        (crate::indexaliasguard::LEVEL_GLOBAL, true),
    ] {
        let manage = build_manager();
        let mut glb = ArchContext::new(manage);
        glb.unlace_options
            .set(crate::indexaliasguard::IndexAliasGuard(level));
        let glb = Rc::new(glb);
        let memory = Rc::clone(glb.manage().get_space_by_name("ram").unwrap());
        let mut data = Funcdata::new(
            "f",
            "f",
            glb,
            Address::new(memory.clone(), 0x1000),
            0x10000000,
            0x40,
        )
        .unwrap();
        let load = data.new_op(2, Address::new(memory.clone(), 0x1000));
        data.op_set_opcode_code(load, OpCode::CPUI_LOAD);
        let source = data.new_unique_out(8, load).unwrap();
        let copy = data.new_op(1, Address::new(memory.clone(), 0x1004));
        data.op_set_opcode_code(copy, OpCode::CPUI_COPY);
        let output = data
            .new_varnode_out(8, &Address::new(memory, 0x2000), copy)
            .unwrap();
        let v = data.vbank_mut().get_mut(output).unwrap();
        v.set_flags_pub(varnode_flags::persist);
        v.update_type_locked(
            Rc::new(Datatype::new(8, type_metatype::TYPE_PARTIALSTRUCT)),
            true,
            true,
        );
        assert_eq!(
            crate::globalfieldstore::keeps_store(&data, output, source),
            expected
        );
    }
}

// --- registration ordering -------------------------------------------

#[test]
fn specs_are_in_cpp_definition_order() {
    let specs = specs();
    assert_eq!(specs.len(), 22);
    // Spot-check the first, a middle, and the last by exercising the ctor
    // and the rule's getOpList (a cheap structural identity).
    let first = (specs[0].ctor)();
    assert_eq!(
        first.get_op_list(),
        vec![OpCode::CPUI_BOOL_AND, OpCode::CPUI_BOOL_OR]
    );
    let last = (specs[21].ctor)();
    assert_eq!(
        last.get_op_list(),
        vec![OpCode::CPUI_INT_ADD, OpCode::CPUI_INT_MULT]
    );
    // RuleCollapseConstants (index 14) applies to all opcodes (default list).
    let collapse = (specs[14].ctor)();
    assert!(collapse.get_op_list().len() > 2);
}

// =====================================================================
// VERIFIER adversarial tests (item w5-s3-rules-3) — target the fully
// ported rules whose rewrites are most fragile (slot selection, sgn
// complement, the 1-i spacebase branch, the PIECE materialization).
// =====================================================================

/// RuleBoolZext, the INT_AND logic branch: `(zext(B1)*-1) & (zext(B2)*-1)`
/// must rewrite to `zext(B1 && B2) * -1`.  This is the most complex
/// multi-op rewrite in the batch; it exercises the `multop2` slot-selection
/// (`multop1 == in0.def ? in1 : in0`) and the coeff==calc_mask(size) reuse.
#[test]
fn w5_s3_rules_3_bool_zext_and_branch_rewrites_to_zext_booland() {
    let mut fd = build_fd();
    // B1 = BOOL_AND(a,b) ; B2 = BOOL_OR(c,d)  (both boolean-by-opcode)
    let a = make_input(&mut fd, 0x100, 1);
    let b = make_input(&mut fd, 0x101, 1);
    let c = make_input(&mut fd, 0x102, 1);
    let d = make_input(&mut fd, 0x103, 1);
    let (_b1op, b1) = def_op(&mut fd, OpCode::CPUI_BOOL_AND, &[a, b], 1);
    let (_b2op, b2) = def_op(&mut fd, OpCode::CPUI_BOOL_OR, &[c, d], 1);
    // zext(B1), zext(B2) : 4 bytes
    let (_z1op, z1) = def_op(&mut fd, OpCode::CPUI_INT_ZEXT, &[b1], 4);
    let (_z2op, z2) = def_op(&mut fd, OpCode::CPUI_INT_ZEXT, &[b2], 4);
    // m1 = zext(B1) * -1 ; m2 = zext(B2) * -1
    let neg1a = fd.new_constant(4, calc_mask(4));
    let neg1b = fd.new_constant(4, calc_mask(4));
    let (_m1op, m1) = def_op(&mut fd, OpCode::CPUI_INT_MULT, &[z1, neg1a], 4);
    let (_m2op, m2) = def_op(&mut fd, OpCode::CPUI_INT_MULT, &[z2, neg1b], 4);
    // actionop = m1 & m2 (multop1 = m1's def is in slot0 of the AND here)
    let (andop, _andout) = def_op(&mut fd, OpCode::CPUI_INT_AND, &[m1, m2], 4);

    // apply on the ZEXT(B1) op (the rule's entry opcode is INT_ZEXT)
    let z1op = vn_def(&fd, z1).unwrap();
    assert_eq!(RuleBoolZext.apply_op(z1op, &mut fd), 1);

    // The AND op is now INT_MULT(newzext, -1); newzext = ZEXT(BOOL_AND(B1,B2)).
    assert_eq!(op_code(&fd, andop), OpCode::CPUI_INT_MULT);
    let newzout = op_in(&fd, andop, 0).unwrap();
    let coeff = op_in(&fd, andop, 1).unwrap();
    assert!(vn_is_constant(&fd, coeff));
    assert_eq!(vn_offset(&fd, coeff), calc_mask(4));
    let newzext = vn_def(&fd, newzout).unwrap();
    assert_eq!(op_code(&fd, newzext), OpCode::CPUI_INT_ZEXT);
    let boolres = op_in(&fd, newzext, 0).unwrap();
    let booland = vn_def(&fd, boolres).unwrap();
    // INT_AND maps to BOOL_AND; operands are the *unextended* booleans B1,B2.
    assert_eq!(op_code(&fd, booland), OpCode::CPUI_BOOL_AND);
    assert_eq!(op_in(&fd, booland, 0), Some(b1));
    assert_eq!(op_in(&fd, booland, 1), Some(b2));
}

/// RuleTestSign, the sgn == -1 path: `(V s>> 31) == -1` (INT_EQUAL, offset
/// == calc_mask) gives sgn=-1, not complemented (EQUAL), so the rewrite is
/// `V s< 0` (SLESS, in0=V, in1=0).  Distinct from the in-file NOTEQUAL/0
/// case which goes through the complement to the same SLESS — here we reach
/// SLESS via the raw -1 offset without complement.
#[test]
fn w5_s3_rules_3_test_sign_minus_one_equal_to_sless() {
    let mut fd = build_fd();
    let v = make_input(&mut fd, 0x100, 4);
    let shamt = fd.new_constant(4, 31);
    let (srop, srout) = def_op(&mut fd, OpCode::CPUI_INT_SRIGHT, &[v, shamt], 4);
    // compare: srout == -1  (offset == calc_mask(4))
    let minus1 = fd.new_constant(4, calc_mask(4));
    let cmp = mk_op(&mut fd, 2, OpCode::CPUI_INT_EQUAL);
    wire(&mut fd, cmp, srout, 0);
    wire(&mut fd, cmp, minus1, 1);
    assert_eq!(RuleTestSign.apply_op(srop, &mut fd), 1);
    // sgn = -1 (offset==mask), EQUAL does NOT complement => SLESS: in0=V,in1=0.
    assert_eq!(op_code(&fd, cmp), OpCode::CPUI_INT_SLESS);
    assert_eq!(op_in(&fd, cmp, 0), Some(v));
    let in1 = op_in(&fd, cmp, 1).unwrap();
    assert!(vn_is_constant(&fd, in1) && vn_offset(&fd, in1) == 0);
}

/// RuleTestSign, sgn == 1 with a NON-complementing EQUAL: `(V s>> 31) == 0`
/// gives sgn=1, EQUAL keeps it, so SLESSEQUAL with `0 <= V` (in0=0, in1=V).
/// This is the SLESSEQUAL arm, untouched by the in-file tests.
#[test]
fn w5_s3_rules_3_test_sign_zero_equal_to_slessequal() {
    let mut fd = build_fd();
    let v = make_input(&mut fd, 0x100, 4);
    let shamt = fd.new_constant(4, 31);
    let (srop, srout) = def_op(&mut fd, OpCode::CPUI_INT_SRIGHT, &[v, shamt], 4);
    let zero = fd.new_constant(4, 0);
    let cmp = mk_op(&mut fd, 2, OpCode::CPUI_INT_EQUAL);
    wire(&mut fd, cmp, srout, 0);
    wire(&mut fd, cmp, zero, 1);
    assert_eq!(RuleTestSign.apply_op(srop, &mut fd), 1);
    // sgn=1, EQUAL keeps sgn => SLESSEQUAL with in0=0, in1=V (0 s<= V).
    assert_eq!(op_code(&fd, cmp), OpCode::CPUI_INT_SLESSEQUAL);
    let in0 = op_in(&fd, cmp, 0).unwrap();
    assert!(vn_is_constant(&fd, in0) && vn_offset(&fd, in0) == 0);
    assert_eq!(op_in(&fd, cmp, 1), Some(v));
}

/// RuleAddMultCollapse 3-term branch must NOT fire when the base is not an
/// input spacebase (the `isSpacebase()&&isInput()` guard).  `make_input`
/// produces an input that is NOT a spacebase, so the `(stackbase + c1) +
/// other) + c0` shape with a plain base falls through the `for i` loop and
/// the rule returns 0 (no rewrite).  This pins the conservative side of the
/// spacebase guard (the fire side needs the spacebase flag, which is not
/// settable through the public API at W5 — its fire path is covered by the
/// nested-constant in-file tests and re-derived in the verdict).
#[test]
fn w5_s3_rules_3_addmult_three_term_requires_input_spacebase() {
    let mut fd = build_fd();
    let base = make_input(&mut fd, 0x200, 4); // input, but NOT spacebase
    let c1 = fd.new_constant(4, 0x10);
    let (_baseop, baseout) = def_op(&mut fd, OpCode::CPUI_INT_ADD, &[base, c1], 4);
    let other = make_input(&mut fd, 0x300, 4);
    // inner ADD: (base+c1) in slot0, other in slot1.  Non-constant c1 path
    // enters the `for i` loop; base is not a spacebase => no rewrite.
    let (_innerop, innerout) = def_op(&mut fd, OpCode::CPUI_INT_ADD, &[baseout, other], 4);
    let c0 = fd.new_constant(4, 0x07);
    let op = mk_op(&mut fd, 2, OpCode::CPUI_INT_ADD);
    wire(&mut fd, op, innerout, 0);
    wire(&mut fd, op, c0, 1);
    assert_eq!(RuleAddMultCollapse.apply_op(op, &mut fd), 0);
    // unchanged: still an INT_ADD with the inner sum in slot0 and c0 in slot1.
    assert_eq!(op_code(&fd, op), OpCode::CPUI_INT_ADD);
    assert_eq!(op_in(&fd, op, 0), Some(innerout));
}

/// RuleShiftPiece, the zero-extend tail (`concatsize < out*8`): build the
/// PIECE narrower than the output, so the rule inserts a NEW PIECE op and
/// rewrites the original op to ZEXT(newpiece).  `(zext(V) << 16) | zext(W)`
/// with V,W 1-byte each but the OR output 4 bytes: concatsize = 16 + 8 = 24
/// (since sa must equal 8*size(W) = 8, we use sa=8) < 32 => ZEXT tail.
#[test]
fn w5_s3_rules_3_shiftpiece_zext_tail() {
    let mut fd = build_fd();
    let v = make_input(&mut fd, 0x100, 1);
    let w = make_input(&mut fd, 0x102, 1);
    let (_zvop, zv) = def_op(&mut fd, OpCode::CPUI_INT_ZEXT, &[v], 4);
    let sa = fd.new_constant(4, 8); // sa == 8*size(W) == 8
    let (_shop, shout) = def_op(&mut fd, OpCode::CPUI_INT_LEFT, &[zv, sa], 4);
    let (_zwop, zw) = def_op(&mut fd, OpCode::CPUI_INT_ZEXT, &[w], 4);
    let op = mk_op(&mut fd, 2, OpCode::CPUI_INT_OR);
    wire(&mut fd, op, shout, 0);
    wire(&mut fd, op, zw, 1);
    let _out = fd.fd.new_unique_out(4, op).expect("newUniqueOut");

    assert_eq!(RuleShiftPiece.apply_op(op, &mut fd), 1);
    // concatsize = 8 + 8 = 16 < 32 => op becomes ZEXT(newpiece), where
    // newpiece = PIECE(V, W) of size 16/8 = 2 bytes.
    assert_eq!(op_code(&fd, op), OpCode::CPUI_INT_ZEXT);
    let pieceout = op_in(&fd, op, 0).unwrap();
    assert_eq!(vn_size(&fd, pieceout), 2);
    let pieceop = vn_def(&fd, pieceout).unwrap();
    assert_eq!(op_code(&fd, pieceop), OpCode::CPUI_PIECE);
    assert_eq!(op_in(&fd, pieceop, 0), Some(v));
    assert_eq!(op_in(&fd, pieceop, 1), Some(w));
}

/// RuleShiftPiece, the exact-size PIECE case: `(zext(V) << 16) | zext(W)`
/// with sizes lined up (sa == 8*size(W), concatsize == 8*out) rewrites the
/// op in place to `PIECE(V, W)`.  Exercises the swap branch (shiftop chosen
/// by which input is the INT_LEFT) and the concatsize == out*8 equal path.
#[test]
fn w5_s3_rules_3_shiftpiece_exact_piece() {
    let mut fd = build_fd();
    // V (2 bytes), W (2 bytes); out is 4 bytes.
    let v = make_input(&mut fd, 0x100, 2);
    let w = make_input(&mut fd, 0x102, 2);
    // zext(V) -> 4 bytes, then << 16
    let (_zvop, zv) = def_op(&mut fd, OpCode::CPUI_INT_ZEXT, &[v], 4);
    let sa = fd.new_constant(4, 16);
    let (_shop, shout) = def_op(&mut fd, OpCode::CPUI_INT_LEFT, &[zv, sa], 4);
    // zext(W) -> 4 bytes (the zextloop low piece)
    let (_zwop, zw) = def_op(&mut fd, OpCode::CPUI_INT_ZEXT, &[w], 4);
    // op = shout | zw  (shiftop in slot0, zextloop in slot1)
    let op = mk_op(&mut fd, 2, OpCode::CPUI_INT_OR);
    wire(&mut fd, op, shout, 0);
    wire(&mut fd, op, zw, 1);
    let out = fd.fd.new_unique_out(4, op).expect("newUniqueOut");
    let _ = out;

    assert_eq!(RuleShiftPiece.apply_op(op, &mut fd), 1);
    // concatsize == 16 + 8*2 == 32 == out*8 => in-place PIECE(V, W).
    assert_eq!(op_code(&fd, op), OpCode::CPUI_PIECE);
    assert_eq!(op_in(&fd, op, 0), Some(v));
    assert_eq!(op_in(&fd, op, 1), Some(w));
}

/// RuleShiftPiece swap branch: when the INT_LEFT is in slot1 (not slot0),
/// the rule swaps `shiftop`/`zextloop` so the shift is still found.  Mirror
/// of the exact-PIECE test with the operands transposed; result identical.
#[test]
fn w5_s3_rules_3_shiftpiece_swap_when_left_in_slot1() {
    let mut fd = build_fd();
    let v = make_input(&mut fd, 0x100, 2);
    let w = make_input(&mut fd, 0x102, 2);
    let (_zvop, zv) = def_op(&mut fd, OpCode::CPUI_INT_ZEXT, &[v], 4);
    let sa = fd.new_constant(4, 16);
    let (_shop, shout) = def_op(&mut fd, OpCode::CPUI_INT_LEFT, &[zv, sa], 4);
    let (_zwop, zw) = def_op(&mut fd, OpCode::CPUI_INT_ZEXT, &[w], 4);
    // op = zw | shout  (zextloop in slot0, shiftop in slot1 -> triggers swap)
    let op = mk_op(&mut fd, 2, OpCode::CPUI_INT_OR);
    wire(&mut fd, op, zw, 0);
    wire(&mut fd, op, shout, 1);
    let _out = fd.fd.new_unique_out(4, op).expect("newUniqueOut");

    assert_eq!(RuleShiftPiece.apply_op(op, &mut fd), 1);
    assert_eq!(op_code(&fd, op), OpCode::CPUI_PIECE);
    assert_eq!(op_in(&fd, op, 0), Some(v));
    assert_eq!(op_in(&fd, op, 1), Some(w));
}

// =====================================================================
// VERIFIER adversarial tests (item w10-sborrow-compare) — cover the
// branches the porter's single test did NOT: the EQUAL/SLESSEQUAL arm,
// the zside==0 vs zside==1 operand swaps, RuleScarry's newConstant(-#W)
// fold, and the AddExpression equivalence gate (false-fold guard).
// =====================================================================

/// RuleSborrow EQUAL arm, zside==1: `sborrow(a,b) == ((a + b*-1) s< 0) => b s<= a`.
/// SLESS(sub, zero): getIn(0)=sub non-const => check getIn(1)=zero matches 0
/// => zside=1, xvn=getIn(0)=sub.  EQUAL arm => INT_SLESSEQUAL; slot zside(1)=avn,
/// slot 1-zside(0)=bvn.
#[test]
fn w10_sborrow_equal_zside1_folds_to_slessequal() {
    let mut fd = build_fd();
    let a = make_input(&mut fd, 0x200, 4);
    let b = make_input(&mut fd, 0x204, 4);
    let neg1 = fd.new_constant(4, 0xffffffff);
    let (_multop, negb) = def_op(&mut fd, OpCode::CPUI_INT_MULT, &[b, neg1], 4);
    let (_addop, sub) = def_op(&mut fd, OpCode::CPUI_INT_ADD, &[a, negb], 4);
    let zero = fd.new_constant(4, 0);
    let (_slessop, slessout) = def_op(&mut fd, OpCode::CPUI_INT_SLESS, &[sub, zero], 1);
    let (sbop, sbout) = def_op(&mut fd, OpCode::CPUI_INT_SBORROW, &[a, b], 1);
    let cmp = mk_op(&mut fd, 2, OpCode::CPUI_INT_EQUAL);
    wire(&mut fd, cmp, sbout, 0);
    wire(&mut fd, cmp, slessout, 1);

    assert_eq!(RuleSborrow.apply_op(sbop, &mut fd), 1);
    assert_eq!(op_code(&fd, cmp), OpCode::CPUI_INT_SLESSEQUAL);
    // zside==1: slot 1 = avn (a), slot 0 = bvn (b)
    assert_eq!(op_in(&fd, cmp, 1).unwrap(), a);
    assert_eq!(op_in(&fd, cmp, 0).unwrap(), b);
}

/// RuleSborrow NOTEQUAL arm, zside==0: SLESS(zero, sub) puts the zero in
/// slot 0 => zside=0, xvn=getIn(1)=sub.  NOTEQUAL arm => INT_SLESS; slot
/// 1-zside(1)=avn, slot zside(0)=bvn  => a s< b.
#[test]
fn w10_sborrow_notequal_zside0_folds_to_sless() {
    let mut fd = build_fd();
    let a = make_input(&mut fd, 0x200, 4);
    let b = make_input(&mut fd, 0x204, 4);
    let neg1 = fd.new_constant(4, 0xffffffff);
    let (_multop, negb) = def_op(&mut fd, OpCode::CPUI_INT_MULT, &[b, neg1], 4);
    let (_addop, sub) = def_op(&mut fd, OpCode::CPUI_INT_ADD, &[a, negb], 4);
    let zero = fd.new_constant(4, 0);
    let (_slessop, slessout) = def_op(&mut fd, OpCode::CPUI_INT_SLESS, &[zero, sub], 1);
    let (sbop, sbout) = def_op(&mut fd, OpCode::CPUI_INT_SBORROW, &[a, b], 1);
    let cmp = mk_op(&mut fd, 2, OpCode::CPUI_INT_NOTEQUAL);
    wire(&mut fd, cmp, sbout, 0);
    wire(&mut fd, cmp, slessout, 1);

    assert_eq!(RuleSborrow.apply_op(sbop, &mut fd), 1);
    assert_eq!(op_code(&fd, cmp), OpCode::CPUI_INT_SLESS);
    // zside==0: slot 1 = avn (a), slot 0 = bvn (b)
    assert_eq!(op_in(&fd, cmp, 1).unwrap(), a);
    assert_eq!(op_in(&fd, cmp, 0).unwrap(), b);
}

/// RuleSborrow false-fold guard: when the SLESS expression is NOT equivalent
/// to `a - b` (reads an unrelated `c`), the AddExpression gate rejects and
/// the rule returns 0 leaving the comparison opcode untouched.
#[test]
fn w10_sborrow_nonequivalent_expr_rejected() {
    let mut fd = build_fd();
    let a = make_input(&mut fd, 0x200, 4);
    let b = make_input(&mut fd, 0x204, 4);
    let c = make_input(&mut fd, 0x208, 4);
    let neg1 = fd.new_constant(4, 0xffffffff);
    let (_multop, negc) = def_op(&mut fd, OpCode::CPUI_INT_MULT, &[c, neg1], 4);
    let (_addop, sub) = def_op(&mut fd, OpCode::CPUI_INT_ADD, &[a, negc], 4);
    let zero = fd.new_constant(4, 0);
    let (_slessop, slessout) = def_op(&mut fd, OpCode::CPUI_INT_SLESS, &[sub, zero], 1);
    let (sbop, sbout) = def_op(&mut fd, OpCode::CPUI_INT_SBORROW, &[a, b], 1);
    let cmp = mk_op(&mut fd, 2, OpCode::CPUI_INT_NOTEQUAL);
    wire(&mut fd, cmp, sbout, 0);
    wire(&mut fd, cmp, slessout, 1);

    assert_eq!(RuleSborrow.apply_op(sbop, &mut fd), 0);
    assert_eq!(op_code(&fd, cmp), OpCode::CPUI_INT_NOTEQUAL);
}

/// RuleScarry constant fold: `scarry(a,#W) != ((a + #W) s< 0) => a s< -#W`.
/// SLESS(sum, zero): getIn(0)=sum non-const, getIn(1)=zero matches 0 =>
/// zside==1, xvn=getIn(0)=sum.  #W = 5 (4 bytes) => newConst = -5 & mask =
/// 0xfffffffb.  NOTEQUAL arm => INT_SLESS, slot 1-zside(0)=avn, slot
/// zside(1)=newConst  => a s< -#W.  This pins the C++ `newConstant(-#W)`
/// materialization and the (wrapping) negation mask.
#[test]
fn w10_scarry_constant_notequal_folds_to_sless_negconst() {
    let mut fd = build_fd();
    let a = make_input(&mut fd, 0x200, 4);
    let w = fd.new_constant(4, 5);
    let (_addop, sum) = def_op(&mut fd, OpCode::CPUI_INT_ADD, &[a, w], 4);
    let zero = fd.new_constant(4, 0);
    let (_slessop, slessout) = def_op(&mut fd, OpCode::CPUI_INT_SLESS, &[sum, zero], 1);
    let (scop, scout) = def_op(&mut fd, OpCode::CPUI_INT_SCARRY, &[a, w], 1);
    let cmp = mk_op(&mut fd, 2, OpCode::CPUI_INT_NOTEQUAL);
    wire(&mut fd, cmp, scout, 0);
    wire(&mut fd, cmp, slessout, 1);

    assert_eq!(RuleScarry.apply_op(scop, &mut fd), 1);
    assert_eq!(op_code(&fd, cmp), OpCode::CPUI_INT_SLESS);
    // zside==1: slot 1-zside(0) = avn (a), slot zside(1) = newConst
    assert_eq!(op_in(&fd, cmp, 0).unwrap(), a);
    let nc = op_in(&fd, cmp, 1).unwrap();
    assert!(vn_is_constant(&fd, nc));
    // newval = -5 & mask(4) = 0xfffffffb
    assert_eq!(vn_offset(&fd, nc), 0xfffffffb);
}

// --- W10: Convert #17 equate survives the size-4 fold (DynamicHash re-bind) -

use crate::database::{SymbolId, symbol_dispflags};
use crate::dtype::{Datatype, type_metatype};
use unlace_base::space::SpacebaseSpace;
use unlace_base::types::{uint4, uintb};

/// Like [`build_fd`] but with a `stack` spacebase space registered, so
/// `Funcdata::new` attaches a `ScopeLocal` (`localmap`) — required for the
/// equate-Symbol lookups the dynamic-mapping re-bind exercises.
fn build_fd_with_localmap() -> Fd {
    let mut manage = build_manager();
    let ram = Rc::clone(manage.get_space_by_name("ram").unwrap());
    // A spacebase space literally named "stack" is what `insert_space`
    // recognizes as the stack space (space.rs:2507).
    manage
        .insert_space(Rc::new(SpacebaseSpace::new(
            "stack", 5, 8, &ram, 0, true, false,
        )))
        .unwrap();
    let glb = Rc::new(ArchContext::new(manage));
    let r = Rc::clone(glb.manage().get_space_by_name("ram").unwrap());
    let addr = Address::new(r, 0x1000);
    let mut fd = Funcdata::new("func", "func", glb, addr, 0x10000000, 0x40).unwrap();
    let root = fd.bblocks_root_pub();
    let block = fd.bblocks_mut().new_block_basic(root);
    Fd { fd, block }
}

/// Register an EquateSymbol in the function's local scope with the given
/// display `format` and `value` (the convert `map ... <fmt> <val>` effect),
/// returning its Symbol id.  No special-casing: the caller supplies value and
/// format, exactly as the datatest's `map convert` line does.
fn add_equate(fd: &mut Fd, format: uint4, value: uintb) -> SymbolId {
    let base1 = Rc::new(Datatype::new(1, type_metatype::TYPE_UNKNOWN));
    let addr = pc(fd);
    fd.fd
        .get_scope_local_mut()
        .expect("build_fd_with_localmap registers a stack space -> localmap is Some")
        .add_equate_symbol("", format, value, &addr, 0, base1)
        .expect("add_equate_symbol")
}

/// Adversarial #1: an equate parked on a size-8 constant survives the
/// constant-fold to a size-4 constant (SUBPIECE truncating high bytes,
/// op.cc:531) — the new constant re-binds the equate and the forced char
/// display format is recovered.  This is the convert `L'a'` (#17) mechanism.
#[test]
fn w10_equate_survives_size4_fold_via_collapse_subpiece() {
    let mut fd = build_fd_with_localmap();
    let sym = add_equate(&mut fd, symbol_dispflags::FORCE_CHAR, 0x61);

    // Size-8 source constant carrying the equate binding (the early
    // ActionDynamicMapping `setSymbolEntry` effect).
    let src8 = fd.new_constant(8, 0x61);
    fd.vbank_mut()
        .get_mut(src8)
        .unwrap()
        .set_unlace_symbol_entry(sym);
    assert_eq!(
        fd.vn_high_display_format(src8),
        symbol_dispflags::FORCE_CHAR
    );

    // A SUBPIECE(src8, 0) truncating the HIGH bytes — exactly the op shape
    // `RuleCollapseConstants` collapses, with `markedInput` set because src8
    // carries the equate.  The arithmetic fold needs the engine's OpBehavior
    // table (absent in the hand-built test arch), so drive the
    // symbol-propagation half (`collapseConstantSymbol`) directly on the
    // fresh size-4 folded constant the rule would produce.
    let off0 = fd.new_constant(8, 0); // SUBPIECE slot-1 offset == 0 -> high trunc
    let (subop, _subout) = def_op(&mut fd, OpCode::CPUI_SUBPIECE, &[src8, off0], 4);
    let folded = fd.new_constant(4, 0x61);
    collapse_constant_symbol(subop, folded, &mut fd);

    // The equate re-bound onto the folded size-4 constant AND the forced
    // char format is recovered (would render `L'a'`).
    assert_eq!(fd.vbank().get(folded).unwrap().get_size(), 4);
    assert!(
        fd.vbank()
            .get(folded)
            .unwrap()
            .unlace_symbol_entry()
            .is_some()
    );
    assert_eq!(
        fd.vn_high_display_format(folded),
        symbol_dispflags::FORCE_CHAR
    );

    // Negative control on the opcode selection: a SUBPIECE truncating the LOW
    // bytes (slot-1 offset != 0) must NOT propagate (op.cc:530-532).
    let off1 = fd.new_constant(8, 4);
    let (sublow, _o) = def_op(&mut fd, OpCode::CPUI_SUBPIECE, &[src8, off1], 4);
    let folded_low = fd.new_constant(4, 0x61);
    collapse_constant_symbol(sublow, folded_low, &mut fd);
    assert!(
        fd.vbank()
            .get(folded_low)
            .unwrap()
            .unlace_symbol_entry()
            .is_none(),
        "low-byte SUBPIECE truncation must not carry the equate"
    );
}

/// Adversarial #2: a non-folding equate (the constant is NOT size-folded;
/// the value stays put) keeps working — a same-size COPY collapse re-binds
/// the equate just like the 16 convert equates that never fold size.
#[test]
fn w10_non_folding_equate_still_rebinds_on_copy() {
    let mut fd = build_fd_with_localmap();
    let sym = add_equate(&mut fd, symbol_dispflags::FORCE_HEX, 0x3e8);

    let src4 = fd.new_constant(4, 0x3e8);
    fd.vbank_mut()
        .get_mut(src4)
        .unwrap()
        .set_unlace_symbol_entry(sym);

    // INT_ADD(src4, 0): the marked input is slot 0 (collapseConstantSymbol's
    // INT_ADD arm, op.cc:551).  Same-size, value-identical fold (isValueClose
    // trivially true).  Drive `collapseConstantSymbol` directly on the folded
    // constant (the arithmetic fold needs OpBehavior, absent in the test arch).
    let zero = fd.new_constant(4, 0);
    let (addop, _out) = def_op(&mut fd, OpCode::CPUI_INT_ADD, &[src4, zero], 4);
    let folded = fd.new_constant(4, 0x3e8);
    collapse_constant_symbol(addop, folded, &mut fd);
    assert_eq!(vn_offset(&fd, folded), 0x3e8);
    assert!(
        fd.vbank()
            .get(folded)
            .unwrap()
            .unlace_symbol_entry()
            .is_some()
    );
    // Format faithfully follows the Symbol (hex here, not char) — no
    // hardcoded value/format anywhere in the path.
    assert_eq!(
        fd.vn_high_display_format(folded),
        symbol_dispflags::FORCE_HEX
    );
}

/// Adversarial #3 (no special-casing): the re-bind is purely value-driven by
/// `EquateSymbol::isValueClose`.  A two's-complement fold (value 0x61 ->
/// folded constant -0x61) still re-binds (isValueClose accepts negation),
/// while a genuinely distant constant does NOT — proving the gate keys on the
/// equate value, not on any hardcoded constant/function name.
#[test]
fn w10_value_close_gate_drives_rebind_not_special_case() {
    // Negation transform: copy_symbol_if_valid copies (isValueClose true).
    let mut fd = build_fd_with_localmap();
    let sym = add_equate(&mut fd, symbol_dispflags::FORCE_CHAR, 0x61);
    let src = fd.new_constant(8, 0x61);
    fd.vbank_mut()
        .get_mut(src)
        .unwrap()
        .set_unlace_symbol_entry(sym);
    // -0x61 in size-4 (two's complement) — close to the equate by negation.
    let neg = fd.new_constant(4, 0x61u64.wrapping_neg() & 0xffff_ffff);
    fd.copy_symbol_if_valid(neg, src);
    assert!(
        fd.vbank().get(neg).unwrap().unlace_symbol_entry().is_some(),
        "isValueClose(negation) must re-bind"
    );

    // A distant value (0x12345) is NOT close -> no re-bind (no special-case
    // that blindly copies whenever a binding is present).
    let far = fd.new_constant(4, 0x12345);
    fd.copy_symbol_if_valid(far, src);
    assert!(
        fd.vbank().get(far).unwrap().unlace_symbol_entry().is_none(),
        "a distant constant must NOT inherit the equate"
    );
}
