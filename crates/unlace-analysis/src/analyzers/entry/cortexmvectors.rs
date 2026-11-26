//! (unlace) `cortexmvectors` — the widened ARM Cortex-M hardware vector-table
//! signature (P1 code/data partition, oracle 6).
//!
//! The shipped signature ([`super::cortexm_vector_table_shipped`]) confirms a table
//! only when it starts a section the *loader* maps executable, its word 0 lands in
//! the architectural SRAM block (`0x2000_0000..=0x3FFF_FFFF`), and its word 1 equals
//! `e_entry`. Measured over the decbench ARM Cortex-M corpus, that signature
//! silently no-ops on the four projects that contribute most of the entry-recall
//! gap:
//!
//! | project | table | why the shipped signature rejects it |
//! |---|---|---|
//! | cleanflight | `.isr_vector` @ `0x0800_0000`, `A`-only, read-only `PT_LOAD` | not loaded executable **and** stack word `0x1000_fff0` (STM32F4 CCM RAM) |
//! | betaflight | `.isr_vector` @ `0x2000_0000` (linked into RAM for runtime relocation), `A`-only, read-only `PT_LOAD` | same two |
//! | crazyflie | `.isr_vector` @ `0x0800_4000` | reset word `0x0801_a811` != `e_entry` `0x0800_41c0` |
//! | nuttx | `.text` @ `0x0800_0000` | reset word `0x0800_0a95` != `e_entry` `0x0800_0189` |
//!
//! All three predicates are category errors. The table is **data the CPU
//! reads** — what has to be executable is what its slots point at, which the
//! harvest already checks — so an `A`-only section in a read-only load is a
//! perfectly ordinary place to link it. STM32F4 (CCM) and `-M7` (TCM) parts put
//! the initial stack at `0x1000_0000`, below the architectural SRAM block. And
//! `e_entry` is the *ELF*'s idea of the start symbol, which a bare-metal link
//! script is free to point somewhere other than the reset vector (nuttx points it
//! at `__start`, crazyflie at the `.text` base).
//!
//! So the widened signature drops all three and leans on the one thing that is
//! genuinely load-bearing: a Cortex-M table is a **run of Thumb handler
//! pointers**. A candidate is confirmed when
//!
//! 1. it starts an *allocated* section (any `SHF_ALLOC`; executable or not),
//! 2. word 0 is a plausible initial stack pointer — SRAM, CCM or TCM, i.e.
//!    `0x1000_0000..=0x3FFF_FFFF`, and
//! 3. the slots from word 1 on yield at least [`MIN_CONFORMING_HANDLERS`] Thumb
//!    handler pointers (odd, inside an executable section) before the run ends.
//!
//! Requirement 3 is what replaces `e_entry`: two conforming words can occur by
//! chance in a `.data` struct, three consecutive ones essentially cannot. It is
//! computed by the *same* harvest loop the oracle then seeds from
//! ([`super::harvest_vector_slots`]), so confirmation and harvest can never
//! disagree.
//!
//! **Monotonic by construction.** [`vector_table`] tries the shipped signature
//! first and only falls back to the widened scan, so every image that resolved a
//! table before resolves the same section, at the same address, with the same
//! harvest. The option can add discovered entries; it can never remove one.
//!
//! ## Wiring, and why the Listing tier is deliberately left alone
//!
//! The widened table ships as its own [`CortexMVectorsPass`] (`id() ==
//! "cortexmvectors"`), NOT as a widening of the always-on `entry_disc` pass: a
//! load-time pass runs before `--option` is applied, so a flag read inside
//! `EntryDiscoveryPass::run` would silently do nothing. The stash-at-load,
//! gate-at-commit shape (`engine.rs::analysis_pass_enabled`) is what makes an
//! output-changing discovery flag observable at all — exactly how `eh_frame_full`
//! and `funcstart_patterns` are wired.
//!
//! The pass emits **entry facts and context paints only**. It deliberately does
//! NOT feed the widened handlers to the Listing tier's recursive-descent walk
//! (`passes::listing_seeds`) nor mirror its region paint into the walk's own
//! `ContextPainter`. Both were tried and measured over the 16-binary Cortex-M
//! corpus (`docs/features/cortexmvectors/analysis.md` §4):
//!
//! | wiring | ground-truth entries recovered | entries LOST |
//! |---|---|---|
//! | entries + paints only | **+96** | **0** |
//! | + the walk's region paint | +86 | 10 |
//! | + walk seeds as well | +44 | 54 |
//!
//! The walk treats an unconditional `B` as same-function flow, so seeding an ISR
//! stub that tail-calls a shared handler makes the walk absorb that handler; its
//! own entry then fails `code_pointer_table_seeds`' `is_undefined` guard and the
//! AIF gap scan, and is dropped. Handing the walk more seeds therefore costs more
//! than it gains until the tail-call split lands. Keeping the pass purely
//! additive also makes "this option never removes an entry" a property of the
//! wiring, not of a heuristic.

