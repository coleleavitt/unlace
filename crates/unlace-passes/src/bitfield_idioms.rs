//! Bit-field idiom recognition — byte-swap patterns.
//!
//! Detects the canonical byte-swap idiom sequences and replaces them with
//! named intrinsics via `Callother`:
//!
//! - 16-bit: `(x & 0xFF00) >> 8 | (x & 0x00FF) << 8` → `__byte_swap16(x)`
//! - 32-bit: full 4-byte reversal → `__bswap32(x)`
//!
//! The 32-bit pattern is:
//! ```text
//! ((x & 0xFF000000) >> 24) |
//! ((x & 0x00FF0000) >>  8) |
//! ((x & 0x0000FF00) <<  8) |
//! ((x & 0x000000FF) << 24)
//! ```

use std::collections::BTreeMap;

use unlace_ir::ssa::SsaFunction;
use unlace_ir::{IrInsn, IrOp, SpaceId, Varnode};

use crate::pass::{Pass, PassError};

/// `Callother` tag for `__byte_swap16(x)`.
pub const CALLOTHER_BSWAP16: u64 = 0x350;

/// `Callother` tag for `__bswap32(x)`.
pub const CALLOTHER_BSWAP32: u64 = 0x351;

/// Recognizes byte-swap idioms and replaces them with intrinsic calls.
pub struct BitfieldIdiomPass;

impl Pass for BitfieldIdiomPass {
    fn name(&self) -> &str {
        "bitfield-idioms"
    }

    fn run(&self, func: &mut SsaFunction) -> Result<bool, PassError> {
        let def_map = build_def_map(func);
        let mut changed = false;
        for block in func.function.blocks.values_mut() {
            for insn in &mut block.insns {
                if let Some(replacement) = try_recognize(insn, &def_map) {
                    *insn = replacement;
                    changed = true;
                }
            }
        }
        Ok(changed)
    }
}

fn build_def_map(func: &SsaFunction) -> BTreeMap<Varnode, IrInsn> {
    let mut map = BTreeMap::new();
    for block in func.function.blocks.values() {
        for insn in &block.insns {
            if let Some(output) = insn.output {
                if output.space != SpaceId::Const {
                    map.insert(output, insn.clone());
                }
            }
        }
    }
    map
}

fn def_of<'a>(v: &Varnode, def_map: &'a BTreeMap<Varnode, IrInsn>) -> Option<&'a IrInsn> {
    if v.space == SpaceId::Const {
        return None;
    }
    def_map.get(v)
}

fn is_const_val(v: &Varnode, val: u64) -> bool {
    v.space == SpaceId::Const && v.offset == val
}

fn try_recognize(insn: &IrInsn, def_map: &BTreeMap<Varnode, IrInsn>) -> Option<IrInsn> {
    let output = insn.output?;
    // Top-level must be IntOr with 2 inputs
    if insn.op != IrOp::IntOr || insn.inputs.len() != 2 {
        return None;
    }
    try_bswap16(insn, output, def_map).or_else(|| try_bswap32(insn, output, def_map))
}

/// Detect 16-bit byte-swap: `(x & 0xFF00) >> 8 | (x & 0xFF) << 8`
///
/// Shape: `IntOr(IntRight(IntAnd(x, 0xFF00), 8), IntLeft(IntAnd(x, 0x00FF), 8))`
/// Also accepts the commuted form.
fn try_bswap16(
    insn: &IrInsn,
    output: Varnode,
    def_map: &BTreeMap<Varnode, IrInsn>,
) -> Option<IrInsn> {
    let (a, b) = (&insn.inputs[0], &insn.inputs[1]);
    // Try both orderings of the OR operands
    match_bswap16_halves(a, b, output, insn.addr, def_map)
        .or_else(|| match_bswap16_halves(b, a, output, insn.addr, def_map))
}

