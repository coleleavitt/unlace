//! (unlace `returnbranch`) Preserve a computed transfer that the instruction spec
//! classified as RETURN.
//!
//! A bounded straight-line entry prefix can prove the target is a constant,
//! rather than the incoming return address. Reclassify only the flow kind;
//! ordinary SSA/jump-table recovery must still prove its destinations, including
//! any backedges discovered later. Unknown inputs, partial writes, calls and
//! stores into a fact's space never supply constants. Delay-slot writes are
//! evaluated in emitted p-code order.

use crate::context::{OpId, VarnodeId};
use crate::funcdata::Funcdata;
use unlace_base::address::{Address, calc_mask};
use unlace_base::space::spacetype;
use unlace_num::opcodes::OpCode;

#[derive(Clone, Copy, PartialEq, Eq)]
struct Loc(i32, u64, i32);

impl Loc {
    fn overlaps(self, rhs: Self) -> bool {
        self.0 == rhs.0
            && self.1 < rhs.1.saturating_add(rhs.2 as u64)
            && rhs.1 < self.1.saturating_add(self.2 as u64)
    }
}

fn location(data: &Funcdata, vn: VarnodeId) -> Option<Loc> {
    let v = data.vbank().get(vn)?;
    Some(Loc(v.get_space().get_index(), v.get_offset(), v.get_size()))
}

fn read_known(loc: Loc, big: bool, known: &[(Loc, u64)]) -> Option<u64> {
    known.iter().find_map(|&(written, value)| {
        if written.0 != loc.0 || written.1 > loc.1 || written.2 < loc.2 {
            return None;
        }
        let offset = loc.1 - written.1;
        let slack = (written.2 - loc.2) as u64;
        if offset > slack {
            return None;
        }
        let byte = if big { slack - offset } else { offset };
        Some((value >> (8 * byte)) & calc_mask(loc.2))
    })
}

/// Constant storage facts along a straight-line run of raw p-code. Every
/// bounded target proof uses this one evaluator, so they agree on what each
/// operation preserves: a call or an unknown user operation stops the proof, a
/// store forgets every fact in the space it writes, and a write of any other
/// kind forgets the storage it overlaps unless its value is proven.
#[doc(hidden)]
pub struct Prefix<'a, F> {
    data: &'a Funcdata,
    known: Vec<(Loc, u64)>,
    previous: Option<Address>,
    mode_switch: F,
}

impl<'a, F: Fn(u64) -> bool> Prefix<'a, F> {
    /// The function entry: tracked context values are known, except any
    /// overlapping the incoming return address. `mode_switch` names user
    /// operations that only select an instruction set and leave every register
    /// unchanged.
    fn at_entry(data: &'a Funcdata, mode_switch: F) -> Self {
        let incoming_return = data
            .get_arch()
            .indirect_return_addr
            .as_ref()
            .and_then(|v| Some(Loc(v.space.as_ref()?.get_index(), v.offset, v.size as i32)));
        let known = data
            .get_arch()
            .get_tracked_set(data.get_address())
            .iter()
            .take(64)
            .filter_map(|t| {
                let size = t.loc.size as i32;
                let loc = Loc(t.loc.space.as_ref()?.get_index(), t.loc.offset, size);
                if incoming_return.is_some_and(|ret| ret.overlaps(loc)) {
                    return None;
                }
                (1..=8)
                    .contains(&size)
                    .then(|| (loc, t.val & calc_mask(size)))
            })
            .collect();
        Prefix {
            data,
            known,
            previous: None,
            mode_switch,
        }
    }

    /// Temporaries do not survive their instruction.
    fn enter(&mut self, id: OpId) {
        let Some(op) = self.data.obank().get(id) else {
            return;
        };
        if self.previous.as_ref() != Some(op.get_addr()) {
            let manage = self.data.get_arch().manage();
            self.known.retain(|(loc, _)| {
                manage
                    .get_space(loc.0)
                    .is_some_and(|s| s.get_type() != spacetype::IPTR_INTERNAL)
            });
            self.previous = Some(op.get_addr().clone());
        }
    }

