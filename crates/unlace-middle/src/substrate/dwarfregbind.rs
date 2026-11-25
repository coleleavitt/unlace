//! (unlace `dwarfscopes`) Where a DWARF register local binds: the reaching
//! write of its register at the start of its location range, found by walking
//! the basic block that holds the start and its single-predecessor chain, and
//! the width the bound symbol takes when that write is wider than the DWARF
//! type (a `char` kept in EBP).

use crate::dtype::type_metatype;

/// How far back the single-predecessor chain is walked.
const MAX_HOPS: usize = 64;

/// One basic block: its address range and its predecessors (block indices).
#[derive(Debug, Clone)]
pub struct BindBlock {
    pub start: u64,
    pub stop: u64,
    pub preds: Vec<usize>,
}

/// One raw write covering the local's storage: its block, its use point and
/// its size in bytes.
#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub struct BindWrite {
    pub block: usize,
    pub at: u64,
    pub size: i32,
}

/// The use point a register local binds at.
#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum BindPoint {
    /// The phi at the start of a block where several values meet.
    Phi(u64),
    /// The write at this index of the candidate list.
    Write(usize),
}

/// The value the register holds at `start`: a block start is that block's phi;
/// otherwise the last covering write before `start` in the block holding it,
/// else the last one in its single predecessor (and so on up the chain), else
/// the phi at the first block on the chain with several predecessors. The
/// entry block with no write (a function input) and an unknown start bind
/// nothing. Among writes at one address, the one of exactly `want` bytes wins,
/// then the narrowest.
pub fn reaching_write(
    blocks: &[BindBlock],
    writes: &[BindWrite],
    start: u64,
    want: i32,
) -> Option<BindPoint> {
    if blocks.iter().any(|b| b.start == start) {
        return Some(BindPoint::Phi(start));
    }
    let mut cur = blocks
        .iter()
        .position(|b| b.start <= start && start <= b.stop)?;
    let mut bound = Some(start);
    let mut seen = vec![false; blocks.len()];
    for _ in 0..MAX_HOPS {
        if std::mem::replace(&mut seen[cur], true) {
            return None;
        }
        if let Some(i) = last_write(writes, cur, bound, want) {
            return Some(BindPoint::Write(i));
        }
        let preds = &blocks[cur].preds;
        match preds.len() {
            0 => return None,
            1 => {
                cur = preds[0];
                bound = None;
            }
            _ => return Some(BindPoint::Phi(blocks[cur].start)),
        }
    }
    None
}

fn last_write(writes: &[BindWrite], block: usize, before: Option<u64>, want: i32) -> Option<usize> {
    let rank = |w: &BindWrite| (w.at, w.size == want, std::cmp::Reverse(w.size));
    writes
        .iter()
        .enumerate()
        .filter(|(_, w)| w.block == block && before.is_none_or(|b| w.at < b))
        .max_by(|(ia, a), (ib, b)| rank(a).cmp(&rank(b)).then(ib.cmp(ia)))
        .map(|(i, _)| i)
}

/// The metatype a local of DWARF metatype `meta` takes when its register write
/// is wider than its type: an integer keeps its signedness, a `bool` or an
/// unsigned enum reads as unsigned, an unknown stays unknown; anything else
/// (a pointer, a float, a record) does not widen.
pub fn widened_metatype(meta: type_metatype) -> Option<type_metatype> {
    match meta {
        type_metatype::TYPE_INT | type_metatype::TYPE_ENUM_INT => Some(type_metatype::TYPE_INT),
        type_metatype::TYPE_UINT | type_metatype::TYPE_BOOL | type_metatype::TYPE_ENUM_UINT => {
            Some(type_metatype::TYPE_UINT)
        }
        type_metatype::TYPE_UNKNOWN => Some(type_metatype::TYPE_UNKNOWN),
        _ => None,
    }
}

#[cfg(test)]
mod tests;
