//! (unlace `utf8strings`) The multi-byte reading of the 1-byte width, for the
//! [`inventory`](super::stringinv::inventory) query.
//!
//! # The gap
//!
//! [`super::is_string_char`] is `AsciiCharSetRecognizer.contains`, so every byte
//! `>= 0x80` ends a run. A literal that opens with any non-ASCII character is
//! therefore reported starting at the byte AFTER its last multi-byte sequence:
//! `_φ( °-°)/ so what was the magical keycombination? ` at 0x2000 is reported as
//! `)/ so what was the magical keycombination? ` at 0x200c. That address is not
//! an address anything in the image refers to, so the row also arrives with zero
//! references and no owning function while `unlace xrefs --to 0x2000` answers one —
//! the reference machinery already knows the literal's true start, and only the
//! reported address is wrong.
//!
//! # The width
//!
//! [`scan_utf8_runs`] is the 1-byte `MinLengthCharSequenceMatcher` with one
//! addition: where the recognizer rejects a byte `>= 0x80`, a well-formed UTF-8
//! sequence starting at that byte is decoded and, if its scalar is not a control
//! character, taken as ONE character of the run. Everything else is the 1-byte
//! matcher's — the same [`super::is_string_char`] recognizer for single bytes,
//! the same [`Termination`] rule, the same minimum length counted in characters.
//!
//! It is a *superset* of the 1-byte scan, not a rival to it: a continuation byte
//! is never in the 1-byte charset, so no accepted sequence can swallow a byte the
//! 1-byte matcher would have taken, and an ill-formed sequence advances one byte
//! and lets the scan continue. Every 1-byte run is therefore a subrange of some
//! run here, which is why [`inventory`](super::stringinv::inventory) runs
//! one 1-byte scan or the other rather than both, and labels each row by what its
//! bytes actually hold.
//!
//! Scope: the **inventory** only. [`super::StringLiteralPass`] still commits
//! exactly the `char[N]` facts it always did, so no emitted C moves.

use super::{Run, Termination, is_string_char};

/// The character at `data[i]`: one in-charset ASCII byte, or one well-formed
/// multi-byte UTF-8 sequence whose scalar is not a control character.
///
/// Returns the byte width consumed. `None` means the byte closes a run — an
/// out-of-charset ASCII byte, a lead byte that no valid sequence follows, a
/// continuation byte on its own, or a scalar the recognizer declines.
fn char_at(data: &[u8], i: usize) -> Option<usize> {
    let b = *data.get(i)?;
    if is_string_char(b) {
        return Some(1);
    }
    // The lead byte fixes the sequence length; `from_utf8` then rejects a bad
    // continuation byte, an overlong encoding, a surrogate and anything past
    // U+10FFFF. 0xc0/0xc1 are overlong lead bytes and never start one.
    let width = match b {
        0xc2..=0xdf => 2,
        0xe0..=0xef => 3,
        0xf0..=0xf4 => 4,
        _ => return None,
    };
    let seq = data.get(i..i.checked_add(width)?)?;
    let c = std::str::from_utf8(seq).ok()?.chars().next()?;
    if c.is_control() {
        return None;
    }
    Some(width)
}

/// Mirror of the 1-byte [`super::scan_runs`] with UTF-8 sequences admitted as
/// characters: accumulate a run of [`char_at`] characters, closed by the first
/// byte that is neither, and emit it when it holds at least `min_len`
/// **characters**. `term` is the same require-NUL-end rule at this reading.
///
/// A [`Run`]'s `visible_len` is in BYTES at every width, so a run here spans more
/// bytes than it holds characters; the caller reads the character count off the
/// decoded text.
pub(crate) fn scan_utf8_runs(data: &[u8], vma: u64, min_len: usize, term: Termination) -> Vec<Run> {
    let mut out = Vec::new();
    let mut run_start: Option<(usize, usize)> = None;
    let close = |start: usize, chars: usize, end: usize, nul: bool, out: &mut Vec<Run>| {
        if chars >= min_len && (nul || term == Termination::Any) {
            out.push(Run {
                addr: vma + start as u64,
                visible_len: end - start,
                nul_terminated: nul,
            });
        }
    };
    let mut i = 0usize;
    while i < data.len() {
        if let Some(width) = char_at(data, i) {
            match &mut run_start {
                Some((_, chars)) => *chars += 1,
                None => run_start = Some((i, 1)),
            }
            i += width;
            continue;
        }
        if let Some((start, chars)) = run_start.take() {
            close(start, chars, i, data[i] == 0, &mut out);
        }
        i += 1;
    }
    if let Some((start, chars)) = run_start {
        close(start, chars, data.len(), false, &mut out);
    }
    out
}

#[cfg(test)]
mod tests;
