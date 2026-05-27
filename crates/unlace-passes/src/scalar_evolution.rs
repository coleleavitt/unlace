//! Small ScalarEvolution-style loop facts.
//!
//! This is intentionally an analysis API, not a mutating pass.  It gives
//! downstream recovery code a shared place to ask for GCC/LLVM-like facts:
//! basic add recurrences, affine expressions derived from those recurrences,
//! and loop exit compares.  Keeping it side-table shaped avoids forcing a new
//! field into `SsaFunction` while the analysis is still growing.

use std::collections::{BTreeMap, BTreeSet};

use unlace_ir::ssa::{PrimitiveType, SsaFunction, SsaVarnode, VarnodeSlot};
use unlace_ir::{BlockId, IrInsn, IrOp, SpaceId, Varnode};

use crate::iv_elim::detect_basic_ivs;
use crate::licm::find_natural_loops;

const MAX_EXPR_DEPTH: usize = 16;

#[derive(Clone, Debug, PartialEq, Eq)]
pub enum ScevExpr {
    Const {
        value: u64,
        size: u8,
    },
    Value(SsaVarnode),
    Add(Box<ScevExpr>, Box<ScevExpr>),
    AddConst(Box<ScevExpr>, i64),
    MulConst(Box<ScevExpr>, i64),
    AddRec {
        loop_header: BlockId,
        start: Box<ScevExpr>,
        step: i64,
    },
    /// Zero-extend cast (from narrower to wider).
    ZextCast {
        inner: Box<ScevExpr>,
        from_width: u8,
        to_width: u8,
    },
    /// Sign-extend cast.
    SextCast {
        inner: Box<ScevExpr>,
        from_width: u8,
        to_width: u8,
    },
    /// Truncate cast.
    TruncCast {
        inner: Box<ScevExpr>,
        to_width: u8,
    },
    /// Unsigned min(a, b).
    UMin(Box<ScevExpr>, Box<ScevExpr>),
    /// Unsigned max(a, b).
    UMax(Box<ScevExpr>, Box<ScevExpr>),
    /// Signed min(a, b).
    SMin(Box<ScevExpr>, Box<ScevExpr>),
    /// Signed max(a, b).
    SMax(Box<ScevExpr>, Box<ScevExpr>),
    /// Unsigned division.
    UDiv(Box<ScevExpr>, Box<ScevExpr>),
    /// Could not compute (analysis gave up).
    CouldNotCompute,
    Unknown,
}

impl ScevExpr {
    /// Evaluate this SCEV expression at a specific iteration count.
    ///
    /// For `AddRec { start, step }` at iteration `n`, returns `start + step * n`.
    /// For non-recurrence expressions, returns the expression unchanged (wrapped in const if possible).
    pub fn evaluate_at_iteration(&self, n: u64) -> ScevExpr {
        match self {
            ScevExpr::AddRec { start, step, .. } => {
                let start_val = start.evaluate_at_iteration(n);
                let step_contrib = (*step as i128).wrapping_mul(n as i128) as i64;
                match start_val {
                    ScevExpr::Const { value, size } => ScevExpr::Const {
                        value: (value as i64).wrapping_add(step_contrib) as u64,
                        size,
                    },
                    other => ScevExpr::AddConst(Box::new(other), step_contrib),
                }
            }
            ScevExpr::Const { .. } => self.clone(),
            ScevExpr::AddConst(inner, c) => {
                let inner_val = inner.evaluate_at_iteration(n);
                match inner_val {
                    ScevExpr::Const { value, size } => ScevExpr::Const {
                        value: (value as i64).wrapping_add(*c) as u64,
                        size,
                    },
                    other => ScevExpr::AddConst(Box::new(other), *c),
                }
            }
            ScevExpr::MulConst(inner, c) => {
                let inner_val = inner.evaluate_at_iteration(n);
                match inner_val {
                    ScevExpr::Const { value, size } => ScevExpr::Const {
                        value: (value as i64).wrapping_mul(*c) as u64,
                        size,
                    },
                    other => ScevExpr::MulConst(Box::new(other), *c),
                }
            }
            _ => self.clone(),
        }
    }

    /// Whether this expression could not be computed.
    pub fn is_could_not_compute(&self) -> bool {
        matches!(self, ScevExpr::CouldNotCompute)
    }

    /// Whether this is a constant.
    pub fn as_const(&self) -> Option<u64> {
        match self {
            ScevExpr::Const { value, .. } => Some(*value),
            _ => None,
        }
    }
}

