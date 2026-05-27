//! Post-structuring pass: collapse cmov-cascade patterns into switch statements.
//!
//! GCC -O2 lowers small dense switches (e.g. `switch(x % 4)`) to `cmp/cmov`
//! cascades instead of jump tables.  The structurer renders these as sequences
//! of flat `if (x == K) { dst = valK; }` nodes — independent conditional
//! assignments to the same destination variable testing the same discriminant.
//!
//! This pass walks blocks looking for runs of ≥3 consecutive such `If` nodes
//! and collapses them into a single `HirNode::Switch`.

use std::collections::BTreeMap;

use unlace_ir::ssa::{SsaFunction, SsaVarnode, VarnodeSlot};
use unlace_ir::{IrInsn, IrOp, SpaceId, Varnode};

use crate::hir::{HirFunction, HirNode, SwitchCase};

/// Minimum number of cmov-style cases required to justify a switch.
const MIN_CMOV_CASES: usize = 3;

/// Top-level entry point: walk the HIR and convert eligible cmov cascades
/// into switch statements.
///
/// This is a no-op when no cmov cascades are found.
pub fn recover_cmov_switches(hir: &mut HirFunction, ssa: &SsaFunction) {
    let def_map = build_def_map(ssa);
    hir.body = rewrite_block(std::mem::take(&mut hir.body), &def_map);
}

// ---------------------------------------------------------------------------
// Defining-instruction map (mirrors if_to_switch)
// ---------------------------------------------------------------------------

/// Maps each `SsaVarnode` (defined as an output) back to its defining `IrInsn`.
fn build_def_map(ssa: &SsaFunction) -> BTreeMap<SsaVarnode, IrInsn> {
    let mut map = BTreeMap::new();
    for (&(bid, idx, ref slot), sv) in &ssa.var_map {
        if *slot != VarnodeSlot::Output {
            continue;
        }
        if let Some(block) = ssa.function.blocks.get(&bid)
            && let Some(insn) = block.insns.get(idx)
        {
            map.insert(*sv, insn.clone());
        }
    }
    map
}

// ---------------------------------------------------------------------------
// Condition analysis
// ---------------------------------------------------------------------------

/// Extracted info from a single `IntEqual(expr, const)` condition.
struct EqualityCheck {
    /// The base varnode of the discriminant expression.
    expr_base: Varnode,
    /// The SSA varnode for the discriminant expression.
    expr_sv: SsaVarnode,
    /// The constant value being compared against.
    value: u64,
}

/// Try to extract an equality check from a condition SsaVarnode.
fn extract_equality(
    cond: &SsaVarnode,
    def_map: &BTreeMap<SsaVarnode, IrInsn>,
) -> Option<EqualityCheck> {
    let insn = def_map.get(cond)?;
    if insn.op != IrOp::IntEqual {
        return None;
    }
    if insn.inputs.len() != 2 {
        return None;
    }

    let (lhs, rhs) = (insn.inputs[0], insn.inputs[1]);

    // Determine which operand is the constant.
    let (expr_vn, const_vn) = if rhs.space == SpaceId::Const {
        (lhs, rhs)
    } else if lhs.space == SpaceId::Const {
        (rhs, lhs)
    } else {
        return None;
    };

    // Reject RAM-space operands (memory loads — side-effecting).
    if expr_vn.space == SpaceId::Ram {
        return None;
    }

    // Find the SSA varnode for the expression.
    let expr_sv = find_input_sv_for_varnode(&expr_vn, def_map)?;

    Some(EqualityCheck {
        expr_base: expr_vn,
        expr_sv,
        value: const_vn.offset,
    })
}

/// Find the SSA varnode matching a raw Varnode by base and highest version.
fn find_input_sv_for_varnode(
    vn: &Varnode,
    def_map: &BTreeMap<SsaVarnode, IrInsn>,
) -> Option<SsaVarnode> {
    def_map
        .keys()
        .filter(|sv| sv.base == *vn)
        .max_by_key(|sv| sv.version)
        .copied()
}

// ---------------------------------------------------------------------------
// Cmov cascade detection
// ---------------------------------------------------------------------------

/// A single arm of a cmov cascade: the case constant and the full if-body.
struct CmovArm {
    value: u64,
    body: Vec<HirNode>,
}

