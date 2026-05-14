//! `sizeof(T)` / `alignof(T)` IR producer.
//!
//! The IR's 75-opcode spec (SS4.4) is frozen, so we *cannot* introduce a
//! new `IrOp::Sizeof` opcode without bumping the spec version. Instead this
//! pass records *type metadata* on a side-map keyed by `(BlockId, insn_idx)`:
//!
//! * [`SsaFunction::sizeof_type_map`] — the `Type` whose byte size matches
//!   the constant operand at this instruction.
//! * [`SsaFunction::alignof_type_map`] — the `Type` whose alignment matches
//!   the bitmask at this instruction.
//!
//! The C printer (and any downstream consumer) consults the side-maps and
//! emits `sizeof(struct Foo)` / `alignof(struct Foo)` in place of the
//! literal byte count.
//!
//! Recognised patterns:
//!
//! 1. **`malloc(N)` / `operator new(N)` / `operator new[](N)`** — the size
//!    argument is a constant matching the size of a known struct in scope.
//! 2. **`calloc(elem_count, N)`** — the *element-size* argument (second
//!    operand by SysV ABI) is a constant struct size.
//! 3. **`memcpy(dst, src, N)` / `memset(dst, val, N)` / `realloc(p, N)`** —
//!    the size operand (third or second) is a constant struct size.
//! 4. **`IntAnd(addr, ~(N-1))`** where `N` is a power of two equal to a
//!    known struct's alignment — the second mask operand is recorded as
//!    `alignof(T)`.
//!
//! All unrecognised constants stay constants — no IR mutation.

use unlace_ir::ssa::{CallingConvention, SsaFunction};
use unlace_ir::types::Type;
use unlace_ir::{BlockId, IrOp, SpaceId};

use crate::pass::{Pass, PassError};

/// SLEIGH register offsets used to find `Copy`s of constants into argument
/// registers preceding a call. Mirrors `caller_param_propagate`.
const RCX: u64 = 8;
const RDX: u64 = 16;
const RSI: u64 = 48;
const RDI: u64 = 56;
const R8: u64 = 64;
const R9: u64 = 72;

/// `(name, size_arg_position)` for every recognised allocator. Position is
/// 0-indexed against the SysV/MS x64 argument-register sequence; for
/// `calloc` the *element-size* (second arg) is what we tag.
const ALLOC_FAMILY: &[(&str, usize)] = &[
    ("malloc", 0),
    ("_Znwm", 0),   // operator new(unsigned long)
    ("_Znam", 0),   // operator new[](unsigned long)
    ("realloc", 1), // realloc(void *, size_t)
    ("calloc", 1),  // calloc(nmemb, size)
    ("memcpy", 2),  // memcpy(dst, src, n)
    ("memmove", 2),
    ("memset", 2), // memset(dst, byte, n)
];

/// Struct type plus its byte size, used by the recognition scan.
#[derive(Clone, Debug)]
struct SizedType {
    ty: Type,
    size: u64,
}