/// Compute the trip count for a simple counted loop.
///
/// Given a loop with IV starting at `start`, stepping by `step`, and exiting
/// when `iv <pred> bound`, returns the number of iterations (trip count).
///
/// Returns `None` if the trip count cannot be determined statically.
pub fn compute_trip_count(
    start: u64,
    step: i64,
    bound: u64,
    predicate: LoopExitPredicate,
) -> Option<u64> {
    if step == 0 {
        return None; // infinite or zero-trip depending on condition
    }

    match predicate {
        LoopExitPredicate::Ult => {
            // Loop continues while iv < bound.
            if start >= bound {
                return Some(0);
            }
            if step > 0 {
                let distance = bound - start;
                Some(distance.div_ceil(step as u64))
            } else {
                None // step < 0 with Ult — infinite or wrapping
            }
        }
        LoopExitPredicate::Ne => {
            // Loop continues while iv != bound.
            if start == bound {
                return Some(0);
            }
            if step > 0 && bound > start {
                let distance = bound - start;
                if distance.is_multiple_of(step as u64) {
                    Some(distance / step as u64)
                } else {
                    None // doesn't exactly hit the bound
                }
            } else if step < 0 && bound < start {
                let distance = start - bound;
                let abs_step = step.unsigned_abs();
                if distance.is_multiple_of(abs_step) {
                    Some(distance / abs_step)
                } else {
                    None
                }
            } else {
                None
            }
        }
        LoopExitPredicate::Slt => {
            // Signed less-than: loop continues while iv < bound (signed).
            let start_s = start as i64;
            let bound_s = bound as i64;
            if start_s >= bound_s {
                return Some(0);
            }
            if step > 0 {
                let distance = (bound_s - start_s) as u64;
                Some(distance.div_ceil(step as u64))
            } else {
                None
            }
        }
        _ => None, // Other predicates not yet handled
    }
}

#[derive(Clone, Debug, PartialEq, Eq)]
pub struct AffineIv {
    pub value: SsaVarnode,
    pub start: SsaVarnode,
    pub step: i64,
    pub loop_header: BlockId,
    pub latch_block: BlockId,
}

#[derive(Copy, Clone, Debug, PartialEq, Eq)]
pub enum LoopExitPredicate {
    Eq,
    Ne,
    Ult,
    Ule,
    Ugt,
    Uge,
    Slt,
    Sle,
    Sgt,
    Sge,
}

#[derive(Clone, Debug, PartialEq, Eq)]
pub struct LoopExitFact {
    pub exiting_block: BlockId,
    pub branch_insn: usize,
    pub condition: SsaVarnode,
    pub predicate: LoopExitPredicate,
    pub lhs: ScevExpr,
    pub rhs: ScevExpr,
    pub iv: Option<SsaVarnode>,
    pub bound: Option<ScevExpr>,
}

#[derive(Clone, Debug, PartialEq, Eq)]
pub struct LoopScevInfo {
    pub header: BlockId,
    pub body: BTreeSet<BlockId>,
    pub ivs: Vec<AffineIv>,
    pub exits: Vec<LoopExitFact>,
}

#[derive(Clone, Debug, PartialEq, Eq)]
pub struct TriangularSumReduction {
    pub loop_header: BlockId,
    pub bound: SsaVarnode,
    pub counter_iv: SsaVarnode,
    pub accumulator_phi: SsaVarnode,
    pub reduction_value: SsaVarnode,
}

pub fn analyze_loop_scevs(func: &SsaFunction) -> BTreeMap<BlockId, LoopScevInfo> {
    let mut out = BTreeMap::new();
    for nat in find_natural_loops(func) {
        let header = nat.header;
        let body_vec: Vec<BlockId> = nat.body.iter().copied().collect();
        let ivs: Vec<AffineIv> = detect_basic_ivs(func, header, &body_vec)
            .into_iter()
            .map(|iv| AffineIv {
                value: iv.phi_output,
                start: iv.init_sv,
                step: iv.step,
                loop_header: header,
                latch_block: iv.latch_block,
            })
            .collect();
        let exits = collect_exit_facts(func, header, &nat.body, &ivs);
        out.insert(
            header,
            LoopScevInfo {
                header,
                body: nat.body,
                ivs,
                exits,
            },
        );
    }
    out
}

