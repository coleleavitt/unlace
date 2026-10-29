//! Weighted type voting for SSA varnodes.
//!
//! [`crate::type_infer::TypeInferPass`] and
//! [`crate::type_constraint_solver::TypeConstraintSolverPass`] join types
//! on a flat lattice: the first conflict (an integer use and a float use of
//! one value) collapses a varnode to [`PrimitiveType::Unknown`] and freezes
//! it there. Hex-Rays never collapses a conflict. It counts the evidence
//! and keeps the best-supported type (`research/hexrays-type-recovery.md`,
//! sections 2.5–2.8). This pass does the same for the varnodes the lattice
//! left without a type:
//!
//! 1. [`EdgeSet::collect`] emits one edge per use. Each edge has a weight
//!    (its [`Trust`]); identical edges merge and their weights add up.
//! 2. Every round, each untyped varnode collects candidates from the edges
//!    whose other side is typed, one [`Ballot`] per varnode. A vote is weak
//!    when it comes from a comparison or from a partial varnode.
//! 3. The winner has the lowest penalty (unknownness plus weak evidence),
//!    then the most support from compatible votes. Signedness is a
//!    separate majority vote.
//! 4. Winners become typed. The next round can use them as evidence, until
//!    no type changes or [`MAX_ROUNDS`] rounds ran.
//!
//! Types that came from the lattice passes or from debug info are never
//! replaced: as in Hex-Rays, a winner replaces a type only when it is
//! strictly less unknown. A winner that rests on weak evidence is marked
//! partial; a later round may replace it with a winner backed by strong
//! evidence.

mod ballot;
mod evidence;

use std::collections::{BTreeMap, BTreeSet};

use unlace_ir::DataLayout;
use unlace_ir::ssa::{PrimitiveType, SsaFunction, SsaVarnode};

pub use ballot::{Ballot, Candidate, Verdict, unknownness};
pub use evidence::{Edge, EdgeSet, Hints, Sign, Trust, Weight};

use crate::pass::{Pass, PassError, PassPhase};

/// Upper bound on voting rounds (the Hex-Rays retype loop, `sub_2523C0`).
pub const MAX_ROUNDS: usize = 10;

pub struct TypeVotePass;

impl Pass for TypeVotePass {
    fn name(&self) -> &str {
        "TypeVote"
    }

    fn phase(&self) -> PassPhase {
        PassPhase::TypeRecovery
    }

    fn run(&self, func: &mut SsaFunction) -> Result<bool, PassError> {
        Ok(vote_types(func).changed > 0)
    }
}

/// What one [`vote_types`] run did.
#[derive(Clone, Copy, Debug, Default, PartialEq, Eq)]
pub struct VoteSummary {
    pub rounds: usize,
    /// Varnodes whose type was set or upgraded.
    pub changed: usize,
    /// Varnodes left typed only by weak evidence.
    pub partial: usize,
}

/// How a varnode's current type is treated by the vote.
#[derive(Clone, Copy, Debug, PartialEq, Eq)]
enum Standing {
    /// Typed by debug info or a signature: never voted. A declared type
    /// without a primitive form (a named type) is no evidence either.
    Declared(Option<PrimitiveType>),
    /// Typed by an earlier pass or a strong winner: never voted.
    Typed(PrimitiveType),
    /// Typed by a weak winner: evidence for others, revoted every round.
    Partial(PrimitiveType),
    /// No type yet.
    Untyped,
}

impl Standing {
    fn ty(self) -> Option<PrimitiveType> {
        match self {
            Standing::Declared(ty) => ty,
            Standing::Typed(ty) | Standing::Partial(ty) => Some(ty),
            Standing::Untyped => None,
        }
    }

    fn is_open(self) -> bool {
        matches!(self, Standing::Partial(_) | Standing::Untyped)
    }

