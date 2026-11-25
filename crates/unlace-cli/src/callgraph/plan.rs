//! Deterministic callee-first scheduling and recursive-component policy.

use std::collections::{BTreeMap, BTreeSet};

use unlace_console::engine::FunctionEntry;

use super::CallGraph;

/// Return `(target index, may park recovered types)` in callee-first order.
/// Tarjan walks roots and neighbors in target-index order and emits components
/// after their callees. A call through a bound PLT stub is an edge to the
/// definition it is built at ([`CallGraph::call_target`]). Recursive functions
/// park only under `cycles`, which orders each recursive component with
/// [`cycle_order`].
pub(crate) fn callee_first_plan(
    graph: &CallGraph,
    targets: &[FunctionEntry],
    cycles: bool,
) -> Vec<(usize, bool)> {
    let mut index_of: BTreeMap<u64, usize> = BTreeMap::new();
    for (i, t) in targets.iter().enumerate() {
        index_of.entry(t.addr.get_offset()).or_insert(i);
    }
    // Callees first: an edge u -> v means "u calls v", and Tarjan pops v's
    // component before u's.
    let mut edges: Vec<Vec<usize>> = vec![Vec::new(); targets.len()];
    let mut self_recursive: Vec<bool> = vec![false; targets.len()];
    for (i, t) in targets.iter().enumerate() {
        let mut out: Vec<usize> = Vec::new();
        for (callee, _kind) in graph.callees_of(t.addr.get_offset()) {
            let Some(&j) = index_of.get(&graph.call_target(callee)) else {
                continue;
            };
            if j == i {
                self_recursive[i] = true;
                continue;
            }
            out.push(j);
        }
        out.sort_unstable();
        out.dedup();
        edges[i] = out;
    }
    plan_from_components(&edges, &self_recursive, cycles)
}

/// [`callee_first_plan`] over the call edges (self-calls removed and recorded
/// in `self_recursive`).
///
/// With `cycles`, every function parks.  The members of a component with more
/// than one are decompiled once each, in [`cycle_order`], and each states its
/// types as it finishes, so a member decompiled later and every caller outside
/// the component read them.  An earlier member does not see a later one's
/// statement: a second round was measured and costs far more than it recovers
/// (docs/spec/04-calls-and-prototypes.md).
fn plan_from_components(
    edges: &[Vec<usize>],
    self_recursive: &[bool],
    cycles: bool,
) -> Vec<(usize, bool)> {
    let (order, component_size) = tarjan_scc(edges);
    if !cycles {
        return order
            .into_iter()
            .map(|i| (i, component_size[i] == 1 && !self_recursive[i]))
            .collect();
    }
    let mut component = vec![0usize; edges.len()];
    let mut at = 0;
    while at < order.len() {
        let n = component_size[order[at]];
        for &m in &order[at..at + n] {
            component[m] = at;
        }
        at += n;
    }
    let mut entered = vec![false; edges.len()];
    for (u, out) in edges.iter().enumerate() {
        for &v in out {
            if component[u] != component[v] {
                entered[v] = true;
            }
        }
    }
    let mut plan: Vec<(usize, bool)> = Vec::with_capacity(order.len());
    let mut at = 0;
    while at < order.len() {
        let n = component_size[order[at]];
        let members = &order[at..at + n];
        at += n;
        if n == 1 {
            plan.push((members[0], true));
        } else {
            plan.extend(
                cycle_order(members, edges, &entered)
                    .into_iter()
                    .map(|m| (m, true)),
            );
        }
    }
    plan
}

/// The decompile order inside one recursive component (`members` ascending).
///
/// A depth-first walk over the component's own edges that emits each member
/// after the partners it reaches, started first from the members something
/// outside the component calls.  Only a call back to a member already on the
/// walk is left unanswered, and a member called from outside -- the one the
/// component's callers read -- decompiles after the partners it reaches.
fn cycle_order(members: &[usize], edges: &[Vec<usize>], entered: &[bool]) -> Vec<usize> {
    let inside: BTreeSet<usize> = members.iter().copied().collect();
    let roots = members
        .iter()
        .filter(|&&m| entered[m])
        .chain(members.iter().filter(|&&m| !entered[m]));
    let mut seen: BTreeSet<usize> = BTreeSet::new();
    let mut out: Vec<usize> = Vec::with_capacity(members.len());
    for &root in roots {
        if !seen.insert(root) {
            continue;
        }
        let mut work: Vec<(usize, usize)> = vec![(root, 0)];
        while let Some(&mut (v, ref mut edge)) = work.last_mut() {
            if *edge < edges[v].len() {
                let w = edges[v][*edge];
                *edge += 1;
                if inside.contains(&w) && seen.insert(w) {
                    work.push((w, 0));
                }
                continue;
            }
            work.pop();
            out.push(v);
        }
    }
    out
}

/// Tarjan's SCC over `edges`, iteratively (a 100k-function binary would
/// overflow the stack recursing).  Returns the emission order — every component
/// after the components it points at — and each node's component size.
fn tarjan_scc(edges: &[Vec<usize>]) -> (Vec<usize>, Vec<usize>) {
    let n = edges.len();
    const UNVISITED: usize = usize::MAX;
    let mut index = vec![UNVISITED; n];
    let mut low = vec![0usize; n];
    let mut on_stack = vec![false; n];
    let mut stack: Vec<usize> = Vec::new();
    let mut next_index = 0usize;
    let mut order: Vec<usize> = Vec::with_capacity(n);
    let mut component_size = vec![1usize; n];
    for root in 0..n {
        if index[root] != UNVISITED {
            continue;
        }
        // (node, next edge to walk)
        let mut work: Vec<(usize, usize)> = vec![(root, 0)];
        index[root] = next_index;
        low[root] = next_index;
        next_index += 1;
        stack.push(root);
        on_stack[root] = true;
        while let Some(&mut (v, ref mut edge)) = work.last_mut() {
            if *edge < edges[v].len() {
                let w = edges[v][*edge];
                *edge += 1;
                if index[w] == UNVISITED {
                    index[w] = next_index;
                    low[w] = next_index;
                    next_index += 1;
                    stack.push(w);
                    on_stack[w] = true;
                    work.push((w, 0));
                } else if on_stack[w] {
                    low[v] = low[v].min(index[w]);
                }
                continue;
            }
            work.pop();
            if low[v] == index[v] {
                let mut members: Vec<usize> = Vec::new();
                while let Some(w) = stack.pop() {
                    on_stack[w] = false;
                    members.push(w);
                    if w == v {
                        break;
                    }
                }
                members.sort_unstable();
                for &w in &members {
                    component_size[w] = members.len();
                }
                order.extend(members);
            }
            if let Some(&mut (parent, _)) = work.last_mut() {
                low[parent] = low[parent].min(low[v]);
            }
        }
    }
    (order, component_size)
}

#[cfg(test)]
mod tests;
