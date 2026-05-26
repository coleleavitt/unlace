//! Algebraic simplification pass skeleton.
//!
//! This pass is the landing zone for expression-local SSA simplification rules.
//! The initial rule set is intentionally empty; follow-on tasks will add the
//! individual rewrites.

use smallvec::SmallVec;
use unlace_ir::ssa::{SsaFunction, SsaVarnode, VarnodeSlot};
use unlace_ir::{BlockId, IrInsn, IrOp, SpaceId, Varnode};

use crate::pass::{DefIndex, Pass, PassError};

/// Simplifies algebraic SSA expressions.
pub struct AlgebraicSimplifyPass;

impl Pass for AlgebraicSimplifyPass {
    fn name(&self) -> &str {
        "algebraic-simplify"
    }

    fn phase(&self) -> crate::pass::PassPhase {
        crate::pass::PassPhase::PreOpt
    }

    fn run(&self, func: &mut SsaFunction) -> Result<bool, PassError> {
        let func_name = func.function.name.clone();
        let block_count = func.function.blocks.len();
        let instruction_count: usize = func
            .function
            .blocks
            .values()
            .map(|block| block.insns.len())
            .sum();

        tracing::debug!(
            target: "unlace_passes",
            function = %func_name,
            blocks = block_count,
            instructions = instruction_count,
            "algebraic_simplify: starting"
        );

        let defs = DefIndex::build(func);
        let rewrites = collect_rewrites(func, &defs);
        let simplified = rewrites.len();
        apply_rewrites(func, rewrites);

        tracing::debug!(
            target: "unlace_passes",
            function = %func_name,
            simplified,
            "algebraic_simplify: done"
        );

        Ok(simplified != 0)
    }
}

#[derive(Clone, Debug)]
enum Replacement {
    /// Rewrite the instruction to a `Copy` from `input`.
    Copy {
        input: Varnode,
        input_ssa: Option<SsaVarnode>,
    },
    /// Rewrite the instruction's op and inputs in place (output unchanged).
    Reop {
        op: IrOp,
        inputs: SmallVec<[Varnode; 3]>,
        input_ssas: SmallVec<[Option<SsaVarnode>; 3]>,
    },
}

#[derive(Clone, Debug)]
struct Rewrite {
    block: BlockId,
    insn_idx: usize,
    replacement: Replacement,
}

fn collect_rewrites(func: &SsaFunction, defs: &DefIndex) -> Vec<Rewrite> {
    let mut rewrites = Vec::new();

    for (&bid, block) in &func.function.blocks {
        for (insn_idx, insn) in block.insns.iter().enumerate() {
            if let Some(replacement) = try_simplify(func, defs, bid, insn_idx, insn) {
                rewrites.push(Rewrite {
                    block: bid,
                    insn_idx,
                    replacement,
                });
            }
        }
    }

    rewrites
}

fn apply_rewrites(func: &mut SsaFunction, rewrites: Vec<Rewrite>) {
    for rewrite in rewrites {
        let Some(block) = func.function.blocks.get_mut(&rewrite.block) else {
            continue;
        };
        let Some(insn) = block.insns.get_mut(rewrite.insn_idx) else {
            continue;
        };

        let original_input_count = insn.inputs.len();
        let addr = insn.addr;
        let existing_output = insn.output;

        match rewrite.replacement {
            Replacement::Copy { input, input_ssa } => {
                // Copy rewrites require an output (we're producing a value).
                let Some(output) = existing_output else {
                    continue;
                };

                *insn = IrInsn::with_output(IrOp::Copy, output, smallvec::smallvec![input], addr);

                for input_idx in 0..original_input_count {
                    func.var_map.remove(&(
                        rewrite.block,
                        rewrite.insn_idx,
                        VarnodeSlot::Input(input_idx),
                    ));
                }

                if input.space != SpaceId::Const {
                    if let Some(ssa) = input_ssa {
                        func.var_map.insert(
                            (rewrite.block, rewrite.insn_idx, VarnodeSlot::Input(0)),
                            ssa,
                        );
                    }
                }
            }
            Replacement::Reop {
                op,
                inputs,
                input_ssas,
            } => {
                let new_inputs: smallvec::SmallVec<[Varnode; 3]> = inputs.iter().copied().collect();
                // Preserve the original output presence: STORE-style rewrites
                // have no output; arithmetic rewrites do.
                *insn = match existing_output {
                    Some(output) => IrInsn::with_output(op, output, new_inputs, addr),
                    None => IrInsn::without_output(op, new_inputs, addr),
                };

                for input_idx in 0..original_input_count {
                    func.var_map.remove(&(
                        rewrite.block,
                        rewrite.insn_idx,
                        VarnodeSlot::Input(input_idx),
                    ));
                }

                for (idx, (input, ssa)) in inputs.iter().zip(input_ssas.iter()).enumerate() {
                    if input.space == SpaceId::Const {
                        continue;
                    }
                    if let Some(ssa) = ssa {
                        func.var_map.insert(
                            (rewrite.block, rewrite.insn_idx, VarnodeSlot::Input(idx)),
                            *ssa,
                        );
                    }
                }
            }
        }
    }
}

fn try_simplify(
    func: &SsaFunction,
    defs: &DefIndex,
    bid: BlockId,
    insn_idx: usize,
    insn: &IrInsn,
) -> Option<Replacement> {
    // STORE has no output but is still a valid simplification target
    // (we may rewrite its address operand). All other rules below are
    // gated on having an output; the per-op handlers enforce that.
    if insn.op != IrOp::Store && insn.output.is_none() {
        return None;
    }

    if insn.op == IrOp::Copy || all_inputs_const(insn) {
        return None;
    }

    match insn.op {
        IrOp::Load => simplify_load_addr(func, bid, insn_idx, insn),
        IrOp::Store => simplify_store_addr(func, bid, insn_idx, insn),
        IrOp::IntAdd => simplify_commutative_const(func, bid, insn_idx, insn, 0)
            .or_else(|| simplify_addr_offset_fold(func, bid, insn_idx, insn)),
        IrOp::IntSub => simplify_rhs_const(func, bid, insn_idx, insn, 0)
            .or_else(|| simplify_same_ssa_to_const(func, bid, insn_idx, insn, 0))
            .or_else(|| simplify_addr_offset_sub_fold(func, bid, insn_idx, insn)),
        IrOp::IntMult => simplify_commutative_const(func, bid, insn_idx, insn, 1)
            .or_else(|| simplify_commutative_const_to_const(func, bid, insn_idx, insn, 0, 0)),
        IrOp::IntDiv => simplify_rhs_const(func, bid, insn_idx, insn, 1),
        IrOp::IntRem => simplify_rhs_const_to_const(insn, 1, 0),
        IrOp::IntAnd => simplify_commutative_const_to_const(func, bid, insn_idx, insn, 0, 0)
            .or_else(|| simplify_commutative_all_ones(func, bid, insn_idx, insn)),
        IrOp::IntOr => simplify_commutative_const(func, bid, insn_idx, insn, 0)
            .or_else(|| simplify_commutative_all_ones_to_all_ones(insn)),
        IrOp::Subpiece => simplify_subpiece_identity(func, bid, insn_idx, insn)
            .or_else(|| simplify_subpiece_compose(func, bid, insn_idx, insn))
            .or_else(|| simplify_subpiece_zext(func, bid, insn_idx, insn))
            .or_else(|| simplify_subpiece_piece_low(func, bid, insn_idx, insn))
            .or_else(|| simplify_subpiece_piece_high(func, bid, insn_idx, insn))
            .or_else(|| simplify_subpiece_or_high_mask(func, bid, insn_idx, insn)),
        IrOp::Piece => simplify_piece_full_reassembly(func, bid, insn_idx, insn),
        IrOp::IntXor => simplify_commutative_const(func, bid, insn_idx, insn, 0)
            .or_else(|| simplify_same_ssa_to_const(func, bid, insn_idx, insn, 0)),
        IrOp::IntNegate | IrOp::BoolNegate | IrOp::FloatNeg => {
            simplify_double_negate(func, bid, insn_idx, insn)
        }
        IrOp::FloatAdd => simplify_commutative_float_zero(func, bid, insn_idx, insn)
            .or_else(|| simplify_fadd_negation(func, bid, insn_idx, insn)),
        IrOp::FloatSub => simplify_rhs_float_zero(func, bid, insn_idx, insn)
            .or_else(|| simplify_fsub_negation(func, bid, insn_idx, insn)),
        IrOp::FloatMult => simplify_commutative_float_one(func, bid, insn_idx, insn),
        IrOp::FloatDiv => simplify_rhs_float_one(func, bid, insn_idx, insn),
        IrOp::IntEqual => simplify_cmp_xor_zero(func, bid, insn_idx, insn)
            .or_else(|| simplify_same_ssa_to_const(func, bid, insn_idx, insn, 1)),
        IrOp::IntNotequal => simplify_cmp_xor_zero(func, bid, insn_idx, insn)
            .or_else(|| simplify_same_ssa_to_const(func, bid, insn_idx, insn, 0)),
        IrOp::Multiequal => simplify_multiequal_all_same(func, bid, insn_idx, insn),
        IrOp::IntSext => simplify_double_sext(func, bid, insn_idx, insn)
            .or_else(|| simplify_sext_noop(func, bid, insn_idx, insn)),
        IrOp::IntZext => simplify_double_zext(func, bid, insn_idx, insn),
        _ => None,
    }
}

fn all_inputs_const(insn: &IrInsn) -> bool {
    !insn.inputs.is_empty()
        && insn
            .inputs
            .iter()
            .all(|input| input.space == SpaceId::Const)
}

fn two_inputs(insn: &IrInsn) -> Option<(Varnode, Varnode)> {
    if insn.inputs.len() == 2 {
        Some((insn.inputs[0], insn.inputs[1]))
    } else {
        None
    }
}

fn one_input(insn: &IrInsn) -> Option<Varnode> {
    if insn.inputs.len() == 1 {
        Some(insn.inputs[0])
    } else {
        None
    }
}

fn is_const(input: Varnode, expected: u64) -> bool {
    input.space == SpaceId::Const && input.offset == expected
}

fn mask_for_size(size: u8) -> u64 {
    if size >= 8 {
        u64::MAX
    } else {
        (1u64 << (size as u32 * 8)) - 1
    }
}

fn is_all_ones(input: Varnode) -> bool {
    input.space == SpaceId::Const && input.offset == mask_for_size(input.size)
}

fn input_ssa(
    func: &SsaFunction,
    bid: BlockId,
    insn_idx: usize,
    input_idx: usize,
) -> Option<SsaVarnode> {
    func.var_map
        .get(&(bid, insn_idx, VarnodeSlot::Input(input_idx)))
        .copied()
}