pub fn derive_scev_expr(
    func: &SsaFunction,
    loop_header: BlockId,
    ivs: &[AffineIv],
    value: SsaVarnode,
) -> ScevExpr {
    derive_scev_expr_inner(func, loop_header, ivs, value, MAX_EXPR_DEPTH)
}

pub fn detect_triangular_sum_reduction(func: &SsaFunction) -> Option<TriangularSumReduction> {
    if !has_single_int_param(func) || has_memory_or_call_effects(func) {
        return None;
    }

    let loops = analyze_loop_scevs(func);
    for info in loops.values() {
        let Some(bound) = info
            .exits
            .iter()
            .find_map(|exit| match &exit.bound {
                Some(ScevExpr::Value(bound)) if exit.iv.is_some() => Some(*bound),
                _ => None,
            })
            .or_else(|| find_loop_bound_value(func, info))
        else {
            continue;
        };
        for &bid in &info.body {
            let Some(block) = func.function.blocks.get(&bid) else {
                continue;
            };
            for (idx, _insn) in block.insns.iter().enumerate() {
                let Some(&value) = func.var_map.get(&(bid, idx, VarnodeSlot::Output)) else {
                    continue;
                };
                let expr = derive_scev_expr(func, info.header, &info.ivs, value);
                if !looks_like_triangular_reduction_expr(&expr, &info.ivs) {
                    continue;
                }
                let Some(accumulator_phi) =
                    latch_copy_feeds_non_iv_phi(func, info.header, &info.body, value, &info.ivs)
                else {
                    continue;
                };
                let counter_iv = root_iv(&expr, &info.ivs)?;
                if returns_value(func, value) {
                    return Some(TriangularSumReduction {
                        loop_header: info.header,
                        bound,
                        counter_iv,
                        accumulator_phi,
                        reduction_value: value,
                    });
                }
            }
        }
    }
    None
}

fn collect_exit_facts(
    func: &SsaFunction,
    loop_header: BlockId,
    body: &BTreeSet<BlockId>,
    ivs: &[AffineIv],
) -> Vec<LoopExitFact> {
    let mut out = Vec::new();
    for &bid in body {
        let Some(block) = func.function.blocks.get(&bid) else {
            continue;
        };
        if !block.successors.iter().any(|succ| !body.contains(succ)) {
            continue;
        }
        for (idx, insn) in block.insns.iter().enumerate() {
            if insn.op != IrOp::Cbranch || insn.inputs.len() < 2 {
                continue;
            }
            let Some(&cond_sv) = func.var_map.get(&(bid, idx, VarnodeSlot::Input(1))) else {
                continue;
            };
            let Some((_, _, cond_def)) = find_def(func, cond_sv) else {
                continue;
            };
            let Some(pred) = predicate_for_op(cond_def.op) else {
                continue;
            };
            if cond_def.inputs.len() < 2 {
                continue;
            }
            let lhs = expr_for_operand(
                func,
                loop_header,
                ivs,
                bid,
                idx_of_def_input(func, cond_sv, 0),
                cond_def.inputs[0],
            );
            let rhs = expr_for_operand(
                func,
                loop_header,
                ivs,
                bid,
                idx_of_def_input(func, cond_sv, 1),
                cond_def.inputs[1],
            );
            let (predicate, iv, bound) = classify_exit_sides(pred, &lhs, &rhs, ivs);
            out.push(LoopExitFact {
                exiting_block: bid,
                branch_insn: idx,
                condition: cond_sv,
                predicate,
                lhs,
                rhs,
                iv,
                bound,
            });
        }
    }
    out
}

fn has_single_int_param(func: &SsaFunction) -> bool {
    let params: Vec<_> = func
        .finalized_signature
        .as_ref()
        .map(|sig| {
            sig.params
                .iter()
                .map(|(_, ty)| primitive_type_from_type(ty))
                .collect()
        })
        .unwrap_or_else(|| {
            func.inferred_params
                .iter()
                .map(|(_, ty)| Some(*ty))
                .collect()
        });
    matches!(
        params.as_slice(),
        [Some(PrimitiveType::Int(_) | PrimitiveType::UnsignedInt(_))]
    )
}

