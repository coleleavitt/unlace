//! Counterexample-guided type refinement (CEGIS-style).
//!
//! When the main type-inference pass (`type_constraint_solver`) leaves a
//! variable at [`PrimitiveType::Unknown`], this pass refines the type by:
//!
//! 1. Proposing a candidate type based on use-site context.
//! 2. Checking the candidate against all known constraints — if any existing
//!    constraint conflicts (the "counterexample"), the candidate is rejected.
//! 3. Applying the first consistent candidate.

use unlace_ir::ssa::{PrimitiveType, SsaFunction, SsaVarnode};
use unlace_ir::IrOp;

use crate::pass::{Pass, PassError};
use crate::type_constraint_solver::{Constraint, collect_constraints};

/// Counterexample-guided type refinement pass.
pub struct CounterexampleRefinePass;

impl Pass for CounterexampleRefinePass {
    fn name(&self) -> &str {
        "counterexample-type-refine"
    }

    fn phase(&self) -> crate::pass::PassPhase {
        crate::pass::PassPhase::TypeRecovery
    }

    fn run(&self, func: &mut SsaFunction) -> Result<bool, PassError> {
        let constraints = collect_constraints(func);
        let mut changed = false;

        let unknowns: Vec<SsaVarnode> = func
            .var_types
            .iter()
            .filter_map(|(sv, ty)| {
                if *ty == PrimitiveType::Unknown {
                    Some(*sv)
                } else {
                    None
                }
            })
            .collect();

        for sv in &unknowns {
            let candidates = propose_candidates(sv, func);
            for candidate in candidates {
                if verify_candidate(sv, &candidate, &constraints) {
                    func.var_types.insert(*sv, candidate);
                    changed = true;
                    break;
                }
            }
        }

        Ok(changed)
    }
}

fn propose_candidates(sv: &SsaVarnode, func: &SsaFunction) -> Vec<PrimitiveType> {
    let mut candidates = Vec::new();
    let width = sv.base.size;

    let mut used_in_bool = false;
    let mut used_as_ptr = false;
    let mut used_signed = false;
    let mut used_unsigned = false;
    let mut used_float = false;

    for block in func.function.blocks.values() {
        for insn in &block.insns {
            let is_input = insn.inputs.contains(&sv.base);
            if !is_input {
                continue;
            }
            match insn.op {
                IrOp::BoolAnd | IrOp::BoolOr | IrOp::BoolNegate => used_in_bool = true,
                IrOp::Load | IrOp::Store => {
                    if insn.inputs.first() == Some(&sv.base) {
                        used_as_ptr = true;
                    }
                }
                IrOp::IntSless | IrOp::IntSlessequal | IrOp::IntSright | IrOp::IntSdiv
                | IrOp::IntSrem | IrOp::IntSext => used_signed = true,
                IrOp::IntLess | IrOp::IntLessequal | IrOp::IntRight | IrOp::IntDiv
                | IrOp::IntRem | IrOp::IntZext => used_unsigned = true,
                IrOp::FloatAdd | IrOp::FloatSub | IrOp::FloatMult | IrOp::FloatDiv => {
                    used_float = true
                }
                _ => {}
            }
        }
    }

    if used_in_bool && width == 1 {
        candidates.push(PrimitiveType::Bool);
    }
    if used_as_ptr {
        candidates.push(PrimitiveType::Ptr);
    }
    if used_float {
        match width {
            4 => candidates.push(PrimitiveType::Float),
            8 => candidates.push(PrimitiveType::Double),
            _ => {}
        }
    }
    if used_signed && !used_unsigned {
        candidates.push(PrimitiveType::Int(width));
    }
    if used_unsigned && !used_signed {
        candidates.push(PrimitiveType::UnsignedInt(width));
    }
    candidates.push(PrimitiveType::Int(width));
    candidates
}

