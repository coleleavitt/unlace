//! (unlace `octeoneffects`) Memory effects and types of the Octeon atomic,
//! reservation and ordering user operations declared by `octeonAtomics.sinc`.
//! An atomic update, load-linked, store-conditional or cache-block zero accesses
//! memory through its address operand; `atomic` (the default) guards writable
//! memory across those, `ordered` also across every ordering operation, and
//! `off` lifts the instructions upstream's MIPS spec also decodes (`ll`, `lld`,
//! `sc`, `scd`, `sync`) as upstream does, through the fixups in [`UPSTREAM`].
//! The option governs decompilation only: raw p-code and the analysis tier see
//! the user operations in every mode.
use std::rc::Rc;

use unlace_base::{
    address::Address,
    space::spacetype,
    types::{int4, uint4},
};
use unlace_num::opcodes::OpCode;

use crate::{
    context::OpId,
    dtype::{Datatype, type_metatype},
    funcdata::Funcdata,
};

pub use crate::octeonops::{Effect, Fixup, Kind, OcteonEffectsMode, UPSTREAM, userop_ids};

#[cfg(test)]
use crate::{octeonops::OPERATIONS, userop::UserOpManage};

pub fn effect(data: &Funcdata, op: OpId) -> Option<Effect> {
    let known = &data.get_arch().octeon_memory_userops;
    if known.is_empty() {
        return None;
    }
    let op = data.obank().get(op)?;
    if op.code() != OpCode::CPUI_CALLOTHER || op.is_dead() {
        return None;
    }
    let index = data.vbank().get(op.get_in(0)?)?;
    if !index.is_constant() {
        return None;
    }
    known
        .iter()
        .find_map(|(id, effect)| (u64::from(*id) == index.get_offset()).then_some(*effect))
}

/// Does `op` take a guard under the current mode?
pub fn guards(data: &Funcdata, op: OpId) -> bool {
    effect(data, op).is_some_and(|e| {
        e.addressed()
            || data
                .get_arch()
                .unlace_options
                .get::<crate::octeoneffects::OcteonEffectsMode>()
                == OcteonEffectsMode::Ordered
    })
}

/// Selected operations that a memory observation must not move across.
pub fn memory_ops(data: &Funcdata) -> Vec<OpId> {
    if data.get_arch().octeon_memory_userops.is_empty() {
        return Vec::new();
    }
    data.obank()
        .iter_code(OpCode::CPUI_CALLOTHER)
        .filter(|&op| guards(data, op))
        .collect()
}

/// The bytes a cache-block zero clears: the data-cache block of every Octeon
/// generation.
const CACHE_BLOCK: i64 = 128;

/// Must the guard of `op` over the stack local `[addr, addr+size)` survive even
/// though no alias of that local escapes? Only at a cache-block zero, which
/// clears the whole aligned block holding its address and so reaches neighbors
/// of the byte it names. A frame-derived or transformed address may reach any
/// local. An unchanged entry address keeps the top-[`CACHE_BLOCK`]-byte bound;
/// only operations preserving every target address bit can carry that proof.
pub fn keeps_unaliased_guard(data: &Funcdata, op: OpId, addr: &Address, size: int4) -> bool {
    if !effect(data, op).is_some_and(|e| e.kind == Kind::ZeroBlock) {
        return false;
    }
    let Some(space) = addr
        .get_space()
        .filter(|s| s.get_type() == spacetype::IPTR_SPACEBASE)
    else {
        return true;
    };
    formed_in_frame(data, op, space.get_addr_size())
        || near_entry(addr.get_offset(), size, space.get_addr_size())
}

/// Does the stack range at `offset` (from the entry stack pointer, in an
/// `addr_size`-byte space) end less than [`CACHE_BLOCK`] bytes below that pointer?
fn near_entry(offset: u64, size: int4, addr_size: uint4) -> bool {
    let shift = 64 - 8 * addr_size.min(8);
    let signed = ((offset << shift) as i64) >> shift;
    signed.saturating_add(i64::from(size)) > -CACHE_BLOCK
}

