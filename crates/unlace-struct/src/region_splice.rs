//! Splice a structured region ([`StructuredNode`]) back into HIR
//! ([`HirNode`]). Step 3b of the DREAM condition-based structurer
//! (`docs/design-structurer-irreducible-2026-05-29.md`).
//!
//! This is the HIR lowering layer used by the conservative DREAM production
//! seam. Step 3a ([`crate::region_bridge`]) produces the `RegionNode ->
//! BlockId` map; the condition-refinement step
//! ([`crate::condition_refinement`]) produces the [`StructuredNode`] tree. This
//! module joins them with caller-supplied per-block HIR bodies and a
//! predicate-id → branch-condition map.
//!
//! # Inputs
//!
//! * `node_to_block` — the `RegionNode -> BlockId` map from 3a.
//! * `block_bodies` — already-structured per-block HIR statements, keyed by
//!   [`BlockId`]. The caller owns the lowering of each block's statements; we
//!   only stitch them into the control-flow skeleton.
//! * `pred_cond` — predicate-id → the branch-condition [`SsaVarnode`]. The
//!   predicate id is the *source* `BlockId` numeric value (per 3a's mapping of
//!   the `ConditionalTrue`/`ConditionalFalse` edge pair).
//!
//! # Atomic-condition invariant
//!
//! The condition-refinement pass peels exactly ONE atomic factor per nesting
//! level, so every [`StructuredNode::If`] `cond` is a SINGLE atomic [`Cond`] —
//! `Pred`, `NotPred`, `CaseEq`, or `NotCaseEq` — NEVER a compound `And`/`Or`.
//! We therefore map one atomic predicate to one `SsaVarnode`; no boolean
//! formula lowering is required.
//!
//! # NotPred arm-swap
//!
//! `pred_cond` stores the POSITIVE branch condition for a predicate id. An
//! `If { cond: NotPred(id), then, els }` means "execute `then` when the
//! predicate is FALSE". Since HIR only has a positive `cond`, we swap the
//! arms: the positive `SsaVarnode` guards the (former) `els`, and `then` moves
//! to the `else_body`. When `els` is absent we emit
//! `If { cond, then_body: [], else_body: Some(splice(then)) }` — the empty
//! then-arm keeps the positive guard while ensuring `then` is never dropped.

use std::collections::BTreeMap;

use unlace_ir::ssa::SsaVarnode;
use unlace_ir::{BlockId, Varnode};

use crate::condition_refinement::StructuredNode;
use crate::hir::{HirNode, SwitchCase};
use crate::reaching_conditions::{Cond, RegionNode};

/// Convert a [`StructuredNode`] tree into a `Vec<HirNode>`, splicing in the
/// caller-supplied per-block bodies and resolving atomic predicates to their
/// branch-condition [`SsaVarnode`]s.
///
/// See the module docs for the mapping (especially the `NotPred` arm-swap and
/// the conservative fallback for unresolvable guards). No statement is ever
/// dropped silently: every reachable `Block` reaches the output.
pub fn splice_structured(
    node: &StructuredNode,
    node_to_block: &BTreeMap<RegionNode, BlockId>,
    block_bodies: &BTreeMap<BlockId, Vec<HirNode>>,
    pred_cond: &BTreeMap<u32, SsaVarnode>,
) -> Vec<HirNode> {
    match node {
        StructuredNode::Empty => vec![],
        StructuredNode::Block(rn) => splice_block(*rn, node_to_block, block_bodies),
        StructuredNode::Seq(parts) => parts
            .iter()
            .flat_map(|p| splice_structured(p, node_to_block, block_bodies, pred_cond))
            .collect(),
        StructuredNode::If { cond, then, els } => splice_if(
            cond,
            then,
            els.as_deref(),
            node_to_block,
            block_bodies,
            pred_cond,
        ),
        StructuredNode::Switch {
            selector,
            cases,
            default,
        } => splice_switch(
            *selector,
            cases,
            default.as_deref(),
            node_to_block,
            block_bodies,
            pred_cond,
        ),
        StructuredNode::Loop { body } => vec![HirNode::While {
            cond: true_cond(),
            body: splice_structured(body, node_to_block, block_bodies, pred_cond),
        }],
        StructuredNode::Continue => vec![HirNode::Continue],
        StructuredNode::Break => vec![HirNode::Break],
        // Unstructurable (cyclic) region — the caller falls back to the legacy
        // structurer for these, so we emit nothing here.
        StructuredNode::Unsupported => vec![],
    }
}

fn true_cond() -> SsaVarnode {
    SsaVarnode {
        base: Varnode::constant(1, 1),
        version: 0,
    }
}

