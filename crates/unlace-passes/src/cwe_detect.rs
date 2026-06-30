//! CWE pattern detection (t379).
//!
//! Scans an [`SsaFunction`] for a small roster of common memory-safety
//! weaknesses, reported as [`CweFinding`]s in deterministic order. The
//! detector relies on `func.libc_call_annotations` (populated upstream
//! by [`crate::libc_idioms::annotate_libc_calls`]) to identify the
//! canonical `"malloc"` / `"free"` family names at call sites; if a
//! call has no annotation it is ignored.
//!
//! ## Detected weaknesses
//!
//! - **[`Cwe415DoubleFree`](CweKind::Cwe415DoubleFree)** — two `free`
//!   calls whose first argument resolves to the *same* SSA varnode.
//!   The second `free` is reported.
//! - **[`Cwe401MemoryLeak`](CweKind::Cwe401MemoryLeak)** — a `malloc`
//!   whose result SSA varnode is never the first argument of any
//!   `free` call within `func`. Flow-insensitive: we do not chase
//!   the value through escapes (stores into globals, return values),
//!   so this is an under-approximation of a true leak — false
//!   positives are the expected failure mode, useful as review
//!   pointers.
//! - **[`Cwe416UseAfterFree`](CweKind::Cwe416UseAfterFree)** — a
//!   `Load` whose address SSA varnode matches a pointer previously
//!   passed to `free` at a site that *dominates* the load. The
//!   dominance check rules out the obvious false positive where the
//!   free and load live in disjoint branches.
//!
//! - **[`Cwe119BufferOverflow`](CweKind::Cwe119BufferOverflow)** and
//!   **[`Cwe787OobWrite`](CweKind::Cwe787OobWrite)** — a "dangerous
//!   function" detector: a call annotated as an unbounded-copy
//!   (`gets`/`strcpy`/`strcat`/`sprintf`, CWE-119) or unchecked-write
//!   (`memcpy`/`memmove`/`memset`, CWE-787) libc function is flagged at
//!   its call site. Like the leak detector this is a reviewable signal,
//!   not a proof — a safely-bounded `memcpy` is still flagged.
//!
//! [`Cwe119BufferOverflow`]: CweKind::Cwe119BufferOverflow
//! [`Cwe787OobWrite`]: CweKind::Cwe787OobWrite

use std::collections::{BTreeMap, BTreeSet};

use unlace_ir::ssa::{SsaFunction, SsaVarnode, VarnodeSlot};
use unlace_ir::{BlockId, IrOp};

/// Kind of CWE pattern recognised at a particular IR location.
#[derive(Copy, Clone, Debug, PartialEq, Eq, PartialOrd, Ord, Hash)]
pub enum CweKind {
    /// CWE-119: improper restriction of operations within the bounds of
    /// a memory buffer. Reserved for a future bounds-tracking detector.
    Cwe119BufferOverflow,
    /// CWE-416: use after free.
    Cwe416UseAfterFree,
    /// CWE-787: out-of-bounds write. Reserved for a future detector.
    Cwe787OobWrite,
    /// CWE-415: double free.
    Cwe415DoubleFree,
    /// CWE-401: missing release of memory after effective lifetime.
    Cwe401MemoryLeak,
}

/// A single weakness located at an IR `(block, insn_idx)`.
#[derive(Clone, Debug, PartialEq, Eq, PartialOrd, Ord, Hash)]
pub struct CweFinding {
    pub kind: CweKind,
    /// `(block_id, insn_index)` of the offending instruction. For
    /// [`Cwe401MemoryLeak`](CweKind::Cwe401MemoryLeak) this is the
    /// `malloc` call; for [`Cwe415DoubleFree`](CweKind::Cwe415DoubleFree)
    /// the *second* `free`; for
    /// [`Cwe416UseAfterFree`](CweKind::Cwe416UseAfterFree) the load.
    pub location: (BlockId, usize),
    pub description: String,
}

