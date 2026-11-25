//! Reaching-condition computation for condition-based control-flow structuring
//! (DREAM, NDSS 2015, section IV-A), ported from the archived engine's
//! `origin/master:crates/unlace-struct/src/reaching_conditions.rs`.
//!
//! The reaching condition `cr(h, n)` of a node `n` relative to a region header `h` is the
//! predicate over branch decisions that holds exactly on the paths from `h` that reach `n`.
//! DREAM structures a region, reducible or not, by emitting `if (cr(h, n)) { n }` guards instead
//! of `goto`, so it never needs node duplication.
//!
//! This is the pure core: it computes conditions and reports back-edges over a labelled edge
//! list and is not yet called by the region structurer. Nothing in the default pipeline reaches
//! it, so it changes no output.
//!
//! Model: a region is a labelled edge list rooted at `header`. The header's condition is `True`,
//! and for any other node `n`:
//!
//! ```text
//!     cr(h, n) = OR over forward incoming edges (p -> n):  cr(h, p) AND label(p, n)
//! ```
//!
//! Back-edges (targets on the DFS stack) are classified first and excluded from the sweep. The
//! sweep runs in topological order over the acyclic skeleton. A node budget stops the sweep and
//! sets `limited` as soon as a condition tree grows past it, so no oversized node is materialized.

use std::collections::{BTreeMap, BTreeSet};

/// A node identifier within a region. Kept abstract (a `u32`) so this engine is decoupled from
/// `BlockId` and unit-testable on its own.
pub type RegionNode = u32;

/// The branch decision a CFG edge represents.
#[derive(Clone, Debug, PartialEq, Eq, PartialOrd, Ord)]
pub enum EdgeLabel {
    /// Unconditional edge: contributes `true` to the path condition.
    Always,
    /// The taken (`true`) side of a 2-way conditional on predicate `id`.
    True(u32),
    /// The fall-through (`false`) side of a 2-way conditional on predicate `id`.
    False(u32),
    /// The `case value` side of a switch on selector `id`.
    Case(u32, i64),
}

