//! Go closure / `funcval` recovery (t177).
//!
//! A Go closure is materialised at runtime as a `funcval` — a struct
//! whose first 8 bytes are a function pointer and whose remaining bytes
//! hold the captured variables, exactly as Go's runtime/closure.go
//! documents:
//!
//! ```text
//! struct funcval {
//!     u64 fn;          // entry point of the closure's body
//!     ...captures;     // arbitrary number of captured vars, ABI-laid-out
//! }
//! ```
//!
//! Call sites then load offset 0 of the funcval and CALLIND through it.
//! On amd64 the funcval pointer is passed in DX so the callee can reach
//! the captured state via `[DX + N]`.
//!
//! The compiler can place the funcval in two places:
//!
//!   * **Stack** — for closures that demonstrably don't escape, the
//!     compiler allocates the funcval directly on the caller's frame
//!     (`SpaceId::Stack`) and writes the fn-ptr / captures with plain
//!     STOREs.
//!
//!   * **Heap** — for escaping closures, the compiler emits a call to
//!     `runtime.newobject` (or similar) whose result is the base of the
//!     funcval. Captures are then STOREd through that returned pointer.
//!
//! This pass recognises both shapes and produces a [`ClosureCall`]
//! annotation per recovered `Callind`, surfacing the resolved `fn_addr`
//! (when the offset-0 store value is a constant) and the SSA varnodes
//! used as captures.

use unlace_ir::ssa::{SsaFunction, SsaVarnode, VarnodeSlot};
use unlace_ir::{BlockId, IrInsn, IrOp, SpaceId, Varnode};

/// Recovered Go closure call site.
///
/// One per `Callind` whose target is `LOAD(funcval + 0)` of a funcval
/// that was populated in the same basic block via STOREs.
#[derive(Clone, Debug, PartialEq, Eq)]
pub struct ClosureCall {
    /// CFG block holding the `Callind`.
    pub block_id: BlockId,
    /// Index of the `Callind` within its block.
    pub insn_idx: usize,
    /// Where the funcval lives — stack frame (`Stack`) or heap object
    /// returned by a previous `Call`.
    pub allocation: ClosureAllocation,
    /// Constant function-pointer value stored at offset 0, when known.
    ///
    /// `None` when the offset-0 STORE writes a non-constant SSA varnode
    /// (e.g. a runtime-resolved trampoline). Most real closures store a
    /// link-time-fixed function symbol, so this is populated in the
    /// common case.
    pub fn_addr: Option<u64>,
    /// SSA varnodes written into the funcval at offsets > 0, in source
    /// order (lowest byte-offset first).
    pub captures: Vec<SsaVarnode>,
}

/// How the funcval struct backing this closure was allocated.
#[derive(Clone, Copy, Debug, PartialEq, Eq)]
pub enum ClosureAllocation {
    /// Funcval lives on the caller's stack — non-escaping closure.
    Stack,
    /// Funcval was returned by a runtime allocator (`runtime.newobject`,
    /// `mallocgc`, …) and lives on the heap — escaping closure.
    Heap,
}

/// Scan `func` for Go closure call sites.
pub fn detect_go_closures(func: &SsaFunction) -> Vec<ClosureCall> {
    let mut out = Vec::new();

    for (&bid, block) in &func.function.blocks {
        let insns = &block.insns;
        for (callind_idx, insn) in insns.iter().enumerate() {
            if insn.op != IrOp::Callind || insn.inputs.is_empty() {
                continue;
            }
            let Some(closure) = try_match_closure_call(func, bid, insns, callind_idx) else {
                continue;
            };
            out.push(closure);
        }
    }

    out
}