/// Recognise `sizeof` / `alignof` patterns inside `func`, given a
/// resolver from call-target address → callee name and the set of
/// `(name, struct_type)` pairs in scope.
///
/// Returns `true` when at least one new entry was added.
pub fn recognize_with_resolver<F>(func: &mut SsaFunction, resolve_name: F, structs: &[Type]) -> bool
where
    F: Fn(u64) -> Option<&'static str>,
{
    let sized: Vec<SizedType> = structs
        .iter()
        .filter_map(|ty| {
            ty.size().map(|sz| SizedType {
                ty: ty.clone(),
                size: sz as u64,
            })
        })
        .collect();

    if sized.is_empty() {
        return false;
    }

    let cc = func.calling_convention;
    let arg_regs = arg_regs_for(cc);

    let mut changed = false;
    let block_ids: Vec<BlockId> = func.function.blocks.keys().copied().collect();

    for bid in block_ids {
        let block = match func.function.blocks.get(&bid) {
            Some(b) => b,
            None => continue,
        };

        for (idx, insn) in block.insns.iter().enumerate() {
            // Pattern 1-3: allocators — Call with a Const target whose
            // resolved name is in ALLOC_FAMILY.
            if insn.op == IrOp::Call {
                if let Some((target_name, sz_pos)) = resolve_call_alloc(insn, &resolve_name) {
                    if let Some(reg) = arg_regs.get(sz_pos).copied() {
                        if let Some(c) = trace_const_into_reg(block, idx, reg) {
                            if let Some(t) = sized.iter().find(|s| s.size == c) {
                                func.sizeof_type_map.insert((bid, idx), t.ty.clone());
                                changed = true;
                                tracing::trace!(
                                    target = target_name,
                                    size = c,
                                    "sizeof recognised at {bid:?}, idx={idx}"
                                );
                            }
                        }
                    }
                }
            }

            // Pattern 4: `IntAnd(addr, ~(N-1))` for N = 2^k.
            if insn.op == IrOp::IntAnd && insn.inputs.len() >= 2 {
                let mask_vn = if insn.inputs[1].space == SpaceId::Const {
                    Some(&insn.inputs[1])
                } else if insn.inputs[0].space == SpaceId::Const {
                    Some(&insn.inputs[0])
                } else {
                    None
                };
                if let Some(mask) = mask_vn {
                    if let Some(align) = mask_to_alignment(mask.offset, mask.size) {
                        if let Some(t) = sized.iter().find(|s| s.size == align) {
                            // Only mark "alignof" if the mask actually
                            // corresponds to a *power-of-two* alignment
                            // matching a known type's size — primitives
                            // larger than 1 with size 1/2/4/8/16 qualify.
                            if align.is_power_of_two() {
                                func.alignof_type_map.insert((bid, idx), t.ty.clone());
                                changed = true;
                            }
                        }
                    }
                }
            }
        }
    }

    changed
}

fn arg_regs_for(cc: CallingConvention) -> &'static [u64] {
    match cc {
        CallingConvention::SystemV => &[RDI, RSI, RDX, RCX, R8, R9],
        CallingConvention::MicrosoftX64 => &[RCX, RDX, R8, R9],
        // Default to SysV for unknown — the constant tracking is
        // best-effort and a wrong CC just means the heuristic misses.
        _ => &[RDI, RSI, RDX, RCX, R8, R9],
    }
}

