use super::*;

#[test]
fn matches_the_gcc_pic_dispatch() {
    // zlib inflateBack at 0x7ae9: cmp $0x12,%eax ; ja ; lea 0xbb0b(%rip),%rdi ;
    // movslq (%rdi,%rax,4),%rax ; add %rdi,%rax ; notrack jmp *%rax
    let bytes = [
        0x83, 0xf8, 0x12, 0x77, 0x12, 0x48, 0x8d, 0x3d, 0x0b, 0xbb, 0x00, 0x00, 0x48, 0x63, 0x04,
        0x87, 0x48, 0x01, 0xf8, 0x3e, 0xff, 0xe0,
    ];
    let jmp = 0x7afc;
    let t = match_dispatch(&bytes, jmp, 3).unwrap();
    assert_eq!(
        t,
        RawTable {
            table: 0x13600,
            rows: 0x13
        }
    );
    assert!(match_dispatch(&bytes[3..], jmp, 3).is_none());
}