/// Check if `hi_half` is `(x & 0xFF00) >> 8` and `lo_half` is `(x & 0xFF) << 8`
/// with the same `x`.
fn match_bswap16_halves(
    hi_half: &Varnode,
    lo_half: &Varnode,
    output: Varnode,
    addr: u64,
    def_map: &BTreeMap<Varnode, IrInsn>,
) -> Option<IrInsn> {
    let hi_def = def_of(hi_half, def_map)?;
    let lo_def = def_of(lo_half, def_map)?;

    // hi_half: IntRight(IntAnd(x, 0xFF00), 8)
    if hi_def.op != IrOp::IntRight || hi_def.inputs.len() != 2 {
        return None;
    }
    if !is_const_val(&hi_def.inputs[1], 8) {
        return None;
    }
    let hi_and_vn = &hi_def.inputs[0];
    let hi_and = def_of(hi_and_vn, def_map)?;
    if hi_and.op != IrOp::IntAnd || hi_and.inputs.len() != 2 {
        return None;
    }
    let x_hi = extract_and_source(hi_and, 0xFF00)?;

    // lo_half: IntLeft(IntAnd(x, 0xFF), 8)
    if lo_def.op != IrOp::IntLeft || lo_def.inputs.len() != 2 {
        return None;
    }
    if !is_const_val(&lo_def.inputs[1], 8) {
        return None;
    }
    let lo_and_vn = &lo_def.inputs[0];
    let lo_and = def_of(lo_and_vn, def_map)?;
    if lo_and.op != IrOp::IntAnd || lo_and.inputs.len() != 2 {
        return None;
    }
    let x_lo = extract_and_source(lo_and, 0x00FF)?;

    // Both halves must reference the same x
    if x_hi != x_lo {
        return None;
    }

    Some(make_callother(output, CALLOTHER_BSWAP16, &[x_hi], addr))
}

/// Detect 32-bit byte-swap:
/// ```text
/// ((x & 0xFF000000) >> 24) | ((x & 0x00FF0000) >> 8) |
/// ((x & 0x0000FF00) << 8) | ((x & 0x000000FF) << 24)
/// ```
///
/// The top-level is a tree of IntOr nodes; we flatten them and check.
fn try_bswap32(
    insn: &IrInsn,
    output: Varnode,
    def_map: &BTreeMap<Varnode, IrInsn>,
) -> Option<IrInsn> {
    // Flatten the OR-tree to collect leaf operands
    let mut leaves = Vec::new();
    flatten_or(&insn.inputs[0], &insn.inputs[1], def_map, &mut leaves);
    if leaves.len() != 4 {
        return None;
    }

    // Each leaf should be a shift of a masked value
    // We expect exactly these (mask, shift_amount, direction) tuples:
    // (0xFF000000, 24, right), (0x00FF0000, 8, right),
    // (0x0000FF00, 8, left), (0x000000FF, 24, left)
    const EXPECTED: [(u64, u64, bool); 4] = [
        (0xFF000000, 24, true),
        (0x00FF0000, 8, true),
        (0x0000FF00, 8, false),
        (0x000000FF, 24, false),
    ];

    let mut lanes = Vec::new();
    for leaf in &leaves {
        let lane = parse_byte_lane(leaf, def_map)?;
        lanes.push(lane);
    }

    // Check that we have all 4 expected lanes (in any order) with the same source
    let source = lanes[0].source;
    for lane in &lanes[1..] {
        if lane.source != source {
            return None;
        }
    }

    // Check all expected patterns are present
    for &(mask, shift, right) in &EXPECTED {
        let found = lanes
            .iter()
            .any(|l| l.mask == mask && l.shift == shift && l.right == right);
        if !found {
            return None;
        }
    }

    Some(make_callother(
        output,
        CALLOTHER_BSWAP32,
        &[source],
        insn.addr,
    ))
}

/// Represents one byte-lane extraction.
#[derive(Debug, Clone, Copy)]
struct ByteLane {
    mask: u64,
    shift: u64,
    right: bool,
    source: Varnode,
}

fn parse_byte_lane(vn: &Varnode, def_map: &BTreeMap<Varnode, IrInsn>) -> Option<ByteLane> {
    let def = def_of(vn, def_map)?;
    let (shift_op, is_right) = match def.op {
        IrOp::IntRight => (def, true),
        IrOp::IntLeft => (def, false),
        _ => return None,
    };
    if shift_op.inputs.len() != 2 {
        return None;
    }
    let shift_amt_vn = &shift_op.inputs[1];
    if shift_amt_vn.space != SpaceId::Const {
        return None;
    }
    let shift_amt = shift_amt_vn.offset;

    let and_vn = &shift_op.inputs[0];
    let and_def = def_of(and_vn, def_map)?;
    if and_def.op != IrOp::IntAnd || and_def.inputs.len() != 2 {
        return None;
    }

    // One of the AND inputs should be a constant mask
    let (source, mask) = if and_def.inputs[1].space == SpaceId::Const {
        (and_def.inputs[0], and_def.inputs[1].offset)
    } else if and_def.inputs[0].space == SpaceId::Const {
        (and_def.inputs[1], and_def.inputs[0].offset)
    } else {
        return None;
    };

    Some(ByteLane {
        mask,
        shift: shift_amt,
        right: is_right,
        source,
    })
}

