//! (unlace `structassign`) A `memcpy` of one whole struct prints as an assignment.
//!
//! A compiler copies a struct with `memcpy` (or inlines the copy, which unlace's
//! copy folds turn back into `memcpy`), so a by-value assignment `*d = *s;` or
//! `v = *p;` prints as `memcpy(d,s,0x18);`. Hex-Rays turns such a copy back into
//! a struct move when the copy size is the size of the struct type the
//! pointers have (hexx64 `sub_4C8BB0`, "recognized structure copy: transformed
//! memcpy to mov"). With the option on, a direct three-argument call of
//! `memcpy` whose result is unused, whose size is a constant, and whose
//! destination and source are both pointers to one and the same struct or
//! union type of exactly that size prints as `*d = *s`; an argument that is the
//! address of a variable prints as the variable. The IR is unchanged.

use std::rc::Rc;

use unlace_num::opcodes::OpCode;

use crate::architecture::Architecture;
use crate::context::{OpId, VarnodeId};
use crate::dtype::{Datatype, type_metatype};
use crate::funcdata::Funcdata;

crate::unlace_flag!(
    /// (unlace `structassign`) Print a `memcpy` of exactly one struct between two
    /// pointers to that struct type as `*d = *s`.  See [`crate::structassign`].
    StructAssign,
    "structassign",
    "struct-copy assignment printing",
    unset: false,
    shipped: false
);

/// `memcpy`, with or without leading underscores.
pub fn is_memcpy(name: &str) -> bool {
    name.trim_start_matches('_') == "memcpy"
}

/// The struct or union type `vn` points to, when it is a pointer to one.
fn pointee(fd: &Funcdata, vn: VarnodeId) -> Option<Rc<Datatype>> {
    let ty = fd.vbank().get(vn)?.get_type().clone();
    if ty.get_metatype() != type_metatype::TYPE_PTR {
        return None;
    }
    let to = ty.get_ptr_to()?;
    matches!(
        to.get_metatype(),
        type_metatype::TYPE_STRUCT | type_metatype::TYPE_UNION
    )
    .then_some(to)
}

/// The destination and source of the direct CALL `op` to `callee` when it is a
/// whole-struct `memcpy` the option prints as an assignment.
pub fn recover(
    fd: &Funcdata,
    arch: &Architecture,
    op: OpId,
    callee: &str,
) -> Option<(VarnodeId, VarnodeId)> {
    if !arch.unlace_options.get::<StructAssign>().0 || !is_memcpy(callee) {
        return None;
    }
    let o = fd.obank().get(op)?;
    if o.code() != OpCode::CPUI_CALL || o.num_input() != 4 {
        return None;
    }
    if let Some(out) = o.get_out() {
        if fd
            .vbank()
            .get(out)
            .is_some_and(|v| v.descend_iter().next().is_some())
        {
            return None;
        }
    }
    let (dst, src, len) = (o.get_in(1)?, o.get_in(2)?, o.get_in(3)?);
    let len = fd.vbank().get(len)?;
    if !len.is_constant() {
        return None;
    }
    let (to_dst, to_src) = (pointee(fd, dst)?, pointee(fd, src)?);
    let size = u64::try_from(to_dst.get_size()).ok()?;
    (Rc::ptr_eq(&to_dst, &to_src) && size > 0 && len.get_offset() == size).then_some((dst, src))
}

#[cfg(test)]
mod tests;
