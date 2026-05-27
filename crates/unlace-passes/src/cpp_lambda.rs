//! C++ lambda capture recovery.
//!
//! The pass is intentionally conservative: it records source-like capture
//! metadata when the closure object layout is visible in SSA.  A closure's
//! data members are ordinary stores into `this + offset`; pointer-typed fields
//! are reported as reference captures (`&x`) while scalar fields are reported
//! as value captures.  A field at offset zero whose stored value is also a
//! pointer is treated as the common `[this]` capture.

use std::collections::{BTreeMap, BTreeSet};

use unlace_ir::ssa::{CppLambdaCapture, PrimitiveType, SsaFunction, SsaVarnode};
use unlace_ir::types::Type;
use unlace_ir::{BlockId, IrOp, SpaceId, Varnode};

use crate::pass::{Pass, PassError};

/// Recover capture lists for C++ lambda closure objects.
#[derive(Default)]
pub struct CppLambdaCapturePass;

impl Pass for CppLambdaCapturePass {
    fn name(&self) -> &'static str {
        "cpp-lambda-captures"
    }

    fn phase(&self) -> crate::pass::PassPhase {
        crate::pass::PassPhase::TypeRecovery
    }

    fn run(&self, func: &mut SsaFunction) -> Result<bool, PassError> {
        let captures = recover_lambda_captures(func);
        if captures == func.cpp_lambda_captures {
            return Ok(false);
        }
        func.cpp_lambda_captures = captures;
        Ok(true)
    }
}

/// Recover captures from a lambda call-operator or closure constructor body.
pub fn recover_lambda_captures(func: &SsaFunction) -> Vec<CppLambdaCapture> {
    if !looks_like_lambda_symbol(&func.function.name) {
        return Vec::new();
    }

    let this_vars = candidate_this_vars(func);
    if this_vars.is_empty() {
        return Vec::new();
    }

    let defs = def_map(func);
    let mut by_offset: BTreeMap<u64, CppLambdaCapture> = BTreeMap::new();
    let mut ordinal = 0usize;

    for block in func.function.blocks.values() {
        for (idx, insn) in block.insns.iter().enumerate() {
            if insn.op != IrOp::Store || insn.inputs.len() < 2 {
                continue;
            }
            let Some(out) = func
                .var_map
                .get(&(block.id, idx, unlace_ir::ssa::VarnodeSlot::Input(0)))
                .copied()
            else {
                continue;
            };
            let Some(val) = func
                .var_map
                .get(&(block.id, idx, unlace_ir::ssa::VarnodeSlot::Input(1)))
                .copied()
            else {
                continue;
            };
            let Some((base, offset)) = resolve_this_field(func, out, &defs) else {
                continue;
            };
            if !this_vars.contains(&base) {
                continue;
            }

            let ty = rich_type_for(func, val);
            let primitive = func
                .var_types
                .get(&val)
                .copied()
                .unwrap_or(PrimitiveType::Unknown);
            let by_ref = matches!(primitive, PrimitiveType::Ptr)
                || ty.as_ref().is_some_and(Type::is_pointer);
            let name = if offset == 0 && by_ref {
                "this".to_string()
            } else {
                let n = format!("capture_{ordinal}");
                ordinal += 1;
                n
            };

            let mut cap = CppLambdaCapture::new(name, by_ref).with_offset(offset);
            if let Some(ty) = ty {
                cap = cap.with_type(ty);
            }
            by_offset.entry(offset).or_insert(cap);
        }
    }

    by_offset.into_values().collect()
}

fn looks_like_lambda_symbol(name: &str) -> bool {
    name.contains("Ul") || name.contains("$_") || name.contains("lambda")
}

fn candidate_this_vars(func: &SsaFunction) -> BTreeSet<SsaVarnode> {
    let mut vars = BTreeSet::new();
    // First argument register on the common C++ ABIs: SysV RDI or MS x64 RCX.
    for ((_, _, slot), sv) in &func.var_map {
        if matches!(slot, unlace_ir::ssa::VarnodeSlot::Input(_))
            && sv.base.space == SpaceId::Register
            && sv.base.size == 8
            && (sv.base.offset == 0 || sv.base.offset == 24)
        {
            vars.insert(*sv);
        }
    }
    vars
}

