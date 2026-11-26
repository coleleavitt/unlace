//! (unlace) `pdbinterior` — never start a function inside a procedure the PDB
//! describes (P1 code/data partition).
//!
//! The PDB half of [`crate::entry::pdatainterior`], for the functions the
//! exception table cannot vouch for. A unlace `FunctionSymbol` is an entry address
//! with no extent, so the commit boundary cannot answer "is this candidate already
//! inside a known function?". `.pdata` answers it for every function that needs
//! unwind data, but a frameless leaf has no `RUNTIME_FUNCTION` at all. When MSVC
//! also inlined that leaf into its only caller, the out-of-line copy has no caller
//! either, so recursive descent never decodes it and the PDB is the only record of
//! where it starts and ends.
//!
//! ## What goes wrong without it
//!
//! The reporter's MSVC `/O2` testbed (`ab_o2.exe`) has `cascade_switch` at
//! `0x1400010e0`, a 246-byte leaf of exactly that kind. The aggressive gap walk
//! (`aif`) probes its undecoded bytes and accepts `sub_140001178` (the middle of a
//! 6-byte `cmp`) and `sub_1400011bc` (a real instruction, but a fall-through inside
//! the switch). `funcboundflow` then truncates `cascade_switch` at the first of
//! them, and the `0xf043` case disappears from the emitted C.
//!
//! ## What makes a procedure extent usable
//!
//! Every `S_GPROC32`/`S_LPROC32` record carries its code length, which is the
//! extent the symbol table never had. `[start, start + len)` is used only when
//!
//! 1. the PDB gives that start one end (no second record disagrees), the code
//!    maps to one contiguous range of the image, and the range lies inside one
//!    executable section, so a corrupt, overflowing or OMAP-split length is never
//!    read as a body;
//! 2. no named function start (image symbol or PDB public) and no other
//!    procedure's start lies strictly inside it, and it does not overlap the range
//!    kept before it (the `.pdata` test, shared). A `.pdata` `BeginAddress` inside
//!    a procedure does not disqualify it: MSVC splits one function's unwind data
//!    across chained records, and the procedure is the authority on where that
//!    function ends; and
//! 3. a function is committed at `start` ([`suppress_owned_interior_entries`],
//!    checked at the commit). The `pdb` pass names functions from the publics,
//!    and a `static` function has an `S_LPROC32` record but no public: 756 of the
//!    3,268 procedures in each testbed image. Dropping an entry inside one of
//!    those whose start nothing else admits would leave its code with no function
//!    at all, so such a procedure is left alone.
//!
//! ## Which entries inside it are dropped
//!
//! Only the ones the procedure's own function decodes. At the commit the walk
//! from `start` follows fall-through and jumps without leaving the procedure or
//! entering a callee, and it does not fall through a call it cannot prove returns:
//! one to a target the decompiler treats as no-return, or one with no resolvable
//! target at all (an indirect `call [__imp_ExitProcess]` bound no-return by
//! `peimportcall`, or the `int 0x29` fastfail). An interior entry is dropped when
//! it lies inside an instruction some used body's walk decoded (the truncating
//! fall-through on `cascade_switch`, or the middle of its `cmp`) and no used body
//! calls it. An entry in code only a jump table, an exception handler or a call
//! reaches is the only function that code has: on a 32-bit MSVC image a `__finally`
//! block, a `catch` block and a switch's case bodies sit inside the parent's
//! procedure, and hand-written math routines call labels inside their own
//! procedure, so those entries stay. An entry a caller in another procedure still
//! calls stays too, so the call site keeps naming it.
//!
//! ## Scope
//!
//! A PE whose fingerprint-matched `.pdb` is found (the `pdb` pass's search and
//! GUID/age gate, reused), on x86, x64 and ARM64. 32-bit ARM abstains: a Thumb
//! entry can carry the interworking bit, which would place an entry that IS a
//! procedure start one byte inside it. The commit applies the bodies only while
//! `pdb` is also on, so switching the PDB off removes every trace of it.

use std::collections::{BTreeMap, BTreeSet};

use object::read::{Object, ObjectSection};

use crate::pass::{AnalysisCtx, AnalysisOutput, AnalysisPass, Phase};

use super::walk::PdbProcedure;
use super::{codeview, locate, open_fingerprint_matched, pe_image_base, walk};

/// (unlace) The PDB-procedure-interior entry-suppression pass (`pdbinterior`).
///
/// Reports the usable procedure extents on [`AnalysisOutput::pdb_bodies`]; the
/// commit applies them with [`suppress_owned_interior_entries`].
pub struct PdbInteriorPass;

impl AnalysisPass for PdbInteriorPass {
    fn phase(&self) -> Phase {
        Phase::P1
    }

