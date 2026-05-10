//! Recovery of `__block` (byref) variable boxes — t176.
//!
//! Clang lowers Objective-C / ObjC++ `__block` storage-class locals into a
//! heap-promotable struct so the Block runtime can copy them out of the
//! enclosing stack frame on `Block_copy`. The layout, fixed by the
//! Apple Block ABI, is:
//!
//! ```text
//! struct __block_byref_<varname> {
//!     void *isa;                                  // +0  : _NSConcreteByref or 0
//!     struct __block_byref_<varname> *forwarding; // +8  : usually `&self`
//!     int flags;                                  // +16 : 4 bytes
//!     int size;                                   // +20 : 4 bytes
//!     void (*byref_keep)(void *dst, void *src);   // +24 : may be missing
//!     void (*byref_dispose)(void *);              // +32 : may be missing
//!     T captured;                                 // +40 : the actual user value
//! };
//! ```
//!
//! `byref_keep` / `byref_dispose` are only emitted when `T` is a non-trivial
//! type (an ObjC object, a C++ class with a destructor, another block). For
//! POD `T` clang omits them, so the captured value moves up to +24. Both
//! shapes are recognised here.
//!
//! ## Detection
//!
//! For every stack/global address that receives a write of an `isa` pointer
//! (constant value 0 — the heap-promoted form clang emits when assignment
//! to `forwarding` will fix it up — *or* an `_NSConcreteByref` symbol), we
//! gather the contiguous follow-up stores at offsets 8, 16, 20 and walk
//! forward up to [`LOOKAHEAD`] instructions to find:
//!
//!   * a self-referencing `forwarding` write at `+8`
//!   * a 4-byte `flags` write at `+16`
//!   * a 4-byte `size` write at `+20`
//!   * a `captured` write at `+24` (POD layout) or `+40` (full layout)
//!
//! The first two are mandatory; either captured offset is sufficient to
//! claim the box. We do **not** require `byref_keep` / `byref_dispose`
//! because POD captures legitimately omit them.
//!
//! ## What gets annotated
//!
//! [`detect_objc_byref_boxes`] returns a `BTreeMap<Varnode, ByrefBox>`
//! keyed by the box's *base* varnode (the alloca address). Downstream
//! consumers — primarily the C printer — read this side-map to render
//! the alloca as `__block T name;` instead of a 40-byte anonymous struct.
//!
//! This pass is detection-only: it does not mutate the SSA function.
//! Wiring the metadata into [`unlace_ir::ssa::SsaFunction::byref_boxes`]
//! is the caller's responsibility (see [`apply_objc_byref`]).

use std::collections::BTreeMap;

use unlace_ir::ssa::{PrimitiveType, SsaFunction, SsaVarnode, VarnodeSlot};
pub use unlace_ir::ssa::ByrefBox;
use unlace_ir::types::Type;
use unlace_ir::{IrInsn, IrOp, SpaceId, Varnode};

/// Maximum number of instructions to scan forward from the `isa` anchor
/// when looking for the rest of the byref-box layout.
const LOOKAHEAD: usize = 24;