/// Detect CWE patterns in `func`. Results are returned in deterministic
/// `(block, insn, kind)` order.
pub fn detect_cwe(func: &SsaFunction) -> Vec<CweFinding> {
    let mut findings: BTreeSet<CweFinding> = BTreeSet::new();

    // -- Gather every malloc / free call site once. -----------------------
    //
    // A `malloc` site is identified by the SSA varnode it *defines* (its
    // call output, i.e. the returned pointer). A `free` site is identified
    // by the SSA varnode it *consumes* (the pointer it releases, taken
    // from Call input[1] — input[0] is the call target address).
    let mut malloc_sites: Vec<MallocSite> = Vec::new();
    let mut free_sites: Vec<FreeSite> = Vec::new();

    for (&bid, block) in &func.function.blocks {
        for (idx, insn) in block.insns.iter().enumerate() {
            if insn.op != IrOp::Call {
                continue;
            }
            let Some(annotation) = func.libc_call_annotations.get(&(bid, idx)) else {
                continue;
            };
            match annotation.as_str() {
                "malloc" => {
                    if let Some(&out_sv) = func.var_map.get(&(bid, idx, VarnodeSlot::Output)) {
                        malloc_sites.push(MallocSite {
                            location: (bid, idx),
                            result: out_sv,
                        });
                    }
                }
                "free" => {
                    // First argument lives at Input(1); Input(0) is the
                    // call target. SSA renaming maps the relevant ABI
                    // register slot to a fresh SsaVarnode at this site.
                    if let Some(&arg_sv) = func.var_map.get(&(bid, idx, VarnodeSlot::Input(1))) {
                        free_sites.push(FreeSite {
                            location: (bid, idx),
                            arg: arg_sv,
                        });
                    }
                }
                _ => {}
            }
        }
    }

    // -- CWE-415: double free. -------------------------------------------
    //
    // Group free sites by their SSA argument. Any group with >=2 entries
    // is a double free; we report every free *after the first* keyed by
    // (block, insn) so a triple-free shows up as two distinct findings.
    let mut by_arg: BTreeMap<SsaVarnode, Vec<(BlockId, usize)>> = BTreeMap::new();
    for fs in &free_sites {
        by_arg.entry(fs.arg).or_default().push(fs.location);
    }
    for (_arg, mut locs) in by_arg {
        if locs.len() < 2 {
            continue;
        }
        locs.sort();
        for &loc in &locs[1..] {
            findings.insert(CweFinding {
                kind: CweKind::Cwe415DoubleFree,
                location: loc,
                description: "double free: pointer previously released \
                              on this path"
                    .to_string(),
            });
        }
    }

    // -- CWE-401: memory leak. -------------------------------------------
    //
    // A malloc result is "leaked" (per this conservative detector) when
    // no `free` call within the function consumes that exact SSA
    // varnode. This deliberately ignores aliasing through stores /
    // copies — the goal is a reviewable signal, not a soundness proof.
    let freed_args: BTreeSet<SsaVarnode> = free_sites.iter().map(|fs| fs.arg).collect();
    for ms in &malloc_sites {
        if !freed_args.contains(&ms.result) {
            findings.insert(CweFinding {
                kind: CweKind::Cwe401MemoryLeak,
                location: ms.location,
                description: "malloc result is never released on any \
                              reachable path"
                    .to_string(),
            });
        }
    }

    // -- CWE-416: use after free. ----------------------------------------
    //
    // For every Load whose address SSA varnode equals a previously-freed
    // pointer, and the free site dominates the load site, raise a UAF.
    // Dominance avoids the textbook false positive where free and load
    // are siblings (different branches of an if).
    for (&bid, block) in &func.function.blocks {
        for (idx, insn) in block.insns.iter().enumerate() {
            if insn.op != IrOp::Load {
                continue;
            }
            // LOAD inputs are either [addr] or [space_id, addr]; the
            // SSA var_map only maps real address operands (the space_id
            // is a Const that bypasses renaming), so we probe both.
            let addr_sv = func
                .var_map
                .get(&(bid, idx, VarnodeSlot::Input(0)))
                .or_else(|| func.var_map.get(&(bid, idx, VarnodeSlot::Input(1))))
                .copied();
            let Some(addr_sv) = addr_sv else { continue };

            for fs in &free_sites {
                if fs.arg != addr_sv {
                    continue;
                }
                if !dominates_strict(func, fs.location, (bid, idx)) {
                    continue;
                }
                findings.insert(CweFinding {
                    kind: CweKind::Cwe416UseAfterFree,
                    location: (bid, idx),
                    description: "load reads memory previously released \
                                  by free()"
                        .to_string(),
                });
                break;
            }
        }
    }

    // -- CWE-119 / CWE-787: dangerous unbounded library calls. -----------
    //
    // Classic "dangerous function" detector: a call annotated as a known
    // unbounded-copy / unchecked-write libc function is flagged at its call
    // site. This is a review pointer (like the leak detector), not a proof —
    // a bounds-checked use of `memcpy` with a constant size is still flagged,
    // which is the expected over-approximation. `gets`/`strcpy`/`strcat`/
    // `sprintf` write to a destination with no length bound (CWE-119); the
    // `mem*` family copies an arbitrary length into the destination, the
    // out-of-bounds-write hazard (CWE-787).
    for (&bid, block) in &func.function.blocks {
        for (idx, insn) in block.insns.iter().enumerate() {
            if insn.op != IrOp::Call {
                continue;
            }
            let Some(annotation) = func.libc_call_annotations.get(&(bid, idx)) else {
                continue;
            };
            if let Some((kind, desc)) = dangerous_call_weakness(annotation.as_str()) {
                findings.insert(CweFinding {
                    kind,
                    location: (bid, idx),
                    description: desc.to_string(),
                });
            }
        }
    }

    findings.into_iter().collect()
}

