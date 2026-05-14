//! Primitive type inference pass.

use std::collections::BTreeMap;

use unlace_ir::ssa::{PrimitiveType, SsaFunction, SsaVarnode, VarnodeSlot};
use unlace_ir::types::Type;
use unlace_ir::{BlockId, IrInsn, IrOp, SpaceId};

use crate::pass::{Pass, PassError};

pub struct TypeInferPass;

impl Pass for TypeInferPass {
    fn name(&self) -> &str {
        "TypeInfer"
    }

    fn run(&self, func: &mut SsaFunction) -> Result<bool, PassError> {
        let before_len = func.var_types.len();
        let snapshot: BTreeMap<SsaVarnode, PrimitiveType> = func.var_types.clone();

        seed_from_composites(func);

        let max_iterations = 100;
        let mut changed = true;
        let mut iteration = 0;
        let mut chain_promoted = std::collections::BTreeSet::<SsaVarnode>::new();
        while changed {
            if iteration >= max_iterations {
                tracing::warn!(
                    iterations = max_iterations,
                    "TypeInferPass hit iteration limit; possible oscillation"
                );
                break;
            }
            iteration += 1;
            changed = false;
            for (&bid, block) in &func.function.blocks {
                for (insn_idx, insn) in block.insns.iter().enumerate() {
                    changed |= infer_insn(
                        &func.var_map,
                        &mut func.var_types,
                        &func.composite_var_types,
                        &func.function.blocks,
                        &mut chain_promoted,
                        bid,
                        insn_idx,
                        insn,
                    );
                }
            }

            for phis in func.phi_map.values() {
                for phi in phis {
                    let existing = current_type(&func.var_types, &phi.output);
                    let mut merged = existing;
                    for (_pred, input) in &phi.inputs {
                        merged = merged.join(current_type(&func.var_types, input));
                    }
                    if merged != existing {
                        changed |= set_type(&mut func.var_types, phi.output, merged);
                    }
                    for (_pred, input) in &phi.inputs {
                        if current_type(&func.var_types, input) != merged {
                            changed |= set_type(&mut func.var_types, *input, merged);
                        }
                    }
                }
            }
        }

        seed_from_composites(func);
        detect_array_strides(func);

        let types_changed = func.var_types.len() != before_len || func.var_types != snapshot;
        Ok(types_changed)
    }
}

/// Annotate `INT_ADD` / `PTRADD` / `PTRSUB` instructions whose offset
/// operand is `idx * stride` (where `stride` is a constant) with the
/// detected stride.
///
/// Recognised patterns:
///
/// * `IntMult $idx, $stride_const` — direct multiply (e.g. `idx * 4`)
/// * `IntLeft $idx, $shift_const`  — shift-by-constant (e.g. `idx << 2`)
///
/// The `IntLeft` pattern catches optimised builds where compilers
/// rewrite `idx * 4` as `idx << 2`. Strides outside {1, 2, 4, 8, 16}
/// are ignored to avoid false positives on unrelated arithmetic.
fn detect_array_strides(func: &mut SsaFunction) {
    let mut detections: Vec<((unlace_ir::BlockId, usize), u64)> = Vec::new();

    for (&bid, block) in &func.function.blocks {
        for (insn_idx, insn) in block.insns.iter().enumerate() {
            if !matches!(insn.op, IrOp::IntAdd | IrOp::Ptradd | IrOp::Ptrsub) {
                continue;
            }
            if insn.inputs.len() < 2 {
                continue;
            }

            for offset_idx in 0..2 {
                let candidate = &insn.inputs[offset_idx];
                if let Some(stride) = stride_of_varnode(candidate, func) {
                    if matches!(stride, 1 | 2 | 4 | 8 | 16) {
                        detections.push(((bid, insn_idx), stride));
                        break;
                    }
                }
            }
        }
    }

    for (key, stride) in detections {
        func.array_strides.insert(key, stride);
    }
}

fn stride_of_varnode(v: &unlace_ir::Varnode, func: &SsaFunction) -> Option<u64> {
    if v.space == SpaceId::Const {
        return None;
    }

    for (&(bid, insn_idx, ref slot), sv) in &func.var_map {
        if *slot != VarnodeSlot::Output {
            continue;
        }
        if sv.base != *v {
            continue;
        }
        let block = func.function.blocks.get(&bid)?;
        let def_insn = block.insns.get(insn_idx)?;

        match def_insn.op {
            IrOp::IntMult => {
                if def_insn.inputs.len() != 2 {
                    return None;
                }
                let (a, b) = (&def_insn.inputs[0], &def_insn.inputs[1]);
                if a.space == SpaceId::Const && b.space != SpaceId::Const {
                    return Some(a.offset);
                }
                if b.space == SpaceId::Const && a.space != SpaceId::Const {
                    return Some(b.offset);
                }
                return None;
            }
            IrOp::IntLeft => {
                if def_insn.inputs.len() != 2 {
                    return None;
                }
                let (a, b) = (&def_insn.inputs[0], &def_insn.inputs[1]);
                if b.space == SpaceId::Const && a.space != SpaceId::Const && b.offset < 64 {
                    return 1u64.checked_shl(b.offset as u32);
                }
                return None;
            }
            _ => return None,
        }
    }
    None
}

/// Seed `var_types` from `composite_var_types` so primitive type inference
/// has a consistent starting point.
///
/// A varnode flagged as `Type::Struct`/`Type::Array`/`Type::Ptr` in the
/// composite map is reachable through a pointer at the primitive level, so
/// its `var_types` entry is force-set to [`PrimitiveType::Ptr`]. A varnode
/// flagged as `Type::Primitive(p)` simply propagates `p`. The lattice
/// `join` enforces that subsequent inference cannot demote these entries
/// back to `Unknown`.
fn seed_from_composites(func: &mut SsaFunction) {
    for (sv, ty) in &func.composite_var_types {
        let primitive = match ty {
            Type::Primitive(p) => *p,
            Type::Bitfield { underlying, .. } => match underlying.as_ref() {
                Type::Primitive(p) => *p,
                _ => PrimitiveType::Unknown,
            },
            Type::Ptr(_)
            | Type::Struct { .. }
            | Type::Union { .. }
            | Type::Array { .. }
            | Type::FuncPtr { .. }
            | Type::Interface { .. }
            | Type::Slice { .. }
            | Type::Map { .. }
            | Type::TypeParam { .. } => PrimitiveType::Ptr,
        };
        let entry = func.var_types.entry(*sv).or_insert(primitive);
        *entry = entry.join(primitive);
        if *entry == PrimitiveType::Unknown {
            *entry = primitive;
        }
    }
}

