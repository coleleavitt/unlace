//! (unlace) A return value that also indexes a load (option `retindexuse`, P4).
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
//! RETURN trial. A 64-bit address built as two 32-bit halves (SASS
//! `IADD3`/`IMAD.X` into a register pair, read back as one `PIECE`) is
//! followed through its low half, and a `COPY` on the way is looked through.
//! An operand computed from constants only (SASS `IMAD.MOV` adds `RZ * RZ`)
//! counts as a constant offset, and a walked operand that is a `PIECE` the
//! walk reached through its high half only is a base pointer's high word, so
//! neither makes a load an index use.
//! The shipped default `bpf` applies it on eBPF only, where a
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

impl crate::optionset::UnlaceOption for RetIndexUse {
    const NAME: &'static str = "retindexuse";
    crate::unlace_option_id!();

    fn unset() -> Self {
        RetIndexUse::Off
    }

    fn shipped() -> Self {
        RetIndexUse::Bpf
    }

    fn parse(value: &str) -> unlace_base::error::UnlaceResult<(Self, String)> {
        let (choice, what) = match value.trim() {
            "off" => (RetIndexUse::Off, "off"),
            "bpf" => (RetIndexUse::Bpf, "on eBPF"),
            "on" => (RetIndexUse::On, "on every target"),
            other => {
                return Err(unlace_base::error::UnlaceError::parse(format!(
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
    match data.get_arch().unlace_options.get::<RetIndexUse>() {
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
    for _ in 0..12 {
        let Some(def) = vbank.get(addr).and_then(|v| v.get_def()) else {
            return false;
        };
        let Some(o) = obank.get(def) else {
            return false;
        };
        match o.code() {
            OpCode::CPUI_INT_ADD | OpCode::CPUI_PTRADD => {}
            OpCode::CPUI_COPY => match o.get_in(0) {
                Some(x) => {
                    addr = x;
                    continue;
                }
                None => return false,
            },
            OpCode::CPUI_PIECE => match o.get_in(1) {
                Some(lo) => {
                    addr = lo;
                    continue;
                }
                None => return false,
            },
            _ => return false,
        }
        let (Some(a), Some(b)) = (o.get_in(0), o.get_in(1)) else {
            return false;
        };
        let constant = |x: VarnodeId| constant_expr(data, x, 4);
        let marked = |x: VarnodeId| vbank.get(x).is_some_and(|v| v.is_mark());
        match (constant(a), constant(b)) {
            (false, true) => addr = a,
            (true, false) => addr = b,
            (false, false) => {
                let index = if marked(a) { a } else { b };
                return marked(a) != marked(b) && !high_word_only(data, index);
            }
            (true, true) => return false,
        }
    }
    false
}

/// Whether `vn` is a constant, or an arithmetic op over constants only
/// (SASS `IMAD.MOV R6, RZ, RZ, R5` adds `RZ * RZ` to `R5`), at most
/// `depth` ops deep.
fn constant_expr(data: &Funcdata, vn: VarnodeId, depth: u32) -> bool {
    let Some(v) = data.vbank().get(vn) else {
        return false;
    };
    if v.is_constant() {
        return true;
    }
    if depth == 0 {
        return false;
    }
    let Some(o) = v.get_def().and_then(|d| data.obank().get(d)) else {
        return false;
    };
    if !matches!(
        o.code(),
        OpCode::CPUI_COPY
            | OpCode::CPUI_INT_ADD
            | OpCode::CPUI_INT_SUB
            | OpCode::CPUI_INT_MULT
            | OpCode::CPUI_INT_AND
            | OpCode::CPUI_INT_OR
            | OpCode::CPUI_INT_XOR
            | OpCode::CPUI_INT_LEFT
            | OpCode::CPUI_INT_ZEXT
            | OpCode::CPUI_INT_SEXT
            | OpCode::CPUI_INT_2COMP
            | OpCode::CPUI_INT_NEGATE
    ) {
        return false;
    }
    (0..o.num_input()).all(|i| {
        o.get_in(i)
            .is_some_and(|x| constant_expr(data, x, depth - 1))
    })
}

/// Whether the walked operand `vn` of an address add is, through `COPY`s, a
/// `PIECE` the walk reached through its high half only: the returned value
/// is then the high word of the base pointer, not an index.
fn high_word_only(data: &Funcdata, vn: VarnodeId) -> bool {
    let vbank = data.vbank();
    let mut cur = vn;
    for _ in 0..4 {
        let Some(o) = vbank
            .get(cur)
            .and_then(|v| v.get_def())
            .and_then(|d| data.obank().get(d))
        else {
            return false;
        };
        match o.code() {
            OpCode::CPUI_COPY => match o.get_in(0) {
                Some(x) => cur = x,
                None => return false,
            },
            OpCode::CPUI_PIECE => {
                return !o
                    .get_in(1)
                    .and_then(|lo| vbank.get(lo))
                    .is_some_and(|lo| lo.is_mark());
            }
            _ => return false,
        }
    }
    false
}

/// Fill this pass's hooks ([`crate::passhooks`]).
pub fn provide(hooks: &mut crate::passhooks::UnlaceHookSlots) {
    hooks.retindexuse_index_only_load = Some(index_only_load);
}