fn find_loop_bound_value(func: &SsaFunction, info: &LoopScevInfo) -> Option<SsaVarnode> {
    for &bid in &info.body {
        let Some(block) = func.function.blocks.get(&bid) else {
            continue;
        };
        for (idx, insn) in block.insns.iter().enumerate() {
            if !matches!(
                insn.op,
                IrOp::IntEqual
                    | IrOp::IntNotequal
                    | IrOp::IntLess
                    | IrOp::IntLessequal
                    | IrOp::IntSless
                    | IrOp::IntSlessequal
                    | IrOp::IntSub
                    | IrOp::IntSborrow
            ) || insn.inputs.len() < 2
            {
                continue;
            }
            let lhs = expr_for_def_input(
                func,
                info.header,
                &info.ivs,
                bid,
                idx,
                0,
                insn.inputs[0],
                MAX_EXPR_DEPTH,
            );
            let rhs = expr_for_def_input(
                func,
                info.header,
                &info.ivs,
                bid,
                idx,
                1,
                insn.inputs[1],
                MAX_EXPR_DEPTH,
            );
            if root_iv(&lhs, &info.ivs).is_some()
                && let ScevExpr::Value(bound) = rhs
            {
                return Some(bound);
            }
            if root_iv(&rhs, &info.ivs).is_some()
                && let ScevExpr::Value(bound) = lhs
            {
                return Some(bound);
            }
        }
    }
    None
}

fn primitive_type_from_type(ty: &unlace_ir::types::Type) -> Option<PrimitiveType> {
    match ty {
        unlace_ir::types::Type::Primitive(p) => Some(*p),
        _ => None,
    }
}

fn has_memory_or_call_effects(func: &SsaFunction) -> bool {
    func.function.blocks.values().any(|block| {
        block.insns.iter().any(|insn| {
            matches!(
                insn.op,
                IrOp::Load
                    | IrOp::Store
                    | IrOp::Call
                    | IrOp::Callind
                    | IrOp::Branchind
                    | IrOp::AtomicLoad
                    | IrOp::AtomicStore
                    | IrOp::AtomicRmw
                    | IrOp::AtomicCas
            )
        })
    })
}

fn looks_like_triangular_reduction_expr(expr: &ScevExpr, ivs: &[AffineIv]) -> bool {
    match expr {
        ScevExpr::AddConst(inner, 1) => {
            contains_non_iv_value(inner, ivs) && contains_mul_addrec_by_two(inner)
        }
        _ => false,
    }
}

fn contains_non_iv_value(expr: &ScevExpr, ivs: &[AffineIv]) -> bool {
    match expr {
        ScevExpr::Value(v) => !ivs.iter().any(|iv| iv.value == *v),
        ScevExpr::Add(lhs, rhs) => {
            contains_non_iv_value(lhs, ivs) || contains_non_iv_value(rhs, ivs)
        }
        ScevExpr::AddConst(inner, _) | ScevExpr::MulConst(inner, _) => {
            contains_non_iv_value(inner, ivs)
        }
        _ => false,
    }
}

fn contains_mul_addrec_by_two(expr: &ScevExpr) -> bool {
    match expr {
        ScevExpr::MulConst(inner, 2) => matches!(inner.as_ref(), ScevExpr::AddRec { .. }),
        ScevExpr::Add(lhs, rhs) => {
            contains_mul_addrec_by_two(lhs) || contains_mul_addrec_by_two(rhs)
        }
        ScevExpr::AddConst(inner, _) => contains_mul_addrec_by_two(inner),
        _ => false,
    }
}

fn latch_copy_feeds_non_iv_phi(
    func: &SsaFunction,
    header: BlockId,
    body: &BTreeSet<BlockId>,
    value: SsaVarnode,
    ivs: &[AffineIv],
) -> Option<SsaVarnode> {
    let phis = func.phi_map.get(&header)?;
    for phi in phis {
        if ivs.iter().any(|iv| iv.value == phi.output) {
            continue;
        }
        for &(pred, input) in &phi.inputs {
            if !body.contains(&pred) {
                continue;
            }
            if input == value || copy_source(func, input) == Some(value) {
                return Some(phi.output);
            }
        }
    }
    None
}

fn copy_source(func: &SsaFunction, value: SsaVarnode) -> Option<SsaVarnode> {
    let (bid, idx, insn) = find_def(func, value)?;
    if !matches!(insn.op, IrOp::Copy | IrOp::Cast) || insn.inputs.len() != 1 {
        return None;
    }
    func.var_map
        .get(&(bid, idx, VarnodeSlot::Input(0)))
        .copied()
}