fn current_type(var_types: &BTreeMap<SsaVarnode, PrimitiveType>, sv: &SsaVarnode) -> PrimitiveType {
    var_types.get(sv).copied().unwrap_or(PrimitiveType::Unknown)
}

fn set_type(
    var_types: &mut BTreeMap<SsaVarnode, PrimitiveType>,
    sv: SsaVarnode,
    ty: PrimitiveType,
) -> bool {
    let old = var_types
        .get(&sv)
        .copied()
        .unwrap_or(PrimitiveType::Unknown);
    let joined = old.join(ty);
    if joined != old {
        var_types.insert(sv, joined);
        true
    } else if !var_types.contains_key(&sv) && ty != PrimitiveType::Unknown {
        var_types.insert(sv, ty);
        true
    } else {
        false
    }
}

fn force_set_type(
    var_types: &mut BTreeMap<SsaVarnode, PrimitiveType>,
    sv: SsaVarnode,
    ty: PrimitiveType,
) -> bool {
    let old = var_types
        .get(&sv)
        .copied()
        .unwrap_or(PrimitiveType::Unknown);
    if old != ty {
        var_types.insert(sv, ty);
        true
    } else {
        false
    }
}

type VarMap = BTreeMap<(BlockId, usize, VarnodeSlot), SsaVarnode>;
type TypeMap = BTreeMap<SsaVarnode, PrimitiveType>;
type CompositeMap = BTreeMap<SsaVarnode, Type>;
type BlockMap = BTreeMap<BlockId, unlace_ir::BasicBlock>;