/// Attempt to match a single `Callind` as a closure call.
///
/// 1. The CALLIND target must be the output of a LOAD whose address is
///    the funcval's base (offset 0 — exactly the layout of `funcval.fn`).
/// 2. The funcval base must be either a stack slot or the output of a
///    prior CALL (heap allocator).
/// 3. At least one earlier STORE in the same block writes a constant
///    fn-ptr (or any value) into offset 0 of that base. Without this
///    we can't tell a closure call from a generic function-pointer
///    indirect call.
fn try_match_closure_call(
    func: &SsaFunction,
    bid: BlockId,
    insns: &[IrInsn],
    callind_idx: usize,
) -> Option<ClosureCall> {
    let callind = &insns[callind_idx];
    let target = callind.inputs[0];

    // 1. Target must come from a LOAD.
    let load_idx = find_def(insns, callind_idx, &target)?;
    let load = &insns[load_idx];
    if load.op != IrOp::Load {
        return None;
    }
    let load_addr = load_address(load)?;

    // 2. Resolve load address to a `(base, offset)` pair. We only accept
    //    offset == 0 (funcval.fn lives at byte 0).
    let (closure_base, load_off) = resolve_offset(insns, load_idx, &load_addr);
    if load_off != 0 {
        return None;
    }

    // 3. Determine how the funcval was allocated.
    let allocation = classify_allocation(insns, load_idx, &closure_base)?;

    // 4. Walk all earlier STOREs in this block whose address resolves to
    //    `closure_base + K` (K >= 0). Offset 0 ⇒ fn-ptr; K > 0 ⇒ capture.
    let mut fn_addr: Option<u64> = None;
    let mut found_fn_store = false;
    // Use a sortable (offset, value_vn) collection so captures come out
    // in deterministic byte-offset order.
    let mut captures: Vec<(u64, Varnode)> = Vec::new();

    for (sidx, sinsn) in insns.iter().enumerate().take(callind_idx) {
        if sinsn.op != IrOp::Store || sinsn.inputs.len() < 3 {
            continue;
        }
        let saddr = sinsn.inputs[1];
        let svalue = sinsn.inputs[2];
        let (sbase, soff) = resolve_offset(insns, sidx, &saddr);
        if sbase != closure_base {
            continue;
        }
        if soff == 0 {
            found_fn_store = true;
            if svalue.space == SpaceId::Const {
                fn_addr = Some(svalue.offset);
            }
        } else {
            captures.push((soff, svalue));
        }
    }

    if !found_fn_store {
        return None;
    }

    captures.sort_by_key(|(off, _)| *off);
    let capture_ssa: Vec<SsaVarnode> = captures
        .into_iter()
        .map(|(_, vn)| {
            // Find this varnode's SSA version by looking it up at the
            // STORE-site input slot. The closure annotation surfaces the
            // value the user wrote, not the storage byte address.
            lookup_ssa(func, bid, &vn)
        })
        .collect();

    Some(ClosureCall {
        block_id: bid,
        insn_idx: callind_idx,
        allocation,
        fn_addr,
        captures: capture_ssa,
    })
}

/// Classify the funcval base as a stack slot or heap allocation.
///
/// Returns `None` for everything else (registers, globals, opaque
/// loads) — those aren't real funcvals, so the call isn't a closure.
fn classify_allocation(
    insns: &[IrInsn],
    before: usize,
    base: &Varnode,
) -> Option<ClosureAllocation> {
    // Direct stack varnode ⇒ stack alloca.
    if base.space == SpaceId::Stack {
        return Some(ClosureAllocation::Stack);
    }

    // Otherwise the base must be defined somewhere in this block.
    // Heap: defined by a CALL whose output is this varnode.
    // Stack (indirect): defined by an operation that adds a constant
    //   to a stack-base (e.g. `unique = stack_var + 0`) — keep simple
    //   and accept the def chain reaching a Stack varnode.
    if let Some(def_idx) = find_def(insns, before, base) {
        let def = &insns[def_idx];
        if matches!(def.op, IrOp::Call | IrOp::Callind) {
            return Some(ClosureAllocation::Heap);
        }
        // Trace one more level for stack pointers wrapped through a
        // COPY / IntAdd-with-zero / Ptradd shim.
        match def.op {
            IrOp::Copy if def.inputs.len() == 1 => {
                if def.inputs[0].space == SpaceId::Stack {
                    return Some(ClosureAllocation::Stack);
                }
            }
            IrOp::IntAdd | IrOp::Ptradd => {
                for inp in &def.inputs {
                    if inp.space == SpaceId::Stack {
                        return Some(ClosureAllocation::Stack);
                    }
                }
            }
            _ => {}
        }
    }

    None
}

/// Extract the address operand from a LOAD instruction.
fn load_address(load: &IrInsn) -> Option<Varnode> {
    match load.inputs.len() {
        1 => Some(load.inputs[0]),
        2.. => {
            // Two-input LOADs follow the IR convention `(space, addr)`.
            if load.inputs[0].space == SpaceId::Const {
                Some(load.inputs[1])
            } else {
                Some(load.inputs[0])
            }
        }
        _ => None,
    }
}

