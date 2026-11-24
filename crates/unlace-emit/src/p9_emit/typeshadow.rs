//! (unlace `typeshadow`) The signedness vote, re-derived as a constraint solve.
//!
//! [`crate::typeround`] decides a local's signedness by folding every
//! signedness-sensitive reader of its members into one [`Evidence`] verdict. This
//! module asks the same question the TIE way: each high variable carries a set of
//! signedness facts, every reader that demands a signedness adds its fact to the
//! high it reads, and highs joined by a same-sign operator (`COPY`, `MULTIEQUAL`,
//! the same-width arithmetic and bitwise ops) are constrained equal. A connected
//! class of equal highs takes the union of its facts, which is the fixed point of
//! those equalities.
//!
//! [`shadow`] compares each named high's solved class with the vote and classifies
//! the pair as a [`ShadowKind`]. It decides nothing and changes no output: it
//! measures where the two disagree before any vote is replaced.
//!
//! Known limit: pointer-ness is not a lattice here yet, so a pointer that is
//! compared unsigned and offset by a signed index joins both facts and reads as
//! [`Solved::Conflict`].

use std::collections::BTreeMap;

use unlace_base::types::int4;
use unlace_num::opcodes::OpCode;

use crate::context::{HighVariableId, VarnodeId};
use crate::funcdata::Funcdata;
use crate::typeround::{Evidence, vote_for};

const SIGNED: u8 = 1 << 0;
const UNSIGNED: u8 = 1 << 1;

/// The signedness a solved class admits.
#[derive(Clone, Copy, Debug, PartialEq, Eq)]
pub enum Solved {
    /// No reader demands a signedness.
    None,
    /// Every demand reaching the class is signed.
    Signed,
    /// Every demand reaching the class is unsigned.
    Unsigned,
    /// Both signed and unsigned demands reach the class.
    Conflict,
}

impl Solved {
    fn from_bits(bits: u8) -> Solved {
        match bits {
            0 => Solved::None,
            SIGNED => Solved::Signed,
            UNSIGNED => Solved::Unsigned,
            _ => Solved::Conflict,
        }
    }
}

/// The signedness fact a reader places on the value at input `slot`, as a bit.
fn reader_demand(opc: OpCode, slot: int4) -> Option<u8> {
    use OpCode::*;
    match opc {
        CPUI_INT_SLESS | CPUI_INT_SLESSEQUAL | CPUI_INT_SDIV | CPUI_INT_SREM | CPUI_INT_SCARRY
        | CPUI_INT_SBORROW | CPUI_INT_SEXT => Some(SIGNED),
        CPUI_INT_SRIGHT if slot == 0 => Some(SIGNED),
        CPUI_INT_LESS | CPUI_INT_LESSEQUAL | CPUI_INT_DIV | CPUI_INT_REM | CPUI_INT_CARRY
        | CPUI_INT_ZEXT => Some(UNSIGNED),
        CPUI_INT_RIGHT if slot == 0 => Some(UNSIGNED),
        _ => None,
    }
}

/// Whether `opc` passes signedness from its operands to its result (same width, no
/// signedness of its own).
fn same_sign_op(opc: OpCode) -> bool {
    use OpCode::*;
    matches!(
        opc,
        CPUI_COPY
            | CPUI_MULTIEQUAL
            | CPUI_INT_ADD
            | CPUI_INT_SUB
            | CPUI_INT_MULT
            | CPUI_INT_AND
            | CPUI_INT_OR
            | CPUI_INT_XOR
            | CPUI_INT_2COMP
            | CPUI_INT_NEGATE
    )
}

/// How a solved class and the vote compare.
#[derive(Clone, Copy, Debug, PartialEq, Eq)]
pub enum ShadowKind {
    /// The solve and the vote give the same verdict.
    Agree,
    /// The vote stopped at a reader it does not classify.
    VoteVetoed,
    /// The vote found a demand no solved edge reaches.
    SolverMissed,
    /// The solve found a demand the vote does not see.
    VoteMissed,
    /// The solve and the vote name opposite signedness.
    Flip,
}

fn classify(solved: Solved, vote: Evidence) -> ShadowKind {
    match (solved, vote) {
        (Solved::None, Evidence::None)
        | (Solved::Signed, Evidence::Signed)
        | (Solved::Unsigned, Evidence::Unsigned)
        | (Solved::Conflict, Evidence::Veto) => ShadowKind::Agree,
        (_, Evidence::Veto) => ShadowKind::VoteVetoed,
        (Solved::None, _) => ShadowKind::SolverMissed,
        (_, Evidence::None) => ShadowKind::VoteMissed,
        _ => ShadowKind::Flip,
    }
}

/// One named high: its solved class and the vote the printer would use for it.
#[derive(Clone, Copy, Debug, PartialEq, Eq)]
pub struct ShadowRow {
    pub high: HighVariableId,
    pub solved: Solved,
    pub vote: Evidence,
}

impl ShadowRow {
    pub fn kind(&self) -> ShadowKind {
        classify(self.solved, self.vote)
    }
}

/// The per-function comparison, in the order the high bank holds its highs.
#[derive(Debug, Default)]
pub struct ShadowReport {
    pub rows: Vec<ShadowRow>,
}

