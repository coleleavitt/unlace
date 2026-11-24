//! Evidence-weighted type for a local whose uses disagree (unlace `lvarvote`, P5).
//!
//! `get_local_type` (`coreaction_infertypes.rs`) seeds a Varnode's temporary type from
//! the op that writes it and from every op that reads it, and folds those votes by
//! `Datatype::type_order`: the most specific vote wins, and the first one in order
//! wins a tie. A local that a pointer-width store and two integer reads disagree
//! about therefore takes whichever vote is most specific, however few uses back it.
//!
//! Hex-Rays' ballot (original unlace `type_vote/ballot.rs`) decides the same
//! conflict by evidence instead: a candidate with no unknown parts ranks ahead of
//! one with them, then the candidate most of the votes support wins, where a vote
//! supports every candidate it converts to without loss, then the candidate's own
//! vote count, then the first vote seen.
//!
//! With the option on, `weighted_pick` runs over the same votes the fold sees. It
//! returns `None` when every vote is `type_order`-equal, so a local whose uses agree
//! keeps the fold's type exactly. The signed/unsigned split and the pointer-first
//! preference of the original ballot are not ported here: signedness is still
//! decided by `typevote` and by the propagation, and a pointer vote competes on
//! support like any other.
//!
//! Gated by the registered option [`LvarVote`] (option `lvarvote on|off`, shipped
//! `off`); with the option off nothing in this module is reachable.

use std::rc::Rc;

use crate::dtype::{Datatype, type_metatype};

crate::unlace_flag!(
    /// (unlace `lvarvote`) A local whose reads and writes disagree takes the type
    /// most of its votes support (`p5_types/lvarvote.rs`). Default off.
    LvarVote,
    "lvarvote",
    "evidence-weighted local vote",
    unset: false,
    shipped: false
);

/// The winning vote for a local whose votes disagree, or `None` when they all agree
/// (`type_order` 0 against the first vote), so the caller keeps the fold's type.
pub fn weighted_pick(votes: &[Rc<Datatype>]) -> Option<Rc<Datatype>> {
    let first = votes.first()?;
    if votes.iter().all(|t| t.type_order(first).ok() == Some(0)) {
        return None;
    }
    // Group the votes into distinct types: (index of the first vote, vote count).
    let mut groups: Vec<(usize, i32)> = Vec::new();
    for (i, t) in votes.iter().enumerate() {
        match groups
            .iter_mut()
            .find(|(g, _)| votes[*g].type_order(t).ok() == Some(0))
        {
            Some(group) => group.1 += 1,
            None => groups.push((i, 1)),
        }
    }
    let penalty = |g: usize| u32::from(votes[g].get_metatype() == type_metatype::TYPE_UNKNOWN);
    let best = groups.iter().map(|&(g, _)| penalty(g)).min()?;
    let class: Vec<(usize, i32)> = groups
        .iter()
        .copied()
        .filter(|&(g, _)| penalty(g) == best)
        .collect();
    let support = |g: usize| -> i32 {
        class
            .iter()
            .filter(|&&(d, _)| compatible(&votes[g], &votes[d]))
            .map(|&(_, n)| n)
            .sum()
    };
    let &(winner, _) = class
        .iter()
        .max_by_key(|&&(g, n)| (support(g), n, std::cmp::Reverse(g)))?;
    Some(Rc::clone(&votes[winner]))
}

/// Does a vote for `from` also support `to`? The same type does; two integral types of
/// one width do, since signedness has its own vote; nothing else does.
fn compatible(to: &Datatype, from: &Datatype) -> bool {
    if to.type_order(from).ok() == Some(0) {
        return true;
    }
    let integral = |t: &Datatype| {
        matches!(
            t.get_metatype(),
            type_metatype::TYPE_INT | type_metatype::TYPE_UINT | type_metatype::TYPE_BOOL
        )
    };
    integral(to) && integral(from) && to.get_size() == from.get_size()
}
