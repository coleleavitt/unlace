use super::*;
use crate::rtti::refkind::End;

/// A synthetic x64 image: a `.text` at 0x140001000 (0x80 bytes) and a `.rdata`
/// holding a 2-slot vftable @0x140002010 → [0x140001040, 0x140001050], then a
/// NULL terminator, then a non-text pointer.
fn x64_img() -> (Vec<u8>, RefKind, TextRanges) {
    let ib = 0x1_4000_0000u64;
    let rk = RefKind::new(true, ib, End::Little);
    let mut rdata = vec![0u8; 0x100]; // .rdata @ 0x140002000
    let put_u64 =
        |v: &mut [u8], off: usize, x: u64| v[off..off + 8].copy_from_slice(&x.to_le_bytes());
    // vftable @ 0x2010: slot0 -> 0x140001040, slot1 -> 0x140001050, slot2 NULL.
    put_u64(&mut rdata, 0x10, ib + 0x1040);
    put_u64(&mut rdata, 0x18, ib + 0x1050);
    // 0x20 stays NULL (terminator).
    // A non-text pointer right after (into .rdata) — also a boundary if reached.
    put_u64(&mut rdata, 0x28, ib + 0x2000);
    let ranges = TextRanges {
        ranges: vec![(ib + 0x1000, ib + 0x1080)],
        relocated: None,
    };
    (rdata, rk, ranges)
}

#[test]
fn a_word_the_relocation_table_does_not_list_ends_the_table() {
    let (rdata, rk, mut ranges) = x64_img();
    let ib = 0x1_4000_0000u64;
    ranges.relocated = Some([ib + 0x2010].into_iter().collect());
    let img = ImageBytes::from_spans(vec![(ib + 0x2000, &rdata)]);
    let vt = walk_vftable(&img, &rk, &ranges, ib + 0x2010).unwrap();
    assert_eq!(vt.slots, vec![ib + 0x1040]);
}

#[test]
fn walks_to_null_boundary() {
    let (rdata, rk, ranges) = x64_img();
    let ib = 0x1_4000_0000u64;
    let img = ImageBytes::from_spans(vec![(ib + 0x2000, &rdata)]);
    let vt = walk_vftable(&img, &rk, &ranges, ib + 0x2010).unwrap();
    assert_eq!(vt.base, ib + 0x2010);
    assert_eq!(vt.slots, vec![ib + 0x1040, ib + 0x1050]);
    assert_eq!(vt.range(&rk), (ib + 0x2010, ib + 0x2020));
}

#[test]
fn rejects_base_with_no_code_slot() {
    let (rdata, rk, ranges) = x64_img();
    let ib = 0x1_4000_0000u64;
    let img = ImageBytes::from_spans(vec![(ib + 0x2000, &rdata)]);
    // 0x2028 holds a .rdata pointer (not into .text) -> zero valid slots.
    assert_eq!(walk_vftable(&img, &rk, &ranges, ib + 0x2028), None);
}

#[test]
fn one_slot_table() {
    let ib = 0x1_4000_0000u64;
    let rk = RefKind::new(true, ib, End::Little);
    let mut rdata = vec![0u8; 0x40];
    rdata[0x00..0x08].copy_from_slice(&(ib + 0x1004).to_le_bytes());
    // 0x08 NULL terminator.
    let ranges = TextRanges {
        ranges: vec![(ib + 0x1000, ib + 0x1080)],
        relocated: None,
    };
    let img = ImageBytes::from_spans(vec![(ib + 0x2010, &rdata)]);
    let vt = walk_vftable(&img, &rk, &ranges, ib + 0x2010).unwrap();
    assert_eq!(vt.slots, vec![ib + 0x1004]);
}