fn def_map(func: &SsaFunction) -> BTreeMap<SsaVarnode, (BlockId, usize)> {
    let mut defs = BTreeMap::new();
    for block in func.function.blocks.values() {
        for (idx, _insn) in block.insns.iter().enumerate() {
            if let Some(out) =
                func.var_map
                    .get(&(block.id, idx, unlace_ir::ssa::VarnodeSlot::Output))
            {
                defs.insert(*out, (block.id, idx));
            }
        }
    }
    defs
}

fn resolve_this_field(
    func: &SsaFunction,
    addr: SsaVarnode,
    defs: &BTreeMap<SsaVarnode, (BlockId, usize)>,
) -> Option<(SsaVarnode, u64)> {
    let (bid, idx) = *defs.get(&addr)?;
    let def = func.function.blocks.get(&bid)?.insns.get(idx)?;
    match def.op {
        IrOp::IntAdd | IrOp::Ptradd => {
            let a = ssa_input(func, bid, idx, 0);
            let b = ssa_input(func, bid, idx, 1);
            if let (Some(base), Some(raw)) = (a, def.inputs.get(1))
                && let Some(k) = const_value(*raw)
            {
                return Some((base, k));
            }
            if let (Some(base), Some(raw)) = (b, def.inputs.first())
                && let Some(k) = const_value(*raw)
            {
                return Some((base, k));
            }
            if let (Some(a), Some(b)) = (a, b) {
                if let Some(k) = const_value(b.base) {
                    return Some((a, k));
                }
                if let Some(k) = const_value(a.base) {
                    return Some((b, k));
                }
            }
            None
        }
        IrOp::Copy => ssa_input(func, bid, idx, 0).map(|base| (base, 0)),
        _ => None,
    }
}

fn ssa_input(func: &SsaFunction, bid: BlockId, idx: usize, input_idx: usize) -> Option<SsaVarnode> {
    func.var_map
        .get(&(bid, idx, unlace_ir::ssa::VarnodeSlot::Input(input_idx)))
        .copied()
}

fn const_value(vn: Varnode) -> Option<u64> {
    (vn.space == SpaceId::Const).then_some(vn.offset)
}

fn rich_type_for(func: &SsaFunction, sv: SsaVarnode) -> Option<Type> {
    func.composite_var_types.get(&sv).cloned().or_else(|| {
        func.var_types.get(&sv).and_then(|p| match p {
            PrimitiveType::Unknown => None,
            other => Some(Type::Primitive(*other)),
        })
    })
}

#[cfg(test)]
mod tests {
    use smallvec::smallvec;
    use unlace_ir::ssa::{PrimitiveType, build_ssa};
    use unlace_ir::{BasicBlock, BlockId, Function, IrInsn, IrOp, Varnode};

    use super::*;

    #[test]
    fn recovers_this_and_reference_capture_from_field_stores() {
        let this = Varnode::reg(0, 8);
        let ptr = Varnode::reg(8, 8);
        let addr0 = Varnode::unique(0, 8);
        let addr8 = Varnode::unique(8, 8);
        let mut f = Function::new("_ZZ11call_lambdaiENKUliE_clEi", BlockId(0), 0x1000);
        let mut bb = BasicBlock::new(BlockId(0));
        bb.insns = vec![
            IrInsn::with_output(
                IrOp::IntAdd,
                addr0,
                smallvec![this, Varnode::constant(0, 8)],
                0x1000,
            ),
            IrInsn::without_output(IrOp::Store, smallvec![addr0, this], 0x1004),
            IrInsn::with_output(
                IrOp::IntAdd,
                addr8,
                smallvec![this, Varnode::constant(8, 8)],
                0x1008,
            ),
            IrInsn::without_output(IrOp::Store, smallvec![addr8, ptr], 0x100c),
        ];
        f.blocks.insert(BlockId(0), bb);
        let mut ssa = build_ssa(f);
        for sv in ssa.var_map.values().copied() {
            if sv.base == this || sv.base == ptr {
                ssa.var_types.insert(sv, PrimitiveType::Ptr);
            }
        }

        let caps = recover_lambda_captures(&ssa);
        assert_eq!(caps.len(), 2);
        assert_eq!(caps[0].name, "this");
        assert!(caps[0].by_ref);
        assert_eq!(caps[1].name, "capture_0");
        assert!(caps[1].by_ref);
        assert_eq!(caps[1].offset, Some(8));
    }
}
