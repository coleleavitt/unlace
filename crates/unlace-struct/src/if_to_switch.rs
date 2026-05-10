//! Post-structuring pass: collapse if-else-if chains into switch statements.
//!
//! Walks the HIR looking for chains of `If { cond, then_body, else_body: Some([If ...]) }`
//! where every condition is `IntEqual(expr, Const)` against the same expression varnode.
//! Chains of 3+ cases are rewritten as `HirNode::Switch`.
//!
//! Modeled after RetDec's `if_to_switch_optimizer.cpp`.

use std::collections::BTreeMap;

use unlace_ir::ssa::{SsaFunction, SsaVarnode, VarnodeSlot};
use unlace_ir::{IrInsn, IrOp, SpaceId, Varnode};

use crate::hir::{HirFunction, HirNode, SwitchCase};

/// Minimum number of `IntEqual(expr, const)` cases required to justify
/// converting an if-chain to a switch. Two cases is just if/else — not
/// worth converting.
const MIN_CASES: usize = 3;

/// Convert eligible if-else-if chains to switch statements.
///
/// Must run after `ternary_recovery` and before C emission.
pub fn if_chain_to_switch(func: &mut HirFunction, ssa: &SsaFunction) {
    let def_map = build_def_map(ssa);
    func.body = rewrite_nodes(std::mem::take(&mut func.body), &def_map);
}

// ---------------------------------------------------------------------------
// Defining-instruction map
// ---------------------------------------------------------------------------

/// Maps each `SsaVarnode` (defined as an output) back to its defining `IrInsn`.
fn build_def_map(ssa: &SsaFunction) -> BTreeMap<SsaVarnode, IrInsn> {
    let mut map = BTreeMap::new();
    for (&(bid, idx, ref slot), sv) in &ssa.var_map {
        if *slot != VarnodeSlot::Output {
            continue;
        }
        if let Some(block) = ssa.function.blocks.get(&bid) {
            if let Some(insn) = block.insns.get(idx) {
                map.insert(*sv, insn.clone());
            }
        }
    }
    map
}

// ---------------------------------------------------------------------------
// Condition analysis
// ---------------------------------------------------------------------------

/// Extracted info from a single `IntEqual(expr, const)` condition.
struct EqualityCondition {
    /// The non-constant operand being compared.
    expr: SsaVarnode,
    /// The constant value being compared against.
    value: u64,
}

/// Check whether the given `SsaVarnode` is defined by `IntEqual(expr, const)`
/// and that `expr` is safe for switch conversion (no side effects).
fn extract_equality(
    cond: &SsaVarnode,
    def_map: &BTreeMap<SsaVarnode, IrInsn>,
) -> Option<EqualityCondition> {
    let insn = def_map.get(cond)?;

    if insn.op != IrOp::IntEqual {
        return None;
    }

    if insn.inputs.len() != 2 {
        return None;
    }

    let (lhs, rhs) = (insn.inputs[0], insn.inputs[1]);

    // Determine which operand is the constant and which is the expression.
    let (expr_vn, const_vn) = if rhs.space == SpaceId::Const {
        (lhs, rhs)
    } else if lhs.space == SpaceId::Const {
        (rhs, lhs)
    } else {
        // Neither operand is a constant — can't form a switch case.
        return None;
    };

    // Reject RAM-space operands (implies load/deref — side-effecting).
    if expr_vn.space == SpaceId::Ram {
        return None;
    }

    // Resolve expr_vn to an SsaVarnode via base-Varnode match in the def_map.
    // We compare `base` fields across branches (same physical register
    // regardless of SSA version).
    let expr_sv = find_input_sv_for_varnode(&expr_vn, def_map)?;

    // Reject expressions defined by side-effecting ops.
    if let Some(expr_insn) = def_map.get(&expr_sv) {
        match expr_insn.op {
            IrOp::Call | IrOp::Callind | IrOp::Callother | IrOp::Load => return None,
            _ => {}
        }
    }

    Some(EqualityCondition {
        expr: expr_sv,
        value: const_vn.offset,
    })
}

