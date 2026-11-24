//! (unlace `evmstorage`) An EVM storage access prints as a storage access.
//!
//! The EVM spec lowers `SLOAD` and `SSTORE` to the user ops `sload(slot)` and
//! `sstore(slot, value)`, which print as raw calls. A constant slot is a fixed
//! state variable, `storage[0x0]`. A slot that a `keccak256` user op computes
//! (within a bounded def-chain walk of the slot varnode) is a mapping or dynamic
//! array element, printed as `mapping(...)`; any other computed slot prints as
//! `storage(...)`. The hash test follows the dataflow rather than a window of
//! instructions, so it is a heuristic: a slot that adds a hash to an unrelated
//! value is still read as hashed, and the printer keeps the slot operand so the
//! reader can check it.

use crate::context::{OpId, VarnodeId};
use crate::funcdata::Funcdata;
use unlace_num::opcodes::OpCode;

/// Deepest def-chain walk from a slot varnode.
const MAX_DEPTH: u32 = 6;

/// One `sload` or `sstore` user op, read for printing.
pub struct StorageAccess {
    /// Whether the op is an `sstore` (no output, prints as an assignment).
    pub store: bool,
    /// The slot operand.
    pub slot: VarnodeId,
    /// The slot value when the slot is a constant.
    pub constant: Option<u64>,
    /// Whether a `keccak256` user op computes the slot.
    pub hashed: bool,
    /// The stored value of an `sstore`.
    pub value: Option<VarnodeId>,
}

/// The storage access `op` performs, when `name` is `sload` or `sstore`.
/// `keccak` tells whether a user-op index names `keccak256`.
pub fn access(
    fd: &Funcdata,
    op: OpId,
    name: &str,
    keccak: impl Fn(u64) -> bool,
) -> Option<StorageAccess> {
    let store = match name {
        "sload" => false,
        "sstore" => true,
        _ => return None,
    };
    let o = fd.obank().get(op)?;
    let slot = o.get_in(1)?;
    let value = if store { Some(o.get_in(2)?) } else { None };
    let v = fd.vbank().get(slot)?;
    let constant = v.is_constant().then(|| v.get_offset());
    let hashed = constant.is_none() && hashed(fd, slot, &keccak, 0);
    Some(StorageAccess {
        store,
        slot,
        constant,
        hashed,
        value,
    })
}

/// Whether the def chain of `vn` within `MAX_DEPTH` ops reaches a `keccak256` call.
fn hashed(fd: &Funcdata, vn: VarnodeId, keccak: &dyn Fn(u64) -> bool, depth: u32) -> bool {
    if depth > MAX_DEPTH {
        return false;
    }
    let Some(def) = fd.vbank().get(vn).and_then(|v| v.get_def()) else {
        return false;
    };
    let Some(o) = fd.obank().get(def) else {
        return false;
    };
    if o.code() == OpCode::CPUI_CALLOTHER {
        return o
            .get_in(0)
            .and_then(|x| fd.vbank().get(x))
            .is_some_and(|x| keccak(x.get_offset()));
    }
    (0..o.num_input()).any(|s| {
        o.get_in(s as i32)
            .is_some_and(|x| hashed(fd, x, keccak, depth + 1))
    })
}

crate::unlace_flag!(
    /// (unlace `evmstorage`) Print an EVM `sload`/`sstore` as `storage[0x..]`, `mapping(..)`
    /// or `storage(..)`, and a store as an assignment.
    EvmStorage,
    "evmstorage",
    "EVM storage access names",
    unset: false,
    shipped: false
);