fn replacement_for_input(
    func: &SsaFunction,
    bid: BlockId,
    insn_idx: usize,
    input_idx: usize,
    input: Varnode,
) -> Replacement {
    Replacement::Copy {
        input,
        input_ssa: input_ssa(func, bid, insn_idx, input_idx),
    }
}

fn replacement_for_const(value: u64, size: u8) -> Replacement {
    Replacement::Copy {
        input: Varnode::constant(value, size),
        input_ssa: None,
    }
}

fn simplify_commutative_const(
    func: &SsaFunction,
    bid: BlockId,
    insn_idx: usize,
    insn: &IrInsn,
    expected: u64,
) -> Option<Replacement> {
    let (lhs, rhs) = two_inputs(insn)?;
    if is_const(rhs, expected) {
        Some(replacement_for_input(func, bid, insn_idx, 0, lhs))
    } else if is_const(lhs, expected) {
        Some(replacement_for_input(func, bid, insn_idx, 1, rhs))
    } else {
        None
    }
}

fn simplify_rhs_const(
    func: &SsaFunction,
    bid: BlockId,
    insn_idx: usize,
    insn: &IrInsn,
    expected: u64,
) -> Option<Replacement> {
    let (lhs, rhs) = two_inputs(insn)?;
    if is_const(rhs, expected) {
        Some(replacement_for_input(func, bid, insn_idx, 0, lhs))
    } else {
        None
    }
}

fn simplify_commutative_const_to_const(
    func: &SsaFunction,
    bid: BlockId,
    insn_idx: usize,
    insn: &IrInsn,
    expected: u64,
    result: u64,
) -> Option<Replacement> {
    let output = insn.output?;
    let (lhs, rhs) = two_inputs(insn)?;
    if (is_const(lhs, expected) && input_ssa(func, bid, insn_idx, 1).is_some())
        || (is_const(rhs, expected) && input_ssa(func, bid, insn_idx, 0).is_some())
    {
        Some(replacement_for_const(result, output.size))
    } else {
        None
    }
}

fn simplify_rhs_const_to_const(insn: &IrInsn, expected: u64, result: u64) -> Option<Replacement> {
    let output = insn.output?;
    let (_, rhs) = two_inputs(insn)?;
    if is_const(rhs, expected) {
        Some(replacement_for_const(result, output.size))
    } else {
        None
    }
}

fn simplify_commutative_all_ones(
    func: &SsaFunction,
    bid: BlockId,
    insn_idx: usize,
    insn: &IrInsn,
) -> Option<Replacement> {
    let (lhs, rhs) = two_inputs(insn)?;
    if is_all_ones(rhs) {
        Some(replacement_for_input(func, bid, insn_idx, 0, lhs))
    } else if is_all_ones(lhs) {
        Some(replacement_for_input(func, bid, insn_idx, 1, rhs))
    } else {
        None
    }
}

fn simplify_commutative_all_ones_to_all_ones(insn: &IrInsn) -> Option<Replacement> {
    let output = insn.output?;
    let (lhs, rhs) = two_inputs(insn)?;
    if is_all_ones(lhs) || is_all_ones(rhs) {
        Some(replacement_for_const(
            mask_for_size(output.size),
            output.size,
        ))
    } else {
        None
    }
}

fn simplify_same_ssa_to_const(
    func: &SsaFunction,
    bid: BlockId,
    insn_idx: usize,
    insn: &IrInsn,
    result: u64,
) -> Option<Replacement> {
    let output = insn.output?;
    two_inputs(insn)?;
    let lhs = input_ssa(func, bid, insn_idx, 0)?;
    let rhs = input_ssa(func, bid, insn_idx, 1)?;
    if lhs == rhs {
        Some(replacement_for_const(result, output.size))
    } else {
        None
    }
}

fn simplify_double_negate(
    func: &SsaFunction,
    bid: BlockId,
    insn_idx: usize,
    insn: &IrInsn,
) -> Option<Replacement> {
    one_input(insn)?;
    let outer_input = input_ssa(func, bid, insn_idx, 0)?;

    for (&(def_bid, def_idx, ref slot), &def_ssa) in &func.var_map {
        if !matches!(slot, VarnodeSlot::Output) || def_ssa != outer_input {
            continue;
        }

        let def_insn = func.function.blocks.get(&def_bid)?.insns.get(def_idx)?;
        if def_insn.op != insn.op {
            return None;
        }

        let inner_input = one_input(def_insn)?;
        return Some(Replacement::Copy {
            input: inner_input,
            input_ssa: input_ssa(func, def_bid, def_idx, 0),
        });
    }

    None
}

/// Returns true if `input` is the IEEE 754 representation of `+0.0` for its size.
/// Only `+0.0` (all-zero bits) is matched; `-0.0` (sign bit set) is intentionally not.
fn is_float_zero(input: Varnode) -> bool {
    if input.space != SpaceId::Const {
        return false;
    }
    matches!(input.size, 4 | 8) && input.offset == 0
}

/// Returns true if `input` is the IEEE 754 representation of `1.0` for its size.
/// Supports `f32` (4 bytes) and `f64` (8 bytes).
fn is_float_one(input: Varnode) -> bool {
    if input.space != SpaceId::Const {
        return false;
    }
    match input.size {
        4 => input.offset == (1.0_f32).to_bits() as u64,
        8 => input.offset == (1.0_f64).to_bits(),
        _ => false,
    }
}

/// Simplifies `x + (+0.0)` and `(+0.0) + x` to `x` (commutative form).
fn simplify_commutative_float_zero(
    func: &SsaFunction,
    bid: BlockId,
    insn_idx: usize,
    insn: &IrInsn,
) -> Option<Replacement> {
    let (lhs, rhs) = two_inputs(insn)?;
    if is_float_zero(rhs) {
        Some(replacement_for_input(func, bid, insn_idx, 0, lhs))
    } else if is_float_zero(lhs) {
        Some(replacement_for_input(func, bid, insn_idx, 1, rhs))
    } else {
        None
    }
}

/// Simplifies `x - (+0.0)` to `x`.
fn simplify_rhs_float_zero(
    func: &SsaFunction,
    bid: BlockId,
    insn_idx: usize,
    insn: &IrInsn,
) -> Option<Replacement> {
    let (lhs, rhs) = two_inputs(insn)?;
    if is_float_zero(rhs) {
        Some(replacement_for_input(func, bid, insn_idx, 0, lhs))
    } else {
        None
    }
}

/// Simplifies `x * 1.0` and `1.0 * x` to `x` (commutative form).
fn simplify_commutative_float_one(
    func: &SsaFunction,
    bid: BlockId,
    insn_idx: usize,
    insn: &IrInsn,
) -> Option<Replacement> {
    let (lhs, rhs) = two_inputs(insn)?;
    if is_float_one(rhs) {
        Some(replacement_for_input(func, bid, insn_idx, 0, lhs))
    } else if is_float_one(lhs) {
        Some(replacement_for_input(func, bid, insn_idx, 1, rhs))
    } else {
        None
    }
}

/// Simplifies `x / 1.0` to `x`.
fn simplify_rhs_float_one(
    func: &SsaFunction,
    bid: BlockId,
    insn_idx: usize,
    insn: &IrInsn,
) -> Option<Replacement> {
    let (lhs, rhs) = two_inputs(insn)?;
    if is_float_one(rhs) {
        Some(replacement_for_input(func, bid, insn_idx, 0, lhs))
    } else {
        None
    }
}

/// Looks up the defining instruction for an SSA value via the per-pass
/// reverse index. O(log n) instead of the previous O(|var_map|) full scan
/// that was 30% of total wall-clock on `/usr/bin/wc`.
fn defining_insn<'a>(
    func: &'a SsaFunction,
    defs: &DefIndex,
    target: SsaVarnode,
) -> Option<(BlockId, usize, &'a IrInsn)> {
    let (bid, idx) = defs.lookup(target)?;
    let insn = func.function.blocks.get(&bid)?.insns.get(idx)?;
    Some((bid, idx, insn))
}

/// Rewrites `(-x) + y` → `y - x` and `x + (-y)` → `x - y` (FloatAdd only).
fn simplify_fadd_negation(
    func: &SsaFunction,
    defs: &DefIndex,
    bid: BlockId,
    insn_idx: usize,
    insn: &IrInsn,
) -> Option<Replacement> {
    let (lhs, rhs) = two_inputs(insn)?;

    // Try `x + (-y)` → `x - y`: rhs is FloatNeg(y)
    if let Some(rhs_ssa) = input_ssa(func, bid, insn_idx, 1) {
        if let Some((def_bid, def_idx, def_insn)) = defining_insn(func, defs, rhs_ssa) {
            if def_insn.op == IrOp::FloatNeg {
                if let Some(inner) = one_input(def_insn) {
                    let lhs_ssa = input_ssa(func, bid, insn_idx, 0);
                    let inner_ssa = input_ssa(func, def_bid, def_idx, 0);
                    return Some(Replacement::Reop {
                        op: IrOp::FloatSub,
                        inputs: smallvec::smallvec![lhs, inner],
                        input_ssas: smallvec::smallvec![lhs_ssa, inner_ssa],
                    });
                }
            }
        }
    }

    // Try `(-x) + y` → `y - x`: lhs is FloatNeg(x)
    if let Some(lhs_ssa) = input_ssa(func, bid, insn_idx, 0) {
        if let Some((def_bid, def_idx, def_insn)) = defining_insn(func, defs, lhs_ssa) {
            if def_insn.op == IrOp::FloatNeg {
                if let Some(inner) = one_input(def_insn) {
                    let rhs_ssa = input_ssa(func, bid, insn_idx, 1);
                    let inner_ssa = input_ssa(func, def_bid, def_idx, 0);
                    return Some(Replacement::Reop {
                        op: IrOp::FloatSub,
                        inputs: smallvec::smallvec![rhs, inner],
                        input_ssas: smallvec::smallvec![rhs_ssa, inner_ssa],
                    });
                }
            }
        }
    }

    None
}

