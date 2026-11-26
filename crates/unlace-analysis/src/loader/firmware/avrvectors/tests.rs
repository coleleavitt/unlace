use super::probe;

fn image(words: &[u16], len: usize) -> Vec<u8> {
    let mut v: Vec<u8> = words.iter().flat_map(|w| w.to_le_bytes()).collect();
    v.resize(len, 0xff);
    v
}

#[test]
fn jmp_tables_give_word_targets_in_order() {
    // jmp 0x7a; jmp 0x99; jmp 0x99; jmp 0x108; then code.
    let bytes = image(
        &[
            0x940c, 0x007a, 0x940c, 0x0099, 0x940c, 0x0099, 0x940c, 0x0108, 0x2411,
        ],
        0x400,
    );
    assert_eq!(probe(&bytes), vec![0x7a, 0x99, 0x108]);
}

#[test]
fn rjmp_tables_are_pc_relative() {
    // rjmp .+0x10 (to word 9); rjmp .-2 (to itself, word 1); then code.
    let bytes = image(&[0xc008, 0xcfff, 0x2411], 0x40);
    assert_eq!(probe(&bytes), vec![9, 1]);
}

#[test]
fn other_code_has_no_table() {
    assert!(probe(&image(&[0x2411, 0x940c, 0x0010], 0x40)).is_empty());
    assert!(probe(&[]).is_empty());
}
