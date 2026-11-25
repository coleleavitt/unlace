use super::*;

#[test]
fn stub_names_its_got_slot_and_the_header_does_not() {
    let vma = 0x1330u64;
    let mut data = vec![
        0xe3, 0x10, 0xf0, 0x38, 0x00, 0x24, // stg %r1,56(%r15)
        0xc0, 0x10, 0x00, 0x00, 0x08, 0x85, // larl %r1,0x2440
        0xd2, 0x07, 0xf0, 0x30, 0x10, 0x08, // mvc 48(8,%r15),8(%r1)
        0xe3, 0x10, 0x10, 0x10, 0x00, 0x04, // lg %r1,16(%r1)
        0x07, 0xf1, 0x07, 0x00, 0x07, 0x00, 0x07, 0x00,
    ];
    data.extend_from_slice(&[0xc0, 0x10, 0x00, 0x00, 0x08, 0x84]); // larl %r1,0x2458
    data.extend_from_slice(&LOAD_AND_BRANCH);
    let map = HashMap::from([
        (0x2458u64, b"ext".to_vec()),
        (0x2440u64, b"header".to_vec()),
    ]);
    let (mut out, mut named) = (Vec::new(), HashSet::new());
    decode(vma, &data, &map, &mut out, &mut named);
    assert_eq!(out.len(), 1);
    assert_eq!(
        (out[0].addr, out[0].name.as_slice(), out[0].slot),
        (0x1350, &b"ext"[..], Some(0x2458))
    );
}
