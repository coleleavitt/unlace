//! (unlace) `runtime.moduledata`, read through a layout table per Go release.
//!
//! The linker emits one `moduledata` per module (`runtime.firstmoduledata`),
//! the runtime's index of its own image: the pclntab slices, the text and data
//! bounds, the type blob (`types`, `etypes`) and the `typelinks` and
//! `itablinks` slices. Its first word points at the pclntab header, which the
//! pclntab pass already finds on a stripped image, so the record is the data
//! word holding that address. The fields after it move between releases; the
//! word indices below come from `runtime/symtab.go` at each tag and were
//! checked against go1.16 .. go1.26 linux/amd64 builds (the `hasmain` byte
//! is 1 at its index in every one, and both slices have `len == cap`):
//!
//! | release     | change                         | types | typelinks | itablinks | hasmain |
//! |-------------|--------------------------------|-------|-----------|-----------|---------|
//! | 1.16 - 1.17 |                                | 35    | 40        | 43        | 59      |
//! | 1.18 - 1.19 | `rodata`, `gofunc`             | 35    | 42        | 45        | 61      |
//! | 1.20        | `covctrs`, `ecovctrs`          | 37    | 44        | 47        | 63      |
//! | 1.21 - 1.25 | `inittasks`                    | 37    | 44        | 47        | 66      |
//! | 1.26        | `epclntab`                     | 37    | 45        | 48        | 67      |
//!
//! `ftab` (16), `minpc`/`maxpc` (20, 21) and `text`/`etext` (22, 23) have not
//! moved since go1.16. The build-info version picks the row; without one,
//! every row is tried newest first and the first that validates wins.

use object::read::{Object, ObjectSection};

use super::ImageBytes;

/// Word indices of one `moduledata` layout.
struct Layout {
    since_minor: u16,
    types: u64,
    typelinks: u64,
    itablinks: u64,
    hasmain: u64,
}

const CUTAB: u64 = 4;
const FILETAB: u64 = 7;
const FTAB: u64 = 16;
const MINPC: u64 = 20;
const TEXT: u64 = 22;

const LAYOUTS: [Layout; 5] = [
    Layout {
        since_minor: 26,
        types: 37,
        typelinks: 45,
        itablinks: 48,
        hasmain: 67,
    },
    Layout {
        since_minor: 21,
        types: 37,
        typelinks: 44,
        itablinks: 47,
        hasmain: 66,
    },
    Layout {
        since_minor: 20,
        types: 37,
        typelinks: 44,
        itablinks: 47,
        hasmain: 63,
    },
    Layout {
        since_minor: 18,
        types: 35,
        typelinks: 42,
        itablinks: 45,
        hasmain: 61,
    },
    Layout {
        since_minor: 16,
        types: 35,
        typelinks: 40,
        itablinks: 43,
        hasmain: 59,
    },
];

/// The fields of one module's `moduledata` that analysis reads.
#[derive(Clone, Copy, Debug, PartialEq, Eq)]
pub(crate) struct Moduledata {
    /// The first release of the layout row that matched.
    pub minor: u16,
    pub ftab_len: u64,
    pub text: u64,
    pub etext: u64,
    pub types: u64,
    pub etypes: u64,
    /// `(ptr, len)` of `[]int32` offsets from `types`.
    pub typelinks: (u64, u64),
    /// `(ptr, len)` of `[]*itab`.
    pub itablinks: (u64, u64),
    /// `cutab` and `filetab` (words 4 and 7 since go1.16).
    pub cutab: u64,
    pub filetab: u64,
    /// `gofunc` (go1.18+), three words after `types`: `types, etypes, rodata, gofunc`.
    pub gofunc: Option<u64>,
}

/// The `moduledata` whose `pcHeader` is `header_vma`, read with the row for
/// `minor` (or every row when the release is unknown). `word` reads one
/// pointer-size word.
pub(crate) fn locate(
    file: &object::File,
    img: &ImageBytes,
    header_vma: u64,
    minor: Option<u16>,
    ptr_size: u64,
    word: &dyn Fn(&ImageBytes, u64) -> Option<u64>,
) -> Option<Moduledata> {
    let rows: Vec<&Layout> = match minor {
        Some(m) if m >= 16 => LAYOUTS
            .iter()
            .filter(|l| l.since_minor <= m)
            .take(1)
            .collect(),
        Some(_) => return None,
        None => LAYOUTS.iter().collect(),
    };
    for name in [
        ".go.module",
        "__go_module",
        ".noptrdata",
        ".data",
        "__noptrdata",
        "__data",
    ] {
        let Some(sec) = file.section_by_name(name) else {
            continue;
        };
        let base = sec.address();
        let size = sec.size();
        let mut at = base.next_multiple_of(ptr_size);
        while at + ptr_size <= base + size {
            if word(img, at) == Some(header_vma)
                && let Some(md) = rows.iter().find_map(|l| read(img, at, l, ptr_size, word)) {
                    return Some(md);
                }
            at += ptr_size;
        }
    }
    None
}

fn read(
    img: &ImageBytes,
    at: u64,
    l: &Layout,
    ps: u64,
    word: &dyn Fn(&ImageBytes, u64) -> Option<u64>,
) -> Option<Moduledata> {
    let w = |i: u64| word(img, at + i * ps);
    let slice = |i: u64| -> Option<(u64, u64)> {
        let (ptr, len, cap) = (w(i)?, w(i + 1)?, w(i + 2)?);
        (len == cap && (len == 0 || img.read(ptr, 1).is_some())).then_some((ptr, len))
    };
    let (minpc, maxpc, text, etext) = (w(MINPC)?, w(MINPC + 1)?, w(TEXT)?, w(TEXT + 1)?);
    let (types, etypes) = (w(l.types)?, w(l.types + 1)?);
    let hasmain = img.read(at + l.hasmain * ps, 1)?[0];
    let sane = text != 0
        && text <= minpc
        && minpc < maxpc
        && maxpc <= etext
        && types < etypes
        && hasmain <= 1;
    if !sane {
        return None;
    }
    Some(Moduledata {
        minor: l.since_minor,
        ftab_len: slice(FTAB)?.1,
        text,
        etext,
        types,
        etypes,
        typelinks: slice(l.typelinks)?,
        itablinks: slice(l.itablinks)?,
        cutab: w(CUTAB)?,
        filetab: w(FILETAB)?,
        gofunc: if l.since_minor >= 18 {
            w(l.types + 3).filter(|&g| g != 0)
        } else {
            None
        },
    })
}

#[cfg(test)]
mod tests;