/// If `insn` is a `Call` to a const target whose resolved name is in
/// `ALLOC_FAMILY`, return `(name, size_arg_position)`.
fn resolve_call_alloc<F>(
    insn: &unlace_ir::IrInsn,
    resolve_name: &F,
) -> Option<(&'static str, usize)>
where
    F: Fn(u64) -> Option<&'static str>,
{
    let target_vn = insn.inputs.first()?;
    if target_vn.space != SpaceId::Const {
        return None;
    }
    let name = resolve_name(target_vn.offset)?;
    ALLOC_FAMILY.iter().copied().find(|(n, _)| *n == name)
}

/// Walk the block backwards from just before `call_idx` looking for the
/// most recent `Copy` whose output is `reg` and whose input is a const.
/// Returns the const value when found.
fn trace_const_into_reg(block: &unlace_ir::BasicBlock, call_idx: usize, reg: u64) -> Option<u64> {
    for prev_idx in (0..call_idx).rev() {
        let insn = &block.insns[prev_idx];
        let Some(out) = insn.output.as_ref() else {
            continue;
        };
        // Stop the search if we hit *any* write to this register; only
        // the most recent write counts.
        if out.space != SpaceId::Register || out.offset != reg {
            continue;
        }
        if insn.op != IrOp::Copy {
            return None;
        }
        let src = insn.inputs.first()?;
        if src.space != SpaceId::Const {
            return None;
        }
        return Some(src.offset);
    }
    None
}

/// If `mask` is the bit pattern `~(N-1)` truncated to `width` bytes for
/// some power-of-two `N`, return `N`. Otherwise `None`.
fn mask_to_alignment(mask: u64, width: u8) -> Option<u64> {
    let lim = if width >= 8 {
        u64::MAX
    } else {
        (1u64 << (width as u32 * 8)) - 1
    };
    let mask = mask & lim;
    // ~(N-1) truncated has the form `lim ^ (N - 1)`. So `N - 1 = lim ^ mask`.
    let n_minus_1 = lim ^ mask;
    if n_minus_1 == 0 {
        return None;
    }
    let n = n_minus_1.checked_add(1)?;
    if n.is_power_of_two() { Some(n) } else { None }
}

/// `Pass` adapter: recognises `sizeof`/`alignof` against the function's
/// own `composite_var_types` plus `inferred_structs` (no extra context
/// required). For wider recognition (every struct in the binary), call
/// [`recognize_with_resolver`] directly.
#[derive(Default)]
pub struct SizeofRecognitionPass {
    /// Optional name resolver (call-target address → callee name).
    /// When `None`, no allocator-shaped patterns are recognised; only the
    /// `IntAnd` alignment pattern is detected (it doesn't need a resolver).
    pub name_resolver: Option<Box<dyn Fn(u64) -> Option<&'static str> + Send + Sync>>,
}


impl Pass for SizeofRecognitionPass {
    fn name(&self) -> &str {
        "sizeof-recognition"
    }

    fn run(&self, func: &mut SsaFunction) -> Result<bool, PassError> {
        let mut structs: Vec<Type> = func.composite_var_types.values().cloned().collect();
        structs.extend(func.inferred_structs.values().cloned());

        let resolver: Box<dyn Fn(u64) -> Option<&'static str>> = match &self.name_resolver {
            Some(r) => Box::new(r),
            None => Box::new(|_| None),
        };

        Ok(recognize_with_resolver(func, &resolver, &structs))
    }
}

#[cfg(test)]
mod tests {
    use smallvec::smallvec;

    use unlace_ir::ssa::build_ssa;
    use unlace_ir::types::{StructFieldType, Type};
    use unlace_ir::{BasicBlock, BlockId, Function, IrInsn, IrOp, Varnode};

    use super::*;

    fn point_struct() -> Type {
        Type::Struct {
            name: "Point".into(),
            fields: vec![
                StructFieldType {
                    name: "x".into(),
                    ty: Type::int(4),
                    offset: 0,
                },
                StructFieldType {
                    name: "y".into(),
                    ty: Type::int(4),
                    offset: 4,
                },
            ],
        }
    }

    /// Build a single-block func that does `Copy K -> RDI; Call <fn>;`.
    fn build_call_with_const_size_arg(
        const_value: u64,
        size_reg: u64,
        callee_addr: u64,
    ) -> SsaFunction {
        let mut func = Function::new("caller", BlockId(0), 0x1000);
        let mut bb = BasicBlock::new(BlockId(0));
        bb.insns.push(IrInsn::with_output(
            IrOp::Copy,
            Varnode::reg(size_reg, 8),
            smallvec![Varnode::constant(const_value, 8)],
            0x1000,
        ));
        bb.insns.push(IrInsn::without_output(
            IrOp::Call,
            smallvec![Varnode::constant(callee_addr, 8)],
            0x1004,
        ));
        bb.insns.push(IrInsn::without_output(
            IrOp::Return,
            smallvec![Varnode::constant(0, 8)],
            0x1008,
        ));
        func.insert_block(bb);
        let mut ssa = build_ssa(func);
        ssa.calling_convention = CallingConvention::SystemV;
        ssa
    }

