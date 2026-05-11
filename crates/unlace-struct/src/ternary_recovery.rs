//! Post-structuring pass: collapse simple if/else COPY patterns into ternary nodes.

use crate::hir::{HirFunction, HirNode};
use unlace_ir::IrOp;

/// Walk the HIR body and convert eligible `If` nodes into `Ternary` nodes.
///
/// Eligible pattern:
/// ```text
/// If {
///     cond,
///     then_body: [Statement(insn_a)],   // insn_a.output == Some(V), insn_a.op == Copy
///     else_body: Some([Statement(insn_b)]),  // insn_b.output == Some(V), insn_b.op == Copy
/// }
/// ```
/// Both branches must write the same output varnode via COPY.
pub fn ternary_recovery(func: &mut HirFunction) {
    func.body = recover_ternaries(std::mem::take(&mut func.body));
}

fn recover_ternaries(nodes: Vec<HirNode>) -> Vec<HirNode> {
    nodes.into_iter().map(recover_node).collect()
}

fn recover_node(node: HirNode) -> HirNode {
    match node {
        HirNode::If {
            cond,
            then_body,
            else_body: Some(else_body),
        } => match try_as_ternary(&cond, &then_body, &else_body) {
            Some(ternary) => ternary,
            None => HirNode::If {
                cond,
                then_body: recover_ternaries(then_body),
                else_body: Some(recover_ternaries(else_body)),
            },
        },

        HirNode::If {
            cond,
            then_body,
            else_body: None,
        } => HirNode::If {
            cond,
            then_body: recover_ternaries(then_body),
            else_body: None,
        },

        HirNode::Block(children) => HirNode::Block(recover_ternaries(children)),

        HirNode::While { cond, body } => HirNode::While {
            cond,
            body: recover_ternaries(body),
        },

        HirNode::DoWhile { body, cond } => HirNode::DoWhile {
            body: recover_ternaries(body),
            cond,
        },

        HirNode::Switch {
            cond,
            cases,
            default,
            jumptable_addr,
            jumptable_cases,
        } => HirNode::Switch {
            cond,
            cases: cases
                .into_iter()
                .map(|(c, body, ft)| (c, recover_ternaries(body), ft))
                .collect(),
            default: default.map(recover_ternaries),
            jumptable_addr,
            jumptable_cases,
        },

        other => other,
    }
}

fn try_as_ternary(
    cond: &unlace_ir::ssa::SsaVarnode,
    then_body: &[HirNode],
    else_body: &[HirNode],
) -> Option<HirNode> {
    let then_insn = match then_body {
        [HirNode::Statement(insn)] => insn,
        _ => return None,
    };
    let else_insn = match else_body {
        [HirNode::Statement(insn)] => insn,
        _ => return None,
    };

    if then_insn.op != IrOp::Copy || else_insn.op != IrOp::Copy {
        return None;
    }

    let then_out = then_insn.output?;
    let else_out = else_insn.output?;

    if then_out != else_out {
        return None;
    }

    Some(HirNode::Ternary {
        cond: *cond,
        then_insn: then_insn.clone(),
        else_insn: else_insn.clone(),
        output: then_out,
    })
}

#[cfg(test)]
mod tests {
    use std::collections::{BTreeMap, BTreeSet};

    use smallvec::smallvec;

    use unlace_ir::ssa::{PrimitiveType, SsaVarnode};
    use unlace_ir::{IrInsn, IrOp, Varnode};

    use super::*;
    use crate::hir::HirFunction;

    fn sv(offset: u64, size: u8, version: u32) -> SsaVarnode {
        SsaVarnode {
            base: Varnode::reg(offset, size),
            version,
        }
    }

    fn copy_insn(output: Varnode, input: Varnode, addr: u64) -> IrInsn {
        IrInsn::with_output(IrOp::Copy, output, smallvec![input], addr)
    }

    fn make_func(body: Vec<HirNode>) -> HirFunction {
        HirFunction {
            name: "test".to_string(),
            params: vec![],
            return_type: PrimitiveType::Int(4),
            body,
            addr: 0x1000,
            foldable_exprs: BTreeSet::new(),
            panic_sites: std::collections::BTreeMap::new(),
            noreturn: false,
            composite_var_types: std::collections::BTreeMap::new(),
            is_ctor: false,
            is_dtor: false,
            class_name: None,
            merged_names: BTreeMap::new(),
            objc_dispatch_calls: BTreeMap::new(),
            indirect_branch_kinds: BTreeMap::new(),
            byref_boxes: BTreeMap::new(),
            byref_params: std::collections::BTreeSet::new(),
        }
    }