/// Classify a libc call name as an unbounded-copy (CWE-119) or
/// unchecked-write (CWE-787) hazard, or `None` if it is not on the
/// dangerous-function roster. Kept as an explicit match so the roster is
/// auditable and deterministic.
fn dangerous_call_weakness(name: &str) -> Option<(CweKind, &'static str)> {
    match name {
        "gets" => Some((
            CweKind::Cwe119BufferOverflow,
            "gets() performs an unbounded read into a fixed buffer",
        )),
        "strcpy" | "stpcpy" | "strcat" => Some((
            CweKind::Cwe119BufferOverflow,
            "unbounded string copy into destination with no length bound",
        )),
        "sprintf" | "vsprintf" => Some((
            CweKind::Cwe119BufferOverflow,
            "sprintf writes a formatted string with no destination size bound",
        )),
        "memcpy" | "memmove" | "memset" => Some((
            CweKind::Cwe787OobWrite,
            "fixed-destination write of a caller-supplied length (verify the bound)",
        )),
        _ => None,
    }
}

/// Internal record for a recognised `malloc` site.
#[derive(Copy, Clone, Debug)]
struct MallocSite {
    location: (BlockId, usize),
    result: SsaVarnode,
}

/// Internal record for a recognised `free` site.
#[derive(Copy, Clone, Debug)]
struct FreeSite {
    location: (BlockId, usize),
    arg: SsaVarnode,
}

/// True iff IR location `a` strictly dominates location `b` on every
/// path through `func`'s CFG. Same-block: lower insn index dominates.
/// Cross-block: walk the idom chain of `b.0` upward looking for `a.0`.
fn dominates_strict(func: &SsaFunction, a: (BlockId, usize), b: (BlockId, usize)) -> bool {
    if a == b {
        return false;
    }
    if a.0 == b.0 {
        return a.1 < b.1;
    }
    // Walk b's dominators upward to the root.
    let mut cur = b.0;
    while let Some(parent) = func.dom_tree.idom(cur) {
        if parent == cur {
            // idom of root is itself (or unset); stop.
            return false;
        }
        if parent == a.0 {
            return true;
        }
        cur = parent;
    }
    false
}

// =========================================================================
// Tests
// =========================================================================

#[cfg(test)]
mod tests {
    use smallvec::smallvec;