    fn resolver(target: u64) -> impl Fn(u64) -> Option<&'static str> {
        move |a| {
            if a == target {
                Some("malloc")
            } else if a == 0xBEEF {
                Some("memcpy")
            } else {
                None
            }
        }
    }

    #[test]
    fn test_recognise_sizeof_in_malloc() {
        // sizeof(Point) = 8 bytes. malloc(8) ⇒ tag insn 1 with Point.
        let pt = point_struct();
        assert_eq!(pt.size(), Some(8));

        let mut ssa = build_call_with_const_size_arg(8, RDI, 0xCAFE);
        let r = move |a: u64| if a == 0xCAFE { Some("malloc") } else { None };
        let changed = recognize_with_resolver(&mut ssa, r, std::slice::from_ref(&pt));

        assert!(changed);
        assert_eq!(
            ssa.sizeof_type_map.get(&(BlockId(0), 1)),
            Some(&pt),
            "Call insn at idx=1 must be tagged sizeof(Point)"
        );
    }

    #[test]
    fn test_recognise_sizeof_in_memcpy() {
        // memcpy(dst, src, sizeof(Point)): size in RDX (3rd SysV arg).
        let pt = point_struct();
        let mut ssa = build_call_with_const_size_arg(8, RDX, 0xBEEF);
        let r = move |a: u64| if a == 0xBEEF { Some("memcpy") } else { None };
        let changed = recognize_with_resolver(&mut ssa, r, std::slice::from_ref(&pt));

        assert!(changed);
        assert_eq!(ssa.sizeof_type_map.get(&(BlockId(0), 1)), Some(&pt));
    }

    #[test]
    fn test_recognise_alignof_in_mask() {
        // For an 8-byte (alignof = 8) struct: aligning a pointer is
        // `IntAnd(p, ~7) = IntAnd(p, 0xFFFF_FFFF_FFFF_FFF8)` on 64-bit.
        // Verify the recognition pass tags the IntAnd insn.
        let pt = point_struct();
        let mut func = Function::new("aligner", BlockId(0), 0x1000);
        let mut bb = BasicBlock::new(BlockId(0));
        let p = Varnode::reg(0, 8);
        let aligned = Varnode::reg(8, 8);
        bb.insns.push(IrInsn::with_output(
            IrOp::IntAnd,
            aligned,
            smallvec![p, Varnode::constant(0xFFFF_FFFF_FFFF_FFF8, 8)],
            0x1000,
        ));
        bb.insns
            .push(IrInsn::without_output(IrOp::Return, smallvec![], 0x1004));
        func.insert_block(bb);
        let mut ssa = build_ssa(func);

        let r = |_: u64| -> Option<&'static str> { None };
        let changed = recognize_with_resolver(&mut ssa, r, std::slice::from_ref(&pt));

        assert!(changed);
        assert_eq!(
            ssa.alignof_type_map.get(&(BlockId(0), 0)),
            Some(&pt),
            "IntAnd with mask = ~7 must be tagged alignof(Point)"
        );
    }

    #[test]
    fn test_unrelated_const_left_alone() {
        // A Call to a function we don't know about (resolver returns None)
        // must NOT add any sizeof entries even when the constant matches a
        // struct's size.
        let pt = point_struct();
        let mut ssa = build_call_with_const_size_arg(8, RDI, 0xDEAD);
        let r = |_: u64| -> Option<&'static str> { None };
        let changed = recognize_with_resolver(&mut ssa, r, std::slice::from_ref(&pt));

        assert!(!changed);
        assert!(ssa.sizeof_type_map.is_empty());
        assert!(ssa.alignof_type_map.is_empty());

        // Likewise a malloc() with a size that doesn't match any struct.
        let mut ssa2 = build_call_with_const_size_arg(99, RDI, 0xCAFE);
        let r2 = |a: u64| if a == 0xCAFE { Some("malloc") } else { None };
        assert!(!recognize_with_resolver(&mut ssa2, r2, std::slice::from_ref(&pt)));
        assert!(ssa2.sizeof_type_map.is_empty());

        // Use resolver helper too to keep it referenced.
        let _r3 = resolver(0xCAFE);
    }
}
