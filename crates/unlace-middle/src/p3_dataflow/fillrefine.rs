//! P3 heritage refinement of a frame range a fill clears before its fields are
//! stored.
//!
//! # The gap
//!
//! `Heritage::placeMultiequals` (`heritage.cc:2611`) refines a disjoint range
//! only when no write covers all of it (`size > 4 && maxw < size`): a covering
//! write is taken to mean the range is one variable, and every narrower write
//! is joined to it by `normalizeWriteSize` as a `PIECE` of the new bytes and a
//! `SUBPIECE` of the old value.
//!
//! Compilers clear a local aggregate with the widest stores they have and then
//! fill its fields. gcc expands `memset(packet, 0, 40)` by pieces in the widest
//! mode (`clear_by_pieces`, `widest_fixed_size_mode_for_size`: a 16-byte vector
//! store on x86-64), and neither gcc's dead-store elimination (`compute_trims`
//! trims a zero constructor at its head and tail only) nor LLVM's
//! (`tryToShorten`, begin and end only) drops a store whose live bytes lie
//! between later field stores. So `pxor xmm0,xmm0; movaps [rsp+0x10],xmm0` is
//! followed by `mov DWORD PTR [rsp+0x10],0x28001045` and narrower stores, the
//! 16-byte zero covers the range, and the field stores print as a chain of
//! reassignments of the whole buffer:
//!
//! ```text
//! v5 = CONCAT106(v10._0_10_,0x341200000000);
//! v5 = CONCAT28(0x640,v5);
//! v5 = CONCAT124(v5,0x28001045);
//! ```
//!
//! # The refinement
//!
//! A fill, a constant whose bytes are all the same (`memset`'s value), has no
//! layout of its own: every piece of it is the same fill, so cutting it loses
//! nothing. [`split_fill`] selects a stack range that is cleared and then
//! filled: every write that covers it is a fill, and every narrower write comes
//! after one of them (in its block, or in a block it dominates). Heritage then
//! refines the range like one no write covers, at the boundaries of all its
//! accesses. Each piece a constant write is cut into is defined by a `COPY` of
//! its own bytes of the constant ([`copied_constant`], [`piece`]) rather than a
//! `SUBPIECE` of it, which constant folding cannot collapse once the piece is
//! wider than 8 bytes. The clear under a field store is then dead and goes; the
//! clear of a field no store overwrites stays as that field's own store.
//!
//! The writes one instruction makes count as one write: a 16-byte vector move
//! the lanes have already divided into two 8-byte halves still covers its
//! range, so a range a vector is moved through keeps upstream's heritage. So
//! does a range covered by any constant that is not a fill (an address: a
//! pointer stored over a reused slot), a range only narrower reads touch (they
//! are `SUBPIECE`s of it, which print as partial members), a range a narrower
//! write reaches before the clear, one an input covers, and every register
//! range.

use std::collections::BTreeMap;

use unlace_base::address::Address;
use unlace_base::types::{int4, uintb};
use unlace_num::opcodes::OpCode;

use crate::context::{OpId, VarnodeId};
use crate::funcdata::Funcdata;

/// How many `COPY`s [`copied_constant`] follows back to a constant.
const COPY_CHAIN: usize = 8;