fn find_input_sv_for_varnode(
    expr_vn: &Varnode,
    def_map: &BTreeMap<SsaVarnode, IrInsn>,
) -> Option<SsaVarnode> {
    def_map
        .keys()
        .filter(|sv| sv.base == *expr_vn)
        .max_by_key(|sv| sv.version)
        .copied()
}

// ---------------------------------------------------------------------------
// If-chain extraction
// ---------------------------------------------------------------------------

/// A single arm of an if-chain: condition value + body.
struct ChainArm {
    value: u64,
    body: Vec<HirNode>,
}

/// Result of analyzing an if-chain.
struct IfChain {
    /// The common expression being compared in all conditions.
    switch_expr: SsaVarnode,
    /// The case arms (value + body).
    arms: Vec<ChainArm>,
    /// Optional default (final else) body.
    default: Option<Vec<HirNode>>,
}

/// Try to extract an if-else-if chain from a node.
///
/// Returns `None` if the node isn't an eligible if-chain.
fn try_extract_chain(node: &HirNode, def_map: &BTreeMap<SsaVarnode, IrInsn>) -> Option<IfChain> {
    let mut arms = Vec::new();
    let mut current = node;
    let mut switch_base: Option<Varnode> = None;
    let mut switch_expr: Option<SsaVarnode> = None;

    loop {
        match current {
            HirNode::If {
                cond,
                then_body,
                else_body,
            } => {
                let eq = extract_equality(cond, def_map)?;

                // Check that the expression base varnode is the same across
                // all branches.
                match switch_base {
                    None => {
                        switch_base = Some(eq.expr.base);
                        switch_expr = Some(eq.expr);
                    }
                    Some(base) if base == eq.expr.base => {}
                    Some(_) => return None, // Different variable
                }

                arms.push(ChainArm {
                    value: eq.value,
                    body: then_body.clone(),
                });

                match else_body {
                    Some(else_nodes) if else_nodes.len() == 1 => {
                        // Else body is a single node — check if it's another If.
                        if matches!(&else_nodes[0], HirNode::If { .. }) {
                            current = &else_nodes[0];
                            continue;
                        }
                        // Single non-If node: this is the default case.
                        if arms.len() < MIN_CASES {
                            return None;
                        }
                        // `?` over `unwrap()`: malformed AST → `None` not panic.
                        return Some(IfChain {
                            switch_expr: switch_expr?,
                            arms,
                            default: Some(else_nodes.clone()),
                        });
                    }
                    Some(else_nodes) => {
                        // Multi-node else body: this is the default case.
                        if arms.len() < MIN_CASES {
                            return None;
                        }
                        return Some(IfChain {
                            switch_expr: switch_expr?,
                            arms,
                            default: Some(else_nodes.clone()),
                        });
                    }
                    None => {
                        // No else body — end of chain.
                        if arms.len() < MIN_CASES {
                            return None;
                        }
                        return Some(IfChain {
                            switch_expr: switch_expr?,
                            arms,
                            default: None,
                        });
                    }
                }
            }
            _ => return None,
        }
    }
}

// ---------------------------------------------------------------------------
// HIR rewriting
// ---------------------------------------------------------------------------

fn rewrite_nodes(nodes: Vec<HirNode>, def_map: &BTreeMap<SsaVarnode, IrInsn>) -> Vec<HirNode> {
    nodes
        .into_iter()
        .map(|n| rewrite_node(n, def_map))
        .collect()
}

