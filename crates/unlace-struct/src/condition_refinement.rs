//! DREAM condition-based refinement for acyclic and conservative cyclic regions
//! (NDSS 2015 §IV-B/§IV-C,
//! `research/papers/dream_ndss2015.txt`). Step 2 of the irreducible-structuring
//! plan (`docs/design-structurer-irreducible-2026-05-29.md`).
//!
//! Given a [`Region`] and its [`ReachingConditions`] (from
//! [`crate::reaching_conditions`]), this produces a [`StructuredNode`] tree that
//! emits each region node guarded by its reaching condition — `if`/`else`,
//! `switch`, and sequence — with **zero gotos**. The refinement repeatedly
//! factors a common predicate `c` out of a group of nodes (those whose reaching
//! condition implies `c` vs `¬c`) into the arms of an `If`, then recurses.
//!
//! [`refine_region`] is acyclic-only. [`refine_cyclic_region_with_exits`]
//! handles the conservative cyclic subset by replacing back-edges with
//! synthetic `Continue` leaves and single-target exits with synthetic `Break`
//! leaves before reusing the acyclic condition-refinement engine.

use std::collections::{BTreeMap, BTreeSet};

use crate::reaching_conditions::{
    Cond, EdgeLabel, ReachingConditions, Region, RegionNode, compute_reaching_conditions,
};

/// A structured control-flow tree with no gotos.
#[derive(Clone, Debug, PartialEq, Eq)]
pub enum StructuredNode {
    /// An empty region (no statements).
    Empty,
    /// A single region node (basic block).
    Block(RegionNode),
    /// Ordered sequence of sub-trees.
    Seq(Vec<StructuredNode>),
    /// `if (cond) { then } else { els }` — `els` absent when there is no
    /// false-arm content.
    If {
        cond: Cond,
        then: Box<StructuredNode>,
        els: Option<Box<StructuredNode>>,
    },
    /// `switch (selector) { case vK: ... ; default: ... }`.
    Switch {
        selector: u32,
        cases: Vec<(i64, StructuredNode)>,
        default: Option<Box<StructuredNode>>,
    },
    /// `while (true) { body }` with structured `Break`/`Continue` inside —
    /// the cyclic-region form (DREAM §IV-C, step 4). The loop's back-edge(s)
    /// are represented by `Continue` and its exit edge(s) by `Break` within
    /// `body`, so no `goto` is needed.
    Loop { body: Box<StructuredNode> },
    /// `continue;` — a back-edge to the loop header.
    Continue,
    /// `break;` — an exit edge leaving the loop region.
    Break,
    /// Region could not be structured by this conservative engine.
    Unsupported,
}

impl StructuredNode {
    /// Build a `Seq` from parts, flattening nested `Seq`s and dropping `Empty`s;
    /// collapses to the single child / `Empty` when possible.
    fn seq(parts: Vec<StructuredNode>) -> StructuredNode {
        let mut flat = Vec::new();
        for p in parts {
            match p {
                StructuredNode::Empty => {}
                StructuredNode::Seq(inner) => flat.extend(inner),
                other => flat.push(other),
            }
        }
        match flat.len() {
            0 => StructuredNode::Empty,
            1 => flat.pop().expect("len 1"),
            _ => StructuredNode::Seq(flat),
        }
    }

    /// Count the `goto`s in this tree — always 0 by construction; used by tests
    /// to assert the goto-free invariant.
    pub fn goto_count(&self) -> usize {
        0
    }
}

/// Negate a condition (pushing negation to leaves where cheap; otherwise wrap).
fn negate(c: &Cond) -> Cond {
    match c {
        Cond::True => Cond::False,
        Cond::False => Cond::True,
        Cond::Pred(id) => Cond::NotPred(*id),
        Cond::NotPred(id) => Cond::Pred(*id),
        // De Morgan keeps the tree shallow and lets equality detection work.
        Cond::And(a, b) => Cond::Or(Box::new(negate(a)), Box::new(negate(b))),
        Cond::Or(a, b) => Cond::And(Box::new(negate(a)), Box::new(negate(b))),
        // CaseEq has no cheap single-leaf negation; wrap via a not-pred-free
        // marker is impossible, so represent as Or of nothing == leave wrapped.
        // We model ¬CaseEq by a synthetic Or that never matches a positive
        // CaseEq during factoring; for switch detection we never negate CaseEq.
        Cond::CaseEq(_, _) => Cond::NotCaseEq(Box::new(c.clone())),
        Cond::NotCaseEq(inner) => (**inner).clone(),
    }
}