fn infer_insn(
    var_map: &VarMap,
    var_types: &mut TypeMap,
    composite_var_types: &CompositeMap,
    blocks: &BlockMap,
    chain_promoted: &mut std::collections::BTreeSet<SsaVarnode>,
    bid: BlockId,
    insn_idx: usize,
    insn: &IrInsn,
) -> bool {
    let mut changed = false;

    let output_sv = var_map.get(&(bid, insn_idx, VarnodeSlot::Output)).copied();

    let input_sv = |idx: usize| -> Option<SsaVarnode> {
        var_map
            .get(&(bid, insn_idx, VarnodeSlot::Input(idx)))
            .copied()
    };

    match insn.op {
        // Integer arithmetic: inputs + output -> Int(size)
        // For IntAdd/IntSub, preserve existing Ptr on inputs (pointer arithmetic).
        IrOp::IntAdd
        | IrOp::IntSub
        | IrOp::IntMult
        | IrOp::IntNegate
        | IrOp::Int2comp
        | IrOp::IntAnd
        | IrOp::IntOr
        | IrOp::IntXor
        | IrOp::IntLeft
        | IrOp::IntRight
        | IrOp::IntSright => {
            let preserve_ptr = matches!(insn.op, IrOp::IntAdd | IrOp::IntSub);
            if let Some(out) = output_sv {
                if !(preserve_ptr && current_type(var_types, &out) == PrimitiveType::Ptr) {
                    changed |= set_type(var_types, out, PrimitiveType::Int(out.base.size));
                }
            }
            for (idx, inp) in insn.inputs.iter().enumerate() {
                if inp.space == SpaceId::Const {
                    continue;
                }
                if let Some(sv) = input_sv(idx) {
                    if preserve_ptr && current_type(var_types, &sv) == PrimitiveType::Ptr {
                        continue;
                    }
                    changed |= set_type(var_types, sv, PrimitiveType::Int(sv.base.size));
                }
            }
        }

        // Unsigned-flavored integer ops
        IrOp::IntDiv | IrOp::IntRem | IrOp::IntZext => {
            if let Some(out) = output_sv {
                changed |= set_type(var_types, out, PrimitiveType::UnsignedInt(out.base.size));
            }
            for (idx, inp) in insn.inputs.iter().enumerate() {
                if inp.space == SpaceId::Const {
                    continue;
                }
                if let Some(sv) = input_sv(idx) {
                    changed |= set_type(var_types, sv, PrimitiveType::UnsignedInt(sv.base.size));
                }
            }
        }

        // Signed-flavored integer ops
        IrOp::IntSdiv | IrOp::IntSrem | IrOp::IntSext => {
            if let Some(out) = output_sv {
                changed |= set_type(var_types, out, PrimitiveType::Int(out.base.size));
            }
            for (idx, inp) in insn.inputs.iter().enumerate() {
                if inp.space == SpaceId::Const {
                    continue;
                }
                if let Some(sv) = input_sv(idx) {
                    changed |= set_type(var_types, sv, PrimitiveType::Int(sv.base.size));
                }
            }
        }

        // Integer comparisons: inputs -> Int(size), output -> Bool
        IrOp::IntEqual | IrOp::IntNotequal | IrOp::IntLess | IrOp::IntLessequal => {
            if let Some(out) = output_sv {
                changed |= set_type(var_types, out, PrimitiveType::Bool);
            }
            for (idx, inp) in insn.inputs.iter().enumerate() {
                if inp.space == SpaceId::Const {
                    continue;
                }
                if let Some(sv) = input_sv(idx) {
                    changed |= set_type(var_types, sv, PrimitiveType::Int(sv.base.size));
                }
            }
        }

        // Signed comparisons: inputs -> Int(size), output -> Bool
        IrOp::IntSless | IrOp::IntSlessequal => {
            if let Some(out) = output_sv {
                changed |= set_type(var_types, out, PrimitiveType::Bool);
            }
            for (idx, inp) in insn.inputs.iter().enumerate() {
                if inp.space == SpaceId::Const {
                    continue;
                }
                if let Some(sv) = input_sv(idx) {
                    changed |= set_type(var_types, sv, PrimitiveType::Int(sv.base.size));
                }
            }
        }

        // Carry/overflow flags: inputs -> Int, output -> Bool
        IrOp::IntCarry | IrOp::IntScarry | IrOp::IntSborrow => {
            if let Some(out) = output_sv {
                changed |= set_type(var_types, out, PrimitiveType::Bool);
            }
            for (idx, inp) in insn.inputs.iter().enumerate() {
                if inp.space == SpaceId::Const {
                    continue;
                }
                if let Some(sv) = input_sv(idx) {
                    changed |= set_type(var_types, sv, PrimitiveType::Int(sv.base.size));
                }
            }
        }

        // Boolean ops: inputs + output -> Bool
        IrOp::BoolNegate | IrOp::BoolAnd | IrOp::BoolOr | IrOp::BoolXor => {
            if let Some(out) = output_sv {
                changed |= set_type(var_types, out, PrimitiveType::Bool);
            }
            for (idx, inp) in insn.inputs.iter().enumerate() {
                if inp.space == SpaceId::Const {
                    continue;
                }
                if let Some(sv) = input_sv(idx) {
                    changed |= set_type(var_types, sv, PrimitiveType::Bool);
                }
            }
        }

        // Float arithmetic: inputs + output -> Float or Double based on size
        IrOp::FloatAdd
        | IrOp::FloatSub
        | IrOp::FloatMult
        | IrOp::FloatDiv
        | IrOp::FloatNeg
        | IrOp::FloatAbs
        | IrOp::FloatSqrt
        | IrOp::FloatCeil
        | IrOp::FloatFloor
        | IrOp::FloatRound
        | IrOp::FloatTrunc => {
            if let Some(out) = output_sv {
                let ft = float_type_for_size(out.base.size);
                changed |= set_type(var_types, out, ft);
            }
            for (idx, inp) in insn.inputs.iter().enumerate() {
                if inp.space == SpaceId::Const {
                    continue;
                }
                if let Some(sv) = input_sv(idx) {
                    let ft = float_type_for_size(sv.base.size);
                    changed |= set_type(var_types, sv, ft);
                }
            }
        }

        // Float comparisons: inputs -> Float/Double, output -> Bool
        IrOp::FloatEqual | IrOp::FloatNotequal | IrOp::FloatLess | IrOp::FloatLessequal => {
            if let Some(out) = output_sv {
                changed |= set_type(var_types, out, PrimitiveType::Bool);
            }
            for (idx, inp) in insn.inputs.iter().enumerate() {
                if inp.space == SpaceId::Const {
                    continue;
                }
                if let Some(sv) = input_sv(idx) {
                    let ft = float_type_for_size(sv.base.size);
                    changed |= set_type(var_types, sv, ft);
                }
            }
        }

        // FLOAT_NAN: input -> Float/Double, output -> Bool
        IrOp::FloatNan => {
            if let Some(out) = output_sv {
                changed |= set_type(var_types, out, PrimitiveType::Bool);
            }
            if let Some(sv) = input_sv(0) {
                let ft = float_type_for_size(sv.base.size);
                changed |= set_type(var_types, sv, ft);
            }
        }

        // FLOAT_INT2FLOAT: input -> Int, output -> Float/Double
        IrOp::FloatInt2float => {
            if let Some(out) = output_sv {
                let ft = float_type_for_size(out.base.size);
                changed |= set_type(var_types, out, ft);
            }
            if let Some(sv) = input_sv(0) {
                changed |= set_type(var_types, sv, PrimitiveType::Int(sv.base.size));
            }
        }

        // FLOAT_FLOAT2FLOAT: input -> Float/Double, output -> Float/Double
        IrOp::FloatFloat2float => {
            if let Some(out) = output_sv {
                let ft = float_type_for_size(out.base.size);
                changed |= set_type(var_types, out, ft);
            }
            if let Some(sv) = input_sv(0) {
                let ft = float_type_for_size(sv.base.size);
                changed |= set_type(var_types, sv, ft);
            }
        }

        // FLOAT_FLOAT2INT: input -> Float/Double, output -> Int
        IrOp::FloatFloat2int => {
            if let Some(out) = output_sv {
                changed |= set_type(var_types, out, PrimitiveType::Int(out.base.size));
            }
            if let Some(sv) = input_sv(0) {
                let ft = float_type_for_size(sv.base.size);
                changed |= set_type(var_types, sv, ft);
            }
        }

        // LOAD: input1 (address) → Ptr; output → Int(size) normally.
        // 1-level pointer chain: if address is already Ptr and output is
        // pointer-sized, propagate Ptr to the output (refined by struct
        // field type when available). Capped at 1 level via chain_promoted.
        IrOp::Load => {
            if let Some(sv) = input_sv(1) {
                changed |= force_set_type(var_types, sv, PrimitiveType::Ptr);
            }
            if let Some(out) = output_sv {
                let addr_sv = input_sv(1);
                let addr_is_ptr = addr_sv
                    .map(|sv| current_type(var_types, &sv) == PrimitiveType::Ptr)
                    .unwrap_or(false);
                let addr_is_chain = addr_sv
                    .map(|sv| chain_promoted.contains(&sv))
                    .unwrap_or(false);

                if addr_is_ptr && !addr_is_chain && out.base.size == 8 {
                    let field_ty = addr_sv.and_then(|sv| {
                        lookup_struct_field_type(var_map, composite_var_types, blocks, sv)
                    });

                    let promoted_ty = match field_ty {
                        Some(ft) if ft != PrimitiveType::Unknown => ft,
                        _ => PrimitiveType::Ptr,
                    };
                    if set_type(var_types, out, promoted_ty) {
                        chain_promoted.insert(out);
                        changed = true;
                    }
                } else {
                    changed |= set_type(var_types, out, PrimitiveType::Int(out.base.size));
                }
            }
        }

        // STORE: input1 (address) -> Ptr
        IrOp::Store => {
            if let Some(sv) = input_sv(1) {
                changed |= force_set_type(var_types, sv, PrimitiveType::Ptr);
            }
        }

        // CBRANCH: input1 (condition) -> Bool
        IrOp::Cbranch => {
            if let Some(sv) = input_sv(1) {
                changed |= set_type(var_types, sv, PrimitiveType::Bool);
            }
        }

        // CALL/CALLIND: input0 (target) -> Ptr
        IrOp::Call | IrOp::Callind => {
            if let Some(sv) = input_sv(0) {
                changed |= set_type(var_types, sv, PrimitiveType::Ptr);
            }
        }

        // COPY: propagate type bidirectionally
        IrOp::Copy => {
            let in_ty = input_sv(0).map(|sv| current_type(var_types, &sv));
            let out_ty = output_sv.map(|sv| current_type(var_types, &sv));
            if let (Some(inp), Some(out), Some(it), Some(ot)) =
                (input_sv(0), output_sv, in_ty, out_ty)
            {
                let joined = it.join(ot);
                if joined != PrimitiveType::Unknown {
                    changed |= set_type(var_types, inp, joined);
                    changed |= set_type(var_types, out, joined);
                }
            }
        }

        // PTRADD/PTRSUB: input0 -> Ptr, output -> Ptr
        IrOp::Ptradd | IrOp::Ptrsub => {
            if let Some(sv) = input_sv(0) {
                changed |= set_type(var_types, sv, PrimitiveType::Ptr);
            }
            if let Some(out) = output_sv {
                changed |= set_type(var_types, out, PrimitiveType::Ptr);
            }
        }

        // BRANCHIND/RETURN: input0 -> Ptr (indirect target / return address)
        IrOp::Branchind | IrOp::Return => {
            if let Some(sv) = input_sv(0) {
                changed |= set_type(var_types, sv, PrimitiveType::Ptr);
            }
        }

        IrOp::Cast => {
            if let Some(out) = output_sv {
                let in_ty = input_sv(0).map(|sv| current_type(var_types, &sv));
                let out_ty = current_type(var_types, &out);
                let inferred = cast_output_type(in_ty, out_ty, out.base.size);
                if inferred != PrimitiveType::Unknown {
                    changed |= set_type(var_types, out, inferred);
                }
            }
        }

        _ => {}
    }

    changed
}

