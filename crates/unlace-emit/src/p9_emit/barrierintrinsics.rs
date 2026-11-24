//! PowerPC barrier user ops printed as the GCC and Clang barrier builtins.
//!
//! SLEIGH lifts `sync L` as `sync(tmp)` with `tmp = L`, and `isync` as
//! `instructionSynchronize()`. The source that produced them called
//! `__sync()`, `__lwsync()`, `__ptesync()` or `__isync()`. The rewrite is
//! keyed on the user-op name and changes only the spelling of the call; the
//! `sync` operand must be a constant, directly or through one COPY, and any
//! other value keeps the SLEIGH name.

use crate::acleintrinsics::Intrinsic;
use crate::architecture::Architecture;
use crate::context::{OpId, VarnodeId};
use crate::funcdata::Funcdata;
use unlace_num::opcodes::OpCode;

/// The barrier builtin a PowerPC user op prints as, when `barrierintrinsics` is on.
#[doc(hidden)]
pub fn intrinsic(fd: &Funcdata, arch: &Architecture, op: OpId, name: &[u8]) -> Option<Intrinsic> {
    if !arch
        .unlace_options
        .get::<crate::printc::BarrierIntrinsics>()
        .0
        || !arch.archid.starts_with("PowerPC:")
    {
        return None;
    }
    let o = fd.obank().get(op)?;
    let operands: Vec<VarnodeId> = (1..o.num_input()).filter_map(|i| o.get_in(i)).collect();
    let l = match operands.as_slice() {
        &[l] => constant(fd, l),
        _ => None,
    };
    let name = spelling(name, l)?;
    Some(Intrinsic {
        name,
        args: Vec::new(),
    })
}

/// The builtin a user op named `name` prints as, given the constant `l` of a
/// `sync` operand (`None` when it is not a constant).
#[doc(hidden)]
pub fn spelling(name: &[u8], l: Option<u64>) -> Option<&'static str> {
    match (name, l) {
        (b"sync", Some(0)) => Some("__sync"),
        (b"sync", Some(1)) => Some("__lwsync"),
        (b"sync", Some(2)) => Some("__ptesync"),
        (b"instructionSynchronize", None) => Some("__isync"),
        _ => None,
    }
}

/// The value of `vn` when it is a constant, or the constant a single COPY assigns it.
fn constant(fd: &Funcdata, vn: VarnodeId) -> Option<u64> {
    let v = fd.vbank().get(vn)?;
    if v.is_constant() {
        return Some(v.get_offset());
    }
    let def = fd.obank().get(v.get_def()?)?;
    if def.code() != OpCode::CPUI_COPY {
        return None;
    }
    let src = fd.vbank().get(def.get_in(0)?)?;
    src.is_constant().then(|| src.get_offset())
}

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn sync_operand_selects_the_barrier() {
        assert_eq!(spelling(b"sync", Some(0)), Some("__sync"));
        assert_eq!(spelling(b"sync", Some(1)), Some("__lwsync"));
        assert_eq!(spelling(b"sync", Some(2)), Some("__ptesync"));
        assert_eq!(spelling(b"sync", Some(3)), None);
        assert_eq!(spelling(b"sync", None), None);
        assert_eq!(spelling(b"instructionSynchronize", None), Some("__isync"));
    }
}
