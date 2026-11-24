//! P3 sparse conditional constant propagation (unlace `sccp`, Wegman and Zadeck 1991).
//!
//! A lattice of three values per SSA value (`Top` not yet known, `Const`, `Bottom`
//! overdefined) is solved together with block reachability. A conditional branch
//! whose condition is a known constant marks only the edge it takes, so a phi
//! meets only the inputs that arrive over an executable edge. A constant that
//! reaches a join only through a dead arm therefore still resolves, which the
//! equality-only `condconst` and `ActionDeterminedBranch` cannot see.
//!
//! This module is the solver only. It works on a plain graph of values, blocks
//! and terminators, so it needs no `Funcdata`. The caller builds the graph from
//! the function, reads the dead edges back with [`SccpSolution::dead_edges`], and
//! removes them with the existing dead-edge repair. Nothing calls it yet.
//!
//! Lattice values only move up (`Top` to `Const` to `Bottom`) and reachability
//! only grows, so the fixpoint loop terminates. A work budget bounds the number
//! of value evaluations, as `SccpLimits` does for the upstream pass; a budget of
//! zero is unlimited.

use std::collections::BTreeSet;

/// Lattice value of one SSA value.
#[derive(Clone, Copy, Debug, PartialEq, Eq)]
pub enum SccpLat {
    /// Not yet computed: optimistically assumed constant.
    Top,
    /// Proven to hold this value on every executable path.
    Const(u64),
    /// Overdefined: may take more than one value at run time.
    Bottom,
}

impl SccpLat {
    /// Greatest lower bound: equal constants stay constant, anything else is `Bottom`.
    pub fn meet(self, other: SccpLat) -> SccpLat {
        match (self, other) {
            (SccpLat::Top, v) | (v, SccpLat::Top) => v,
            (SccpLat::Const(a), SccpLat::Const(b)) if a == b => SccpLat::Const(a),
            _ => SccpLat::Bottom,
        }
    }
}

/// How one SSA value is defined. Value ids index [`SccpGraph::values`].
#[derive(Clone, Debug)]
pub enum SccpDef {
    /// Defined outside the solved region: never constant.
    External,
    /// A literal.
    Const(u64),
    /// A copy of another value.
    Copy(usize),
    /// One `(predecessor block, value)` pair per incoming edge.
    Phi(Vec<(usize, usize)>),
    /// `eval` applied to the input values once all of them are constant.
    Op {
        inputs: Vec<usize>,
        eval: fn(&[u64]) -> u64,
    },
}

/// One SSA value and the block that defines it.
#[derive(Clone, Debug)]
pub struct SccpValue {
    pub block: usize,
    pub def: SccpDef,
}

/// How a block leaves. Block ids index [`SccpGraph::terms`]; block 0 is the entry.
#[derive(Clone, Copy, Debug)]
pub enum SccpTerm {
    Exit,
    Goto(usize),
    /// Takes `taken` when `cond` is non-zero, `fallthru` otherwise.
    Branch {
        cond: usize,
        taken: usize,
        fallthru: usize,
    },
}

/// The graph the solver runs over.
#[derive(Clone, Debug, Default)]
pub struct SccpGraph {
    pub values: Vec<SccpValue>,
    pub terms: Vec<SccpTerm>,
}

/// Why the solver stopped without a result.
#[derive(Clone, Debug, PartialEq, Eq)]
pub enum SccpError {
    /// An id or block index in the graph points outside it.
    Malformed,
    /// More value evaluations than the budget allows.
    WorkBudgetExceeded { limit: u64 },
}

/// The fixpoint: a lattice value per value and the executable edges.
#[derive(Clone, Debug, PartialEq, Eq)]
pub struct SccpSolution {
    pub values: Vec<SccpLat>,
    pub reachable: Vec<bool>,
    pub executable: BTreeSet<(usize, usize)>,
}

impl SccpSolution {
    /// Edges leaving a reachable block that never execute, in ascending order.
    /// Edges out of unreachable blocks are not listed: they go with the block.
    pub fn dead_edges(&self, graph: &SccpGraph) -> Vec<(usize, usize)> {
        let mut dead = BTreeSet::new();
        for (block, term) in graph.terms.iter().enumerate() {
            if !self.reachable.get(block).copied().unwrap_or(false) {
                continue;
            }
            for succ in successors(*term) {
                if !self.executable.contains(&(block, succ)) {
                    dead.insert((block, succ));
                }
            }
        }
        dead.into_iter().collect()
    }
}

