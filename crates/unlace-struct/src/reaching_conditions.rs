//! Reaching-condition computation for condition-based control-flow structuring
//! (DREAM, NDSS 2015 — see `research/papers/dream_ndss2015.txt` §IV-A).
//!
//! The *reaching condition* `cr(h, n)` of a node `n` relative to a region
//! header `h` is the boolean predicate over branch decisions that is true
//! exactly on the paths from `h` that reach `n`. DREAM structures a region —
//! reducible OR irreducible — by emitting `if (cr(h, n)) { n }` guards instead
//! of `goto`, which is why it never needs node duplication.
//!
//! This module is the pure reaching-condition core for that engine
//! (`docs/design-structurer-irreducible-2026-05-29.md`, step 1). Production
//! wiring is conservative: only fully accepted residual regions are spliced,
//! and `UNLACE_DREAM_STRUCT=0` remains the legacy rollback path.
//!
//! # Model
//!
//! A region is a DAG-or-cyclic graph of nodes connected by edges, each edge
//! carrying an [`EdgeLabel`] (the branch decision taken: `True`/`False` for a
//! 2-way conditional, `Always` for an unconditional edge, or a `Case` value for
//! a switch). The reaching condition of the header is `True`. For any other
//! node `n`:
//!
//! ```text
//!     cr(h, n) = OR over incoming edges (p -> n):  cr(h, p) AND label(p, n)
//! ```
//!
//! For an acyclic region a single reverse-postorder sweep computes a fixed
//! point. For cyclic regions DREAM breaks back-edges first (they contribute the
//! loop's *continuation* condition, handled by the cyclic-region structurer in
//! a later step); here we compute conditions over the acyclic skeleton and
//! report which edges were treated as back-edges.

use std::collections::{BTreeMap, BTreeSet};

/// A node identifier within a region. Kept abstract (a `u32`) so this engine is
/// decoupled from `BlockId` and trivially unit-testable.
pub type RegionNode = u32;

/// Whether the DREAM condition-based structuring path is enabled.
///
/// DREAM is default-on for residual irreducible regions. Set
/// `UNLACE_DREAM_STRUCT=0` to force the legacy structurer path; any other value
/// (including an unset variable) enables DREAM.
pub fn dream_structuring_enabled() -> bool {
    dream_structuring_enabled_from(std::env::var("UNLACE_DREAM_STRUCT").ok().as_deref())
}

fn dream_structuring_enabled_from(value: Option<&str>) -> bool {
    !matches!(value, Some("0"))
}

/// The branch decision a CFG edge represents.
#[derive(Clone, Debug, PartialEq, Eq, PartialOrd, Ord)]
pub enum EdgeLabel {
    /// Unconditional edge — contributes `true` to the path condition.
    Always,
    /// The taken (`true`) side of a 2-way conditional on predicate `id`.
    True(u32),
    /// The fall-through (`false`) side of a 2-way conditional on predicate `id`.
    False(u32),
    /// The `case value` side of a switch on selector `id`.
    Case(u32, i64),
}

/// A boolean formula over branch predicates. Kept as a small normalized DNF-ish
/// tree; structuring only needs to test equivalence/implication of these, which
/// later steps will do via a SAT-free simplifier. Here we keep an exact tree.
#[derive(Clone, Debug, PartialEq, Eq, PartialOrd, Ord)]
pub enum Cond {
    /// Always reachable (the header).
    True,
    /// Unreachable (no path) — identity for `Or`.
    False,
    /// Predicate `id` is true.
    Pred(u32),
    /// Predicate `id` is false.
    NotPred(u32),
    /// Switch selector `id` equals `value`.
    CaseEq(u32, i64),
    /// Negation of a `CaseEq` (switch selector `id` does NOT equal `value`).
    /// Produced only by condition negation in the refinement step; the
    /// reaching-condition sweep itself never creates these.
    NotCaseEq(Box<Cond>),
    And(Box<Cond>, Box<Cond>),
    Or(Box<Cond>, Box<Cond>),
}

