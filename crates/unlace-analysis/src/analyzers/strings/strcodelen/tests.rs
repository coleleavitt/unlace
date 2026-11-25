use super::*;

#[test]
fn x86_lea_then_mov_esi() {
    let text = b"hello world!\0";
    let regions = vec![RoRegion {
        vma: 0x2000,
        data: text,
    }];
    // lea rdi,[rip+X] at 0x1000 (len 7) -> 0x2000 ; mov esi, 5
    let disp = (0x2000i64 - 0x1007) as i32;
    let mut code = vec![0x48, 0x8d, 0x3d];
    code.extend_from_slice(&disp.to_le_bytes());
    code.extend_from_slice(&[0xbe, 5, 0, 0, 0]);
    let mut out = Vec::new();
    x86_hits(0x1000, &code, &regions, &mut out);
    assert!(out.is_empty(), "no call consumes the pair");
    code.extend_from_slice(&[0xe8, 0, 0, 0, 0]);
    x86_hits(0x1000, &code, &regions, &mut out);
    assert_eq!(
        out,
        vec![StringFact {
            addr: 0x2000,
            len: 5
        }]
    );
}

#[test]
fn a64_adrp_add_movz() {
    let text = b"hello world!\0";
    let regions = vec![RoRegion {
        vma: 0x2010,
        data: text,
    }];
    // adrp x0, #0x1000 (pc 0x1000 -> page 0x2000); add x0, x0, #0x10; mov w1, #5
    let adrp = 0x9000_0000u32 | (1 << 29);
    let add = 0x9100_0000u32 | (0x10 << 10);
    let mov = 0x5280_0000u32 | (5 << 5) | 1;
    let bl = 0x9400_0000u32;
    let code: Vec<u8> = [adrp, add, mov, bl]
        .iter()
        .flat_map(|w| w.to_le_bytes())
        .collect();
    let mut out = Vec::new();
    a64_hits(0x1000, &code, &regions, &mut out);
    assert_eq!(
        out,
        vec![StringFact {
            addr: 0x2010,
            len: 5
        }]
    );
}
