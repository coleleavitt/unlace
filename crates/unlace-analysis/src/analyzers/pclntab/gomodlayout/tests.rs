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
    assert!(
        LAYOUTS
            .windows(2)
            .all(|w| w[0].since_minor > w[1].since_minor)
    );
    let pick = |m: u16| {
        LAYOUTS
            .iter()
            .find(|l| l.since_minor <= m)
            .map(|l| l.since_minor)
    };
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
    let img = ImageBytes {
        sections: vec![(0x1000, &rec[..]), (0x2000, &blob[..])],
    };
    let word = |img: &ImageBytes, va: u64| {
        img.read(va, 8)
            .map(|b| u64::from_le_bytes(b.try_into().unwrap()))
    };
    let md = read(&img, 0x1000, row, 8, &word).expect("valid go1.21 record");
    assert_eq!(
        (md.minor, md.ftab_len, md.text, md.types),
        (21, 5, 0x401000, 0x5000)
    );
    assert_eq!((md.typelinks, md.itablinks), ((0x2000, 2), (0x2000, 1)));
    // The go1.20 row reads the same bytes one word short of hasmain.
    let bad = image(&words, 7, row);
    let img = ImageBytes {
        sections: vec![(0x1000, &bad[..]), (0x2000, &blob[..])],
    };
    assert!(
        read(&img, 0x1000, row, 8, &word).is_none(),
        "hasmain must be 0 or 1"
    );
}