    /// The proven value of a one- to eight-byte input of operation `id`.
    #[doc(hidden)]
    pub fn input(&mut self, id: OpId, slot: i32) -> Option<u64> {
        self.enter(id);
        let vn = self.data.obank().get(id)?.get_in(slot)?;
        self.value(vn)
    }

    fn value(&self, vn: VarnodeId) -> Option<u64> {
        let node = self.data.vbank().get(vn)?;
        if !(1..=8).contains(&node.get_size()) {
            return None;
        }
        if node.is_constant() {
            return Some(node.get_offset() & calc_mask(node.get_size()));
        }
        read_known(
            location(self.data, vn)?,
            node.get_space().is_big_endian(),
            &self.known,
        )
    }

    /// Apply operation `id`, which must not transfer control. `false` means
    /// the operation may change anything and the proof stops.
    #[doc(hidden)]
    pub fn execute(&mut self, id: OpId) -> bool {
        self.enter(id);
        let Some(op) = self.data.obank().get(id) else {
            return false;
        };
        match op.code() {
            OpCode::CPUI_CALL | OpCode::CPUI_CALLIND => return false,
            OpCode::CPUI_CALLOTHER => {
                return op.get_out().is_none()
                    && op
                        .get_in(0)
                        .and_then(|v| self.value(v))
                        .is_some_and(&self.mode_switch)
                    && op.get_in(1).and_then(|v| self.value(v)) == Some(0);
            }
            OpCode::CPUI_STORE => {
                let space = op.get_in(0).and_then(|v| self.data.vbank().get(v));
                match space.filter(|v| v.is_constant()) {
                    Some(space) => {
                        let index = space.get_offset();
                        self.known.retain(|(loc, _)| loc.0 as u64 != index);
                    }
                    None => self.known.clear(),
                }
                return true;
            }
            _ => {}
        }
        let Some(out) = op.get_out().and_then(|v| location(self.data, v)) else {
            return true;
        };
        let result = (|| {
            if !(1..=8).contains(&out.2)
                || !matches!(
                    op.code(),
                    OpCode::CPUI_COPY
                        | OpCode::CPUI_INT_ZEXT
                        | OpCode::CPUI_INT_SEXT
                        | OpCode::CPUI_INT_2COMP
                        | OpCode::CPUI_INT_NEGATE
                        | OpCode::CPUI_INT_EQUAL
                        | OpCode::CPUI_INT_NOTEQUAL
                        | OpCode::CPUI_INT_ADD
                        | OpCode::CPUI_INT_SUB
                        | OpCode::CPUI_INT_MULT
                        | OpCode::CPUI_INT_AND
                        | OpCode::CPUI_INT_OR
                        | OpCode::CPUI_INT_XOR
                        | OpCode::CPUI_INT_LEFT
                        | OpCode::CPUI_INT_RIGHT
                        | OpCode::CPUI_SUBPIECE
                )
            {
                return None;
            }
            let behavior = self.data.get_arch().op_behavior(op.code())?;
            let size = self.data.vbank().get(op.get_in(0)?)?.get_size();
            let x = self.value(op.get_in(0)?)?;
            if behavior.is_unary() {
                behavior.evaluate_unary(out.2, size, x).ok()
            } else {
                behavior
                    .evaluate_binary(out.2, size, x, self.value(op.get_in(1)?)?)
                    .ok()
            }
        })();
        self.known.retain(|(loc, _)| !loc.overlaps(out));
        if let Some(value) = result {
            self.known.push((out, value & calc_mask(out.2)));
        }
        true
    }
}

/// The user-op name a SLEIGH spec gives the marker that only selects an
/// instruction set, in every language that declares one. Named rather than
/// gated on an architecture id, which the Ghidra front end spells as a session
/// number.
#[doc(hidden)]
pub fn names_isa_mode_switch(name: &[u8]) -> bool {
    name == b"setISAMode"
}