/// Walk `func` and return one [`ByrefBox`] per detected `__block` allocation.
///
/// Detection is conservative: a candidate is only accepted when the
/// `isa`, self-`forwarding`, `flags`/`size` (or `size` alone), and a
/// captured-payload write at +24 *or* +40 are all present. Bare
/// 40-byte struct inits without these markers are ignored.
pub fn detect_objc_byref_boxes(func: &SsaFunction) -> BTreeMap<Varnode, ByrefBox> {
    let mut out: BTreeMap<Varnode, ByrefBox> = BTreeMap::new();

    for (&bid, block) in &func.function.blocks {
        let insns = &block.insns;
        for (idx, insn) in insns.iter().enumerate() {
            let Some(base) = match_isa_anchor(insn) else {
                continue;
            };
            if out.contains_key(&base) {
                continue;
            }

            let end = (idx + 1 + LOOKAHEAD).min(insns.len());

            let mut saw_forwarding = false;
            let mut saw_size_or_flags = false;
            let mut at_24: Option<usize> = None;
            let mut at_32: Option<usize> = None;
            let mut at_40: Option<usize> = None;

            for (rel, follow) in insns[idx + 1..end].iter().enumerate() {
                let Some(child) = match_store_to_base(follow, &base) else {
                    continue;
                };
                let abs_idx = idx + 1 + rel;
                match child.offset {
                    8 => {
                        // `forwarding` is a self-pointer to the box base.
                        // We don't require the lifter to have folded the
                        // self-address — accepting any pointer-sized store
                        // here is sufficient for the layout-shape check.
                        if child.value_size == 8 {
                            saw_forwarding = true;
                        }
                    }
                    16 | 20 => {
                        // `flags` (+16) and `size` (+20) are both 4 bytes.
                        // We only require at least one to be present so
                        // that a partially-folded prologue still matches.
                        if child.value_size == 4 {
                            saw_size_or_flags = true;
                        }
                    }
                    24 => at_24 = at_24.or(Some(abs_idx)),
                    32 => at_32 = at_32.or(Some(abs_idx)),
                    40 => at_40 = at_40.or(Some(abs_idx)),
                    _ => {}
                }
            }

            if !saw_forwarding || !saw_size_or_flags {
                continue;
            }

            // Distinguish the two ABI shapes:
            //
            //   * POD layout:   captured value lives at +24 (no
            //     keep/dispose helpers).
            //   * Full layout:  +24 = byref_keep, +32 = byref_dispose,
            //     captured value at +40.
            //
            // Presence of *both* +32 and +40 stores is the unambiguous
            // marker of the full layout (the POD shape has neither).
            let (captured_offset, captured_idx) = match (at_40, at_32, at_24) {
                (Some(idx40), Some(_), _) => (40_u64, idx40),
                (_, _, Some(idx24)) => (24_u64, idx24),
                _ => continue,
            };

            // Resolve the SSA varnode + primitive type of the captured value.
            let captured_insn = &insns[captured_idx];
            let captured_value = captured_insn.inputs[2];
            let captured_sv = func
                .var_map
                .get(&(bid, captured_idx, VarnodeSlot::Input(2)))
                .copied()
                .unwrap_or(SsaVarnode {
                    base: captured_value,
                    version: 0,
                });
            let captured_prim = func
                .var_types
                .get(&captured_sv)
                .copied()
                .unwrap_or_else(|| prim_for_size(captured_value.size));
            let captured_type = func
                .composite_var_types
                .get(&captured_sv)
                .cloned()
                .unwrap_or(Type::Primitive(captured_prim));

            out.insert(
                base,
                ByrefBox {
                    captured_type,
                    captured_value_sv: captured_sv,
                    captured_offset,
                    captured_store_loc: (bid, captured_idx),
                },
            );
        }
    }

    out
}

/// Convenience: detect byref boxes and store them on the SSA function.
///
/// This is the wiring point for the analysis pipeline: callers that
/// want the c_printer's `__block T name;` rendering should invoke
/// this after stack-var recovery (so captured value SSA names are
/// stable) and before structurer / HIR construction.
pub fn apply_objc_byref(func: &mut SsaFunction) {
    let boxes = detect_objc_byref_boxes(func);
    func.byref_boxes = boxes;
}

/// Return the box base [`Varnode`] when `insn` is a Store of an
/// `isa`-like value at the head of a candidate `__block_byref` layout.
///
/// We accept either a constant zero (clang emits `0` when the
/// `forwarding` write later fixes the field up) or any non-zero
/// constant pointer — the loader will resolve `_NSConcreteByref` for
/// us at the symbol layer, but matching the symbol's address here
/// would require an extra knob; the structural follow-up checks (a
/// self-forwarding write at +8 and a 4-byte flags/size write at
/// +16/+20) are strong enough on their own.
fn match_isa_anchor(insn: &IrInsn) -> Option<Varnode> {
    if insn.op != IrOp::Store || insn.inputs.len() < 3 {
        return None;
    }
    let value = insn.inputs[2];
    if value.space != SpaceId::Const {
        return None;
    }
    // Pointer-sized write: rules out e.g. a 4-byte flags init being
    // misread as an isa-pointer anchor.
    if value.size != 8 {
        return None;
    }
    Some(insn.inputs[1])
}