    use super::*;
    use unlace_ir::ssa::{SsaFunction, build_ssa};
    use unlace_ir::{BasicBlock, BlockId, Function, IrInsn, Varnode};

    fn reg(off: u64) -> Varnode {
        Varnode::reg(off, 8)
    }

    fn c(value: u64) -> Varnode {
        Varnode::constant(value, 8)
    }

    /// Manually annotate a call site with the given canonical libc name.
    /// In production this is the job of `annotate_libc_calls`, but tests
    /// bypass that pass to keep fixtures small.
    fn annotate(ssa: &mut SsaFunction, bid: BlockId, idx: usize, name: &str) {
        ssa.libc_call_annotations
            .insert((bid, idx), name.to_string());
    }

    #[test]
    fn detects_double_free_same_pointer() {
        // free(r10); free(r10);
        let r10 = reg(10);

        let mut func = Function::new("dbl_free", BlockId(0), 0x1000);
        let mut bb = BasicBlock::new(BlockId(0));
        bb.insns.push(IrInsn::without_output(
            IrOp::Call,
            smallvec![c(0x2000), r10],
            0x1000,
        ));
        bb.insns.push(IrInsn::without_output(
            IrOp::Call,
            smallvec![c(0x2000), r10],
            0x1004,
        ));
        bb.insns
            .push(IrInsn::without_output(IrOp::Return, smallvec![], 0x1008));
        func.insert_block(bb);

        let mut ssa = build_ssa(func);
        annotate(&mut ssa, BlockId(0), 0, "free");
        annotate(&mut ssa, BlockId(0), 1, "free");

        let findings = detect_cwe(&ssa);
        assert_eq!(findings.len(), 1, "got: {:?}", findings);
        assert_eq!(findings[0].kind, CweKind::Cwe415DoubleFree);
        // The *second* free is the reported site.
        assert_eq!(findings[0].location, (BlockId(0), 1));
    }

    #[test]
    fn detects_dangerous_strcpy_as_buffer_overflow() {
        // strcpy(dst, src);  RETURN
        let mut func = Function::new("danger", BlockId(0), 0x1000);
        let mut bb = BasicBlock::new(BlockId(0));
        bb.insns.push(IrInsn::without_output(
            IrOp::Call,
            smallvec![c(0x2000), reg(7), reg(6)],
            0x1000,
        ));
        bb.insns
            .push(IrInsn::without_output(IrOp::Return, smallvec![], 0x1004));
        func.insert_block(bb);

        let mut ssa = build_ssa(func);
        annotate(&mut ssa, BlockId(0), 0, "strcpy");

        let findings = detect_cwe(&ssa);
        assert_eq!(findings.len(), 1, "got: {:?}", findings);
        assert_eq!(findings[0].kind, CweKind::Cwe119BufferOverflow);
        assert_eq!(findings[0].location, (BlockId(0), 0));
    }

    #[test]
    fn detects_memcpy_as_oob_write_candidate() {
        let mut func = Function::new("danger2", BlockId(0), 0x1000);
        let mut bb = BasicBlock::new(BlockId(0));
        bb.insns.push(IrInsn::without_output(
            IrOp::Call,
            smallvec![c(0x2000), reg(7), reg(6), reg(2)],
            0x1000,
        ));
        bb.insns
            .push(IrInsn::without_output(IrOp::Return, smallvec![], 0x1004));
        func.insert_block(bb);

        let mut ssa = build_ssa(func);
        annotate(&mut ssa, BlockId(0), 0, "memcpy");

        let findings = detect_cwe(&ssa);
        assert_eq!(findings.len(), 1, "got: {:?}", findings);
        assert_eq!(findings[0].kind, CweKind::Cwe787OobWrite);
    }