/// Rewrites `x - (-y)` → `x + y` (FloatSub only).
fn simplify_fsub_negation(
    func: &SsaFunction,
    defs: &DefIndex,
    bid: BlockId,
    insn_idx: usize,
    insn: &IrInsn,
) -> Option<Replacement> {
    let (lhs, _rhs) = two_inputs(insn)?;
    let rhs_ssa = input_ssa(func, bid, insn_idx, 1)?;
    let (def_bid, def_idx, def_insn) = defining_insn(func, defs, rhs_ssa)?;
    if def_insn.op != IrOp::FloatNeg {
        return None;
    }
    let inner = one_input(def_insn)?;
    let lhs_ssa = input_ssa(func, bid, insn_idx, 0);
    let inner_ssa = input_ssa(func, def_bid, def_idx, 0);
    Some(Replacement::Reop {
        op: IrOp::FloatAdd,
        inputs: smallvec::smallvec![lhs, inner],
        input_ssas: smallvec::smallvec![lhs_ssa, inner_ssa],
    })
}

// ---- Memory access pattern simplification helpers ----
//
// Rules implemented:
//   1. `*(p + 0) → *p`             (LOAD whose addr is `IntAdd(p, 0)`)
//   2. `(p + 0) → p`               (already covered by `simplify_commutative_const`
//                                   on `IntAdd` — see `simplifies_ptr_add_zero_to_input`)
//   3. `*(p - 0) → *p`             (LOAD whose addr is `IntSub(p, 0)`)
//   6. `(p + a) + b → p + (a + b)` when `a, b` const  (`simplify_addr_offset_fold`)
//   7. `(p + a) - b → p + (a - b)` when `a, b` const  (`simplify_addr_offset_sub_fold`)
//
// Rules 1 and 3 are also applied to STORE's address operand (input slot 1).
//
// Rules 4 (`*(&x) → x`) and 5 (`&(*p) → p`) are intentionally **not**
// implemented: this IR has no explicit address-of operator. Stack/local
// variables are accessed directly via LOAD/STORE on a stack-pointer-relative
// address, so an `&x` expression has no IR representation distinct from the
// integer address itself. Pattern matching for these would require type
// information (lifted in later passes) and is therefore out of scope here.
//
// Rule 8 (`*(p + n)` → array indexing) is left to the dedicated
// `array_index_recovery` pass which has the type/stride context needed.

/// Returns the SSA value and source pointer when `addr_input_idx` of `insn`
/// is the result of `IntAdd(p, const 0)` (either operand) or `IntSub(p, const 0)`,
/// along with the SSA handle for `p` (if it has one). The returned `Varnode`
/// is the underlying pointer value to substitute in place of the offset add.
fn unwrap_zero_offset_addr(
    func: &SsaFunction,
    defs: &DefIndex,
    bid: BlockId,
    insn_idx: usize,
    addr_input_idx: usize,
) -> Option<(Varnode, Option<SsaVarnode>)> {
    let addr_ssa = input_ssa(func, bid, insn_idx, addr_input_idx)?;
    let (def_bid, def_idx, def_insn) = defining_insn(func, defs, addr_ssa)?;

    match def_insn.op {
        IrOp::IntAdd => {
            let (lhs, rhs) = two_inputs(def_insn)?;
            // p + 0
            if is_const(rhs, 0) {
                return Some((lhs, input_ssa(func, def_bid, def_idx, 0)));
            }
            // 0 + p
            if is_const(lhs, 0) {
                return Some((rhs, input_ssa(func, def_bid, def_idx, 1)));
            }
            None
        }
        IrOp::IntSub => {
            // Only `p - 0` matches; `0 - p` is a real negation, not a no-op.
            let (lhs, rhs) = two_inputs(def_insn)?;
            if is_const(rhs, 0) {
                Some((lhs, input_ssa(func, def_bid, def_idx, 0)))
            } else {
                None
            }
        }
        _ => None,
    }
}

/// Rule 1 / Rule 3 for LOAD: `LOAD space, (p + 0)` → `LOAD space, p`,
/// `LOAD space, (p - 0)` → `LOAD space, p`.
fn simplify_load_addr(
    func: &SsaFunction,
    defs: &DefIndex,
    bid: BlockId,
    insn_idx: usize,
    insn: &IrInsn,
) -> Option<Replacement> {
    let _output = insn.output?;
    if insn.inputs.len() != 2 {
        return None;
    }
    let (space, _addr) = (insn.inputs[0], insn.inputs[1]);
    let (new_addr, new_addr_ssa) = unwrap_zero_offset_addr(func, bid, insn_idx, 1)?;
    Some(Replacement::Reop {
        op: IrOp::Load,
        inputs: smallvec::smallvec![space, new_addr],
        input_ssas: smallvec::smallvec![None, new_addr_ssa],
    })
}

/// Rule 1 / Rule 3 for STORE: `STORE space, (p + 0), v` → `STORE space, p, v`,
/// `STORE space, (p - 0), v` → `STORE space, p, v`.
fn simplify_store_addr(
    func: &SsaFunction,
    defs: &DefIndex,
    bid: BlockId,
    insn_idx: usize,
    insn: &IrInsn,
) -> Option<Replacement> {
    if insn.inputs.len() != 3 {
        return None;
    }
    let (space, _addr, value) = (insn.inputs[0], insn.inputs[1], insn.inputs[2]);
    let (new_addr, new_addr_ssa) = unwrap_zero_offset_addr(func, bid, insn_idx, 1)?;
    let value_ssa = input_ssa(func, bid, insn_idx, 2);
    Some(Replacement::Reop {
        op: IrOp::Store,
        inputs: smallvec::smallvec![space, new_addr, value],
        input_ssas: smallvec::smallvec![None, new_addr_ssa, value_ssa],
    })
}

/// Rule 6: `(p + a) + b → p + (a + b)` when both `a` and `b` are constants.
/// Folds chained pointer offsets into a single offset.
fn simplify_addr_offset_fold(
    func: &SsaFunction,
    defs: &DefIndex,
    bid: BlockId,
    insn_idx: usize,
    insn: &IrInsn,
) -> Option<Replacement> {
    let (_lhs, rhs) = two_inputs(insn)?;

    // We need: lhs is SSA defined by `IntAdd(p, const_a)`, and rhs is `const_b`.
    // (We don't try the symmetric case `b + (p + a)` since the existing
    // commutative-zero rule already canonicalises ordering for const-zero,
    // and a more general canonicaliser would be its own task.)
    if rhs.space != SpaceId::Const {
        return None;
    }
    let lhs_ssa = input_ssa(func, bid, insn_idx, 0)?;
    let (def_bid, def_idx, def_insn) = defining_insn(func, defs, lhs_ssa)?;
    if def_insn.op != IrOp::IntAdd {
        return None;
    }
    let (inner_lhs, inner_rhs) = two_inputs(def_insn)?;

    // Find which inner operand is the constant `a` and which is the pointer `p`.
    let (p, p_idx, a) = if inner_rhs.space == SpaceId::Const && inner_lhs.space != SpaceId::Const {
        (inner_lhs, 0usize, inner_rhs)
    } else if inner_lhs.space == SpaceId::Const && inner_rhs.space != SpaceId::Const {
        (inner_rhs, 1usize, inner_lhs)
    } else {
        return None;
    };

    // Use the result-size mask so the fold matches what the machine would compute.
    let mask = mask_for_size(rhs.size);
    let combined = a.offset.wrapping_add(rhs.offset) & mask;
    let combined_vn = Varnode::constant(combined, rhs.size);

    let p_ssa = input_ssa(func, def_bid, def_idx, p_idx);
    Some(Replacement::Reop {
        op: IrOp::IntAdd,
        inputs: smallvec::smallvec![p, combined_vn],
        input_ssas: smallvec::smallvec![p_ssa, None],
    })
}

/// Rule 7: `(p + a) - b → p + (a - b)` when both `a` and `b` are constants.
fn simplify_addr_offset_sub_fold(
    func: &SsaFunction,
    defs: &DefIndex,
    bid: BlockId,
    insn_idx: usize,
    insn: &IrInsn,
) -> Option<Replacement> {
    let (_lhs, rhs) = two_inputs(insn)?;

    if rhs.space != SpaceId::Const {
        return None;
    }
    let lhs_ssa = input_ssa(func, bid, insn_idx, 0)?;
    let (def_bid, def_idx, def_insn) = defining_insn(func, defs, lhs_ssa)?;
    if def_insn.op != IrOp::IntAdd {
        return None;
    }
    let (inner_lhs, inner_rhs) = two_inputs(def_insn)?;

    let (p, p_idx, a) = if inner_rhs.space == SpaceId::Const && inner_lhs.space != SpaceId::Const {
        (inner_lhs, 0usize, inner_rhs)
    } else if inner_lhs.space == SpaceId::Const && inner_rhs.space != SpaceId::Const {
        (inner_rhs, 1usize, inner_lhs)
    } else {
        return None;
    };

    let mask = mask_for_size(rhs.size);
    let combined = a.offset.wrapping_sub(rhs.offset) & mask;
    let combined_vn = Varnode::constant(combined, rhs.size);

    let p_ssa = input_ssa(func, def_bid, def_idx, p_idx);
    Some(Replacement::Reop {
        op: IrOp::IntAdd,
        inputs: smallvec::smallvec![p, combined_vn],
        input_ssas: smallvec::smallvec![p_ssa, None],
    })
}

// ---- SUBPIECE / PIECE simplification helpers ----

/// Returns the constant byte-offset operand of a SUBPIECE instruction, or `None`
/// if the second input is not a constant.
fn subpiece_offset(insn: &IrInsn) -> Option<u64> {
    let (_, off) = two_inputs(insn)?;
    if off.space == SpaceId::Const {
        Some(off.offset)
    } else {
        None
    }
}

/// Rule 1: `SUBPIECE(x, 0)` where the output size matches the input size → `x`.
fn simplify_subpiece_identity(
    func: &SsaFunction,
    bid: BlockId,
    insn_idx: usize,
    insn: &IrInsn,
) -> Option<Replacement> {
    let output = insn.output?;
    let (src, _off) = two_inputs(insn)?;
    if subpiece_offset(insn)? != 0 {
        return None;
    }
    if output.size != src.size {
        return None;
    }
    Some(replacement_for_input(func, bid, insn_idx, 0, src))
}

/// Rule 2: `SUBPIECE(SUBPIECE(x, a), b)` → `SUBPIECE(x, a + b)`.
fn simplify_subpiece_compose(
    func: &SsaFunction,
    defs: &DefIndex,
    bid: BlockId,
    insn_idx: usize,
    insn: &IrInsn,
) -> Option<Replacement> {
    let outer_off = subpiece_offset(insn)?;
    let (_outer_src, outer_off_vn) = two_inputs(insn)?;
    let inner_ssa = input_ssa(func, bid, insn_idx, 0)?;
    let (def_bid, def_idx, def_insn) = defining_insn(func, defs, inner_ssa)?;
    if def_insn.op != IrOp::Subpiece {
        return None;
    }
    let inner_off = subpiece_offset(def_insn)?;
    let (inner_src, _inner_off_vn) = two_inputs(def_insn)?;

    let new_off = inner_off.checked_add(outer_off)?;
    let new_off_vn = Varnode::constant(new_off, outer_off_vn.size);
    let inner_src_ssa = input_ssa(func, def_bid, def_idx, 0);

    Some(Replacement::Reop {
        op: IrOp::Subpiece,
        inputs: smallvec::smallvec![inner_src, new_off_vn],
        input_ssas: smallvec::smallvec![inner_src_ssa, None],
    })
}

