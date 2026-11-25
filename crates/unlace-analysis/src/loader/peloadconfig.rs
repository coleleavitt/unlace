//! (unlace) The PE load configuration directory (`IMAGE_LOAD_CONFIG_DIRECTORY`,
//! data directory 10; Microsoft PE/COFF specification, "The Load Configuration
//! Structure").
//!
//! The directory lists code the rest of the image may never mention:
//!
//! - **The Control Flow Guard function table** (`GuardCFFunctionTable`): one
//!   record per function whose address the program takes, so a stripped image
//!   built with `/guard:cf` lists every indirect-call target, including those
//!   only reached through a RIP-relative `lea` that leaves no base relocation.
//!   A record is an RVA followed by `GuardFlags >> 28` extra flag bytes.
//! - **The SafeSEH handler table** (`SEHandlerTable`/`SEHandlerCount`, PE32):
//!   an RVA array of the exception handlers the image registers.
//!
//! Both are function starts. It also names data slots the CRT owns and code
//! loads through: the security cookie, the guard check/dispatch pointers and
//! their XFG variants, and the guarded `memcpy` pointer.
//!
//! The structure grew field by field across Windows releases, so each field is
//! read only when the directory's own `Size` covers it. The EH continuation and
//! long-jump target tables are not read: their entries are resume points inside
//! functions, not function starts.

use std::mem::{offset_of, size_of};

use object::pe::{
    IMAGE_DIRECTORY_ENTRY_LOAD_CONFIG, ImageLoadConfigDirectory32, ImageLoadConfigDirectory64,
};
use object::read::pe::{ImageNtHeaders, PeFile};
use object::{LittleEndian as LE, Object};

/// The slots whose routine validates the call target in a register and jumps
/// to it, so a call through one is the call it guards.
pub(crate) const DISPATCH_SLOTS: &[&str] = &[
    "__guard_dispatch_icall_fptr",
    "__guard_xfg_dispatch_icall_fptr",
];

/// A named pointer-sized slot: `(vma, name)`.
pub(crate) type Slot = (u64, &'static str);

/// The offsets of the fields read here, for one pointer width.
struct Layout {
    ptr: usize,
    security_cookie: usize,
    sehandler_table: usize,
    sehandler_count: usize,
    guard_check: usize,
    guard_dispatch: usize,
    guard_table: usize,
    guard_count: usize,
    guard_flags: usize,
    /// End of the fields `object` models; `GuardEHContinuationTable` and its
    /// count follow, then the three XFG pointers, `CastGuardOsDeterminedFailureMode`
    /// and `GuardMemcpyFunctionPointer`.
    tail: usize,
}

macro_rules! layout {
    ($t:ty, $ptr:expr) => {
        Layout {
            ptr: $ptr,
            security_cookie: offset_of!($t, security_cookie),
            sehandler_table: offset_of!($t, sehandler_table),
            sehandler_count: offset_of!($t, sehandler_count),
            guard_check: offset_of!($t, guard_cf_check_function_pointer),
            guard_dispatch: offset_of!($t, guard_cf_dispatch_function_pointer),
            guard_table: offset_of!($t, guard_cf_function_table),
            guard_count: offset_of!($t, guard_cf_function_count),
            guard_flags: offset_of!($t, guard_flags),
            tail: size_of::<$t>(),
        }
    };
}

const LAYOUT32: Layout = layout!(ImageLoadConfigDirectory32, 4);
const LAYOUT64: Layout = layout!(ImageLoadConfigDirectory64, 8);

const GUARD_TABLE_STRIDE_SHIFT: u32 = 28;

/// Upper bound on the records read from one table: a corrupt count cannot
/// make the walk allocate without limit.
const MAX_RECORDS: u64 = 1 << 20;

/// The directory bytes of a typed PE, cut to the structure's own `Size`, with
/// the layout of its pointer width.
fn directory<'d, Pe: ImageNtHeaders>(
    pe: &PeFile<'d, Pe>,
    bytes: &'d [u8],
) -> Option<(&'d [u8], &'static Layout)> {
    let layout = if pe.is_64() { &LAYOUT64 } else { &LAYOUT32 };
    let dir = pe
        .data_directories()
        .get(IMAGE_DIRECTORY_ENTRY_LOAD_CONFIG)?;
    if dir.size.get(LE) == 0 {
        return None;
    }
    let data = pe
        .section_table()
        .pe_data_at(bytes, dir.virtual_address.get(LE))?;
    let size = read(data, 0, 4)? as usize;
    Some((data.get(..size.min(data.len()))?, layout))
}

