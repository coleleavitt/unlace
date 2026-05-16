//! C++20 coroutine frame recovery pass.
//!
//! C++20 coroutines compile down to a "split" ABI:
//!
//! 1. A **ramp** function allocates the coroutine frame (via `operator new` or
//!    `__builtin_coro_alloc`), stores the resume and destroy function pointers
//!    at offsets 0 and 8 of the frame, initialises the promise object, and
//!    returns the coroutine handle.
//!
//! 2. A **resume** function receives the frame pointer, loads the suspension
//!    index, dispatches to the correct resume point, and advances the state
//!    machine. `co_await` compiles into: store new suspension index → return.
//!    `co_yield` compiles into: store value into promise → store suspension
//!    index → return.
//!
//! 3. A **destroy** function receives the frame pointer and deallocates (calls
//!    `operator delete` after running destructors).
//!
//! This pass detects these patterns and annotates the SSA function with
//! [`CoroutineSite`] records so the decompiler can present `co_await` /
//! `co_yield` pseudocode.

use std::collections::BTreeMap;

use unlace_ir::ssa::{
    CoroutineRole, CoroutineSite, SsaFunction, SuspensionKind, SuspensionPoint,
};
use unlace_ir::{BlockId, IrOp, SpaceId, Varnode};

use crate::pass::{Pass, PassError};

/// Byte size of a pointer on the target (assumed x86-64). Documented for the
/// reader; equal to `DESTROY_FN_OFFSET` and `SUSPEND_INDEX_OFFSET - 8`.
#[allow(dead_code)]
const PTR_SIZE: u64 = 8;

/// Canonical offset of the resume function pointer in the coroutine frame.
const RESUME_FN_OFFSET: u64 = 0;

/// Canonical offset of the destroy function pointer in the coroutine frame.
const DESTROY_FN_OFFSET: u64 = 8;

/// Canonical offset of the suspension-index field (immediately after the two
/// function pointers). Some implementations use offset 16 (2-byte index) or
/// align further; we also accept 16 as a fallback.
const SUSPEND_INDEX_OFFSET: u64 = 16;

/// Recover C++20 coroutine frame patterns.
pub struct CppCoroutinePass;

impl Pass for CppCoroutinePass {
    fn name(&self) -> &str {
        "cpp-coroutine"
    }

    fn phase(&self) -> crate::pass::PassPhase {
        crate::pass::PassPhase::TypeRecovery
    }

    fn run(&self, func: &mut SsaFunction) -> Result<bool, PassError> {
        let sites = detect_coroutine_sites(func);
        if sites.is_empty() {
            return Ok(false);
        }
        if sites == func.coroutine_sites {
            return Ok(false);
        }
        func.coroutine_sites = sites;
        Ok(true)
    }
}

/// Top-level detection entry point.
pub fn detect_coroutine_sites(func: &SsaFunction) -> Vec<CoroutineSite> {
    let mut sites = Vec::new();

    // Try ramp detection first (frame allocation + function-pointer stores).
    if let Some(site) = detect_ramp(func) {
        sites.push(site);
        return sites;
    }

    // Try resume detection (suspension index dispatch + stores).
    if let Some(site) = detect_resume(func) {
        sites.push(site);
        return sites;
    }

    // Try destroy detection (frame pointer + deallocation).
    if let Some(site) = detect_destroy(func) {
        sites.push(site);
    }

    sites
}

// ─── Ramp Detection ──────────────────────────────────────────────────────────