/// Rule 3: `SUBPIECE(ZEXT(x), 0)` → `x` when the subpiece output size equals
/// the original `x` size (i.e. the zero-extension is being undone).
fn simplify_subpiece_zext(
    func: &SsaFunction,
    defs: &DefIndex,
    bid: BlockId,
    insn_idx: usize,
    insn: &IrInsn,
) -> Option<Replacement> {
    let output = insn.output?;
    if subpiece_offset(insn)? != 0 {
        return None;
    }
    let inner_ssa = input_ssa(func, bid, insn_idx, 0)?;
    let (def_bid, def_idx, def_insn) = defining_insn(func, defs, inner_ssa)?;
    if def_insn.op != IrOp::IntZext {
        return None;
    }
    let inner = one_input(def_insn)?;
    if inner.size != output.size {
        return None;
    }
    Some(Replacement::Copy {
        input: inner,
        input_ssa: input_ssa(func, def_bid, def_idx, 0),
    })
}

/// Rule 4: `SUBPIECE(PIECE(hi, lo), 0)` where the output size matches `lo.size` → `lo`.
fn simplify_subpiece_piece_low(
    func: &SsaFunction,
    defs: &DefIndex,
    bid: BlockId,
    insn_idx: usize,
    insn: &IrInsn,
) -> Option<Replacement> {
    let output = insn.output?;
    if subpiece_offset(insn)? != 0 {
        return None;
    }
    let inner_ssa = input_ssa(func, bid, insn_idx, 0)?;
    let (def_bid, def_idx, def_insn) = defining_insn(func, defs, inner_ssa)?;
    if def_insn.op != IrOp::Piece {
        return None;
    }
    let (_hi, lo) = two_inputs(def_insn)?;
    if lo.size != output.size {
        return None;
    }
    Some(Replacement::Copy {
        input: lo,
        input_ssa: input_ssa(func, def_bid, def_idx, 1),
    })
}

/// Rule 5: `SUBPIECE(PIECE(hi, lo), lo.size)` where the output size matches
/// `hi.size` → `hi` (extracts the high half of a concatenation).
fn simplify_subpiece_piece_high(
    func: &SsaFunction,
    defs: &DefIndex,
    bid: BlockId,
    insn_idx: usize,
    insn: &IrInsn,
) -> Option<Replacement> {
    let output = insn.output?;
    let off = subpiece_offset(insn)?;
    let inner_ssa = input_ssa(func, bid, insn_idx, 0)?;
    let (def_bid, def_idx, def_insn) = defining_insn(func, defs, inner_ssa)?;
    if def_insn.op != IrOp::Piece {
        return None;
    }
    let (hi, lo) = two_inputs(def_insn)?;
    if off != lo.size as u64 {
        return None;
    }
    if hi.size != output.size {
        return None;
    }
    Some(Replacement::Copy {
        input: hi,
        input_ssa: input_ssa(func, def_bid, def_idx, 0),
    })
}

/// Rule 6: `PIECE(SUBPIECE(x, hi_off), SUBPIECE(x, 0))` → `x` when both
/// SUBPIECEs reference the same SSA value, the offsets/sizes line up, and
/// together they reconstruct the entirety of `x`.
fn simplify_piece_full_reassembly(
    func: &SsaFunction,
    defs: &DefIndex,
    bid: BlockId,
    insn_idx: usize,
    insn: &IrInsn,
) -> Option<Replacement> {
    let output = insn.output?;
    let (hi, lo) = two_inputs(insn)?;

    let hi_ssa = input_ssa(func, bid, insn_idx, 0)?;
    let lo_ssa = input_ssa(func, bid, insn_idx, 1)?;

    let (hi_def_bid, hi_def_idx, hi_def) = defining_insn(func, defs, hi_ssa)?;
    let (_lo_def_bid, _lo_def_idx, lo_def) = defining_insn(func, defs, lo_ssa)?;
    if hi_def.op != IrOp::Subpiece || lo_def.op != IrOp::Subpiece {
        return None;
    }

    let hi_off = subpiece_offset(hi_def)?;
    let lo_off = subpiece_offset(lo_def)?;
    if lo_off != 0 || hi_off != lo.size as u64 {
        return None;
    }

    let hi_src_ssa = input_ssa(func, hi_def_bid, hi_def_idx, 0)?;
    let lo_src_ssa = input_ssa(func, _lo_def_bid, _lo_def_idx, 0)?;
    if hi_src_ssa != lo_src_ssa {
        return None;
    }

    let (hi_src, _) = two_inputs(hi_def)?;
    let (lo_src, _) = two_inputs(lo_def)?;
    // Both SUBPIECE inputs must point at varnodes of the same width as `x`,
    // and that width must match the PIECE output (full reassembly).
    if hi_src.size != lo_src.size || hi_src.size != output.size {
        return None;
    }
    // And the two extracted slices must exactly tile that width.
    if (hi.size as u64) + (lo.size as u64) != hi_src.size as u64 {
        return None;
    }

    Some(Replacement::Copy {
        input: hi_src,
        input_ssa: Some(hi_src_ssa),
    })
}

/// Rule 7: `SUBPIECE(x | mask_high, 0)` → `SUBPIECE(x, 0)` when `mask_high`
/// is a constant whose low bits (those covered by the subpiece output) are
/// all zero — the OR cannot affect the bytes the SUBPIECE keeps.
fn simplify_subpiece_or_high_mask(
    func: &SsaFunction,
    defs: &DefIndex,
    bid: BlockId,
    insn_idx: usize,
    insn: &IrInsn,
) -> Option<Replacement> {
    let output = insn.output?;
    let (_src, off_vn) = two_inputs(insn)?;
    if subpiece_offset(insn)? != 0 {
        return None;
    }

    let inner_ssa = input_ssa(func, bid, insn_idx, 0)?;
    let (def_bid, def_idx, def_insn) = defining_insn(func, defs, inner_ssa)?;
    if def_insn.op != IrOp::IntOr {
        return None;
    }
    let (or_lhs, or_rhs) = two_inputs(def_insn)?;

    // Find which side is a constant and which is the SSA value we want to keep.
    let (kept, kept_idx) = if or_rhs.space == SpaceId::Const && or_lhs.space != SpaceId::Const {
        (or_lhs, 0usize)
    } else if or_lhs.space == SpaceId::Const && or_rhs.space != SpaceId::Const {
        (or_rhs, 1usize)
    } else {
        return None;
    };
    let mask = if kept_idx == 0 { or_rhs } else { or_lhs };

    // Low-byte mask covered by the SUBPIECE output (offset 0, output.size bytes).
    let low_mask = mask_for_size(output.size);
    if (mask.offset & low_mask) != 0 {
        return None;
    }

    let kept_ssa = input_ssa(func, def_bid, def_idx, kept_idx);
    Some(Replacement::Reop {
        op: IrOp::Subpiece,
        inputs: smallvec::smallvec![kept, off_vn],
        input_ssas: smallvec::smallvec![kept_ssa, None],
    })
}

// ─── Comparison strengthening ────────────────────────────────────────────────
// `IntEqual(IntXor(x, y), 0)` → `IntEqual(x, y)`
// `IntNotequal(IntXor(x, y), 0)` → `IntNotequal(x, y)`

fn simplify_cmp_xor_zero(
    func: &SsaFunction,
    defs: &DefIndex,
    bid: BlockId,
    insn_idx: usize,
    insn: &IrInsn,
) -> Option<Replacement> {
    let (lhs, rhs) = two_inputs(insn)?;

    // We need one side to be const 0 and the other to be a XOR result.
    let (xor_vn, xor_idx) = if is_const(rhs, 0) {
        (lhs, 0usize)
    } else if is_const(lhs, 0) {
        (rhs, 1usize)
    } else {
        return None;
    };

    // The xor operand must not itself be a constant
    if xor_vn.space == SpaceId::Const {
        return None;
    }

    // Look up the defining instruction of the xor operand
    let xor_ssa = input_ssa(func, bid, insn_idx, xor_idx)?;
    let (def_bid, def_idx, def_insn) = defining_insn(func, defs, xor_ssa)?;
    if def_insn.op != IrOp::IntXor || def_insn.inputs.len() != 2 {
        return None;
    }

    let x = def_insn.inputs[0];
    let y = def_insn.inputs[1];
    let x_ssa = input_ssa(func, def_bid, def_idx, 0);
    let y_ssa = input_ssa(func, def_bid, def_idx, 1);

    Some(Replacement::Reop {
        op: insn.op, // IntEqual or IntNotequal — keep it
        inputs: smallvec::smallvec![x, y],
        input_ssas: smallvec::smallvec![x_ssa, y_ssa],
    })
}

// ─── Sign/zero-extension elimination ─────────────────────────────────────────
// `IntSext(IntSext(x))` → `IntSext(x)` (collapse double sign-extend)
// `IntSext(x)` where x's type already matches target width → `Copy(x)`

fn simplify_double_sext(
    func: &SsaFunction,
    defs: &DefIndex,
    bid: BlockId,
    insn_idx: usize,
    insn: &IrInsn,
) -> Option<Replacement> {
    let _input = one_input(insn)?;
    let _output = insn.output?;

    let inner_ssa = input_ssa(func, bid, insn_idx, 0)?;
    let (def_bid, def_idx, def_insn) = defining_insn(func, defs, inner_ssa)?;
    if def_insn.op != IrOp::IntSext || def_insn.inputs.len() != 1 {
        return None;
    }

    // Collapse: IntSext(IntSext(x)) → IntSext(x)
    let inner_x = def_insn.inputs[0];
    let inner_x_ssa = input_ssa(func, def_bid, def_idx, 0);

    Some(Replacement::Reop {
        op: IrOp::IntSext,
        inputs: smallvec::smallvec![inner_x],
        input_ssas: smallvec::smallvec![inner_x_ssa],
    })
}

/// `IntSext(x)` where x's size == output size → `Copy(x)`
fn simplify_sext_noop(
    func: &SsaFunction,
    bid: BlockId,
    insn_idx: usize,
    insn: &IrInsn,
) -> Option<Replacement> {
    let input = one_input(insn)?;
    let output = insn.output?;

    if input.size == output.size {
        Some(replacement_for_input(func, bid, insn_idx, 0, input))
    } else {
        None
    }
}