/// Could the address reach private frame storage? Arithmetic can move an entry
/// address into the frame without reading the stack pointer. Only copies,
/// representation changes preserving all address bits and their joins keep
/// the entry bound. Unknown definitions and a traversal limit keep the guard.
fn formed_in_frame(data: &Funcdata, op: OpId, addr_size: uint4) -> bool {
    let Some(address) = data.obank().get(op).and_then(|o| o.get_in(1)) else {
        return true;
    };
    let stack_pointer = data
        .get_arch()
        .manage()
        .get_stack_space()
        .and_then(|s| s.get_spacebase(0).ok());
    let mut pending = vec![address];
    let mut seen = std::collections::BTreeSet::new();
    while let Some(id) = pending.pop() {
        if !seen.insert(id) {
            continue;
        }
        let Some(vn) = data.vbank().get(id).filter(|_| seen.len() <= 64) else {
            return true;
        };
        if vn.is_constant() {
            continue;
        }
        if vn.is_spacebase() {
            return true;
        }
        if vn.is_input() {
            let sp = stack_pointer.as_ref().filter(|sp| {
                sp.space
                    .as_ref()
                    .is_some_and(|s| vn.get_space().get_index() == s.get_index())
            });
            if sp.is_some_and(|sp| {
                vn.get_offset() < sp.offset.wrapping_add(u64::from(sp.size))
                    && sp.offset < vn.get_offset().wrapping_add(vn.get_size() as u64)
            }) {
                return true;
            }
            continue;
        }
        let Some(def) = vn.get_def().and_then(|d| data.obank().get(d)) else {
            return true;
        };
        let input = |slot| def.get_in(slot).and_then(|id| data.vbank().get(id));
        let address_size = addr_size as int4;
        let inputs = match def.code() {
            OpCode::CPUI_COPY | OpCode::CPUI_CAST
                if input(0).is_some_and(|v| v.get_size() == vn.get_size()) =>
            {
                1
            }
            OpCode::CPUI_INT_ZEXT | OpCode::CPUI_INT_SEXT
                if input(0).is_some_and(|v| v.get_size() >= address_size) =>
            {
                1
            }
            OpCode::CPUI_SUBPIECE
                if vn.get_size() >= address_size
                    && input(1).is_some_and(|v| v.is_constant() && v.get_offset() == 0) =>
            {
                1
            }
            OpCode::CPUI_PIECE if input(1).is_some_and(|v| v.get_size() >= address_size) => {
                pending.push(def.get_in(1).expect("PIECE low input"));
                continue;
            }
            OpCode::CPUI_MULTIEQUAL => def.num_input(),
            _ => return true,
        };
        pending.extend((0..inputs).filter_map(|slot| def.get_in(slot)));
    }
    false
}

pub fn input_type(data: &Funcdata, op: OpId, slot: int4) -> Option<Rc<Datatype>> {
    let effect = effect(data, op)?;
    let input = data.vbank().get(data.obank().get(op)?.get_in(slot)?)?;
    let types = data.get_arch().types()?;
    if slot == 1 && effect.width != 0 {
        let space = data.get_arch().manage().get_default_data_space()?;
        if input.get_size() != space.get_addr_size() as int4 {
            return None;
        }
        let value = types
            .get_base(effect.width, type_metatype::TYPE_UINT)
            .ok()?;
        return types
            .get_type_pointer(input.get_size(), value, space.get_word_size())
            .ok();
    }
    if slot == 2 && effect.value {
        return types
            .get_base(input.get_size(), type_metatype::TYPE_UINT)
            .ok();
    }
    None
}

pub fn output_type(data: &Funcdata, op: OpId) -> Option<Rc<Datatype>> {
    let effect = effect(data, op)?;
    let output = data.vbank().get(data.obank().get(op)?.get_out()?)?;
    (output.get_size() == effect.result)
        .then(|| {
            data.get_arch()
                .types()?
                .get_base(effect.result, result_metatype(effect.result))
                .ok()
        })
        .flatten()
}

/// A word result is `int`, as every constructor sign-extends it into its 64-bit
/// register; a doubleword result or a success byte is unsigned. Addresses and
/// stored values stay unsigned, so an `unsigned int *` operand needs no cast.
fn result_metatype(size: int4) -> type_metatype {
    if size == 4 {
        type_metatype::TYPE_INT
    } else {
        type_metatype::TYPE_UINT
    }
}

/// Fill this pass's hooks ([`crate::passhooks`]).
pub fn provide(hooks: &mut crate::passhooks::UnlaceHookSlots) {
    hooks.octeoneffects_input_type = Some(input_type);
    hooks.octeoneffects_output_type = Some(output_type);
}

#[cfg(test)]
mod tests;