impl Cond {
    pub fn and(self, other: Cond) -> Cond {
        match (self, other) {
            (Cond::False, _) | (_, Cond::False) => Cond::False,
            (Cond::True, c) | (c, Cond::True) => c,
            (a, b) if a == b => a,
            (a, b) => Cond::And(Box::new(a), Box::new(b)),
        }
    }

    pub fn or(self, other: Cond) -> Cond {
        match (self, other) {
            (Cond::True, _) | (_, Cond::True) => Cond::True,
            (Cond::False, c) | (c, Cond::False) => c,
            (a, b) if a == b => a,
            (a, b) => Cond::Or(Box::new(a), Box::new(b)),
        }
    }

    pub fn from_label(label: &EdgeLabel) -> Cond {
        match label {
            EdgeLabel::Always => Cond::True,
            EdgeLabel::True(id) => Cond::Pred(*id),
            EdgeLabel::False(id) => Cond::NotPred(*id),
            EdgeLabel::Case(id, v) => Cond::CaseEq(*id, *v),
        }
    }
}

/// A region as a labelled edge list rooted at `header`.
#[derive(Clone, Debug, Default)]
pub struct Region {
    pub header: RegionNode,
    /// `(src, dst, label)` edges. Nodes are inferred from the edges + header.
    pub edges: Vec<(RegionNode, RegionNode, EdgeLabel)>,
}

/// Result of reaching-condition analysis.
#[derive(Clone, Debug)]
pub struct ReachingConditions {
    /// `cr(header, n)` for every node reachable from the header.
    pub conditions: BTreeMap<RegionNode, Cond>,
    /// Edges classified as back-edges (target is an ancestor in DFS) — these
    /// are excluded from the acyclic condition sweep and handed to the cyclic
    /// structurer in a later step.
    pub back_edges: BTreeSet<(RegionNode, RegionNode)>,
    /// True when condition growth exceeded the configured budget.
    pub limited: bool,
}

const DEFAULT_RC_MAX_COND_NODES: usize = 8192;

fn reaching_condition_node_limit() -> usize {
    std::env::var("UNLACE_RC_MAX_COND_NODES")
        .ok()
        .and_then(|value| value.trim().parse::<usize>().ok())
        .unwrap_or(DEFAULT_RC_MAX_COND_NODES)
}

fn over_condition_limit(limit: usize, size: usize) -> bool {
    limit > 0 && size > limit
}

fn cond_tree_size_bounded(cond: &Cond, limit: usize) -> usize {
    let mut count = 0usize;
    let mut stack = vec![cond];
    while let Some(cond) = stack.pop() {
        count = count.saturating_add(1);
        if over_condition_limit(limit, count) {
            return count;
        }
        match cond {
            Cond::NotCaseEq(inner) => stack.push(inner),
            Cond::And(left, right) | Cond::Or(left, right) => {
                stack.push(left);
                stack.push(right);
            }
            Cond::True | Cond::False | Cond::Pred(_) | Cond::NotPred(_) | Cond::CaseEq(_, _) => {}
        }
    }
    count
}

fn estimate_and_size(left: &Cond, left_size: usize, right: &Cond) -> usize {
    match (left, right) {
        (Cond::False, _) | (_, Cond::False) => 1,
        (Cond::True, _) => 1,
        (_, Cond::True) => left_size,
        _ => left_size.saturating_add(2),
    }
}

fn estimate_or_size(left: &Cond, left_size: usize, right: &Cond, right_size: usize) -> usize {
    match (left, right) {
        (Cond::True, _) | (_, Cond::True) => 1,
        (Cond::False, _) => right_size,
        (_, Cond::False) => left_size,
        _ => left_size.saturating_add(right_size).saturating_add(1),
    }
}

fn checked_and_label(
    cond: &Cond,
    cond_size: usize,
    label: &EdgeLabel,
    limit: usize,
) -> Option<(Cond, usize)> {
    let label_cond = Cond::from_label(label);
    let estimated_size = estimate_and_size(cond, cond_size, &label_cond);
    if over_condition_limit(limit, estimated_size) {
        return None;
    }
    let combined = cond.clone().and(label_cond);
    let size = cond_tree_size_bounded(&combined, limit);
    if over_condition_limit(limit, size) {
        return None;
    }
    Some((combined, size))
}