impl ShadowReport {
    pub fn count(&self, kind: ShadowKind) -> usize {
        self.rows.iter().filter(|r| r.kind() == kind).count()
    }
}

/// Solve the signedness constraints of every high in `fd` and compare each named high
/// with [`vote_for`].  Unnamed highs take part in the solve, because the implied
/// expressions they print into carry the facts to the named highs.
pub fn shadow(fd: &Funcdata) -> ShadowReport {
    let nodes: Vec<HighVariableId> = fd.high_bank().iter().map(|(id, _)| id).collect();
    let index: BTreeMap<HighVariableId, usize> = nodes
        .iter()
        .copied()
        .enumerate()
        .map(|(i, id)| (id, i))
        .collect();
    let n = nodes.len();
    let node_of = |vn: VarnodeId| -> Option<usize> {
        let high = fd.vbank().get(vn)?.get_high()?;
        index.get(&high).copied()
    };

    let mut demand = vec![0u8; n];
    let mut adj: Vec<Vec<usize>> = vec![Vec::new(); n];
    for (i, &id) in nodes.iter().enumerate() {
        let Some(h) = fd.high_bank().get(id) else {
            continue;
        };
        for k in 0..h.num_instances() {
            let vn = h.get_instance(k);
            let Some(v) = fd.vbank().get(vn) else {
                continue;
            };
            if let Some(def) = v.get_def().and_then(|op| fd.obank().get(op)) {
                if same_sign_op(def.code()) {
                    let ends: Vec<usize> = def
                        .get_out()
                        .into_iter()
                        .chain((0..def.num_input()).filter_map(|s| def.get_in(s)))
                        .filter_map(|x| node_of(x))
                        .collect();
                    if let Some((&first, rest)) = ends.split_first() {
                        for &e in rest {
                            adj[first].push(e);
                            adj[e].push(first);
                        }
                    }
                }
            }
            for op in v.descend_iter() {
                let Some(reader) = fd.obank().get(op) else {
                    continue;
                };
                for s in 0..reader.num_input() {
                    if reader.get_in(s) != Some(vn) {
                        continue;
                    }
                    if let Some(bits) = reader_demand(reader.code(), s) {
                        demand[i] |= bits;
                    }
                }
            }
        }
    }

    let mut bits = vec![0u8; n];
    let mut seen = vec![false; n];
    for start in 0..n {
        if seen[start] {
            continue;
        }
        seen[start] = true;
        let mut stack = vec![start];
        let mut members = Vec::new();
        while let Some(x) = stack.pop() {
            members.push(x);
            for &y in &adj[x] {
                if !seen[y] {
                    seen[y] = true;
                    stack.push(y);
                }
            }
        }
        let class = members.iter().fold(0u8, |acc, &m| acc | demand[m]);
        for m in members {
            bits[m] = class;
        }
    }

    let rows = nodes
        .iter()
        .enumerate()
        .filter_map(|(i, &id)| {
            if fd.high_bank().get(id)?.unlace_name().is_none() {
                return None;
            }
            Some(ShadowRow {
                high: id,
                solved: Solved::from_bits(bits[i]),
                vote: vote_for(fd, id),
            })
        })
        .collect();
    ShadowReport { rows }
}

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn solved_from_bits_names_each_class() {
        assert_eq!(Solved::from_bits(0), Solved::None);
        assert_eq!(Solved::from_bits(SIGNED), Solved::Signed);
        assert_eq!(Solved::from_bits(UNSIGNED), Solved::Unsigned);
        assert_eq!(Solved::from_bits(SIGNED | UNSIGNED), Solved::Conflict);
    }

    #[test]
    fn signed_compare_demands_signed_and_shift_only_its_operand() {
        assert_eq!(reader_demand(OpCode::CPUI_INT_SLESS, 0), Some(SIGNED));
        assert_eq!(reader_demand(OpCode::CPUI_INT_SRIGHT, 0), Some(SIGNED));
        assert_eq!(reader_demand(OpCode::CPUI_INT_SRIGHT, 1), None);
        assert_eq!(reader_demand(OpCode::CPUI_INT_LESS, 1), Some(UNSIGNED));
        assert_eq!(reader_demand(OpCode::CPUI_INT_ADD, 0), None);
    }

    #[test]
    fn classify_matches_the_vote_and_names_each_gap() {
        assert_eq!(classify(Solved::None, Evidence::None), ShadowKind::Agree);
        assert_eq!(
            classify(Solved::Signed, Evidence::Signed),
            ShadowKind::Agree
        );
        assert_eq!(
            classify(Solved::Conflict, Evidence::Veto),
            ShadowKind::Agree
        );
        assert_eq!(
            classify(Solved::Signed, Evidence::Veto),
            ShadowKind::VoteVetoed
        );
        assert_eq!(
            classify(Solved::None, Evidence::Unsigned),
            ShadowKind::SolverMissed
        );
        assert_eq!(
            classify(Solved::Unsigned, Evidence::None),
            ShadowKind::VoteMissed
        );
        assert_eq!(
            classify(Solved::Signed, Evidence::Unsigned),
            ShadowKind::Flip
        );
        assert_eq!(
            classify(Solved::Conflict, Evidence::Signed),
            ShadowKind::Flip
        );
    }
}