/// Is `first` the start of the function, give or take decoded instructions
/// that emitted no p-code at all? Such an instruction cannot have changed
/// anything, so the prefix beginning after it is still the entry prefix.
#[allow(clippy::mutable_key_type)]
fn entry_prefix_starts_at(
    data: &Funcdata,
    visited: &crate::flow::VisitedMap,
    first: &Address,
) -> bool {
    let mut at = data.get_address().clone();
    while &at < first {
        let Some(stat) = visited.get(&at) else {
            return false;
        };
        if !stat.seqnum.get_addr().is_invalid() || stat.size <= 0 {
            return false;
        }
        at = &at + stat.size as i64;
    }
    &at == first
}

fn transfers_control(code: OpCode) -> bool {
    matches!(
        code,
        OpCode::CPUI_BRANCH | OpCode::CPUI_CBRANCH | OpCode::CPUI_BRANCHIND | OpCode::CPUI_RETURN
    )
}

/// Does the entry prefix compute a constant target for this real RETURN? Zero
/// is not one: `move ra, zero` marks the end of a backtrace, and a function
/// start placed on such a delay slot would otherwise turn its real return into
/// a jump to address zero.
#[doc(hidden)]
#[allow(clippy::mutable_key_type)]
pub fn computed_target(
    data: &Funcdata,
    target: OpId,
    visited: &crate::flow::VisitedMap,
    mode_switch: impl Fn(u64) -> bool,
) -> bool {
    let Some(ret) = data.obank().get(target) else {
        return false;
    };
    if !data
        .get_arch()
        .unlace_options
        .get::<crate::returnbranch::ReturnBranch>()
        .0
        || ret.code() != OpCode::CPUI_RETURN
        || ret.get_halt_type() != 0
    {
        return false;
    }
    let Some(input) = ret.get_in(0).and_then(|v| data.vbank().get(v)) else {
        return false;
    };
    if input.is_constant()
        || data.get_override().get_flow_override(ret.get_addr())
            != crate::overrides::flow_type::NONE
    {
        return false;
    }
    let mut prefix = Prefix::at_entry(data, mode_switch);
    for (i, id) in data.obank().iter_dead().take(256).enumerate() {
        let op = data.obank().get(id).expect("live raw op");
        if i == 0 && !entry_prefix_starts_at(data, visited, op.get_addr()) {
            return false;
        }
        if id == target {
            return prefix.input(id, 0).is_some_and(|to| to != 0);
        }
        if transfers_control(op.code()) || !prefix.execute(id) {
            return false;
        }
    }
    false
}

/// An exact local proof of the target after following `from` back into a
/// dispatch instruction: the run from `from`'s block start, then the dispatch
/// instruction's own operations before the jump, through [`Prefix`]. Unknown
/// inputs never become known; longer or nonlocal paths use SSA recovery.
#[doc(hidden)]
pub fn target_on_edge(
    data: &Funcdata,
    from: OpId,
    dispatch: OpId,
    mode_switch: impl Fn(u64) -> bool,
) -> Option<u64> {
    let mut run = Vec::new();
    let mut cursor = from;
    loop {
        let op = data.obank().get(cursor)?;
        run.push(cursor);
        if op.is_block_start() {
            break;
        }
        if run.len() >= 256 {
            return None;
        }
        cursor = data.obank().dead_prev(cursor)?;
    }
    run.reverse();
    let address = data.obank().get(dispatch)?.get_addr().clone();
    let mut slot = Vec::new();
    let mut cursor = dispatch;
    while let Some(prev) = data.obank().dead_prev(cursor) {
        if data.obank().get(prev)?.get_addr() != &address {
            break;
        }
        slot.push(prev);
        if slot.len() >= 64 {
            return None;
        }
        cursor = prev;
    }
    slot.reverse();
    let mut prefix = Prefix {
        data,
        known: Vec::new(),
        previous: None,
        mode_switch,
    };
    for id in run.into_iter().chain(slot) {
        let code = data.obank().get(id)?.code();
        if (id != from && transfers_control(code)) || !prefix.execute(id) {
            return None;
        }
    }
    prefix.input(dispatch, 0)
}

crate::unlace_flag!(
    /// (unlace `returnbranch`) Flow a RETURN with a proven constant target as an
    /// indirect branch; see [`crate::context::ArchContext::return_branch`].
    ReturnBranch,
    "returnbranch",
    "Computed jumps through the return register",
    unset: false,
    shipped: true
);

#[cfg(test)]
mod tests;
