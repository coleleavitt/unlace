//! (unlace `slotsplit`) A frame row a narrower printed declaration lives inside
//! is split at the declaration's bounds on the `variables` rows (P6).
//!
//! `framelayout` reports a frame slot at the width an early pass saw it, and a
//! span the early layout merged (several spills, or a buffer's tail) reaches
//! the rows as one `undefinedN`, `undefined16` or `undefined5`, even when the
//! printed C declares a local at a home strictly inside it:
//! `char *v3; // stack - 0x40` within `local_40 undefined16`.  Such a row is
//! cut at the homes of the declarations of [`DeclaredSlots`] lying wholly
//! inside it: each declared piece takes the type its declarations spell
//! ([`DeclaredSlots::piece_type`]), and each gap between them stays
//! `undefinedK` at its own offset and width.
//!
//! A row of a scalar's width (1, 2, 4 or 8 bytes) may be one value the type
//! system narrowed, so only a pointer or floating-point declaration splits it;
//! a row of any other width is never one scalar's slot and splits at every
//! declaration inside.  Nothing is split where two pieces would overlap; no
//! piece or gap starts at an offset another row, or a piece already cut from
//! another row, starts at, and a gap ends where such a row starts.  Only rows
//! still width-only (not typed by `slotreport` or `slotptr`) are split.  Every
//! piece after a row's first is marked `split_piece`, so the rows without the
//! mark are the rows reported before the split.
//!
//! Read from the printer after the `print_c` of the same function: nothing here
//! feeds the IR or the emitted C.

use std::collections::HashMap;

use crate::funcreport::VarInfo;
use crate::slotreport::DeclaredSlots;

/// Replace each row of `out` listed in `candidates` (width-only frame rows)
/// with its pieces, where declarations lie inside it.  The offsets the rows
/// start at, and those of every piece already cut, are taken: no piece or gap
/// starts at one, and a gap ends at the first one inside it, so two
/// overlapping rows never both report a piece at one offset and a gap never
/// runs over a row that starts inside it.
pub fn split_rows(slots: &DeclaredSlots, out: &mut Vec<VarInfo>, candidates: &[usize]) {
    let mut starts: HashMap<i64, usize> = HashMap::new();
    for off in out.iter().filter_map(|v| v.stack_offset) {
        *starts.entry(off).or_default() += 1;
    }
    let mut replaced: Vec<(usize, Vec<VarInfo>)> = Vec::new();
    for &i in candidates {
        let row = &out[i];
        let Some(lo) = row.stack_offset else { continue };
        let hi = lo + row.size;
        let taken = |x: i64| starts.get(&x).copied().unwrap_or(0) > usize::from(x == lo);
        let committed_only = matches!(row.size, 1 | 2 | 4 | 8);
        let pieces: Vec<(i64, i64, String)> = slots
            .homes_within(lo, hi)
            .into_iter()
            .filter(|&(off, _)| !taken(off))
            .filter_map(|(off, size)| {
                slots
                    .piece_type(off, size, committed_only)
                    .map(|t| (off, size, t))
            })
            .collect();
        if pieces.is_empty() || pieces.windows(2).any(|p| p[0].0 + p[0].1 > p[1].0) {
            continue;
        }
        let gap = |from: i64, to: i64| {
            let end = starts
                .keys()
                .copied()
                .filter(|&x| from < x && x < to)
                .min()
                .unwrap_or(to);
            (!taken(from)).then(|| piece(row, from, end - from, format!("undefined{}", end - from)))
        };
        let mut rows = Vec::new();
        let mut cur = lo;
        for (off, size, type_name) in pieces {
            if off > cur {
                rows.extend(gap(cur, off));
            }
            rows.push(piece(row, off, size, type_name));
            cur = off + size;
        }
        if cur < hi {
            rows.extend(gap(cur, hi));
        }
        for (n, r) in rows.iter_mut().enumerate() {
            r.split_piece = n > 0;
            if let Some(off) = r.stack_offset.filter(|&off| off != lo) {
                *starts.entry(off).or_default() += 1;
            }
        }
        replaced.push((i, rows));
    }
    for (i, rows) in replaced.into_iter().rev() {
        out.splice(i..=i, rows);
    }
}

/// The piece of frame row `row` at `off`, `size` bytes wide: the row's own name
/// where it starts the row, else the frame's name for that offset.
fn piece(row: &VarInfo, off: i64, size: i64, type_name: String) -> VarInfo {
    let name = if Some(off) == row.stack_offset {
        row.name.clone()
    } else if off < 0 {
        format!("local_{:x}", -off)
    } else {
        format!("stack_{off:x}")
    };
    VarInfo {
        name,
        type_name,
        stack_offset: Some(off),
        size,
        is_param: false,
        arg_index: None,
        line_numbers: Vec::new(),
        addresses: Vec::new(),
        split_piece: false,
        storage: Vec::new(),
    }
}

#[cfg(test)]
mod tests;