    fn id(&self) -> &'static str {
        "pdbinterior"
    }

    fn run(&self, ctx: &AnalysisCtx) -> AnalysisOutput {
        AnalysisOutput {
            pdb_bodies: super::guarded("pdbinterior", || {
                eligible_pdb_bodies(ctx.file, ctx.bytes, ctx.image_path)
            }),
            ..AnalysisOutput::default()
        }
    }
}

/// The PDB procedure extents that describe exactly one function, sorted and
/// disjoint. Empty unless `file` is an x86/x64/ARM64 PE whose fingerprint-matched
/// `.pdb` can be located from `image_path`.
pub fn eligible_pdb_bodies(
    file: &object::File,
    bytes: &[u8],
    image_path: Option<&std::path::Path>,
) -> Vec<(u64, u64)> {
    if file.format() != object::BinaryFormat::Pe
        || !matches!(
            file.architecture(),
            object::Architecture::I386
                | object::Architecture::X86_64
                | object::Architecture::Aarch64
        )
    {
        return Vec::new();
    }
    let Some(cv) = codeview::extract_codeview(bytes) else {
        return Vec::new();
    };
    let candidates = locate::pdb_candidates(image_path, &cv);
    let Some(image_base) = pe_image_base(bytes) else {
        return Vec::new();
    };
    let Some(mut pdb) = open_fingerprint_matched(&candidates, &cv) else {
        return Vec::new();
    };
    let procs = walk::walk_procedures(&mut pdb, image_base);
    if procs.is_empty() {
        return Vec::new();
    }
    let mut starts = crate::entry::existing_function_addrs(file, bytes);
    starts.extend(
        walk::walk_functions(&mut pdb, image_base)
            .into_iter()
            .map(|f| f.vma),
    );
    starts.extend(procs.iter().map(|p| p.start));
    starts.sort_unstable();
    starts.dedup();
    let extents = vouched_extents(&procs, &executable_ranges(file));
    crate::entry::pdatainterior::eligible(&extents, &starts)
}

/// One decoded instruction, as the walk inside a procedure reads it.
#[derive(Clone, Debug, Default, PartialEq, Eq)]
pub struct InsnFlow {
    /// The instruction's byte length.
    pub len: u32,
    /// The next instruction, when this one can fall through.
    pub fall_through: Option<u64>,
    /// Static jump targets.
    pub jumps: Vec<u64>,
    /// Static call targets.
    pub calls: Vec<u64>,
    /// Whether this instruction is a call (including a computed/indirect call and
    /// an `int`-userop call, which carry no [`Self::calls`] target). A call the
    /// walk cannot resolve is one it cannot prove returns, so it does not fall
    /// through: the decompiler stops at the no-return imports (`peimportcall`) and
    /// the `int 0x29` fastfail these shapes take, and the walk must not claim the
    /// code past such a call as the procedure's own.
    pub is_call: bool,
}

/// Drop every entry strictly inside one of `bodies` that the body's own function
/// already decodes, and return the dropped entries.
///
/// A body is used only when its first address is a function the commit installs
/// (one of `entries` itself, or an address `is_function` accepts), and only
/// bodies disjoint from the ones used before it, so no used body's start is inside
/// another and the entry that admitted a body is never dropped. Every used body is
/// walked from its start with `decode`, following fall-through and jumps but
/// staying inside `[start, end)`, never entering a callee, and never falling
/// through a call it cannot prove returns (one `no_return` accepts, or one with no
/// resolvable target). An interior entry is dropped only when
///
/// * it lies inside an instruction some used body's own walk decoded (at its first
///   byte or in its middle), and
/// * no used body's walk calls it.
///
/// Everything else is kept: an entry in code only a jump table, an exception
/// handler or a call reaches is the only function that code has, and an entry a
/// caller (even one in another procedure) still calls stays a named function so
/// the call site keeps naming it.
pub fn suppress_owned_interior_entries(
    entries: &mut Vec<u64>,
    bodies: &[(u64, u64)],
    is_function: impl Fn(u64) -> bool,
    no_return: impl Fn(u64) -> bool,
    mut decode: impl FnMut(u64) -> Option<InsnFlow>,
) -> Vec<u64> {
    if bodies.is_empty() || entries.is_empty() {
        return Vec::new();
    }
    let mut admitted = entries.clone();
    admitted.sort_unstable();
    admitted.dedup();
    let mut sorted = bodies.to_vec();
    sorted.sort_unstable();

    // Walk every used body once. Each contributes its decoded reach (for the drop
    // test) and the addresses it calls (which no body may drop, wherever they land).
    let mut used_end: Option<u64> = None;
    let mut used: Vec<ProcedureWalk> = Vec::new();
    let mut called: BTreeSet<u64> = BTreeSet::new();
    for (start, end) in sorted {
        let owned = start < end
            && used_end.map_or(true, |prev| prev <= start)
            && (admitted.binary_search(&start).is_ok() || is_function(start));
        if !owned {
            continue;
        }
        used_end = Some(end);
        let walk = walk_procedure(start, end, &no_return, &mut decode);
        called.extend(walk.calls.iter().copied());
        used.push(walk);
    }

    let mut drop: BTreeSet<u64> = BTreeSet::new();
    for walk in &used {
        let lo = admitted.partition_point(|&a| a <= walk.start);
        let hi = admitted.partition_point(|&a| a < walk.end);
        drop.extend(
            admitted[lo..hi]
                .iter()
                .copied()
                .filter(|&e| !called.contains(&e) && walk.covers(e)),
        );
    }
    let mut dropped = Vec::new();
    entries.retain(|vma| {
        let keep = !drop.contains(vma);
        if !keep {
            dropped.push(*vma);
        }
        keep
    });
    dropped
}