/// Flatten a tree of IntOr nodes into leaf varnodes.
fn flatten_or(
    a: &Varnode,
    b: &Varnode,
    def_map: &BTreeMap<Varnode, IrInsn>,
    leaves: &mut Vec<Varnode>,
) {
    flatten_or_one(a, def_map, leaves);
    flatten_or_one(b, def_map, leaves);
}

fn flatten_or_one(v: &Varnode, def_map: &BTreeMap<Varnode, IrInsn>, leaves: &mut Vec<Varnode>) {
    if let Some(def) = def_of(v, def_map) {
        if def.op == IrOp::IntOr && def.inputs.len() == 2 {
            flatten_or_one(&def.inputs[0], def_map, leaves);
            flatten_or_one(&def.inputs[1], def_map, leaves);
            return;
        }
    }
    leaves.push(*v);
}

/// Extract the non-constant source from `IntAnd(x, mask)` or `IntAnd(mask, x)`.
fn extract_and_source(and_insn: &IrInsn, expected_mask: u64) -> Option<Varnode> {
    let (a, b) = (&and_insn.inputs[0], &and_insn.inputs[1]);
    if is_const_val(b, expected_mask) && a.space != SpaceId::Const {
        Some(*a)
    } else if is_const_val(a, expected_mask) && b.space != SpaceId::Const {
        Some(*b)
    } else {
        None
    }
}

fn make_callother(output: Varnode, tag: u64, args: &[Varnode], addr: u64) -> IrInsn {
    let mut inputs: smallvec::SmallVec<[Varnode; 3]> =
        smallvec::smallvec![Varnode::constant(tag, 8)];
    for a in args {
        inputs.push(*a);
    }
    IrInsn::with_output(IrOp::Callother, output, inputs, addr)
}

#[cfg(test)]
mod tests {
    use super::*;
    use smallvec::smallvec;
    use unlace_ir::ssa::build_ssa;
    use unlace_ir::{BasicBlock, BlockId, Function};

    fn run_pass(insns: Vec<IrInsn>) -> SsaFunction {
        let mut func = Function::new("test", BlockId(0), 0x1000);
        let mut bb = BasicBlock::new(BlockId(0));
        bb.insns = insns;
        bb.insns.push(IrInsn::without_output(
            IrOp::Return,
            smallvec![Varnode::constant(0, 8)],
            0x1FFF,
        ));
        func.insert_block(bb);
        let mut ssa = build_ssa(func);
        let changed = BitfieldIdiomPass.run(&mut ssa).expect("pass ok");
        assert!(changed, "expected pass to detect a pattern");
        ssa
    }

    fn only_block_insns(ssa: &SsaFunction) -> &[IrInsn] {
        &ssa.function.blocks.values().next().unwrap().insns
    }

    /// 16-bit byte swap: `(x & 0xFF00) >> 8 | (x & 0xFF) << 8` → `__byte_swap16(x)`
    #[test]
    fn recognizes_16bit_byte_swap() {
        let x = Varnode::reg(0, 2);
        let and_hi = Varnode::unique(0, 2);
        let and_lo = Varnode::unique(8, 2);
        let shr = Varnode::unique(16, 2);
        let shl = Varnode::unique(24, 2);
        let out = Varnode::unique(32, 2);

        // and_hi = x & 0xFF00
        let i_and_hi = IrInsn::with_output(
            IrOp::IntAnd,
            and_hi,
            smallvec![x, Varnode::constant(0xFF00, 2)],
            0x1000,
        );
        // and_lo = x & 0x00FF
        let i_and_lo = IrInsn::with_output(
            IrOp::IntAnd,
            and_lo,
            smallvec![x, Varnode::constant(0x00FF, 2)],
            0x1004,
        );
        // shr = and_hi >> 8
        let i_shr = IrInsn::with_output(
            IrOp::IntRight,
            shr,
            smallvec![and_hi, Varnode::constant(8, 4)],
            0x1008,
        );
        // shl = and_lo << 8
        let i_shl = IrInsn::with_output(
            IrOp::IntLeft,
            shl,
            smallvec![and_lo, Varnode::constant(8, 4)],
            0x100C,
        );
        // out = shr | shl
        let i_or = IrInsn::with_output(IrOp::IntOr, out, smallvec![shr, shl], 0x1010);

        let ssa = run_pass(vec![i_and_hi, i_and_lo, i_shr, i_shl, i_or]);
        let insns = only_block_insns(&ssa);
        let or_insn = &insns[4];
        assert_eq!(or_insn.op, IrOp::Callother);
        assert_eq!(or_insn.inputs[0].offset, CALLOTHER_BSWAP16);
        assert_eq!(or_insn.inputs[1], x);
    }