    /// Penalty a winner must beat to replace the current type (Hex-Rays
    /// `sub_2A3780` step 6: the old unknownness, plus one when partial).
    fn penalty(self) -> u32 {
        match self {
            Standing::Untyped => u32::MAX,
            Standing::Partial(ty) => unknownness(ty) + 1,
            Standing::Declared(_) => 0,
            Standing::Typed(ty) => unknownness(ty),
        }
    }
}

/// Run the weighted vote on `func` and write the winners to `var_types`.
pub fn vote_types(func: &mut SsaFunction) -> VoteSummary {
    let edges = EdgeSet::collect(func);
    let pointer_size = DataLayout::for_arch(func.arch).pointer_size;
    let declared: BTreeSet<SsaVarnode> = func.composite_var_types.keys().copied().collect();
    let mut partial: BTreeSet<SsaVarnode> = BTreeSet::new();
    let mut summary = VoteSummary::default();

    for round in 0..MAX_ROUNDS {
        summary.rounds = round + 1;
        let standing = |sv: &SsaVarnode| {
            let ty = func
                .var_types
                .get(sv)
                .copied()
                .filter(|&ty| ty != PrimitiveType::Unknown);
            match ty {
                _ if declared.contains(sv) => Standing::Declared(ty),
                None => Standing::Untyped,
                Some(ty) if partial.contains(sv) => Standing::Partial(ty),
                Some(ty) => Standing::Typed(ty),
            }
        };
        let ballots = collect_ballots(&edges, pointer_size, standing);

        let mut changes: Vec<(SsaVarnode, Verdict)> = Vec::new();
        for (sv, ballot) in &ballots {
            let hints = edges.hints.get(sv).copied().unwrap_or_default();
            let Some(verdict) = ballot.decide(hints) else {
                continue;
            };
            if verdict.penalty < standing(sv).penalty() {
                changes.push((*sv, verdict));
            }
        }
        if changes.is_empty() {
            break;
        }
        for (sv, verdict) in changes {
            tracing::debug!(
                target: "unlace::type_vote",
                round,
                var = ?sv,
                ty = ?verdict.ty,
                weak = verdict.is_weak(),
                "decide"
            );
            func.var_types.insert(sv, verdict.ty);
            if verdict.is_weak() {
                partial.insert(sv);
            } else {
                partial.remove(&sv);
            }
            summary.changed += 1;
        }
    }
    summary.partial = partial.len();
    tracing::debug!(
        target: "unlace::type_vote",
        function = %func.function.name,
        rounds = summary.rounds,
        changed = summary.changed,
        partial = summary.partial,
        edges = edges.edges.len(),
        "summary"
    );
    summary
}

/// Turn every edge with one open side and one typed side into a vote for
/// the open side.
fn collect_ballots(
    edges: &EdgeSet,
    pointer_size: u8,
    standing: impl Fn(&SsaVarnode) -> Standing,
) -> BTreeMap<SsaVarnode, Ballot> {
    let mut ballots: BTreeMap<SsaVarnode, Ballot> = BTreeMap::new();
    let mut vote = |sv: SsaVarnode, ty: PrimitiveType, votes: Weight, weak: bool| {
        ballots
            .entry(sv)
            .or_insert_with(|| Ballot::new(sv.base.size, pointer_size))
            .vote(ty, votes, weak);
    };
    for (&edge, &weight) in &edges.edges {
        match edge {
            Edge::Is(sv, ty) => {
                if standing(&sv).is_open() {
                    vote(sv, ty, weight, false);
                }
            }
            Edge::Same(a, b) | Edge::Compared(a, b) => {
                let compared = matches!(edge, Edge::Compared(..));
                for (target, source) in [(a, b), (b, a)] {
                    if !standing(&target).is_open() {
                        continue;
                    }
                    let from = standing(&source);
                    let Some(ty) = from.ty() else {
                        continue;
                    };
                    let mut votes = weight;
                    if matches!(from, Standing::Declared(_)) {
                        votes += Trust::Declared.weight();
                    }
                    let weak = compared || matches!(from, Standing::Partial(_));
                    vote(target, ty, votes, weak);
                }
            }
        }
    }
    ballots
}

#[cfg(test)]
mod tests;
