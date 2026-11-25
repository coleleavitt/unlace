use super::*;

fn image(base: u32) -> Vec<u8> {
    let mut b = vec![0u8; 0x400];
    let mut put = |i: usize, w: u32| b[4 * i..4 * i + 4].copy_from_slice(&w.to_le_bytes());
    put(0, 0x2000_8000);
    put(1, base + 0x201);
    for i in [2, 3, 11, 14, 15] {
        put(i, base + 0x301);
    }
    for irq in 0..20 {
        put(16 + irq, base + 0x301);
    }
    put(16 + 20, base + 0x281);
    b[0x300..0x302].copy_from_slice(&[0xfe, 0xe7]);
    b
}

#[test]
fn votes_the_flash_base_and_names_handlers() {
    let t = probe(&image(0x0800_0000), None).unwrap();
    assert_eq!(t.base, 0x0800_0000);
    assert_eq!(t.reset(), 0x0800_0200);
    assert_eq!(t.words, 37);
    let names: Vec<&str> = t.handlers.iter().map(|h| h.name.as_str()).collect();
    assert_eq!(names, ["Reset_Handler", "Default_Handler", "IRQ20_Handler"]);
}

#[test]
fn rejects_a_non_vector_table() {
    assert!(probe(&[0x7f, b'E', b'L', b'F', 0, 0, 0, 0], None).is_none());
    let mut b = image(0);
    b[4..8].copy_from_slice(&0x200u32.to_le_bytes());
    assert!(probe(&b, None).is_none());
}