/// The little-endian word of `width` bytes at `off`, or `None` past the end.
fn read(data: &[u8], off: usize, width: usize) -> Option<u64> {
    let b = data.get(off..off.checked_add(width)?)?;
    Some(b.iter().rev().fold(0u64, |v, &x| (v << 8) | x as u64))
}

/// Every function start the load configuration lists: the Control Flow Guard
/// function table and the SafeSEH handler table, as VMAs.
pub(crate) fn function_starts<Pe: ImageNtHeaders>(pe: &PeFile<'_, Pe>, bytes: &[u8]) -> Vec<u64> {
    let mut out = Vec::new();
    let Some((cfg, l)) = directory(pe, bytes) else {
        return out;
    };
    let base = pe.relative_address_base();
    let mut table = |va_off: usize, count_off: usize, count_width: usize, stride: u64| {
        let (Some(va), Some(count)) = (read(cfg, va_off, l.ptr), read(cfg, count_off, count_width))
        else {
            return;
        };
        let Some(rva) = va.checked_sub(base).and_then(|r| u32::try_from(r).ok()) else {
            return;
        };
        if va == 0 || count == 0 {
            return;
        }
        let Some(data) = pe.section_table().pe_data_at(bytes, rva) else {
            return;
        };
        let count = count.min(MAX_RECORDS).min(data.len() as u64 / stride);
        let records = (0..count).filter_map(|i| read(data, (i * stride) as usize, 4));
        out.extend(
            records
                .filter(|&rva| rva != 0)
                .map(|rva| base.wrapping_add(rva)),
        );
    };
    let flags = read(cfg, l.guard_flags, 4).unwrap_or(0) as u32;
    table(
        l.guard_table,
        l.guard_count,
        l.ptr,
        4 + (flags >> GUARD_TABLE_STRIDE_SHIFT) as u64,
    );
    table(l.sehandler_table, l.sehandler_count, l.ptr, 4);
    out
}

/// The pointer-sized data slots the load configuration names, as `(vma, name)`.
/// A zero pointer, or one the structure's `Size` does not reach, is skipped.
pub(crate) fn named_slots<Pe: ImageNtHeaders>(pe: &PeFile<'_, Pe>, bytes: &[u8]) -> Vec<Slot> {
    let Some((cfg, l)) = directory(pe, bytes) else {
        return Vec::new();
    };
    let p = l.ptr;
    let fields = [
        (l.security_cookie, "__security_cookie"),
        (l.guard_check, "__guard_check_icall_fptr"),
        (l.guard_dispatch, "__guard_dispatch_icall_fptr"),
        (l.tail + 2 * p, "__guard_xfg_check_icall_fptr"),
        (l.tail + 3 * p, "__guard_xfg_dispatch_icall_fptr"),
        (l.tail + 4 * p, "__guard_xfg_table_dispatch_icall_fptr"),
        (l.tail + 6 * p, "__guard_memcpy_fptr"),
    ];
    fields
        .into_iter()
        .filter_map(|(off, name)| read(cfg, off, p).filter(|&va| va != 0).map(|va| (va, name)))
        .collect()
}

/// [`named_slots`] for an untyped PE image; empty for anything else.
pub(crate) fn image_named_slots(bytes: &[u8]) -> Vec<Slot> {
    use object::read::pe::{PeFile32, PeFile64};
    match object::FileKind::parse(bytes) {
        Ok(object::FileKind::Pe64) => PeFile64::parse(bytes)
            .map(|pe| named_slots(&pe, bytes))
            .unwrap_or_default(),
        Ok(object::FileKind::Pe32) => PeFile32::parse(bytes)
            .map(|pe| named_slots(&pe, bytes))
            .unwrap_or_default(),
        _ => Vec::new(),
    }
}

#[cfg(test)]
mod tests;
