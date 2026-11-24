//! Unit tests for the pclntab source-position and inline-tree reader.

use super::super::{End, GoVer, ImageBytes, PcHeader};
use super::*;

const ENTRY: u64 = 0x1000;
const END: u64 = 0x1020;
const FUNC: u64 = 0x2000;
const PCTAB: u64 = 0x3000;
const CUTAB: u64 = 0x4000;
const FILETAB: u64 = 0x4100;
const NAMES: u64 = 0x4200;
const GOFUNC: u64 = 0x5000;

/// pcfile 0 over the whole body; pcln 10 then 12 from +8; inline index -1, then
/// 0 over `[+0x10, +0x18)`, then -1.
fn pctab() -> Vec<u8> {
    let mut b = vec![0u8];
    b.extend([0x02, 0x20, 0x00]);
    b.extend([22, 0x08, 4, 0x18, 0x00]);
    b.extend([0x00, 0x10, 0x02, 0x08, 0x01, 0x08, 0x00]);
    b
}

fn header(ver: GoVer) -> PcHeader {
    PcHeader {
        ver,
        end: End::Little,
        ptr_size: 8,
        text_start: ENTRY,
        funcname_vma: NAMES,
        functab_vma: 0,
        nfunc: 1,
        funcdata_base: 0,
        pctab_vma: PCTAB,
        quantum: 1,
    }
}

fn tables(layout: Layout) -> Tables {
    Tables {
        h: header(GoVer::Go118),
        layout,
        cutab: CUTAB,
        filetab: FILETAB,
        gofunc: Some(GOFUNC),
    }
}

/// A go1.20 `_func`: pcfile at 1, pcln at 4, three pcdata (the inline index
/// table at 9), four funcdata (the inline tree at `gofunc + 0`), startLine 9.
fn func120() -> Vec<u8> {
    let mut b = Vec::new();
    for v in [0u32, 0, 0, 0, 0, 1, 4, 3, 0, 9] {
        b.extend(v.to_le_bytes());
    }
    b.extend([0, 0, 0, 4]);
    for v in [0u32, 0, 9, u32::MAX, u32::MAX, u32::MAX, 0] {
        b.extend(v.to_le_bytes());
    }
    b
}

/// A go1.18 `_func`: the same tables, no startLine.
fn func118() -> Vec<u8> {
    let mut b = Vec::new();
    for v in [0u32, 0, 0, 0, 0, 1, 4, 3, 0] {
        b.extend(v.to_le_bytes());
    }
    b.extend([0, 0, 0, 4]);
    for v in [0u32, 0, 9, u32::MAX, u32::MAX, u32::MAX, 0] {
        b.extend(v.to_le_bytes());
    }
    b
}

/// Inline record 0 for `strings.Index` (name offset 10), called from `+4`.
fn tree(layout: Layout) -> Vec<u8> {
    let mut b = Vec::new();
    match layout {
        Layout::Go120 => {
            b.extend([0, 0, 0, 0]);
            for v in [10u32, 4, 100] {
                b.extend(v.to_le_bytes());
            }
        }
        _ => {
            b.extend((-1i16).to_le_bytes());
            b.extend([0, 0]);
            for v in [0u32, 10, 10, 4] {
                b.extend(v.to_le_bytes());
            }
        }
    }
    b
}

fn names() -> Vec<u8> {
    b"main.main\0strings.Index\0".to_vec()
}

fn run(layout: Layout, func: &[u8], lines: bool) -> Facts {
    let pct = pctab();
    let cut = 0u32.to_le_bytes();
    let ft = b"/src/app/main.go\0".to_vec();
    let nm = names();
    let tr = tree(layout);
    let img = ImageBytes::from_spans(vec![
        (FUNC, func),
        (PCTAB, &pct[..]),
        (CUTAB, &cut[..]),
        (FILETAB, &ft[..]),
        (NAMES, &nm[..]),
        (GOFUNC, &tr[..]),
    ]);
    let t = tables(layout);
    let f = read_func(&img, &t, ENTRY, END, FUNC).expect("the _func reads");
    function_facts(&img, &t, &f, lines)
}

#[test]
fn pcvalue_rows_follow_runtime_step() {
    let pct = pctab();
    let img = ImageBytes::from_spans(vec![(PCTAB, &pct[..])]);
    let t = tables(Layout::Go120);
    let rows = pcvalue_rows(&img, &t, 4, ENTRY, END);
    assert_eq!(
        rows,
        [
            Row {
                start: 0x1000,
                end: 0x1008,
                value: 10
            },
            Row {
                start: 0x1008,
                end: 0x1020,
                value: 12
            },
        ]
    );
    let inl = pcvalue_rows(&img, &t, 9, ENTRY, END);
    let values: Vec<i32> = inl.iter().map(|r| r.value).collect();
    assert_eq!(values, [-1, 0, -1]);
    assert_eq!(value_at(&inl, 0x1012), Some(0));
    assert_eq!(value_at(&inl, 0x1018), Some(-1));
    assert_eq!(value_at(&inl, 0x1020), None);
}