fn checked_or(
    left: Cond,
    left_size: usize,
    right: Cond,
    right_size: usize,
    limit: usize,
) -> Option<(Cond, usize)> {
    let estimated_size = estimate_or_size(&left, left_size, &right, right_size);
    if over_condition_limit(limit, estimated_size) {
        return None;
    }
    let combined = left.or(right);
    let size = cond_tree_size_bounded(&combined, limit);
    if over_condition_limit(limit, size) {
        return None;
    }
    Some((combined, size))
}

const RC_SWEEP_NODE_PHASES: [&str; 64] = [
    "struct.rc.sweep-node.000",
    "struct.rc.sweep-node.001",
    "struct.rc.sweep-node.002",
    "struct.rc.sweep-node.003",
    "struct.rc.sweep-node.004",
    "struct.rc.sweep-node.005",
    "struct.rc.sweep-node.006",
    "struct.rc.sweep-node.007",
    "struct.rc.sweep-node.008",
    "struct.rc.sweep-node.009",
    "struct.rc.sweep-node.010",
    "struct.rc.sweep-node.011",
    "struct.rc.sweep-node.012",
    "struct.rc.sweep-node.013",
    "struct.rc.sweep-node.014",
    "struct.rc.sweep-node.015",
    "struct.rc.sweep-node.016",
    "struct.rc.sweep-node.017",
    "struct.rc.sweep-node.018",
    "struct.rc.sweep-node.019",
    "struct.rc.sweep-node.020",
    "struct.rc.sweep-node.021",
    "struct.rc.sweep-node.022",
    "struct.rc.sweep-node.023",
    "struct.rc.sweep-node.024",
    "struct.rc.sweep-node.025",
    "struct.rc.sweep-node.026",
    "struct.rc.sweep-node.027",
    "struct.rc.sweep-node.028",
    "struct.rc.sweep-node.029",
    "struct.rc.sweep-node.030",
    "struct.rc.sweep-node.031",
    "struct.rc.sweep-node.032",
    "struct.rc.sweep-node.033",
    "struct.rc.sweep-node.034",
    "struct.rc.sweep-node.035",
    "struct.rc.sweep-node.036",
    "struct.rc.sweep-node.037",
    "struct.rc.sweep-node.038",
    "struct.rc.sweep-node.039",
    "struct.rc.sweep-node.040",
    "struct.rc.sweep-node.041",
    "struct.rc.sweep-node.042",
    "struct.rc.sweep-node.043",
    "struct.rc.sweep-node.044",
    "struct.rc.sweep-node.045",
    "struct.rc.sweep-node.046",
    "struct.rc.sweep-node.047",
    "struct.rc.sweep-node.048",
    "struct.rc.sweep-node.049",
    "struct.rc.sweep-node.050",
    "struct.rc.sweep-node.051",
    "struct.rc.sweep-node.052",
    "struct.rc.sweep-node.053",
    "struct.rc.sweep-node.054",
    "struct.rc.sweep-node.055",
    "struct.rc.sweep-node.056",
    "struct.rc.sweep-node.057",
    "struct.rc.sweep-node.058",
    "struct.rc.sweep-node.059",
    "struct.rc.sweep-node.060",
    "struct.rc.sweep-node.061",
    "struct.rc.sweep-node.062",
    "struct.rc.sweep-node.063",
];

const RC_SWEEP_EDGE_PHASES: [&str; 16] = [
    "struct.rc.sweep-edge.00",
    "struct.rc.sweep-edge.01",
    "struct.rc.sweep-edge.02",
    "struct.rc.sweep-edge.03",
    "struct.rc.sweep-edge.04",
    "struct.rc.sweep-edge.05",
    "struct.rc.sweep-edge.06",
    "struct.rc.sweep-edge.07",
    "struct.rc.sweep-edge.08",
    "struct.rc.sweep-edge.09",
    "struct.rc.sweep-edge.10",
    "struct.rc.sweep-edge.11",
    "struct.rc.sweep-edge.12",
    "struct.rc.sweep-edge.13",
    "struct.rc.sweep-edge.14",
    "struct.rc.sweep-edge.15",
];

