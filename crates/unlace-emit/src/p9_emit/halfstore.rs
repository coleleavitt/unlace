//! (unlace `partialaccess`) Print a store into the low half of a variable as that
//! store instead of a whole-variable `CONCAT`.
//!
//! Heritage writes a four-byte store into an eight-byte variable as a new value
//! of the whole variable: `v = PIECE(SUBPIECE(v_old, 4), x)`, the old high bytes
//! concatenated with the stored ones. When Merge gives the old and the new value
//! one variable, the statement prints as
//!
//! ```c
//! v12 = CONCAT44(((unsigned int *)&v12)[1],v3);
//! ```
//!
//! which says "keep the high half, replace the low half" in the most roundabout
//! way C allows. IDA 9.5 prints the same store as `LODWORD(v12) = v3;` (SysWOW64
//! TpmCoreProvisioning.dll `ValidationFlagsToString`, `0x100fe0a0`). With
//! `partialaccess` on it prints as the partial-access lvalue that option already
//! uses for such bytes, `*(unsigned int *)&v12 = v3;`.
//!
//! The shape is exact: a two-input PIECE whose high input is an implied
//! SUBPIECE, taking the bytes above the low input, of a value in the same
//! variable as the PIECE's output, all three the same total width, the low input
//! a C scalar width, and the storage little-endian (offset 0 is the low half).
//! Anything else keeps the `CONCAT` form.

use crate::context::{OpId, VarnodeId};
use crate::funcdata::Funcdata;
use unlace_num::opcodes::OpCode;

/// The value stored into the low bytes of the PIECE's output, and its width.
#[doc(hidden)]
pub struct HalfStore {
    pub value: VarnodeId,
    pub size: i32,
}

/// The half store `op` is, if it is one (see the module header).
#[doc(hidden)]
pub fn plan(fd: &Funcdata, op: OpId) -> Option<HalfStore> {
    let piece = fd.obank().get(op)?;
    if piece.code() != OpCode::CPUI_PIECE || piece.num_input() != 2 {
        return None;
    }
    let (out, hi, lo) = (piece.get_out()?, piece.get_in(0)?, piece.get_in(1)?);
    let (ov, hv, lv) = (
        fd.vbank().get(out)?,
        fd.vbank().get(hi)?,
        fd.vbank().get(lo)?,
    );
    if ov.get_space().is_big_endian()
        || !crate::partialaccess::is_scalar_width(lv.get_size())
        || hv.get_size() + lv.get_size() != ov.get_size()
        || !hv.is_implied()
    {
        return None;
    }
    let sub = fd.obank().get(hv.get_def()?)?;
    if sub.code() != OpCode::CPUI_SUBPIECE || sub.num_input() != 2 {
        return None;
    }
    let (src, shift) = (sub.get_in(0)?, fd.vbank().get(sub.get_in(1)?)?);
    let sv = fd.vbank().get(src)?;
    if !shift.is_constant()
        || shift.get_offset() != lv.get_size() as u64
        || sv.get_size() != ov.get_size()
    {
        return None;
    }
    match (sv.get_high(), ov.get_high()) {
        (Some(a), Some(b)) if a == b => Some(HalfStore {
            value: lo,
            size: lv.get_size(),
        }),
        _ => None,
    }
}
