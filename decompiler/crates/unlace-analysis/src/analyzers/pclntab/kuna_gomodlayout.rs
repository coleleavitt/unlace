//! (kuna) `runtime.moduledata`, read through a layout table per Go release.
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

const FTAB: u64 = 16;
const MINPC: u64 = 20;
const TEXT: u64 = 22;

const LAYOUTS: [Layout; 5] = [
    Layout { since_minor: 26, types: 37, typelinks: 45, itablinks: 48, hasmain: 67 },
    Layout { since_minor: 21, types: 37, typelinks: 44, itablinks: 47, hasmain: 66 },
    Layout { since_minor: 20, types: 37, typelinks: 44, itablinks: 47, hasmain: 63 },
    Layout { since_minor: 18, types: 35, typelinks: 42, itablinks: 45, hasmain: 61 },
    Layout { since_minor: 16, types: 35, typelinks: 40, itablinks: 43, hasmain: 59 },
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
        Some(m) if m >= 16 => LAYOUTS.iter().filter(|l| l.since_minor <= m).take(1).collect(),
        Some(_) => return None,
        None => LAYOUTS.iter().collect(),
    };
    for name in [".go.module", "__go_module", ".noptrdata", ".data", "__noptrdata", "__data"] {
        let Some(sec) = file.section_by_name(name) else { continue };
        let base = sec.address();
        let size = sec.size();
        let mut at = base.next_multiple_of(ptr_size);
        while at + ptr_size <= base + size {
            if word(img, at) == Some(header_vma) {
                if let Some(md) = rows.iter().find_map(|l| read(img, at, l, ptr_size, word)) {
                    return Some(md);
                }
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
    let sane = text != 0 && text <= minpc && minpc < maxpc && maxpc <= etext && types < etypes && hasmain <= 1;
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
    })
}

#[cfg(test)]
mod tests {
    use super::*;

    /// A go1.21 moduledata at 0x1000 in a `.noptrdata`-like span, the pclntab
    /// header at 0x9000, and the type blob at 0x5000.
    fn image(words: &[(u64, u64)], hasmain: u8, row: &Layout) -> Vec<u8> {
        let mut rec = vec![0u8; ((row.hasmain + 1) * 8) as usize];
        for &(i, v) in words {
            rec[(i * 8) as usize..(i * 8 + 8) as usize].copy_from_slice(&v.to_le_bytes());
        }
        rec[(row.hasmain * 8) as usize] = hasmain;
        rec
    }

    #[test]
    fn rows_are_newest_first_and_pick_by_release() {
        assert!(LAYOUTS.windows(2).all(|w| w[0].since_minor > w[1].since_minor));
        let pick = |m: u16| LAYOUTS.iter().find(|l| l.since_minor <= m).map(|l| l.since_minor);
        assert_eq!(pick(17), Some(16));
        assert_eq!(pick(19), Some(18));
        assert_eq!(pick(25), Some(21));
        assert_eq!(pick(26), Some(26));
        assert_eq!(pick(30), Some(26));
    }

    #[test]
    fn read_validates_the_record() {
        let row = &LAYOUTS[1];
        let words = [
            (0, 0x9000),
            (FTAB, 0x2000),
            (FTAB + 1, 5),
            (FTAB + 2, 5),
            (MINPC, 0x401000),
            (MINPC + 1, 0x402000),
            (TEXT, 0x401000),
            (TEXT + 1, 0x402000),
            (row.types, 0x5000),
            (row.types + 1, 0x6000),
            (row.typelinks, 0x2000),
            (row.typelinks + 1, 2),
            (row.typelinks + 2, 2),
            (row.itablinks, 0x2000),
            (row.itablinks + 1, 1),
            (row.itablinks + 2, 1),
        ];
        let rec = image(&words, 1, row);
        let blob = vec![0u8; 0x100];
        let img = ImageBytes { sections: vec![(0x1000, &rec[..]), (0x2000, &blob[..])] };
        let word = |img: &ImageBytes, va: u64| img.read(va, 8).map(|b| u64::from_le_bytes(b.try_into().unwrap()));
        let md = read(&img, 0x1000, row, 8, &word).expect("valid go1.21 record");
        assert_eq!((md.minor, md.ftab_len, md.text, md.types), (21, 5, 0x401000, 0x5000));
        assert_eq!((md.typelinks, md.itablinks), ((0x2000, 2), (0x2000, 1)));
        // The go1.20 row reads the same bytes one word short of hasmain.
        let bad = image(&words, 7, row);
        let img = ImageBytes { sections: vec![(0x1000, &bad[..]), (0x2000, &blob[..])] };
        assert!(read(&img, 0x1000, row, 8, &word).is_none(), "hasmain must be 0 or 1");
    }
}