/// Clone the caller-supplied HIR body for a region node's block, or empty when
/// the block has no supplied body (e.g. a synthetic / exit-only node).
fn splice_block(
    rn: RegionNode,
    node_to_block: &BTreeMap<RegionNode, BlockId>,
    block_bodies: &BTreeMap<BlockId, Vec<HirNode>>,
) -> Vec<HirNode> {
    node_to_block
        .get(&rn)
        .and_then(|bid| block_bodies.get(bid))
        .cloned()
        .unwrap_or_default()
}

/// Lower an `If` node, handling the four atomic cond shapes plus the
/// conservative fallback. The atomic-condition invariant guarantees `cond` is
/// never a compound `And`/`Or`.
fn splice_if(
    cond: &Cond,
    then: &StructuredNode,
    els: Option<&StructuredNode>,
    node_to_block: &BTreeMap<RegionNode, BlockId>,
    block_bodies: &BTreeMap<BlockId, Vec<HirNode>>,
    pred_cond: &BTreeMap<u32, SsaVarnode>,
) -> Vec<HirNode> {
    let splice = |n: &StructuredNode| splice_structured(n, node_to_block, block_bodies, pred_cond);
    let els_body = |e: Option<&StructuredNode>| e.map(&splice);
    match cond {
        Cond::Pred(id) => match pred_cond.get(id) {
            Some(cv) => vec![HirNode::If {
                cond: *cv,
                then_body: splice(then),
                else_body: els_body(els),
            }],
            None => fallback_if(then, els, &splice),
        },
        Cond::NotPred(id) => match pred_cond.get(id) {
            // Arm-swap: the positive SsaVarnode guards the former `els`, and
            // `then` moves to the else_body so nothing is dropped.
            Some(cv) => vec![HirNode::If {
                cond: *cv,
                then_body: els.map(&splice).unwrap_or_default(),
                else_body: Some(splice(then)),
            }],
            None => fallback_if(then, els, &splice),
        },
        // CaseEq / NotCaseEq / compound: no SsaVarnode guard is resolvable for
        // a single If here (switch selectors are handled by `splice_switch`).
        // TODO(3c): lower CaseEq/NotCaseEq guards once predicate varnodes for
        // switch-derived equalities are threaded through `pred_cond`. Until
        // then we fall back so no statement is dropped.
        _ => fallback_if(then, els, &splice),
    }
}

/// Conservative `If` fallback when no guard `SsaVarnode` is resolvable: wrap
/// `then` (and any `els`) in a `Block` so every statement still reaches the
/// output. NEVER drops nodes.
fn fallback_if(
    then: &StructuredNode,
    els: Option<&StructuredNode>,
    splice: &impl Fn(&StructuredNode) -> Vec<HirNode>,
) -> Vec<HirNode> {
    // Observability for step 3c: when this conservative path fires the guard is
    // lost (statements are preserved but un-predicated), so a wired-in region
    // may not shed its gotos. Log it so 3c triage can see *why* a goto count
    // didn't improve rather than debugging blind.
    tracing::debug!(
        target: "unlace::dream::splice",
        has_else = els.is_some(),
        "region_splice: unresolvable guard, emitting un-predicated Block fallback"
    );
    let mut out = splice(then);
    if let Some(e) = els {
        out.extend(splice(e));
    }
    vec![HirNode::Block(out)]
}

/// Lower a `Switch` node. The selector id resolves to a `SsaVarnode` via
/// `pred_cond`; each case value becomes a [`SwitchCase::Value`].
fn splice_switch(
    selector: u32,
    cases: &[(i64, StructuredNode)],
    default: Option<&StructuredNode>,
    node_to_block: &BTreeMap<RegionNode, BlockId>,
    block_bodies: &BTreeMap<BlockId, Vec<HirNode>>,
    pred_cond: &BTreeMap<u32, SsaVarnode>,
) -> Vec<HirNode> {
    let splice = |n: &StructuredNode| splice_structured(n, node_to_block, block_bodies, pred_cond);
    let Some(cv) = pred_cond.get(&selector) else {
        // No selector varnode resolvable: emit every arm's body unguarded,
        // wrapped in a Block, so no statement is dropped. (TODO 3c.)
        let mut out: Vec<HirNode> = cases.iter().flat_map(|(_, n)| splice(n)).collect();
        if let Some(d) = default {
            out.extend(splice(d));
        }
        return vec![HirNode::Block(out)];
    };
    let hir_cases = cases
        .iter()
        .map(|(v, n)| (SwitchCase::Value(*v as u64), splice(n), false))
        .collect();
    vec![HirNode::Switch {
        cond: *cv,
        cases: hir_cases,
        default: default.map(&splice),
        jumptable_addr: None,
        jumptable_cases: None,
    }]
}

