//! The stack addresses that escape in a jump-table partial before dead code removes them (#871).
//!
//! The partial a jump-table recovery runs on has no prototype recovery (`noproto`), so a call
//! takes no inputs. A stack address formed in a register and handed to a callee
//! (`add x1, sp, #0x20; bl f`) is then a dead register write, and dead code deletes it before
//! `ActionRestructureVarnode` gathers aliases; when every use of the stack pointer goes that way
//! the gather finds no stack pointer at all. `markUnaliased` then paints every local
//! `nolocalalias`, `RuleIndirectCollapse` drops the guard each call puts on them, and a value
//! stored before the call is read back after it as if the callee could not write it. A switch
//! index loaded from such a slot folds to that constant and the table is not recovered.
//!
//! After each heritage pass of the partial this module walks the additive expressions of the
//! stack pointer, as `AliasChecker::gatherAdditiveBase` does, and keeps the offset of every
//! pointer that leaves them: a register value nothing reads, a stored value, a constant-offset
//! pointer used by anything but a load or store address, and an indexed load or store address.
//! The restructure of the partial adds these offsets to its alias list. The full decompile sees
//! the same pointers as call arguments, so it is unchanged.

use std::rc::Rc;

use unlace_base::space::{AddrSpace, spacetype};
use unlace_base::types::uintb;
use unlace_num::opcodes::OpCode;

use crate::context::VarnodeId;
use crate::funcdata::Funcdata;
use crate::funcdata_spacebase::{FuncdataAliasExt, FuncdataSpacebaseExt};

/// The escaped stack offsets of one partial, in byte units of the stack space.
#[derive(Default)]
struct EscapesSlot(Vec<uintb>);
crate::unlace_func_state!(EscapesSlot, keep_across_clear: false);

/// The stack offsets recorded for this partial so far, sorted.
pub fn escapes(fd: &Funcdata) -> &[uintb] {
    &fd.unlace_state::<EscapesSlot>().0
}

/// Record the stack pointers that leave the stack pointer's additive expressions now. Only the
/// jump-table partial records; a full decompile keeps its call arguments alive.
pub fn record(fd: &mut Funcdata) {
    if !fd.is_jumptable_recovery_on() {
        return;
    }
    let Some(space) = fd.get_scope_local().map(|lm| Rc::clone(lm.get_space_id())) else {
        return;
    };
    let found = gather(fd, &space);
    if found.is_empty() {
        return;
    }
    let slot = &mut fd.unlace_state_mut::<EscapesSlot>().0;
    slot.extend(found);
    slot.sort_unstable();
    slot.dedup();
}

fn gather(fd: &Funcdata, space: &Rc<AddrSpace>) -> Vec<uintb> {
    let Some(start) = fd.find_spacebase_input(space) else {
        return Vec::new();
    };
    let mut queue: Vec<(VarnodeId, bool)> = vec![(start, false)];
    let mut seen = std::collections::BTreeSet::from([start]);
    let mut out = Vec::new();
    let mut i = 0;
    while i < queue.len() {
        let (vn, indexed) = queue[i];
        i += 1;
        let Some(v) = fd.vbank().get(vn) else {
            continue;
        };
        let register = v.get_space().get_type() == spacetype::IPTR_PROCESSOR;
        let mut escapes = register && v.descend_iter().next().is_none();
        for op in v.descend_iter().collect::<Vec<_>>() {
            let Some(o) = fd.obank().get(op) else {
                continue;
            };
            let mut follow = |next: Option<VarnodeId>, indexed: bool| {
                if let Some(next) = next {
                    if seen.insert(next) {
                        queue.push((next, indexed));
                    }
                }
            };
            let is_const = |slot: i32| {
                o.get_in(slot)
                    .and_then(|x| fd.vbank().get(x))
                    .is_some_and(|x| x.is_constant())
            };
            match o.code() {
                OpCode::CPUI_INT_ADD | OpCode::CPUI_PTRADD => {
                    let other = if o.get_in(0) == Some(vn) { 1 } else { 0 };
                    follow(o.get_out(), indexed || !is_const(other));
                }
                OpCode::CPUI_INT_SUB if o.get_in(0) == Some(vn) => {
                    follow(o.get_out(), indexed || !is_const(1));
                }
                OpCode::CPUI_PTRSUB | OpCode::CPUI_SEGMENTOP => follow(o.get_out(), indexed),
                OpCode::CPUI_COPY => {
                    escapes = true;
                    follow(o.get_out(), indexed);
                }
                OpCode::CPUI_LOAD => escapes |= indexed,
                OpCode::CPUI_STORE => escapes |= indexed || o.get_in(2) == Some(vn),
                _ => escapes = true,
            }
        }
        if escapes && vn != start {
            let offset = fd.gather_offset(vn);
            out.push(AddrSpace::address_to_byte(offset, space.get_word_size()));
        }
    }
    out
}
