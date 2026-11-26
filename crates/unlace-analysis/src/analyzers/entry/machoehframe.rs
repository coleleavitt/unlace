//! (unlace `machoehframe`) Mach-O `__eh_frame` FDE function starts.
//!
//! A Mach-O records unwind information compactly in `__unwind_info`, and falls
//! back to a DWARF FDE in `__TEXT,__eh_frame` for a function the compact
//! encoding cannot describe. Each FDE's `pcBegin` is a function start, exactly
//! as on ELF, and the section survives the `strip` that removes
//! `LC_FUNCTION_STARTS`. ELF reads its `.eh_frame` starts in the always-on
//! entry discovery; this pass is the Mach-O arm of the same walk
//! ([`super::scan_eh_frame_starts`]).

use crate::loader::format::{FormatKind, detect};
use crate::pass::{AnalysisCtx, AnalysisOutput, AnalysisPass, Phase};

/// Emit each `__eh_frame` FDE start of a Mach-O as a discovered entry. The
/// commit is gated by `--option machoehframe on|off`.
pub struct MachoEhFrameStartsPass;

impl AnalysisPass for MachoEhFrameStartsPass {
    fn phase(&self) -> Phase {
        Phase::P1
    }

    fn id(&self) -> &'static str {
        "machoehframe"
    }

    fn run(&self, ctx: &AnalysisCtx) -> AnalysisOutput {
        let mut out = AnalysisOutput::default();
        if matches!(detect(ctx.file).map(|f| f.kind()), Ok(FormatKind::MachO)) {
            out.entries = macho_eh_frame_starts(ctx.file);
        }
        out
    }
}

/// The `__eh_frame` FDE starts inside an executable section and not already a
/// function symbol, sorted and deduped.
pub fn macho_eh_frame_starts(file: &object::File) -> Vec<u64> {
    let ptr_size = if object::Object::is_64(file) { 8 } else { 4 };
    let execs = super::executable_sections(file);
    let funcsyms = super::existing_function_addrs_for_file(file);
    let mut out: Vec<u64> = super::scan_eh_frame_starts_sized(file, ptr_size)
        .into_iter()
        .filter(|&vma| {
            super::in_executable_section(&execs, vma) && funcsyms.binary_search(&vma).is_err()
        })
        .collect();
    out.sort_unstable();
    out.dedup();
    out
}

#[cfg(test)]
mod tests;