fn returns_value(func: &SsaFunction, value: SsaVarnode) -> bool {
    for (&bid, block) in &func.function.blocks {
        for (idx, insn) in block.insns.iter().enumerate() {
            if insn.op != IrOp::Return || insn.inputs.is_empty() {
                continue;
            }
            for input_idx in 0..insn.inputs.len() {
                if func
                    .var_map
                    .get(&(bid, idx, VarnodeSlot::Input(input_idx)))
                    .copied()
                    == Some(value)
                {
                    return true;
                }
            }
        }
    }
    false
}

fn idx_of_def_input(
    func: &SsaFunction,
    def: SsaVarnode,
    input_idx: usize,
) -> Option<(BlockId, usize, VarnodeSlot)> {
    let (bid, idx, _) = find_def(func, def)?;
    Some((bid, idx, VarnodeSlot::Input(input_idx)))
}

fn expr_for_operand(
    func: &SsaFunction,
    loop_header: BlockId,
    ivs: &[AffineIv],
    _use_bid: BlockId,
    def_input_slot: Option<(BlockId, usize, VarnodeSlot)>,
    operand: Varnode,
) -> ScevExpr {
    if operand.space == SpaceId::Const {
        return ScevExpr::Const {
            value: operand.offset,
            size: operand.size,
        };
    }
    let Some(slot) = def_input_slot else {
        return ScevExpr::Unknown;
    };
    let Some(&sv) = func.var_map.get(&slot) else {
        return ScevExpr::Unknown;
    };
    derive_scev_expr_inner(func, loop_header, ivs, sv, MAX_EXPR_DEPTH)
}

fn derive_scev_expr_inner(
    func: &SsaFunction,
    loop_header: BlockId,
    ivs: &[AffineIv],
    value: SsaVarnode,
    depth: usize,
) -> ScevExpr {
    if depth == 0 {
        return ScevExpr::Unknown;
    }
    if let Some(iv) = ivs
        .iter()
        .find(|iv| iv.value == value || same_storage(iv.value.base, value.base))
    {
        return ScevExpr::AddRec {
            loop_header,
            start: Box::new(ScevExpr::Value(iv.start)),
            step: iv.step,
        };
    }
    let Some((bid, idx, insn)) = find_def(func, value) else {
        return ScevExpr::Value(value);
    };
    match insn.op {
        IrOp::Copy | IrOp::Cast | IrOp::IntZext | IrOp::IntSext if insn.inputs.len() == 1 => {
            expr_for_def_input(
                func,
                loop_header,
                ivs,
                bid,
                idx,
                0,
                insn.inputs[0],
                depth - 1,
            )
        }
        IrOp::IntAdd if insn.inputs.len() == 2 => {
            let lhs = expr_for_def_input(
                func,
                loop_header,
                ivs,
                bid,
                idx,
                0,
                insn.inputs[0],
                depth - 1,
            );
            let rhs = expr_for_def_input(
                func,
                loop_header,
                ivs,
                bid,
                idx,
                1,
                insn.inputs[1],
                depth - 1,
            );
            fold_add(lhs, rhs)
        }
        IrOp::IntSub if insn.inputs.len() == 2 => {
            let lhs = expr_for_def_input(
                func,
                loop_header,
                ivs,
                bid,
                idx,
                0,
                insn.inputs[0],
                depth - 1,
            );
            if insn.inputs[1].space == SpaceId::Const {
                ScevExpr::AddConst(Box::new(lhs), -(insn.inputs[1].offset as i64))
            } else {
                ScevExpr::Unknown
            }
        }
        IrOp::IntMult if insn.inputs.len() == 2 && insn.inputs[1].space == SpaceId::Const => {
            let lhs = expr_for_def_input(
                func,
                loop_header,
                ivs,
                bid,
                idx,
                0,
                insn.inputs[0],
                depth - 1,
            );
            ScevExpr::MulConst(Box::new(lhs), insn.inputs[1].offset as i64)
        }
        IrOp::IntLeft if insn.inputs.len() == 2 && insn.inputs[1].space == SpaceId::Const => {
            let shift = insn.inputs[1].offset;
            if shift < 63 {
                let lhs = expr_for_def_input(
                    func,
                    loop_header,
                    ivs,
                    bid,
                    idx,
                    0,
                    insn.inputs[0],
                    depth - 1,
                );
                ScevExpr::MulConst(Box::new(lhs), 1_i64 << shift)
            } else {
                ScevExpr::Unknown
            }
        }
        _ => ScevExpr::Value(value),
    }
}