/// `IntZext(IntZext(x))` → `IntZext(x)` (collapse double zero-extend)
fn simplify_double_zext(
    func: &SsaFunction,
    defs: &DefIndex,
    bid: BlockId,
    insn_idx: usize,
    insn: &IrInsn,
) -> Option<Replacement> {
    let input = one_input(insn)?;
    let output = insn.output?;

    // First check if it's a no-op (same size)
    if input.size == output.size {
        return Some(replacement_for_input(func, bid, insn_idx, 0, input));
    }

    let inner_ssa = input_ssa(func, bid, insn_idx, 0)?;
    let (def_bid, def_idx, def_insn) = defining_insn(func, defs, inner_ssa)?;
    if def_insn.op != IrOp::IntZext || def_insn.inputs.len() != 1 {
        return None;
    }

    // Collapse: IntZext(IntZext(x)) → IntZext(x)
    let inner_x = def_insn.inputs[0];
    let inner_x_ssa = input_ssa(func, def_bid, def_idx, 0);

    Some(Replacement::Reop {
        op: IrOp::IntZext,
        inputs: smallvec::smallvec![inner_x],
        input_ssas: smallvec::smallvec![inner_x_ssa],
    })
}

// ─── Self-referential expression collapse (t252) ─────────────────────────────
// `Multiequal(x, x, …, x)` → `Copy(x)`  (phi/select with identical inputs)
//
// This generalizes the "Select(cond, x, x) → x" rule: an SSA phi merging the
// same SSA value from every predecessor is a no-op and may be rewritten as a
// copy of that single source operand. Requires at least one input and that
// every input map to the same SSA varnode (so two distinct uses of an
// identical-valued constant don't trigger — they have no `input_ssa`).
fn simplify_multiequal_all_same(
    func: &SsaFunction,
    bid: BlockId,
    insn_idx: usize,
    insn: &IrInsn,
) -> Option<Replacement> {
    insn.output?;
    if insn.inputs.is_empty() {
        return None;
    }
    let first_ssa = input_ssa(func, bid, insn_idx, 0)?;
    for idx in 1..insn.inputs.len() {
        let ssa = input_ssa(func, bid, insn_idx, idx)?;
        if ssa != first_ssa {
            return None;
        }
    }
    Some(replacement_for_input(
        func,
        bid,
        insn_idx,
        0,
        insn.inputs[0],
    ))
}

#[cfg(test)]
mod tests {
    use smallvec::smallvec;
    use unlace_ir::ssa::build_ssa;
    use unlace_ir::{BasicBlock, BlockId, Function, IrInsn, IrOp, SpaceId, Varnode};

    use super::*;

    fn make_single_block_ssa(insns: Vec<IrInsn>) -> SsaFunction {
        let mut func = Function::new("test", BlockId(0), 0x1000);
        let mut bb = BasicBlock::new(BlockId(0));
        bb.insns = insns;
        bb.insns.push(IrInsn::without_output(
            IrOp::Return,
            smallvec![Varnode::constant(0, 8)],
            0x1FFF,
        ));
        func.insert_block(bb);
        build_ssa(func)
    }

    fn run_pass(insns: Vec<IrInsn>) -> SsaFunction {
        let mut ssa = make_single_block_ssa(insns);
        let changed = AlgebraicSimplifyPass
            .run(&mut ssa)
            .expect("pass should succeed");
        assert!(changed);
        ssa
    }

    fn rewritten_insn(ssa: &SsaFunction, idx: usize) -> &IrInsn {
        &ssa.function
            .blocks
            .values()
            .next()
            .expect("has block")
            .insns[idx]
    }

    fn assert_copy_var(insn: &IrInsn, expected: Varnode) {
        assert_eq!(insn.op, IrOp::Copy);
        assert_eq!(insn.inputs.as_slice(), &[expected]);
    }

    fn assert_copy_const(insn: &IrInsn, expected: u64, size: u8) {
        assert_eq!(insn.op, IrOp::Copy);
        assert_eq!(insn.inputs.len(), 1);
        assert_eq!(insn.inputs[0].space, SpaceId::Const);
        assert_eq!(insn.inputs[0].offset, expected);
        assert_eq!(insn.inputs[0].size, size);
    }

    #[test]
    fn simplifies_add_zero_to_input() {
        let out = Varnode::unique(0, 4);
        let x = Varnode::reg(0, 4);
        let insn = IrInsn::with_output(
            IrOp::IntAdd,
            out,
            smallvec![x, Varnode::constant(0, 4)],
            0x1000,
        );

        let ssa = run_pass(vec![insn]);
        assert_copy_var(rewritten_insn(&ssa, 0), x);
    }

    #[test]
    fn simplifies_sub_zero_to_input() {
        let out = Varnode::unique(0, 4);
        let x = Varnode::reg(0, 4);
        let insn = IrInsn::with_output(
            IrOp::IntSub,
            out,
            smallvec![x, Varnode::constant(0, 4)],
            0x1000,
        );

        let ssa = run_pass(vec![insn]);
        assert_copy_var(rewritten_insn(&ssa, 0), x);
    }

    #[test]
    fn simplifies_multiply_one_to_input() {
        let out = Varnode::unique(0, 4);
        let x = Varnode::reg(0, 4);
        let insn = IrInsn::with_output(
            IrOp::IntMult,
            out,
            smallvec![x, Varnode::constant(1, 4)],
            0x1000,
        );

        let ssa = run_pass(vec![insn]);
        assert_copy_var(rewritten_insn(&ssa, 0), x);
    }

    #[test]
    fn simplifies_multiply_zero_to_zero() {
        let out = Varnode::unique(0, 4);
        let x = Varnode::reg(0, 4);
        let insn = IrInsn::with_output(
            IrOp::IntMult,
            out,
            smallvec![x, Varnode::constant(0, 4)],
            0x1000,
        );

        let ssa = run_pass(vec![insn]);
        assert_copy_const(rewritten_insn(&ssa, 0), 0, 4);
    }

    #[test]
    fn simplifies_divide_one_to_input() {
        let out = Varnode::unique(0, 4);
        let x = Varnode::reg(0, 4);
        let insn = IrInsn::with_output(
            IrOp::IntDiv,
            out,
            smallvec![x, Varnode::constant(1, 4)],
            0x1000,
        );

        let ssa = run_pass(vec![insn]);
        assert_copy_var(rewritten_insn(&ssa, 0), x);
    }

    #[test]
    fn simplifies_remainder_one_to_zero() {
        let out = Varnode::unique(0, 4);
        let x = Varnode::reg(0, 4);
        let insn = IrInsn::with_output(
            IrOp::IntRem,
            out,
            smallvec![x, Varnode::constant(1, 4)],
            0x1000,
        );

        let ssa = run_pass(vec![insn]);
        assert_copy_const(rewritten_insn(&ssa, 0), 0, 4);
    }

    #[test]
    fn simplifies_and_zero_to_zero() {
        let out = Varnode::unique(0, 4);
        let x = Varnode::reg(0, 4);
        let insn = IrInsn::with_output(
            IrOp::IntAnd,
            out,
            smallvec![x, Varnode::constant(0, 4)],
            0x1000,
        );

        let ssa = run_pass(vec![insn]);
        assert_copy_const(rewritten_insn(&ssa, 0), 0, 4);
    }

    #[test]
    fn simplifies_and_all_ones_to_input() {
        let out = Varnode::unique(0, 4);
        let x = Varnode::reg(0, 4);
        let insn = IrInsn::with_output(
            IrOp::IntAnd,
            out,
            smallvec![x, Varnode::constant(0xFFFF_FFFF, 4)],
            0x1000,
        );

        let ssa = run_pass(vec![insn]);
        assert_copy_var(rewritten_insn(&ssa, 0), x);
    }

    #[test]
    fn simplifies_or_zero_to_input() {
        let out = Varnode::unique(0, 4);
        let x = Varnode::reg(0, 4);
        let insn = IrInsn::with_output(
            IrOp::IntOr,
            out,
            smallvec![x, Varnode::constant(0, 4)],
            0x1000,
        );

        let ssa = run_pass(vec![insn]);
        assert_copy_var(rewritten_insn(&ssa, 0), x);
    }

    #[test]
    fn simplifies_or_all_ones_to_all_ones() {
        let out = Varnode::unique(0, 4);
        let x = Varnode::reg(0, 4);
        let insn = IrInsn::with_output(
            IrOp::IntOr,
            out,
            smallvec![x, Varnode::constant(0xFFFF_FFFF, 4)],
            0x1000,
        );

        let ssa = run_pass(vec![insn]);
        assert_copy_const(rewritten_insn(&ssa, 0), 0xFFFF_FFFF, 4);
    }

    #[test]
    fn simplifies_xor_zero_to_input() {
        let out = Varnode::unique(0, 4);
        let x = Varnode::reg(0, 4);
        let insn = IrInsn::with_output(
            IrOp::IntXor,
            out,
            smallvec![x, Varnode::constant(0, 4)],
            0x1000,
        );

        let ssa = run_pass(vec![insn]);
        assert_copy_var(rewritten_insn(&ssa, 0), x);
    }

    #[test]
    fn simplifies_xor_same_ssa_to_zero() {
        let out = Varnode::unique(0, 4);
        let x = Varnode::reg(0, 4);
        let insn = IrInsn::with_output(IrOp::IntXor, out, smallvec![x, x], 0x1000);

        let ssa = run_pass(vec![insn]);
        assert_copy_const(rewritten_insn(&ssa, 0), 0, 4);
    }

    #[test]
    fn simplifies_sub_same_ssa_to_zero() {
        let out = Varnode::unique(0, 4);
        let x = Varnode::reg(0, 4);
        let insn = IrInsn::with_output(IrOp::IntSub, out, smallvec![x, x], 0x1000);

        let ssa = run_pass(vec![insn]);
        assert_copy_const(rewritten_insn(&ssa, 0), 0, 4);
    }

    #[test]
    fn simplifies_double_int_negate_to_inner_input() {
        let inner = Varnode::unique(0, 4);
        let outer = Varnode::unique(1, 4);
        let x = Varnode::reg(0, 4);
        let inner_insn = IrInsn::with_output(IrOp::IntNegate, inner, smallvec![x], 0x1000);
        let outer_insn = IrInsn::with_output(IrOp::IntNegate, outer, smallvec![inner], 0x1001);

        let ssa = run_pass(vec![inner_insn, outer_insn]);
        assert_copy_var(rewritten_insn(&ssa, 1), x);
    }