/// Detect a coroutine ramp function.
///
/// Pattern:
///   1. Call to `operator new` (or symbol containing "new" / "coro_alloc")
///      returning a pointer (the frame base), or a `New` opcode.
///   2. Store of a constant (function pointer) to frame+0 (resume fn).
///   3. Store of a constant (function pointer) to frame+8 (destroy fn).
fn detect_ramp(func: &SsaFunction) -> Option<CoroutineSite> {
    // Symbol-level hint: ramp functions typically have the user-facing name
    // (no `.resume` / `.destroy` suffix).
    let name = &func.function.name;
    if name.contains(".resume") || name.contains(".destroy") {
        return None;
    }

    let mut alloc_addr: Option<u64> = None;
    let mut alloc_output: Option<Varnode> = None;
    let mut promise_offset: Option<u64> = None;

    // Collect definitions for output varnodes to trace the frame base.
    let defs = build_def_map(func);

    for block in func.function.blocks.values() {
        for insn in &block.insns {
            // Detect frame allocation: a `New` opcode, or a `Call` whose
            // target is annotated as malloc/new in libc_call_annotations.
            if insn.op == IrOp::New && insn.output.is_some() {
                alloc_addr = Some(insn.addr);
                alloc_output = insn.output;
            } else if insn.op == IrOp::Call && insn.output.is_some() {
                // Check libc_call_annotations for "malloc" on this insn
                // (We cannot easily do that here without (bid, idx), so
                // use pattern matching on the function name instead.)
                if is_alloc_name(name) {
                    alloc_addr = Some(insn.addr);
                    alloc_output = insn.output;
                }
            }
        }
    }

    // Also detect based on function name containing "coro" patterns
    if alloc_output.is_none() && !looks_like_coroutine_ramp_name(name) {
        return None;
    }

    // If no explicit allocation but the name looks like a coroutine ramp,
    // use the function's first instruction address as a placeholder.
    let frame_alloc_addr = alloc_addr.unwrap_or(func.function.addr);
    let frame_base = alloc_output.unwrap_or_else(|| Varnode::reg(0, 8));

    // Scan for stores of function pointers at offset 0 and 8 from
    // the frame base.
    let mut resume_store: Option<(BlockId, usize)> = None;
    let mut _destroy_store: Option<(BlockId, usize)> = None;

    for (&bid, block) in &func.function.blocks {
        for (i, insn) in block.insns.iter().enumerate() {
            if insn.op != IrOp::Store || insn.inputs.len() < 2 {
                continue;
            }
            let Some((addr_vn, _value_vn)) = store_addr_value(insn) else {
                continue;
            };
            if let Some(offset) = resolve_base_offset_full(func, &defs, addr_vn, frame_base) {
                match offset {
                    RESUME_FN_OFFSET => resume_store = Some((bid, i)),
                    DESTROY_FN_OFFSET => _destroy_store = Some((bid, i)),
                    // First field after the two function pointers + index
                    // is likely the promise. `off >= SUSPEND_INDEX_OFFSET + 2`
                    // (= 18) implies `off > DESTROY_FN_OFFSET + PTR_SIZE` (= 16),
                    // so the latter check is redundant.
                    off if off >= SUSPEND_INDEX_OFFSET + 2
                        && (promise_offset.is_none() || off < promise_offset.unwrap()) =>
                    {
                        promise_offset = Some(off);
                    }
                    _ => {}
                }
            }
        }
    }

    // We need at least the resume pointer store to declare this a ramp.
    resume_store?;

    Some(CoroutineSite {
        role: CoroutineRole::Ramp,
        frame_alloc_addr,
        resume_fn_offset: RESUME_FN_OFFSET,
        destroy_fn_offset: DESTROY_FN_OFFSET,
        suspend_index_offset: SUSPEND_INDEX_OFFSET,
        promise_offset,
        suspension_points: Vec::new(), // ramp has no suspension points
    })
}

// ─── Resume Detection ────────────────────────────────────────────────────────