/// If `addr_sv` is defined by `INT_ADD(base, const_offset)` and `base` has a
/// `Type::Struct` in `composite_var_types`, return the field's primitive type.
fn lookup_struct_field_type(
    var_map: &VarMap,
    composite_var_types: &CompositeMap,
    blocks: &BlockMap,
    addr_sv: SsaVarnode,
) -> Option<PrimitiveType> {
    let (def_bid, def_idx) = var_map
        .iter()
        .find(|(key, sv)| key.2 == VarnodeSlot::Output && **sv == addr_sv)
        .map(|(key, _)| (key.0, key.1))?;

    let def_insn = blocks.get(&def_bid)?.insns.get(def_idx)?;
    if def_insn.op != IrOp::IntAdd {
        return None;
    }

    let (base_sv, offset) = find_add_base_and_const(var_map, def_bid, def_idx)?;

    let struct_ty = composite_var_types.get(&base_sv)?;
    match struct_ty {
        Type::Struct { fields, .. } | Type::Union { fields, .. } => {
            let field = fields.iter().find(|f| f.offset == offset)?;
            Some(field_to_primitive(&field.ty))
        }
        _ => None,
    }
}

fn find_add_base_and_const(
    var_map: &VarMap,
    bid: BlockId,
    insn_idx: usize,
) -> Option<(SsaVarnode, u64)> {
    let in0 = var_map
        .get(&(bid, insn_idx, VarnodeSlot::Input(0)))
        .copied();
    let in1 = var_map
        .get(&(bid, insn_idx, VarnodeSlot::Input(1)))
        .copied();

    match (in0, in1) {
        (Some(sv0), Some(sv1)) if sv1.base.space == SpaceId::Const => Some((sv0, sv1.base.offset)),
        (Some(sv0), Some(sv1)) if sv0.base.space == SpaceId::Const => Some((sv1, sv0.base.offset)),
        _ => None,
    }
}

fn field_to_primitive(ty: &Type) -> PrimitiveType {
    match ty {
        Type::Primitive(p) => *p,
        Type::Bitfield { underlying, .. } => match underlying.as_ref() {
            Type::Primitive(p) => *p,
            _ => PrimitiveType::Unknown,
        },
        Type::Ptr(_) | Type::FuncPtr { .. } => PrimitiveType::Ptr,
        Type::Struct { .. } | Type::Union { .. } | Type::Array { .. } => PrimitiveType::Ptr,
        // A Go interface value is `{ *itab, *data }` — at the SSA
        // primitive level it lowers to a pointer-sized payload, matching
        // how the printer renders `Type::Interface` as `void *`.
        // Slices reduce to their `*T` data pointer; maps to `*hmap`.
        // Generic type parameters flow via runtime dictionaries / iface words,
        // so model them as pointer-sized too.
        Type::Interface { .. } | Type::Slice { .. } | Type::Map { .. } | Type::TypeParam { .. } => {
            PrimitiveType::Ptr
        }
    }
}

fn float_type_for_size(size: u8) -> PrimitiveType {
    match size {
        4 => PrimitiveType::Float,
        _ => PrimitiveType::Double,
    }
}

fn cast_output_type(
    input_ty: Option<PrimitiveType>,
    output_existing: PrimitiveType,
    output_size: u8,
) -> PrimitiveType {
    if output_existing != PrimitiveType::Unknown {
        return output_existing;
    }

    match input_ty {
        Some(PrimitiveType::UnsignedInt(_)) => PrimitiveType::UnsignedInt(output_size),
        Some(PrimitiveType::Bool) if output_size == 1 => PrimitiveType::Bool,
        Some(PrimitiveType::Float) | Some(PrimitiveType::Double) => match output_size {
            4 => PrimitiveType::Float,
            8 => PrimitiveType::Double,
            _ => PrimitiveType::Int(output_size),
        },
        Some(PrimitiveType::Ptr) if output_size == 8 => PrimitiveType::Ptr,
        Some(_) => PrimitiveType::Int(output_size),
        None => PrimitiveType::Int(output_size),
    }
}

#[cfg(test)]
mod tests {
    use smallvec::smallvec;

    use unlace_ir::ssa::build_ssa;
    use unlace_ir::{BasicBlock, BlockId, Function, IrInsn, IrOp, Varnode};

    use super::*;

    fn run_type_infer(func: Function) -> SsaFunction {
        let mut ssa = build_ssa(func);
        let pass = TypeInferPass;
        pass.run(&mut ssa).expect("TypeInferPass should not error");
        ssa
    }

    fn lookup_output_type(
        ssa: &SsaFunction,
        bid: BlockId,
        insn_idx: usize,
    ) -> Option<PrimitiveType> {
        let sv = ssa.var_map.get(&(bid, insn_idx, VarnodeSlot::Output))?;
        ssa.var_types.get(sv).copied()
    }

    fn lookup_input_type(
        ssa: &SsaFunction,
        bid: BlockId,
        insn_idx: usize,
        input_idx: usize,
    ) -> Option<PrimitiveType> {
        let sv = ssa
            .var_map
            .get(&(bid, insn_idx, VarnodeSlot::Input(input_idx)))?;
        ssa.var_types.get(sv).copied()
    }

    #[test]
    fn test_int_add_typed_int() {
        let r0 = Varnode::reg(0, 8);
        let r8 = Varnode::reg(8, 8);
        let c1 = Varnode::constant(1, 8);

        let mut func = Function::new("int_add_test", BlockId(0), 0x1000);
        let mut bb0 = BasicBlock::new(BlockId(0));
        bb0.insns.push(IrInsn::with_output(
            IrOp::IntAdd,
            r0,
            smallvec![r8, c1],
            0x1000,
        ));
        bb0.insns
            .push(IrInsn::without_output(IrOp::Return, smallvec![], 0x1008));
        func.insert_block(bb0);

        let ssa = run_type_infer(func);

        let out_ty = lookup_output_type(&ssa, BlockId(0), 0);
        assert_eq!(out_ty, Some(PrimitiveType::Int(8)));

        let in0_ty = lookup_input_type(&ssa, BlockId(0), 0, 0);
        assert_eq!(in0_ty, Some(PrimitiveType::Int(8)));
    }

