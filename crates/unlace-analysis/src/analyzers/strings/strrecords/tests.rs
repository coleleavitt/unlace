use super::*;

fn region(vma: u64, data: &[u8]) -> RoRegion<'_> {
    RoRegion { vma, data }
}

#[test]
fn text_test_accepts_utf8_rejects_binary() {
    assert!(is_text(b"hello multilang, "));
    assert!(is_text("héllo — wörld".as_bytes()));
    assert!(is_text(b"!"));
    assert!(is_text(b"line\nbreak\tok "));
    assert!(!is_text(&[0xff, 0xfe, 0x00, 0x41]));
    assert!(!is_text(
        &[0x01, 0x02, 0x03, 0x04, 0x05, 0x06, 0x07, 0x08, 0x09, 0x0b][..]
    ));
    assert!(!is_text(b""));
}

#[test]
fn record_validation_bounds_and_backing() {
    let text = region(0x1000, b"hello multilang, !world to decompile \n\0junk");
    let regions = vec![text];
    // Exact record: 17 bytes of the glued run.
    let f = record_at(&regions, 0x1000, 17, 1).expect("17-byte record");
    assert_eq!((f.addr, f.len), (0x1000, 17));
    // The 1-byte piece.
    assert!(record_at(&regions, 0x1011, 1, 1).is_some());
    // Out of region, zero, oversize, and spilling past the region all refuse.
    assert!(record_at(&regions, 0x2000, 4, 1).is_none());
    assert!(record_at(&regions, 0x1000, 0, 1).is_none());
    assert!(record_at(&regions, 0x1000, MAX_LEN + 1, 1).is_none());
    assert!(record_at(&regions, 0x1000, 4096, 1).is_none());
    // Direct-arm minimum: a 1-byte record needs a relocation to vouch.
    assert!(record_at(&regions, 0x1011, 1, DIRECT_MIN_LEN).is_none());
}

#[test]
fn direct_arm_finds_absolute_records_and_dedups() {
    // A synthetic RO layout: strings at 0x2000, records at 0x2100.
    let mut data = vec![0u8; 0x200];
    data[..17].copy_from_slice(b"hello multilang, ");
    data[17] = b'!';
    let mut recs = Vec::new();
    for (p, l) in [(0x2000u64, 17u64), (0x2011, 1), (0x2000, 17)] {
        recs.extend_from_slice(&p.to_le_bytes());
        recs.extend_from_slice(&l.to_le_bytes());
    }
    data[0x100..0x100 + recs.len()].copy_from_slice(&recs);
    let regions = vec![region(0x2000, &data)];
    let found = scan_direct_records(&regions, &regions, 8);
    // The 17-byte record is found (once per slot it appears in); the 1-byte
    // record fails the direct-arm minimum. Dedup collapses the repeat.
    let mut facts = found;
    facts.sort_by_key(|f| f.addr);
    facts.dedup_by_key(|f| f.addr);
    assert_eq!(facts.len(), 1);
    assert_eq!((facts[0].addr, facts[0].len), (0x2000, 17));
}

/// The Go slot split: records whose SLOTS sit outside the target regions
/// (the `.data` header area) are found when passed as the slot set, and
/// the targets are still held to the read-only set.
#[test]
fn go_slots_scan_separately_from_targets() {
    let mut ro = vec![0u8; 0x40];
    ro[..17].copy_from_slice(b"hello multilang, ");
    let targets = vec![region(0x2000, &ro)];
    // Header area at 0x5000 ("data"): one record to the RO text, one
    // record whose target points back into the header area itself.
    let mut hdr = vec![0u8; 0x40];
    hdr[..8].copy_from_slice(&0x2000u64.to_le_bytes());
    hdr[8..16].copy_from_slice(&17u64.to_le_bytes());
    hdr[16..24].copy_from_slice(&0x5000u64.to_le_bytes());
    hdr[24..32].copy_from_slice(&17u64.to_le_bytes());
    let slots = vec![region(0x5000, &hdr)];
    let found = scan_direct_records(&slots, &targets, 8);
    assert_eq!(found.len(), 1, "only the RO-backed target is a record");
    assert_eq!((found[0].addr, found[0].len), (0x2000, 17));
}

/// Same-start records keep the LONGEST (Go prefix sharing): the shorter
/// renders as a prefix read of the longer.
#[test]
fn same_start_dedup_keeps_the_longest() {
    let mut facts = vec![
        StringFact {
            addr: 0x2000,
            len: 5,
        },
        StringFact {
            addr: 0x2000,
            len: 17,
        },
        StringFact {
            addr: 0x2020,
            len: 4,
        },
    ];
    facts.sort_by_key(|f| (f.addr, core::cmp::Reverse(f.len)));
    facts.dedup_by_key(|f| f.addr);
    assert_eq!(facts.len(), 2);
    assert_eq!((facts[0].addr, facts[0].len), (0x2000, 17));
}