fn verify_candidate(
    sv: &SsaVarnode,
    candidate: &PrimitiveType,
    constraints: &[Constraint],
) -> bool {
    for constraint in constraints {
        match constraint {
            Constraint::Equal(v, ty) if v == sv => {
                if !types_compatible(candidate, ty) {
                    return false;
                }
            }
            Constraint::Subtype(v, ty) if v == sv
                && !types_compatible(candidate, ty) => {
                    return false;
                }
            _ => {}
        }
    }
    true
}

fn types_compatible(candidate: &PrimitiveType, existing: &PrimitiveType) -> bool {
    match (candidate, existing) {
        (_, PrimitiveType::Unknown) | (PrimitiveType::Unknown, _) => true,
        (a, b) if a == b => true,
        (PrimitiveType::Int(w1), PrimitiveType::UnsignedInt(w2))
        | (PrimitiveType::UnsignedInt(w1), PrimitiveType::Int(w2)) => w1 == w2,
        (PrimitiveType::Ptr, PrimitiveType::Int(8))
        | (PrimitiveType::Ptr, PrimitiveType::UnsignedInt(8)) => true,
        (PrimitiveType::Int(8), PrimitiveType::Ptr)
        | (PrimitiveType::UnsignedInt(8), PrimitiveType::Ptr) => true,
        _ => false,
    }
}

#[cfg(test)]
mod tests {
    use super::*;
    use smallvec::smallvec;
    use unlace_ir::ssa::build_ssa;
    use unlace_ir::{BasicBlock, BlockId, Function, IrInsn, Varnode};

    #[test]
    fn test_bool_candidate_accepted() {
        let v = Varnode::unique(0x100, 1);
        let sv = SsaVarnode { base: v, version: 0 };

        let mut func = Function::new("test_bool", BlockId(0), 0x1000);
        let mut bb = BasicBlock::new(BlockId(0));
        bb.insns.push(IrInsn::with_output(
            IrOp::BoolAnd,
            Varnode::unique(0x200, 1),
            smallvec![v, v],
            0x1000,
        ));
        bb.insns.push(IrInsn::without_output(
            IrOp::Return,
            smallvec![Varnode::constant(0, 8)],
            0x1004,
        ));
        func.insert_block(bb);

        let mut ssa = build_ssa(func);
        ssa.var_types.insert(sv, PrimitiveType::Unknown);

        let pass = CounterexampleRefinePass;
        let changed = pass.run(&mut ssa).unwrap();
        assert!(changed);
        assert_eq!(ssa.var_types[&sv], PrimitiveType::Bool);
    }

    #[test]
    fn test_ptr_candidate_from_load() {
        let addr = Varnode::unique(0x100, 8);
        let sv = SsaVarnode { base: addr, version: 0 };

        let mut func = Function::new("test_ptr", BlockId(0), 0x2000);
        let mut bb = BasicBlock::new(BlockId(0));
        bb.insns.push(IrInsn::with_output(
            IrOp::Load,
            Varnode::unique(0x200, 8),
            smallvec![addr, Varnode::constant(0, 8)],
            0x2000,
        ));
        bb.insns.push(IrInsn::without_output(
            IrOp::Return,
            smallvec![Varnode::constant(0, 8)],
            0x2004,
        ));
        func.insert_block(bb);

        let mut ssa = build_ssa(func);
        ssa.var_types.insert(sv, PrimitiveType::Unknown);

        let pass = CounterexampleRefinePass;
        let changed = pass.run(&mut ssa).unwrap();
        assert!(changed);
        assert_eq!(ssa.var_types[&sv], PrimitiveType::Ptr);
    }

    #[test]
    fn test_conflicting_constraint_rejects() {
        let v = Varnode::unique(0x100, 4);
        let sv = SsaVarnode { base: v, version: 0 };
        let constraints = vec![Constraint::Equal(sv, PrimitiveType::Float)];
        assert!(!verify_candidate(&sv, &PrimitiveType::Int(4), &constraints));
        assert!(verify_candidate(&sv, &PrimitiveType::Float, &constraints));
    }
}