fn rewrite_node(node: HirNode, def_map: &BTreeMap<SsaVarnode, IrInsn>) -> HirNode {
    // First, try to convert this node if it's an if-chain.
    if let Some(chain) = try_extract_chain(&node, def_map) {
        let cases = chain
            .arms
            .into_iter()
            .map(|arm| {
                (
                    SwitchCase::Value(arm.value),
                    rewrite_nodes(arm.body, def_map),
                    false,
                )
            })
            .collect();

        let default = chain.default.map(|d| rewrite_nodes(d, def_map));

        return HirNode::Switch {
            cond: chain.switch_expr,
            cases,
            default,
            jumptable_addr: None,
            jumptable_cases: None,
        };
    }

    // Otherwise, recurse into children.
    match node {
        HirNode::Block(children) => HirNode::Block(rewrite_nodes(children, def_map)),

        HirNode::If {
            cond,
            then_body,
            else_body,
        } => HirNode::If {
            cond,
            then_body: rewrite_nodes(then_body, def_map),
            else_body: else_body.map(|e| rewrite_nodes(e, def_map)),
        },

        HirNode::While { cond, body } => HirNode::While {
            cond,
            body: rewrite_nodes(body, def_map),
        },

        HirNode::DoWhile { body, cond } => HirNode::DoWhile {
            body: rewrite_nodes(body, def_map),
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
                .map(|(c, body, ft)| (c, rewrite_nodes(body, def_map), ft))
                .collect(),
            default: default.map(|d| rewrite_nodes(d, def_map)),
            jumptable_addr,
            jumptable_cases,
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
            body: rewrite_nodes(body, def_map),
        },

        HirNode::TryCatch {
            try_body,
            catch_body,
        } => HirNode::TryCatch {
            try_body: rewrite_nodes(try_body, def_map),
            catch_body: rewrite_nodes(catch_body, def_map),
        },

        other => other,
    }
}

#[cfg(test)]
mod tests {
    use std::collections::{BTreeMap, BTreeSet};

    use smallvec::smallvec;

    use unlace_ir::ssa::{PrimitiveType, SsaVarnode};
    use unlace_ir::{IrInsn, IrOp, Varnode};

    use super::*;
    use crate::hir::{HirFunction, HirNode, SwitchCase};

    // -- Helpers --

    fn sv(offset: u64, size: u8, version: u32) -> SsaVarnode {
        SsaVarnode {
            base: Varnode::reg(offset, size),
            version,
        }
    }

    fn make_hir(body: Vec<HirNode>) -> HirFunction {
        HirFunction {
            name: "test".into(),
            params: vec![],
            return_type: PrimitiveType::Int(4),
            body,
            addr: 0x1000,
            foldable_exprs: BTreeSet::new(),
            panic_sites: BTreeMap::new(),
            noreturn: false,
            composite_var_types: BTreeMap::new(),
            is_ctor: false,
            is_dtor: false,
            class_name: None,
            merged_names: BTreeMap::new(),
            objc_dispatch_calls: BTreeMap::new(),
        }
    }

    /// Build a minimal def_map that maps condition SsaVarnodes to IntEqual
    /// instructions comparing a given expression varnode against a constant.
    fn make_def_map(entries: Vec<(SsaVarnode, Varnode, u64)>) -> BTreeMap<SsaVarnode, IrInsn> {
        let mut map = BTreeMap::new();
        for (cond_sv, expr_vn, const_val) in entries {
            // The IntEqual instruction: output is the cond_sv's base, inputs
            // are [expr_vn, const_val].
            let insn = IrInsn::with_output(
                IrOp::IntEqual,
                cond_sv.base,
                smallvec![expr_vn, Varnode::constant(const_val, expr_vn.size)],
                0x1000,
            );
            map.insert(cond_sv, insn);

            // Also ensure the expression varnode has a def_map entry (e.g.,
            // defined by a Copy, so it's not a call/load).
            let expr_sv = SsaVarnode {
                base: expr_vn,
                version: 0,
            };
            map.entry(expr_sv).or_insert_with(|| {
                IrInsn::with_output(
                    IrOp::Copy,
                    expr_vn,
                    smallvec![Varnode::reg(100, expr_vn.size)],
                    0x1000,
                )
            });
        }
        map
    }

    fn stmt(op: IrOp, output: Varnode, addr: u64) -> HirNode {
        HirNode::Statement(IrInsn::with_output(
            op,
            output,
            smallvec![Varnode::constant(0, 4)],
            addr,
        ))
    }

    // -- Tests --

