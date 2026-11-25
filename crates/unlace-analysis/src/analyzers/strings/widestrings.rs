//! (unlace `widestrings`) The 2-byte width of [`super::StringLiteralPass`].
//!
//! # The gap
//!
//! Ghidra's `StringsAnalyzer` has an `allCharWidths` setting; unlace ported only
//! its 1-byte arm and said so ("UTF-16/32 is a documented seam, skipped"). Read
//! at 1-byte width a UTF-16LE literal is a ONE-CHARACTER string: `L"ntdll.dll"`
//! is `6e 00 74 00 …`, whose first NUL closes the run after `n`. Nothing plants
//! data there (a 1-char run is below the minimum length), so the constant keeps
//! whatever `char *` the type lattice gave it and the printer reads to the same
//! NUL — which is why every wide Windows-API argument rendered as its own first
//! character: `LoadLibraryW("n")`, `FindWindowW("O",0)`. On an anti-debugging
//! routine that is the whole content of the check.
//!
//! # The width
//!
//! [`scan_utf16_run`] is the 1-byte `MinLengthCharSequenceMatcher` widened to
//! 2-byte little-endian code units, not a different matcher: the same
//! [`super::is_string_char`] recognizer over each unit's low byte, the same
//! require-NUL-end rule, the same minimum length. Units are read on the image's
//! even addresses, so a byte pair straddling two adjacent literals is never read
//! as one character.
//!
//! The two widths cannot both claim a run: a wide unit demands a zero high byte,
//! so five consecutive 1-byte-charset bytes never occur inside a wide run and a
//! wide run never starts inside an ASCII one. The commit boundary still applies
//! its `occupied` guard to each fact, and commits the ASCII facts first.
//!
//! Scope: UTF-16**LE** whose code units are all in the 1-byte recognizer's
//! charset — the Windows-API case. A big-endian or non-Latin UTF-16 literal is
//! not recovered, exactly as `unlace strings --encoding utf16` does not recover it.

use object::read::{Object, ObjectSection};

use crate::pass::StringFact;

use super::{Run, Termination, is_loaded_initialized, is_string_char};

/// Mirror of the 1-byte [`super::scan_runs`] over 2-byte little-endian code
/// units: a run of units whose high byte is zero and whose low byte is in
/// [`super::is_string_char`], closed by a `0x0000` unit and emitted when it holds
/// at least `min_len` units. `term` is the same require-NUL-end rule at this
/// width — under [`Termination::Any`] a run closed by an ordinary unit, or by the
/// end of the region, is a text run too.
///
/// A [`Run`]'s `visible_len` is in BYTES at both widths (`units * 2` here), so one
/// struct describes both scans; the caller divides by the character size to get
/// the code-unit count.
pub(crate) fn scan_utf16_runs(
    data: &[u8],
    vma: u64,
    min_len: usize,
    term: Termination,
) -> Vec<Run> {
    let mut out = Vec::new();
    let mut i = (vma % 2) as usize;
    let mut run_start: Option<usize> = None;
    let close = |out: &mut Vec<Run>, start: usize, end: usize, nul: bool| {
        let visible_len = end - start;
        if visible_len / 2 >= min_len && (nul || term == Termination::Any) {
            out.push(Run {
                addr: vma + start as u64,
                visible_len,
                nul_terminated: nul,
            });
        }
    };
    while i + 1 < data.len() {
        let (lo, hi) = (data[i], data[i + 1]);
        if hi == 0 && is_string_char(lo) {
            if run_start.is_none() {
                run_start = Some(i);
            }
            i += 2;
            continue;
        }
        if let Some(start) = run_start.take() {
            close(&mut out, start, i, lo == 0 && hi == 0);
        }
        i += 2;
    }
    if let Some(start) = run_start {
        close(&mut out, start, i, false);
    }
    out
}

/// The pass's own 2-byte matcher: [`scan_utf16_runs`] under require-NUL-end.
///
/// The emitted `len` is the BYTE span including the terminator (`(units+1) * 2`),
/// so the commit boundary derives the array element count as `len / 2`.
pub(crate) fn scan_utf16_run(data: &[u8], vma: u64, min_len: usize) -> Vec<StringFact> {
    scan_utf16_runs(data, vma, min_len, Termination::Nul)
        .into_iter()
        .map(|r| StringFact {
            addr: r.addr,
            len: (r.visible_len + 2) as u32,
        })
        .collect()
}

/// The 2-byte analog of [`super::scan_strings`]: walk the loaded+initialized
/// sections and emit a [`StringFact`] per UTF-16LE literal, over exactly the
/// address set the ASCII half scans.
pub fn scan_wide_strings(file: &object::File, min_len: usize) -> Vec<StringFact> {
    let mut out = Vec::new();
    for sec in file.sections() {
        if !is_loaded_initialized(&sec) {
            continue;
        }
        let data = match sec.data() {
            Ok(d) if !d.is_empty() => d,
            _ => continue,
        };
        out.extend(scan_utf16_run(data, sec.address(), min_len));
    }
    out
}

#[cfg(test)]
mod tests;
