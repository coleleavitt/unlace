//! t201 — annotate PAC-authenticated indirect calls.
//!
//! When a `Callind` (or `Callother`) target is loaded from a slot that
//! the dyld_shared_cache ARM64e v5 slide pass identified as PAC-signed
//! (see [`unlace_loader::dyld_cache::AuthPointer`] / `t190`), the call
//! site is annotated with the slot's key + diversifier so the printer
//! can render it as `__builtin_arm_authcall(target, key, disc)`.
//!
//! This pass is detection-only — it does not mutate the IR, only
//! returns a per-call-site annotation map keyed by `(BlockId, insn_idx)`.
//! Callers (typically the CLI pipeline) merge the result into a printer
//! annotation table keyed by VA.
//!
//! The pass is a no-op when `auth_pointers` is empty, which is the case
//! for every non-cache image (ELF / PE / standalone Mach-O) and for v1
//! through v4 caches.

use std::collections::BTreeMap;

use unlace_ir::ssa::{SsaFunction, SsaVarnode, VarnodeSlot};
use unlace_ir::{BlockId, IrOp, SpaceId};
use unlace_loader::dyld_cache::AuthPointer;

/// One PAC-authenticated indirect call site.
///
/// Fields mirror the matching [`AuthPointer`] slot: `key` selects the
/// PAC key (0=IA, 1=IB, 2=DA, 3=DB) and `diversifier` is the 15-bit
/// constant from the v5 chain entry. `use_addr_div` is propagated for
/// fidelity but the C printer rendering doesn't currently surface it —
/// it would only matter for a verifier that wants to re-sign the slot.
#[derive(Clone, Copy, Debug, PartialEq, Eq)]
pub struct AuthCallAnnotation {
    /// PAC key selector: 0=IA, 1=IB, 2=DA, 3=DB.
    pub key: u8,
    /// 15-bit constant discriminator.
    pub diversifier: u16,
    /// Whether the runtime XORs the slot's VA into the discriminator.
    pub use_addr_div: bool,
}

/// Identify every `Callind` / `Callother` in `func` whose target is
/// loaded from an [`AuthPointer`] slot, returning an annotation map
/// keyed by `(BlockId, insn_idx)`.
///
/// `image_base` is the virtual address of the image's first byte; auth
/// pointer offsets are *image-local* (relative to the start of the
/// extracted image bytes), so the match-against-LOAD-address rule is
/// `load_addr - image_base == auth_pointer.offset`.
///
/// When `auth_pointers` is empty the function does no work and returns
/// an empty map — this is the fast path for every non-cache image.
pub fn resolve_auth_calls(
    func: &SsaFunction,
    image_base: u64,
    auth_pointers: &[AuthPointer],
) -> BTreeMap<(BlockId, usize), AuthCallAnnotation> {
    let mut out = BTreeMap::new();
    if auth_pointers.is_empty() {
        return out;
    }

    // Build a `image_local_offset -> AuthPointer` lookup so per-call
    // resolution is O(1).
    let by_offset: BTreeMap<usize, &AuthPointer> =
        auth_pointers.iter().map(|p| (p.offset, p)).collect();

    for (&bid, block) in &func.function.blocks {
        for (insn_idx, insn) in block.insns.iter().enumerate() {
            if !matches!(insn.op, IrOp::Callind | IrOp::Callother) {
                continue;
            }
            // Target operand for Callind is inputs[0]; for Callother
            // inputs[0] is the intrinsic tag, so we look at inputs[1]
            // when present. This keeps the rule "the value being
            // *called* is what we care about".
            let target_idx = if insn.op == IrOp::Callind { 0 } else { 1 };
            let Some(_target_vn) = insn.inputs.get(target_idx) else {
                continue;
            };

            // Resolve the LOAD address (if any) that produced this
            // target. If the target was loaded from a constant address
            // inside an auth slot, we record the annotation.
            let Some(&target_sv) =
                func.var_map
                    .get(&(bid, insn_idx, VarnodeSlot::Input(target_idx)))
            else {
                continue;
            };
            let Some(load_addr) = trace_load_address(func, target_sv) else {
                continue;
            };
            let off = match load_addr.checked_sub(image_base) {
                Some(o) => o as usize,
                None => continue,
            };
            if let Some(ap) = by_offset.get(&off) {
                out.insert(
                    (bid, insn_idx),
                    AuthCallAnnotation {
                        key: ap.key,
                        diversifier: ap.diversifier,
                        use_addr_div: ap.use_addr_div,
                    },
                );
            }
        }
    }
    out
}

