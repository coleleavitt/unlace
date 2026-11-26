use super::*;

#[test]
fn layout_rounds_the_block_and_drops_overlaps() {
    let l = TlsLayout::new(
        0x54,
        0x10,
        vec![
            (0x50, 4, "counter".into()),
            (0, 8, "hits".into()),
            (0x10, 64, "buf".into()),
            (0x12, 2, "inner".into()),
        ],
    )
    .unwrap();
    assert_eq!(l.block_size, 0x60);
    let names: Vec<&str> = l.vars.iter().map(|v| v.2.as_str()).collect();
    assert_eq!(names, ["hits", "buf", "counter"]);
}

#[test]
fn variant1_puts_the_block_after_the_control_block() {
    let l = TlsLayout::variant1(0xc, 8, vec![(0, 8, "tl2".into()), (8, 4, "tl".into())]).unwrap();
    assert_eq!((l.tcb, l.block_size), (16, 16));
    assert_eq!(l.offsets(), (16, 32));
    let l = TlsLayout::variant1(4, 64, vec![(0, 4, "x".into())]).unwrap();
    assert_eq!(l.tcb, 64);
}