/// Check if a node is a cmov-style if: `if (x == K) { <single assignment to dst> }`
/// Returns the discriminant info and the output varnode of the assignment.
fn is_cmov_if(
    node: &HirNode,
    def_map: &BTreeMap<SsaVarnode, IrInsn>,
) -> Option<(EqualityCheck, Varnode)> {
    let HirNode::If {
        cond,
        then_body,
        else_body,
    } = node
    else {
        return None;
    };

    // Must have no else body (flat conditional move).
    if else_body.is_some() {
        return None;
    }

    // Body must be a single statement that writes an output.
    let output = match then_body.as_slice() {
        [HirNode::Statement(insn)] => insn.output?,
        _ => return None,
    };

    let eq = extract_equality(cond, def_map)?;
    Some((eq, output))
}

/// Scan a flat list of nodes for a run of ≥ MIN_CMOV_CASES consecutive cmov-if
/// nodes testing the same discriminant and writing to the same destination.
///
/// Returns `(start_index, count, discriminant_sv, arms)` for the first run found,
/// or `None` if no eligible run exists.
fn find_cmov_run(
    nodes: &[HirNode],
    def_map: &BTreeMap<SsaVarnode, IrInsn>,
) -> Option<(usize, usize, SsaVarnode, Vec<CmovArm>)> {
    let len = nodes.len();
    let mut i = 0;

    while i < len {
        // Try to start a run at position i.
        let Some((eq, output)) = is_cmov_if(&nodes[i], def_map) else {
            i += 1;
            continue;
        };

        let run_base = eq.expr_base;
        let run_sv = eq.expr_sv;
        let run_output = output;

        let mut arms = vec![CmovArm {
            value: eq.value,
            body: extract_then_body(&nodes[i]),
        }];

        let mut j = i + 1;
        while j < len {
            let Some((next_eq, next_output)) = is_cmov_if(&nodes[j], def_map) else {
                break;
            };
            // Same discriminant base varnode and same destination output.
            if next_eq.expr_base != run_base || next_output != run_output {
                break;
            }
            arms.push(CmovArm {
                value: next_eq.value,
                body: extract_then_body(&nodes[j]),
            });
            j += 1;
        }

        if arms.len() >= MIN_CMOV_CASES {
            return Some((i, arms.len(), run_sv, arms));
        }

        // Didn't find a long enough run starting at i — advance.
        i = j;
    }

    None
}

/// Extract the then_body from an If node (caller has already validated shape).
fn extract_then_body(node: &HirNode) -> Vec<HirNode> {
    match node {
        HirNode::If { then_body, .. } => then_body.clone(),
        _ => unreachable!(),
    }
}

// ---------------------------------------------------------------------------
// Rewriting
// ---------------------------------------------------------------------------

/// Rewrite a flat block of nodes, collapsing cmov cascades into switches.
fn rewrite_block(nodes: Vec<HirNode>, def_map: &BTreeMap<SsaVarnode, IrInsn>) -> Vec<HirNode> {
    // First, recurse into child nodes.
    let nodes: Vec<HirNode> = nodes
        .into_iter()
        .map(|n| recurse_into(n, def_map))
        .collect();

    // Now scan for cmov runs in this flat list.
    let mut result = nodes;
    loop {
        let Some((start, count, switch_expr, arms)) = find_cmov_run(&result, def_map) else {
            break;
        };

        // Build the switch node.
        let cases: Vec<(SwitchCase, Vec<HirNode>, bool)> = arms
            .into_iter()
            .map(|arm| (SwitchCase::Value(arm.value), arm.body, false))
            .collect();

        let switch = HirNode::Switch {
            cond: switch_expr,
            cases,
            default: None,
            jumptable_addr: None,
            jumptable_cases: None,
        };

        // Splice: replace nodes[start..start+count] with the single switch.
        let mut new_result = Vec::with_capacity(result.len() - count + 1);
        new_result.extend(result.drain(..start));
        // Skip the cmov nodes.
        let _ = result.drain(..count);
        new_result.push(switch);
        new_result.append(&mut result);
        result = new_result;
    }

    result
}

