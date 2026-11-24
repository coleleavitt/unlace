//! (kuna) The PE C runtime's initializer tables: the `INIT_ARRAY` of an MSVC
//! image.
//!
//! MSVC collects every C++ dynamic initializer (the constructor call for a
//! global object, `??__E`) and every C initializer into `.CRT$XCA..XCZ` and
//! `.CRT$XIA..XIZ`, merged into `.rdata`, and the CRT startup runs them by
//! handing each table's bounds to the runtime:
//!
//! ```text
//!     push offset __xi_z
//!     push offset __xi_a
//!     call _initterm_e          ; int (*)(void) entries, stop at the first error
//!     ...
//!     push offset __xc_z
//!     push offset __xc_a
//!     call _initterm            ; void (*)(void) entries
//! ```
//!
//! Every non-null word in `[__xc_a, __xc_z)` is a function the CRT calls, and
//! nothing else names it: no instruction calls an initializer, a PE32 has no
//! `.pdata`, and the table is far from any relocated-pointer heuristic's comfort.
//! An MFC application with thousands of global objects keeps a large share of its
//! code behind this one table (Holley EFI's `Holley.exe`: 2,113 entries, about a
//! megabyte of `.text` that no other oracle reached and the run-on bounder
//! folded into one function).
//!
//! The call is read where the image links the runtime dynamically: a call to an
//! import named `_initterm` or `_initterm_e` (its `FF 25` veneer or
//! `call [slot]`) directly after the two `push imm32` of the bounds. A
//! statically linked CRT's `_initterm` is an anonymous local function and is not
//! recognized. PE32 only: a PE32+ has `.pdata`, which already names every
//! non-leaf initializer.

use std::collections::HashSet;

use object::read::{Object, ObjectSection};

/// The import names whose two stack arguments bound an initializer table.
const INITTERM: [&str; 2] = ["_initterm", "_initterm_e"];

/// The largest table read, in entries.
const MAX_ENTRIES: u64 = 1 << 16;

/// Push every non-null entry of each initializer table a PE32's CRT startup
/// hands to `_initterm` / `_initterm_e`. Pure and total: a non-PE32 image, an
/// image importing neither, or bounds no section holds yield nothing.
pub(super) fn initterm_entries(
    file: &object::File,
    bytes: &[u8],
    execs: &[(u64, u64, Vec<u8>)],
    out: &mut Vec<u64>,
) {
    if file.format() != object::BinaryFormat::Pe
        || file.architecture() != object::Architecture::I386
    {
        return;
    }
    let targets: HashSet<u64> = crate::protos::resolved_import_addrs(file, bytes)
        .into_iter()
        .filter(|(name, _)| INITTERM.contains(&name.as_str()))
        .map(|(_, addr)| addr)
        .collect();
    if targets.is_empty() {
        return;
    }
    let mut tables: Vec<(u64, u64)> = Vec::new();
    for (start, _, data) in execs {
        for (begin, end) in bounds_pushed_before_calls(*start, data, &targets) {
            if !tables.contains(&(begin, end)) {
                tables.push((begin, end));
            }
        }
    }
    for (begin, end) in tables {
        read_table(file, begin, end, out);
    }
}

/// The `(begin, end)` pairs pushed (`68 end`, `68 begin`) immediately before
/// a call (`E8 rel32` or `FF 15 slot`) to one of `targets` in the code at
/// `start`.
fn bounds_pushed_before_calls(start: u64, data: &[u8], targets: &HashSet<u64>) -> Vec<(u64, u64)> {
    let mut found = Vec::new();
    let word = |o: usize| -> Option<u32> {
        let b = data.get(o..o.checked_add(4)?)?;
        Some(u32::from_le_bytes([b[0], b[1], b[2], b[3]]))
    };
    for i in 10..data.len() {
        let target = match data[i] {
            0xe8 => word(i + 1).map(|rel| {
                start
                    .wrapping_add(i as u64 + 5)
                    .wrapping_add(rel as i32 as i64 as u64)
                    & 0xffff_ffff
            }),
            0xff if data.get(i + 1) == Some(&0x15) => word(i + 2).map(u64::from),
            _ => None,
        };
        if !target.is_some_and(|t| targets.contains(&t)) {
            continue;
        }
        if data[i - 10] != 0x68 || data[i - 5] != 0x68 {
            continue;
        }
        let (Some(end), Some(begin)) = (word(i - 9), word(i - 4)) else {
            continue;
        };
        let (begin, end) = (u64::from(begin), u64::from(end));
        if begin < end && (end - begin) % 4 == 0 && (end - begin) / 4 <= MAX_ENTRIES {
            found.push((begin, end));
        }
    }
    found
}