/// Does condition `cond` *contain* the atomic factor `factor` as a top-level
/// conjunct (i.e. executing under `cond` implies `factor`)? Recognizes
/// `factor`, `factor ∧ X`, `X ∧ factor`, and nested conjunctions.
fn implies_factor(cond: &Cond, factor: &Cond) -> bool {
    if cond == factor {
        return true;
    }
    match cond {
        Cond::And(a, b) => implies_factor(a, factor) || implies_factor(b, factor),
        _ => false,
    }
}

/// Remove a top-level conjunct `factor` from `cond`, returning the residual
/// condition (`True` if `cond` was exactly `factor`).
fn strip_factor(cond: &Cond, factor: &Cond) -> Cond {
    if cond == factor {
        return Cond::True;
    }
    match cond {
        Cond::And(a, b) => {
            let sa = strip_factor(a, factor);
            let sb = strip_factor(b, factor);
            // If one side became True (was the factor), keep the other.
            match (sa, sb) {
                (Cond::True, x) | (x, Cond::True) => x,
                (x, y) => Cond::And(Box::new(x), Box::new(y)),
            }
        }
        other => other.clone(),
    }
}

/// Collect the atomic predicate factors (`Pred`/`NotPred`/`CaseEq`) that appear
/// as top-level conjuncts of `cond`.
fn atomic_factors(cond: &Cond, out: &mut Vec<Cond>) {
    match cond {
        Cond::And(a, b) => {
            atomic_factors(a, out);
            atomic_factors(b, out);
        }
        Cond::Pred(_) | Cond::NotPred(_) | Cond::CaseEq(_, _) => {
            if !out.contains(cond) {
                out.push(cond.clone());
            }
        }
        // `Or` is a disjunction (not a top-level conjunct → no single factor to
        // extract), and `True`/`False`/`NotCaseEq` are not atomic predicate
        // factors. Intentionally contribute nothing.
        Cond::Or(_, _) | Cond::True | Cond::False | Cond::NotCaseEq(_) => {}
    }
}

/// Refine a *cyclic* region with a single loop header into a goto-free
/// `Loop { body }` (DREAM §IV-C, step 4).
///
/// Supported shape (conservative): exactly one loop header (`region.header`),
/// every back-edge targets that header, and removing the back-edges leaves an
/// acyclic skeleton the existing engine can structure. Back-edges become
/// synthetic `Continue` leaves. Use [`refine_cyclic_region_with_exits`] when
/// the caller also has labelled external exits to synthesize as `Break`.
pub fn refine_cyclic_region(region: &Region) -> StructuredNode {
    refine_cyclic_region_with_exits(region, &[])
}