    /// 32-bit byte swap recognized.
    #[test]
    fn recognizes_32bit_byte_swap() {
        let x = Varnode::reg(0, 4);

        // Build 4 byte lanes
        let and0 = Varnode::unique(0, 4);
        let and1 = Varnode::unique(8, 4);
        let and2 = Varnode::unique(16, 4);
        let and3 = Varnode::unique(24, 4);
        let shr0 = Varnode::unique(32, 4);
        let shr1 = Varnode::unique(40, 4);
        let shl2 = Varnode::unique(48, 4);
        let shl3 = Varnode::unique(56, 4);
        let or1 = Varnode::unique(64, 4);
        let or2 = Varnode::unique(72, 4);
        let out = Varnode::unique(80, 4);

        // and0 = x & 0xFF000000
        let i0 = IrInsn::with_output(
            IrOp::IntAnd,
            and0,
            smallvec![x, Varnode::constant(0xFF000000, 4)],
            0x1000,
        );
        // and1 = x & 0x00FF0000
        let i1 = IrInsn::with_output(
            IrOp::IntAnd,
            and1,
            smallvec![x, Varnode::constant(0x00FF0000, 4)],
            0x1004,
        );
        // and2 = x & 0x0000FF00
        let i2 = IrInsn::with_output(
            IrOp::IntAnd,
            and2,
            smallvec![x, Varnode::constant(0x0000FF00, 4)],
            0x1008,
        );
        // and3 = x & 0x000000FF
        let i3 = IrInsn::with_output(
            IrOp::IntAnd,
            and3,
            smallvec![x, Varnode::constant(0x000000FF, 4)],
            0x100C,
        );
        // shr0 = and0 >> 24
        let i4 = IrInsn::with_output(
            IrOp::IntRight,
            shr0,
            smallvec![and0, Varnode::constant(24, 4)],
            0x1010,
        );
        // shr1 = and1 >> 8
        let i5 = IrInsn::with_output(
            IrOp::IntRight,
            shr1,
            smallvec![and1, Varnode::constant(8, 4)],
            0x1014,
        );
        // shl2 = and2 << 8
        let i6 = IrInsn::with_output(
            IrOp::IntLeft,
            shl2,
            smallvec![and2, Varnode::constant(8, 4)],
            0x1018,
        );
        // shl3 = and3 << 24
        let i7 = IrInsn::with_output(
            IrOp::IntLeft,
            shl3,
            smallvec![and3, Varnode::constant(24, 4)],
            0x101C,
        );
        // or1 = shr0 | shr1
        let i8 = IrInsn::with_output(IrOp::IntOr, or1, smallvec![shr0, shr1], 0x1020);
        // or2 = shl2 | shl3
        let i9 = IrInsn::with_output(IrOp::IntOr, or2, smallvec![shl2, shl3], 0x1024);
        // out = or1 | or2
        let i10 = IrInsn::with_output(IrOp::IntOr, out, smallvec![or1, or2], 0x1028);

        let ssa = run_pass(vec![i0, i1, i2, i3, i4, i5, i6, i7, i8, i9, i10]);
        let insns = only_block_insns(&ssa);
        let or_insn = &insns[10];
        assert_eq!(or_insn.op, IrOp::Callother);
        assert_eq!(or_insn.inputs[0].offset, CALLOTHER_BSWAP32);
        assert_eq!(or_insn.inputs[1], x);
    }
}