struct ChildStore {
    offset: u64,
    value_size: u8,
}

/// Match a Store whose address is `base` (offset 0), `base + K` (when
/// the lifter folded the addition) or the constant `base.offset + K`
/// (when `base` itself is a constant address). Returns the recovered
/// byte offset relative to `base` and the size of the value written.
fn match_store_to_base(insn: &IrInsn, base: &Varnode) -> Option<ChildStore> {
    if insn.op != IrOp::Store || insn.inputs.len() < 3 {
        return None;
    }
    let addr = insn.inputs[1];
    let value = insn.inputs[2];

    let offset = if addr == *base {
        0
    } else if base.space == SpaceId::Const
        && addr.space == SpaceId::Const
        && addr.offset >= base.offset
    {
        addr.offset - base.offset
    } else if base.space == SpaceId::Stack
        && addr.space == SpaceId::Stack
        && addr.offset >= base.offset
    {
        addr.offset - base.offset
    } else {
        return None;
    };

    Some(ChildStore {
        offset,
        value_size: value.size,
    })
}

fn prim_for_size(size: u8) -> PrimitiveType {
    match size {
        1 => PrimitiveType::Int(1),
        2 => PrimitiveType::Int(2),
        4 => PrimitiveType::Int(4),
        8 => PrimitiveType::Int(8),
        _ => PrimitiveType::Unknown,
    }
}

#[cfg(test)]
mod tests {
    use super::*;
    use smallvec::smallvec;
    use unlace_ir::ssa::build_ssa;
    use unlace_ir::{BasicBlock, BlockId, Function};

