//! Which words inside a code listing are a **literal pool**, not instructions.
//!
//! On a fixed-width RISC target a constant that will not fit an immediate is
//! parked in `.text` next to the code that uses it and loaded PC-relatively.
//! `main` in the `1337ARM` crackme ends
//!
//! ```text
//!   0x8440  10309fe5  ldr r3,[0x8458]
//!   ...
//!   0x8454  10a89de8  ldmia sp,{r4,r11,sp,pc}
//!   0x8458  39050000  andeq r0,r0,r9, lsr r5
//! ```
//!
//! — and that last row is a lie. `0x8458` is the constant `0x539` (1337), the
//! answer the program compares against; nothing executes it, and an RE agent
//! reading the listing for the success value is handed a bitwise-and instead.
//! Every disassembler an agent would otherwise fall back to renders it as a
//! data word.
//!
//! ## The evidence is inside the listing
//!
//! A pool word is not guessed at here, it is **proved by the range's own
//! instructions**: some instruction in the listed range spells the address out
//! and reads it ([`ConsoleProgram::fixed_refs_at`](crate::engine::ConsoleProgram::fixed_refs_at)),
//! and no instruction in the range names it as a branch target. That makes the
//! rule self-limiting in a way a caller can predict and steer: listing
//! `0x8458-0x845c` on its own contains no such load, so the word decodes as it
//! always did, and a caller who wants the raw decode of a pool word has that as
//! the escape hatch.
//!
//! ## What it refuses
//!
//! Each refusal is a way this could otherwise fabricate data where there is
//! code:
//!
//! * a target in a **writable** section — a GOT slot is read by address too, and
//!   a writable `.text` is a packer, whose "pool word" is very likely code — or
//!   one with a function symbol installed on it, which is code by declaration;
//! * an **unaligned** target, or a width that is not 1/2/4/8 — a real pool word
//!   is a naturally-aligned scalar. The width is the width of the ACCESS, which
//!   a `LOAD`'s address varnode does not carry (it is pointer-sized whatever it
//!   reads), so `ldrh r0,[0x1003c]` folds nothing: two bytes do not tile the
//!   four-byte row the slot decoded as;
//! * a target that any instruction in the range **branches to**, which is a
//!   label whatever else reads it;
//! * a target that does not fall on a decoded instruction boundary, or whose
//!   width does not tile a whole number of decoded rows. Folding only on an
//!   exact tiling is what keeps the rest of the listing byte-for-byte where it
//!   was: no address after a folded word can shift, so a false positive costs
//!   one mis-rendered row and never a re-aligned listing.
//! * the range's own **first** address, which is what the caller asked to see
//!   instructions at.

use std::collections::{BTreeMap, BTreeSet};

/// A decoded row's extent, in listing order: `(address, size)`.
pub(crate) type Boundary = (u64, u64);

/// The widths a literal pool word is spelled in.
fn width_is_scalar(width: u32) -> bool {
    matches!(width, 1 | 2 | 4 | 8)
}

/// The pool words a listing's own evidence proves, as `address -> width`.
///
/// `rows` are the decoded extents in address order, `reads` every
/// `(address, width)` the range's instructions read at a fixed address,
/// `flow_targets` every address they branch or call to, `span` the listed
/// `[lo, hi)`, and `is_pool_slot` whether the program allows a pool word to live
/// at an address at all.
pub(crate) fn pool_words(
    rows: &[Boundary],
    reads: &[(u64, u32)],
    flow_targets: &[u64],
    span: (u64, u64),
    is_pool_slot: &dyn Fn(u64) -> bool,
) -> BTreeMap<u64, u64> {
    let labels: BTreeSet<u64> = flow_targets.iter().copied().collect();
    let starts: BTreeMap<u64, usize> = rows
        .iter()
        .enumerate()
        .map(|(i, (addr, _))| (*addr, i))
        .collect();
    let mut out = BTreeMap::new();
    for &(addr, width) in reads {
        if !width_is_scalar(width) {
            continue;
        }
        let width = u64::from(width);
        if addr % width != 0 {
            continue;
        }
        if addr <= span.0 || addr.saturating_add(width) > span.1 {
            continue;
        }
        if labels.contains(&addr) || !is_pool_slot(addr) {
            continue;
        }
        if !tiles_whole_rows(rows, &starts, &labels, addr, width) {
            continue;
        }
        out.insert(addr, width);
    }
    out
}

/// Do the decoded rows starting at `addr` cover exactly `width` bytes, each
/// starting where the one before it ends, with no branch target among the rows
/// after the first? A `--follow` listing can hold two overlapping readings of
/// the same bytes, and only the contiguous ones are what the word's bytes tile.
fn tiles_whole_rows(
    rows: &[Boundary],
    starts: &BTreeMap<u64, usize>,
    labels: &BTreeSet<u64>,
    addr: u64,
    width: u64,
) -> bool {
    let Some(&first) = starts.get(&addr) else {
        return false;
    };
    let mut covered = 0u64;
    for (i, &(at, size)) in rows.iter().enumerate().skip(first) {
        if i > first && (labels.contains(&at) || at != addr + covered) {
            return false;
        }
        covered += size;
        if covered >= width {
            break;
        }
    }
    covered == width
}

/// The GAS directive a `width`-byte data word is spelled with.
pub(crate) fn word_mnemonic(width: u64) -> &'static str {
    match width {
        1 => ".byte",
        2 => ".short",
        8 => ".quad",
        _ => ".word",
    }
}

/// The value `bytes` holds, zero-padded to its own width — the spelling a pool
/// word is read for (`0x00000539`, not `0x539`).
pub(crate) fn word_operand(bytes: &[u8], big_endian: bool) -> String {
    let mut value: u64 = 0;
    if big_endian {
        for &b in bytes {
            value = (value << 8) | u64::from(b);
        }
    } else {
        for &b in bytes.iter().rev() {
            value = (value << 8) | u64::from(b);
        }
    }
    format!("0x{:0width$x}", value, width = bytes.len() * 2)
}

#[cfg(test)]
mod tests;