fn rc_sweep_node_phase(index: usize) -> &'static str {
    RC_SWEEP_NODE_PHASES
        .get(index)
        .copied()
        .unwrap_or("struct.rc.sweep-node.overflow")
}

fn rc_sweep_edge_phase(index: usize) -> &'static str {
    RC_SWEEP_EDGE_PHASES
        .get(index)
        .copied()
        .unwrap_or("struct.rc.sweep-edge.overflow")
}

fn nodes_of(region: &Region) -> BTreeSet<RegionNode> {
    let _span = linkscope::phase("struct.rc.nodes-of");
    let mut s = BTreeSet::new();
    s.insert(region.header);
    for (a, b, _) in &region.edges {
        s.insert(*a);
        s.insert(*b);
    }
    s
}

fn succs(region: &Region) -> BTreeMap<RegionNode, Vec<(RegionNode, EdgeLabel)>> {
    let _span = linkscope::phase("struct.rc.succs");
    let mut m: BTreeMap<RegionNode, Vec<(RegionNode, EdgeLabel)>> = BTreeMap::new();
    for (a, b, l) in &region.edges {
        m.entry(*a).or_default().push((*b, l.clone()));
    }
    m
}

/// Iterative-DFS work item with explicit enter/leave to maintain the
/// `on_stack` ancestor set for back-edge detection.
enum BackEdgeStep {
    Enter(RegionNode),
    Leave(RegionNode),
}

/// Classify back-edges via a DFS from the header: an edge `(u, v)` is a
/// back-edge iff `v` is on the current DFS stack (an ancestor of `u`).
fn classify_back_edges(region: &Region) -> BTreeSet<(RegionNode, RegionNode)> {
    let _span = linkscope::phase("struct.rc.classify-back-edges");
    let succ = succs(region);
    let mut back = BTreeSet::new();
    let mut on_stack: BTreeSet<RegionNode> = BTreeSet::new();
    let mut visited: BTreeSet<RegionNode> = BTreeSet::new();
    let mut stack = vec![BackEdgeStep::Enter(region.header)];
    let mut steps = 0u64;
    while let Some(step) = stack.pop() {
        steps += 1;
        let n = match step {
            BackEdgeStep::Leave(n) => {
                on_stack.remove(&n);
                continue;
            }
            BackEdgeStep::Enter(n) => n,
        };
        if !visited.insert(n) {
            continue;
        }
        on_stack.insert(n);
        stack.push(BackEdgeStep::Leave(n));
        {
            let _span = linkscope::phase("struct.rc.classify-visit-succs");
            visit_succs_for_back_edges(n, &succ, &on_stack, &visited, &mut back, &mut stack);
        }
    }
    linkscope::record_items("struct.rc.classify-back-edges.steps", steps);
    linkscope::record_items("struct.rc.classify-back-edges.edges", back.len() as u64);
    back
}

/// Push unvisited successors of `n` and record any back-edges (target on the
/// DFS stack). Extracted from [`classify_back_edges`] to keep nesting shallow.
fn visit_succs_for_back_edges(
    n: RegionNode,
    succ: &BTreeMap<RegionNode, Vec<(RegionNode, EdgeLabel)>>,
    on_stack: &BTreeSet<RegionNode>,
    visited: &BTreeSet<RegionNode>,
    back: &mut BTreeSet<(RegionNode, RegionNode)>,
    stack: &mut Vec<BackEdgeStep>,
) {
    for (m, _) in succ.get(&n).into_iter().flatten() {
        if on_stack.contains(m) {
            back.insert((n, *m));
        } else if !visited.contains(m) {
            stack.push(BackEdgeStep::Enter(*m));
        }
    }
}