#[cfg(test)]
mod tests {
    use std::collections::BTreeMap;

    use smallvec::smallvec;

    use unlace_ir::ssa::SsaVarnode;
    use unlace_ir::{BlockId, IrInsn, IrOp, Varnode};

    use super::*;
    use crate::condition_refinement::StructuredNode;
    use crate::hir::{HirNode, SwitchCase};
    use crate::reaching_conditions::Cond;

    fn sv(offset: u64, version: u32) -> SsaVarnode {
        SsaVarnode {
            base: Varnode::reg(offset, 4),
            version,
        }
    }

    /// A single Statement HirNode writing to register `reg`.
    fn stmt(reg: u64) -> HirNode {
        HirNode::Statement(IrInsn::with_output(
            IrOp::Copy,
            Varnode::reg(reg, 4),
            smallvec![Varnode::constant(0, 4)],
            0x1000,
        ))
    }

    /// node_to_block mapping RegionNode n -> BlockId(n).
    fn n2b(nodes: &[u32]) -> BTreeMap<RegionNode, BlockId> {
        nodes.iter().map(|&n| (n, BlockId(n))).collect()
    }

    fn bodies(entries: Vec<(u32, Vec<HirNode>)>) -> BTreeMap<BlockId, Vec<HirNode>> {
        entries.into_iter().map(|(b, v)| (BlockId(b), v)).collect()
    }

    #[test]
    fn empty_yields_nothing() {
        let out = splice_structured(
            &StructuredNode::Empty,
            &BTreeMap::new(),
            &BTreeMap::new(),
            &BTreeMap::new(),
        );
        assert!(out.is_empty());
    }

    #[test]
    fn unsupported_yields_nothing() {
        let out = splice_structured(
            &StructuredNode::Unsupported,
            &BTreeMap::new(),
            &BTreeMap::new(),
            &BTreeMap::new(),
        );
        assert!(out.is_empty());
    }

    #[test]
    fn block_clones_supplied_body() {
        let node = StructuredNode::Block(0);
        let n2b = n2b(&[0]);
        let bodies = bodies(vec![(0, vec![stmt(10)])]);
        let out = splice_structured(&node, &n2b, &bodies, &BTreeMap::new());
        assert_eq!(out, vec![stmt(10)]);
    }

    #[test]
    fn block_missing_body_is_empty() {
        let node = StructuredNode::Block(7);
        let out = splice_structured(&node, &n2b(&[7]), &BTreeMap::new(), &BTreeMap::new());
        assert!(out.is_empty());
    }

    #[test]
    fn seq_concats_children() {
        let node = StructuredNode::Seq(vec![StructuredNode::Block(0), StructuredNode::Block(1)]);
        let bodies = bodies(vec![(0, vec![stmt(10)]), (1, vec![stmt(11)])]);
        let out = splice_structured(&node, &n2b(&[0, 1]), &bodies, &BTreeMap::new());
        assert_eq!(out, vec![stmt(10), stmt(11)]);
    }

    #[test]
    fn if_pred_maps_directly() {
        let node = StructuredNode::If {
            cond: Cond::Pred(0),
            then: Box::new(StructuredNode::Block(1)),
            els: Some(Box::new(StructuredNode::Block(2))),
        };
        let bodies = bodies(vec![(1, vec![stmt(11)]), (2, vec![stmt(12)])]);
        let mut pc = BTreeMap::new();
        pc.insert(0u32, sv(0x40, 1));
        let out = splice_structured(&node, &n2b(&[1, 2]), &bodies, &pc);
        assert_eq!(
            out,
            vec![HirNode::If {
                cond: sv(0x40, 1),
                then_body: vec![stmt(11)],
                else_body: Some(vec![stmt(12)]),
            }]
        );
    }

    #[test]
    fn if_notpred_swaps_arms() {
        // NotPred(0): then runs when predicate is FALSE. After swap, the
        // positive varnode guards the former `els` and `then` moves to else.
        let node = StructuredNode::If {
            cond: Cond::NotPred(0),
            then: Box::new(StructuredNode::Block(1)),
            els: Some(Box::new(StructuredNode::Block(2))),
        };
        let bodies = bodies(vec![(1, vec![stmt(11)]), (2, vec![stmt(12)])]);
        let mut pc = BTreeMap::new();
        pc.insert(0u32, sv(0x40, 1));
        let out = splice_structured(&node, &n2b(&[1, 2]), &bodies, &pc);
        assert_eq!(
            out,
            vec![HirNode::If {
                cond: sv(0x40, 1),
                then_body: vec![stmt(12)],       // former els
                else_body: Some(vec![stmt(11)]), // former then
            }]
        );
    }