    #[test]
    fn test_ternary_simple_assignment() {
        let r0 = Varnode::reg(0, 4);
        let c1 = Varnode::constant(1, 4);
        let c2 = Varnode::constant(2, 4);
        let cond = sv(256, 1, 0);

        let body = vec![HirNode::If {
            cond,
            then_body: vec![HirNode::Statement(copy_insn(r0, c1, 0x1000))],
            else_body: Some(vec![HirNode::Statement(copy_insn(r0, c2, 0x1010))]),
        }];

        let mut func = make_func(body);
        ternary_recovery(&mut func);

        assert_eq!(func.body.len(), 1);
        match &func.body[0] {
            HirNode::Ternary {
                cond: c,
                output,
                then_insn,
                else_insn,
            } => {
                assert_eq!(*c, cond);
                assert_eq!(*output, r0);
                assert_eq!(then_insn.op, IrOp::Copy);
                assert_eq!(else_insn.op, IrOp::Copy);
                assert_eq!(then_insn.inputs[0], c1);
                assert_eq!(else_insn.inputs[0], c2);
            }
            other => panic!("expected Ternary, got {other:?}"),
        }
    }

    #[test]
    fn test_ternary_not_for_complex_bodies() {
        let r0 = Varnode::reg(0, 4);
        let r8 = Varnode::reg(8, 4);
        let c1 = Varnode::constant(1, 4);
        let c2 = Varnode::constant(2, 4);
        let cond = sv(256, 1, 0);

        let body = vec![HirNode::If {
            cond,
            then_body: vec![
                HirNode::Statement(copy_insn(r8, c1, 0x1000)),
                HirNode::Statement(copy_insn(r0, c1, 0x1004)),
            ],
            else_body: Some(vec![HirNode::Statement(copy_insn(r0, c2, 0x1010))]),
        }];

        let mut func = make_func(body);
        ternary_recovery(&mut func);

        assert_eq!(func.body.len(), 1);
        assert!(
            matches!(&func.body[0], HirNode::If { .. }),
            "multi-statement then_body should remain as If, got {:?}",
            func.body[0]
        );
    }

    #[test]
    fn test_ternary_not_for_different_outputs() {
        let r0 = Varnode::reg(0, 4);
        let r8 = Varnode::reg(8, 4);
        let c1 = Varnode::constant(1, 4);
        let c2 = Varnode::constant(2, 4);
        let cond = sv(256, 1, 0);

        let body = vec![HirNode::If {
            cond,
            then_body: vec![HirNode::Statement(copy_insn(r0, c1, 0x1000))],
            else_body: Some(vec![HirNode::Statement(copy_insn(r8, c2, 0x1010))]),
        }];

        let mut func = make_func(body);
        ternary_recovery(&mut func);

        assert_eq!(func.body.len(), 1);
        assert!(
            matches!(&func.body[0], HirNode::If { .. }),
            "different outputs should remain as If, got {:?}",
            func.body[0]
        );
    }

    #[test]
    fn test_ternary_not_for_non_copy_ops() {
        let r0 = Varnode::reg(0, 4);
        let r8 = Varnode::reg(8, 4);
        let c1 = Varnode::constant(1, 4);
        let cond = sv(256, 1, 0);

        let add_insn = IrInsn::with_output(IrOp::IntAdd, r0, smallvec![r8, c1], 0x1000);

        let body = vec![HirNode::If {
            cond,
            then_body: vec![HirNode::Statement(add_insn)],
            else_body: Some(vec![HirNode::Statement(copy_insn(r0, c1, 0x1010))]),
        }];

        let mut func = make_func(body);
        ternary_recovery(&mut func);

        assert_eq!(func.body.len(), 1);
        assert!(
            matches!(&func.body[0], HirNode::If { .. }),
            "non-Copy ops should remain as If, got {:?}",
            func.body[0]
        );
    }

    #[test]
    fn test_ternary_nested_recovery() {
        let r0 = Varnode::reg(0, 4);
        let c1 = Varnode::constant(1, 4);
        let c2 = Varnode::constant(2, 4);
        let cond = sv(256, 1, 0);

        let inner_if = HirNode::If {
            cond,
            then_body: vec![HirNode::Statement(copy_insn(r0, c1, 0x1000))],
            else_body: Some(vec![HirNode::Statement(copy_insn(r0, c2, 0x1010))]),
        };

        let body = vec![HirNode::While {
            cond,
            body: vec![inner_if],
        }];

        let mut func = make_func(body);
        ternary_recovery(&mut func);

        match &func.body[0] {
            HirNode::While { body, .. } => {
                assert_eq!(body.len(), 1);
                assert!(
                    matches!(&body[0], HirNode::Ternary { .. }),
                    "nested If inside While should be converted to Ternary, got {:?}",
                    body[0]
                );
            }
            other => panic!("expected While, got {other:?}"),
        }
    }
}
