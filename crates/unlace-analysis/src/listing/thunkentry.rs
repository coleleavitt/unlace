//! (unlace) `thunkentry` — the target of a jump thunk is a function entry.
//!
//! [`super::walk`] makes a function only at a CALL target; every other flow
//! target is a same-function successor. A function whose whole body is one
//! direct `jmp` is a thunk, and the routine it jumps to was never a function of
//! its own: its body was attributed to the thunk. MSVC `/INCREMENTAL` routes
//! every call and the image entry through a table of `jmp rel32` thunks, so on
//! such an image the walk finds the thunks and none of the bodies.
//!
//! This reads the completed walk and promotes a jump target to a function entry
//! when all of these hold:
//!
//! 1. the jump is the first instruction of a function entry (a walk seed, a CALL
//!    target, or a target this pass already promoted), it is a direct
//!    unconditional branch, and the target is a decoded instruction that is not
//!    the thunk itself;
//! 2. no decoded instruction falls through into the target and no conditional
//!    branch targets it, so it is not the middle of a straight-line run or a
//!    loop head;
//! 3. the instruction right after the thunk's `jmp` is not ordinary code: it is
//!    undecoded, a function entry, another direct jump (the next thunk of a
//!    table), or the target itself. A function that opens with a jump over its
//!    own loop body to the loop condition fails this test, because the walk
//!    decoded the body as a branch target of the condition.
//!
//! Promoting a target cannot change which instructions the walk decodes: the
//! target is a branch successor of the thunk, so it is decoded either way. The
//! result is therefore a pure addition to the walk's function set, computed after
//! every rebuild. Rules 1 and 3 read the set as it grows, so acceptance runs to its
//! least fixpoint over a worklist, which no visiting order changes.
//!
//! A thunk may jump to another thunk (an MSVC CRT stub reaches its body through
//! the incremental-link table). The chain is followed at most [`MAX_CHAIN_HOPS`]
//! jumps from a walk entry, so an obfuscator's chain of tens of thousands of
//! jumps adds a few entries, not one per jump.
//!
//! `option aggressivethunks on` (default off) widens the candidates to every decoded
//! direct jump, not only the jumps that open a function entry, which is IDA's
//! `aggressively_convert_jumps_to_thunks`. Rule 1 is then replaced by three tests:
//! the jump is not a fall-through target (no instruction runs into it), its target has
//! exactly one reference in the listing (a block several jumps reach is shared, not one
//! stub's body), and rules 2 and 3 hold as before. See [`aggressive_jumps`].
//!
//! x86 only (I386 and x86-64); every other architecture is a no-op.

use std::collections::{BTreeMap, BTreeSet};

use super::{FlowKind, Insn, Listing};

/// How many thunk-to-thunk jumps are followed from a walk entry.
const MAX_CHAIN_HOPS: usize = 4;

/// The thunk-target function entries of `listing`, address-sorted.
///
/// Every returned address is a decoded instruction start that is not already a
/// function of `listing`.
pub fn thunk_entries(file: &object::File, listing: &Listing, aggressive: bool) -> Vec<u64> {
    use object::read::Object;
    if !matches!(
        file.architecture(),
        object::Architecture::I386 | object::Architecture::X86_64
    ) {
        return Vec::new();
    }
    promote(listing, aggressive)
}

/// The least fixpoint of the three rules over `listing`'s function set.
fn promote(listing: &Listing, aggressive: bool) -> Vec<u64> {
    let known: BTreeSet<u64> = listing.functions().map(|(&a, _)| a).collect();
    let jumps = thunk_jumps(listing, &known, aggressive);
    let targets: BTreeSet<u64> = jumps
        .values()
        .copied()
        .filter(|t| !known.contains(t))
        .collect();
    if targets.is_empty() {
        return Vec::new();
    }
    let mut impure = impure_targets(listing, &targets);
    if aggressive {
        impure.extend(shared_targets(listing, &targets));
    }
    let mut accepted: BTreeSet<u64> = BTreeSet::new();
    let mut waiting: BTreeMap<u64, Vec<u64>> = BTreeMap::new();
    let mut work: Vec<u64> = jumps
        .keys()
        .copied()
        .filter(|t| aggressive || known.contains(t))
        .collect();
    while let Some(thunk) = work.pop() {
        let target = jumps[&thunk];
        if !targets.contains(&target) || accepted.contains(&target) || impure.contains(&target) {
            continue;
        }
        let is_entry = |vma: u64| known.contains(&vma) || accepted.contains(&vma);
        match code_after(listing, thunk, target, &is_entry) {
            Some(next) => waiting.entry(next).or_default().push(thunk),
            None => {
                accepted.insert(target);
                if jumps.contains_key(&target) {
                    work.push(target);
                }
                work.extend(waiting.remove(&target).unwrap_or_default());
            }
        }
    }
    accepted.into_iter().collect()
}

