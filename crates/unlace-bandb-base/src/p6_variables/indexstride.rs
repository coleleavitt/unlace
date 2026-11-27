//! (unlace `indexstride`) An indexed stack array is declared with the element its
//! index steps by, not the width of a wider access at its start.
//!
//! `MapState::gatherOpen` (varmap.cc:1221) adds an open range for every indexed
//! stack base, typed by the element the index steps over. `RangeHint::preferred`
//! (varmap.cc:126-157) then throws that range out against any fixed range at the
//! same start whose data-type does not reconcile with it, so the last, widest
//! fixed access decides the element. gcc's inline expansion of
//! `strncmp(buf, "SH ", 3)` reads the buffer as one 2-byte and one 1-byte compare,
//! and `strncmp(buf, "PING", 4)` as one 4-byte compare; beside `buf[n] = 0`,
//! `char buf[1024]` was declared `int buf[258]` and the indexed store printed
//! `((char *)buf)[n] = 0`.
//!
//! With the option on (the default), a fixed hint is dropped when it is an unlocked integer
//! access inside the elements the index is already known to reach, wider than
//! the element and starting on an element boundary. The access stays: it is
//! mapped into the array and prints as a cast of the elements it covers
//! (`*(int *)buf == 0x474e4950`). A locked type, a shared-storage view, a
//! pointer, float or aggregate access, a constant store (which upstream's
//! constant absorption already weighs) and anything past the index's proven
//! reach keep upstream's merge.

use unlace_base::error::UnlaceResult;
use unlace_base::types::intb;

use crate::dtype::type_metatype;
use crate::funcdata::Funcdata;
use crate::options::on_or_off;
use crate::varmap::{COPY_CONSTANT, MapState, RangeHint, RangeType, SHARED_STORAGE, TYPELOCK};

/// (unlace) Option `indexstride`: an indexed stack array keeps its index's element.
#[derive(Clone, Debug, PartialEq)]
pub struct IndexStride(pub bool);

impl crate::optionset::UnlaceOption for IndexStride {
    const NAME: &'static str = "indexstride";
    crate::unlace_option_id!();

    fn unset() -> Self {
        IndexStride(false)
    }

    fn shipped() -> Self {
        IndexStride(true)
    }

    fn parse(value: &str) -> UnlaceResult<(Self, String)> {
        let (v, msg) = OptionIndexStride.apply(value)?;
        Ok((IndexStride(v), msg))
    }
}

/// `option indexstride on|off`.
pub struct OptionIndexStride;

impl OptionIndexStride {
    /// The option name.
    pub const NAME: &'static str = "indexstride";

    /// Resolve the flag and its confirmation message; the caller writes it into
    /// the registered option `IndexStride`.
    pub fn apply(&self, p1: &str) -> UnlaceResult<(bool, String)> {
        let val = on_or_off(p1)?;
        let prop = if val { "on" } else { "off" };
        Ok((
            val,
            format!("Indexed array element from its stride turned {prop}"),
        ))
    }
}

/// Drop the fixed hints the indexed arrays of `state` cover, when the option is on.
pub fn settle(fd: &Funcdata, state: &mut MapState) {
    if fd.get_arch().unlace_options.get::<IndexStride>().0 {
        settle_hints(state.hints_mut());
    }
}

/// The element width of an integer-like hint's data-type, if it has one.
fn integer_width(h: &RangeHint) -> Option<intb> {
    let ct = &h.type_;
    let size = ct.get_size();
    let integer = matches!(
        ct.get_metatype(),
        type_metatype::TYPE_INT | type_metatype::TYPE_UINT | type_metatype::TYPE_UNKNOWN
    );
    (integer && size > 0 && size == ct.get_align_size() && h.flags & TYPELOCK == 0)
        .then_some(size as intb)
}

/// `[start, end)` and the element width of an indexed open hint.
fn indexed_reach(h: &RangeHint) -> Option<(intb, intb, intb)> {
    if h.range_type != RangeType::Open || h.highind < 0 {
        return None;
    }
    let width = integer_width(h)?;
    Some((h.sstart, h.sstart + (h.highind as intb + 1) * width, width))
}

/// Does the indexed array `(start, end, width)` take the fixed hint `h`?
fn covers(h: &RangeHint, (start, end, width): (intb, intb, intb)) -> bool {
    if h.range_type != RangeType::Fixed || h.flags & (SHARED_STORAGE | COPY_CONSTANT) != 0 {
        return false;
    }
    let Some(size) = integer_width(h) else {
        return false;
    };
    size > width
        && size % width == 0
        && h.sstart >= start
        && h.sstart + size <= end
        && (h.sstart - start) % width == 0
}

/// Remove every fixed hint an indexed array in `hints` covers.
pub(crate) fn settle_hints(hints: &mut Vec<RangeHint>) {
    let arrays: Vec<(intb, intb, intb)> = hints.iter().filter_map(indexed_reach).collect();
    if !arrays.is_empty() {
        hints.retain(|h| !arrays.iter().any(|&a| covers(h, a)));
    }
}

#[cfg(test)]
mod tests;
