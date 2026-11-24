//! (kuna) A return value that also indexes a load (option `retindexuse`, P4).
//!
//! `Funcdata::onlyOpUse` (funcdata_varnode.cc:1851) scores a RETURN trial by
//! walking every use of the register's value forward, and a LOAD anywhere on that
//! walk refuses the trial: a register whose value addresses memory is taken for a
//! pointer the function was handed, not a value it returns. A loop counter that
//! is also the return register falls to the same test whenever the loop indexes
//! memory with it. BPF, whose return register `r0` is the only one a leaf
//! function writes, and SASS show it on `while (s[n]) n++; return n;`: the
//! counter is `r0`, `s + n` is loaded, and the function prints `void`.
//!
//! With the option on, a LOAD whose address is the walked value plus a value the
//! walk did not reach (a base pointer; constant offsets folded on the way) is an
//! index use, not a dereference of the returned value, and does not refuse a
//! RETURN trial. Off by default: a scratch register that indexes a loop and is
//! left in the return register of a `void` function is then a return value too.

use unlace_num::opcodes::OpCode;

use crate::context::{OpId, VarnodeId};
use crate::funcdata::Funcdata;

crate::kuna_flag!(
    /// (kuna) A RETURN trial whose value only indexes a load stays a return
    /// value (option `retindexuse`). See [`crate::kuna_retindexuse`].
    RetIndexUse,
    "retindexuse",
    "index-only load use of a return value",
    unset: false,
    shipped: false
);

/// Whether the option is on, `opmatch` is a RETURN and the LOAD `op` reads
/// through `vn`, an address that is the walked (marked) value plus a value
/// the walk did not reach, constant offsets folded on the way.
fn index_only_load(data: &Funcdata, opmatch: OpId, op: OpId, vn: VarnodeId) -> bool {
    if !data.get_arch().kuna_options.get::<RetIndexUse>().0 {
        return false;
    }
    let obank = data.obank();
    let vbank = data.vbank();
    if obank.get(opmatch).map(|o| o.code()) != Some(OpCode::CPUI_RETURN) {
        return false;
    }
    if obank.get(op).and_then(|o| o.get_in(1)) != Some(vn) {
        return false;
    }
    let mut addr = vn;
    for _ in 0..8 {
        let Some(def) = vbank.get(addr).and_then(|v| v.get_def()) else {
            return false;
        };
        let Some(o) = obank.get(def) else {
            return false;
        };
        if !matches!(o.code(), OpCode::CPUI_INT_ADD | OpCode::CPUI_PTRADD) {
            return false;
        }
        let (Some(a), Some(b)) = (o.get_in(0), o.get_in(1)) else {
            return false;
        };
        let constant = |x: VarnodeId| vbank.get(x).is_some_and(|v| v.is_constant());
        let marked = |x: VarnodeId| vbank.get(x).is_some_and(|v| v.is_mark());
        match (constant(a), constant(b)) {
            (false, true) => addr = a,
            (true, false) => addr = b,
            (false, false) => return marked(a) != marked(b),
            (true, true) => return false,
        }
    }
    false
}

/// Fill this pass's hooks ([`crate::kuna_passhooks`]).
pub fn provide(hooks: &mut crate::kuna_passhooks::KunaHookSlots) {
    hooks.retindexuse_index_only_load = Some(index_only_load);
}
