//! Original single-instruction provenance for the Go direct-return XADD proof.

use crate::context::{OpId, VarnodeId};
use crate::funcdata::Funcdata;
use unlace_num::opcodes::OpCode;

#[derive(Clone, Debug)]
#[doc(hidden)]
pub struct Instruction {
    pub lock: OpId,
    pub unlock: OpId,
    pub store: OpId,
    pub old_load: OpId,
    pub loads: Vec<OpId>,
    pub members: Vec<OpId>,
    pub width: i32,
}

#[derive(Clone, Copy, PartialEq, Eq)]
struct Storage(i32, u64, i32);

fn storage(fd: &Funcdata, id: VarnodeId) -> Option<Storage> {
    let v = fd.vbank().get(id)?;
    Some(Storage(
        v.get_space().get_index(),
        v.get_offset(),
        v.get_size(),
    ))
}

fn overlaps(a: Storage, b: Storage) -> bool {
    a.0 == b.0 && a.1 < b.1.saturating_add(b.2 as u64) && b.1 < a.1.saturating_add(a.2 as u64)
}

/// Capture only the one-instruction envelope; final SSA and user-op names are
/// independently checked by the emitter before any presentation changes.
#[doc(hidden)]
pub fn observe(fd: &mut Funcdata, ops: &[OpId]) {
    if !fd.get_arch().source_lang.is_go() || fd.kuna_atomic_xadds().len() >= 2 {
        return;
    }
    if let Some(proof) = instruction(fd, ops) {
        fd.kuna_atomic_xadds_mut().push(proof);
    }
}

fn instruction(fd: &Funcdata, ops: &[OpId]) -> Option<Instruction> {
    if !(6..=32).contains(&ops.len()) {
        return None;
    }
    let lock = *ops.first()?;
    let unlock = *ops.last()?;
    if fd.obank().get(lock)?.code() != OpCode::CPUI_CALLOTHER
        || fd.obank().get(unlock)?.code() != OpCode::CPUI_CALLOTHER
    {
        return None;
    }
    let address = fd.obank().get(lock)?.get_addr();
    let mut stores = Vec::new();
    let mut loads = Vec::new();
    for &id in ops {
        let op = fd.obank().get(id)?;
        if op.get_addr() != address {
            return None;
        }
        match op.code() {
            OpCode::CPUI_CALLOTHER if id == lock || id == unlock => {
                if op.num_input() != 1 || op.get_out().is_some() {
                    return None;
                }
            }
            OpCode::CPUI_LOAD => loads.push(id),
            OpCode::CPUI_STORE => stores.push(id),
            OpCode::CPUI_COPY
            | OpCode::CPUI_INT_ADD
            | OpCode::CPUI_INT_CARRY
            | OpCode::CPUI_INT_SCARRY
            | OpCode::CPUI_INT_SLESS
            | OpCode::CPUI_INT_EQUAL
            | OpCode::CPUI_INT_AND
            | OpCode::CPUI_POPCOUNT => (),
            OpCode::CPUI_INT_ZEXT
                if op.num_input() == 1
                    && op.get_out().is_some_and(|o| {
                        fd.vbank()
                            .get(o)
                            .is_some_and(|v| v.get_space().get_name() == "register")
                    }) => {}
            _ => return None,
        }
    }
    if stores.len() != 1
        || loads.is_empty()
        || fd.obank().get(lock)?.code() != OpCode::CPUI_CALLOTHER
        || fd.obank().get(unlock)?.code() != OpCode::CPUI_CALLOTHER
    {
        return None;
    }
    let store = stores[0];
    let write = fd.obank().get(store)?;
    let pointer = storage(fd, write.get_in(1)?)?;
    let space = storage(fd, write.get_in(0)?)?;
    let width = fd.vbank().get(write.get_in(2)?)?.get_size();
    if !matches!(width, 4 | 8) || pointer.2 != 8 {
        return None;
    }
    for &id in &loads {
        let op = fd.obank().get(id)?;
        if storage(fd, op.get_in(0)?)? != space
            || storage(fd, op.get_in(1)?)? != pointer
            || fd.vbank().get(op.get_out()?)?.get_size() != width
        {
            return None;
        }
    }
    let mut definitions = Vec::<(Storage, OpId)>::new();
    let mut old_load = None;
    let mut reads_started = false;
    let mut stored = false;
    for &id in ops {
        if id == store {
            stored = true;
            continue;
        }
        let op = fd.obank().get(id)?;
        reads_started |= op.code() == OpCode::CPUI_LOAD;
        let Some(out) = op.get_out() else { continue };
        let target = storage(fd, out)?;
        if reads_started && !stored && overlaps(pointer, target) {
            return None;
        }
        if op.code() == OpCode::CPUI_COPY
            && fd.vbank().get(out)?.get_space().get_name() == "register"
            && target.2 == width
        {
            let source = storage(fd, op.get_in(0)?)?;
            if let Some((_, def)) = definitions.iter().rev().find(|(loc, _)| *loc == source) {
                if loads.contains(def) {
                    if old_load.replace(*def).is_some() {
                        return None;
                    }
                }
            }
        }
        definitions.retain(|(loc, _)| !overlaps(*loc, target));
        definitions.push((target, id));
    }
    Some(Instruction {
        lock,
        unlock,
        store,
        old_load: old_load?,
        loads,
        members: ops.to_vec(),
        width,
    })
}

/// (kuna `atomicxadd`) The one-instruction atomic add envelopes the flow captured; reset by `Funcdata::clear`.
#[derive(Default)]
struct XaddsSlot(Vec<crate::p2_lift::atomicxadd::Instruction>);
crate::kuna_func_state!(XaddsSlot, keep_across_clear: false);

/// The `kuna_atomicxadd` pass's methods on [`Funcdata`], as an extension trait so the type can
/// live in a lower crate.
pub trait FuncdataAtomicxaddExt {
    fn kuna_atomic_xadds(&self) -> &Vec<crate::p2_lift::atomicxadd::Instruction>;
    fn kuna_atomic_xadds_mut(&mut self) -> &mut Vec<crate::p2_lift::atomicxadd::Instruction>;
}

impl FuncdataAtomicxaddExt for crate::funcdata::Funcdata {
    fn kuna_atomic_xadds(&self) -> &Vec<crate::p2_lift::atomicxadd::Instruction> {
        &self.kuna_state::<XaddsSlot>().0
    }
    fn kuna_atomic_xadds_mut(&mut self) -> &mut Vec<crate::p2_lift::atomicxadd::Instruction> {
        &mut self.kuna_state_mut::<XaddsSlot>().0
    }
}

#[cfg(test)]
mod tests;