fn successors(term: SccpTerm) -> Vec<usize> {
    match term {
        SccpTerm::Exit => Vec::new(),
        SccpTerm::Goto(s) => vec![s],
        SccpTerm::Branch {
            taken, fallthru, ..
        } => vec![taken, fallthru],
    }
}

fn malformed(graph: &SccpGraph) -> bool {
    let nb = graph.terms.len();
    let nv = graph.values.len();
    if nb == 0 {
        return true;
    }
    let term_ok = graph.terms.iter().all(|t| match *t {
        SccpTerm::Exit => true,
        SccpTerm::Goto(s) => s < nb,
        SccpTerm::Branch {
            cond,
            taken,
            fallthru,
        } => cond < nv && taken < nb && fallthru < nb,
    });
    let value_ok = graph.values.iter().all(|v| {
        v.block < nb
            && match &v.def {
                SccpDef::External | SccpDef::Const(_) => true,
                SccpDef::Copy(s) => *s < nv,
                SccpDef::Phi(ins) => ins.iter().all(|&(p, s)| p < nb && s < nv),
                SccpDef::Op { inputs, .. } => inputs.iter().all(|&s| s < nv),
            }
    });
    !(term_ok && value_ok)
}

/// Solve the graph. `max_work` bounds the value evaluations (0 is unlimited).
pub fn solve_sccp(graph: &SccpGraph, max_work: u64) -> Result<SccpSolution, SccpError> {
    if malformed(graph) {
        return Err(SccpError::Malformed);
    }
    let nb = graph.terms.len();
    let mut values = vec![SccpLat::Top; graph.values.len()];
    let mut reachable = vec![false; nb];
    let mut executable = BTreeSet::new();
    reachable[0] = true;
    let mut work: u64 = 0;

    let mut changed = true;
    while changed {
        changed = false;

        for block in 0..nb {
            if !reachable[block] {
                continue;
            }
            let edges: Vec<(usize, usize)> = match graph.terms[block] {
                SccpTerm::Exit => Vec::new(),
                SccpTerm::Goto(s) => vec![(block, s)],
                SccpTerm::Branch {
                    cond,
                    taken,
                    fallthru,
                } => match values[cond] {
                    SccpLat::Top => Vec::new(),
                    SccpLat::Const(c) => {
                        let s = if c != 0 { taken } else { fallthru };
                        vec![(block, s)]
                    }
                    SccpLat::Bottom => vec![(block, taken), (block, fallthru)],
                },
            };
            for (from, to) in edges {
                if executable.insert((from, to)) {
                    reachable[to] = true;
                    changed = true;
                }
            }
        }

        for (id, value) in graph.values.iter().enumerate() {
            if !reachable[value.block] {
                continue;
            }
            work += 1;
            if max_work > 0 && work > max_work {
                return Err(SccpError::WorkBudgetExceeded { limit: max_work });
            }
            let next = eval_def(&graph.values[id], &values, &executable);
            let merged = values[id].meet(next);
            if merged != values[id] {
                values[id] = merged;
                changed = true;
            }
        }
    }

    Ok(SccpSolution {
        values,
        reachable,
        executable,
    })
}

fn eval_def(
    value: &SccpValue,
    values: &[SccpLat],
    executable: &BTreeSet<(usize, usize)>,
) -> SccpLat {
    match &value.def {
        SccpDef::External => SccpLat::Bottom,
        SccpDef::Const(c) => SccpLat::Const(*c),
        SccpDef::Copy(s) => values[*s],
        SccpDef::Phi(ins) => ins
            .iter()
            .filter(|&&(pred, _)| executable.contains(&(pred, value.block)))
            .fold(SccpLat::Top, |acc, &(_, s)| acc.meet(values[s])),
        SccpDef::Op { inputs, eval } => {
            let mut args = Vec::with_capacity(inputs.len());
            let mut any_top = false;
            for &s in inputs {
                match values[s] {
                    SccpLat::Top => any_top = true,
                    SccpLat::Bottom => return SccpLat::Bottom,
                    SccpLat::Const(c) => args.push(c),
                }
            }
            if any_top {
                SccpLat::Top
            } else {
                SccpLat::Const(eval(&args))
            }
        }
    }
}

#[cfg(test)]
mod tests;