/// Recurse into child scopes of a node (loops, if bodies, switches, etc.)
/// so cmov cascades nested inside other constructs are also caught.
fn recurse_into(node: HirNode, def_map: &BTreeMap<SsaVarnode, IrInsn>) -> HirNode {
    match node {
        HirNode::Block(children) => HirNode::Block(rewrite_block(children, def_map)),

        HirNode::If {
            cond,
            then_body,
            else_body,
        } => HirNode::If {
            cond,
            then_body: rewrite_block(then_body, def_map),
            else_body: else_body.map(|e| rewrite_block(e, def_map)),
        },

        HirNode::While { cond, body } => HirNode::While {
            cond,
            body: rewrite_block(body, def_map),
        },

        HirNode::DoWhile { body, cond } => HirNode::DoWhile {
            body: rewrite_block(body, def_map),
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
            body: rewrite_block(body, def_map),
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
                .map(|(c, body, ft)| (c, rewrite_block(body, def_map), ft))
                .collect(),
            default: default.map(|d| rewrite_block(d, def_map)),
            jumptable_addr,
            jumptable_cases,
        },

        HirNode::TryCatch {
            try_body,
            catch_arms,
        } => HirNode::TryCatch {
            try_body: rewrite_block(try_body, def_map),
            catch_arms: catch_arms
                .into_iter()
                .map(|(ty, body)| (ty, rewrite_block(body, def_map)))
                .collect(),
        },

        HirNode::TryFinally {
            try_body,
            finally_body,
        } => HirNode::TryFinally {
            try_body: rewrite_block(try_body, def_map),
            finally_body: rewrite_block(finally_body, def_map),
        },

        other => other,
    }
}

// ---------------------------------------------------------------------------
// Tests
// ---------------------------------------------------------------------------

#[cfg(test)]
mod tests {
    use std::collections::BTreeMap;

    use smallvec::smallvec;

    use unlace_ir::ssa::SsaVarnode;
    use unlace_ir::{IrInsn, IrOp, Varnode};

    use super::*;
    use crate::hir::{HirNode, SwitchCase};

    // -- Helpers --

    fn sv(offset: u64, size: u8, version: u32) -> SsaVarnode {
        SsaVarnode {
            base: Varnode::unique(offset, size),
            version,
        }
    }