    #[test]
    fn test_load_addr_typed_ptr() {
        let v_addr = Varnode::reg(0, 8);
        let v_out = Varnode::reg(8, 4);
        let space_ram = Varnode::constant(1, 8);

        let mut func = Function::new("load_test", BlockId(0), 0x2000);
        let mut bb0 = BasicBlock::new(BlockId(0));
        bb0.insns.push(IrInsn::with_output(
            IrOp::Load,
            v_out,
            smallvec![space_ram, v_addr],
            0x2000,
        ));
        bb0.insns
            .push(IrInsn::without_output(IrOp::Return, smallvec![], 0x2008));
        func.insert_block(bb0);

        let ssa = run_type_infer(func);

        let addr_ty = lookup_input_type(&ssa, BlockId(0), 0, 1);
        assert_eq!(addr_ty, Some(PrimitiveType::Ptr));

        let out_ty = lookup_output_type(&ssa, BlockId(0), 0);
        assert_eq!(out_ty, Some(PrimitiveType::Int(4)));
    }

    #[test]
    fn test_cbranch_cond_bool() {
        let v_cond = Varnode::reg(0, 1);
        let target = Varnode::constant(0x3010, 8);

        let mut func = Function::new("cbranch_test", BlockId(0), 0x3000);
        let mut bb0 = BasicBlock::new(BlockId(0));
        bb0.insns.push(IrInsn::without_output(
            IrOp::Cbranch,
            smallvec![target, v_cond],
            0x3000,
        ));
        bb0.successors = smallvec![BlockId(1), BlockId(2)];

        let mut bb1 = BasicBlock::new(BlockId(1));
        bb1.insns
            .push(IrInsn::without_output(IrOp::Return, smallvec![], 0x3010));

        let mut bb2 = BasicBlock::new(BlockId(2));
        bb2.insns
            .push(IrInsn::without_output(IrOp::Return, smallvec![], 0x3020));

        func.insert_block(bb0);
        func.insert_block(bb1);
        func.insert_block(bb2);

        let ssa = run_type_infer(func);

        let cond_ty = lookup_input_type(&ssa, BlockId(0), 0, 1);
        assert_eq!(cond_ty, Some(PrimitiveType::Bool));
    }

    #[test]
    fn test_float_add() {
        let r0 = Varnode::reg(0, 4);
        let r4 = Varnode::reg(4, 4);
        let r8 = Varnode::reg(8, 4);

        let mut func = Function::new("float_add_test", BlockId(0), 0x4000);
        let mut bb0 = BasicBlock::new(BlockId(0));
        bb0.insns.push(IrInsn::with_output(
            IrOp::FloatAdd,
            r0,
            smallvec![r4, r8],
            0x4000,
        ));
        bb0.insns
            .push(IrInsn::without_output(IrOp::Return, smallvec![], 0x4008));
        func.insert_block(bb0);

        let ssa = run_type_infer(func);

        let out_ty = lookup_output_type(&ssa, BlockId(0), 0);
        assert_eq!(out_ty, Some(PrimitiveType::Float));

        let in0_ty = lookup_input_type(&ssa, BlockId(0), 0, 0);
        assert_eq!(in0_ty, Some(PrimitiveType::Float));

        let in1_ty = lookup_input_type(&ssa, BlockId(0), 0, 1);
        assert_eq!(in1_ty, Some(PrimitiveType::Float));
    }

    #[test]
    fn test_float_double_size() {
        let r0 = Varnode::reg(0, 8);
        let r8 = Varnode::reg(8, 8);
        let r16 = Varnode::reg(16, 8);

        let mut func = Function::new("float_double_test", BlockId(0), 0x5000);
        let mut bb0 = BasicBlock::new(BlockId(0));
        bb0.insns.push(IrInsn::with_output(
            IrOp::FloatAdd,
            r0,
            smallvec![r8, r16],
            0x5000,
        ));
        bb0.insns
            .push(IrInsn::without_output(IrOp::Return, smallvec![], 0x5008));
        func.insert_block(bb0);

        let ssa = run_type_infer(func);

        let out_ty = lookup_output_type(&ssa, BlockId(0), 0);
        assert_eq!(out_ty, Some(PrimitiveType::Double));
    }

    #[test]
    fn test_bool_ops() {
        let r0 = Varnode::reg(0, 1);
        let r1 = Varnode::reg(1, 1);
        let r2 = Varnode::reg(2, 1);

        let mut func = Function::new("bool_test", BlockId(0), 0x6000);
        let mut bb0 = BasicBlock::new(BlockId(0));
        bb0.insns.push(IrInsn::with_output(
            IrOp::BoolAnd,
            r0,
            smallvec![r1, r2],
            0x6000,
        ));
        bb0.insns
            .push(IrInsn::without_output(IrOp::Return, smallvec![], 0x6008));
        func.insert_block(bb0);

        let ssa = run_type_infer(func);

        let out_ty = lookup_output_type(&ssa, BlockId(0), 0);
        assert_eq!(out_ty, Some(PrimitiveType::Bool));

        let in0_ty = lookup_input_type(&ssa, BlockId(0), 0, 0);
        assert_eq!(in0_ty, Some(PrimitiveType::Bool));
    }

    #[test]
    fn test_comparison_output_bool() {
        let r0 = Varnode::reg(0, 1);
        let r8 = Varnode::reg(8, 4);
        let r12 = Varnode::reg(12, 4);

        let mut func = Function::new("cmp_test", BlockId(0), 0x7000);
        let mut bb0 = BasicBlock::new(BlockId(0));
        bb0.insns.push(IrInsn::with_output(
            IrOp::IntSless,
            r0,
            smallvec![r8, r12],
            0x7000,
        ));
        bb0.insns
            .push(IrInsn::without_output(IrOp::Return, smallvec![], 0x7008));
        func.insert_block(bb0);

        let ssa = run_type_infer(func);

        let out_ty = lookup_output_type(&ssa, BlockId(0), 0);
        assert_eq!(out_ty, Some(PrimitiveType::Bool));

        let in0_ty = lookup_input_type(&ssa, BlockId(0), 0, 0);
        assert_eq!(in0_ty, Some(PrimitiveType::Int(4)));
    }