/// Topological order of the acyclic skeleton (region minus back-edges).
/// Returns `None` if a cycle remains after removing detected back-edges (should
/// not happen for well-formed reducible skeletons; defensive).
fn topo_order(
    region: &Region,
    back: &BTreeSet<(RegionNode, RegionNode)>,
) -> Option<Vec<RegionNode>> {
    let _span = linkscope::phase("struct.rc.topo-order");
    let nodes = nodes_of(region);
    let (mut indeg, fwd) = {
        let _span = linkscope::phase("struct.rc.topo-build-graph");
        let mut indeg: BTreeMap<RegionNode, usize> = nodes.iter().map(|&n| (n, 0)).collect();
        let mut fwd: BTreeMap<RegionNode, Vec<RegionNode>> = BTreeMap::new();
        for (a, b, _) in &region.edges {
            if back.contains(&(*a, *b)) {
                continue;
            }
            *indeg.get_mut(b).expect("node in set") += 1;
            fwd.entry(*a).or_default().push(*b);
        }
        (indeg, fwd)
    };
    let order = {
        let _span = linkscope::phase("struct.rc.topo-kahn");
        // Deterministic Kahn's algorithm (BTree-ordered queue).
        let mut ready: BTreeSet<RegionNode> = indeg
            .iter()
            .filter(|(_, d)| **d == 0)
            .map(|(n, _)| *n)
            .collect();
        let mut order = Vec::with_capacity(nodes.len());
        while let Some(&n) = ready.iter().next() {
            ready.remove(&n);
            order.push(n);
            for m in fwd.get(&n).into_iter().flatten() {
                let d = indeg.get_mut(m).expect("node");
                *d -= 1;
                if *d == 0 {
                    ready.insert(*m);
                }
            }
        }
        order
    };
    linkscope::record_items("struct.rc.topo-order.nodes", nodes.len() as u64);
    (order.len() == nodes.len()).then_some(order)
}

/// Compute reaching conditions `cr(header, n)` for every node, over the acyclic
/// skeleton (back-edges excluded and reported separately).
pub fn compute_reaching_conditions(region: &Region) -> ReachingConditions {
    compute_reaching_conditions_with_limit(region, reaching_condition_node_limit())
}

fn compute_reaching_conditions_with_limit(
    region: &Region,
    condition_node_limit: usize,
) -> ReachingConditions {
    let _span = linkscope::phase("struct.rc.compute");
    linkscope::record_items("struct.rc.compute.edges", region.edges.len() as u64);
    linkscope::record_items(
        "struct.rc.compute.cond-node-limit",
        condition_node_limit as u64,
    );
    let back = classify_back_edges(region);
    let mut conditions: BTreeMap<RegionNode, Cond> = BTreeMap::new();
    let mut condition_sizes: BTreeMap<RegionNode, usize> = BTreeMap::new();
    let mut limited = false;
    conditions.insert(region.header, Cond::True);
    condition_sizes.insert(region.header, 1);

    // Incoming forward edges per node.
    let incoming = {
        let _span = linkscope::phase("struct.rc.incoming");
        let mut incoming: BTreeMap<RegionNode, Vec<(RegionNode, EdgeLabel)>> = BTreeMap::new();
        for (a, b, l) in &region.edges {
            if back.contains(&(*a, *b)) {
                continue;
            }
            incoming.entry(*b).or_default().push((*a, l.clone()));
        }
        linkscope::record_items("struct.rc.incoming.nodes", incoming.len() as u64);
        incoming
    };

    if let Some(order) = topo_order(region, &back) {
        let _span = linkscope::phase("struct.rc.sweep");
        linkscope::record_items("struct.rc.sweep.nodes", order.len() as u64);
        'sweep: for (idx, n) in order.into_iter().enumerate() {
            let _span = linkscope::phase("struct.rc.sweep-node");
            let _node_span = linkscope::phase(rc_sweep_node_phase(idx));
            linkscope::record_items("struct.rc.sweep-node.index", idx as u64);
            if linkscope::is_enabled() {
                let incoming_count = incoming.get(&n).map_or(0, Vec::len);
                linkscope::event_fields(
                    "struct.rc.sweep-node.start",
                    [
                        linkscope::TraceField::count("index", idx as u64),
                        linkscope::TraceField::count("node", n as u64),
                        linkscope::TraceField::count("incoming", incoming_count as u64),
                    ],
                );
            }
            if n != region.header {
                let mut acc = Cond::False;
                let mut acc_size = 1usize;
                let mut incoming_count = 0u64;
                for (edge_idx, (p, label)) in incoming.get(&n).into_iter().flatten().enumerate() {
                    incoming_count += 1;
                    let _edge_span = linkscope::phase(rc_sweep_edge_phase(edge_idx));
                    if linkscope::is_enabled() {
                        linkscope::event_fields(
                            "struct.rc.sweep-edge.start",
                            [
                                linkscope::TraceField::count("node_index", idx as u64),
                                linkscope::TraceField::count("node", n as u64),
                                linkscope::TraceField::count("edge_index", edge_idx as u64),
                                linkscope::TraceField::count("pred", *p as u64),
                            ],
                        );
                    }
                    let (Some(pc), Some(&pc_size)) = (conditions.get(p), condition_sizes.get(p))
                    else {
                        continue;
                    };
                    let Some((term, term_size)) =
                        checked_and_label(pc, pc_size, label, condition_node_limit)
                    else {
                        limited = true;
                        linkscope::record_items("struct.rc.condition-limited.node", n as u64);
                        linkscope::record_items("struct.rc.condition-limited.pred", *p as u64);
                        linkscope::record_items(
                            "struct.rc.condition-limited.edge-index",
                            edge_idx as u64,
                        );
                        break 'sweep;
                    };
                    let Some((next_acc, next_acc_size)) =
                        checked_or(acc, acc_size, term, term_size, condition_node_limit)
                    else {
                        limited = true;
                        linkscope::record_items("struct.rc.condition-limited.node", n as u64);
                        linkscope::record_items("struct.rc.condition-limited.pred", *p as u64);
                        linkscope::record_items(
                            "struct.rc.condition-limited.edge-index",
                            edge_idx as u64,
                        );
                        break 'sweep;
                    };
                    acc = next_acc;
                    acc_size = next_acc_size;
                }
                linkscope::record_items("struct.rc.sweep-node.incoming", incoming_count);
                conditions.insert(n, acc);
                condition_sizes.insert(n, acc_size);
            }
        }
    }

    ReachingConditions {
        conditions,
        back_edges: back,
        limited,
    }
}