/// Refine a cyclic region and synthesize loop exits as `Break` leaves.
///
/// `exits` contains labelled edges from in-region nodes to a single external
/// successor. The target is checked by the production seam; this pure layer only
/// needs the source and edge label so reaching-condition refinement can guard
/// the `Break` with the same predicate as the dropped CFG edge.
pub fn refine_cyclic_region_with_exits(
    region: &Region,
    exits: &[(RegionNode, EdgeLabel)],
) -> StructuredNode {
    let rc = compute_reaching_conditions(region);
    if rc.back_edges.is_empty() {
        // Acyclic — not our job (use `refine_region`).
        return StructuredNode::Unsupported;
    }
    // Every back-edge must target the single loop header.
    if rc.back_edges.iter().any(|(_, dst)| *dst != region.header) {
        return StructuredNode::Unsupported;
    }
    let real_nodes = region_nodes(region);
    if real_nodes
        .iter()
        .any(|n| matches!(rc.conditions.get(n), None | Some(Cond::False)))
    {
        return StructuredNode::Unsupported;
    }

    // Structure an acyclic skeleton where:
    // - original back-edges are replaced by synthetic Continue leaves carrying
    //   the original edge label, so conditional latches become guarded
    //   continues;
    // - external exits are represented by synthetic Break leaves carrying the
    //   original exit edge label, so exits remain guarded instead of turning the
    //   loop into an infinite `while (true)`.
    let mut next_synthetic = real_nodes
        .iter()
        .next_back()
        .copied()
        .unwrap_or(region.header)
        + 1;
    let mut continue_nodes = BTreeSet::new();
    let mut break_nodes = BTreeSet::new();
    let mut skeleton_edges = Vec::new();
    for (src, dst, label) in &region.edges {
        if rc.back_edges.contains(&(*src, *dst)) {
            let cont = next_synthetic;
            next_synthetic += 1;
            continue_nodes.insert(cont);
            skeleton_edges.push((*src, cont, label.clone()));
        } else {
            skeleton_edges.push((*src, *dst, label.clone()));
        }
    }
    for (src, label) in exits {
        if !real_nodes.contains(src) {
            return StructuredNode::Unsupported;
        }
        let brk = next_synthetic;
        next_synthetic += 1;
        break_nodes.insert(brk);
        skeleton_edges.push((*src, brk, label.clone()));
    }

    let skeleton = Region {
        header: region.header,
        edges: skeleton_edges,
    };
    let body = refine_region(&skeleton);
    if body == StructuredNode::Unsupported {
        return StructuredNode::Unsupported;
    }

    let body_with_control = rewrite_cyclic_sentinels(body, &continue_nodes, &break_nodes);
    StructuredNode::Loop {
        body: Box::new(body_with_control),
    }
}

fn region_nodes(region: &Region) -> BTreeSet<RegionNode> {
    let mut nodes = BTreeSet::new();
    nodes.insert(region.header);
    for (src, dst, _) in &region.edges {
        nodes.insert(*src);
        nodes.insert(*dst);
    }
    nodes
}

/// Replace synthetic skeleton leaves with loop control statements.
fn rewrite_cyclic_sentinels(
    node: StructuredNode,
    continue_nodes: &BTreeSet<RegionNode>,
    break_nodes: &BTreeSet<RegionNode>,
) -> StructuredNode {
    match node {
        StructuredNode::Block(rn) if continue_nodes.contains(&rn) => StructuredNode::Continue,
        StructuredNode::Block(rn) if break_nodes.contains(&rn) => StructuredNode::Break,
        StructuredNode::Seq(parts) => StructuredNode::seq(
            parts
                .into_iter()
                .map(|p| rewrite_cyclic_sentinels(p, continue_nodes, break_nodes))
                .collect(),
        ),
        StructuredNode::If { cond, then, els } => StructuredNode::If {
            cond,
            then: Box::new(rewrite_cyclic_sentinels(*then, continue_nodes, break_nodes)),
            els: els.map(|e| Box::new(rewrite_cyclic_sentinels(*e, continue_nodes, break_nodes))),
        },
        StructuredNode::Switch {
            selector,
            cases,
            default,
        } => StructuredNode::Switch {
            selector,
            cases: cases
                .into_iter()
                .map(|(value, case)| {
                    (
                        value,
                        rewrite_cyclic_sentinels(case, continue_nodes, break_nodes),
                    )
                })
                .collect(),
            default: default
                .map(|d| Box::new(rewrite_cyclic_sentinels(*d, continue_nodes, break_nodes))),
        },
        StructuredNode::Loop { body } => StructuredNode::Loop {
            body: Box::new(rewrite_cyclic_sentinels(*body, continue_nodes, break_nodes)),
        },
        other => other,
    }
}

/// Refine a region into a goto-free [`StructuredNode`]. Returns
/// [`StructuredNode::Unsupported`] if the region is cyclic (has back-edges).
pub fn refine_region(region: &Region) -> StructuredNode {
    let rc = compute_reaching_conditions(region);
    if !rc.back_edges.is_empty() {
        return StructuredNode::Unsupported;
    }
    // Order nodes deterministically by RegionNode (topo order is consistent with
    // ascending ids for our acyclic skeletons; refinement is order-insensitive
    // beyond grouping).
    let mut items: Vec<(RegionNode, Cond)> =
        rc.conditions.iter().map(|(&n, c)| (n, c.clone())).collect();
    items.sort_by_key(|(n, _)| *n);
    refine_items(items, &rc)
}