    #[test]
    fn test_store_addr_ptr() {
        let v_addr = Varnode::reg(0, 8);
        let v_val = Varnode::reg(8, 4);
        let space_ram = Varnode::constant(1, 8);

        let mut func = Function::new("store_test", BlockId(0), 0x8000);
        let mut bb0 = BasicBlock::new(BlockId(0));
        bb0.insns.push(IrInsn::without_output(
            IrOp::Store,
            smallvec![space_ram, v_addr, v_val],
            0x8000,
        ));
        bb0.insns
            .push(IrInsn::without_output(IrOp::Return, smallvec![], 0x8008));
        func.insert_block(bb0);

        let ssa = run_type_infer(func);

        let addr_ty = lookup_input_type(&ssa, BlockId(0), 0, 1);
        assert_eq!(addr_ty, Some(PrimitiveType::Ptr));
    }

    #[test]
    fn test_call_const_target_no_crash() {
        let target = Varnode::constant(0x1234, 8);

        let mut func = Function::new("call_test", BlockId(0), 0x9000);
        let mut bb0 = BasicBlock::new(BlockId(0));
        bb0.insns.push(IrInsn::without_output(
            IrOp::Call,
            smallvec![target],
            0x9000,
        ));
        bb0.insns
            .push(IrInsn::without_output(IrOp::Return, smallvec![], 0x9008));
        func.insert_block(bb0);

        let ssa = run_type_infer(func);

        assert!(
            ssa.var_types.is_empty()
                || ssa.var_types.values().all(|t| *t != PrimitiveType::Unknown)
        );
    }

    #[test]
    fn test_callind_target_ptr() {
        let v_target = Varnode::reg(0, 8);

        let mut func = Function::new("callind_test", BlockId(0), 0xa000);
        let mut bb0 = BasicBlock::new(BlockId(0));
        bb0.insns.push(IrInsn::without_output(
            IrOp::Callind,
            smallvec![v_target],
            0xa000,
        ));
        bb0.insns
            .push(IrInsn::without_output(IrOp::Return, smallvec![], 0xa008));
        func.insert_block(bb0);

        let ssa = run_type_infer(func);

        let target_ty = lookup_input_type(&ssa, BlockId(0), 0, 0);
        assert_eq!(target_ty, Some(PrimitiveType::Ptr));
    }

    #[test]
    fn test_cast_truncation_to_smaller_size() {
        let r0 = Varnode::reg(0, 8);
        let r8 = Varnode::reg(8, 4);
        let r16 = Varnode::reg(16, 8);
        let c1 = Varnode::constant(1, 8);

        let mut func = Function::new("cast_trunc", BlockId(0), 0xb000);
        let mut bb0 = BasicBlock::new(BlockId(0));
        bb0.insns.push(IrInsn::with_output(
            IrOp::IntAdd,
            r0,
            smallvec![r16, c1],
            0xb000,
        ));
        bb0.insns
            .push(IrInsn::with_output(IrOp::Cast, r8, smallvec![r0], 0xb008));
        bb0.insns
            .push(IrInsn::without_output(IrOp::Return, smallvec![], 0xb010));
        func.insert_block(bb0);

        let ssa = run_type_infer(func);

        let cast_out = lookup_output_type(&ssa, BlockId(0), 1);
        assert_eq!(cast_out, Some(PrimitiveType::Int(4)));
    }

    #[test]
    fn test_cast_extension_to_larger_size() {
        let r0 = Varnode::reg(0, 4);
        let r8 = Varnode::reg(8, 8);
        let r16 = Varnode::reg(16, 4);
        let c1 = Varnode::constant(1, 4);

        let mut func = Function::new("cast_ext", BlockId(0), 0xc000);
        let mut bb0 = BasicBlock::new(BlockId(0));
        bb0.insns.push(IrInsn::with_output(
            IrOp::IntAdd,
            r0,
            smallvec![r16, c1],
            0xc000,
        ));
        bb0.insns
            .push(IrInsn::with_output(IrOp::Cast, r8, smallvec![r0], 0xc008));
        bb0.insns
            .push(IrInsn::without_output(IrOp::Return, smallvec![], 0xc010));
        func.insert_block(bb0);

        let ssa = run_type_infer(func);

        let cast_out = lookup_output_type(&ssa, BlockId(0), 1);
        assert_eq!(cast_out, Some(PrimitiveType::Int(8)));
    }

    #[test]
    fn test_cast_unsigned_input_preserves_signedness() {
        let r0 = Varnode::reg(0, 8);
        let r8 = Varnode::reg(8, 4);
        let c2 = Varnode::constant(2, 8);
        let r16 = Varnode::reg(16, 8);

        let mut func = Function::new("cast_unsigned", BlockId(0), 0xd000);
        let mut bb0 = BasicBlock::new(BlockId(0));
        bb0.insns.push(IrInsn::with_output(
            IrOp::IntDiv,
            r0,
            smallvec![r16, c2],
            0xd000,
        ));
        bb0.insns
            .push(IrInsn::with_output(IrOp::Cast, r8, smallvec![r0], 0xd008));
        bb0.insns
            .push(IrInsn::without_output(IrOp::Return, smallvec![], 0xd010));
        func.insert_block(bb0);

        let ssa = run_type_infer(func);

        let cast_out = lookup_output_type(&ssa, BlockId(0), 1);
        assert_eq!(cast_out, Some(PrimitiveType::UnsignedInt(4)));
    }

    #[test]
    fn test_composite_struct_preserved_through_inference() {
        use unlace_ir::types::{StructFieldType, Type};

        let r0 = Varnode::reg(0, 8);
        let r8 = Varnode::reg(8, 8);
        let c1 = Varnode::constant(1, 8);

        let mut func = Function::new("composite_pres", BlockId(0), 0xe000);
        let mut bb0 = BasicBlock::new(BlockId(0));
        bb0.insns.push(IrInsn::with_output(
            IrOp::IntAdd,
            r0,
            smallvec![r8, c1],
            0xe000,
        ));
        bb0.insns
            .push(IrInsn::without_output(IrOp::Return, smallvec![], 0xe008));
        func.insert_block(bb0);

        let mut ssa = build_ssa(func);
        let r0_sv = *ssa
            .var_map
            .get(&(BlockId(0), 0, VarnodeSlot::Output))
            .expect("r0 output");
        let struct_ty = Type::Struct {
            name: "Point".into(),
            fields: vec![StructFieldType {
                name: "x".into(),
                ty: Type::int(4),
                offset: 0,
            }],
        };
        ssa.composite_var_types.insert(r0_sv, struct_ty.clone());

        let pass = TypeInferPass;
        pass.run(&mut ssa).expect("infer");

        assert_eq!(ssa.var_types.get(&r0_sv).copied(), Some(PrimitiveType::Ptr));
        assert_eq!(ssa.composite_var_types.get(&r0_sv), Some(&struct_ty));
    }