fn expr_for_def_input(
    func: &SsaFunction,
    loop_header: BlockId,
    ivs: &[AffineIv],
    bid: BlockId,
    idx: usize,
    input_idx: usize,
    operand: Varnode,
    depth: usize,
) -> ScevExpr {
    if operand.space == SpaceId::Const {
        return ScevExpr::Const {
            value: operand.offset,
            size: operand.size,
        };
    }
    let Some(&sv) = func.var_map.get(&(bid, idx, VarnodeSlot::Input(input_idx))) else {
        return ScevExpr::Unknown;
    };
    derive_scev_expr_inner(func, loop_header, ivs, sv, depth)
}

fn fold_add(lhs: ScevExpr, rhs: ScevExpr) -> ScevExpr {
    match (lhs, rhs) {
        (expr, ScevExpr::Const { value, .. }) | (ScevExpr::Const { value, .. }, expr) => {
            ScevExpr::AddConst(Box::new(expr), value as i64)
        }
        (lhs, rhs) => ScevExpr::Add(Box::new(lhs), Box::new(rhs)),
    }
}

fn classify_exit_sides(
    pred: LoopExitPredicate,
    lhs: &ScevExpr,
    rhs: &ScevExpr,
    ivs: &[AffineIv],
) -> (LoopExitPredicate, Option<SsaVarnode>, Option<ScevExpr>) {
    if let Some(iv) = root_iv(lhs, ivs) {
        return (pred, Some(iv), Some(rhs.clone()));
    }
    if let Some(iv) = root_iv(rhs, ivs) {
        return (reverse_predicate(pred), Some(iv), Some(lhs.clone()));
    }
    (pred, None, None)
}

fn root_iv(expr: &ScevExpr, ivs: &[AffineIv]) -> Option<SsaVarnode> {
    match expr {
        ScevExpr::Value(v) => ivs
            .iter()
            .find(|iv| iv.value == *v || same_storage(iv.value.base, v.base))
            .map(|iv| iv.value),
        ScevExpr::AddRec { start, .. } => match start.as_ref() {
            ScevExpr::Value(start_sv) => ivs
                .iter()
                .find(|iv| iv.start == *start_sv)
                .map(|iv| iv.value),
            _ => None,
        },
        ScevExpr::Add(lhs, rhs) => root_iv(lhs, ivs).or_else(|| root_iv(rhs, ivs)),
        ScevExpr::AddConst(inner, _) | ScevExpr::MulConst(inner, _) => root_iv(inner, ivs),
        _ => None,
    }
}

fn same_storage(a: Varnode, b: Varnode) -> bool {
    a.space == b.space && a.offset == b.offset
}

fn predicate_for_op(op: IrOp) -> Option<LoopExitPredicate> {
    match op {
        IrOp::IntEqual => Some(LoopExitPredicate::Eq),
        IrOp::IntNotequal => Some(LoopExitPredicate::Ne),
        IrOp::IntLess => Some(LoopExitPredicate::Ult),
        IrOp::IntLessequal => Some(LoopExitPredicate::Ule),
        IrOp::IntSless => Some(LoopExitPredicate::Slt),
        IrOp::IntSlessequal => Some(LoopExitPredicate::Sle),
        _ => None,
    }
}

fn reverse_predicate(pred: LoopExitPredicate) -> LoopExitPredicate {
    match pred {
        LoopExitPredicate::Eq => LoopExitPredicate::Eq,
        LoopExitPredicate::Ne => LoopExitPredicate::Ne,
        LoopExitPredicate::Ult => LoopExitPredicate::Ugt,
        LoopExitPredicate::Ule => LoopExitPredicate::Uge,
        LoopExitPredicate::Ugt => LoopExitPredicate::Ult,
        LoopExitPredicate::Uge => LoopExitPredicate::Ule,
        LoopExitPredicate::Slt => LoopExitPredicate::Sgt,
        LoopExitPredicate::Sle => LoopExitPredicate::Sge,
        LoopExitPredicate::Sgt => LoopExitPredicate::Slt,
        LoopExitPredicate::Sge => LoopExitPredicate::Sle,
    }
}

fn find_def(func: &SsaFunction, value: SsaVarnode) -> Option<(BlockId, usize, &IrInsn)> {
    for ((bid, idx, slot), sv) in &func.var_map {
        if *sv == value && matches!(slot, VarnodeSlot::Output) {
            let insn = func.function.blocks.get(bid)?.insns.get(*idx)?;
            return Some((*bid, *idx, insn));
        }
    }
    None
}