#[test]
fn rows_stop_at_the_function_end() {
    let pct = pctab();
    let img = ImageBytes::from_spans(vec![(PCTAB, &pct[..])]);
    let t = tables(Layout::Go120);
    let rows = pcvalue_rows(&img, &t, 4, ENTRY, 0x100c);
    assert_eq!(rows.last().map(|r| r.end), Some(0x100c));
}

#[test]
fn go120_header_and_inline_marker() {
    let facts = run(Layout::Go120, &func120(), false);
    assert_eq!(facts.header.as_deref(), Some("source: /src/app/main.go:9"));
    assert_eq!(
        facts.inlined,
        [(0x1010, "inlined strings.Index at main.go:10".to_string())]
    );
    assert!(facts.lines.is_empty());
}

#[test]
fn go118_reads_the_twenty_byte_record() {
    let facts = run(Layout::Go118, &func118(), false);
    assert_eq!(facts.header.as_deref(), Some("source: /src/app/main.go:10"));
    assert_eq!(
        facts.inlined,
        [(0x1010, "inlined strings.Index at main.go:10".to_string())]
    );
}

#[test]
fn lines_mark_each_change_of_position() {
    let facts = run(Layout::Go120, &func120(), true);
    assert_eq!(
        facts.lines,
        [
            (0x1000, "main.go:10".to_string()),
            (0x1008, "main.go:12".to_string()),
        ]
    );
    assert!(facts.header.is_none() && facts.inlined.is_empty());
}

#[test]
fn no_gofunc_means_no_inline_tree() {
    let pct = pctab();
    let cut = 0u32.to_le_bytes();
    let ft = b"main.go\0".to_vec();
    let func = func120();
    let img = ImageBytes::from_spans(vec![
        (FUNC, &func[..]),
        (PCTAB, &pct[..]),
        (CUTAB, &cut[..]),
        (FILETAB, &ft[..]),
    ]);
    let t = Tables {
        gofunc: None,
        ..tables(Layout::Go120)
    };
    let f = read_func(&img, &t, ENTRY, END, FUNC).unwrap();
    let facts = function_facts(&img, &t, &f, false);
    assert_eq!(facts.header.as_deref(), Some("source: main.go:9"));
    assert!(facts.inlined.is_empty());
}

#[test]
fn a_truncated_table_yields_nothing() {
    let pct = [0u8, 0x82];
    let img = ImageBytes::from_spans(vec![(PCTAB, &pct[..])]);
    let t = tables(Layout::Go120);
    assert!(pcvalue_rows(&img, &t, 1, ENTRY, END).is_empty());
    assert!(read_func(&img, &t, ENTRY, END, FUNC).is_none());
}

#[test]
fn go116_funcdata_is_pointer_aligned() {
    let t = Tables {
        h: header(GoVer::Go116),
        ..tables(Layout::Go116)
    };
    let mut rec = vec![0u8; 8];
    for v in [0u32, 0, 0, 0, 1, 4, 3, 0] {
        rec.extend(v.to_le_bytes());
    }
    rec.extend([0, 0, 0, 4]);
    for v in [0u32, 0, 9] {
        rec.extend(v.to_le_bytes());
    }
    // 0x2000 + 44 + 12 = 0x2038 is 8-aligned: no pad word.
    for v in [0u64, 0, 0, GOFUNC] {
        rec.extend(v.to_le_bytes());
    }
    let img = ImageBytes::from_spans(vec![(FUNC, &rec[..])]);
    let f = read_func(&img, &t, ENTRY, END, FUNC).unwrap();
    assert_eq!((f.pcfile, f.pcln, f.npcdata, f.nfuncdata), (1, 4, 3, 4));
    assert_eq!(funcdata(&img, &t, &f, FUNCDATA_INLTREE), Some(GOFUNC));
    assert_eq!(funcdata(&img, &t, &f, 0), None);
    assert_eq!(pcdata(&img, &t, &f, PCDATA_INLTREEINDEX), Some(9));
}

#[test]
fn base_name_strips_both_separators() {
    assert_eq!(base_name("/a/b/c.go"), "c.go");
    assert_eq!(base_name("C:\\x\\y.go"), "y.go");
    assert_eq!(base_name("z.go"), "z.go");
}