    #[test]
    fn test_composite_lattice_join_struct_same_name() {
        use unlace_ir::types::{StructFieldType, Type};

        let s1 = Type::Struct {
            name: "Foo".into(),
            fields: vec![StructFieldType {
                name: "x".into(),
                ty: Type::int(4),
                offset: 0,
            }],
        };
        let s1_clone = s1.clone();
        let s2 = Type::Struct {
            name: "Bar".into(),
            fields: vec![StructFieldType {
                name: "x".into(),
                ty: Type::int(4),
                offset: 0,
            }],
        };

        assert_eq!(s1.clone().join(s1_clone), s1);

        assert_eq!(
            s1.clone().join(s2),
            Type::Primitive(PrimitiveType::Unknown),
            "different struct names should not join"
        );

        assert_eq!(
            s1.clone().join(Type::Primitive(PrimitiveType::Unknown)),
            s1,
            "Unknown is the bottom element"
        );

        assert_eq!(
            Type::Primitive(PrimitiveType::Unknown).join(s1.clone()),
            s1,
            "Unknown joins from either side"
        );
    }

    #[test]
    fn test_array_stride_detection_int_mult() {
        let base = Varnode::reg(0, 8);
        let idx = Varnode::reg(8, 8);
        let scaled = Varnode::unique(0, 8);
        let addr = Varnode::unique(8, 8);
        let c4 = Varnode::constant(4, 8);

        let mut func = Function::new("array_stride", BlockId(0), 0xf000);
        let mut bb0 = BasicBlock::new(BlockId(0));
        bb0.insns.push(IrInsn::with_output(
            IrOp::IntMult,
            scaled,
            smallvec![idx, c4],
            0xf000,
        ));
        bb0.insns.push(IrInsn::with_output(
            IrOp::IntAdd,
            addr,
            smallvec![base, scaled],
            0xf004,
        ));
        bb0.insns
            .push(IrInsn::without_output(IrOp::Return, smallvec![], 0xf008));
        func.insert_block(bb0);

        let ssa = run_type_infer(func);

        assert_eq!(
            ssa.array_strides.get(&(BlockId(0), 1)).copied(),
            Some(4),
            "should detect stride=4 from idx*4 + base"
        );
    }

    #[test]
    fn test_array_stride_detection_shift_left() {
        let base = Varnode::reg(0, 8);
        let idx = Varnode::reg(8, 8);
        let shifted = Varnode::unique(0, 8);
        let addr = Varnode::unique(8, 8);
        let c3 = Varnode::constant(3, 8);

        let mut func = Function::new("array_stride_shl", BlockId(0), 0xf100);
        let mut bb0 = BasicBlock::new(BlockId(0));
        bb0.insns.push(IrInsn::with_output(
            IrOp::IntLeft,
            shifted,
            smallvec![idx, c3],
            0xf100,
        ));
        bb0.insns.push(IrInsn::with_output(
            IrOp::IntAdd,
            addr,
            smallvec![base, shifted],
            0xf104,
        ));
        bb0.insns
            .push(IrInsn::without_output(IrOp::Return, smallvec![], 0xf108));
        func.insert_block(bb0);

        let ssa = run_type_infer(func);

        assert_eq!(
            ssa.array_strides.get(&(BlockId(0), 1)).copied(),
            Some(8),
            "should detect stride=8 from idx<<3 + base"
        );
    }

    #[test]
    fn test_array_stride_no_detection_for_non_power_of_two() {
        let base = Varnode::reg(0, 8);
        let idx = Varnode::reg(8, 8);
        let scaled = Varnode::unique(0, 8);
        let addr = Varnode::unique(8, 8);
        let c12 = Varnode::constant(12, 8);

        let mut func = Function::new("non_array_stride", BlockId(0), 0xf200);
        let mut bb0 = BasicBlock::new(BlockId(0));
        bb0.insns.push(IrInsn::with_output(
            IrOp::IntMult,
            scaled,
            smallvec![idx, c12],
            0xf200,
        ));
        bb0.insns.push(IrInsn::with_output(
            IrOp::IntAdd,
            addr,
            smallvec![base, scaled],
            0xf204,
        ));
        bb0.insns
            .push(IrInsn::without_output(IrOp::Return, smallvec![], 0xf208));
        func.insert_block(bb0);

        let ssa = run_type_infer(func);

        assert!(
            ssa.array_strides.is_empty(),
            "stride 12 is outside the whitelist; should not annotate"
        );
    }

    #[test]
    fn test_lattice_join() {
        assert_eq!(
            PrimitiveType::Unknown.join(PrimitiveType::Int(4)),
            PrimitiveType::Int(4)
        );
        assert_eq!(
            PrimitiveType::Int(4).join(PrimitiveType::Unknown),
            PrimitiveType::Int(4)
        );
        assert_eq!(
            PrimitiveType::Int(4).join(PrimitiveType::Int(4)),
            PrimitiveType::Int(4)
        );
        assert_eq!(
            PrimitiveType::Int(4).join(PrimitiveType::Float),
            PrimitiveType::Unknown
        );
        assert_eq!(
            PrimitiveType::Int(4).join(PrimitiveType::UnsignedInt(4)),
            PrimitiveType::Int(4)
        );
    }

