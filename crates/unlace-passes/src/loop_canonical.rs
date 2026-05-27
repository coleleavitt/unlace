//! Loop canonical-form diagnostics.

use unlace_ir::ssa::SsaFunction;

use crate::licm::NaturalLoop;

#[derive(Clone, Debug, PartialEq, Eq)]
pub struct LoopCanonicalDiagnostic {
    pub header: unlace_ir::BlockId,
    pub message: String,
}

pub fn diagnose_loop_canonical_form(
    func: &SsaFunction,
    loops: &[NaturalLoop],
) -> Vec<LoopCanonicalDiagnostic> {
    let mut out = Vec::new();
    for lp in loops {
        let latches = lp
            .body
            .iter()
            .filter(|bid| {
                func.function
                    .blocks
                    .get(bid)
                    .is_some_and(|block| block.successors.contains(&lp.header))
            })
            .count();
        let outside_preds = func
            .cfg
            .predecessors(lp.header)
            .into_iter()
            .filter(|pred| !lp.body.contains(pred))
            .count();
        if latches == 0 {
            out.push(LoopCanonicalDiagnostic {
                header: lp.header,
                message: "loop has no latch".into(),
            });
        }
        if outside_preds != 1 {
            out.push(LoopCanonicalDiagnostic {
                header: lp.header,
                message: "loop does not have exactly one preheader predecessor".into(),
            });
        }
    }
    out
}

#[cfg(test)]
mod tests {
    use smallvec::smallvec;
    use unlace_ir::ssa::build_ssa;
    use unlace_ir::{BasicBlock, BlockId, Function, IrInsn, IrOp};

    use super::*;

    #[test]
    fn flags_missing_preheader_and_latch() {
        let mut function = Function::new("loop_diag", BlockId(0), 0x1000);
        let mut b0 = BasicBlock::new(BlockId(0));
        b0.insns
            .push(IrInsn::without_output(IrOp::Return, smallvec![], 0x1000));
        function.insert_block(b0);
        let func = build_ssa(function);
        let lp = NaturalLoop {
            header: BlockId(3),
            body: [BlockId(3)].into_iter().collect(),
        };
        let diags = diagnose_loop_canonical_form(&func, &[lp]);
        assert_eq!(diags.len(), 2);
    }
}