    #[test]
    fn if_notpred_no_els_keeps_then_in_else() {
        let node = StructuredNode::If {
            cond: Cond::NotPred(0),
            then: Box::new(StructuredNode::Block(1)),
            els: None,
        };
        let bodies = bodies(vec![(1, vec![stmt(11)])]);
        let mut pc = BTreeMap::new();
        pc.insert(0u32, sv(0x40, 1));
        let out = splice_structured(&node, &n2b(&[1]), &bodies, &pc);
        assert_eq!(
            out,
            vec![HirNode::If {
                cond: sv(0x40, 1),
                then_body: vec![],
                else_body: Some(vec![stmt(11)]),
            }]
        );
    }

    #[test]
    fn if_unresolvable_pred_falls_back_without_dropping() {
        // No pred_cond entry for id 9 → conservative Block fallback.
        let node = StructuredNode::If {
            cond: Cond::Pred(9),
            then: Box::new(StructuredNode::Block(1)),
            els: Some(Box::new(StructuredNode::Block(2))),
        };
        let bodies = bodies(vec![(1, vec![stmt(11)]), (2, vec![stmt(12)])]);
        let out = splice_structured(&node, &n2b(&[1, 2]), &bodies, &BTreeMap::new());
        assert_eq!(out, vec![HirNode::Block(vec![stmt(11), stmt(12)])]);
    }

    #[test]
    fn if_caseeq_falls_back_without_dropping() {
        // CaseEq is not a resolvable single-If guard here (TODO 3c) → Block.
        let node = StructuredNode::If {
            cond: Cond::CaseEq(0, 3),
            then: Box::new(StructuredNode::Block(1)),
            els: None,
        };
        let bodies = bodies(vec![(1, vec![stmt(11)])]);
        let out = splice_structured(&node, &n2b(&[1]), &bodies, &BTreeMap::new());
        assert_eq!(out, vec![HirNode::Block(vec![stmt(11)])]);
    }

    #[test]
    fn switch_maps_cases_and_default() {
        let node = StructuredNode::Switch {
            selector: 5,
            cases: vec![(0, StructuredNode::Block(1)), (1, StructuredNode::Block(2))],
            default: Some(Box::new(StructuredNode::Block(3))),
        };
        let bodies = bodies(vec![
            (1, vec![stmt(11)]),
            (2, vec![stmt(12)]),
            (3, vec![stmt(13)]),
        ]);
        let mut pc = BTreeMap::new();
        pc.insert(5u32, sv(0x50, 2));
        let out = splice_structured(&node, &n2b(&[1, 2, 3]), &bodies, &pc);
        assert_eq!(
            out,
            vec![HirNode::Switch {
                cond: sv(0x50, 2),
                cases: vec![
                    (SwitchCase::Value(0), vec![stmt(11)], false),
                    (SwitchCase::Value(1), vec![stmt(12)], false),
                ],
                default: Some(vec![stmt(13)]),
                jumptable_addr: None,
                jumptable_cases: None,
            }]
        );
    }

    #[test]
    fn loop_lowers_to_while_true() {
        let node = StructuredNode::Loop {
            body: Box::new(StructuredNode::Seq(vec![
                StructuredNode::Block(1),
                StructuredNode::Continue,
            ])),
        };
        let bodies = bodies(vec![(1, vec![stmt(11)])]);
        let out = splice_structured(&node, &n2b(&[1]), &bodies, &BTreeMap::new());
        assert_eq!(
            out,
            vec![HirNode::While {
                cond: true_cond(),
                body: vec![stmt(11), HirNode::Continue],
            }]
        );
    }

    #[test]
    fn break_and_continue_lower_directly() {
        let node = StructuredNode::Seq(vec![StructuredNode::Break, StructuredNode::Continue]);
        let out = splice_structured(&node, &BTreeMap::new(), &BTreeMap::new(), &BTreeMap::new());
        assert_eq!(out, vec![HirNode::Break, HirNode::Continue]);
    }

    #[test]
    fn loop_with_guarded_break_preserves_guard() {
        let node = StructuredNode::Loop {
            body: Box::new(StructuredNode::If {
                cond: Cond::Pred(3),
                then: Box::new(StructuredNode::Break),
                els: Some(Box::new(StructuredNode::Continue)),
            }),
        };
        let mut pc = BTreeMap::new();
        pc.insert(3u32, sv(0x33, 1));
        let out = splice_structured(&node, &BTreeMap::new(), &BTreeMap::new(), &pc);
        assert_eq!(
            out,
            vec![HirNode::While {
                cond: true_cond(),
                body: vec![HirNode::If {
                    cond: sv(0x33, 1),
                    then_body: vec![HirNode::Break],
                    else_body: Some(vec![HirNode::Continue]),
                }],
            }]
        );
    }
}