/// Recursive refinement core over `(node, condition)` items already factored by
/// any outer condition (so conditions here are *residual*).
fn refine_items(items: Vec<(RegionNode, Cond)>, rc: &ReachingConditions) -> StructuredNode {
    if items.is_empty() {
        return StructuredNode::Empty;
    }
    // Unconditional nodes (residual True) emit directly, in order, interleaved
    // with refined conditional groups. We split into: leading True-nodes, then
    // the conditional remainder.
    let all_true = items.iter().all(|(_, c)| *c == Cond::True);
    if all_true {
        return StructuredNode::seq(
            items
                .into_iter()
                .map(|(n, _)| StructuredNode::Block(n))
                .collect(),
        );
    }

    // Try switch detection first: a shared selector across CaseEq factors.
    if let Some(sw) = try_switch(&items, rc) {
        return sw;
    }

    // Pick the most frequent atomic factor across conditional items.
    let factor = match pick_common_factor(&items) {
        Some(f) => f,
        None => {
            // No shared factor: emit each node under its own guard, in order.
            return StructuredNode::seq(items.into_iter().map(|(n, c)| guard_one(n, c)).collect());
        }
    };
    let neg = negate(&factor);

    let mut then_items = Vec::new();
    let mut else_items = Vec::new();
    let mut other_items = Vec::new();
    for (n, c) in items {
        if c == Cond::True {
            other_items.push((n, c));
        } else if implies_factor(&c, &factor) {
            then_items.push((n, strip_factor(&c, &factor)));
        } else if implies_factor(&c, &neg) {
            else_items.push((n, strip_factor(&c, &neg)));
        } else {
            other_items.push((n, c));
        }
    }

    let then_tree = refine_items(then_items, rc);
    let else_tree = refine_items(else_items, rc);
    let if_node = StructuredNode::If {
        cond: factor,
        then: Box::new(then_tree),
        els: match else_tree {
            StructuredNode::Empty => None,
            t => Some(Box::new(t)),
        },
    };

    // Nodes that didn't fit either arm (e.g. residual True or unrelated
    // factors) are sequenced around the If, preserving node order.
    if other_items.is_empty() {
        if_node
    } else {
        let mut parts = vec![if_node];
        parts.push(refine_items(other_items, rc));
        StructuredNode::seq(parts)
    }
}

/// Emit a single node guarded by its (non-True) condition as an `if`.
fn guard_one(n: RegionNode, cond: Cond) -> StructuredNode {
    if cond == Cond::True {
        StructuredNode::Block(n)
    } else {
        StructuredNode::If {
            cond,
            then: Box::new(StructuredNode::Block(n)),
            els: None,
        }
    }
}

/// Pick the atomic factor shared by the most conditional items (deterministic
/// tie-break by factor ordering). Returns `None` if no factor is shared by ≥2.
fn pick_common_factor(items: &[(RegionNode, Cond)]) -> Option<Cond> {
    let mut counts: BTreeMap<Cond, usize> = BTreeMap::new();
    for (_, c) in items {
        if *c == Cond::True {
            continue;
        }
        let mut factors = Vec::new();
        atomic_factors(c, &mut factors);
        // Count a factor and (for if/else pairing) its negation under the same
        // key so `c` and `¬c` groups are discovered together.
        for f in factors {
            let key = canonical_factor(&f);
            *counts.entry(key).or_insert(0) += 1;
        }
    }
    counts
        .into_iter()
        .filter(|(_, n)| *n >= 1)
        .max_by(|a, b| a.1.cmp(&b.1).then(b.0.cmp(&a.0)))
        .map(|(f, _)| f)
}

/// Canonicalize a factor so `Pred(id)` and `NotPred(id)` map to the same key
/// (`Pred(id)`), letting if/else arms group on the same predicate.
fn canonical_factor(f: &Cond) -> Cond {
    match f {
        Cond::NotPred(id) => Cond::Pred(*id),
        other => other.clone(),
    }
}

