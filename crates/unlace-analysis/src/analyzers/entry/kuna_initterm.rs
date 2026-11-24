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
//! statically linked CRT's `_initterm` is an anonymous local function, so a
//! direct call to code after the same two pushes is read too, but only when the
//! table has the CRT's shape: the bounds lie in one non-executable section, the
//! first word is the NULL every `.CRT$X?A` section contributes, and every word is
//! NULL or an address in an executable section. PE32 only: a PE32+ has `.pdata`,
//! which already names every non-leaf initializer.

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
    let in_code = |a: u64| execs.iter().any(|&(lo, hi, _)| a >= lo && a < hi);
    let mut tables: Vec<(u64, u64, bool)> = Vec::new();
    for (start, _, data) in execs {
        for (begin, end, import) in bounds_pushed_before_calls(*start, data, &targets, &in_code) {
            if let Some(t) = tables.iter_mut().find(|t| (t.0, t.1) == (begin, end)) {
                t.2 |= import;
            } else {
                tables.push((begin, end, import));
            }
        }
    }
    for (begin, end, import) in tables {
        read_table(file, begin, end, !import, &in_code, out);
    }
}

/// The `(begin, end, import)` triples pushed (`68 end`, `68 begin`)
/// immediately before a call in the code at `start`: `import` when the call
/// (`E8 rel32` or `FF 15 slot`) reaches one of `targets`, and `false` for an
/// `E8` to other code (a statically linked `_initterm`).
fn bounds_pushed_before_calls(
    start: u64,
    data: &[u8],
    targets: &HashSet<u64>,
    in_code: &dyn Fn(u64) -> bool,
) -> Vec<(u64, u64, bool)> {
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
        let Some(target) = target else {
            continue;
        };
        let import = targets.contains(&target);
        if !import && !(data[i] == 0xe8 && in_code(target)) {
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
            found.push((begin, end, import));
        }
    }
    found
}

/// Push the non-null 4-byte words of `[begin, end)`, read from the one section
/// that holds the whole range. A `strict` table (one handed to a local
/// function) must have the CRT's shape: a non-executable section, a NULL first
/// word, and every word NULL or code.
fn read_table(
    file: &object::File,
    begin: u64,
    end: u64,
    strict: bool,
    in_code: &dyn Fn(u64) -> bool,
    out: &mut Vec<u64>,
) {
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
    let words: Vec<u64> = table
        .chunks_exact(4)
        .map(|c| u64::from(u32::from_le_bytes([c[0], c[1], c[2], c[3]])))
        .collect();
    if strict && !crt_shaped(&words, in_code(begin), in_code) {
        return;
    }
    out.extend(words.into_iter().filter(|&p| p != 0));
}

/// Is a table handed to a local function the CRT's: outside code, NULL first,
/// every word NULL or code, and at least one entry?
fn crt_shaped(words: &[u64], table_in_code: bool, in_code: &dyn Fn(u64) -> bool) -> bool {
    !table_in_code
        && words.first() == Some(&0)
        && words.iter().any(|&p| p != 0)
        && words.iter().all(|&p| p == 0 || in_code(p))
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
            bounds_pushed_before_calls(0x1000, &code, &targets, &|_| false),
            vec![(0x2000, 0x2010, true)]
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
            bounds_pushed_before_calls(0x1000, &code, &targets, &|_| false),
            vec![(0x2000, 0x2010, true)]
        );
    }

    #[test]
    fn reversed_or_ragged_bounds_and_other_callees_are_ignored() {
        let mut code = vec![0x68, 0x00, 0x20, 0, 0, 0x68, 0x10, 0x20, 0, 0, 0xe8];
        code.extend_from_slice(&(0x1100u32 - 0x100f).to_le_bytes());
        let targets: HashSet<u64> = [0x1100].into_iter().collect();
        let no_code = |_: u64| false;
        assert!(bounds_pushed_before_calls(0x1000, &code, &targets, &no_code).is_empty());
        let mut ragged = vec![0x68, 0x12, 0x20, 0, 0, 0x68, 0x00, 0x20, 0, 0, 0xe8];
        ragged.extend_from_slice(&(0x1100u32 - 0x100f).to_le_bytes());
        assert!(bounds_pushed_before_calls(0x1000, &ragged, &targets, &no_code).is_empty());
        let other: HashSet<u64> = [0x1200].into_iter().collect();
        let mut good = vec![0x68, 0x10, 0x20, 0, 0, 0x68, 0x00, 0x20, 0, 0, 0xe8];
        good.extend_from_slice(&(0x1100u32 - 0x100f).to_le_bytes());
        assert!(bounds_pushed_before_calls(0x1000, &good, &other, &no_code).is_empty());
    }

    #[test]
    fn a_direct_call_to_local_code_is_a_static_crt_candidate() {
        let mut code = vec![0x68, 0x10, 0x20, 0, 0, 0x68, 0x00, 0x20, 0, 0, 0xe8];
        code.extend_from_slice(&(0x1100u32 - 0x100f).to_le_bytes());
        let none: HashSet<u64> = HashSet::new();
        let code_at = |a: u64| (0x1000..0x1200).contains(&a);
        assert_eq!(
            bounds_pushed_before_calls(0x1000, &code, &none, &code_at),
            vec![(0x2000, 0x2010, false)]
        );
    }

    #[test]
    fn a_static_crt_table_starts_with_null_and_holds_only_code() {
        let code_at = |a: u64| (0x1000..0x1200).contains(&a);
        assert!(crt_shaped(&[0, 0x1040, 0, 0x1050], false, &code_at));
        assert!(!crt_shaped(&[0x1040, 0x1050], false, &code_at));
        assert!(!crt_shaped(&[0, 0x1040, 0x3000], false, &code_at));
        assert!(!crt_shaped(&[0, 0], false, &code_at));
        assert!(!crt_shaped(&[0, 0x1040], true, &code_at));
    }
}