    fn assert_reop(insn: &IrInsn, op: IrOp, expected_inputs: &[Varnode]) {
        assert_eq!(insn.op, op);
        assert_eq!(insn.inputs.as_slice(), expected_inputs);
    }

    fn f32_const(value: f32) -> Varnode {
        Varnode::constant(value.to_bits() as u64, 4)
    }

    fn f64_const(value: f64) -> Varnode {
        Varnode::constant(value.to_bits(), 8)
    }

    #[test]
    fn simplifies_float_add_zero_to_input() {
        let out = Varnode::unique(0, 4);
        let x = Varnode::reg(0, 4);
        let insn = IrInsn::with_output(IrOp::FloatAdd, out, smallvec![x, f32_const(0.0)], 0x1000);

        let ssa = run_pass(vec![insn]);
        assert_copy_var(rewritten_insn(&ssa, 0), x);
    }

    #[test]
    fn simplifies_float_sub_zero_to_input() {
        let out = Varnode::unique(0, 8);
        let x = Varnode::reg(0, 8);
        let insn = IrInsn::with_output(IrOp::FloatSub, out, smallvec![x, f64_const(0.0)], 0x1000);

        let ssa = run_pass(vec![insn]);
        assert_copy_var(rewritten_insn(&ssa, 0), x);
    }

    #[test]
    fn simplifies_float_mult_one_to_input() {
        let out = Varnode::unique(0, 4);
        let x = Varnode::reg(0, 4);
        let insn = IrInsn::with_output(IrOp::FloatMult, out, smallvec![x, f32_const(1.0)], 0x1000);

        let ssa = run_pass(vec![insn]);
        assert_copy_var(rewritten_insn(&ssa, 0), x);
    }

    #[test]
    fn simplifies_float_div_one_to_input() {
        let out = Varnode::unique(0, 8);
        let x = Varnode::reg(0, 8);
        let insn = IrInsn::with_output(IrOp::FloatDiv, out, smallvec![x, f64_const(1.0)], 0x1000);

        let ssa = run_pass(vec![insn]);
        assert_copy_var(rewritten_insn(&ssa, 0), x);
    }

    #[test]
    fn simplifies_double_float_negate_to_inner_input() {
        let inner = Varnode::unique(0, 8);
        let outer = Varnode::unique(1, 8);
        let x = Varnode::reg(0, 8);
        let inner_insn = IrInsn::with_output(IrOp::FloatNeg, inner, smallvec![x], 0x1000);
        let outer_insn = IrInsn::with_output(IrOp::FloatNeg, outer, smallvec![inner], 0x1001);

        let ssa = run_pass(vec![inner_insn, outer_insn]);
        assert_copy_var(rewritten_insn(&ssa, 1), x);
    }

    #[test]
    fn simplifies_neg_lhs_float_add_to_sub() {
        // (-x) + y → y - x
        let neg = Varnode::unique(0, 4);
        let out = Varnode::unique(1, 4);
        let x = Varnode::reg(0, 4);
        let y = Varnode::reg(4, 4);
        let neg_insn = IrInsn::with_output(IrOp::FloatNeg, neg, smallvec![x], 0x1000);
        let add_insn = IrInsn::with_output(IrOp::FloatAdd, out, smallvec![neg, y], 0x1001);

        let ssa = run_pass(vec![neg_insn, add_insn]);
        assert_reop(rewritten_insn(&ssa, 1), IrOp::FloatSub, &[y, x]);
    }

    #[test]
    fn simplifies_float_add_neg_rhs_to_sub() {
        // x + (-y) → x - y
        let neg = Varnode::unique(0, 4);
        let out = Varnode::unique(1, 4);
        let x = Varnode::reg(0, 4);
        let y = Varnode::reg(4, 4);
        let neg_insn = IrInsn::with_output(IrOp::FloatNeg, neg, smallvec![y], 0x1000);
        let add_insn = IrInsn::with_output(IrOp::FloatAdd, out, smallvec![x, neg], 0x1001);

        let ssa = run_pass(vec![neg_insn, add_insn]);
        assert_reop(rewritten_insn(&ssa, 1), IrOp::FloatSub, &[x, y]);
    }

    #[test]
    fn simplifies_float_sub_neg_rhs_to_add() {
        // x - (-y) → x + y
        let neg = Varnode::unique(0, 8);
        let out = Varnode::unique(1, 8);
        let x = Varnode::reg(0, 8);
        let y = Varnode::reg(8, 8);
        let neg_insn = IrInsn::with_output(IrOp::FloatNeg, neg, smallvec![y], 0x1000);
        let sub_insn = IrInsn::with_output(IrOp::FloatSub, out, smallvec![x, neg], 0x1001);

        let ssa = run_pass(vec![neg_insn, sub_insn]);
        assert_reop(rewritten_insn(&ssa, 1), IrOp::FloatAdd, &[x, y]);
    }

    #[test]
    fn simplifies_double_bool_negate_to_inner_input() {
        let inner = Varnode::unique(0, 1);
        let outer = Varnode::unique(1, 1);
        let x = Varnode::reg(0, 1);
        let inner_insn = IrInsn::with_output(IrOp::BoolNegate, inner, smallvec![x], 0x1000);
        let outer_insn = IrInsn::with_output(IrOp::BoolNegate, outer, smallvec![inner], 0x1001);

        let ssa = run_pass(vec![inner_insn, outer_insn]);
        assert_copy_var(rewritten_insn(&ssa, 1), x);
    }

    // ---- SUBPIECE / PIECE simplification tests ----

    /// Rule 1: SUBPIECE(x, 0) where output_size == input_size → x.
    #[test]
    fn simplifies_subpiece_identity_to_input() {
        let out = Varnode::unique(0, 4);
        let x = Varnode::reg(0, 4);
        let insn = IrInsn::with_output(
            IrOp::Subpiece,
            out,
            smallvec![x, Varnode::constant(0, 1)],
            0x1000,
        );

        let ssa = run_pass(vec![insn]);
        assert_copy_var(rewritten_insn(&ssa, 0), x);
    }

    /// Rule 2: SUBPIECE(SUBPIECE(x, a), b) → SUBPIECE(x, a + b).
    #[test]
    fn simplifies_subpiece_compose() {
        // x is 8 bytes; first SUBPIECE at offset 2 yields a 4-byte slice;
        // second SUBPIECE at offset 1 of *that* yields a 2-byte slice.
        // Expected: SUBPIECE(x, 3) producing the same 2 bytes directly.
        let x = Varnode::reg(0, 8);
        let mid = Varnode::unique(0, 4);
        let out = Varnode::unique(1, 2);
        let inner = IrInsn::with_output(
            IrOp::Subpiece,
            mid,
            smallvec![x, Varnode::constant(2, 1)],
            0x1000,
        );
        let outer = IrInsn::with_output(
            IrOp::Subpiece,
            out,
            smallvec![mid, Varnode::constant(1, 1)],
            0x1001,
        );

        let ssa = run_pass(vec![inner, outer]);
        let rewritten = rewritten_insn(&ssa, 1);
        assert_eq!(rewritten.op, IrOp::Subpiece);
        assert_eq!(rewritten.inputs.len(), 2);
        assert_eq!(rewritten.inputs[0], x);
        assert_eq!(rewritten.inputs[1].space, SpaceId::Const);
        assert_eq!(rewritten.inputs[1].offset, 3);
    }

    /// Rule 3: SUBPIECE(ZEXT(x), 0) where subpiece_output_size == x.size → x.
    #[test]
    fn simplifies_subpiece_of_zext_to_inner() {
        let x = Varnode::reg(0, 4);
        let zext = Varnode::unique(0, 8);
        let out = Varnode::unique(1, 4);
        let zext_insn = IrInsn::with_output(IrOp::IntZext, zext, smallvec![x], 0x1000);
        let sub_insn = IrInsn::with_output(
            IrOp::Subpiece,
            out,
            smallvec![zext, Varnode::constant(0, 1)],
            0x1001,
        );

        let ssa = run_pass(vec![zext_insn, sub_insn]);
        assert_copy_var(rewritten_insn(&ssa, 1), x);
    }

    /// Rule 4: SUBPIECE(PIECE(hi, lo), 0) where output_size == lo.size → lo.
    #[test]
    fn simplifies_subpiece_low_of_piece() {
        // PIECE: input[0] = hi, input[1] = lo. Total = hi.size + lo.size.
        let hi = Varnode::reg(0, 4);
        let lo = Varnode::reg(4, 4);
        let pieced = Varnode::unique(0, 8);
        let out = Varnode::unique(1, 4);
        let piece_insn = IrInsn::with_output(IrOp::Piece, pieced, smallvec![hi, lo], 0x1000);
        let sub_insn = IrInsn::with_output(
            IrOp::Subpiece,
            out,
            smallvec![pieced, Varnode::constant(0, 1)],
            0x1001,
        );

        let ssa = run_pass(vec![piece_insn, sub_insn]);
        assert_copy_var(rewritten_insn(&ssa, 1), lo);
    }

    /// Rule 5: SUBPIECE(PIECE(hi, lo), lo.size) where output_size == hi.size → hi.
    #[test]
    fn simplifies_subpiece_high_of_piece() {
        let hi = Varnode::reg(0, 4);
        let lo = Varnode::reg(4, 4);
        let pieced = Varnode::unique(0, 8);
        let out = Varnode::unique(1, 4);
        let piece_insn = IrInsn::with_output(IrOp::Piece, pieced, smallvec![hi, lo], 0x1000);
        // offset = lo.size = 4
        let sub_insn = IrInsn::with_output(
            IrOp::Subpiece,
            out,
            smallvec![pieced, Varnode::constant(4, 1)],
            0x1001,
        );

        let ssa = run_pass(vec![piece_insn, sub_insn]);
        assert_copy_var(rewritten_insn(&ssa, 1), hi);
    }

    /// Rule 6: PIECE(SUBPIECE(x, hi_off), SUBPIECE(x, 0)) → x (full reassembly).
    #[test]
    fn simplifies_piece_full_reassembly_to_input() {
        let x = Varnode::reg(0, 8);
        let hi_part = Varnode::unique(0, 4);
        let lo_part = Varnode::unique(1, 4);
        let out = Varnode::unique(2, 8);
        let hi_insn = IrInsn::with_output(
            IrOp::Subpiece,
            hi_part,
            smallvec![x, Varnode::constant(4, 1)],
            0x1000,
        );
        let lo_insn = IrInsn::with_output(
            IrOp::Subpiece,
            lo_part,
            smallvec![x, Varnode::constant(0, 1)],
            0x1001,
        );
        let piece_insn = IrInsn::with_output(IrOp::Piece, out, smallvec![hi_part, lo_part], 0x1002);

        let ssa = run_pass(vec![hi_insn, lo_insn, piece_insn]);
        assert_copy_var(rewritten_insn(&ssa, 2), x);
    }