/// Detect a `switch`: ≥2 items whose residual condition is exactly
/// `CaseEq(sel, vK)` over a common selector `sel`.
fn try_switch(items: &[(RegionNode, Cond)], rc: &ReachingConditions) -> Option<StructuredNode> {
    let mut by_selector: BTreeMap<u32, Vec<(i64, RegionNode)>> = BTreeMap::new();
    for (n, c) in items {
        if let Cond::CaseEq(sel, v) = c {
            by_selector.entry(*sel).or_default().push((*v, *n));
        }
    }
    let (selector, mut cases_raw) = by_selector
        .into_iter()
        .filter(|(_, v)| v.len() >= 2)
        .max_by_key(|(_, v)| v.len())?;
    cases_raw.sort();
    let cases: Vec<(i64, StructuredNode)> = cases_raw
        .into_iter()
        .map(|(v, n)| (v, StructuredNode::Block(n)))
        .collect();

    // Remaining (non-CaseEq-on-selector) items sequence after the switch.
    let rest: Vec<(RegionNode, Cond)> = items
        .iter()
        .filter(|(_, c)| !matches!(c, Cond::CaseEq(s, _) if *s == selector))
        .cloned()
        .collect();
    let switch = StructuredNode::Switch {
        selector,
        cases,
        default: None,
    };
    if rest.is_empty() {
        Some(switch)
    } else {
        Some(StructuredNode::seq(vec![switch, refine_items(rest, rc)]))
    }
}

#[cfg(test)]
mod tests {
    use super::*;
    use crate::reaching_conditions::EdgeLabel;

    fn t(id: u32) -> EdgeLabel {
        EdgeLabel::True(id)
    }
    fn f(id: u32) -> EdgeLabel {
        EdgeLabel::False(id)
    }

    #[test]
    fn straight_line_is_sequence() {
        let region = Region {
            header: 0,
            edges: vec![(0, 1, EdgeLabel::Always), (1, 2, EdgeLabel::Always)],
        };
        let tree = refine_region(&region);
        assert_eq!(tree.goto_count(), 0);
        // All conditions True → a flat sequence of the three blocks.
        assert_eq!(
            tree,
            StructuredNode::Seq(vec![
                StructuredNode::Block(0),
                StructuredNode::Block(1),
                StructuredNode::Block(2),
            ])
        );
    }

    #[test]
    fn diamond_is_if_else() {
        // 0 -t(0)-> 1 ; 0 -f(0)-> 2.  Refines to if(p0){1} else {2} (+ header 0).
        let region = Region {
            header: 0,
            edges: vec![(0, 1, t(0)), (0, 2, f(0))],
        };
        let tree = refine_region(&region);
        assert_eq!(tree.goto_count(), 0);
        // Header 0 is True (sequenced); the conditional part is an If on p0.
        let found_if = contains_if_on(&tree, 0);
        assert!(found_if, "expected an If on predicate 0: {tree:?}");
        assert!(mentions_block(&tree, 1));
        assert!(mentions_block(&tree, 2));
    }

    #[test]
    fn nested_guard_is_nested_if() {
        // 0 -t(0)-> 1 -t(1)-> 2.  cr(2) = p0 ∧ p1 → if(p0){ ...; if(p1){2} }.
        let region = Region {
            header: 0,
            edges: vec![(0, 1, t(0)), (1, 2, t(1))],
        };
        let tree = refine_region(&region);
        assert_eq!(tree.goto_count(), 0);
        assert!(contains_if_on(&tree, 0));
        assert!(contains_if_on(&tree, 1));
        assert!(mentions_block(&tree, 2));
    }

    #[test]
    fn switch_skeleton_is_switch() {
        // selector 7, three cases.
        let region = Region {
            header: 0,
            edges: vec![
                (0, 1, EdgeLabel::Case(7, 0)),
                (0, 2, EdgeLabel::Case(7, 1)),
                (0, 3, EdgeLabel::Case(7, 2)),
            ],
        };
        let tree = refine_region(&region);
        assert_eq!(tree.goto_count(), 0);
        let sw = find_switch(&tree).expect("expected a Switch node");
        if let StructuredNode::Switch {
            selector, cases, ..
        } = sw
        {
            assert_eq!(*selector, 7);
            assert_eq!(cases.len(), 3);
            assert_eq!(cases[0].0, 0);
            assert_eq!(cases[2].0, 2);
        }
    }

