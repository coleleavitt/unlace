//! Loop-closed SSA diagnostics.

use unlace_ir::BlockId;
use unlace_ir::ssa::{SsaFunction, SsaVarnode, VarnodeSlot};

use crate::licm::NaturalLoop;

#[derive(Clone, Debug, PartialEq, Eq)]
pub struct LcssaDiagnostic {
    pub header: BlockId,
    pub value: SsaVarnode,
    pub use_block: BlockId,
}

pub fn diagnose_lcssa(func: &SsaFunction, loops: &[NaturalLoop]) -> Vec<LcssaDiagnostic> {
    let mut out = Vec::new();
    for lp in loops {
        let mut defs_in_loop = std::collections::BTreeSet::new();
        for (&(bid, _, ref slot), &sv) in &func.var_map {
            if lp.body.contains(&bid) && matches!(slot, VarnodeSlot::Output) {
                defs_in_loop.insert(sv);
            }
        }
        for (&(bid, _, ref slot), &sv) in &func.var_map {
            if !lp.body.contains(&bid)
                && matches!(slot, VarnodeSlot::Input(_))
                && defs_in_loop.contains(&sv)
            {
                out.push(LcssaDiagnostic {
                    header: lp.header,
                    value: sv,
                    use_block: bid,
                });
            }
        }
    }
    out
}

#[cfg(test)]
mod tests {
    use smallvec::smallvec;
    use unlace_ir::ssa::{SsaVarnode, VarnodeSlot, build_ssa};
    use unlace_ir::{BasicBlock, BlockId, Function, IrInsn, IrOp, Varnode};

    use super::*;

    #[test]
    fn flags_loop_value_used_outside_loop() {
        let r = Varnode::reg(0, 8);
        let mut function = Function::new("lcssa", BlockId(0), 0x1000);
        let mut b0 = BasicBlock::new(BlockId(0));
        b0.insns.push(IrInsn::with_output(
            IrOp::Copy,
            r,
            smallvec![Varnode::constant(1, 8)],
            0x1000,
        ));
        b0.successors = smallvec![BlockId(1)];
        let mut b1 = BasicBlock::new(BlockId(1));
        b1.insns
            .push(IrInsn::without_output(IrOp::Return, smallvec![r], 0x1004));
        function.insert_block(b0);
        function.insert_block(b1);
        let mut func = build_ssa(function);
        let sv = SsaVarnode {
            base: r,
            version: 1,
        };
        func.var_map
            .insert((BlockId(0), 0, VarnodeSlot::Output), sv);
        func.var_map
            .insert((BlockId(1), 0, VarnodeSlot::Input(0)), sv);
        let lp = NaturalLoop {
            header: BlockId(0),
            body: [BlockId(0)].into_iter().collect(),
        };

        assert_eq!(diagnose_lcssa(&func, &[lp]).len(), 1);
    }
}