    /// Rule 7: SUBPIECE(x | mask_high, 0) → SUBPIECE(x, 0) when the mask's low
    /// bytes (those covered by the SUBPIECE output) are zero.
    #[test]
    fn simplifies_subpiece_of_or_with_high_only_mask() {
        // 8-byte x; SUBPIECE keeps the low 4 bytes (offset 0, size 4).
        // mask = 0xFFFF_FFFF_0000_0000 → low 4 bytes are zero, so the OR
        // cannot affect the kept slice and can be peeled away.
        let x = Varnode::reg(0, 8);
        let or_out = Varnode::unique(0, 8);
        let sub_out = Varnode::unique(1, 4);
        let mask = Varnode::constant(0xFFFF_FFFF_0000_0000, 8);
        let or_insn = IrInsn::with_output(IrOp::IntOr, or_out, smallvec![x, mask], 0x1000);
        let sub_insn = IrInsn::with_output(
            IrOp::Subpiece,
            sub_out,
            smallvec![or_out, Varnode::constant(0, 1)],
            0x1001,
        );

        let ssa = run_pass(vec![or_insn, sub_insn]);
        let rewritten = rewritten_insn(&ssa, 1);
        assert_eq!(rewritten.op, IrOp::Subpiece);
        assert_eq!(rewritten.inputs.len(), 2);
        assert_eq!(rewritten.inputs[0], x);
        assert_eq!(rewritten.inputs[1].space, SpaceId::Const);
        assert_eq!(rewritten.inputs[1].offset, 0);
    }

    /// Negative companion to rule 7: if any low bit of the mask is set, the OR
    /// must NOT be peeled away.
    #[test]
    fn does_not_simplify_subpiece_of_or_when_mask_touches_low_bytes() {
        let x = Varnode::reg(0, 8);
        let or_out = Varnode::unique(0, 8);
        let sub_out = Varnode::unique(1, 4);
        // Mask sets bit 0 → low 4 bytes are nonzero in the mask.
        let mask = Varnode::constant(0x0000_0000_0000_0001, 8);
        let or_insn = IrInsn::with_output(IrOp::IntOr, or_out, smallvec![x, mask], 0x1000);
        let sub_insn = IrInsn::with_output(
            IrOp::Subpiece,
            sub_out,
            smallvec![or_out, Varnode::constant(0, 1)],
            0x1001,
        );

        // Pass should make no changes.
        let mut ssa = make_single_block_ssa(vec![or_insn, sub_insn]);
        let changed = AlgebraicSimplifyPass
            .run(&mut ssa)
            .expect("pass should succeed");
        assert!(
            !changed,
            "subpiece should not simplify when mask touches low bytes"
        );
        let rewritten = rewritten_insn(&ssa, 1);
        assert_eq!(rewritten.op, IrOp::Subpiece);
        assert_eq!(rewritten.inputs[0], or_out);
    }

    // ---- Memory access pattern rules (rules 1-3, 6-7) ----

    /// Rule 1: `*(p + 0) → *p` for LOAD's address operand.
    #[test]
    fn simplifies_load_addr_plus_zero() {
        let p = Varnode::reg(0, 8);
        let addr = Varnode::unique(0, 8);
        let val = Varnode::unique(1, 4);
        let space = Varnode::constant(SpaceId::Ram as u64, 8);

        // addr = p + 0
        let add_insn = IrInsn::with_output(
            IrOp::IntAdd,
            addr,
            smallvec![p, Varnode::constant(0, 8)],
            0x1000,
        );
        // val = LOAD ram, addr
        let load_insn = IrInsn::with_output(IrOp::Load, val, smallvec![space, addr], 0x1004);

        let ssa = run_pass(vec![add_insn, load_insn]);
        // The LOAD's address operand should now refer to `p` directly.
        let load = rewritten_insn(&ssa, 1);
        assert_eq!(load.op, IrOp::Load);
        assert_eq!(load.inputs.len(), 2);
        assert_eq!(load.inputs[0], space);
        assert_eq!(load.inputs[1], p);
    }

    /// Rule 1 (commutative form): `*(0 + p) → *p`.
    #[test]
    fn simplifies_load_addr_zero_plus_p() {
        let p = Varnode::reg(0, 8);
        let addr = Varnode::unique(0, 8);
        let val = Varnode::unique(1, 4);
        let space = Varnode::constant(SpaceId::Ram as u64, 8);

        let add_insn = IrInsn::with_output(
            IrOp::IntAdd,
            addr,
            smallvec![Varnode::constant(0, 8), p],
            0x1000,
        );
        let load_insn = IrInsn::with_output(IrOp::Load, val, smallvec![space, addr], 0x1004);

        let ssa = run_pass(vec![add_insn, load_insn]);
        let load = rewritten_insn(&ssa, 1);
        assert_eq!(load.op, IrOp::Load);
        assert_eq!(load.inputs[1], p);
    }

    /// Rule 1 + STORE: `STORE ..., (p + 0), v → STORE ..., p, v`.
    #[test]
    fn simplifies_store_addr_plus_zero() {
        let p = Varnode::reg(0, 8);
        let v = Varnode::reg(8, 4);
        let addr = Varnode::unique(0, 8);
        let space = Varnode::constant(SpaceId::Ram as u64, 8);

        let add_insn = IrInsn::with_output(
            IrOp::IntAdd,
            addr,
            smallvec![p, Varnode::constant(0, 8)],
            0x1000,
        );
        let store_insn = IrInsn::without_output(IrOp::Store, smallvec![space, addr, v], 0x1004);

        let ssa = run_pass(vec![add_insn, store_insn]);
        let store = rewritten_insn(&ssa, 1);
        assert_eq!(store.op, IrOp::Store);
        assert_eq!(store.inputs.len(), 3);
        assert_eq!(store.inputs[0], space);
        assert_eq!(store.inputs[1], p);
        assert_eq!(store.inputs[2], v);
        assert!(store.output.is_none(), "STORE must remain output-less");
    }

    /// Rule 2: `(p + 0) → p`. Already covered by `simplify_commutative_const`
    /// on `IntAdd`; this test demonstrates the rule applies to pointer-typed
    /// (8-byte) registers identically.
    #[test]
    fn simplifies_ptr_add_zero_to_input() {
        let out = Varnode::unique(0, 8);
        let p = Varnode::reg(0, 8);
        let insn = IrInsn::with_output(
            IrOp::IntAdd,
            out,
            smallvec![p, Varnode::constant(0, 8)],
            0x1000,
        );

        let ssa = run_pass(vec![insn]);
        assert_copy_var(rewritten_insn(&ssa, 0), p);
    }

    /// Rule 3: `*(p - 0) → *p`.
    #[test]
    fn simplifies_load_addr_minus_zero() {
        let p = Varnode::reg(0, 8);
        let addr = Varnode::unique(0, 8);
        let val = Varnode::unique(1, 4);
        let space = Varnode::constant(SpaceId::Ram as u64, 8);

        let sub_insn = IrInsn::with_output(
            IrOp::IntSub,
            addr,
            smallvec![p, Varnode::constant(0, 8)],
            0x1000,
        );
        let load_insn = IrInsn::with_output(IrOp::Load, val, smallvec![space, addr], 0x1004);

        let ssa = run_pass(vec![sub_insn, load_insn]);
        let load = rewritten_insn(&ssa, 1);
        assert_eq!(load.op, IrOp::Load);
        assert_eq!(load.inputs[1], p);
    }

    /// Rules 4 (`*(&x) → x`) and 5 (`&(*p) → p`) are not implementable in
    /// this IR — there is no explicit address-of operator. This regression
    /// test documents that intent: a LOAD whose address is just a register
    /// (i.e. the closest analogue of `&x`) is **not** simplified away.
    #[test]
    fn does_not_simplify_load_of_bare_register() {
        let p = Varnode::reg(0, 8);
        let val = Varnode::unique(0, 4);
        let space = Varnode::constant(SpaceId::Ram as u64, 8);
        let load_insn = IrInsn::with_output(IrOp::Load, val, smallvec![space, p], 0x1000);

        // No other instructions; the helper appends a RETURN automatically.
        let mut ssa = make_single_block_ssa(vec![load_insn]);
        let changed = AlgebraicSimplifyPass
            .run(&mut ssa)
            .expect("pass should succeed");
        assert!(!changed, "LOAD of a bare register must not be simplified");
    }

    /// Rule 6: `(p + 4) + 8 → p + 12`.
    #[test]
    fn folds_chained_pointer_offsets() {
        let p = Varnode::reg(0, 8);
        let mid = Varnode::unique(0, 8);
        let out = Varnode::unique(1, 8);
        let inner_add = IrInsn::with_output(
            IrOp::IntAdd,
            mid,
            smallvec![p, Varnode::constant(4, 8)],
            0x1000,
        );
        let outer_add = IrInsn::with_output(
            IrOp::IntAdd,
            out,
            smallvec![mid, Varnode::constant(8, 8)],
            0x1004,
        );

        let ssa = run_pass(vec![inner_add, outer_add]);
        let folded = rewritten_insn(&ssa, 1);
        assert_eq!(folded.op, IrOp::IntAdd);
        assert_eq!(folded.inputs.len(), 2);
        assert_eq!(folded.inputs[0], p);
        assert_eq!(folded.inputs[1], Varnode::constant(12, 8));
    }

    /// Rule 6 (commutative inner): `(4 + p) + 8 → p + 12`.
    #[test]
    fn folds_chained_pointer_offsets_inner_commutative() {
        let p = Varnode::reg(0, 8);
        let mid = Varnode::unique(0, 8);
        let out = Varnode::unique(1, 8);
        let inner_add = IrInsn::with_output(
            IrOp::IntAdd,
            mid,
            smallvec![Varnode::constant(4, 8), p],
            0x1000,
        );
        let outer_add = IrInsn::with_output(
            IrOp::IntAdd,
            out,
            smallvec![mid, Varnode::constant(8, 8)],
            0x1004,
        );

        let ssa = run_pass(vec![inner_add, outer_add]);
        let folded = rewritten_insn(&ssa, 1);
        assert_eq!(folded.op, IrOp::IntAdd);
        assert_eq!(folded.inputs[0], p);
        assert_eq!(folded.inputs[1], Varnode::constant(12, 8));
    }