/// Push the non-null 4-byte words of `[begin, end)`, read from the one section
/// that holds the whole range.
fn read_table(file: &object::File, begin: u64, end: u64, out: &mut Vec<u64>) {
    let Some(table) = file.sections().find_map(|s| {
        let lo = s.address();
        let hi = lo.checked_add(s.size())?;
        if begin < lo || end > hi {
            return None;
        }
        s.data_range(begin, end - begin).ok().flatten()
    }) else {
        return;
    };
    for chunk in table.chunks_exact(4) {
        let p = u32::from_le_bytes([chunk[0], chunk[1], chunk[2], chunk[3]]);
        if p != 0 {
            out.push(u64::from(p));
        }
    }
}

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn the_two_pushes_before_a_call_to_initterm_are_its_bounds() {
        // 0x1000: push 0x2010 ; push 0x2000 ; call 0x1100 (rel32 = 0x1100 - 0x100f)
        let mut code = vec![0x68, 0x10, 0x20, 0, 0, 0x68, 0x00, 0x20, 0, 0, 0xe8];
        code.extend_from_slice(&(0x1100u32 - 0x100f).to_le_bytes());
        let targets: HashSet<u64> = [0x1100].into_iter().collect();
        assert_eq!(
            bounds_pushed_before_calls(0x1000, &code, &targets),
            vec![(0x2000, 0x2010)]
        );
    }

    #[test]
    fn a_call_through_the_slot_is_read_too() {
        // push 0x2010 ; push 0x2000 ; call [0x3000]
        let code = [
            0x68, 0x10, 0x20, 0, 0, 0x68, 0x00, 0x20, 0, 0, 0xff, 0x15, 0x00, 0x30, 0, 0,
        ];
        let targets: HashSet<u64> = [0x3000].into_iter().collect();
        assert_eq!(
            bounds_pushed_before_calls(0x1000, &code, &targets),
            vec![(0x2000, 0x2010)]
        );
    }

    #[test]
    fn reversed_or_ragged_bounds_and_other_callees_are_ignored() {
        let mut code = vec![0x68, 0x00, 0x20, 0, 0, 0x68, 0x10, 0x20, 0, 0, 0xe8];
        code.extend_from_slice(&(0x1100u32 - 0x100f).to_le_bytes());
        let targets: HashSet<u64> = [0x1100].into_iter().collect();
        assert!(bounds_pushed_before_calls(0x1000, &code, &targets).is_empty());
        let mut ragged = vec![0x68, 0x12, 0x20, 0, 0, 0x68, 0x00, 0x20, 0, 0, 0xe8];
        ragged.extend_from_slice(&(0x1100u32 - 0x100f).to_le_bytes());
        assert!(bounds_pushed_before_calls(0x1000, &ragged, &targets).is_empty());
        let other: HashSet<u64> = [0x1200].into_iter().collect();
        let mut good = vec![0x68, 0x10, 0x20, 0, 0, 0x68, 0x00, 0x20, 0, 0, 0xe8];
        good.extend_from_slice(&(0x1100u32 - 0x100f).to_le_bytes());
        assert!(bounds_pushed_before_calls(0x1000, &good, &other).is_empty());
    }
}
