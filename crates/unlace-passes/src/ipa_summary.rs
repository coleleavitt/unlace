//! Interprocedural function summaries.
//!
//! These summaries are intentionally cheap and conservative. They provide the
//! durable facts later IPA passes need: memory side effects, call presence,
//! noreturn, and obvious stack-address escapes.

use std::collections::BTreeMap;

use unlace_ir::ssa::SsaFunction;
use unlace_ir::{IrOp, SpaceId};

#[derive(Clone, Debug, Default, PartialEq, Eq)]
pub struct FunctionSummary {
    pub address: u64,
    pub noreturn: bool,
    pub reads_memory: bool,
    pub writes_memory: bool,
    pub has_calls: bool,
    pub stack_address_escapes: bool,
}

impl FunctionSummary {
    pub fn is_readonly(&self) -> bool {
        self.reads_memory && !self.writes_memory
    }

    pub fn is_memory_pure(&self) -> bool {
        !self.reads_memory && !self.writes_memory
    }
}

pub type FunctionSummaryRegistry = BTreeMap<u64, FunctionSummary>;

pub fn summarize_function(func: &SsaFunction) -> FunctionSummary {
    let mut summary = FunctionSummary {
        address: func.function.addr,
        noreturn: func.noreturn,
        ..FunctionSummary::default()
    };

    for block in func.function.blocks.values() {
        for insn in &block.insns {
            match insn.op {
                IrOp::Load | IrOp::AtomicLoad => summary.reads_memory = true,
                IrOp::Store | IrOp::AtomicStore | IrOp::AtomicRmw | IrOp::AtomicCas => {
                    summary.writes_memory = true;
                }
                IrOp::Call | IrOp::Callind | IrOp::Callother => {
                    summary.has_calls = true;
                    summary.reads_memory = true;
                    summary.writes_memory = true;
                    if insn.inputs.iter().any(|v| v.space == SpaceId::Stack) {
                        summary.stack_address_escapes = true;
                    }
                }
                _ => {}
            }
        }
    }

    summary
}

pub fn build_summary_registry<'a>(
    funcs: impl IntoIterator<Item = &'a SsaFunction>,
) -> FunctionSummaryRegistry {
    funcs
        .into_iter()
        .map(|func| (func.function.addr, summarize_function(func)))
        .collect()
}

#[cfg(test)]
mod tests {
    use smallvec::smallvec;
    use unlace_ir::ssa::build_ssa;
    use unlace_ir::{BasicBlock, BlockId, Function, IrInsn, IrOp, SpaceId, Varnode};

    use super::*;

    #[test]
    fn summarizes_memory_and_call_effects() {
        let mut function = Function::new("f", BlockId(0), 0x1000);
        let mut block = BasicBlock::new(BlockId(0));
        block.insns.push(IrInsn::without_output(
            IrOp::Store,
            smallvec![
                Varnode::new(SpaceId::Stack, (-8i64) as u64, 8),
                Varnode::constant(1, 8),
            ],
            0x1000,
        ));
        block.insns.push(IrInsn::without_output(
            IrOp::Call,
            smallvec![
                Varnode::constant(0x2000, 8),
                Varnode::new(SpaceId::Stack, (-8i64) as u64, 8),
            ],
            0x1004,
        ));
        block
            .insns
            .push(IrInsn::without_output(IrOp::Return, smallvec![], 0x1008));
        function.insert_block(block);

        let func = build_ssa(function);
        let summary = summarize_function(&func);

        assert!(summary.reads_memory);
        assert!(summary.writes_memory);
        assert!(summary.has_calls);
        assert!(summary.stack_address_escapes);
    }

    #[test]
    fn registry_keys_by_function_address() {
        let mut function = Function::new("f", BlockId(0), 0x4000);
        let mut block = BasicBlock::new(BlockId(0));
        block
            .insns
            .push(IrInsn::without_output(IrOp::Return, smallvec![], 0x4000));
        function.insert_block(block);
        let func = build_ssa(function);

        let registry = build_summary_registry([&func]);
        assert!(registry.contains_key(&0x4000));
        assert!(registry[&0x4000].is_memory_pure());
    }
}