    #[test]
    fn test_if_chain_3_cases_to_switch() {
        // if (x == 1) { A } else if (x == 2) { B } else if (x == 3) { C }
        let x = Varnode::reg(0, 4);
        let cond1 = sv(256, 1, 1); // IntEqual(x, 1)
        let cond2 = sv(256, 1, 2); // IntEqual(x, 2)
        let cond3 = sv(256, 1, 3); // IntEqual(x, 3)

        let body_a = vec![stmt(IrOp::Copy, Varnode::reg(8, 4), 0x2000)];
        let body_b = vec![stmt(IrOp::Copy, Varnode::reg(8, 4), 0x2010)];
        let body_c = vec![stmt(IrOp::Copy, Varnode::reg(8, 4), 0x2020)];

        let if_chain = HirNode::If {
            cond: cond1,
            then_body: body_a.clone(),
            else_body: Some(vec![HirNode::If {
                cond: cond2,
                then_body: body_b.clone(),
                else_body: Some(vec![HirNode::If {
                    cond: cond3,
                    then_body: body_c.clone(),
                    else_body: None,
                }]),
            }]),
        };

        let def_map = make_def_map(vec![(cond1, x, 1), (cond2, x, 2), (cond3, x, 3)]);

        let mut func = make_hir(vec![if_chain]);
        func.body = rewrite_nodes(std::mem::take(&mut func.body), &def_map);

        assert_eq!(func.body.len(), 1);
        match &func.body[0] {
            HirNode::Switch {
                cond,
                cases,
                default,
                ..
            } => {
                // The cond should have the same base as x.
                assert_eq!(cond.base, x);
                assert_eq!(cases.len(), 3);
                assert_eq!(cases[0].0, SwitchCase::Value(1));
                assert_eq!(cases[1].0, SwitchCase::Value(2));
                assert_eq!(cases[2].0, SwitchCase::Value(3));
                assert!(default.is_none());
            }
            other => panic!("expected Switch, got {other:?}"),
        }
    }

    #[test]
    fn test_if_chain_different_vars_no_convert() {
        // if (x == 1) { A } else if (y == 2) { B } else if (x == 3) { C }
        // Different variables in conditions → no conversion.
        let x = Varnode::reg(0, 4);
        let y = Varnode::reg(8, 4); // Different register
        let cond1 = sv(256, 1, 1);
        let cond2 = sv(256, 1, 2);
        let cond3 = sv(256, 1, 3);

        let body_a = vec![stmt(IrOp::Copy, Varnode::reg(16, 4), 0x2000)];
        let body_b = vec![stmt(IrOp::Copy, Varnode::reg(16, 4), 0x2010)];
        let body_c = vec![stmt(IrOp::Copy, Varnode::reg(16, 4), 0x2020)];

        let if_chain = HirNode::If {
            cond: cond1,
            then_body: body_a,
            else_body: Some(vec![HirNode::If {
                cond: cond2,
                then_body: body_b,
                else_body: Some(vec![HirNode::If {
                    cond: cond3,
                    then_body: body_c,
                    else_body: None,
                }]),
            }]),
        };

        let def_map = make_def_map(vec![
            (cond1, x, 1),
            (cond2, y, 2), // y, not x
            (cond3, x, 3),
        ]);

        let mut func = make_hir(vec![if_chain.clone()]);
        func.body = rewrite_nodes(std::mem::take(&mut func.body), &def_map);

        assert_eq!(func.body.len(), 1);
        assert!(
            matches!(&func.body[0], HirNode::If { .. }),
            "different variables should not convert, got {:?}",
            func.body[0],
        );
    }

    #[test]
    fn test_if_chain_2_cases_no_convert() {
        // if (x == 1) { A } else if (x == 2) { B }
        // Only 2 cases — below the threshold of 3.
        let x = Varnode::reg(0, 4);
        let cond1 = sv(256, 1, 1);
        let cond2 = sv(256, 1, 2);

        let body_a = vec![stmt(IrOp::Copy, Varnode::reg(8, 4), 0x2000)];
        let body_b = vec![stmt(IrOp::Copy, Varnode::reg(8, 4), 0x2010)];

        let if_chain = HirNode::If {
            cond: cond1,
            then_body: body_a,
            else_body: Some(vec![HirNode::If {
                cond: cond2,
                then_body: body_b,
                else_body: None,
            }]),
        };

        let def_map = make_def_map(vec![(cond1, x, 1), (cond2, x, 2)]);

        let mut func = make_hir(vec![if_chain.clone()]);
        func.body = rewrite_nodes(std::mem::take(&mut func.body), &def_map);

        assert_eq!(func.body.len(), 1);
        assert!(
            matches!(&func.body[0], HirNode::If { .. }),
            "2 cases should not convert, got {:?}",
            func.body[0],
        );
    }

