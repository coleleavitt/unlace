//! (kuna) Unprototyped 64-bit parameters in an aligned register pair (option
//! `armpairparam`, P4).
//!
//! On 32-bit ARM (AAPCS) a `long long` argument takes an even-aligned pair of
//! argument registers, `r0:r1` or `r2:r3`. The calling convention says so only
//! in its `<rule>` `join align="true"`, which the locked-prototype assignment
//! reads; the `<pentry>` list that unprototyped recovery reads has one 4-byte
//! entry per register. So with no prototype a pair that `pairparam` would join
//! is refused, and the parameter prints as two `int`s.
//!
//! With the option on, an input that covers exactly two consecutive general
//! register entries of the input model, the first at an even position among
//! them, counts as one parameter: `RuleDoubleInputPair` may join such a pair,
//! heritage's entry partition leaves the joined input whole, and
//! `ActionInputPrototype` registers one trial per register for it, both mapped
//! to the whole, so the recovered parameter is one 8-byte value at the pair.

use unlace_base::address::Address;
use unlace_base::space::spacetype;
use unlace_base::types::int4;

use crate::context::VarnodeId;
use crate::dtype::type_class;
use crate::fspec::{FuncProto, ParamEntry};
use crate::funcdata::Funcdata;

crate::kuna_flag!(
    /// (kuna) Join an unprototyped 64-bit parameter in an aligned register
    /// pair (option `armpairparam`). See [`crate::kuna_armpairparam`].
    ArmPairParams,
    "armpairparam",
    "register-pair parameter joining",
    unset: false,
    shipped: true
);

/// Whether `size` bytes at `addr` are exactly two consecutive general
/// register entries of `proto`'s input model, the first at an even position
/// among the general register entries of that space.
pub fn pair_slots(proto: &FuncProto, addr: &Address, size: int4) -> bool {
    if size <= 0 || size % 2 != 0 || !proto.has_model() {
        return false;
    }
    let word = size / 2;
    let Some(space) = addr.get_space() else {
        return false;
    };
    if space.get_type() != spacetype::IPTR_PROCESSOR {
        return false;
    }
    let model = proto.model();
    let gp: Vec<&ParamEntry> = model
        .input()
        .get_entry()
        .iter()
        .filter(|e| {
            e.get_join_record().is_none()
                && e.get_type() == type_class::TYPECLASS_GENERAL
                && e.get_space().get_index() == space.get_index()
        })
        .collect();
    let Some(pos) = gp
        .iter()
        .position(|e| e.get_base() == addr.get_offset() && e.get_size() == word)
    else {
        return false;
    };
    let next = addr.get_offset().checked_add(word as u64);
    pos % 2 == 0
        && gp
            .get(pos + 1)
            .is_some_and(|e| e.get_size() == word && Some(e.get_base()) == next)
}

/// Whether the option is on, `data` is a 32-bit ARM function whose inputs are
/// not locked, and `size` bytes at `addr` are an aligned register pair
/// ([`pair_slots`]). Only ARM: on MIPS o32, PowerPC and SPARC a pair's word
/// order is `bejoin`'s evidence to decide, which a joined input would
/// preempt.
pub fn joined_pair(data: &Funcdata, addr: &Address, size: int4) -> bool {
    data.get_arch().kuna_options.get::<ArmPairParams>().0
        && size == 8
        && arm32(data)
        && !data.get_func_proto().is_input_locked()
        && pair_slots(data.get_func_proto(), addr, size)
}

/// Whether `data`'s language is 32-bit ARM: it names `r0`..`r3`, `lr` and
/// `cpsr`, as `arithhelpers` tells the ARM helper convention apart.
fn arm32(data: &Funcdata) -> bool {
    let Some(lookup) = data.get_arch().manage().register_lookup() else {
        return false;
    };
    ["r0", "r1", "r2", "r3", "lr", "cpsr"]
        .iter()
        .all(|r| lookup.probe_register(r).is_some_and(|v| v.size == 4))
}

/// The storage of the parameter recovered from a trial at `trial` whose
/// varnode is `vn`: the start of `vn` when it is a joined register pair the
/// trial covers one word of, else the trial's own address.
pub fn param_addr(data: &Funcdata, vn: VarnodeId, trial: &Address) -> Address {
    match data.vbank().get(vn) {
        Some(v) if v.get_addr() != trial && joined_pair(data, v.get_addr(), v.get_size()) => {
            v.get_addr().clone()
        }
        _ => trial.clone(),
    }
}
