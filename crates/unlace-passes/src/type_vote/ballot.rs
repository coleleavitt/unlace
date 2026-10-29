//! Per-varnode candidate lists, votes and the winner choice.
//!
//! Mirrors Hex-Rays `sub_2A1180` (collect), `sub_2A3210` / `sub_29DAA0`
//! (choose): candidates are ranked by penalty (unknownness plus weak
//! evidence), then by support (own votes plus the votes of compatible
//! candidates). Signedness is a separate majority vote.

use unlace_ir::ssa::PrimitiveType;

use super::evidence::{Hints, Weight};

/// One candidate type for a varnode.
#[derive(Clone, Copy, Debug, PartialEq, Eq)]
pub struct Candidate {
    pub ty: PrimitiveType,
    pub votes: Weight,
    /// Lower is better: [`unknownness`] of the type plus one for weak
    /// evidence (derived from a varnode that was itself typed weakly).
    pub penalty: u32,
}

/// The winner of one ballot.
#[derive(Clone, Copy, Debug, PartialEq, Eq)]
pub struct Verdict {
    pub ty: PrimitiveType,
    pub penalty: u32,
}

impl Verdict {
    /// Typed only from weak evidence; a later round may replace it.
    pub fn is_weak(self) -> bool {
        self.penalty > unknownness(self.ty)
    }
}

/// How many parts of `ty` are undefined (`sub_32E340`). Placeholders score
/// 1, concrete types 0.
pub fn unknownness(ty: PrimitiveType) -> u32 {
    u32::from(ty == PrimitiveType::Unknown)
}

/// The candidates collected for one varnode of `width` bytes.
#[derive(Clone, Debug)]
pub struct Ballot {
    width: u8,
    pointer_size: u8,
    candidates: Vec<Candidate>,
}

impl Ballot {
    pub fn new(width: u8, pointer_size: u8) -> Self {
        Ballot {
            width,
            pointer_size,
            candidates: Vec::new(),
        }
    }

    /// Add `votes` for `ty`. Types that cannot be held in the varnode's
    /// width are rejected; integers are resized to it first.
    pub fn vote(&mut self, ty: PrimitiveType, votes: Weight, weak: bool) {
        let Some(ty) = self.fit(ty) else {
            return;
        };
        let penalty = unknownness(ty) + u32::from(weak);
        match self
            .candidates
            .iter_mut()
            .find(|c| c.ty == ty && c.penalty == penalty)
        {
            Some(c) => c.votes += votes,
            None => self.candidates.push(Candidate { ty, votes, penalty }),
        }
    }

    fn fit(&self, ty: PrimitiveType) -> Option<PrimitiveType> {
        let width = self.width;
        match ty {
            PrimitiveType::Unknown => None,
            PrimitiveType::Bool => Some(ty),
            PrimitiveType::Int(_) => Some(PrimitiveType::Int(width)),
            PrimitiveType::UnsignedInt(_) => Some(PrimitiveType::UnsignedInt(width)),
            PrimitiveType::Float => (width == 4).then_some(ty),
            PrimitiveType::Double => (width != 4).then_some(ty),
            PrimitiveType::Ptr => (width == self.pointer_size).then_some(ty),
            PrimitiveType::Vector(v) => (v.size() == width).then_some(ty),
        }
    }

    /// Choose the winner, or `None` when no candidate was accepted.
    pub fn decide(&self, hints: Hints) -> Option<Verdict> {
        // Pointer preference: any pointer evidence wins unless a use proves
        // the value is not a pointer.
        let pointers_only =
            !hints.not_pointer && self.candidates.iter().any(|c| c.ty == PrimitiveType::Ptr);
        let eligible: Vec<&Candidate> = self
            .candidates
            .iter()
            .filter(|c| !pointers_only || c.ty == PrimitiveType::Ptr)
            .collect();
        let best_penalty = eligible.iter().map(|c| c.penalty).min()?;
        let class: Vec<&Candidate> = eligible
            .into_iter()
            .filter(|c| c.penalty == best_penalty)
            .collect();
        let support = |c: &Candidate| {
            class
                .iter()
                .filter(|d| compatible(c.ty, d.ty))
                .fold(Weight::default(), |mut sum, d| {
                    sum += d.votes;
                    sum
                })
        };
        let winner = class
            .iter()
            .max_by_key(|c| (support(c), c.votes, informativeness(c.ty)))?;
        Some(Verdict {
            ty: apply_sign(winner.ty, hints),
            penalty: winner.penalty,
        })
    }
}

/// Whether a vote for `from` also supports `to`: a value of type `from`
/// converts to `to` without loss (Hex-Rays' castability test in support
/// counting). Signed and unsigned integers support each other, because
/// signedness has its own vote. A boolean supports an integer, not the
/// reverse.
fn compatible(to: PrimitiveType, from: PrimitiveType) -> bool {
    use PrimitiveType::{Bool, Int, UnsignedInt, Vector};
    match (to, from) {
        (Vector(x), Vector(y)) => x.join(y).is_some(),
        (Int(_) | UnsignedInt(_), Bool | Int(_) | UnsignedInt(_)) => true,
        _ => to == from,
    }
}

/// Final tie-break between candidates with equal support (the role of
/// `score_tinfo` in Hex-Rays): the more informative type wins.
fn informativeness(ty: PrimitiveType) -> u8 {
    match ty {
        PrimitiveType::Unknown => 0,
        PrimitiveType::Bool => 1,
        PrimitiveType::UnsignedInt(_) => 2,
        PrimitiveType::Int(_) => 3,
        PrimitiveType::Float | PrimitiveType::Double => 4,
        PrimitiveType::Vector(_) => 5,
        PrimitiveType::Ptr => 6,
    }
}

/// Apply the signed/unsigned majority to an integer winner; a tie keeps the
/// winner's own signedness.
fn apply_sign(ty: PrimitiveType, hints: Hints) -> PrimitiveType {
    match ty {
        PrimitiveType::Int(w) | PrimitiveType::UnsignedInt(w) => {
            if hints.unsigned > hints.signed {
                PrimitiveType::UnsignedInt(w)
            } else if hints.signed > hints.unsigned {
                PrimitiveType::Int(w)
            } else {
                ty
            }
        }
        other => other,
    }
}
