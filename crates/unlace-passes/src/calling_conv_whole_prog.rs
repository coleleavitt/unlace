//! Whole-program calling convention inference.
//!
//! Propagates calling convention information across call edges.

use std::collections::BTreeMap;

use unlace_ir::IrOp;
use unlace_ir::ssa::{CallingConvention, FunctionSignatureRegistry, SsaFunction};

use crate::pass::{Pass, PassError};

/// Whole-program calling convention propagation pass.
pub struct WholeProgCallingConvPass {
    pub registry: FunctionSignatureRegistry,
}

impl Pass for WholeProgCallingConvPass {
    fn name(&self) -> &str {
        "whole-prog-calling-conv"
    }

    fn phase(&self) -> crate::pass::PassPhase {
        crate::pass::PassPhase::TypeRecovery
    }

    fn run(&self, func: &mut SsaFunction) -> Result<bool, PassError> {
        let mut changed = false;

        if func.calling_convention == CallingConvention::Unknown
            && let Some(sig) = self.registry.get(&func.function.addr)
            && sig.calling_convention != CallingConvention::Unknown
        {
            func.calling_convention = sig.calling_convention;
            changed = true;
        }

        for block in func.function.blocks.values() {
            for insn in &block.insns {
                if insn.op == IrOp::Call && !insn.inputs.is_empty() {
                    let target = insn.inputs[0].offset;
                    if let Some(sig) = self.registry.get(&target)
                        && sig.calling_convention != CallingConvention::Unknown
                        && func.calling_convention == CallingConvention::Unknown
                    {
                        func.calling_convention = sig.calling_convention;
                        changed = true;
                    }
                }
            }
        }

        Ok(changed)
    }
}

/// Infer a consensus calling convention from a set of functions.
pub fn infer_program_convention(functions: &[&SsaFunction]) -> CallingConvention {
    let mut counts: BTreeMap<u8, (CallingConvention, usize)> = BTreeMap::new();
    for f in functions {
        let cc = f.calling_convention;
        if cc != CallingConvention::Unknown {
            let key = cc as u8;
            counts.entry(key).or_insert((cc, 0)).1 += 1;
        }
    }
    counts
        .into_values()
        .max_by_key(|(_, count)| *count)
        .map(|(cc, _)| cc)
        .unwrap_or(CallingConvention::Unknown)
}

#[cfg(test)]
mod tests {
    use super::*;
    use smallvec::smallvec;
    use unlace_ir::ssa::{FunctionSignature, PrimitiveType, build_ssa};
    use unlace_ir::{BasicBlock, BlockId, Function, IrInsn, Varnode};

    #[test]
    fn test_propagates_convention_from_registry() {
        let mut func = Function::new("caller", BlockId(0), 0x1000);
        let mut bb = BasicBlock::new(BlockId(0));
        bb.insns.push(IrInsn::without_output(
            IrOp::Call,
            smallvec![Varnode::constant(0x2000, 8)],
            0x1000,
        ));
        bb.insns.push(IrInsn::without_output(
            IrOp::Return,
            smallvec![Varnode::constant(0, 8)],
            0x1004,
        ));
        func.insert_block(bb);

        let mut ssa = build_ssa(func);
        assert_eq!(ssa.calling_convention, CallingConvention::Unknown);

        let mut registry = FunctionSignatureRegistry::new();
        registry.insert(
            0x2000,
            FunctionSignature {
                param_types: vec![PrimitiveType::Int(8), PrimitiveType::Int(8)],
                return_type: PrimitiveType::Int(4),
                calling_convention: CallingConvention::SystemV,
            },
        );

        let pass = WholeProgCallingConvPass { registry };
        let changed = pass.run(&mut ssa).unwrap();
        assert!(changed);
        assert_eq!(ssa.calling_convention, CallingConvention::SystemV);
    }

    #[test]
    fn test_infer_program_convention_majority() {
        let make = |addr, cc: CallingConvention| {
            let mut f = Function::new("f", BlockId(0), addr);
            let mut bb = BasicBlock::new(BlockId(0));
            bb.insns
                .push(IrInsn::without_output(IrOp::Return, smallvec![], addr));
            f.insert_block(bb);
            let mut s = build_ssa(f);
            s.calling_convention = cc;
            s
        };
        let f1 = make(0x1000, CallingConvention::SystemV);
        let f2 = make(0x2000, CallingConvention::SystemV);
        let f3 = make(0x3000, CallingConvention::MicrosoftX64);

        let result = infer_program_convention(&[&f1, &f2, &f3]);
        assert_eq!(result, CallingConvention::SystemV);
    }
}
