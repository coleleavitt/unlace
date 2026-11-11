//! c_printer: mem analysis.

use super::*;

/// Mark stack variables whose address is passed to a CALL as BYREF.
///
/// Detection runs over the linearized statement stream. We track the most
/// recent definition of every Varnode that resolves to `RSP/RBP + const`
/// (the address-of-stack-slot pattern produced by lifters) and, when a
/// `CALL`/`CALLIND` consumes such a varnode, the corresponding stack slot
/// is recorded in `byref_bases`. Direct `SpaceId::Stack` arguments are
/// also flagged.
pub(super) fn compute_byref_bases(ctx: &mut PrintCtx) {
    const RSP_REG_OFF: u64 = 32;
    const RBP_REG_OFF: u64 = 40;

    fn stack_offset_of_add(a: &Varnode, b: &Varnode) -> Option<i64> {
        if b.space != SpaceId::Const {
            return None;
        }
        if a.space == SpaceId::Register && (a.offset == RSP_REG_OFF || a.offset == RBP_REG_OFF) {
            return Some(b.offset as i64);
        }
        None
    }

    let mut stack_addr_def: BTreeMap<Varnode, i64> = BTreeMap::new();

    let stmt_indices: Vec<u32> = ctx.stmt_insns.keys().copied().collect();
    for idx in stmt_indices {
        let insn = match ctx.stmt_insns.get(&idx) {
            Some(i) => i.clone(),
            None => continue,
        };

        if matches!(insn.op, IrOp::IntAdd)
            && insn.inputs.len() == 2
            && let Some(out) = insn.output
        {
            let a = &insn.inputs[0];
            let b = &insn.inputs[1];
            let off = stack_offset_of_add(a, b).or_else(|| stack_offset_of_add(b, a));
            if let Some(off) = off {
                stack_addr_def.insert(out, off);
                continue;
            }
            if let Some(&base_off) = stack_addr_def.get(a)
                && b.space == SpaceId::Const
            {
                stack_addr_def.insert(out, base_off.wrapping_add(b.offset as i64));
                continue;
            }
            if let Some(&base_off) = stack_addr_def.get(b)
                && a.space == SpaceId::Const
            {
                stack_addr_def.insert(out, base_off.wrapping_add(a.offset as i64));
                continue;
            }
        }

        if matches!(insn.op, IrOp::Call | IrOp::Callind) {
            let skip = if matches!(insn.op, IrOp::Call) { 1 } else { 0 };
            for input in insn.inputs.iter().skip(skip) {
                if input.space == SpaceId::Stack {
                    ctx.byref_bases.insert(*input);
                } else if let Some(&off) = stack_addr_def.get(input) {
                    let stk = Varnode::stack(off as u64, input.size);
                    ctx.byref_bases.insert(stk);
                }
            }
        }
    }
}

/// t259: Classify constant absolute addresses as MMIO registers when they
/// exhibit the canonical memory-mapped-I/O access shape: multiple reads in
/// tight succession with no intervening write to the same address, or
/// multiple writes with no intervening read.
///
/// Why this heuristic: a non-volatile compiler is free to coalesce repeated
/// reads of the same address into a single load. When the source *did*
/// re-read (or re-write) the address back-to-back, the compiler-visible
/// shape only survives when the address is volatile-qualified. Conversely,
/// a normal global typically has interleaved reads and writes via locals,
/// so successive raw Loads of the same constant address are a strong
/// MMIO signal.
///
/// Threshold: ≥ 2 successive accesses of the same kind, with no
/// intervening opposite-kind access to that address. The scan iterates
/// `stmt_insns` in `next_stmt`-order (canonical emission order set up
/// by [`collect_varnodes`]). Non-constant addresses are ignored — those
/// could be aliasing pointers and we have no taint analysis here.
// `collapsible_match` would force the readable `if cond { body }` inside each
// match arm to migrate into match-guards, which hurts readability for these
// heuristic blocks. Keep the original shape.
#[allow(clippy::collapsible_match, clippy::collapsible_if)]
pub(super) fn detect_mmio_addrs(ctx: &mut PrintCtx) {
    use std::collections::BTreeMap;
    // Per-address state: (consecutive_loads, consecutive_stores).
    // A Load resets the store-streak (and vice-versa); the very first
    // access starts a streak of length 1.
    let mut state: BTreeMap<u64, (u32, u32)> = BTreeMap::new();

    // Filter: only classify addresses that look like plausible MMIO
    // register windows. Address 0 (and tiny constants) are typically
    // either FS-segment TLS offsets, null-deref placeholders, or
    // synthesized IR fixtures — definitely not MMIO. We use the same
    // 0x1000 floor as `try_emit_memory_annotation` so the two
    // analyses agree on "is this a real global address?"
    const MMIO_ADDR_FLOOR: u64 = 0x1000;

    // Iterate in statement order. `stmt_insns` is keyed by stmt_idx so
    // BTreeMap order is the canonical emit order.
    for insn in ctx.stmt_insns.values() {
        match insn.op {
            IrOp::Load => {
                // Load inputs = [space, address]. Only constant addresses
                // are candidates.
                if insn.inputs.len() >= 2 && insn.inputs[1].space == SpaceId::Const {
                    let addr = insn.inputs[1].offset;
                    if addr < MMIO_ADDR_FLOOR {
                        continue;
                    }
                    let entry = state.entry(addr).or_insert((0, 0));
                    entry.0 += 1;
                    entry.1 = 0;
                    if entry.0 >= 2 {
                        ctx.mmio_addrs.insert(addr);
                    }
                }
            }
            IrOp::Store => {
                // Store inputs = [space, address, value].
                if insn.inputs.len() >= 3 && insn.inputs[1].space == SpaceId::Const {
                    let addr = insn.inputs[1].offset;
                    if addr < MMIO_ADDR_FLOOR {
                        continue;
                    }
                    let entry = state.entry(addr).or_insert((0, 0));
                    entry.1 += 1;
                    entry.0 = 0;
                    if entry.1 >= 2 {
                        ctx.mmio_addrs.insert(addr);
                    }
                }
            }
            _ => {}
        }
    }
}
