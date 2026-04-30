//! Post-structuring switch recovery pass.
//!
//! Walks the HIR looking for BRANCHIND patterns that were not caught during
//! initial structuring (e.g., because the indirect jump had no resolved
//! successors). This is a secondary cleanup pass — the primary switch
//! detection lives in the structurer itself.

use unlace_ir::IrOp;

use crate::hir::{HirFunction, HirNode};

pub fn recover_switches(func: &mut HirFunction) {
    func.body = walk_nodes(std::mem::take(&mut func.body));
}

fn walk_nodes(nodes: Vec<HirNode>) -> Vec<HirNode> {
    nodes.into_iter().map(walk_node).collect()
}

fn walk_node(node: HirNode) -> HirNode {
    match node {
        HirNode::Block(children) => HirNode::Block(walk_nodes(children)),
        HirNode::If { cond, then_body, else_body } => HirNode::If {
            cond,
            then_body: walk_nodes(then_body),
            else_body: else_body.map(walk_nodes),
        },
        HirNode::While { cond, body } => HirNode::While {
            cond,
            body: walk_nodes(body),
        },
        HirNode::DoWhile { body, cond } => HirNode::DoWhile {
            body: walk_nodes(body),
            cond,
        },
        HirNode::Switch { cond, cases, default } => HirNode::Switch {
            cond,
            cases: cases
                .into_iter()
                .map(|(c, body)| (c, walk_nodes(body)))
                .collect(),
            default: default.map(walk_nodes),
        },
        HirNode::Statement(ref insn) if insn.op == IrOp::Branchind => {
            tracing::debug!(addr = insn.addr, "unresolved BRANCHIND in HIR — keeping as statement");
            node
        }
        other => other,
    }
}

#[cfg(test)]
mod tests {
    use smallvec::smallvec;

    use unlace_ir::ssa::{PrimitiveType, SsaVarnode};
    use unlace_ir::{IrInsn, IrOp, Varnode};

    use super::*;
    use crate::hir::{HirFunction, HirNode, SwitchCase};

    fn make_hir_with_switch() -> HirFunction {
        let cond = SsaVarnode { base: Varnode::reg(0, 8), version: 0 };

        HirFunction {
            name: "switch_fn".into(),
            params: vec![],
            return_type: PrimitiveType::Unknown,
            body: vec![
                HirNode::Switch {
                    cond,
                    cases: vec![
                        (SwitchCase::Value(0), vec![HirNode::Return(None)]),
                        (SwitchCase::Value(1), vec![HirNode::Return(None)]),
                    ],
                    default: Some(vec![HirNode::Return(None)]),
                },
            ],
            addr: 0x1000,
        }
    }

    #[test]
    fn recover_preserves_existing_switch() {
        let mut func = make_hir_with_switch();
        recover_switches(&mut func);

        let has_switch = func.body.iter().any(|n| matches!(n, HirNode::Switch { .. }));
        assert!(has_switch, "existing Switch nodes must be preserved");
    }

    #[test]
    fn recover_preserves_unresolved_branchind() {
        let branchind = IrInsn::without_output(IrOp::Branchind, smallvec![], 0x2000);

        let mut func = HirFunction {
            name: "branchind_fn".into(),
            params: vec![],
            return_type: PrimitiveType::Unknown,
            body: vec![HirNode::Statement(branchind)],
            addr: 0x2000,
        };

        recover_switches(&mut func);

        let has_stmt = func.body.iter().any(|n| matches!(n, HirNode::Statement(i) if i.op == IrOp::Branchind));
        assert!(has_stmt, "unresolved BRANCHIND should remain as Statement");
    }
}
