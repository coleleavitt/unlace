//! (kuna) `ehcold` — an exception-cleanup `.cold` fragment belongs to its owner,
//! not to the function list (P1 code/data partition).
//!
//! GCC moves a function's landing-pad cleanups into its `.cold` partition. Each
//! landing pad inside the owner's FDE is a two-instruction stub
//! (`mov rbx,rax; jmp <cold>`), and the cold fragment, which has its own FDE, is a
//! ladder of `free; call _Unwind_Resume` blocks. The FDE oracle lists that
//! fragment as a function, `coldentry` adds one function per rung, and each
//! decompiles as code that starts from an undefined `rbx` and ends in
//! `_Unwind_Resume()`. On IDA's own `objc.so` 193 of kuna's 657 functions were
//! such rungs. IDA attaches the fragment to its owner as a function tail
//! (`append_func_tail`, `eh_parse` 0x114d0).
//!
//! kuna has no function tails, so the fragment is withheld from the entry set
//! instead. An FDE body `[s, e)` is an EH cold part when
//!
//! 1. it has no function symbol at `s`,
//! 2. every direct `jmp`/`jcc rel32` into it from outside comes from ONE other
//!    FDE body (its owner), and no direct `call rel32` targets it,
//! 3. at least one of those jumps sits in the first 16 bytes of a landing pad
//!    that the owner's LSDA lists.
//!
//! The commit drops every discovered entry in `[s, e)` when the option is on.
//! x86 / x86-64 ELF only (the rel32 encodings are load-bearing).

use object::read::Object;

use crate::pass::{AnalysisCtx, AnalysisOutput, AnalysisPass, Phase};

use super::kuna_coldentry::{containing_body, rel32_branches};
use super::kuna_fdeinterior::scan_fde_bodies;
use super::{executable_sections, existing_function_addrs, scan_eh_frame_landing_pads_owned};

/// How far into a landing pad its jump to the cold part may sit.
const PAD_STUB: u64 = 16;

/// (kuna) The EH cold-fragment pass (`ehcold`), gated at the commit.
pub struct EhColdPass;

impl AnalysisPass for EhColdPass {
    fn phase(&self) -> Phase {
        Phase::P1
    }

    fn id(&self) -> &'static str {
        "ehcold"
    }

    fn run(&self, ctx: &AnalysisCtx) -> AnalysisOutput {
        let file = ctx.file;
        if !matches!(file.format(), object::BinaryFormat::Elf)
            || !matches!(file.architecture(), object::Architecture::X86_64 | object::Architecture::I386)
        {
            return AnalysisOutput::default();
        }
        AnalysisOutput { eh_cold: eh_cold_parts(file, ctx.bytes), ..AnalysisOutput::default() }
    }
}

/// The FDE bodies that are another function's exception-cleanup cold part.
pub fn eh_cold_parts(file: &object::File, bytes: &[u8]) -> Vec<(u64, u64)> {
    let pads = scan_eh_frame_landing_pads_owned(file);
    if pads.is_empty() {
        return Vec::new();
    }
    let bodies = scan_fde_bodies(file);
    let named = existing_function_addrs(file, bytes);
    let execs = executable_sections(file);
    let mut incoming: std::collections::BTreeMap<(u64, u64), Vec<u64>> = std::collections::BTreeMap::new();
    let mut called: Vec<u64> = Vec::new();
    for (vma, _, data) in &execs {
        for (src, target) in rel32_branches(*vma, data) {
            let Some(body) = containing_body(&bodies, target) else { continue };
            if !(body.0 <= src && src < body.1) {
                incoming.entry(body).or_default().push(src);
            }
        }
        called.extend(rel32_calls(*vma, data));
    }
    called.sort_unstable();
    incoming
        .into_iter()
        .filter(|&((s, e), ref srcs)| {
            if named.binary_search(&s).is_ok() || called[called.partition_point(|&c| c < s)..].first().is_some_and(|&c| c < e) {
                return false;
            }
            let Some(owner) = containing_body(&bodies, srcs[0]) else { return false };
            srcs.iter().all(|&src| containing_body(&bodies, src) == Some(owner))
                && srcs.iter().any(|&src| {
                    pads.iter().any(|&(o, pad)| o == owner.0 && pad <= src && src < pad + PAD_STUB)
                })
        })
        .map(|(body, _)| body)
        .collect()
}

/// Every `call rel32` target in the section mapped at `vma`.
fn rel32_calls(vma: u64, data: &[u8]) -> impl Iterator<Item = u64> + '_ {
    (0..data.len()).filter_map(move |i| {
        if data[i] != 0xE8 {
            return None;
        }
        let rel = data.get(i + 1..i + 5)?;
        let rel = i32::from_le_bytes([rel[0], rel[1], rel[2], rel[3]]) as i64;
        Some((vma + i as u64 + 5).wrapping_add_signed(rel))
    })
}

/// Drop every entry inside one of the sorted, disjoint `parts`, its start included.
pub fn suppress_eh_cold_entries(entries: &mut Vec<u64>, parts: &[(u64, u64)]) {
    if parts.is_empty() {
        return;
    }
    entries.retain(|&vma| {
        let idx = parts.partition_point(|&(s, _)| s <= vma);
        !(idx > 0 && vma < parts[idx - 1].1)
    });
}
