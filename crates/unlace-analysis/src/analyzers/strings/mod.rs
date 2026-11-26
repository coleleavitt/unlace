//! String-literal detection — the unlace analog of Ghidra's `StringsAnalyzer`
//! ("ASCII Strings"), `Ghidra/Features/Base/.../plugin/core/string/StringsAnalyzer.java`.
//!
//! ## Why this lives in unlace
//!
//! unlace ports Ghidra's C++ *decompiler*; the detection of a NUL-terminated string
//! at a data address (and the `char[N]` type it gets) is done by Ghidra's Java
//! *analyzer* tier, which the port never carried over. Without it a constant
//! pointer into `.rodata` (e.g. `0x400915`) prints as a bare integer instead of
//! the literal `"Username: "`. This pass detects the strings and the commit seam
//! (`unlace-console`'s `commit_analysis_output`) places a typelocked `char[N]` data
//! symbol at each, so the engine+printer (already ported) can render the literal.
//!
//! ## Algorithm (faithful to `StringsAnalyzer` defaults)
//!
//! - **Scan set**: `getLoadedAndInitializedAddressSet` ∩ accessible blocks — i.e.
//!   allocated + initialized sections (`SHF_ALLOC`, not `.bss`). This is `.rodata`,
//!   `.data`, `.text`, … — NOT only read-only. See [`scan_strings`].
//! - **`minStringLength`** = **4** for ASCII; **`requireNullEnd`** = **true**;
//!   **`startAlignment`** = **1**. The separate UTF-16 arm retains Ghidra's
//!   length-5 default.
//! - **Char set** (`AsciiCharSetRecognizer.contains`): `0x20..=0x7e || \r || \n ||
//!   \t`. See [`is_string_char`].
//! - **Matcher** (`MinLengthCharSequenceMatcher`): a run of in-charset bytes ended
//!   by a NUL is null-terminated; ended by any other out-of-charset byte is
//!   rejected (since `requireNullEnd`). The NUL is NOT counted toward the minimum
//!   length. Emit if `visible_len >= min_len`. See [`scan_run`].
//!
//! The pass is always `requireNullEnd`, because the markup it commits is a
//! `char[N]`. The read-only inventory behind `unlace strings` runs the same matcher
//! under a caller-chosen [`Termination`] — see [`unlace_stringinv`].
//!
//! ## LOSS vs Ghidra (documented divergence)
//!
//! Ghidra additionally scores each candidate with an n-gram trigram model
//! (`StringModel.sng` / `NGramUtils`) to reject false positives (random
//! printable runs that are not real text). That model file is **not in the tree**
//! and is **not portable**, so this pass OMITS it and substitutes the weaker
//! "printable + NUL-terminated + min-len-4" test. The effect is *over*-acceptance
//! relative to Ghidra (a random printable run that happens to be NUL-terminated
//! and ≥4 chars is accepted) — harmless for real string literals, which all pass.
//! Recorded in `docs/missing-analyses.md` / `docs/history/analysis-port-log.md`.

pub mod panicloc;
pub mod ptrslot;
pub mod strcodelen;
pub mod stringinv;
pub mod strrecords;
pub mod utf8strings;
pub mod widestrings;
pub mod widestrings32;

use object::SectionKind;
use object::read::{Object, ObjectSection};

use crate::pass::{AnalysisCtx, AnalysisOutput, AnalysisPass, Phase, StringFact};

/// The default minimum visible ASCII string length.
pub(crate) const DEFAULT_ASCII_MIN_LEN: usize = 4;
/// The default minimum visible UTF-16 string length (`MinStringLen.LEN_5`).
pub(crate) const DEFAULT_WIDE_MIN_LEN: usize = 5;

/// `AsciiCharSetRecognizer.contains`: a byte is "string content" iff it is a
/// printable ASCII char (`0x20..=0x7e`) or one of CR/LF/TAB. Faithful to the
/// 1-byte (ASCII) recognizer — UTF-16/32 widths are not handled here.
pub(crate) fn is_string_char(b: u8) -> bool {
    (0x20..=0x7e).contains(&b) || b == 0x0d || b == 0x0a || b == 0x09
}

/// How a printable run has to end for the matcher to accept it.
///
/// [`StringLiteralPass`] is always [`Termination::Nul`] — the markup it commits is
/// a `char[N]`, which only a NUL-ended run describes. The relaxed arm exists for
/// the read-only inventory query behind `unlace strings`
/// ([`unlace_stringinv`](self::stringinv)), where the question is "what text is
/// in this image", not "where can a `char[N]` be planted".
#[derive(Clone, Copy, Debug, PartialEq, Eq)]
pub enum Termination {
    /// `StringsAnalyzer.requireNullEnd`: only a NUL closes an accepted run.
    Nul,
    /// Any out-of-charset byte — or the end of the scanned region — closes an
    /// accepted run, which is `strings(1)`'s rule. This is what recovers a
    /// length-prefixed name table (`\x0cout.js\x06std\x12_0x8ec6b3`), whose
    /// entries are separated by their own length byte and never NUL-terminated.
    Any,
}