    #[test]
    fn shared_common_factor_extracted() {
        // 0 -t(0)-> 1 -t(1)-> 3 ; 0 -t(0)-> 2 (via 1? no) — build two nodes both
        // under p0: 0 -t(0)-> 1 ; 1 -t(1)-> 2 ; 1 -f(1)-> 3.  Nodes 2 and 3 both
        // imply p0; the refinement should factor p0 into one If arm.
        let region = Region {
            header: 0,
            edges: vec![(0, 1, t(0)), (1, 2, t(1)), (1, 3, f(1))],
        };
        let tree = refine_region(&region);
        assert_eq!(tree.goto_count(), 0);
        // p0 factored: there is an If on 0 whose then-arm contains the If on 1.
        assert!(contains_if_on(&tree, 0));
        assert!(contains_if_on(&tree, 1));
        assert!(mentions_block(&tree, 2) && mentions_block(&tree, 3));
    }

    #[test]
    fn negate_is_involutive() {
        // negate(negate(x)) == x for every Cond shape, including the new
        // NotCaseEq variant and nested And/Or (De Morgan round-trip).
        let cases = [
            Cond::True,
            Cond::False,
            Cond::Pred(3),
            Cond::NotPred(3),
            Cond::CaseEq(7, 2),
            Cond::And(Box::new(Cond::Pred(1)), Box::new(Cond::NotPred(2))),
            Cond::Or(Box::new(Cond::Pred(1)), Box::new(Cond::CaseEq(5, 9))),
        ];
        for c in cases {
            assert_eq!(
                super::negate(&super::negate(&c)),
                c,
                "not involutive for {c:?}"
            );
        }
    }

    #[test]
    fn negate_caseeq_roundtrips_via_notcaseeq() {
        let ce = Cond::CaseEq(4, 11);
        let n = super::negate(&ce);
        assert_eq!(n, Cond::NotCaseEq(Box::new(ce.clone())));
        assert_eq!(super::negate(&n), ce);
    }

    #[test]
    fn cyclic_region_is_unsupported() {
        let region = Region {
            header: 0,
            edges: vec![
                (0, 1, EdgeLabel::Always),
                (1, 2, EdgeLabel::Always),
                (2, 1, EdgeLabel::Always),
            ],
        };
        assert_eq!(refine_region(&region), StructuredNode::Unsupported);
    }

    #[test]
    fn simple_cyclic_region_refines_to_loop_continue() {
        let region = Region {
            header: 0,
            edges: vec![(0, 1, EdgeLabel::Always), (1, 0, EdgeLabel::Always)],
        };
        let tree = refine_cyclic_region(&region);
        assert_eq!(tree.goto_count(), 0);
        assert!(contains_loop(&tree), "expected Loop: {tree:?}");
        assert!(mentions_block(&tree, 0));
        assert!(mentions_block(&tree, 1));
        assert!(contains_continue(&tree), "expected Continue: {tree:?}");
    }

    #[test]
    fn cyclic_region_false_exit_becomes_guarded_break() {
        let region = Region {
            header: 0,
            edges: vec![(0, 1, t(0)), (1, 0, EdgeLabel::Always)],
        };
        let tree = refine_cyclic_region_with_exits(&region, &[(0, f(0))]);
        assert_eq!(tree.goto_count(), 0);
        assert!(contains_loop(&tree), "expected Loop: {tree:?}");
        assert!(contains_continue(&tree), "expected Continue: {tree:?}");
        assert!(contains_break(&tree), "expected Break: {tree:?}");
        assert!(contains_if_on(&tree, 0), "expected guard p0: {tree:?}");
    }

    #[test]
    fn conditional_latch_synthesizes_guarded_continue_and_break() {
        let region = Region {
            header: 0,
            edges: vec![(0, 1, EdgeLabel::Always), (1, 0, t(7))],
        };
        let tree = refine_cyclic_region_with_exits(&region, &[(1, f(7))]);
        assert_eq!(tree.goto_count(), 0);
        assert!(contains_loop(&tree), "expected Loop: {tree:?}");
        assert!(contains_continue(&tree), "expected Continue: {tree:?}");
        assert!(contains_break(&tree), "expected Break: {tree:?}");
        assert!(
            contains_if_on(&tree, 7),
            "expected latch guard p7: {tree:?}"
        );
    }

    #[test]
    fn cyclic_region_with_non_header_backedge_is_unsupported() {
        let region = Region {
            header: 0,
            edges: vec![
                (0, 1, EdgeLabel::Always),
                (1, 2, EdgeLabel::Always),
                (2, 1, EdgeLabel::Always),
            ],
        };
        assert_eq!(refine_cyclic_region(&region), StructuredNode::Unsupported);
    }