#[cfg(test)]
mod tests {
    use super::*;

    fn lbl_t(id: u32) -> EdgeLabel {
        EdgeLabel::True(id)
    }
    fn lbl_f(id: u32) -> EdgeLabel {
        EdgeLabel::False(id)
    }

    #[test]
    fn header_condition_is_true() {
        let region = Region {
            header: 0,
            edges: vec![(0, 1, EdgeLabel::Always)],
        };
        let rc = compute_reaching_conditions(&region);
        assert_eq!(rc.conditions[&0], Cond::True);
        assert_eq!(rc.conditions[&1], Cond::True); // Always edge
    }

    #[test]
    fn diamond_merges_to_true() {
        // 0 -t-> 1 -> 3 ; 0 -f-> 2 -> 3.  cr(3) = p0 OR !p0 = True.
        let region = Region {
            header: 0,
            edges: vec![
                (0, 1, lbl_t(0)),
                (0, 2, lbl_f(0)),
                (1, 3, EdgeLabel::Always),
                (2, 3, EdgeLabel::Always),
            ],
        };
        let rc = compute_reaching_conditions(&region);
        assert!(!rc.limited);
        assert_eq!(rc.conditions[&1], Cond::Pred(0));
        assert_eq!(rc.conditions[&2], Cond::NotPred(0));
        // p0 OR !p0 simplifies structurally? Our `or` only folds syntactic
        // duplicates/identities, so this stays an Or — but both arms present.
        match &rc.conditions[&3] {
            Cond::Or(a, b) => {
                let set: BTreeSet<&Cond> = [a.as_ref(), b.as_ref()].into_iter().collect();
                assert!(set.contains(&Cond::Pred(0)));
                assert!(set.contains(&Cond::NotPred(0)));
            }
            other => panic!("expected Or, got {other:?}"),
        }
    }