#[cfg(test)]
mod tests {
    use smallvec::smallvec;
    use unlace_ir::ssa::build_ssa;
    use unlace_ir::{BasicBlock, Function};

    use super::*;

    fn build_counted_loop() -> SsaFunction {
        let i = Varnode::reg(0, 4);
        let n = Varnode::reg(8, 4);
        let cmp = Varnode::reg(16, 1);
        let dbl = Varnode::reg(24, 4);
        let odd = Varnode::reg(32, 4);

        let mut func = Function::new("counted", BlockId(0), 0x1000);

        let mut b0 = BasicBlock::new(BlockId(0));
        b0.insns.push(IrInsn::with_output(
            IrOp::Copy,
            i,
            smallvec![Varnode::constant(0, 4)],
            0x1000,
        ));
        b0.insns
            .push(IrInsn::without_output(IrOp::Branch, smallvec![], 0x1004));
        b0.successors = smallvec![BlockId(1)];

        let mut b1 = BasicBlock::new(BlockId(1));
        b1.insns.push(IrInsn::with_output(
            IrOp::IntLess,
            cmp,
            smallvec![i, n],
            0x1100,
        ));
        b1.insns.push(IrInsn::with_output(
            IrOp::IntLeft,
            dbl,
            smallvec![i, Varnode::constant(1, 4)],
            0x1104,
        ));
        b1.insns.push(IrInsn::with_output(
            IrOp::IntAdd,
            odd,
            smallvec![dbl, Varnode::constant(1, 4)],
            0x1108,
        ));
        b1.insns.push(IrInsn::without_output(
            IrOp::Cbranch,
            smallvec![Varnode::constant(0, 8), cmp],
            0x110c,
        ));
        b1.successors = smallvec![BlockId(2), BlockId(3)];

        let mut b2 = BasicBlock::new(BlockId(2));
        b2.insns.push(IrInsn::with_output(
            IrOp::IntAdd,
            i,
            smallvec![i, Varnode::constant(1, 4)],
            0x1110,
        ));
        b2.insns
            .push(IrInsn::without_output(IrOp::Branch, smallvec![], 0x1114));
        b2.successors = smallvec![BlockId(1)];

        let mut b3 = BasicBlock::new(BlockId(3));
        b3.insns
            .push(IrInsn::without_output(IrOp::Return, smallvec![odd], 0x1200));

        func.insert_block(b0);
        func.insert_block(b1);
        func.insert_block(b2);
        func.insert_block(b3);

        build_ssa(func)
    }

    #[test]
    fn analyzes_basic_add_recurrence_and_exit() {
        let ssa = build_counted_loop();
        let facts = analyze_loop_scevs(&ssa);
        let info = facts.get(&BlockId(1)).expect("loop header facts");

        assert_eq!(info.ivs.len(), 1);
        assert_eq!(info.ivs[0].step, 1);
        assert_eq!(info.ivs[0].loop_header, BlockId(1));
        assert_eq!(info.exits.len(), 1);
        assert_eq!(info.exits[0].predicate, LoopExitPredicate::Ult);
        assert_eq!(info.exits[0].iv, Some(info.ivs[0].value));
        assert!(matches!(info.exits[0].bound, Some(ScevExpr::Value(_))));
    }

    #[test]
    fn derives_affine_expression_from_basic_iv() {
        let ssa = build_counted_loop();
        let facts = analyze_loop_scevs(&ssa);
        let info = facts.get(&BlockId(1)).expect("loop header facts");
        let odd_sv = *ssa
            .var_map
            .get(&(BlockId(1), 2, VarnodeSlot::Output))
            .expect("odd output");
        let expr = derive_scev_expr(&ssa, BlockId(1), &info.ivs, odd_sv);

        assert_eq!(
            expr,
            ScevExpr::AddConst(
                Box::new(ScevExpr::MulConst(
                    Box::new(ScevExpr::AddRec {
                        loop_header: BlockId(1),
                        start: Box::new(ScevExpr::Value(info.ivs[0].start)),
                        step: 1,
                    }),
                    2,
                )),
                1,
            )
        );
    }