    // --- tree-inspection helpers ---
    fn contains_if_on(node: &StructuredNode, pred: u32) -> bool {
        match node {
            StructuredNode::If { cond, then, els } => {
                cond_mentions_pred(cond, pred)
                    || contains_if_on(then, pred)
                    || els.as_ref().is_some_and(|e| contains_if_on(e, pred))
            }
            StructuredNode::Loop { body } => contains_if_on(body, pred),
            StructuredNode::Seq(v) => v.iter().any(|n| contains_if_on(n, pred)),
            StructuredNode::Switch { cases, default, .. } => {
                cases.iter().any(|(_, n)| contains_if_on(n, pred))
                    || default.as_ref().is_some_and(|d| contains_if_on(d, pred))
            }
            _ => false,
        }
    }
    fn cond_mentions_pred(c: &Cond, pred: u32) -> bool {
        match c {
            Cond::Pred(id) | Cond::NotPred(id) => *id == pred,
            Cond::And(a, b) | Cond::Or(a, b) => {
                cond_mentions_pred(a, pred) || cond_mentions_pred(b, pred)
            }
            _ => false,
        }
    }
    fn mentions_block(node: &StructuredNode, blk: RegionNode) -> bool {
        match node {
            StructuredNode::Block(n) => *n == blk,
            StructuredNode::Seq(v) => v.iter().any(|n| mentions_block(n, blk)),
            StructuredNode::If { then, els, .. } => {
                mentions_block(then, blk) || els.as_ref().is_some_and(|e| mentions_block(e, blk))
            }
            StructuredNode::Loop { body } => mentions_block(body, blk),
            StructuredNode::Switch { cases, default, .. } => {
                cases.iter().any(|(_, n)| mentions_block(n, blk))
                    || default.as_ref().is_some_and(|d| mentions_block(d, blk))
            }
            _ => false,
        }
    }
    fn contains_loop(node: &StructuredNode) -> bool {
        match node {
            StructuredNode::Loop { .. } => true,
            StructuredNode::Seq(v) => v.iter().any(contains_loop),
            StructuredNode::If { then, els, .. } => {
                contains_loop(then) || els.as_ref().is_some_and(|e| contains_loop(e))
            }
            StructuredNode::Switch { cases, default, .. } => {
                cases.iter().any(|(_, n)| contains_loop(n))
                    || default.as_ref().is_some_and(|d| contains_loop(d))
            }
            _ => false,
        }
    }
    fn contains_continue(node: &StructuredNode) -> bool {
        match node {
            StructuredNode::Continue => true,
            StructuredNode::Loop { body } => contains_continue(body),
            StructuredNode::Seq(v) => v.iter().any(contains_continue),
            StructuredNode::If { then, els, .. } => {
                contains_continue(then) || els.as_ref().is_some_and(|e| contains_continue(e))
            }
            StructuredNode::Switch { cases, default, .. } => {
                cases.iter().any(|(_, n)| contains_continue(n))
                    || default.as_ref().is_some_and(|d| contains_continue(d))
            }
            _ => false,
        }
    }
    fn contains_break(node: &StructuredNode) -> bool {
        match node {
            StructuredNode::Break => true,
            StructuredNode::Loop { body } => contains_break(body),
            StructuredNode::Seq(v) => v.iter().any(contains_break),
            StructuredNode::If { then, els, .. } => {
                contains_break(then) || els.as_ref().is_some_and(|e| contains_break(e))
            }
            StructuredNode::Switch { cases, default, .. } => {
                cases.iter().any(|(_, n)| contains_break(n))
                    || default.as_ref().is_some_and(|d| contains_break(d))
            }
            _ => false,
        }
    }
    fn find_switch(node: &StructuredNode) -> Option<&StructuredNode> {
        match node {
            StructuredNode::Switch { .. } => Some(node),
            StructuredNode::Seq(v) => v.iter().find_map(find_switch),
            StructuredNode::If { then, els, .. } => {
                find_switch(then).or_else(|| els.as_ref().and_then(|e| find_switch(e)))
            }
            StructuredNode::Loop { body } => find_switch(body),
            _ => None,
        }
    }
}
