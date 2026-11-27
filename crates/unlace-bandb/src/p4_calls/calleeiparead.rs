//! (unlace) `calleeiparead` — a register the caller reads after a call, before
//! writing it, is the caller's own statement that the callee leaves it alone.
//!
//! # The symptom
//!
//! gcc 15 at `-O2` builds `while (a > 0 && add(a,b) > 4) { s += a; a--; }`
//! with the accumulator in `RDX` across the call (GH-1497):
//!
//! ```text
//! 4012a4  xor  edx,edx          ; s = 0
//! 4012b0  add  rdx,rdi          ; s += a      (reads RDX after the call)
//! 4012b3  sub  rdi,0x1
//! 4012b7  je   4012c4
//! 4012b9  call 401140           ; add: lea rax,[rdi+rsi]; ret
//! 4012be  cmp  rax,0x4
//! 4012c2  jg   4012b0
//! 4012c4  mov  rax,rdx          ; return s
//! ```
//!
//! and unlace printed the accumulator as a local nothing assigns:
//! `while (v1 = add(a,b), v2 = v3, 4 < v1) { v2 = v3 + a; ... }`.
//!
//! # Why the value is lost
//!
//! `x86-64-gcc.cspec` lists `RDX` in `<killedbycall>` (it is the high half of a
//! 128-bit return), so `Heritage::guardCalls` plants an INDIRECT creation of
//! `RDX` at the call. gcc's `-fipa-ra` knows `add` writes only `RAX` and keeps
//! `s` in `RDX` anyway. The callee probe proves `add` never writes `RDX`, but
//! neither existing clause of [`calleepreserves`](crate::calleepreserves)
//! admits the body: it writes no register the convention preserves and no
//! memory. [`calleeretpreserves`](crate::calleeretpreserves) declines `RDX`
//! on purpose, since a value kept in an argument register across one call would
//! reach the next call as an argument it does not take.
//!
//! # The evidence this clause adds
//!
//! The caller's own instructions. Under the convention a caller never reads a
//! killed register after a call before writing it, except as the call's result.
//! For a register the call does not return a value in on its own, and that a
//! callee whose complete decode never writes it is therefore not returning
//! anything in, a caller that does read it was compiled against the callee's
//! real clobber set, and the read is the evidence. [`caller_reads_across`] walks
//! forward from the call: a path ends where the register's bytes are all
//! written again or at the next call (that call answers for itself), and any
//! other op that reads a byte still live from the call counts.
//!
//! This is also what keeps the over-arity problem away: a register only a later
//! call's argument trial would read is not a read here (trials are not ops yet
//! at heritage), so such a register keeps the ABI's answer.
//!
//! # What it will not do
//!
//! * Everything `calleepreserves` requires still holds: a complete walk that
//!   proves the register untouched, a register in the processor space, no
//!   effect override, no PLT stub, and only `killedbycall` is downgraded.
//! * The call's own return storage stays
//!   [`calleeretpreserves`](crate::calleeretpreserves)'s question: the model's
//!   first-in-class output register (`RAX`, or `RAX` of Go's `RBX:RAX` pair,
//!   whose callee may hand its argument back there untouched) and a locked
//!   non-void declared output are never answered here, since the caller's read
//!   of them is the call's result. A killed register the model returns a value
//!   in only as the second half of a pair (`RDX`) is, which is the register the
//!   pair seam refuses when the callee never writes it.
//! * The callee must be a body ([`calleeretpreserves`](crate::calleeretpreserves)'s
//!   test): more than one instruction and a write to a register the convention
//!   names, so `ret` and `endbr64; ret` stubs still say nothing.
//! * `xor r,r` and `sub r,r` read the register only to zero it, and do not count.
//! * The walk stops after [`WALK_LIMIT`] ops and then declines.

use std::collections::HashMap;

use unlace_base::address::Address;
use unlace_base::types::int4;
use unlace_num::opcodes::OpCode;

use crate::context::{BlockId, OpId, VarnodeId};
use crate::fspec::FuncCallSpecs;
use crate::funcdata::Funcdata;

/// How many ops the forward walk from the call reads before it declines.
const WALK_LIMIT: usize = 4096;

/// The third clause of `calleepreserves`'s positive-evidence gate: the callee
/// is a body and the caller reads `[addr, addr+size)` across the call.
pub fn caller_relies_on(
    data: &Funcdata,
    fc: &FuncCallSpecs,
    w: &crate::rustabi::CalleeReturnWrites,
    addr: &Address,
    size: int4,
) -> bool {
    caller_reads_across(data, fc.get_op(), addr, size)
        && !the_calls_result(fc, addr, size)
        && crate::calleeretpreserves::body_is_a_body(data, fc, w)
}

/// Is `[addr, addr+size)` storage the call returns a value in on its own: the
/// model's first-in-class output register (`RAX`, Go's `RAX` before `RBX`), or
/// part of a locked, non-void declared output? A caller's read of it is the
/// call's result, and the question is `calleeretpreserves`'s. A register entry
/// that is not first in its class (`RDX`) carries a value only as the second
/// half of a pair, the reading `callretpair.rs (pair_of)` makes.
fn the_calls_result(fc: &FuncCallSpecs, addr: &Address, size: int4) -> bool {
    let proto = fc.proto();
    if proto.is_output_locked()
        && proto.characterize_as_output(addr, size) != crate::fspec::Containment::NoContainment
    {
        return true;
    }
    proto.model().output().get_entry().iter().any(|e| {
        e.get_join_record().is_none()
            && e.is_first_in_class()
            && e.justified_contain(addr, size) >= 0
    })
}

