//! (kuna `globalwidth`) The width a program reads and writes each sized data
//! object with.
//!
//! A symbol-table data object (`STT_OBJECT`) has a size but no type, so it is
//! mapped as `undefined<size>`: a `short g[8]` is an opaque 16-byte blob, and
//! every element access renders as `*(short *)&g[i * 2]`. IDA sizes the item
//! from the operand of the instructions that use it (`insn_create_op_data`,
//! `sub_5f4c80` in the final pass). This reads the same evidence from the
//! decoded Listing: every `LOAD` or `STORE` whose address is a constant or a
//! constant plus something, and every direct data-space operand, that lands
//! inside an object, at the width of the value moved. An object every access of
//! which uses one width `w` that divides its size gets that width; the commit
//! then maps it as `undefined<w>` or an array of `size / w` of them.

use std::collections::BTreeMap;
use std::rc::Rc;

use unlace_base::space::AddrSpace;
use unlace_num::opcodes::OpCode;
use unlace_sleigh::translate::Translate;

use super::Listing;
use super::xrefs::{FullCapture, decode};

/// `(object address, width)` for every object in `objects` (`(addr, size)`)
/// that the decoded code only ever reads or writes at one width dividing its
/// size, and (for a width short of the size) that some access indexes into or
/// lands past the first element of: one `(int)g` read of a `long g` is a
/// narrowing, not an array.
pub fn access_widths(
    listing: &Listing,
    translate: &dyn Translate,
    code_space: &Rc<AddrSpace>,
    data_space: &Rc<AddrSpace>,
    objects: &[(u64, u64)],
) -> Vec<(u64, u32)> {
    let mut sorted: Vec<(u64, u64)> = objects.iter().copied().filter(|&(_, s)| s > 0).collect();
    sorted.sort_unstable();
    if sorted.is_empty() {
        return Vec::new();
    }
    let owner = |a: u64| -> Option<u64> {
        let i = sorted.partition_point(|&(s, _)| s <= a);
        let (s, size) = *sorted.get(i.checked_sub(1)?)?;
        (a < s + size).then_some(s)
    };
    // width per object (0 = conflicting widths seen), and whether any access
    // indexes into it or lands past its first element
    let mut seen: BTreeMap<u64, (u32, bool)> = BTreeMap::new();
    let mut note = |a: u64, w: u32, indexed: bool| {
        if let Some(o) = owner(a) {
            let e = seen.entry(o).or_insert((w, false));
            if e.0 != w {
                e.0 = 0;
            }
            e.1 |= indexed || a != o;
        }
    };
    let is_data = |vn: &unlace_num::pcoderaw::VarnodeData| {
        vn.space.as_ref().is_some_and(|s| Rc::ptr_eq(s, data_space))
    };
    let is_const = |vn: &unlace_num::pcoderaw::VarnodeData| {
        vn.space
            .as_ref()
            .is_some_and(|s| s.get_type() == unlace_base::space::spacetype::IPTR_CONSTANT)
    };
    let mut cap = FullCapture::default();
    for (&vma, _) in listing.instructions() {
        if decode(translate, vma, code_space, &mut cap).is_none() {
            continue;
        }
        let ops = cap.ops();
        // temporaries holding a constant, or a constant plus something
        let mut bases: Vec<(&unlace_num::pcoderaw::VarnodeData, u64, bool)> = Vec::new();
        let base_of = |vn: &unlace_num::pcoderaw::VarnodeData,
                       bases: &[(&unlace_num::pcoderaw::VarnodeData, u64, bool)]|
         -> Option<(u64, bool)> {
            if is_const(vn) {
                return Some((vn.offset, false));
            }
            bases
                .iter()
                .rev()
                .find(|(b, _, _)| {
                    b.space
                        .as_ref()
                        .zip(vn.space.as_ref())
                        .is_some_and(|(x, y)| Rc::ptr_eq(x, y))
                        && b.offset == vn.offset
                        && b.size == vn.size
                })
                .map(|&(_, c, i)| (c, i))
        };
        for op in ops {
            let flow = matches!(
                op.opcode,
                OpCode::CPUI_BRANCH | OpCode::CPUI_CBRANCH | OpCode::CPUI_CALL
            );
            for vn in op.ins.iter().skip(usize::from(flow)).chain(op.out.iter()) {
                if is_data(vn) {
                    note(vn.offset, vn.size, false);
                }
            }
            match op.opcode {
                OpCode::CPUI_LOAD | OpCode::CPUI_STORE => {
                    let Some(ptr) = op.ins.get(1) else { continue };
                    let width = if op.opcode == OpCode::CPUI_LOAD {
                        op.out.as_ref().map(|o| o.size)
                    } else {
                        op.ins.get(2).map(|v| v.size)
                    };
                    if let (Some((c, indexed)), Some(w)) = (base_of(ptr, &bases), width) {
                        note(c, w, indexed);
                    }
                }
                OpCode::CPUI_COPY | OpCode::CPUI_INT_ADD | OpCode::CPUI_PTRADD => {
                    let Some(out) = op.out.as_ref() else { continue };
                    let c = if op.opcode == OpCode::CPUI_COPY {
                        op.ins.first().and_then(|v| base_of(v, &bases))
                    } else {
                        let known: Vec<(u64, bool)> = op
                            .ins
                            .iter()
                            .take(2)
                            .filter_map(|v| base_of(v, &bases))
                            .collect();
                        match known.as_slice() {
                            [(a, i), (b, j)] => Some((a.wrapping_add(*b), *i || *j)),
                            [(a, _)] => Some((*a, true)),
                            _ => None,
                        }
                    };
                    if let Some((c, indexed)) = c {
                        bases.push((out, c, indexed));
                    }
                }
                _ => {}
            }
        }
    }
    sorted
        .iter()
        .filter_map(|&(a, size)| {
            let (w, spread) = *seen.get(&a)?;
            let fits = w > 0 && u64::from(w) <= size && size % u64::from(w) == 0;
            (fits && (spread || u64::from(w) == size)).then_some((a, w))
        })
        .collect()
}