/// Resolve `vn` into `(base_varnode, byte_offset)` by inspecting its
/// defining instruction (`IntAdd` or `Ptradd` with a const operand).
///
/// When `vn` has no constant-offset shape, returns `(vn, 0)` — i.e. the
/// varnode is treated as a base at offset zero.
fn resolve_offset(insns: &[IrInsn], before: usize, vn: &Varnode) -> (Varnode, u64) {
    if vn.space == SpaceId::Const {
        return (*vn, 0);
    }

    if let Some(def_idx) = find_def(insns, before, vn) {
        let def = &insns[def_idx];
        match def.op {
            IrOp::IntAdd if def.inputs.len() == 2 => {
                let (a, b) = (def.inputs[0], def.inputs[1]);
                if b.space == SpaceId::Const && a.space != SpaceId::Const {
                    return (a, b.offset);
                }
                if a.space == SpaceId::Const && b.space != SpaceId::Const {
                    return (b, a.offset);
                }
            }
            IrOp::Ptradd if def.inputs.len() >= 2 => {
                let (base, idx) = (def.inputs[0], def.inputs[1]);
                if idx.space == SpaceId::Const && base.space != SpaceId::Const {
                    let elem_size =
                        if def.inputs.len() >= 3 && def.inputs[2].space == SpaceId::Const {
                            def.inputs[2].offset
                        } else {
                            1
                        };
                    return (base, idx.offset.wrapping_mul(elem_size));
                }
            }
            _ => {}
        }
    }

    (*vn, 0)
}

/// Walk backwards from `before` looking for an instruction whose
/// `output` matches `target`. Returns the producing instruction index.
fn find_def(insns: &[IrInsn], before: usize, target: &Varnode) -> Option<usize> {
    for j in (0..before).rev() {
        if let Some(out) = insns[j].output {
            if out == *target {
                return Some(j);
            }
        }
    }
    None
}

/// Resolve a raw `Varnode` to its SSA-versioned form by checking which
/// instruction in `bid` consumes it. Falls back to version 0 when the
/// SSA map doesn't have an entry — the caller still gets a structurally
/// correct varnode that downstream renderers can resolve.
fn lookup_ssa(func: &SsaFunction, bid: BlockId, vn: &Varnode) -> SsaVarnode {
    let Some(block) = func.function.blocks.get(&bid) else {
        return SsaVarnode {
            base: *vn,
            version: 0,
        };
    };
    for (i, insn) in block.insns.iter().enumerate() {
        for (slot_idx, inp) in insn.inputs.iter().enumerate() {
            if inp == vn {
                if let Some(sv) = func.var_map.get(&(bid, i, VarnodeSlot::Input(slot_idx))) {
                    return *sv;
                }
            }
        }
        if let Some(out) = insn.output {
            if out == *vn {
                if let Some(sv) = func.var_map.get(&(bid, i, VarnodeSlot::Output)) {
                    return *sv;
                }
            }
        }
    }
    SsaVarnode {
        base: *vn,
        version: 0,
    }
}

#[cfg(test)]
mod tests {
    use smallvec::smallvec;

    use unlace_ir::ssa::build_ssa;
    use unlace_ir::{BasicBlock, Function};

    use super::*;