/// A boolean formula over branch predicates, kept as an exact tree. `and` and `or` fold only
/// syntactic identities and duplicates.
#[derive(Clone, Debug, PartialEq, Eq, PartialOrd, Ord)]
pub enum Cond {
    /// Always reachable (the header).
    True,
    /// Unreachable (no path); the identity for `Or`.
    False,
    /// Predicate `id` is true.
    Pred(u32),
    /// Predicate `id` is false.
    NotPred(u32),
    /// Switch selector `id` equals `value`.
    CaseEq(u32, i64),
    /// Negation of a `CaseEq`. Produced only by condition negation in refinement; the sweep never
    /// creates one.
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

/// A region as a labelled edge list rooted at `header`. Nodes are inferred from the edges and
/// the header.
#[derive(Clone, Debug, Default)]
pub struct Region {
    pub header: RegionNode,
    /// `(src, dst, label)` edges.
    pub edges: Vec<(RegionNode, RegionNode, EdgeLabel)>,
}

/// Result of reaching-condition analysis.
#[derive(Clone, Debug)]
pub struct ReachingConditions {
    /// `cr(header, n)` for every node materialized by the sweep.
    pub conditions: BTreeMap<RegionNode, Cond>,
    /// Edges classified as back-edges. They are excluded from the sweep and left to the cyclic
    /// structurer.
    pub back_edges: BTreeSet<(RegionNode, RegionNode)>,
    /// True when condition growth exceeded the budget before the sweep finished.
    pub limited: bool,
}

fn over_condition_limit(limit: usize, size: usize) -> bool {
    limit > 0 && size > limit
}

/// Count the nodes of `cond`, stopping as soon as the count passes `limit`.
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

/// `cond AND label`, or `None` when the result would exceed `limit` nodes.
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

/// `left OR right`, or `None` when the result would exceed `limit` nodes.
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

fn nodes_of(region: &Region) -> BTreeSet<RegionNode> {
    let mut s = BTreeSet::new();
    s.insert(region.header);
    for (a, b, _) in &region.edges {
        s.insert(*a);
        s.insert(*b);
    }
    s
}

fn succs(region: &Region) -> BTreeMap<RegionNode, Vec<(RegionNode, EdgeLabel)>> {
    let mut m: BTreeMap<RegionNode, Vec<(RegionNode, EdgeLabel)>> = BTreeMap::new();
    for (a, b, l) in &region.edges {
        m.entry(*a).or_default().push((*b, l.clone()));
    }
    m
}

/// Iterative-DFS work item with explicit enter and leave, to track the on-stack ancestor set.
enum BackEdgeStep {
    Enter(RegionNode),
    Leave(RegionNode),
}

/// Classify back-edges by a DFS from the header: an edge `(u, v)` is a back-edge iff `v` is on
/// the current DFS stack.
fn classify_back_edges(region: &Region) -> BTreeSet<(RegionNode, RegionNode)> {
    let succ = succs(region);
    let mut back = BTreeSet::new();
    let mut on_stack: BTreeSet<RegionNode> = BTreeSet::new();
    let mut visited: BTreeSet<RegionNode> = BTreeSet::new();
    let mut stack = vec![BackEdgeStep::Enter(region.header)];
    while let Some(step) = stack.pop() {
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
        visit_succs_for_back_edges(n, &succ, &on_stack, &visited, &mut back, &mut stack);
    }
    back
}

/// Push the unvisited successors of `n` and record each back-edge (target on the DFS stack).
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

/// Topological order of the acyclic skeleton (the region minus back-edges). Returns `None` if a
/// cycle remains, which cannot happen after back-edge removal and is kept as a defensive check.
fn topo_order(
    region: &Region,
    back: &BTreeSet<(RegionNode, RegionNode)>,
) -> Option<Vec<RegionNode>> {
    let nodes = nodes_of(region);
    let mut indeg: BTreeMap<RegionNode, usize> = nodes.iter().map(|&n| (n, 0)).collect();
    let mut fwd: BTreeMap<RegionNode, Vec<RegionNode>> = BTreeMap::new();
    for (a, b, _) in &region.edges {
        if back.contains(&(*a, *b)) {
            continue;
        }
        *indeg.entry(*b).or_insert(0) += 1;
        fwd.entry(*a).or_default().push(*b);
    }
    // Deterministic Kahn's algorithm with a BTree-ordered ready set.
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
            if let Some(d) = indeg.get_mut(m) {
                *d -= 1;
                if *d == 0 {
                    ready.insert(*m);
                }
            }
        }
    }
    (order.len() == nodes.len()).then_some(order)
}

/// Compute `cr(header, n)` for every node over the acyclic skeleton. Back-edges are excluded and
/// reported separately. `condition_node_limit` bounds each condition tree; `0` disables the
/// budget.
pub fn compute_reaching_conditions(
    region: &Region,
    condition_node_limit: usize,
) -> ReachingConditions {
    let back = classify_back_edges(region);
    let mut conditions: BTreeMap<RegionNode, Cond> = BTreeMap::new();
    let mut condition_sizes: BTreeMap<RegionNode, usize> = BTreeMap::new();
    let mut limited = false;
    conditions.insert(region.header, Cond::True);
    condition_sizes.insert(region.header, 1);

    let mut incoming: BTreeMap<RegionNode, Vec<(RegionNode, EdgeLabel)>> = BTreeMap::new();
    for (a, b, l) in &region.edges {
        if back.contains(&(*a, *b)) {
            continue;
        }
        incoming.entry(*b).or_default().push((*a, l.clone()));
    }

    if let Some(order) = topo_order(region, &back) {
        'sweep: for n in order {
            if n == region.header {
                continue;
            }
            let mut acc = Cond::False;
            let mut acc_size = 1usize;
            for (p, label) in incoming.get(&n).into_iter().flatten() {
                let (Some(pc), Some(&pc_size)) = (conditions.get(p), condition_sizes.get(p)) else {
                    continue;
                };
                let Some((term, term_size)) =
                    checked_and_label(pc, pc_size, label, condition_node_limit)
                else {
                    limited = true;
                    break 'sweep;
                };
                let Some((next_acc, next_acc_size)) =
                    checked_or(acc, acc_size, term, term_size, condition_node_limit)
                else {
                    limited = true;
                    break 'sweep;
                };
                acc = next_acc;
                acc_size = next_acc_size;
            }
            conditions.insert(n, acc);
            condition_sizes.insert(n, acc_size);
        }
    }

    ReachingConditions {
        conditions,
        back_edges: back,
        limited,
    }
}

#[cfg(test)]
mod tests;