/// Every address the decoded code reads or writes as data: a `LOAD`/`STORE`
/// through a constant or a constant plus something (the constant), and every
/// direct data-space operand. The evidence IDA's speculative-code transaction
/// vetoes on (a `dr_R`/`dr_W` xref into the candidate).
///
/// A register a constant was put in stays known across the next
/// [`CARRY_INSNS`] straight-line instructions until something else writes it,
/// and two known addends sum, so an AArch64 `adrp xT, P; add xT, xT, #o;
/// ldrsw xD, [xT, xI, lsl #2]` reads the jump table at `P + o`.
pub fn data_targets(
    listing: &Listing,
    translate: &dyn Translate,
    code_space: &Rc<AddrSpace>,
    data_space: &Rc<AddrSpace>,
) -> std::collections::BTreeSet<u64> {
    use unlace_base::space::spacetype;
    use unlace_num::pcoderaw::VarnodeData;
    let mut out = std::collections::BTreeSet::new();
    let is_data = |vn: &VarnodeData| vn.space.as_ref().is_some_and(|s| Rc::ptr_eq(s, data_space));
    let space_type = |vn: &VarnodeData| vn.space.as_ref().map(|s| s.get_type());
    let same_space = |a: &VarnodeData, b: &VarnodeData| {
        a.space
            .as_ref()
            .zip(b.space.as_ref())
            .is_some_and(|(x, y)| Rc::ptr_eq(x, y))
    };
    let overlaps = |a: &VarnodeData, b: &VarnodeData| {
        same_space(a, b)
            && a.offset < b.offset.saturating_add(u64::from(b.size))
            && b.offset < a.offset.saturating_add(u64::from(a.size))
    };
    let register = |v: &VarnodeData| {
        space_type(v) == Some(spacetype::IPTR_PROCESSOR)
            && !is_data(v)
            && !v.space.as_ref().is_some_and(|s| Rc::ptr_eq(s, code_space))
    };
    let mut cap = FullCapture::default();
    let mut bases: Vec<(VarnodeData, u64, u32)> = Vec::new();
    let mut next_vma: Option<u64> = None;
    for (&vma, insn) in listing.instructions() {
        if next_vma != Some(vma) {
            bases.clear();
        }
        next_vma = vma.checked_add(u64::from(insn.len.max(1)));
        if decode(translate, vma, code_space, &mut cap).is_none() {
            bases.clear();
            continue;
        }
        bases.retain_mut(|(_, _, age)| {
            *age += 1;
            *age <= CARRY_INSNS
        });
        let mut ends_run = false;
        for op in cap.ops() {
            let flow = matches!(
                op.opcode,
                OpCode::CPUI_BRANCH | OpCode::CPUI_CBRANCH | OpCode::CPUI_CALL
            );
            ends_run |= matches!(
                op.opcode,
                OpCode::CPUI_BRANCH
                    | OpCode::CPUI_CBRANCH
                    | OpCode::CPUI_BRANCHIND
                    | OpCode::CPUI_CALL
                    | OpCode::CPUI_CALLIND
                    | OpCode::CPUI_CALLOTHER
                    | OpCode::CPUI_RETURN
            );
            for vn in op.ins.iter().skip(usize::from(flow)).chain(op.out.iter()) {
                if is_data(vn) {
                    out.insert(vn.offset);
                }
            }
            let base = |vn: &VarnodeData, bases: &[(VarnodeData, u64, u32)]| {
                if space_type(vn) == Some(spacetype::IPTR_CONSTANT) {
                    return Some(vn.offset);
                }
                bases
                    .iter()
                    .rev()
                    .find(|(b, _, _)| {
                        b.offset == vn.offset && b.size == vn.size && same_space(b, vn)
                    })
                    .map(|&(_, c, _)| c)
            };
            let value = match op.opcode {
                OpCode::CPUI_LOAD | OpCode::CPUI_STORE => {
                    if let Some(c) = op.ins.get(1).and_then(|p| base(p, &bases)) {
                        out.insert(c);
                    }
                    None
                }
                OpCode::CPUI_COPY => op.ins.first().and_then(|v| base(v, &bases)),
                OpCode::CPUI_INT_ADD | OpCode::CPUI_PTRADD => {
                    let a = op.ins.first().and_then(|v| base(v, &bases));
                    let b = op.ins.get(1).and_then(|v| base(v, &bases));
                    match (a, b) {
                        (Some(a), Some(b)) if op.opcode == OpCode::CPUI_INT_ADD => {
                            Some(a.wrapping_add(b))
                        }
                        (Some(c), _) | (None, Some(c)) => Some(c),
                        (None, None) => None,
                    }
                }
                _ => None,
            };
            if let Some(o) = op.out.as_ref() {
                bases.retain(|(b, _, _)| !overlaps(b, o));
                if let Some(c) = value {
                    bases.push((o.clone(), c, 0));
                }
            }
        }
        if ends_run {
            bases.clear();
            continue;
        }
        bases.retain(|(v, _, _)| register(v));
    }
    out
}

/// How many straight-line instructions a register keeps a constant for in
/// [`data_targets`].
const CARRY_INSNS: u32 = 8;