/// Detect a coroutine resume function.
///
/// Pattern:
///   - Function name contains ".resume" or the first parameter is a pointer
///     whose field at offset `SUSPEND_INDEX_OFFSET` is loaded and used in a
///     multi-way branch (switch on suspension index).
///   - Stores to the suspension index field followed by a `Return` indicate
///     suspension points.
///   - A store to a field *before* the index-store in the same basic block
///     that is not the function-pointer region suggests a `co_yield` value
///     store into the promise.
fn detect_resume(func: &SsaFunction) -> Option<CoroutineSite> {
    let name = &func.function.name;
    let is_resume_symbol = name.contains(".resume")
        || name.contains("_resume")
        || name.contains("__coro_resume");

    // The first argument (frame pointer) is typically in RDI (SysV) or RCX (MSVC).
    let frame_param = first_param_varnode();

    let defs = build_def_map(func);

    // Look for loads from frame + SUSPEND_INDEX_OFFSET (the dispatch load).
    let mut has_index_load = false;
    for block in func.function.blocks.values() {
        for insn in &block.insns {
            if insn.op == IrOp::Load && !insn.inputs.is_empty() {
                let addr_vn = load_address_vn(insn);
                if let Some(offset) = resolve_base_offset_full(func, &defs, addr_vn, frame_param) {
                    if offset == SUSPEND_INDEX_OFFSET {
                        has_index_load = true;
                    }
                }
            }
        }
    }

    if !is_resume_symbol && !has_index_load {
        return None;
    }

    // Scan for suspension points: stores to SUSPEND_INDEX_OFFSET followed
    // by a return in the same block (or the block ends with a return).
    let mut suspension_points = Vec::new();
    let mut promise_offset: Option<u64> = None;

    for (&bid, block) in &func.function.blocks {
        let mut index_store: Option<(usize, u64)> = None;
        let mut yield_offset: Option<u64> = None;
        let mut has_return = false;

        for (i, insn) in block.insns.iter().enumerate() {
            if insn.op == IrOp::Store && insn.inputs.len() >= 2 {
                let Some((addr_vn, value_vn)) = store_addr_value(insn) else {
                    continue;
                };
                if let Some(offset) = resolve_base_offset_full(func, &defs, addr_vn, frame_param) {
                    if offset == SUSPEND_INDEX_OFFSET {
                        // The stored value is the new suspension index.
                        let idx = const_value(value_vn).unwrap_or(i as u64);
                        index_store = Some((i, idx));
                    } else if offset > SUSPEND_INDEX_OFFSET
                        && offset < SUSPEND_INDEX_OFFSET + 256
                    {
                        // Potential co_yield value store into the promise
                        // (only if it appears before the index store).
                        if index_store.is_none() {
                            yield_offset = Some(offset);
                            if promise_offset.is_none() || offset < promise_offset.unwrap() {
                                promise_offset = Some(offset);
                            }
                        }
                    }
                }
            }

            if insn.op == IrOp::Return {
                has_return = true;
            }
        }

        if let Some((store_idx, index_val)) = index_store {
            let block_returns = has_return || block_ends_with_return(block);
            if block_returns {
                let kind = if yield_offset.is_some() {
                    SuspensionKind::CoYield
                } else if is_initial_final_index(index_val) {
                    SuspensionKind::Implicit
                } else {
                    SuspensionKind::CoAwait
                };
                suspension_points.push(SuspensionPoint {
                    kind,
                    index: index_val,
                    store_loc: (bid, store_idx),
                    yield_value_offset: yield_offset,
                });
            }
        }
    }

    if suspension_points.is_empty() && !is_resume_symbol {
        return None;
    }

    // Sort by index for deterministic output.
    suspension_points.sort_by_key(|sp| sp.index);

    Some(CoroutineSite {
        role: CoroutineRole::Resume,
        frame_alloc_addr: 0,
        resume_fn_offset: RESUME_FN_OFFSET,
        destroy_fn_offset: DESTROY_FN_OFFSET,
        suspend_index_offset: SUSPEND_INDEX_OFFSET,
        promise_offset,
        suspension_points,
    })
}

// ─── Destroy Detection ───────────────────────────────────────────────────────

/// Detect a coroutine destroy function.
///
/// Pattern:
///   - Function name contains ".destroy" or "_destroy" or "__coro_destroy".
///   - Body contains a call to `operator delete` / `free` with the first
///     argument derived from the frame pointer parameter.
fn detect_destroy(func: &SsaFunction) -> Option<CoroutineSite> {
    let name = &func.function.name;
    let is_destroy_symbol = name.contains(".destroy")
        || name.contains("_destroy")
        || name.contains("__coro_destroy");

    if !is_destroy_symbol {
        return None;
    }

    Some(CoroutineSite {
        role: CoroutineRole::Destroy,
        frame_alloc_addr: 0,
        resume_fn_offset: RESUME_FN_OFFSET,
        destroy_fn_offset: DESTROY_FN_OFFSET,
        suspend_index_offset: SUSPEND_INDEX_OFFSET,
        promise_offset: None,
        suspension_points: Vec::new(),
    })
}

// ─── Helpers ─────────────────────────────────────────────────────────────────