/// Walk back from `sv` through `Copy` and find the first `Load` whose
/// address operand is a constant. Returns the constant load address, or
/// `None` if the target wasn't produced by a load-from-constant.
///
/// We intentionally do *not* follow phi joins or non-constant loads —
/// an auth-call annotation must be precise; ambiguity yields no
/// annotation rather than a wrong one.
fn trace_load_address(func: &SsaFunction, sv: SsaVarnode) -> Option<u64> {
    let mut cur = sv;
    let mut hops = 0u32;
    // Modest bound — chains longer than this are almost certainly the
    // wrong call site and we'd rather bail than walk forever.
    while hops < 8 {
        hops += 1;
        let (bid, idx) = find_def(func, cur)?;
        let block = func.function.blocks.get(&bid)?;
        let insn = block.insns.get(idx)?;
        match insn.op {
            IrOp::Copy => {
                let inp = insn.inputs.first()?;
                if inp.space == SpaceId::Const {
                    // A copy from a constant *is* a direct call target,
                    // not a load. Not an auth-call.
                    return None;
                }
                cur = *func.var_map.get(&(bid, idx, VarnodeSlot::Input(0)))?;
            }
            IrOp::Load => {
                // Load is `output = LOAD(space, addr)`. `addr` is inputs[1].
                let addr = insn.inputs.get(1)?;
                if addr.space == SpaceId::Const {
                    return Some(addr.offset);
                }
                // Address came from another SSA value — follow it.
                cur = *func.var_map.get(&(bid, idx, VarnodeSlot::Input(1)))?;
            }
            _ => return None,
        }
    }
    None
}

/// Locate the `(BlockId, insn_idx)` whose **output** is `sv`. Phi
/// definitions are ignored (only direct instruction outputs are
/// considered, mirroring `indirect_call_resolve::find_def`).
fn find_def(func: &SsaFunction, sv: SsaVarnode) -> Option<(BlockId, usize)> {
    func.var_map.iter().find_map(|((bid, idx, slot), other)| {
        if *other == sv && matches!(slot, VarnodeSlot::Output) {
            Some((*bid, *idx))
        } else {
            None
        }
    })
}

#[cfg(test)]
mod tests {
    use super::*;
    use smallvec::smallvec;
    use unlace_ir::ssa::build_ssa;
    use unlace_ir::{BasicBlock, Function, IrInsn, Varnode};

    const IMAGE_BASE: u64 = 0x1_0000_0000;

    fn auth_ptr(offset: usize, key: u8, diversifier: u16) -> AuthPointer {
        AuthPointer {
            offset,
            key,
            diversifier,
            use_addr_div: false,
        }
    }

    /// Build a function with one block: `LOAD ram, K -> u0; CALLIND u0; RETURN 0`.
    fn callind_from_load(load_addr: u64) -> SsaFunction {
        let mut func = Function::new("vfn", BlockId(0), 0x1000);
        let mut bb = BasicBlock::new(BlockId(0));

        let target = Varnode::unique(0, 8);
        let space_ram = Varnode::constant(1, 8);
        let slot = Varnode::constant(load_addr, 8);

        bb.insns.push(IrInsn::with_output(
            IrOp::Load,
            target,
            smallvec![space_ram, slot],
            0x1000,
        ));
        bb.insns.push(IrInsn::without_output(
            IrOp::Callind,
            smallvec![target],
            0x1004,
        ));
        bb.insns.push(IrInsn::without_output(
            IrOp::Return,
            smallvec![Varnode::constant(0, 8)],
            0x1008,
        ));
        func.insert_block(bb);
        build_ssa(func)
    }

    /// A `Callind` whose target was loaded from a constant address that
    /// matches an `AuthPointer` slot ⇒ the call site gets annotated with
    /// that slot's key + diversifier.
    #[test]
    fn t201_callind_through_auth_slot_is_annotated() {
        let load_va = IMAGE_BASE + 0x40;
        let func = callind_from_load(load_va);
        let auth = vec![auth_ptr(0x40, 2 /* DA */, 0xABCD)];

        let ann = resolve_auth_calls(&func, IMAGE_BASE, &auth);
        assert_eq!(ann.len(), 1);
        let (&(bid, _idx), got) = ann.iter().next().unwrap();
        assert_eq!(bid, BlockId(0));
        assert_eq!(got.key, 2);
        assert_eq!(got.diversifier, 0xABCD);
        assert!(!got.use_addr_div);
    }

    /// A `Callind` whose target load address does *not* line up with
    /// any `AuthPointer` slot ⇒ no annotation.
    #[test]
    fn t201_non_auth_slot_load_yields_no_annotation() {
        let load_va = IMAGE_BASE + 0x80;
        let func = callind_from_load(load_va);
        // Auth slot at 0x40 — load is at 0x80, so no match.
        let auth = vec![auth_ptr(0x40, 0, 0x1234)];

        let ann = resolve_auth_calls(&func, IMAGE_BASE, &auth);
        assert!(
            ann.is_empty(),
            "load at 0x80 must not match auth slot at 0x40: {ann:?}"
        );
    }

    /// Pass-through for non-cache images: when `auth_pointers` is empty
    /// the pass produces no annotations regardless of the function
    /// shape — this is the universal fast path for ELF / PE / non-cache
    /// Mach-O binaries.
    #[test]
    fn t201_non_cache_image_passes_through() {
        let func = callind_from_load(IMAGE_BASE + 0x40);
        let ann = resolve_auth_calls(&func, IMAGE_BASE, &[]);
        assert!(
            ann.is_empty(),
            "empty auth_pointers must produce no annotations"
        );
    }
}
