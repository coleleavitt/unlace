//! s390x PLT stubs: recover each stub's GOT slot so `elf_plt` can name it.
//!
//! Both GNU `ld` and `lld` open an import stub with
//! ```text
//!     larl %r1, got_slot      ; c0 10 <rel32>, slot = stub + 2 * rel32
//!     lg   %r1, 0(%r1)        ; e3 10 10 00 00 04
//!     br   %r1                ; 07 f1
//! ```
//! (GNU `ld` follows it with the lazy-binding tail). The PLT header loads the
//! GOT base with the same `larl` but continues with `mvc`, so it does not match.

use std::collections::{HashMap, HashSet};

use super::elf_plt::{PltSym, record};

const LOAD_AND_BRANCH: [u8; 8] = [0xe3, 0x10, 0x10, 0x00, 0x00, 0x04, 0x07, 0xf1];

/// Name every import stub in the `.plt` bytes `data` loaded at `vma`.
pub(super) fn decode(
    vma: u64,
    data: &[u8],
    map: &HashMap<u64, Vec<u8>>,
    out: &mut Vec<PltSym>,
    named_got: &mut HashSet<u64>,
) {
    let mut off = 0usize;
    while let Some(stub) = data.get(off..off + 14) {
        if stub[..2] != [0xc0, 0x10] || stub[6..] != LOAD_AND_BRANCH {
            off += 2;
            continue;
        }
        let rel = i32::from_be_bytes([stub[2], stub[3], stub[4], stub[5]]);
        let addr = vma.wrapping_add(off as u64);
        let got = addr.wrapping_add((i64::from(rel) * 2) as u64);
        record(addr, got, map, out, named_got);
        off += 14;
    }
}

#[cfg(test)]
mod tests;