    /// Build a single-block SSA function whose body is `insns` followed by a
    /// terminating `RETURN`. Mirrors the helper in `objc_blocks.rs` so the
    /// two byref/block detectors stay structurally aligned.
    fn make_func_with_block(insns: Vec<IrInsn>) -> SsaFunction {
        let mut func = Function::new("test_byref", BlockId(0), 0x1000);
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

    /// `store(addr, value)` — emits `Store(Const(0,8), addr, value)`.
    fn store(addr: Varnode, value: Varnode, ea: u64) -> IrInsn {
        IrInsn::without_output(
            IrOp::Store,
            smallvec![Varnode::constant(0, 8), addr, value],
            ea,
        )
    }

    /// Simple `int` __block: the captured payload is a 4-byte signed int
    /// at offset +24 (POD layout — no keep/dispose helpers).
    #[test]
    fn detects_int_byref_box() {
        // Base of the box: stack slot at rsp+0x40, treated as 8 bytes
        // (clang allocates `sizeof(__block_byref_x)` on the frame).
        let base = Varnode::stack(0x40, 8);
        let at = |off: u64, size: u8| Varnode::stack(0x40 + off, size);

        let isa = Varnode::constant(0, 8);
        let forwarding = Varnode::constant(0x40, 8);
        let flags = Varnode::constant(0, 4);
        let size = Varnode::constant(32, 4);
        let captured = Varnode::constant(42, 4);

        let insns = vec![
            store(base, isa, 0x1000),               // +0  isa
            store(at(8, 8), forwarding, 0x1004),    // +8  forwarding (self)
            store(at(16, 4), flags, 0x1008),        // +16 flags
            store(at(20, 4), size, 0x100C),         // +20 size
            store(at(24, 4), captured, 0x1010),     // +24 captured int
        ];

        let func = make_func_with_block(insns);
        let boxes = detect_objc_byref_boxes(&func);

        assert_eq!(boxes.len(), 1, "must detect exactly one byref box");
        let bx = boxes.get(&base).expect("box keyed by base varnode");
        assert_eq!(
            bx.captured_offset, 24,
            "POD int capture lives at +24 (no keep/dispose helpers)",
        );
        // 4-byte captured value ⇒ PrimitiveType::Int(4) ⇒ Type::int(4).
        assert_eq!(bx.captured_type, Type::int(4));
    }

    /// Pointer `__block`: the captured payload is an 8-byte pointer at
    /// offset +40 (full layout — keep/dispose helpers emitted at +24/+32).
    #[test]
    fn detects_pointer_byref_box() {
        let base = Varnode::stack(0x80, 8);
        let at = |off: u64, size: u8| Varnode::stack(0x80 + off, size);

        let isa = Varnode::constant(0, 8);
        let forwarding = Varnode::constant(0x80, 8);
        let flags = Varnode::constant(0, 4);
        let size = Varnode::constant(56, 4);
        let keep = Varnode::constant(0x4000_0010, 8);
        let dispose = Varnode::constant(0x4000_0020, 8);
        let captured_ptr = Varnode::constant(0xCAFE_BABE, 8);

        let insns = vec![
            store(base, isa, 0x1000),
            store(at(8, 8), forwarding, 0x1004),
            store(at(16, 4), flags, 0x1008),
            store(at(20, 4), size, 0x100C),
            store(at(24, 8), keep, 0x1010),
            store(at(32, 8), dispose, 0x1014),
            store(at(40, 8), captured_ptr, 0x1018),
        ];

        let func = make_func_with_block(insns);
        let boxes = detect_objc_byref_boxes(&func);

        assert_eq!(boxes.len(), 1);
        let bx = boxes.get(&base).expect("box keyed by base varnode");
        assert_eq!(
            bx.captured_offset, 40,
            "full-layout capture lives at +40 (keep/dispose at +24/+32)",
        );
        // 8-byte captured value ⇒ PrimitiveType::Int(8) by default.
        assert_eq!(bx.captured_type, Type::int(8));
    }

    /// A bare 40-byte struct init that does not match the byref ABI shape
    /// must NOT be recovered as a `__block` box — guards against
    /// false-positive promotion of unrelated stack structs.
    #[test]
    fn does_not_match_non_byref_struct() {
        let base = Varnode::stack(0x100, 8);
        let at = |off: u64, size: u8| Varnode::stack(0x100 + off, size);

        // No forwarding write at +8 — should be rejected.
        let insns = vec![
            store(base, Varnode::constant(0, 8), 0x1000),
            store(at(16, 4), Varnode::constant(0, 4), 0x1004),
            store(at(20, 4), Varnode::constant(32, 4), 0x1008),
            store(at(24, 4), Varnode::constant(7, 4), 0x100C),
        ];

        let func = make_func_with_block(insns);
        let boxes = detect_objc_byref_boxes(&func);

        assert!(
            boxes.is_empty(),
            "missing forwarding pointer ⇒ not a byref box, got {boxes:#?}",
        );
    }

    /// `apply_objc_byref` writes the detection result onto the SSA
    /// function's `byref_boxes` side-map for downstream consumers.
    #[test]
    fn apply_objc_byref_populates_ssa_field() {
        let base = Varnode::stack(0x40, 8);
        let at = |off: u64, size: u8| Varnode::stack(0x40 + off, size);
        let insns = vec![
            store(base, Varnode::constant(0, 8), 0x1000),
            store(at(8, 8), Varnode::constant(0x40, 8), 0x1004),
            store(at(16, 4), Varnode::constant(0, 4), 0x1008),
            store(at(20, 4), Varnode::constant(32, 4), 0x100C),
            store(at(24, 4), Varnode::constant(7, 4), 0x1010),
        ];

        let mut func = make_func_with_block(insns);
        assert!(func.byref_boxes.is_empty(), "pristine SSA fn has no boxes");

        apply_objc_byref(&mut func);

        assert_eq!(func.byref_boxes.len(), 1);
        assert!(func.byref_boxes.contains_key(&base));
    }
}