    /// Build a def_map with IntEqual conditions and an expression definition.
    ///
    /// `entries`: list of (condition_sv, discriminant_varnode, constant_value).
    fn make_def_map(entries: Vec<(SsaVarnode, Varnode, u64)>) -> BTreeMap<SsaVarnode, IrInsn> {
        let mut map = BTreeMap::new();
        for (cond_sv, expr_vn, const_val) in entries {
            let insn = IrInsn::with_output(
                IrOp::IntEqual,
                cond_sv.base,
                smallvec![expr_vn, Varnode::constant(const_val, expr_vn.size)],
                0x1000,
            );
            map.insert(cond_sv, insn);

            // Ensure the expression varnode has a def_map entry (non-side-effecting).
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

    fn copy_stmt(dst: Varnode, src_val: u64, addr: u64) -> HirNode {
        HirNode::Statement(IrInsn::with_output(
            IrOp::Copy,
            dst,
            smallvec![Varnode::constant(src_val, dst.size)],
            addr,
        ))
    }

    // -- Tests --

    #[test]
    fn three_cmov_cases_collapse_to_switch() {
        let disc = Varnode::reg(0x10, 4); // discriminant register
        let dst = Varnode::reg(0x20, 4); // destination register

        // Condition SsaVarnodes for each comparison.
        let cond0 = sv(0x100, 1, 0);
        let cond1 = sv(0x108, 1, 1);
        let cond2 = sv(0x110, 1, 2);

        let def_map = make_def_map(vec![(cond0, disc, 0), (cond1, disc, 1), (cond2, disc, 2)]);

        // Three flat if-statements (no else), each writing to `dst`.
        let body = vec![
            HirNode::If {
                cond: cond0,
                then_body: vec![copy_stmt(dst, 10, 0x2000)],
                else_body: None,
            },
            HirNode::If {
                cond: cond1,
                then_body: vec![copy_stmt(dst, 20, 0x2004)],
                else_body: None,
            },
            HirNode::If {
                cond: cond2,
                then_body: vec![copy_stmt(dst, 30, 0x2008)],
                else_body: None,
            },
        ];

        let result = rewrite_block(body, &def_map);

        // Should have collapsed into a single Switch node.
        assert_eq!(result.len(), 1);
        match &result[0] {
            HirNode::Switch { cases, default, .. } => {
                assert_eq!(cases.len(), 3);
                assert!(default.is_none());
                assert_eq!(cases[0].0, SwitchCase::Value(0));
                assert_eq!(cases[1].0, SwitchCase::Value(1));
                assert_eq!(cases[2].0, SwitchCase::Value(2));
            }
            other => panic!("Expected Switch, got {:?}", other),
        }
    }

    #[test]
    fn two_cases_not_enough() {
        let disc = Varnode::reg(0x10, 4);
        let dst = Varnode::reg(0x20, 4);

        let cond0 = sv(0x100, 1, 0);
        let cond1 = sv(0x108, 1, 1);

        let def_map = make_def_map(vec![(cond0, disc, 0), (cond1, disc, 1)]);

        let body = vec![
            HirNode::If {
                cond: cond0,
                then_body: vec![copy_stmt(dst, 10, 0x2000)],
                else_body: None,
            },
            HirNode::If {
                cond: cond1,
                then_body: vec![copy_stmt(dst, 20, 0x2004)],
                else_body: None,
            },
        ];

        let result = rewrite_block(body, &def_map);

        // Should remain unchanged — only 2 cases.
        assert_eq!(result.len(), 2);
        assert!(matches!(&result[0], HirNode::If { .. }));
    }

    #[test]
    fn different_discriminants_not_merged() {
        let disc_a = Varnode::reg(0x10, 4);
        let disc_b = Varnode::reg(0x18, 4); // different register
        let dst = Varnode::reg(0x20, 4);

        let cond0 = sv(0x100, 1, 0);
        let cond1 = sv(0x108, 1, 1);
        let cond2 = sv(0x110, 1, 2);

        let def_map = make_def_map(vec![
            (cond0, disc_a, 0),
            (cond1, disc_b, 1), // different discriminant!
            (cond2, disc_a, 2),
        ]);

        let body = vec![
            HirNode::If {
                cond: cond0,
                then_body: vec![copy_stmt(dst, 10, 0x2000)],
                else_body: None,
            },
            HirNode::If {
                cond: cond1,
                then_body: vec![copy_stmt(dst, 20, 0x2004)],
                else_body: None,
            },
            HirNode::If {
                cond: cond2,
                then_body: vec![copy_stmt(dst, 30, 0x2008)],
                else_body: None,
            },
        ];

        let result = rewrite_block(body, &def_map);

        // Should remain unchanged — discriminants differ at position 1.
        assert_eq!(result.len(), 3);
        assert!(matches!(&result[0], HirNode::If { .. }));
    }

    #[test]
    fn different_destinations_not_merged() {
        let disc = Varnode::reg(0x10, 4);
        let dst_a = Varnode::reg(0x20, 4);
        let dst_b = Varnode::reg(0x28, 4); // different destination

        let cond0 = sv(0x100, 1, 0);
        let cond1 = sv(0x108, 1, 1);
        let cond2 = sv(0x110, 1, 2);

        let def_map = make_def_map(vec![(cond0, disc, 0), (cond1, disc, 1), (cond2, disc, 2)]);

        let body = vec![
            HirNode::If {
                cond: cond0,
                then_body: vec![copy_stmt(dst_a, 10, 0x2000)],
                else_body: None,
            },
            HirNode::If {
                cond: cond1,
                then_body: vec![copy_stmt(dst_b, 20, 0x2004)], // different dest!
                else_body: None,
            },
            HirNode::If {
                cond: cond2,
                then_body: vec![copy_stmt(dst_a, 30, 0x2008)],
                else_body: None,
            },
        ];

        let result = rewrite_block(body, &def_map);

        // Should remain unchanged — destinations differ at position 1.
        assert_eq!(result.len(), 3);
        assert!(matches!(&result[0], HirNode::If { .. }));
    }

    #[test]
    fn noop_on_empty_body() {
        let def_map = BTreeMap::new();
        let result = rewrite_block(vec![], &def_map);
        assert!(result.is_empty());
    }

    #[test]
    fn preserves_surrounding_nodes() {
        let disc = Varnode::reg(0x10, 4);
        let dst = Varnode::reg(0x20, 4);

        let cond0 = sv(0x100, 1, 0);
        let cond1 = sv(0x108, 1, 1);
        let cond2 = sv(0x110, 1, 2);

        let def_map = make_def_map(vec![(cond0, disc, 0), (cond1, disc, 1), (cond2, disc, 2)]);

        let extra = HirNode::Statement(IrInsn::with_output(
            IrOp::Copy,
            Varnode::reg(0x30, 4),
            smallvec![Varnode::constant(0, 4)],
            0x3000,
        ));

        let body = vec![
            extra.clone(), // before
            HirNode::If {
                cond: cond0,
                then_body: vec![copy_stmt(dst, 10, 0x2000)],
                else_body: None,
            },
            HirNode::If {
                cond: cond1,
                then_body: vec![copy_stmt(dst, 20, 0x2004)],
                else_body: None,
            },
            HirNode::If {
                cond: cond2,
                then_body: vec![copy_stmt(dst, 30, 0x2008)],
                else_body: None,
            },
            extra.clone(), // after
        ];

        let result = rewrite_block(body, &def_map);

        // Should have: [Statement, Switch, Statement]
        assert_eq!(result.len(), 3);
        assert!(matches!(&result[0], HirNode::Statement(_)));
        assert!(matches!(&result[1], HirNode::Switch { .. }));
        assert!(matches!(&result[2], HirNode::Statement(_)));
    }

    #[test]
    fn cascade_inside_loop_is_detected() {
        let disc = Varnode::reg(0x10, 4);
        let dst = Varnode::reg(0x20, 4);

        let cond0 = sv(0x100, 1, 0);
        let cond1 = sv(0x108, 1, 1);
        let cond2 = sv(0x110, 1, 2);

        let def_map = make_def_map(vec![(cond0, disc, 0), (cond1, disc, 1), (cond2, disc, 2)]);

        // cmov cascade is inside a while-loop body.
        let loop_cond = sv(0x200, 1, 10);
        let inner = vec![
            HirNode::If {
                cond: cond0,
                then_body: vec![copy_stmt(dst, 10, 0x2000)],
                else_body: None,
            },
            HirNode::If {
                cond: cond1,
                then_body: vec![copy_stmt(dst, 20, 0x2004)],
                else_body: None,
            },
            HirNode::If {
                cond: cond2,
                then_body: vec![copy_stmt(dst, 30, 0x2008)],
                else_body: None,
            },
        ];

        let body = vec![HirNode::While {
            cond: loop_cond,
            body: inner,
        }];

        let result = rewrite_block(body, &def_map);

        assert_eq!(result.len(), 1);
        match &result[0] {
            HirNode::While { body, .. } => {
                assert_eq!(body.len(), 1);
                assert!(matches!(&body[0], HirNode::Switch { .. }));
            }
            other => panic!("Expected While, got {:?}", other),
        }
    }

    #[test]
    fn if_with_else_not_matched() {
        let disc = Varnode::reg(0x10, 4);
        let dst = Varnode::reg(0x20, 4);

        let cond0 = sv(0x100, 1, 0);
        let cond1 = sv(0x108, 1, 1);
        let cond2 = sv(0x110, 1, 2);

        let def_map = make_def_map(vec![(cond0, disc, 0), (cond1, disc, 1), (cond2, disc, 2)]);

        // These have else bodies — not cmov pattern.
        let body = vec![
            HirNode::If {
                cond: cond0,
                then_body: vec![copy_stmt(dst, 10, 0x2000)],
                else_body: Some(vec![copy_stmt(dst, 99, 0x2010)]),
            },
            HirNode::If {
                cond: cond1,
                then_body: vec![copy_stmt(dst, 20, 0x2004)],
                else_body: None,
            },
            HirNode::If {
                cond: cond2,
                then_body: vec![copy_stmt(dst, 30, 0x2008)],
                else_body: None,
            },
        ];

        let result = rewrite_block(body, &def_map);

        // First if has else → breaks the run at position 0.
        // Remaining 2 ifs aren't enough for a switch.
        assert_eq!(result.len(), 3);
        assert!(matches!(&result[0], HirNode::If { .. }));
    }
}