    fn make_func(insns: Vec<IrInsn>) -> SsaFunction {
        let mut func = Function::new("test", BlockId(0), 0x1000);
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

    /// `space` argument used in STORE/LOAD encodings. Unused by the
    /// matcher but kept readable.
    fn space() -> Varnode {
        Varnode::constant(1, 4)
    }

    fn store(addr: Varnode, value: Varnode, ea: u64) -> IrInsn {
        IrInsn::without_output(IrOp::Store, smallvec![space(), addr, value], ea)
    }

    fn load(out: Varnode, addr: Varnode, ea: u64) -> IrInsn {
        IrInsn::with_output(IrOp::Load, out, smallvec![space(), addr], ea)
    }

    // -------------------------------------------------------------------
    // Stack-allocated closure
    //
    // funcval lives at `stack[-32]`. Captures are written at +8/+16, then
    // the call site loads offset 0 and CALLINDs it.
    // -------------------------------------------------------------------
    #[test]
    fn t177_recognises_stack_allocated_closure() {
        let funcval_base = Varnode::stack(-32i64 as u64, 8);
        let plus8 = Varnode::unique(0, 8);
        let plus16 = Varnode::unique(8, 8);
        let target = Varnode::unique(16, 8);

        let fn_ptr = Varnode::constant(0x4012_3456, 8);
        let capture_a = Varnode::reg(0, 8); // captured int
        let capture_b = Varnode::reg(8, 8); // captured ptr

        let insns = vec![
            // Funcval[0] = fn_ptr     — anchor store
            store(funcval_base, fn_ptr, 0x1000),
            // plus8 = stack_base + 8  — capture address
            IrInsn::with_output(
                IrOp::IntAdd,
                plus8,
                smallvec![funcval_base, Varnode::constant(8, 8)],
                0x1008,
            ),
            // Funcval[8] = capture_a
            store(plus8, capture_a, 0x100C),
            // plus16 = stack_base + 16
            IrInsn::with_output(
                IrOp::IntAdd,
                plus16,
                smallvec![funcval_base, Varnode::constant(16, 8)],
                0x1010,
            ),
            // Funcval[16] = capture_b
            store(plus16, capture_b, 0x1014),
            // target = LOAD(funcval_base)   — read fn-ptr out of funcval[0]
            load(target, funcval_base, 0x1018),
            // CALLIND(target)
            IrInsn::without_output(IrOp::Callind, smallvec![target], 0x1020),
        ];

        let ssa = make_func(insns);
        let recovered = detect_go_closures(&ssa);

        assert_eq!(
            recovered.len(),
            1,
            "expected exactly one stack-allocated closure"
        );
        let cc = &recovered[0];
        assert_eq!(cc.block_id, BlockId(0));
        assert_eq!(cc.allocation, ClosureAllocation::Stack);
        assert_eq!(cc.fn_addr, Some(0x4012_3456));
        assert_eq!(cc.captures.len(), 2, "captures = [capture_a, capture_b]");
        assert_eq!(cc.captures[0].base, capture_a);
        assert_eq!(cc.captures[1].base, capture_b);
        // CALLIND is the last non-Return insn.
        let block = ssa.function.blocks.get(&BlockId(0)).unwrap();
        assert_eq!(block.insns[cc.insn_idx].op, IrOp::Callind);
    }

    // -------------------------------------------------------------------
    // Heap-allocated closure
    //
    // The compiler emits `funcval_base = call runtime.newobject(...)`,
    // then populates the struct through that pointer, then CALLINDs
    // offset 0 of it.
    // -------------------------------------------------------------------
    #[test]
    fn t177_recognises_heap_allocated_closure() {
        let funcval_base = Varnode::reg(16, 8); // pretend RAX after newobject
        let plus8 = Varnode::unique(0, 8);
        let target = Varnode::unique(8, 8);

        // The call site for runtime.newobject — operand is a type-pointer
        // constant; the matcher only cares that the CALL produced `funcval_base`.
        let typ_ptr = Varnode::constant(0xDEAD_C0DE, 8);
        let fn_ptr = Varnode::constant(0x4099_AAAA, 8);
        let capture_a = Varnode::reg(24, 8);

        let insns = vec![
            // funcval_base = CALL(runtime.newobject, type_ptr)
            IrInsn::with_output(IrOp::Call, funcval_base, smallvec![typ_ptr], 0x2000),
            // funcval[0] = fn_ptr      — anchor store
            store(funcval_base, fn_ptr, 0x2008),
            // plus8 = funcval_base + 8
            IrInsn::with_output(
                IrOp::IntAdd,
                plus8,
                smallvec![funcval_base, Varnode::constant(8, 8)],
                0x200C,
            ),
            // funcval[8] = capture_a
            store(plus8, capture_a, 0x2010),
            // target = LOAD(funcval_base)
            load(target, funcval_base, 0x2014),
            // CALLIND(target)
            IrInsn::without_output(IrOp::Callind, smallvec![target], 0x2018),
        ];

        let ssa = make_func(insns);
        let recovered = detect_go_closures(&ssa);

        assert_eq!(
            recovered.len(),
            1,
            "expected exactly one heap-allocated closure"
        );
        let cc = &recovered[0];
        assert_eq!(cc.allocation, ClosureAllocation::Heap);
        assert_eq!(cc.fn_addr, Some(0x4099_AAAA));
        assert_eq!(cc.captures.len(), 1);
        assert_eq!(cc.captures[0].base, capture_a);
    }
}
