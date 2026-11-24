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
//! RETURN trial. The shipped default `bpf` applies it on eBPF only, where a
//! measurement of BPF, SASS, x86-64 and Thumb-2 builds of the same C (#865)
//! found only right returns gained; elsewhere a scratch register that indexes
//! a loop and is left in the return register of a `void` function would read
//! as a return value (Thumb-2), or a 32-bit return widen to a register pair.

use unlace_num::opcodes::OpCode;

use crate::context::{OpId, VarnodeId};
use crate::funcdata::Funcdata;

/// The value of option `retindexuse`: never, on eBPF only (the shipped
/// default), or on every target.
#[derive(Clone, Copy, Debug, PartialEq, Eq)]
pub enum RetIndexUse {
    Off,
    Bpf,
    On,
}

impl crate::kuna_optionset::KunaOption for RetIndexUse {
    const NAME: &'static str = "retindexuse";
    crate::kuna_option_id!();

    fn unset() -> Self {
        RetIndexUse::Off
    }

    fn shipped() -> Self {
        RetIndexUse::Bpf
    }

    fn parse(value: &str) -> unlace_base::error::KunaResult<(Self, String)> {
        let (choice, what) = match value.trim() {
            "off" => (RetIndexUse::Off, "off"),
            "bpf" => (RetIndexUse::Bpf, "on eBPF"),
            "on" => (RetIndexUse::On, "on every target"),
            other => {
                return Err(unlace_base::error::KunaError::parse(format!(
                    "retindexuse: expected off, bpf or on, got {other:?}"
                )));
            }
        };
        Ok((
            choice,
            format!("index-only load use of a return value {what}"),
        ))
    }
}

/// Whether `data`'s language is eBPF: it names `R0`..`R10` and `PC`, all
/// eight bytes, and no `R11`.
fn ebpf(data: &Funcdata) -> bool {
    let Some(lookup) = data.get_arch().manage().register_lookup() else {
        return false;
    };
    let regs = [
        "R0", "R1", "R2", "R3", "R4", "R5", "R6", "R7", "R8", "R9", "R10", "PC",
    ];
    regs.iter()
        .all(|r| lookup.probe_register(r).is_some_and(|v| v.size == 8))
        && lookup.probe_register("R11").is_none()
}

/// Whether the option is on, `opmatch` is a RETURN and the LOAD `op` reads
/// through `vn`, an address that is the walked (marked) value plus a value
/// the walk did not reach, constant offsets folded on the way.
fn index_only_load(data: &Funcdata, opmatch: OpId, op: OpId, vn: VarnodeId) -> bool {
    match data.get_arch().kuna_options.get::<RetIndexUse>() {
        RetIndexUse::Off => return false,
        RetIndexUse::Bpf if !ebpf(data) => return false,
        _ => {}
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