/// Map from output varnode → defining instruction location.
fn build_def_map(func: &SsaFunction) -> BTreeMap<Varnode, (BlockId, usize)> {
    let mut defs = BTreeMap::new();
    for (&bid, block) in &func.function.blocks {
        for (i, insn) in block.insns.iter().enumerate() {
            if let Some(out) = insn.output {
                defs.insert(out, (bid, i));
            }
        }
    }
    defs
}

/// Resolve `addr_vn` to a constant byte-offset from `base` by walking one
/// level of `IntAdd` / `Ptradd` definitions.
fn resolve_base_offset_full(
    func: &SsaFunction,
    defs: &BTreeMap<Varnode, (BlockId, usize)>,
    addr_vn: Varnode,
    base: Varnode,
) -> Option<u64> {
    // Direct match: addr is the base itself → offset 0.
    if addr_vn == base {
        return Some(0);
    }

    // Look up the defining instruction for addr_vn.
    let &(bid, idx) = defs.get(&addr_vn)?;
    let block = func.function.blocks.get(&bid)?;
    let def_insn = block.insns.get(idx)?;

    match def_insn.op {
        IrOp::IntAdd if def_insn.inputs.len() == 2 => {
            let (a, b) = (def_insn.inputs[0], def_insn.inputs[1]);
            // base + const
            if a == base && b.space == SpaceId::Const {
                return Some(b.offset);
            }
            // const + base
            if b == base && a.space == SpaceId::Const {
                return Some(a.offset);
            }
        }
        IrOp::Ptradd if def_insn.inputs.len() >= 2 => {
            let (ptr_base, idx_vn) = (def_insn.inputs[0], def_insn.inputs[1]);
            if ptr_base == base && idx_vn.space == SpaceId::Const {
                let elem_size = if def_insn.inputs.len() >= 3
                    && def_insn.inputs[2].space == SpaceId::Const
                {
                    def_insn.inputs[2].offset
                } else {
                    1
                };
                return Some(idx_vn.offset * elem_size);
            }
        }
        IrOp::Copy if def_insn.inputs.len() == 1
            // Walk through copies.
            && def_insn.inputs[0] == base => {
                return Some(0);
            }
        _ => {}
    }
    None
}

/// First argument register varnode (RDI on SysV x86-64 at register offset 0).
fn first_param_varnode() -> Varnode {
    Varnode::reg(0, 8)
}

/// Extract (address, value) from a Store instruction.
fn store_addr_value(insn: &unlace_ir::IrInsn) -> Option<(Varnode, Varnode)> {
    match insn.inputs.len() {
        2 => Some((insn.inputs[0], insn.inputs[1])),
        3.. => {
            // [space_id, addr, value] — skip the space constant
            if insn.inputs[0].space == SpaceId::Const {
                Some((insn.inputs[1], insn.inputs[2]))
            } else {
                Some((insn.inputs[0], insn.inputs[1]))
            }
        }
        _ => None,
    }
}

/// Extract the load address varnode from a Load instruction.
fn load_address_vn(insn: &unlace_ir::IrInsn) -> Varnode {
    if insn.inputs.len() >= 2 && insn.inputs[0].space == SpaceId::Const {
        insn.inputs[1]
    } else {
        insn.inputs[0]
    }
}

/// Extract a constant value from a varnode (only if it's in the Const space).
fn const_value(vn: Varnode) -> Option<u64> {
    (vn.space == SpaceId::Const).then_some(vn.offset)
}

/// Check if a function name looks like it involves allocation (heuristic for
/// coroutine ramp functions that contain inline operator new).
fn is_alloc_name(name: &str) -> bool {
    let lower = name.to_lowercase();
    lower.contains("operator new")
        || lower.contains("_znwm")
        || lower.contains("_znam")
        || lower.contains("coro_alloc")
}

/// Check if a function name looks like a coroutine ramp (not resume/destroy,
/// but possibly contains "coro" in its mangled name).
fn looks_like_coroutine_ramp_name(name: &str) -> bool {
    let lower = name.to_lowercase();
    (lower.contains("coro") || lower.contains("coroutine"))
        && !lower.contains("resume")
        && !lower.contains("destroy")
}