/// The direct unconditional-branch target of the instruction at `vma`, when that
/// instruction is one and the target is another decoded instruction.
fn jump_target(listing: &Listing, vma: u64) -> Option<u64> {
    let insn = listing.instruction_at(vma)?;
    if insn.flow.kind != FlowKind::UnconditionalBranch || insn.flow.is_call || insn.flows.len() != 1
    {
        return None;
    }
    let target = insn.flows[0];
    (target != vma && listing.is_instruction_start(target)).then_some(target)
}

/// Every potential thunk keyed to its jump target: the known entries that open
/// with a direct jump, and the targets of those jumps that do too, up to
/// [`MAX_CHAIN_HOPS`] jumps from a known entry.
fn thunk_jumps(listing: &Listing, known: &BTreeSet<u64>, aggressive: bool) -> BTreeMap<u64, u64> {
    let mut jumps: BTreeMap<u64, u64> = BTreeMap::new();
    let mut frontier: Vec<u64> = if aggressive {
        aggressive_jumps(listing)
    } else {
        known.iter().copied().collect()
    };
    for _ in 0..MAX_CHAIN_HOPS {
        let mut next = Vec::new();
        for thunk in frontier {
            if jumps.contains_key(&thunk) {
                continue;
            }
            let Some(target) = jump_target(listing, thunk) else {
                continue;
            };
            jumps.insert(thunk, target);
            if !known.contains(&target) {
                next.push(target);
            }
        }
        frontier = next;
    }
    jumps
}

/// The starts of every decoded direct jump that no instruction falls through into,
/// address-sorted: the candidate thunks of `option aggressivethunks`.
fn aggressive_jumps(listing: &Listing) -> Vec<u64> {
    let falls: BTreeSet<u64> = listing
        .instructions()
        .filter_map(|(_, insn)| insn.fall_through)
        .collect();
    listing
        .instructions()
        .map(|(&vma, _)| vma)
        .filter(|vma| !falls.contains(vma) && jump_target(listing, *vma).is_some())
        .collect()
}

/// The candidate targets that more than one flow reaches. A block that several
/// jumps share is not one stub's body, so `option aggressivethunks` leaves it alone.
fn shared_targets(listing: &Listing, targets: &BTreeSet<u64>) -> BTreeSet<u64> {
    let mut refs: BTreeMap<u64, usize> = BTreeMap::new();
    for (_, insn) in listing.instructions() {
        for t in insn.flows.iter().copied().filter(|t| targets.contains(t)) {
            *refs.entry(t).or_default() += 1;
        }
    }
    refs.into_iter()
        .filter(|&(_, n)| n > 1)
        .map(|(t, _)| t)
        .collect()
}

/// The candidate targets some decoded instruction falls through into or
/// conditionally branches to.
fn impure_targets(listing: &Listing, targets: &BTreeSet<u64>) -> BTreeSet<u64> {
    let mut impure = BTreeSet::new();
    for (_, insn) in listing.instructions() {
        if let Some(fall) = insn.fall_through
            && targets.contains(&fall) {
                impure.insert(fall);
            }
        if insn.flow.kind == FlowKind::ConditionalBranch {
            impure.extend(insn.flows.iter().copied().filter(|t| targets.contains(t)));
        }
    }
    impure
}

/// Rule 3: the address right after the thunk's jump when it holds ordinary
/// code, so the target may be the rest of the thunk's own body; `None` when it
/// does not.
fn code_after(
    listing: &Listing,
    thunk: u64,
    target: u64,
    is_entry: &dyn Fn(u64) -> bool,
) -> Option<u64> {
    let next = after(listing.instruction_at(thunk)?);
    let clear = next == target
        || !listing.is_instruction_start(next)
        || is_entry(next)
        || jump_target(listing, next).is_some();
    (!clear).then_some(next)
}