/// Does an op after `call` read a byte of `[addr, addr+size)` that no op
/// between the call and it has written?
pub fn caller_reads_across(data: &Funcdata, call: OpId, addr: &Address, size: int4) -> bool {
    if !(1..=64).contains(&size) {
        return false;
    }
    let Some(space) = addr.get_space() else {
        return false;
    };
    let range = Range {
        space: space.get_index(),
        lo: addr.get_offset(),
        size: size as u64,
    };
    let Some(home) = data.obank().get(call).and_then(|o| o.get_parent()) else {
        return false;
    };
    let mut budget = WALK_LIMIT;
    let mut work: Vec<(BlockId, u64)> = Vec::new();
    let after_call = data.bb_ops_iter(home).skip_while(|&op| op != call).skip(1);
    match scan(data, after_call, &range, range.mask(), &mut budget) {
        Walk::Read => return true,
        Walk::Exhausted => return false,
        Walk::Ended => {}
        Walk::Live(live) => push_successors(data, home, live, &mut work),
    }
    let mut explored: HashMap<BlockId, u64> = HashMap::new();
    while let Some((bl, live)) = work.pop() {
        let seen = explored.entry(bl).or_insert(0);
        let fresh = live & !*seen;
        if fresh == 0 {
            continue;
        }
        *seen |= fresh;
        match scan(data, data.bb_ops_iter(bl), &range, fresh, &mut budget) {
            Walk::Read => return true,
            Walk::Exhausted => return false,
            Walk::Ended => {}
            Walk::Live(live) => push_successors(data, bl, live, &mut work),
        }
    }
    false
}

/// The queried register range, as bytes of one space.
struct Range {
    space: int4,
    lo: u64,
    size: u64,
}

impl Range {
    fn mask(&self) -> u64 {
        bits(0, self.size)
    }

    /// The bytes of the range `vn` covers.
    fn bytes(&self, data: &Funcdata, vn: VarnodeId) -> u64 {
        let Some(v) = data.vbank().get(vn) else {
            return 0;
        };
        if v.get_space().get_index() != self.space {
            return 0;
        }
        let lo = v.get_offset().max(self.lo);
        let hi = (v.get_offset() + v.get_size() as u64).min(self.lo + self.size);
        if lo >= hi {
            return 0;
        }
        bits(lo - self.lo, hi - self.lo)
    }
}

fn bits(from: u64, to: u64) -> u64 {
    let upto = |n: u64| if n >= 64 { u64::MAX } else { (1u64 << n) - 1 };
    upto(to) & !upto(from)
}

/// How a block's ops left the bytes still live from the call.
enum Walk {
    /// An op read a live byte.
    Read,
    /// The op budget ran out.
    Exhausted,
    /// Every live byte was written again, or the path met another call.
    Ended,
    /// The bytes still live where the block falls off its end.
    Live(u64),
}

fn scan(
    data: &Funcdata,
    ops: impl Iterator<Item = OpId>,
    range: &Range,
    mut live: u64,
    budget: &mut usize,
) -> Walk {
    for op in ops {
        if *budget == 0 {
            return Walk::Exhausted;
        }
        *budget -= 1;
        let Some(o) = data.obank().get(op) else {
            continue;
        };
        match o.code() {
            OpCode::CPUI_CALL | OpCode::CPUI_CALLIND => return Walk::Ended,
            OpCode::CPUI_INDIRECT | OpCode::CPUI_MULTIEQUAL => continue,
            _ => {}
        }
        if !zeroes_itself(data, o)
            && (0..o.num_input()).any(|i| {
                o.get_in(i)
                    .is_some_and(|vn| range.bytes(data, vn) & live != 0)
            })
        {
            return Walk::Read;
        }
        if let Some(out) = o.get_out() {
            live &= !range.bytes(data, out);
            if live == 0 {
                return Walk::Ended;
            }
        }
    }
    Walk::Live(live)
}

/// `x ^ x` and `x - x`: the idiom reads the register only to zero it.
fn zeroes_itself(data: &Funcdata, o: &crate::op::PcodeOp) -> bool {
    if !matches!(o.code(), OpCode::CPUI_INT_XOR | OpCode::CPUI_INT_SUB) || o.num_input() != 2 {
        return false;
    }
    let storage = |slot| {
        o.get_in(slot)
            .and_then(|vn| data.vbank().get(vn))
            .map(|v| (v.get_space().get_index(), v.get_offset(), v.get_size()))
    };
    let a = storage(0);
    a.is_some() && a == storage(1)
}

fn push_successors(data: &Funcdata, bl: BlockId, live: u64, work: &mut Vec<(BlockId, u64)>) {
    let block = data.bblocks_ref().block(bl);
    for i in 0..block.size_out() {
        work.push((block.get_out(i), live));
    }
}

#[cfg(test)]
#[path = "calleeiparead/tests.rs"]
mod tests;