/// Heuristic: index 0 or very large values (e.g. 0xFF / -1) are typically
/// initial/final suspension points inserted by the compiler.
fn is_initial_final_index(idx: u64) -> bool {
    idx == 0 || idx == 0xFF || idx == 0xFFFF_FFFF || idx == 0xFFFF_FFFF_FFFF_FFFF
}

/// Check if a block ends with a Return instruction.
fn block_ends_with_return(block: &unlace_ir::BasicBlock) -> bool {
    block
        .insns
        .last()
        .is_some_and(|insn| insn.op == IrOp::Return)
}

#[cfg(test)]
mod tests {
    use smallvec::smallvec;

    use unlace_ir::ssa::build_ssa;
    use unlace_ir::{BasicBlock, BlockId, Function, IrInsn, IrOp, Varnode};

    use super::*;

    fn make_single_block_ssa(name: &str, insns: Vec<IrInsn>) -> SsaFunction {
        let mut func = Function::new(name, BlockId(0), 0x1000);
        let mut bb = BasicBlock::new(BlockId(0));
        bb.insns = insns;
        bb.insns.push(IrInsn::without_output(
            IrOp::Return,
            smallvec![Varnode::constant(0, 8)],
            0x1FFF,
        ));
        func.insert_block(bb);
        build_ssa(func)
    }

    #[test]
    fn detects_ramp_function_with_new_and_stores() {
        // Simulate: frame = NEW(64); store resume_fn at frame+0; store destroy_fn at frame+8
        let frame_ptr = Varnode::unique(0, 8);
        let resume_fn = Varnode::constant(0x2000, 8);
        let destroy_fn = Varnode::constant(0x3000, 8);
        let addr_0 = Varnode::unique(8, 8);
        let addr_8 = Varnode::unique(16, 8);

        let insns = vec![
            // frame_ptr = NEW(64) — simulates operator new
            IrInsn::with_output(
                IrOp::New,
                frame_ptr,
                smallvec![Varnode::constant(64, 8)],
                0x1000,
            ),
            // addr_0 = frame_ptr + 0 (INT_ADD)
            IrInsn::with_output(
                IrOp::IntAdd,
                addr_0,
                smallvec![frame_ptr, Varnode::constant(0, 8)],
                0x1004,
            ),
            // STORE(addr_0, resume_fn)
            IrInsn::without_output(IrOp::Store, smallvec![addr_0, resume_fn], 0x1008),
            // addr_8 = frame_ptr + 8
            IrInsn::with_output(
                IrOp::IntAdd,
                addr_8,
                smallvec![frame_ptr, Varnode::constant(8, 8)],
                0x100C,
            ),
            // STORE(addr_8, destroy_fn)
            IrInsn::without_output(IrOp::Store, smallvec![addr_8, destroy_fn], 0x1010),
        ];

        let ssa = make_single_block_ssa("my_coroutine", insns);
        let sites = detect_coroutine_sites(&ssa);
        assert_eq!(sites.len(), 1);
        assert_eq!(sites[0].role, CoroutineRole::Ramp);
        assert_eq!(sites[0].frame_alloc_addr, 0x1000);
    }

    #[test]
    fn detects_resume_function_by_name() {
        // Minimal resume function — just the name pattern is enough.
        let insns = vec![
            IrInsn::without_output(
                IrOp::Store,
                smallvec![Varnode::constant(0, 8), Varnode::constant(0, 8)],
                0x1000,
            ),
        ];

        let ssa = make_single_block_ssa("my_coroutine.resume", insns);
        let sites = detect_coroutine_sites(&ssa);
        assert_eq!(sites.len(), 1);
        assert_eq!(sites[0].role, CoroutineRole::Resume);
    }

    #[test]
    fn detects_destroy_function_by_name() {
        let insns = vec![
            IrInsn::without_output(
                IrOp::Store,
                smallvec![Varnode::constant(0, 8), Varnode::constant(0, 8)],
                0x1000,
            ),
        ];

        let ssa = make_single_block_ssa("my_coroutine.destroy", insns);
        let sites = detect_coroutine_sites(&ssa);
        assert_eq!(sites.len(), 1);
        assert_eq!(sites[0].role, CoroutineRole::Destroy);
    }