    #[test]
    fn condition_budget_marks_limited_before_or_tree_growth() {
        let region = Region {
            header: 0,
            edges: vec![
                (0, 1, lbl_t(0)),
                (0, 2, lbl_f(0)),
                (1, 3, EdgeLabel::Always),
                (2, 3, EdgeLabel::Always),
            ],
        };
        let rc = compute_reaching_conditions_with_limit(&region, 2);
        assert!(rc.limited);
        assert!(
            !rc.conditions.contains_key(&3),
            "limited node should not be materialized"
        );
    }

    #[test]
    fn nested_guard_conjoins() {
        // 0 -t(0)-> 1 -t(1)-> 2.  cr(2) = p0 AND p1.
        let region = Region {
            header: 0,
            edges: vec![(0, 1, lbl_t(0)), (1, 2, lbl_t(1))],
        };
        let rc = compute_reaching_conditions(&region);
        assert_eq!(
            rc.conditions[&2],
            Cond::And(Box::new(Cond::Pred(0)), Box::new(Cond::Pred(1)))
        );
    }

    #[test]
    fn back_edge_detected_and_excluded() {
        // 0 -> 1 -> 2 -> 1 (back-edge).  cr computed over skeleton; back-edge
        // (2,1) reported, not folded into cr(1).
        let region = Region {
            header: 0,
            edges: vec![
                (0, 1, EdgeLabel::Always),
                (1, 2, EdgeLabel::Always),
                (2, 1, EdgeLabel::Always),
            ],
        };
        let rc = compute_reaching_conditions(&region);
        assert!(rc.back_edges.contains(&(2, 1)));
        // cr(1) only sees the forward edge from 0 → True.
        assert_eq!(rc.conditions[&1], Cond::True);
        assert_eq!(rc.conditions[&2], Cond::True);
    }

    #[test]
    fn dream_gate_policy_defaults_on_with_zero_rollback() {
        // Pure helper tests avoid process-env mutation so the test remains
        // parallel-safe.
        assert!(dream_structuring_enabled_from(None));
        assert!(dream_structuring_enabled_from(Some("")));
        assert!(dream_structuring_enabled_from(Some("1")));
        assert!(dream_structuring_enabled_from(Some("true")));
        assert!(!dream_structuring_enabled_from(Some("0")));
    }

    #[test]
    fn notcaseeq_variant_constructs_and_compares() {
        // The NotCaseEq variant (added for refinement's negation) participates
        // in Cond's derived Eq/Ord like any other leaf.
        let a = Cond::NotCaseEq(Box::new(Cond::CaseEq(7, 3)));
        let b = Cond::NotCaseEq(Box::new(Cond::CaseEq(7, 3)));
        assert_eq!(a, b);
        assert_ne!(a, Cond::CaseEq(7, 3));
        // And/Or still fold identities with it present.
        assert_eq!(a.clone().and(Cond::True), a);
        assert_eq!(Cond::False.or(b.clone()), b);
    }

    #[test]
    fn and_or_identities() {
        assert_eq!(Cond::True.and(Cond::Pred(0)), Cond::Pred(0));
        assert_eq!(Cond::False.and(Cond::Pred(0)), Cond::False);
        assert_eq!(Cond::True.or(Cond::Pred(0)), Cond::True);
        assert_eq!(Cond::False.or(Cond::Pred(0)), Cond::Pred(0));
        assert_eq!(Cond::Pred(0).and(Cond::Pred(0)), Cond::Pred(0));
    }

    #[test]
    fn irreducible_two_entry_loop_classifies_back_edge() {
        // Classic irreducible: header 0 branches to 1 and 2; 1<->2 cycle.
        // 0 -t-> 1 -> 2 ; 0 -f-> 2 -> 1.  One of the cross edges is a back-edge.
        let region = Region {
            header: 0,
            edges: vec![
                (0, 1, lbl_t(0)),
                (0, 2, lbl_f(0)),
                (1, 2, EdgeLabel::Always),
                (2, 1, EdgeLabel::Always),
            ],
        };
        let rc = compute_reaching_conditions(&region);
        // Exactly one of (1,2)/(2,1) is a back-edge (DFS-order dependent) and a
        // topo order exists over the remaining skeleton.
        assert_eq!(rc.back_edges.len(), 1);
        assert!(rc.conditions.contains_key(&1));
        assert!(rc.conditions.contains_key(&2));
    }
}