/// One printable run the matcher located, before any `char[N]` is derived from it.
#[derive(Clone, Copy, Debug, PartialEq, Eq)]
pub struct Run {
    /// VMA of the first character byte.
    pub addr: u64,
    /// Bytes of visible text, terminator excluded.
    pub visible_len: usize,
    /// The run was closed by a NUL, so it is a C string as well as a text run.
    pub nul_terminated: bool,
}

/// Run the `MinLengthCharSequenceMatcher` over one contiguous byte slice mapped at
/// virtual address `vma`, returning every run of in-charset bytes whose visible
/// length is `>= min_len` and whose ending `term` admits.
///
/// The matcher accumulates a run of [`is_string_char`] bytes and closes it on the
/// first byte outside the charset. Under [`Termination::Nul`] only a NUL closes it
/// into a result; under [`Termination::Any`] any out-of-charset byte does, as does
/// running off the end of the slice. The terminator is never counted toward
/// `min_len`.
pub(crate) fn scan_runs(data: &[u8], vma: u64, min_len: usize, term: Termination) -> Vec<Run> {
    let mut out = Vec::new();
    let mut run_start: Option<usize> = None;
    let close = |out: &mut Vec<Run>, start: usize, end: usize, nul: bool| {
        let visible_len = end - start;
        if visible_len >= min_len && (nul || term == Termination::Any) {
            out.push(Run {
                addr: vma + start as u64,
                visible_len,
                nul_terminated: nul,
            });
        }
    };
    for (i, &b) in data.iter().enumerate() {
        if is_string_char(b) {
            if run_start.is_none() {
                run_start = Some(i);
            }
            continue;
        }
        // Out-of-charset byte: closes the current run (if any).
        if let Some(start) = run_start.take() {
            close(&mut out, start, i, b == 0);
        }
    }
    // A run that reaches the end of the slice has no terminator at all, so it is
    // a text run but never a C string.
    if let Some(start) = run_start {
        close(&mut out, start, data.len(), false);
    }
    out
}

/// The pass's own matcher: [`scan_runs`] under `requireNullEnd`, as a
/// [`StringFact`] per hit.
///
/// The NUL is not counted toward `min_len`, but it *is* counted in the emitted
/// `len` (the `char[N]` array length = visible_len + 1).
pub(crate) fn scan_run(data: &[u8], vma: u64, min_len: usize) -> Vec<StringFact> {
    scan_runs(data, vma, min_len, Termination::Nul)
        .into_iter()
        .map(|r| StringFact {
            addr: r.addr,
            len: (r.visible_len + 1) as u32,
        })
        .collect()
}

/// Is `sec` part of the loaded+initialized image — i.e. worth scanning for a
/// string literal (`getLoadedAndInitializedAddressSet`)?
///
/// This is the per-format arm of the "allocated + initialized" test. The
/// **ELF arm is byte-identical to before** (`SHF_ALLOC`), so ELF output is
/// unchanged. The PE/COFF and Mach-O arms generalize the same notion through the
/// neutral [`SectionKind`] + each format's flag bits, so a PE `.rdata` / Mach-O
/// `__cstring` is scanned and a PE `puts("hello")` recovers its literal.
pub(crate) fn is_loaded_initialized<'a>(sec: &impl ObjectSection<'a>) -> bool {
    // `.bss`-style uninitialized memory has no file content to scan, on every
    // format (the neutral signal `object` derives from the section type/flags).
    if matches!(sec.kind(), SectionKind::UninitializedData) {
        return false;
    }
    match sec.flags() {
        // ELF: SHF_ALLOC (the section occupies memory at runtime) — unchanged, so
        // the default ELF path is byte-identical. A non-allocated section
        // (`.comment`, a non-ALLOC `.symtab`) is not scanned.
        object::SectionFlags::Elf { sh_flags } => {
            const SHF_ALLOC: u64 = 0x2;
            sh_flags & SHF_ALLOC != 0
        }
        // PE / COFF: every section in a PE/COFF image is mapped (there is no
        // SHF_ALLOC analog), so an initialized, readable section is in the loaded
        // image. Skip uninitialized-data sections via the COFF flag too (the
        // `SectionKind` guard above already caught `.bss`).
        object::SectionFlags::Coff { characteristics } => {
            use object::pe::{IMAGE_SCN_CNT_UNINITIALIZED_DATA, IMAGE_SCN_MEM_READ};
            characteristics & IMAGE_SCN_CNT_UNINITIALIZED_DATA == 0
                && characteristics & IMAGE_SCN_MEM_READ != 0
        }
        // Mach-O: section R/W/X permissions live in the enclosing segment, not the
        // section flags — but the section *type* marks the zero-fill (`.bss`)
        // sections, already excluded by the `SectionKind` guard above. So any
        // non-zero-fill Mach-O section with file content is in the loaded image
        // (`__cstring`, `__text`, `__const`, `__data`, …).
        object::SectionFlags::MachO { flags } => {
            use object::macho::{S_GB_ZEROFILL, S_ZEROFILL, SECTION_TYPE};
            let sec_type = flags & SECTION_TYPE;
            sec_type != S_ZEROFILL && sec_type != S_GB_ZEROFILL
        }
        // Any other format flag set: be conservative and skip (no string scan).
        _ => false,
    }
}