fn after(insn: &Insn) -> u64 {
    insn.addr.wrapping_add(u64::from(insn.len))
}

/// Commit an MSVC incremental-link table's stubs and targets as function entries
/// on every walk configuration, including none: an addressed decompile and a
/// fast inventory otherwise know neither the body behind a stub nor where the
/// next one starts.
#[derive(Clone, Copy, Default)]
pub struct IncrementalLinkPass;

impl crate::pass::AnalysisPass for IncrementalLinkPass {
    fn phase(&self) -> crate::pass::Phase {
        crate::pass::Phase::P1
    }

    fn id(&self) -> &'static str {
        "thunkentry"
    }

    fn run(&self, ctx: &crate::pass::AnalysisCtx) -> crate::pass::AnalysisOutput {
        crate::pass::AnalysisOutput {
            entries: incremental_link_roots(ctx.file),
            ..Default::default()
        }
    }
}

/// The fewest consecutive `jmp rel32` stubs read as an incremental-link table.
const MIN_TABLE_RUN: usize = 16;

/// Every stub of a PE's MSVC incremental-link tables and every stub's target,
/// address-sorted: the walk roots that reach the bodies the table routes calls
/// and vtable slots through.
///
/// A table is a run of at least [`MIN_TABLE_RUN`] adjacent 5-byte `jmp rel32`
/// instructions whose targets all lie in executable sections and outside the
/// run. PE x86 only; every other image is a no-op.
pub fn incremental_link_roots(file: &object::File) -> Vec<u64> {
    use object::read::Object;
    if file.format() != object::BinaryFormat::Pe
        || !matches!(
            file.architecture(),
            object::Architecture::I386 | object::Architecture::X86_64
        )
    {
        return Vec::new();
    }
    let execs = crate::entry::executable_sections(file);
    let executable = |vma: u64| crate::entry::in_executable_section(&execs, vma);
    let mut roots = Vec::new();
    for (start, _, code) in &execs {
        for (stub, target) in table_runs(code, *start, executable) {
            roots.push(stub);
            roots.push(target);
        }
    }
    roots.sort_unstable();
    roots.dedup();
    roots
}

/// The `(stub, target)` pairs of every qualifying run of `jmp rel32` stubs in
/// `code`, mapped at `base`.
///
/// Besides the length and target tests, a run must start in its section's first
/// 16 bytes or follow `int3` fill, where the linker lays the table, and at least
/// half its targets must be distinct, since each stub routes its own symbol. A
/// switch's jump island follows the dispatching `jmp`, and an obfuscator's chain
/// follows code.
fn table_runs(code: &[u8], base: u64, executable: impl Fn(u64) -> bool) -> Vec<(u64, u64)> {
    let stub_target = |at: usize| -> Option<u64> {
        let s = code.get(at..at.checked_add(5)?)?;
        if s[0] != 0xe9 {
            return None;
        }
        let rel = i32::from_le_bytes([s[1], s[2], s[3], s[4]]) as i64;
        let next = base.checked_add(at as u64 + 5)?;
        Some(next.wrapping_add(rel as u64))
    };
    let mut pairs = Vec::new();
    let mut at = 0usize;
    while let Some(off) = memchr::memchr(0xe9, &code[at..]) {
        at += off;
        let mut cur = at;
        while stub_target(cur).is_some() {
            cur += 5;
        }
        let count = (cur - at) / 5;
        if count < MIN_TABLE_RUN {
            at += 1;
            continue;
        }
        let (lo, hi) = (base.wrapping_add(at as u64), base.wrapping_add(cur as u64));
        let run: Vec<(u64, u64)> = (at..cur)
            .step_by(5)
            .filter_map(|s| Some((base.wrapping_add(s as u64), stub_target(s)?)))
            .collect();
        let padded = at < 16 || code[at - 1] == 0xcc;
        let distinct = run.iter().map(|&(_, t)| t).collect::<BTreeSet<u64>>().len();
        if padded
            && 2 * distinct >= count
            && run
                .iter()
                .all(|&(_, t)| executable(t) && !(lo..hi).contains(&t))
        {
            pairs.extend(run);
        }
        at = cur;
    }
    pairs
}

#[cfg(test)]
mod tests;