/// What a walk from a procedure's start decodes inside the procedure.
struct ProcedureWalk {
    /// The procedure's `[start, end)`.
    start: u64,
    end: u64,
    /// `(vma, running maximum of vma + len)` over the decoded instructions, by vma.
    reach: Vec<(u64, u64)>,
    /// Every address this walk calls (a static call target, wherever it lands).
    calls: BTreeSet<u64>,
}

impl ProcedureWalk {
    /// Does a decoded instruction's byte range contain `vma`?
    fn covers(&self, vma: u64) -> bool {
        let below = self.reach.partition_point(|&(start, _)| start <= vma);
        below > 0 && self.reach[below - 1].1 > vma
    }
}

/// Decode from `start`, following fall-through and jump targets inside
/// `[start, end)`, at most once per address and at most `end - start` instructions.
/// A call the walk cannot prove returns — one to a `no_return` target, or one with
/// no resolvable target at all — does not fall through.
fn walk_procedure(
    start: u64,
    end: u64,
    no_return: &impl Fn(u64) -> bool,
    decode: &mut impl FnMut(u64) -> Option<InsnFlow>,
) -> ProcedureWalk {
    let budget = usize::try_from(end - start).unwrap_or(usize::MAX);
    let mut insns: BTreeMap<u64, u64> = BTreeMap::new();
    let mut calls = BTreeSet::new();
    let mut work = vec![start];
    while let Some(vma) = work.pop() {
        if vma < start || vma >= end || insns.contains_key(&vma) || insns.len() >= budget {
            continue;
        }
        let Some(insn) = decode(vma).filter(|i| i.len != 0) else {
            continue;
        };
        insns.insert(vma, vma.saturating_add(u64::from(insn.len)));
        calls.extend(insn.calls.iter().copied());
        work.extend(insn.jumps.iter().copied());
        let call_stops =
            insn.is_call && (insn.calls.is_empty() || insn.calls.iter().any(|&t| no_return(t)));
        if !call_stops {
            work.extend(insn.fall_through);
        }
    }
    let reach = insns
        .into_iter()
        .scan(0u64, |hi, (vma, insn_end)| {
            *hi = (*hi).max(insn_end);
            Some((vma, *hi))
        })
        .collect();
    ProcedureWalk {
        start,
        end,
        reach,
        calls,
    }
}

/// The procedure extents the PDB and the image agree on, sorted: a start whose
/// records all carry the same end, lying inside one executable section.
fn vouched_extents(procs: &[PdbProcedure], exec: &[(u64, u64)]) -> Vec<(u64, u64)> {
    let mut sorted = procs.to_vec();
    sorted.sort_unstable();
    sorted.dedup();
    let mut out = Vec::new();
    for group in sorted.chunk_by(|a, b| a.start == b.start) {
        let [
            PdbProcedure {
                start,
                end: Some(end),
            },
        ] = *group
        else {
            continue;
        };
        if inside_one_range(exec, start, end) {
            out.push((start, end));
        }
    }
    out
}

/// `[address, address + size)` of every section the image maps executable.
fn executable_ranges(file: &object::File) -> Vec<(u64, u64)> {
    file.sections()
        .filter(|s| match s.flags() {
            object::SectionFlags::Coff { characteristics } => {
                characteristics & object::pe::IMAGE_SCN_MEM_EXECUTE != 0
            }
            _ => false,
        })
        .filter_map(|s| Some((s.address(), s.address().checked_add(s.size())?)))
        .collect()
}

/// Is the non-empty `[start, end)` wholly inside one of `ranges`?
fn inside_one_range(ranges: &[(u64, u64)], start: u64, end: u64) -> bool {
    start < end && ranges.iter().any(|&(lo, hi)| lo <= start && end <= hi)
}

#[cfg(test)]
mod tests;