/// Whether the stack range at `addr` (`size` bytes, widest write `maxw`) is
/// cleared by fills and then filled in narrower writes, so heritage refines it
/// as if no write covered it (unlace `fillrefine`).
pub fn split_fill(
    fd: &Funcdata,
    addr: &Address,
    size: int4,
    maxw: int4,
    writevars: &[VarnodeId],
    inputvars: &[VarnodeId],
) -> bool {
    if size <= 4 || size > 1024 || maxw != size {
        return false;
    }
    let Some(space) = addr.get_space() else {
        return false;
    };
    let in_stack = fd
        .get_arch()
        .manage()
        .get_stack_space()
        .is_some_and(|stack| stack.get_index() == space.get_index());
    if !in_stack {
        return false;
    }
    let span = |vn: VarnodeId| {
        fd.vbank().get(vn).map(|v| {
            let start =
                space.wrap_offset(v.get_addr().get_offset().wrapping_sub(addr.get_offset()));
            (start as usize, v.get_size() as usize)
        })
    };
    if inputvars
        .iter()
        .any(|&vn| span(vn).is_some_and(|(_, sz)| sz == size as usize))
    {
        return false;
    }
    let mut by_instruction: BTreeMap<u64, Vec<VarnodeId>> = BTreeMap::new();
    for &vn in writevars {
        let Some(def) = fd.vbank().get(vn).and_then(|v| v.get_def()) else {
            return false;
        };
        let Some(op) = fd.obank().get(def) else {
            return false;
        };
        by_instruction
            .entry(op.get_addr().get_offset())
            .or_default()
            .push(vn);
    }
    let mut clears: Vec<OpId> = Vec::new();
    let mut fields: Vec<OpId> = Vec::new();
    for writes in by_instruction.values() {
        let mut covered = vec![false; size as usize];
        for &vn in writes {
            let Some((start, sz)) = span(vn) else {
                return false;
            };
            covered[start..(start + sz).min(size as usize)].fill(true);
        }
        let defs = writes
            .iter()
            .filter_map(|&vn| fd.vbank().get(vn).and_then(|v| v.get_def()));
        if covered.iter().all(|&c| c) {
            for &vn in writes {
                let Some(value) = written_constant(fd, vn) else {
                    return false;
                };
                let width = fd.vbank().get(vn).map_or(0, |v| v.get_size());
                if !is_fill(value, width) {
                    return false;
                }
            }
            clears.extend(defs);
        } else {
            fields.extend(defs);
        }
    }
    !clears.is_empty()
        && !fields.is_empty()
        && fields
            .iter()
            .all(|&field| clears.iter().any(|&clear| comes_before(fd, clear, field)))
}

/// Whether `first` runs before `second` on every path to it: earlier in the
/// same block, or in a block that dominates `second`'s.
fn comes_before(fd: &Funcdata, first: OpId, second: OpId) -> bool {
    let (Some(a), Some(b)) = (fd.obank().get(first), fd.obank().get(second)) else {
        return false;
    };
    let (Some(block_a), Some(block_b)) = (a.get_parent(), b.get_parent()) else {
        return false;
    };
    if block_a == block_b {
        return a.get_seq_num().get_order() < b.get_seq_num().get_order();
    }
    fd.bblocks_ref().dominates(block_a, Some(block_b))
}

/// Whether the `size`-byte constant `value` repeats one byte, as a `memset`
/// writes. A constant Varnode keeps 64 bits, so a wider one is a fill only when
/// it is zero.
fn is_fill(value: uintb, size: int4) -> bool {
    if size > 8 {
        return value == 0;
    }
    let byte = value & 0xff;
    (1..size as u64).all(|i| (value >> (8 * i)) & 0xff == byte)
}

/// The constant `op` copies, following `COPY`s of written Varnodes back to it.
pub fn copied_constant(fd: &Funcdata, op: OpId) -> Option<uintb> {
    let mut op = op;
    for _ in 0..COPY_CHAIN {
        let o = fd.obank().get(op)?;
        if o.code() != OpCode::CPUI_COPY {
            return None;
        }
        let input = fd.vbank().get(o.get_in(0)?)?;
        if input.is_constant() {
            return Some(input.get_offset());
        }
        op = input.get_def()?;
    }
    None
}

/// The constant written to `vn`, if its defining op copies one.
fn written_constant(fd: &Funcdata, vn: VarnodeId) -> Option<uintb> {
    copied_constant(fd, fd.vbank().get(vn)?.get_def()?)
}

/// The `size` bytes of `value` that start `lsb` bytes above its least
/// significant byte (what `SUBPIECE value, lsb` holds). A constant Varnode keeps
/// 64 bits, so every byte above them is zero.
pub fn piece(value: uintb, lsb: uintb, size: int4) -> uintb {
    if lsb >= 8 {
        return 0;
    }
    let shifted = value >> (8 * lsb);
    if size >= 8 {
        shifted
    } else {
        shifted & ((1u64 << (8 * size)) - 1)
    }
}

#[cfg(test)]
mod tests;