    #[test]
    fn test_scev_evaluate_at_iteration_addrec() {
        let expr = ScevExpr::AddRec {
            loop_header: BlockId(0),
            start: Box::new(ScevExpr::Const { value: 5, size: 4 }),
            step: 3,
        };
        // At iteration 0: start = 5.
        assert_eq!(
            expr.evaluate_at_iteration(0),
            ScevExpr::Const { value: 5, size: 4 }
        );
        // At iteration 4: 5 + 3*4 = 17.
        assert_eq!(
            expr.evaluate_at_iteration(4),
            ScevExpr::Const { value: 17, size: 4 }
        );
    }

    #[test]
    fn test_scev_evaluate_at_iteration_mul_addrec() {
        // 2 * AddRec{start=0, step=1} at iteration 3 = 2 * 3 = 6.
        let expr = ScevExpr::MulConst(
            Box::new(ScevExpr::AddRec {
                loop_header: BlockId(0),
                start: Box::new(ScevExpr::Const { value: 0, size: 4 }),
                step: 1,
            }),
            2,
        );
        assert_eq!(
            expr.evaluate_at_iteration(3),
            ScevExpr::Const { value: 6, size: 4 }
        );
    }

    #[test]
    fn test_scev_trip_count_simple_ult() {
        // for (i = 0; i < 10; i++) → 10 iterations.
        let tc = super::compute_trip_count(0, 1, 10, LoopExitPredicate::Ult);
        assert_eq!(tc, Some(10));
    }

    #[test]
    fn test_scev_trip_count_step_2() {
        // for (i = 0; i < 10; i += 2) → 5 iterations.
        let tc = super::compute_trip_count(0, 2, 10, LoopExitPredicate::Ult);
        assert_eq!(tc, Some(5));
    }

    #[test]
    fn test_scev_trip_count_ne() {
        // for (i = 0; i != 10; i++) → 10 iterations.
        let tc = super::compute_trip_count(0, 1, 10, LoopExitPredicate::Ne);
        assert_eq!(tc, Some(10));
    }

    #[test]
    fn test_scev_trip_count_zero_trip() {
        // for (i = 10; i < 5; i++) → 0 iterations.
        let tc = super::compute_trip_count(10, 1, 5, LoopExitPredicate::Ult);
        assert_eq!(tc, Some(0));
    }

    #[test]
    fn test_scev_trip_count_slt() {
        // for (i = -5; i < 5; i++) → 10 iterations.
        let tc = super::compute_trip_count((-5i64) as u64, 1, 5, LoopExitPredicate::Slt);
        assert_eq!(tc, Some(10));
    }

    #[test]
    fn test_scev_cast_variants_exist() {
        let zext = ScevExpr::ZextCast {
            inner: Box::new(ScevExpr::Const { value: 1, size: 1 }),
            from_width: 8,
            to_width: 32,
        };
        let sext = ScevExpr::SextCast {
            inner: Box::new(ScevExpr::Const {
                value: 0xFF,
                size: 1,
            }),
            from_width: 8,
            to_width: 32,
        };
        let trunc = ScevExpr::TruncCast {
            inner: Box::new(ScevExpr::Const {
                value: 0xABCD,
                size: 2,
            }),
            to_width: 8,
        };
        assert!(!zext.is_could_not_compute());
        assert!(!sext.is_could_not_compute());
        assert!(!trunc.is_could_not_compute());
    }

    #[test]
    fn test_scev_minmax_variants_exist() {
        let umin = ScevExpr::UMin(
            Box::new(ScevExpr::Const { value: 5, size: 4 }),
            Box::new(ScevExpr::Const { value: 10, size: 4 }),
        );
        let smax = ScevExpr::SMax(
            Box::new(ScevExpr::Const { value: 5, size: 4 }),
            Box::new(ScevExpr::Const { value: 10, size: 4 }),
        );
        assert!(!umin.is_could_not_compute());
        assert!(!smax.is_could_not_compute());
    }

    #[test]
    fn test_scev_udiv_variant_exists() {
        let udiv = ScevExpr::UDiv(
            Box::new(ScevExpr::Const { value: 20, size: 4 }),
            Box::new(ScevExpr::Const { value: 4, size: 4 }),
        );
        assert!(!udiv.is_could_not_compute());
        assert_eq!(udiv.as_const(), None); // UDiv not reduced to const automatically
    }

    #[test]
    fn test_scev_could_not_compute() {
        assert!(ScevExpr::CouldNotCompute.is_could_not_compute());
        assert!(!ScevExpr::Unknown.is_could_not_compute());
    }
}