    #[test]
    fn detects_memory_leak_unfreed_malloc() {
        // p = malloc(N);  RETURN  — never freed.
        let mut func = Function::new("leak", BlockId(0), 0x1000);
        let mut bb = BasicBlock::new(BlockId(0));
        bb.insns.push(IrInsn::with_output(
            IrOp::Call,
            reg(0), // RAX-ish output slot
            smallvec![c(0x3000), c(64)],
            0x1000,
        ));
        bb.insns
            .push(IrInsn::without_output(IrOp::Return, smallvec![], 0x1004));
        func.insert_block(bb);

        let mut ssa = build_ssa(func);
        annotate(&mut ssa, BlockId(0), 0, "malloc");

        let findings = detect_cwe(&ssa);
        assert_eq!(findings.len(), 1, "got: {:?}", findings);
        assert_eq!(findings[0].kind, CweKind::Cwe401MemoryLeak);
        assert_eq!(findings[0].location, (BlockId(0), 0));
    }

    #[test]
    fn malloc_then_free_is_not_a_leak() {
        // p = malloc(N);  free(p);  RETURN  — clean.
        //
        // Key wrinkle: the SSA varnode of malloc's *output* (reg 0 = RAX)
        // must be the SSA varnode passed as free's first argument. The
        // simplest fixture is to feed `reg(0)` straight into the free
        // call; SSA renaming will alias the two slots.
        let mut func = Function::new("clean", BlockId(0), 0x1000);
        let mut bb = BasicBlock::new(BlockId(0));
        bb.insns.push(IrInsn::with_output(
            IrOp::Call,
            reg(0),
            smallvec![c(0x3000), c(64)],
            0x1000,
        ));
        bb.insns.push(IrInsn::without_output(
            IrOp::Call,
            smallvec![c(0x4000), reg(0)],
            0x1004,
        ));
        bb.insns
            .push(IrInsn::without_output(IrOp::Return, smallvec![], 0x1008));
        func.insert_block(bb);

        let mut ssa = build_ssa(func);
        annotate(&mut ssa, BlockId(0), 0, "malloc");
        annotate(&mut ssa, BlockId(0), 1, "free");

        let findings = detect_cwe(&ssa);
        assert!(
            findings.is_empty(),
            "clean malloc/free pair should yield zero findings, got: {:?}",
            findings
        );
    }

    #[test]
    fn detects_use_after_free_load_after_free() {
        // free(r10); val = LOAD r10;  RETURN
        let r10 = reg(10);
        let val = reg(20);

        let mut func = Function::new("uaf", BlockId(0), 0x1000);
        let mut bb = BasicBlock::new(BlockId(0));
        bb.insns.push(IrInsn::without_output(
            IrOp::Call,
            smallvec![c(0x4000), r10],
            0x1000,
        ));
        bb.insns
            .push(IrInsn::with_output(IrOp::Load, val, smallvec![r10], 0x1004));
        bb.insns
            .push(IrInsn::without_output(IrOp::Return, smallvec![], 0x1008));
        func.insert_block(bb);

        let mut ssa = build_ssa(func);
        annotate(&mut ssa, BlockId(0), 0, "free");

        let findings = detect_cwe(&ssa);
        assert_eq!(findings.len(), 1, "got: {:?}", findings);
        assert_eq!(findings[0].kind, CweKind::Cwe416UseAfterFree);
        assert_eq!(findings[0].location, (BlockId(0), 1));
    }

    #[test]
    fn clean_function_yields_no_findings() {
        // Two unrelated arithmetic ops and a return — no calls at all.
        let r0 = reg(0);
        let r1 = reg(1);
        let r2 = reg(2);

        let mut func = Function::new("noop", BlockId(0), 0x1000);
        let mut bb = BasicBlock::new(BlockId(0));
        bb.insns.push(IrInsn::with_output(
            IrOp::IntAdd,
            r2,
            smallvec![r0, r1],
            0x1000,
        ));
        bb.insns
            .push(IrInsn::without_output(IrOp::Return, smallvec![], 0x1004));
        func.insert_block(bb);

        let ssa = build_ssa(func);
        let findings = detect_cwe(&ssa);
        assert!(
            findings.is_empty(),
            "function with no allocator calls should yield zero findings, \
             got: {:?}",
            findings
        );
    }
}