use crate::pass::{AnalysisCtx, AnalysisOutput, AnalysisPass, Phase};

use super::{
    CORTEXM_SRAM_HI, CORTEXM_SRAM_LO, executable_sections, harvest_vector_slots,
    in_executable_section, read_u32,
};

/// (unlace) The widened Cortex-M vector-table discovery pass (`cortexmvectors`).
///
/// Emits the reset/exception/IRQ handler pointers of a table the shipped
/// signature rejects, plus the whole-image Thumb (`TMode=1`) region paint that a
/// confirmed table unlocks. Like every other analysis pass it RUNS at load; the
/// **commit** is gated by `--option cortexmvectors on`
/// (`engine.rs::analysis_pass_enabled` → `arch.unlace_options.get::<unlace_decomp::analysisgates::Cortexmvectors>().0`), so a
/// default run computes the facts and commits nothing, leaving the discovery set
/// byte-identical to the shipped oracle.
///
/// Emits nothing at all when the shipped signature already confirmed the table
/// (its facts would duplicate `entry_disc`'s), on a non-ARM object, and on any
/// ARM object without the widened signature — so it is a strict no-op outside
/// bare-metal Cortex-M firmware whose table the shipped oracle misses.
pub struct CortexMVectorsPass;

impl AnalysisPass for CortexMVectorsPass {
    fn phase(&self) -> Phase {
        Phase::P1
    }

    fn id(&self) -> &'static str {
        "cortexmvectors"
    }

    fn run(&self, ctx: &AnalysisCtx) -> AnalysisOutput {
        let mut out = AnalysisOutput::default();
        let file = ctx.file;
        // Nothing to add when the shipped signature already found the table (the
        // always-on `entry_disc` pass emitted these exact facts), nor when the
        // widened scan finds none either.
        if super::cortexm_vector_table_shipped(file).is_some() || widened_scan(file).is_none() {
            return out;
        }
        // The same exec-section / funcsym-skip filtering `collect_entries` applies
        // to every oracle, so this pass cannot introduce an entry the always-on
        // path would have rejected.
        let execs = executable_sections(file);
        let funcsyms = super::existing_function_addrs(file, ctx.bytes);
        let mut entries: Vec<u64> = super::cortexm_vector_entries(file, true)
            .into_iter()
            .filter(|&vma| {
                vma != 0
                    && in_executable_section(&execs, vma)
                    && funcsyms.binary_search(&vma).is_err()
            })
            .collect();
        entries.sort_unstable();
        entries.dedup();
        out.entries = entries;
        out.context_paints = super::cortexm_thumb_paints(file, true);
        out
    }
}

/// Cortex-M tightly-coupled / core-coupled RAM: the `0x1000_0000` block STM32F4
/// (CCM) and the `-M7` TCM parts place a stack in. Contiguous with the
/// architectural SRAM block below it, so together the two cover
/// `0x1000_0000..=0x3FFF_FFFF`.
const CORTEXM_TCM_LO: u64 = 0x1000_0000;
const CORTEXM_TCM_HI: u64 = 0x1FFF_FFFF;

/// How many Thumb handler pointers a candidate must yield before it counts as a
/// vector table. Three consecutive `{zero | odd in-exec}` slots is the smallest
/// run that a `.data` structure does not reach by accident (measured: no
/// allocated section in the 16-binary Cortex-M corpus reaches it except the real
/// table).
const MIN_CONFORMING_HANDLERS: usize = 3;

