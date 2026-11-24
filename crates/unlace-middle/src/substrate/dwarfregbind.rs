//! (kuna `dwarfscopes`) Where a DWARF register local binds: the reaching
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
mod tests {
    use super::*;

    fn block(start: u64, stop: u64, preds: &[usize]) -> BindBlock {
        BindBlock {
            start,
            stop,
            preds: preds.to_vec(),
        }
    }

    fn write(block: usize, at: u64, size: i32) -> BindWrite {
        BindWrite { block, at, size }
    }

    #[test]
    fn block_start_is_the_phi() {
        let blocks = [block(0x10, 0x1f, &[]), block(0x20, 0x2f, &[0])];
        assert_eq!(
            reaching_write(&blocks, &[write(0, 0x18, 4)], 0x20, 4),
            Some(BindPoint::Phi(0x20))
        );
    }

    #[test]
    fn a_write_far_back_in_the_block_still_binds() {
        let blocks = [block(0x10, 0x200, &[])];
        let writes = [write(0, 0x14, 4), write(0, 0x40, 4), write(0, 0x180, 4)];
        assert_eq!(
            reaching_write(&blocks, &writes, 0x100, 4),
            Some(BindPoint::Write(1))
        );
    }

    #[test]
    fn the_single_predecessor_chain_is_walked() {
        let blocks = [
            block(0x10, 0x1f, &[]),
            block(0x20, 0x2f, &[0]),
            block(0x30, 0x3f, &[1]),
        ];
        let writes = [write(0, 0x12, 4), write(2, 0x38, 4)];
        assert_eq!(
            reaching_write(&blocks, &writes, 0x34, 4),
            Some(BindPoint::Write(0))
        );
    }

    #[test]
    fn a_merge_on_the_chain_binds_its_phi() {
        let blocks = [
            block(0x10, 0x1f, &[]),
            block(0x20, 0x2f, &[0]),
            block(0x30, 0x3f, &[0, 1]),
        ];
        assert_eq!(
            reaching_write(&blocks, &[write(0, 0x12, 4)], 0x34, 4),
            Some(BindPoint::Phi(0x30))
        );
    }

    #[test]
    fn an_input_or_a_loop_without_a_write_binds_nothing() {
        let entry = [block(0x10, 0x1f, &[])];
        assert_eq!(reaching_write(&entry, &[], 0x14, 4), None);
        let cycle = [block(0x10, 0x1f, &[1]), block(0x20, 0x2f, &[0])];
        assert_eq!(reaching_write(&cycle, &[], 0x14, 4), None);
        assert_eq!(reaching_write(&entry, &[], 0x40, 4), None);
    }

    #[test]
    fn the_exact_width_wins_a_tie_then_the_narrowest() {
        let blocks = [block(0x10, 0x1f, &[])];
        let writes = [write(0, 0x12, 8), write(0, 0x12, 4), write(0, 0x12, 1)];
        assert_eq!(
            reaching_write(&blocks, &writes, 0x18, 4),
            Some(BindPoint::Write(1))
        );
        assert_eq!(
            reaching_write(&blocks, &writes[..2], 0x18, 2),
            Some(BindPoint::Write(1))
        );
    }

    #[test]
    fn only_integer_types_widen() {
        assert_eq!(
            widened_metatype(type_metatype::TYPE_INT),
            Some(type_metatype::TYPE_INT)
        );
        assert_eq!(
            widened_metatype(type_metatype::TYPE_BOOL),
            Some(type_metatype::TYPE_UINT)
        );
        assert_eq!(widened_metatype(type_metatype::TYPE_PTR), None);
        assert_eq!(widened_metatype(type_metatype::TYPE_FLOAT), None);
    }
}