    #[test]
    fn test_pointer_chain_load_through_ptr_gets_ptr() {
        use unlace_ir::types::{StructFieldType, Type};

        // struct_ptr (r0) → Load → v1 (r8, 8B) → IntAdd(v1, 8) → addr → Load → v2
        // struct_ptr is Ptr (address of first Load), v1 should get Ptr (chain).
        let struct_ptr = Varnode::reg(0, 8);
        let v1 = Varnode::reg(8, 8);
        let c8 = Varnode::constant(8, 8);
        let addr = Varnode::unique(0, 8);
        let v2 = Varnode::reg(16, 4);
        let space_ram = Varnode::constant(1, 8);

        let mut func = Function::new("ptr_chain", BlockId(0), 0x10000);
        let mut bb0 = BasicBlock::new(BlockId(0));
        // insn 0: v1 = Load(ram, struct_ptr)
        bb0.insns.push(IrInsn::with_output(
            IrOp::Load,
            v1,
            smallvec![space_ram, struct_ptr],
            0x10000,
        ));
        // insn 1: addr = IntAdd(v1, 8)
        bb0.insns.push(IrInsn::with_output(
            IrOp::IntAdd,
            addr,
            smallvec![v1, c8],
            0x10008,
        ));
        // insn 2: v2 = Load(ram, addr)
        bb0.insns.push(IrInsn::with_output(
            IrOp::Load,
            v2,
            smallvec![space_ram, addr],
            0x10010,
        ));
        bb0.insns
            .push(IrInsn::without_output(IrOp::Return, smallvec![], 0x10018));
        func.insert_block(bb0);

        let ssa = run_type_infer(func);

        // struct_ptr is the address of the first Load → Ptr
        let struct_ptr_ty = lookup_input_type(&ssa, BlockId(0), 0, 1);
        assert_eq!(struct_ptr_ty, Some(PrimitiveType::Ptr));

        // v1 is pointer-sized output of Load through Ptr → chain-promoted to Ptr
        let v1_ty = lookup_output_type(&ssa, BlockId(0), 0);
        assert_eq!(v1_ty, Some(PrimitiveType::Ptr));

        // addr is used as Load address → force-set to Ptr
        let addr_ty = lookup_output_type(&ssa, BlockId(0), 1);
        assert_eq!(addr_ty, Some(PrimitiveType::Ptr));

        // addr is the address of the second Load → also Ptr
        let addr_input_ty = lookup_input_type(&ssa, BlockId(0), 2, 1);
        assert_eq!(addr_input_ty, Some(PrimitiveType::Ptr));

        // v2 is 4-byte output → Int(4) (not pointer-sized, no chain)
        let v2_ty = lookup_output_type(&ssa, BlockId(0), 2);
        assert_eq!(v2_ty, Some(PrimitiveType::Int(4)));
    }

    #[test]
    fn test_pointer_chain_capped_at_one_level() {
        // v1 = Load(ram, ptr) → v1 gets Ptr (chain level 1)
        // v2 = Load(ram, v1)  → v2 should NOT get Ptr (chain level 2)
        let ptr = Varnode::reg(0, 8);
        let v1 = Varnode::reg(8, 8);
        let v2 = Varnode::reg(16, 8);
        let space_ram = Varnode::constant(1, 8);

        let mut func = Function::new("ptr_chain_cap", BlockId(0), 0x11000);
        let mut bb0 = BasicBlock::new(BlockId(0));
        // insn 0: v1 = Load(ram, ptr)
        bb0.insns.push(IrInsn::with_output(
            IrOp::Load,
            v1,
            smallvec![space_ram, ptr],
            0x11000,
        ));
        // insn 1: v2 = Load(ram, v1)
        bb0.insns.push(IrInsn::with_output(
            IrOp::Load,
            v2,
            smallvec![space_ram, v1],
            0x11008,
        ));
        bb0.insns
            .push(IrInsn::without_output(IrOp::Return, smallvec![], 0x11010));
        func.insert_block(bb0);

        let ssa = run_type_infer(func);

        // ptr is address of first Load → Ptr
        assert_eq!(
            lookup_input_type(&ssa, BlockId(0), 0, 1),
            Some(PrimitiveType::Ptr)
        );

        // v1 is chain-promoted to Ptr (level 1)
        assert_eq!(
            lookup_output_type(&ssa, BlockId(0), 0),
            Some(PrimitiveType::Ptr)
        );

        // v2 should NOT be chain-promoted (v1 is chain_promoted, so cap blocks it)
        assert_eq!(
            lookup_output_type(&ssa, BlockId(0), 1),
            Some(PrimitiveType::Int(8)),
            "2-level chain should be capped; v2 stays Int(8)"
        );
    }

    #[test]
    fn test_pointer_chain_with_struct_field_refinement() {
        use unlace_ir::types::{StructFieldType, Type};

        // v1 has composite Type::Struct with Ptr field at offset 8
        // v1 = Load(ram, struct_ptr) → Ptr (chain)
        // addr = IntAdd(v1, 8)
        // v2 = Load(ram, addr) → should get Ptr from struct field (Ptr field)
        let struct_ptr = Varnode::reg(0, 8);
        let v1 = Varnode::reg(8, 8);
        let c8 = Varnode::constant(8, 8);
        let addr = Varnode::unique(0, 8);
        let v2 = Varnode::reg(16, 8);
        let space_ram = Varnode::constant(1, 8);

        let mut func = Function::new("ptr_chain_struct", BlockId(0), 0x12000);
        let mut bb0 = BasicBlock::new(BlockId(0));
        bb0.insns.push(IrInsn::with_output(
            IrOp::Load,
            v1,
            smallvec![space_ram, struct_ptr],
            0x12000,
        ));
        bb0.insns.push(IrInsn::with_output(
            IrOp::IntAdd,
            addr,
            smallvec![v1, c8],
            0x12008,
        ));
        bb0.insns.push(IrInsn::with_output(
            IrOp::Load,
            v2,
            smallvec![space_ram, addr],
            0x12010,
        ));
        bb0.insns
            .push(IrInsn::without_output(IrOp::Return, smallvec![], 0x12018));
        func.insert_block(bb0);

        let mut ssa = build_ssa(func);

        // Annotate v1 with a struct that has a Ptr field at offset 8
        let v1_sv = *ssa
            .var_map
            .get(&(BlockId(0), 0, VarnodeSlot::Output))
            .expect("v1 output");
        let struct_ty = Type::Struct {
            name: "Node".into(),
            fields: vec![
                StructFieldType {
                    name: "value".into(),
                    ty: Type::int(8),
                    offset: 0,
                },
                StructFieldType {
                    name: "next".into(),
                    ty: Type::ptr_to(Type::int(8)),
                    offset: 8,
                },
            ],
        };
        ssa.composite_var_types.insert(v1_sv, struct_ty);

        let pass = TypeInferPass;
        pass.run(&mut ssa).expect("infer");

        // v1 gets Ptr from composite seeding (struct → Ptr)
        assert_eq!(ssa.var_types.get(&v1_sv).copied(), Some(PrimitiveType::Ptr));

        // v2: addr = v1 + 8, v1 has Struct with Ptr field "next" at offset 8
        let v2_sv = *ssa
            .var_map
            .get(&(BlockId(0), 2, VarnodeSlot::Output))
            .expect("v2 output");
        assert_eq!(
            ssa.var_types.get(&v2_sv).copied(),
            Some(PrimitiveType::Ptr),
            "struct field at offset 8 is Ptr (next pointer)"
        );
    }
}