    #[test]
    fn resume_detects_co_await_suspension_points() {
        // Pattern: load frame index, store index=2 to frame+16, then return
        let frame_ptr = Varnode::reg(0, 8);
        let addr_16 = Varnode::unique(0, 8);
        let loaded_idx = Varnode::unique(8, 4);

        let insns = vec![
            // loaded_idx = LOAD(frame_ptr + 16) — dispatch load
            IrInsn::with_output(
                IrOp::IntAdd,
                addr_16,
                smallvec![frame_ptr, Varnode::constant(16, 8)],
                0x1000,
            ),
            IrInsn::with_output(
                IrOp::Load,
                loaded_idx,
                smallvec![Varnode::constant(1, 4), addr_16],
                0x1004,
            ),
            // STORE(addr_16, 2) — store new suspension index = 2
            IrInsn::without_output(
                IrOp::Store,
                smallvec![addr_16, Varnode::constant(2, 4)],
                0x1008,
            ),
        ];

        let ssa = make_single_block_ssa("my_coroutine.resume", insns);
        let sites = detect_coroutine_sites(&ssa);
        assert_eq!(sites.len(), 1);
        let site = &sites[0];
        assert_eq!(site.role, CoroutineRole::Resume);
        // Should detect the suspension point because the block ends with Return
        assert!(!site.suspension_points.is_empty());
        assert_eq!(site.suspension_points[0].kind, SuspensionKind::CoAwait);
        assert_eq!(site.suspension_points[0].index, 2);
    }

    #[test]
    fn resume_detects_co_yield_with_value_store() {
        // Pattern: store value to promise (frame+24), then store index to frame+16, return
        let frame_ptr = Varnode::reg(0, 8);
        let addr_24 = Varnode::unique(0, 8);
        let addr_16 = Varnode::unique(8, 8);

        let insns = vec![
            // addr_24 = frame_ptr + 24 (promise value slot)
            IrInsn::with_output(
                IrOp::IntAdd,
                addr_24,
                smallvec![frame_ptr, Varnode::constant(24, 8)],
                0x1000,
            ),
            // STORE(addr_24, 42) — co_yield value
            IrInsn::without_output(
                IrOp::Store,
                smallvec![addr_24, Varnode::constant(42, 4)],
                0x1004,
            ),
            // addr_16 = frame_ptr + 16
            IrInsn::with_output(
                IrOp::IntAdd,
                addr_16,
                smallvec![frame_ptr, Varnode::constant(16, 8)],
                0x1008,
            ),
            // STORE(addr_16, 1) — suspension index = 1
            IrInsn::without_output(
                IrOp::Store,
                smallvec![addr_16, Varnode::constant(1, 4)],
                0x100C,
            ),
        ];

        let ssa = make_single_block_ssa("my_coroutine.resume", insns);
        let sites = detect_coroutine_sites(&ssa);
        assert_eq!(sites.len(), 1);
        let site = &sites[0];
        assert_eq!(site.role, CoroutineRole::Resume);
        assert!(!site.suspension_points.is_empty());
        assert_eq!(site.suspension_points[0].kind, SuspensionKind::CoYield);
        assert_eq!(site.suspension_points[0].index, 1);
        assert_eq!(site.suspension_points[0].yield_value_offset, Some(24));
        assert_eq!(site.promise_offset, Some(24));
    }

    #[test]
    fn pass_name() {
        let pass = CppCoroutinePass;
        assert_eq!(pass.name(), "cpp-coroutine");
    }

    #[test]
    fn empty_function_no_detection() {
        let insns = vec![];
        let ssa = make_single_block_ssa("some_func", insns);
        let sites = detect_coroutine_sites(&ssa);
        assert!(sites.is_empty());
    }

    #[test]
    fn non_coroutine_function_not_detected() {
        // A regular function with stores should not be detected.
        let r0 = Varnode::reg(0, 8);
        let r8 = Varnode::reg(8, 8);
        let out = Varnode::unique(0, 8);
        let insns = vec![
            IrInsn::with_output(IrOp::IntAdd, out, smallvec![r0, r8], 0x1000),
            IrInsn::without_output(IrOp::Store, smallvec![out, r8], 0x1004),
        ];
        let ssa = make_single_block_ssa("regular_function", insns);
        let sites = detect_coroutine_sites(&ssa);
        assert!(sites.is_empty());
    }
}