/// ELF section header flag: SHF_ALLOC (the section occupies memory at run time).
const SHF_ALLOC: u64 = 0x2;

/// The vector-table candidate for `file`, widened per this module's doc when
/// `widen` is set.
///
/// `widen == false` is the shipped signature verbatim. `widen == true` keeps that
/// result when it exists and otherwise runs the widened scan, so the widened
/// answer is always a superset.
pub(super) fn vector_table(file: &object::File, widen: bool) -> Option<(u64, u64, Vec<u8>)> {
    let shipped = super::cortexm_vector_table_shipped(file);
    if !widen || shipped.is_some() {
        return shipped;
    }
    widened_scan(file)
}

/// The widened scan: every allocated section, in the shipped candidate order
/// (`SHF_EXECINSTR` first, then the program-header-executable delta, then the
/// remaining allocated sections), confirmed by [`is_vector_table`].
///
/// ARM-gated, like the shipped signature — the whole oracle is Cortex-M
/// firmware discovery and must stay a strict no-op on every other architecture.
fn widened_scan(file: &object::File) -> Option<(u64, u64, Vec<u8>)> {
    use object::read::Object;
    if file.architecture() != object::Architecture::Arm {
        return None;
    }
    let le = file.is_little_endian();
    let execs = executable_sections(file);
    let in_exec = |vma: u64| in_executable_section(&execs, vma);
    super::executable_sections(file)
        .into_iter()
        .chain(super::phdr_executable_sections(file))
        .chain(other_allocated_sections(file))
        .find(|(addr, _, data)| is_vector_table(*addr, data, le, &in_exec))
}

/// The allocated sections neither [`super::executable_sections`] nor
/// [`super::phdr_executable_sections`] returns — the `A`-only sections in a
/// non-executable load, which is where cleanflight and betaflight put
/// `.isr_vector`.
///
/// ELF-only by construction (a PE/Mach-O `SectionFlags` never matches).
fn other_allocated_sections(file: &object::File) -> Vec<(u64, u64, Vec<u8>)> {
    use object::read::{Object, ObjectSection};
    let already: Vec<u64> = super::executable_sections(file)
        .into_iter()
        .chain(super::phdr_executable_sections(file))
        .map(|(addr, _, _)| addr)
        .collect();
    let mut out = Vec::new();
    for sec in file.sections() {
        let object::SectionFlags::Elf { sh_flags } = sec.flags() else {
            continue;
        };
        if sh_flags & SHF_ALLOC == 0 {
            continue;
        }
        let addr = sec.address();
        let size = sec.size();
        if size == 0 || already.contains(&addr) {
            continue;
        }
        let Ok(data) = sec.data() else {
            continue;
        };
        out.push((addr, addr.saturating_add(size), data.to_vec()));
    }
    out
}

/// The widened signature over one candidate's bytes: word 0 is a plausible
/// initial stack pointer (SRAM, CCM or TCM), and the harvest starting at word 1
/// yields at least [`MIN_CONFORMING_HANDLERS`] Thumb handler pointers.
///
/// Reusing [`super::harvest_vector_slots`] for the confirmation is deliberate:
/// the words that confirm the table are exactly the words the oracle then seeds
/// from, so a candidate can never be confirmed on evidence the harvest rejects.
/// The count is over accepted *slots*, not distinct addresses — a bare-metal
/// table points most of its vectors at one shared `Default_Handler` (nuttx's
/// first fourteen slots resolve to two addresses), so counting addresses would
/// reject the very tables this exists to find.
pub(super) fn is_vector_table(
    sec_addr: u64,
    data: &[u8],
    le: bool,
    in_exec: &dyn Fn(u64) -> bool,
) -> bool {
    if data.len() < 8 {
        return false;
    }
    let sp = read_u32(&data[0..], le) as u64;
    let plausible_sp = (CORTEXM_TCM_LO..=CORTEXM_TCM_HI).contains(&sp)
        || (CORTEXM_SRAM_LO..=CORTEXM_SRAM_HI).contains(&sp);
    if !plausible_sp {
        return false;
    }
    harvest_vector_slots(sec_addr, data, le, in_exec, true).len() >= MIN_CONFORMING_HANDLERS
}

#[cfg(test)]
mod tests;
