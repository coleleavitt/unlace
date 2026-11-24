//! (kuna) A return value also tested for its add's carry (option `carryuse`, P4).
//!
//! `Funcdata::onlyOpUse` (funcdata_varnode.cc:1851) refuses a RETURN trial whose value
//! reaches a branch: a register the function branches on is taken for something it
//! inspects, not something it returns. A target with no carry flag adds a 64-bit value
//! as two 32-bit adds and moves the carry with a compare of the low sum against an
//! addend: Xtensa's `add a2,a10,a8; bgeu a2,a8,1f; addi a3,a3,1`. The low word of
//! every such returned sum reaches that branch, so the trial is refused and a function
//! returning `a * b + (a >> 3)` or `f(x) + 7` as a `long long` printed `void`.
//!
//! With the option on, an unsigned `<` or `<=` between the walked value, when an
//! `INT_ADD` defines it, and one of that add's own inputs (the same Varnode, or a
//! constant of the same value) is the carry test of the sum. It is not a competing
//! use of the returned value, and the walk does not follow it.

use unlace_num::opcodes::OpCode;

use crate::context::{OpId, VarnodeId};
use crate::funcdata::Funcdata;

crate::kuna_flag!(
    /// (kuna `carryuse`) A RETURN trial's carry test is not a competing use.
    CarryUse,
    "carryuse",
    "carry-test use of a return value",
    unset: false,
    shipped: true
);

/// Whether `a` and `b` are one value: the same Varnode, or equal constants.
fn same(data: &Funcdata, a: VarnodeId, b: VarnodeId) -> bool {
    a == b
        || matches!(
            (data.vbank().get(a), data.vbank().get(b)),
            (Some(x), Some(y)) if x.is_constant() && y.is_constant()
                && x.get_size() == y.get_size() && x.get_offset() == y.get_offset()
        )
}

/// Whether `compare`, reading `vn` for `opmatch`'s trial walk, is the carry test of
/// the add that defines `vn`.
#[doc(hidden)]
pub fn carry_test(data: &Funcdata, opmatch: OpId, compare: OpId, vn: VarnodeId) -> bool {
    if !data.get_arch().kuna_options.get::<CarryUse>().0 {
        return false;
    }
    let obank = data.obank();
    if obank.get(opmatch).map(|o| o.code()) != Some(OpCode::CPUI_RETURN) {
        return false;
    }
    let Some(cmp) = obank.get(compare) else {
        return false;
    };
    if !matches!(
        cmp.code(),
        OpCode::CPUI_INT_LESS | OpCode::CPUI_INT_LESSEQUAL
    ) {
        return false;
    }
    let (Some(c0), Some(c1)) = (cmp.get_in(0), cmp.get_in(1)) else {
        return false;
    };
    let other = match (c0 == vn, c1 == vn) {
        (true, false) => c1,
        (false, true) => c0,
        _ => return false,
    };
    let Some(add) = data
        .vbank()
        .get(vn)
        .and_then(|v| v.get_def())
        .and_then(|d| obank.get(d))
    else {
        return false;
    };
    if add.code() != OpCode::CPUI_INT_ADD {
        return false;
    }
    (0..2).any(|slot| add.get_in(slot).is_some_and(|a| same(data, a, other)))
}

/// Fill this pass's hooks ([`crate::passhooks`]).
pub fn provide(hooks: &mut crate::passhooks::KunaHookSlots) {
    hooks.carryuse_carry_test = Some(carry_test);
}