    /// Rule 7: `(p + 16) - 4 → p + 12`.
    #[test]
    fn folds_chained_pointer_offset_sub() {
        let p = Varnode::reg(0, 8);
        let mid = Varnode::unique(0, 8);
        let out = Varnode::unique(1, 8);
        let inner_add = IrInsn::with_output(
            IrOp::IntAdd,
            mid,
            smallvec![p, Varnode::constant(16, 8)],
            0x1000,
        );
        let sub_insn = IrInsn::with_output(
            IrOp::IntSub,
            out,
            smallvec![mid, Varnode::constant(4, 8)],
            0x1004,
        );

        let ssa = run_pass(vec![inner_add, sub_insn]);
        let folded = rewritten_insn(&ssa, 1);
        assert_eq!(folded.op, IrOp::IntAdd);
        assert_eq!(folded.inputs[0], p);
        assert_eq!(folded.inputs[1], Varnode::constant(12, 8));
    }

    /// Rule 7 (wrapping): `(p + 4) - 8 → p + (-4)` masked to result size.
    #[test]
    fn folds_chained_pointer_offset_sub_wraps() {
        let p = Varnode::reg(0, 8);
        let mid = Varnode::unique(0, 8);
        let out = Varnode::unique(1, 8);
        let inner_add = IrInsn::with_output(
            IrOp::IntAdd,
            mid,
            smallvec![p, Varnode::constant(4, 8)],
            0x1000,
        );
        let sub_insn = IrInsn::with_output(
            IrOp::IntSub,
            out,
            smallvec![mid, Varnode::constant(8, 8)],
            0x1004,
        );

        let ssa = run_pass(vec![inner_add, sub_insn]);
        let folded = rewritten_insn(&ssa, 1);
        assert_eq!(folded.op, IrOp::IntAdd);
        assert_eq!(folded.inputs[0], p);
        // 4u64.wrapping_sub(8) == 0xFFFFFFFFFFFFFFFC
        assert_eq!(folded.inputs[1], Varnode::constant(4u64.wrapping_sub(8), 8));
    }

    /// Negative test for rule 6: `(p + r) + 4` should NOT fold (`r` is not const).
    #[test]
    fn does_not_fold_when_inner_offset_is_not_const() {
        let p = Varnode::reg(0, 8);
        let r = Varnode::reg(8, 8);
        let mid = Varnode::unique(0, 8);
        let out = Varnode::unique(1, 8);
        let inner_add = IrInsn::with_output(IrOp::IntAdd, mid, smallvec![p, r], 0x1000);
        let outer_add = IrInsn::with_output(
            IrOp::IntAdd,
            out,
            smallvec![mid, Varnode::constant(4, 8)],
            0x1004,
        );

        // Pass should run but the outer add must remain `mid + 4`.
        let mut ssa = make_single_block_ssa(vec![inner_add, outer_add]);
        let _ = AlgebraicSimplifyPass
            .run(&mut ssa)
            .expect("pass should succeed");
        let outer = &ssa.function.blocks.values().next().unwrap().insns[1];
        assert_eq!(outer.op, IrOp::IntAdd);
        assert_eq!(outer.inputs.len(), 2);
        assert_eq!(outer.inputs[0], mid);
        assert_eq!(outer.inputs[1], Varnode::constant(4, 8));
    }

    // ─── Task 248: Comparison strengthening tests ─────────────────────────

    /// `IntEqual(IntXor(x, y), 0)` → `IntEqual(x, y)`
    #[test]
    fn xor_then_equal_zero_becomes_direct_equal() {
        let x = Varnode::reg(0, 4);
        let y = Varnode::reg(8, 4);
        let xor_out = Varnode::unique(0, 4);
        let cmp_out = Varnode::unique(4, 1);

        let xor_insn = IrInsn::with_output(IrOp::IntXor, xor_out, smallvec![x, y], 0x1000);
        let cmp_insn = IrInsn::with_output(
            IrOp::IntEqual,
            cmp_out,
            smallvec![xor_out, Varnode::constant(0, 4)],
            0x1004,
        );

        let ssa = run_pass(vec![xor_insn, cmp_insn]);
        let folded = rewritten_insn(&ssa, 1);
        assert_eq!(folded.op, IrOp::IntEqual);
        assert_eq!(folded.inputs.len(), 2);
        assert_eq!(folded.inputs[0], x);
        assert_eq!(folded.inputs[1], y);
    }

    /// `IntNotequal(IntXor(x, y), 0)` → `IntNotequal(x, y)`
    #[test]
    fn xor_then_notequal_zero_becomes_direct_notequal() {
        let x = Varnode::reg(0, 4);
        let y = Varnode::reg(8, 4);
        let xor_out = Varnode::unique(0, 4);
        let cmp_out = Varnode::unique(4, 1);

        let xor_insn = IrInsn::with_output(IrOp::IntXor, xor_out, smallvec![x, y], 0x1000);
        let cmp_insn = IrInsn::with_output(
            IrOp::IntNotequal,
            cmp_out,
            smallvec![xor_out, Varnode::constant(0, 4)],
            0x1004,
        );

        let ssa = run_pass(vec![xor_insn, cmp_insn]);
        let folded = rewritten_insn(&ssa, 1);
        assert_eq!(folded.op, IrOp::IntNotequal);
        assert_eq!(folded.inputs.len(), 2);
        assert_eq!(folded.inputs[0], x);
        assert_eq!(folded.inputs[1], y);
    }

    // ─── Task 249: Sign-extension elimination tests ──────────────────────

    /// `IntSext(IntSext(x))` → `IntSext(x)` (collapse double sign-extend)
    #[test]
    fn double_sext_collapses() {
        let x = Varnode::reg(0, 2); // 2-byte input
        let mid = Varnode::unique(0, 4); // sext to 4 bytes
        let out = Varnode::unique(8, 8); // sext to 8 bytes

        let inner = IrInsn::with_output(IrOp::IntSext, mid, smallvec![x], 0x1000);
        let outer = IrInsn::with_output(IrOp::IntSext, out, smallvec![mid], 0x1004);

        let ssa = run_pass(vec![inner, outer]);
        let folded = rewritten_insn(&ssa, 1);
        assert_eq!(folded.op, IrOp::IntSext);
        assert_eq!(folded.inputs.len(), 1);
        assert_eq!(folded.inputs[0], x); // directly extends from the original
    }

    /// `IntSext(x)` where x's size == output size → `Copy(x)`
    #[test]
    fn sext_of_already_wide_value_becomes_copy() {
        let x = Varnode::reg(0, 4);
        let out = Varnode::unique(0, 4); // same size as input

        let sext_insn = IrInsn::with_output(IrOp::IntSext, out, smallvec![x], 0x1000);

        let ssa = run_pass(vec![sext_insn]);
        let folded = rewritten_insn(&ssa, 0);
        assert_eq!(folded.op, IrOp::Copy);
        assert_eq!(folded.inputs.len(), 1);
        assert_eq!(folded.inputs[0], x);
    }

    /// `IntZext(IntZext(x))` → `IntZext(x)` (collapse double zero-extend)
    #[test]
    fn double_zext_collapses() {
        let x = Varnode::reg(0, 2);
        let mid = Varnode::unique(0, 4);
        let out = Varnode::unique(8, 8);

        let inner = IrInsn::with_output(IrOp::IntZext, mid, smallvec![x], 0x1000);
        let outer = IrInsn::with_output(IrOp::IntZext, out, smallvec![mid], 0x1004);

        let ssa = run_pass(vec![inner, outer]);
        let folded = rewritten_insn(&ssa, 1);
        assert_eq!(folded.op, IrOp::IntZext);
        assert_eq!(folded.inputs.len(), 1);
        assert_eq!(folded.inputs[0], x);
    }

    // ─── Task 252: self-referential expression collapse ──────────────────

    /// `IntSub(x, x)` → `Const(0)`  (Sub variant of self-reference collapse).
    /// Verifies the existing same-SSA rule is wired up for IntSub.
    #[test]
    fn sub_self_collapses_to_zero_t252() {
        let out = Varnode::unique(0, 8);
        let x = Varnode::reg(0, 8);
        let insn = IrInsn::with_output(IrOp::IntSub, out, smallvec![x, x], 0x1000);

        let ssa = run_pass(vec![insn]);
        assert_copy_const(rewritten_insn(&ssa, 0), 0, 8);
    }

    /// `IntEqual(x, x)` → `Const(1)`  (always true).
    #[test]
    fn equal_self_collapses_to_one_t252() {
        let out = Varnode::unique(0, 1);
        let x = Varnode::reg(0, 4);
        let insn = IrInsn::with_output(IrOp::IntEqual, out, smallvec![x, x], 0x1000);

        let ssa = run_pass(vec![insn]);
        assert_copy_const(rewritten_insn(&ssa, 0), 1, 1);
    }

    /// `IntNotequal(x, x)` → `Const(0)`  (always false).
    #[test]
    fn notequal_self_collapses_to_zero_t252() {
        let out = Varnode::unique(0, 1);
        let x = Varnode::reg(0, 4);
        let insn = IrInsn::with_output(IrOp::IntNotequal, out, smallvec![x, x], 0x1000);

        let ssa = run_pass(vec![insn]);
        assert_copy_const(rewritten_insn(&ssa, 0), 0, 1);
    }

    /// `Multiequal(x, x)` → `Copy(x)` (phi/select with identical SSA inputs
    /// collapses to the underlying value — the "Select(cond, x, x) → x"
    /// idiom expressed at SSA level).
    #[test]
    fn select_same_collapses_to_identity_t252() {
        // Build a two-block SSA function where both predecessors feed the
        // same SSA varnode into a Multiequal at the join point.
        //
        //  bb0:  out0 = COPY x         (defines v_x)
        //        BRANCH bb1
        //  bb1:  phi  = MULTIEQUAL v_x, v_x
        //        (this is the degenerate "select(cond, x, x)" case)
        //
        // Single-block is simpler though: emit a Multiequal whose two
        // inputs both reference the same SSA def. Both inputs use the
        // same source varnode so build_ssa assigns identical SSA ids.
        let x = Varnode::reg(0, 4);
        let phi_out = Varnode::unique(0, 4);
        let phi_insn = IrInsn::with_output(IrOp::Multiequal, phi_out, smallvec![x, x], 0x1000);

        let ssa = run_pass(vec![phi_insn]);
        let folded = rewritten_insn(&ssa, 0);
        assert_eq!(folded.op, IrOp::Copy);
        assert_eq!(folded.inputs.len(), 1);
        assert_eq!(folded.inputs[0], x);
    }
}