    #[test]
    fn test_if_chain_with_else_becomes_default() {
        // if (x == 1) { A } else if (x == 2) { B } else if (x == 3) { C } else { D }
        // The trailing else becomes the default case.
        let x = Varnode::reg(0, 4);
        let cond1 = sv(256, 1, 1);
        let cond2 = sv(256, 1, 2);
        let cond3 = sv(256, 1, 3);

        let body_a = vec![stmt(IrOp::Copy, Varnode::reg(8, 4), 0x2000)];
        let body_b = vec![stmt(IrOp::Copy, Varnode::reg(8, 4), 0x2010)];
        let body_c = vec![stmt(IrOp::Copy, Varnode::reg(8, 4), 0x2020)];
        let body_d = vec![stmt(IrOp::Copy, Varnode::reg(8, 4), 0x2030)];

        let if_chain = HirNode::If {
            cond: cond1,
            then_body: body_a.clone(),
            else_body: Some(vec![HirNode::If {
                cond: cond2,
                then_body: body_b.clone(),
                else_body: Some(vec![HirNode::If {
                    cond: cond3,
                    then_body: body_c.clone(),
                    else_body: Some(body_d.clone()),
                }]),
            }]),
        };

        let def_map = make_def_map(vec![(cond1, x, 1), (cond2, x, 2), (cond3, x, 3)]);

        let mut func = make_hir(vec![if_chain]);
        func.body = rewrite_nodes(std::mem::take(&mut func.body), &def_map);

        assert_eq!(func.body.len(), 1);
        match &func.body[0] {
            HirNode::Switch {
                cond,
                cases,
                default,
                ..
            } => {
                assert_eq!(cond.base, x);
                assert_eq!(cases.len(), 3);
                assert_eq!(cases[0].0, SwitchCase::Value(1));
                assert_eq!(cases[1].0, SwitchCase::Value(2));
                assert_eq!(cases[2].0, SwitchCase::Value(3));
                assert!(default.is_some(), "trailing else should become default");
                let default_body = default.as_ref().unwrap();
                assert_eq!(default_body.len(), 1);
            }
            other => panic!("expected Switch, got {other:?}"),
        }
    }

    #[test]
    fn malformed_if_chain_with_empty_def_map_does_not_panic() {
        // Simulates a C++ exception edge: HIR has If nodes whose conditions
        // reference SsaVarnodes that aren't in the SSA def_map. The pass must
        // gracefully decline the rewrite instead of panicking on
        // `switch_expr.unwrap()`.
        let cond = sv(256, 1, 1);
        let body = vec![HirNode::If {
            cond,
            then_body: vec![stmt(IrOp::Copy, Varnode::reg(8, 4), 0x2000)],
            else_body: Some(vec![HirNode::If {
                cond,
                then_body: vec![stmt(IrOp::Copy, Varnode::reg(8, 4), 0x2010)],
                else_body: Some(vec![HirNode::If {
                    cond,
                    then_body: vec![stmt(IrOp::Copy, Varnode::reg(8, 4), 0x2020)],
                    else_body: None,
                }]),
            }]),
        }];

        let mut func = make_hir(body);
        let empty_map: BTreeMap<SsaVarnode, IrInsn> = BTreeMap::new();
        func.body = rewrite_nodes(std::mem::take(&mut func.body), &empty_map);

        match &func.body[0] {
            HirNode::Switch { .. } => {
                panic!("should not produce Switch when def_map can't resolve the expression")
            }
            HirNode::If { .. } => {}
            other => panic!("expected If preserved, got {other:?}"),
        }
    }
}
