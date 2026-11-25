use super::*;

fn bytes(hex: &str) -> Vec<u8> {
    let hex: String = hex.split_whitespace().collect();
    (0..hex.len() / 2)
        .map(|i| u8::from_str_radix(&hex[2 * i..2 * i + 2], 16).unwrap())
        .collect()
}

/// One encoding of each operand shape, padded so the length is the
/// decoder's and not the slice's.
#[test]
fn lengths_follow_the_encoding() {
    for hex in [
        "55",
        "4889e5",
        "4883ec30",
        "488b0d13170000",
        "48894dd8",
        "b9000000c0",
        "48b90000002020000000",
        "48c745d800000000",
        "c7459000000042",
        "66c745900100",
        "f20f1145c8",
        "0f2945b0",
        "c5fb1145c8",
        "c4e37d0645b001",
        "ff15d3160000",
        "e8e8000000",
        "0f8412010000",
        "f7c100010000",
        "f7d9",
        "f60701",
        "a1954 4ef2322653 83b",
        "6666662e0f1f840000000000",
        "48890424",
        "4c8b7c2408",
        "8b04c5 10000000",
        "f3c3",
        "c20800",
    ] {
        let insn = bytes(hex);
        let mut padded = insn.clone();
        padded.extend([0xCC; 16]);
        assert_eq!(decode(&padded).map(|i| i.len), Some(insn.len()), "{hex}");
    }
    for hex in ["06", "62f1fd08", "0f0f008e", "d5", "4889", "e8000000", "48"] {
        assert_eq!(decode(&bytes(hex)), None, "{hex}");
    }
    assert_eq!(decode(&[]), None);
}

/// `-[Runner maker:]` of `macho_objc_blocks_x86_64` at 0x1000008e0: the isa
/// from its GOT slot stored at `[rbp - 0x28]`, the flags from `ecx`, the
/// invoke and descriptor from `lea`, the capture at `[rbp - 8]`.
#[test]
fn rbp_frame_stores_build_the_literal() {
    let code = bytes(
        "55 4889e5 4883ec30 488b07 4801d0 488b0d13170000 48894dd8 b9000000c0 48894de0
             488d0d37000000 48894de8 488d0d1c170000 48894df0 488945f8 488b35f5260000
             488d4dd8 ff15d3160000 4883c430 5d c3",
    );
    let is_code = |a: u64| (0x1_0000_0000..0x1_0000_1000).contains(&a);
    let (found, _) = sites(
        &|_| None,
        &is_code,
        &[(0x1_0000_08e0, &code)],
        &[0x1_0000_2008],
        &[0x1_0000_08e0],
        true,
    );
    assert_eq!(found.len(), 1);
    let s = &found[0];
    assert_eq!(
        (s.pc, s.last_ret, s.depth, s.frame as i64),
        (0x1_0000_08f5, 0x1_0000_08df, 0, -0x30)
    );
    assert_eq!(
        (s.invoke, s.descriptor),
        (0x1_0000_0940, Some(0x1_0000_2030))
    );
    let caps: Vec<(u64, u8)> = s
        .captures
        .iter()
        .map(|c| (c.off.wrapping_sub(s.frame), c.width))
        .collect();
    assert_eq!(caps, [(32, 8)]);
    let (none, _) = sites(
        &|_| None,
        &is_code,
        &[(0x1_0000_08e0, &code)],
        &[0x1_0000_2008],
        &[],
        true,
    );
    assert!(none.is_empty(), "no function start bounds the decode");
    let (other, _) = sites(
        &|_| None,
        &is_code,
        &[(0x1_0000_08e0, &code)],
        &[0x1_0000_2010],
        &[0x1_0000_08e0],
        true,
    );
    assert!(other.is_empty(), "another slot is not the isa");
}

/// A frame without `rbp`: `push rbx; sub rsp, 0x30` puts `[rsp + 8]` 0x30
/// below the entry `rsp`, and after the epilogue's `ret` the next path has
/// the body's frame again. In an image that does not list its function starts the second literal
/// may be another function's.
#[test]
fn rsp_frame_and_global_reference() {
    let code = bytes(
        "53 4883ec30 4c8b25fc0f0000 4c89642408 488d05eb000000 4889442418 488d0ddc1f0000
             48894c2420 e800000000 4883c430 5b c3
             4c8b25cd0f0000 4c89642408 488d05bd000000 4889442418 488d3ded1f0000 4883c430 5b c3",
    );
    let is_code = |a: u64| (0x1000..0x2000).contains(&a);
    let (found, _) = sites(
        &|_| None,
        &is_code,
        &[(0x1000, &code)],
        &[0x2008],
        &[0x1000],
        true,
    );
    let got: Vec<(u64, i64, u64, Option<u64>)> = found
        .iter()
        .map(|s| (s.pc, s.frame as i64, s.invoke, s.descriptor))
        .collect();
    assert_eq!(
        got,
        [
            (0x100c, -0x30, 0x1103, Some(0x3000)),
            (0x103b, -0x30, 0x1104, None)
        ]
    );
    assert_eq!(
        found[1].last_ret, 0xfff,
        "a listed start bounds the function"
    );
    let (unlisted, _) = sites(
        &|_| None,
        &is_code,
        &[(0x1000, &code)],
        &[0x2008],
        &[0x1000],
        false,
    );
    let last_rets: Vec<u64> = unlisted.iter().map(|s| s.last_ret).collect();
    assert_eq!(
        last_rets,
        [0xfff, 0x1033],
        "past a ret the creator is unknown"
    );
}

/// What the scan does not model clears what it may write and nothing else.
#[test]
fn unmodelled_writes_clear_their_registers() {
    let written = |hex: &str| {
        let mask = decode(&bytes(hex)).unwrap().clobbers();
        (0..16)
            .filter(|r| mask & 1 << r != 0)
            .collect::<Vec<usize>>()
    };
    assert_eq!(written("4801d0"), [RAX, RDX], "add rax, rdx");
    assert_eq!(written("4839d0"), [] as [usize; 0], "cmp rax, rdx");
    assert_eq!(written("4883e4f0"), [RSP], "and rsp, -16");
    assert_eq!(written("4883fd10"), [] as [usize; 0], "cmp rbp, 16");
    assert_eq!(written("48f7f1"), [RAX, RCX, RDX], "div rcx");
    assert_eq!(written("660f6fe5"), [] as [usize; 0], "movdqa xmm4, xmm5");
    assert_eq!(written("5b"), [RBX], "pop rbx");
    assert_eq!(written("480fafc6"), [RAX, RSI], "imul rax, rsi");
}