/// Scan every allocated + initialized section of `file` for NUL-terminated ASCII
/// strings ≥ `min_len` visible chars (`getLoadedAndInitializedAddressSet`).
///
/// Included iff the section is in the loaded+initialized image
/// ([`is_loaded_initialized`]) and its `data()` is non-empty: `.bss`
/// ([`SectionKind::UninitializedData`]) and any non-loaded metadata section is
/// skipped. The string addresses are `section_vma + run_start`. Format-agnostic
/// (ELF/PE/COFF/Mach-O), with the ELF path byte-identical to before.
pub(crate) fn scan_strings(
    file: &object::File,
    min_len: usize,
    code_rule: bool,
) -> Vec<StringFact> {
    let mut out = Vec::new();
    for sec in file.sections() {
        if !is_loaded_initialized(&sec) {
            continue;
        }
        let data = match sec.data() {
            Ok(d) if !d.is_empty() => d,
            _ => continue,
        };
        let mut found = scan_run(data, sec.address(), min_len);
        if code_rule && sec.kind() == SectionKind::Text {
            found.retain(|f| {
                code_section_string(data, (f.addr - sec.address()) as usize, f.len as usize - 1)
            });
        }
        out.extend(found);
    }
    out
}

/// (unlace `codestrings`) IDA's final-pass rule for a string inside code: a run
/// of at least 17 bytes (16 visible plus the NUL), or of at least 5 (4 visible
/// plus the NUL) that starts right after one to three zero bytes, the padding a
/// compiler puts before a string it places among instructions, or right after
/// an x86 `call rel32` (plus up to three `nop`/zero bytes) that jumps past it:
/// the call-over-data idiom, whose return address points at the string.
/// Instruction bytes that happen to spell `D$x%` before a zero byte are none.
pub(crate) fn code_section_string(data: &[u8], at: usize, visible: usize) -> bool {
    if visible >= 16 {
        return true;
    }
    let zeros = data[..at]
        .iter()
        .rev()
        .take(4)
        .take_while(|&&b| b == 0)
        .count();
    visible >= 4 && ((1..=3).contains(&zeros) || called_over(data, at, visible))
}

/// Does a `call rel32` end at most three `nop`/zero bytes before `at` and land
/// past the run's NUL?
fn called_over(data: &[u8], at: usize, visible: usize) -> bool {
    let pad = data[..at]
        .iter()
        .rev()
        .take(3)
        .take_while(|&&b| b == 0 || b == 0x90)
        .count();
    (0..=pad).any(|skip| {
        let Some(end) = at.checked_sub(skip) else {
            return false;
        };
        let Some(call) = end.checked_sub(5) else {
            return false;
        };
        if data[call] != 0xe8 {
            return false;
        }
        let rel = i32::from_le_bytes([
            data[call + 1],
            data[call + 2],
            data[call + 3],
            data[call + 4],
        ]);
        (end as i64 + i64::from(rel)) > (at + visible) as i64
    })
}

/// Port of `StringsAnalyzer` ("ASCII Strings"): detect NUL-terminated ASCII
/// string literals in the loaded+initialized image and emit a [`StringFact`]
/// (a `char[N]` data object) per find.
///
/// (unlace `widestrings`) Also emits the 2-byte width — `StringsAnalyzer`'s
/// `allCharWidths` arm — into [`AnalysisOutput::wide_strings`], where each fact
/// becomes a `wchar2[N]` instead. See [`unlace_widestrings`].
///
/// (unlace) A run that starts on a pointer slot holding an address of the image is
/// a table entry, not text, and is not emitted. See [`unlace_ptrslot`].
pub struct StringLiteralPass {
    /// Minimum visible ASCII string length.
    pub min_len: usize,
    /// Minimum visible UTF-16 string length.
    pub wide_min_len: usize,
}

impl Default for StringLiteralPass {
    fn default() -> Self {
        StringLiteralPass {
            min_len: DEFAULT_ASCII_MIN_LEN,
            wide_min_len: DEFAULT_WIDE_MIN_LEN,
        }
    }
}

impl AnalysisPass for StringLiteralPass {
    fn phase(&self) -> Phase {
        Phase::P1
    }

    fn id(&self) -> &'static str {
        "strings"
    }

    fn run(&self, ctx: &AnalysisCtx) -> AnalysisOutput {
        let slots = ptrslot::PointerSlots::new(ctx.file);
        let mut strings = scan_strings(
            ctx.file,
            self.min_len,
            unlace_decomp::loadoptions::codestrings_enabled(),
        );
        strings.retain(|fact| !slots.holds_address(fact.addr));
        AnalysisOutput {
            strings,
            wide_strings: widestrings::scan_wide_strings(ctx.file, self.wide_min_len),
            ..Default::default()
        }
    }
}

#[cfg(test)]
mod tests;
