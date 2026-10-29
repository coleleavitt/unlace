//! Post-structuring pass: collapse if/else assignments into ternary nodes.
//!
//! `if (c) { v = a; } else { v = b; }` becomes `v = c ? a : b;` when each arm
//! is one side-effect-free assignment to the same varnode. An arm that is
//! itself such an `if`/`else` over the same varnode nests:
//! `if (c1) v = a; else if (c2) v = b; else v = c;` becomes
//! `v = c1 ? a : c2 ? b : c;`.

use crate::hir::{HirFunction, HirNode, TernaryArm, TernarySelect};
use unlace_ir::ssa::SsaVarnode;
use unlace_ir::{IrInsn, IrOp, SpaceId, Varnode};

/// Most conditions one ternary may test.
///
/// Two keeps a single level of nesting (`a ? x : b ? y : z`). A longer
/// chain stays a whole `if`/`else` chain: it reads better as statements,
/// and chains of three or more equality tests belong to
/// [`crate::if_chain_to_switch`], which runs later.
const MAX_CONDS: usize = 2;

/// Walk the HIR body and convert eligible `If` nodes into `Ternary` nodes.
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
        } => match as_select(cond, &then_body, &else_body) {
            Some((select, output)) if select.conds().len() <= MAX_CONDS => {
                tracing::debug!(
                    target: "unlace::struct::ternary",
                    "ternary output={output:?} conds={} insns={}",
                    select.conds().len(),
                    select.insns().len()
                );
                HirNode::Ternary { select, output }
            }
            // A longer chain stays whole for `if_chain_to_switch`.
            Some(_) => HirNode::If {
                cond,
                then_body,
                else_body: Some(else_body),
            },
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

        HirNode::For {
            init,
            cond,
            update,
            body,
        } => HirNode::For {
            init,
            cond,
            update,
            body: recover_ternaries(body),
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

/// Read `if (cond) then_body else else_body` as a selection over one
/// varnode, and that varnode.
fn as_select(
    cond: SsaVarnode,
    then_body: &[HirNode],
    else_body: &[HirNode],
) -> Option<(TernarySelect, Varnode)> {
    tracing::trace!(
        target: "unlace::struct::ternary",
        "shape then={} else={}",
        arm_shape(then_body),
        arm_shape(else_body)
    );
    // A constant condition is a dead branch for later passes to remove.
    if cond.base.space == SpaceId::Const {
        return None;
    }
    let (then_arm, then_out) = as_arm(then_body)?;
    let (else_arm, else_out) = as_arm(else_body)?;
    if then_out != else_out {
        return None;
    }
    let select = TernarySelect {
        cond,
        then_arm,
        else_arm,
    };
    Some((select, then_out))
}

/// Read a branch body as one ternary arm and the varnode it assigns.
///
/// A value arm is a run of side-effect-free statements in which every
/// statement but the last writes a `Unique` temporary, so the run prints as
/// the single expression assigned by the last one. A nested `if`/`else`
/// that is itself a selection makes a nested arm.
fn as_arm(body: &[HirNode]) -> Option<(TernaryArm, Varnode)> {
    match body {
        [
            HirNode::If {
                cond,
                then_body,
                else_body: Some(else_body),
            },
        ] => {
            let (select, output) = as_select(*cond, then_body, else_body)?;
            return Some((TernaryArm::Select(Box::new(select)), output));
        }
        [HirNode::Ternary { select, output }] => {
            return Some((TernaryArm::Select(Box::new(select.clone())), *output));
        }
        _ => {}
    }
    let insns = body
        .iter()
        .map(|node| match node {
            HirNode::Statement(insn) if is_simple_value(insn) => Some(insn.clone()),
            _ => None,
        })
        .collect::<Option<Vec<_>>>()?;
    let (value, temps) = insns.split_last()?;
    // The printer keeps loads as statements of their own, so only a value
    // may load.
    if temps.iter().any(|temp| {
        temp.op == IrOp::Load || temp.output.map(|out| out.space) != Some(SpaceId::Unique)
    }) {
        return None;
    }
    let output = value.output?;
    Some((TernaryArm::Value(insns), output))
}

/// Whether `insn` computes a value with no effect besides writing its
/// output, so it can become one operand of `?:`.
fn is_simple_value(insn: &IrInsn) -> bool {
    insn.output.is_some()
        && insn.guard.is_none()
        && matches!(
            insn.op,
            IrOp::Copy
                | IrOp::Load
                | IrOp::IntAdd
                | IrOp::IntSub
                | IrOp::IntMult
                | IrOp::IntDiv
                | IrOp::IntSdiv
                | IrOp::IntRem
                | IrOp::IntSrem
                | IrOp::IntNegate
                | IrOp::Int2comp
                | IrOp::IntZext
                | IrOp::IntSext
                | IrOp::IntEqual
                | IrOp::IntNotequal
                | IrOp::IntLess
                | IrOp::IntSless
                | IrOp::IntLessequal
                | IrOp::IntSlessequal
                | IrOp::IntAnd
                | IrOp::IntOr
                | IrOp::IntXor
                | IrOp::IntLeft
                | IrOp::IntRight
                | IrOp::IntSright
                | IrOp::BoolNegate
                | IrOp::BoolAnd
                | IrOp::BoolOr
                | IrOp::BoolXor
                | IrOp::FloatAdd
                | IrOp::FloatSub
                | IrOp::FloatMult
                | IrOp::FloatDiv
                | IrOp::FloatNeg
                | IrOp::FloatAbs
                | IrOp::FloatInt2float
                | IrOp::FloatFloat2float
                | IrOp::FloatFloat2int
                | IrOp::Piece
                | IrOp::Subpiece
                | IrOp::Ptradd
                | IrOp::Ptrsub
                | IrOp::Cast
        )
}

fn arm_shape(body: &[HirNode]) -> String {
    body.iter()
        .map(|node| match node {
            HirNode::Statement(insn) => format!("{:?}->{:?}", insn.op, insn.output),
            HirNode::Ternary { output, .. } => format!("Ternary->{output:?}"),
            other => format!("{other:?}")
                .chars()
                .take_while(|c| c.is_alphanumeric())
                .collect(),
        })
        .collect::<Vec<_>>()
        .join("; ")
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
            go_defer_sites: Vec::new(),
            rust_async: None,
            noreturn: false,
            composite_var_types: std::collections::BTreeMap::new(),
            is_ctor: false,
            is_dtor: false,
            class_name: None,
            merged_names: BTreeMap::new(),
            objc_dispatch_calls: BTreeMap::new(),
            go_defer_recover_calls: BTreeMap::new(),
            indirect_branch_kinds: BTreeMap::new(),
            byref_boxes: BTreeMap::new(),
            byref_params: std::collections::BTreeSet::new(),
            var_role_names: std::collections::BTreeMap::new(),
            finalized_signature: None,
            byref_locals: std::collections::BTreeSet::new(),
            stack_frame: None,
            cpp_lambda_captures: Vec::new(),
            vtable_call_targets: BTreeMap::new(),
        }
    }

    fn stmt(insn: IrInsn) -> HirNode {
        HirNode::Statement(insn)
    }

    fn if_else(cond: SsaVarnode, then_body: Vec<HirNode>, else_body: Vec<HirNode>) -> HirNode {
        HirNode::If {
            cond,
            then_body,
            else_body: Some(else_body),
        }
    }

    fn recover(body: Vec<HirNode>) -> Vec<HirNode> {
        let mut func = make_func(body);
        ternary_recovery(&mut func);
        func.body
    }

    fn value(arm: &TernaryArm) -> &[IrInsn] {
        match arm {
            TernaryArm::Value(insns) => insns,
            TernaryArm::Select(select) => panic!("expected a value arm, got {select:?}"),
        }
    }

    #[test]
    fn simple_assignment() {
        let r0 = Varnode::reg(0, 4);
        let c1 = Varnode::constant(1, 4);
        let c2 = Varnode::constant(2, 4);
        let cond = sv(256, 1, 0);

        let body = recover(vec![if_else(
            cond,
            vec![stmt(copy_insn(r0, c1, 0x1000))],
            vec![stmt(copy_insn(r0, c2, 0x1010))],
        )]);

        let [HirNode::Ternary { select, output }] = body.as_slice() else {
            panic!("expected one Ternary, got {body:?}");
        };
        assert_eq!(*output, r0);
        assert_eq!(select.cond, cond);
        assert_eq!(value(&select.then_arm)[0].inputs[0], c1);
        assert_eq!(value(&select.else_arm)[0].inputs[0], c2);
    }

    #[test]
    fn arithmetic_values_with_folded_temporaries() {
        let r0 = Varnode::reg(0, 4);
        let r8 = Varnode::reg(8, 4);
        let tmp = Varnode::unique(0x10, 4);
        let c1 = Varnode::constant(1, 4);

        let body = recover(vec![if_else(
            sv(256, 1, 0),
            vec![
                stmt(IrInsn::with_output(
                    IrOp::IntAdd,
                    tmp,
                    smallvec![r8, c1],
                    0x1000,
                )),
                stmt(IrInsn::with_output(
                    IrOp::IntMult,
                    r0,
                    smallvec![tmp, r8],
                    0x1004,
                )),
            ],
            vec![stmt(IrInsn::with_output(
                IrOp::IntNegate,
                r0,
                smallvec![r8],
                0x1010,
            ))],
        )]);

        let [HirNode::Ternary { select, .. }] = body.as_slice() else {
            panic!("expected one Ternary, got {body:?}");
        };
        assert_eq!(value(&select.then_arm).len(), 2);
        assert_eq!(select.insns().len(), 3);
    }

    #[test]
    fn else_if_chain_nests() {
        let r0 = Varnode::reg(0, 4);
        let [c1, c2, c3] = [1, 2, 3].map(|n| Varnode::constant(n, 4));
        let (outer, inner) = (sv(256, 1, 0), sv(257, 1, 0));

        let body = recover(vec![if_else(
            outer,
            vec![stmt(copy_insn(r0, c1, 0x1000))],
            vec![if_else(
                inner,
                vec![stmt(copy_insn(r0, c2, 0x1010))],
                vec![stmt(copy_insn(r0, c3, 0x1020))],
            )],
        )]);

        let [HirNode::Ternary { select, output }] = body.as_slice() else {
            panic!("expected one Ternary, got {body:?}");
        };
        assert_eq!(*output, r0);
        assert_eq!(select.conds(), vec![outer, inner]);
        let TernaryArm::Select(nested) = &select.else_arm else {
            panic!("expected a nested select, got {:?}", select.else_arm);
        };
        assert_eq!(value(&nested.then_arm)[0].inputs[0], c2);
        assert_eq!(value(&nested.else_arm)[0].inputs[0], c3);
    }

    #[test]
    fn long_else_if_chain_stays_whole() {
        let r0 = Varnode::reg(0, 4);
        let chain = (0..3).rev().fold(
            vec![stmt(copy_insn(r0, Varnode::constant(9, 4), 0x2000))],
            |else_body, n| {
                vec![if_else(
                    sv(256 + n, 1, 0),
                    vec![stmt(copy_insn(r0, Varnode::constant(n, 4), 0x1000 + n))],
                    else_body,
                )]
            },
        );

        assert_eq!(recover(chain.clone()), chain);
    }

    #[test]
    fn nested_inside_loop() {
        let r0 = Varnode::reg(0, 4);
        let cond = sv(256, 1, 0);
        let inner = if_else(
            cond,
            vec![stmt(copy_insn(r0, Varnode::constant(1, 4), 0x1000))],
            vec![stmt(copy_insn(r0, Varnode::constant(2, 4), 0x1010))],
        );

        let body = recover(vec![HirNode::While {
            cond,
            body: vec![inner],
        }]);

        let [HirNode::While { body, .. }] = body.as_slice() else {
            panic!("expected While, got {body:?}");
        };
        assert!(
            matches!(body.as_slice(), [HirNode::Ternary { .. }]),
            "{body:?}"
        );
    }

    #[test]
    fn rejected_shapes_stay_if() {
        let r0 = Varnode::reg(0, 4);
        let r8 = Varnode::reg(8, 4);
        let tmp = Varnode::unique(0x10, 8);
        let c1 = Varnode::constant(1, 4);
        let cond = sv(256, 1, 0);
        let assign = |out, addr| stmt(copy_insn(out, c1, addr));

        let cases = [
            // Two assignments to registers in one arm.
            (
                vec![assign(r8, 0x1000), assign(r0, 0x1004)],
                vec![assign(r0, 0x1010)],
            ),
            // Different outputs.
            (vec![assign(r0, 0x1000)], vec![assign(r8, 0x1010)]),
            // A call is not a simple value.
            (
                vec![stmt(IrInsn::with_output(
                    IrOp::Call,
                    r0,
                    smallvec![Varnode::constant(0x4000, 8)],
                    0x1000,
                ))],
                vec![assign(r0, 0x1010)],
            ),
            // A load must be the value, not a temporary.
            (
                vec![
                    stmt(IrInsn::with_output(IrOp::Load, tmp, smallvec![r8], 0x1000)),
                    stmt(copy_insn(r0, tmp, 0x1004)),
                ],
                vec![assign(r0, 0x1010)],
            ),
            // An empty arm.
            (vec![], vec![assign(r0, 0x1010)]),
        ];
        for (then_body, else_body) in cases {
            let body = recover(vec![if_else(cond, then_body, else_body)]);
            assert!(matches!(body.as_slice(), [HirNode::If { .. }]), "{body:?}");
        }

        let constant = SsaVarnode {
            base: Varnode::constant(0, 1),
            version: 0,
        };
        let body = recover(vec![if_else(
            constant,
            vec![assign(r0, 0x1000)],
            vec![assign(r0, 0x1010)],
        )]);
        assert!(matches!(body.as_slice(), [HirNode::If { .. }]), "{body:?}");
    }
}
