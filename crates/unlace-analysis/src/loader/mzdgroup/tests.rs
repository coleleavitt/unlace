use super::*;

/// A decoder for the handful of 8086 forms the tests use: register writes
/// by opcode, `CALL`, `RET`, `JMP`/`Jcc` rel8 and `INT`.
fn step(image: &MzImage, vma: u64) -> Option<Step> {
    let b = image
        .module
        .get((vma - image.base) as usize..)
        .filter(|b| b.len() >= 3)?;
    let gpr = |r: u8| if r == 0 { 1 | 1 << AH } else { 1u16 << r };
    let rel8 = |len: u64| (vma + len).wrapping_add(i64::from(b[1] as i8) as u64);
    let rel16 = || (vma + 3).wrapping_add(i64::from(i16::from_le_bytes([b[1], b[2]])) as u64);
    let (len, writes, call, falls_through, targets) = match b[0] {
        0xb8..=0xbf => (3, gpr(b[0] - 0xb8), false, true, vec![]),
        0xb4 => (2, gpr(0), false, true, vec![]),
        0xb0 => (2, 1, false, true, vec![]),
        0x8e => (2, 1 << (8 + ((b[1] >> 3) & 7)), false, true, vec![]),
        0x8b | 0x8c => (
            2,
            (gpr((b[1] >> 3) & 7) * u16::from(b[0] == 0x8b))
                | (gpr(b[1] & 7) * u16::from(b[0] == 0x8c)),
            false,
            true,
            vec![],
        ),
        0x50..=0x57 | 0x06 | 0x0e | 0x16 | 0x1e => (1, 1 << 4, false, true, vec![]),
        0x58..=0x5f => (1, 1 << 4 | gpr(b[0] - 0x58), false, true, vec![]),
        0x07 | 0x17 | 0x1f => (1, 1 << 4 | 1 << (8 + (b[0] >> 3)), false, true, vec![]),
        0xcd => (2, 1 << 4, true, true, vec![]),
        0xe8 => (3, 1 << 4, true, true, vec![rel16()]),
        0xc3 => (1, 1 << 4, false, false, vec![]),
        0xeb => (2, 0, false, false, vec![rel8(2)]),
        0x70..=0x7f => (2, 0, false, true, vec![rel8(2)]),
        0x90 => (1, 0, false, true, vec![]),
        _ => return None,
    };
    Some(Step {
        len,
        writes,
        call,
        falls_through,
        targets,
    })
}

fn image(code: &[u8], relocated: &[usize]) -> MzImage {
    let mut module = vec![0x90u8; 0x200];
    module[..code.len()].copy_from_slice(code);
    MzImage {
        module,
        base: 0x10000,
        entry: 0x10000,
        stack: 0,
        relocations: relocated.len(),
        relocated_words: relocated.iter().map(|&at| 0x10000 + at as u64).collect(),
        skipped_relocations: 0,
        packer: None,
        code_segments: vec![(0x10000, 0x1000)],
    }
}

fn startup(code: &[u8], relocated: &[usize]) -> Option<Startup> {
    let image = image(code, relocated);
    walk(&image, 0x1000, |vma| step(&image, vma))
}

fn ds(code: &[u8], relocated: &[usize]) -> Option<u16> {
    startup(code, relocated).map(|startup| startup.ds)
}

#[test]
fn a_relocated_segment_moved_into_ds_before_the_first_call_is_dgroup() {
    let code = [0xb8, 0x10, 0x10, 0x8e, 0xd8, 0xe8, 0x00, 0x00];
    assert_eq!(ds(&code, &[1]), Some(0x1010));
    assert_eq!(
        ds(&code, &[]),
        None,
        "an unrelocated immediate is no segment of the module"
    );
}

#[test]
fn dos_version_keeps_dx_and_the_date_overwrites_it() {
    let turbo_c = [
        0xba, 0x10, 0x10, 0xb4, 0x30, 0xcd, 0x21, 0x8e, 0xda, 0xe8, 0x00, 0x00,
    ];
    assert_eq!(ds(&turbo_c, &[1]), Some(0x1010));
    let mut date = turbo_c;
    date[4] = 0x2a;
    assert_eq!(ds(&date, &[1]), None);
    let switch_char = [
        0x0e, 0x1f, 0xb4, 0x37, 0xb0, 0x00, 0xcd, 0x21, 0xe8, 0x00, 0x00,
    ];
    assert_eq!(
        ds(&switch_char, &[]),
        Some(0x1000),
        "a write to AL keeps the function number in AH"
    );
}

#[test]
fn a_segment_set_on_one_path_only_is_dropped_at_the_join() {
    let code = [0x73, 0x02, 0x0e, 0x1f, 0xe8, 0x00, 0x00];
    assert_eq!(ds(&code, &[]), None);
    let both = [0x0e, 0x1f, 0x73, 0x01, 0x90, 0xe8, 0x00, 0x00];
    assert_eq!(
        ds(&both, &[]),
        Some(0x1000),
        "push cs; pop ds before the branch holds on both paths"
    );
}

#[test]
fn a_dead_fall_through_resumes_at_the_branch_target() {
    let code = [
        0xb8, 0x10, 0x10, 0x73, 0x03, 0xb4, 0x4c, 0xc3, 0x50, 0x1f, 0xe8, 0x00, 0x00,
    ];
    assert_eq!(
        ds(&code, &[1]),
        Some(0x1010),
        "the branch carries AX past the fall-through's write"
    );
    let exit = [0xb8, 0x10, 0x10, 0x8e, 0xd8, 0xb4, 0x4c, 0xcd, 0x21];
    assert_eq!(
        ds(&exit, &[1]),
        Some(0x1010),
        "a DOS exit with no branch target ahead decides"
    );
    assert_eq!(
        ds(&[0x0e, 0x1f, 0xc3], &[]),
        None,
        "a return decides nothing"
    );
}

#[test]
fn a_call_a_branch_can_skip_is_a_side_path() {
    let msc = [
        0x73, 0x04, 0x50, 0xe8, 0x00, 0x00, 0xb8, 0x10, 0x10, 0x8e, 0xd8, 0xe8, 0x00, 0x00,
    ];
    assert_eq!(
        ds(&msc, &[7]),
        Some(0x1010),
        "the error call before DS is set decides nothing"
    );
    let psp = [0x73, 0x05, 0x0e, 0x1f, 0xe8, 0x00, 0x00, 0xe8, 0x00, 0x00];
    assert_eq!(
        ds(&psp, &[]),
        None,
        "a DS the skipped path loads is not the joined path's"
    );
}

#[test]
fn a_call_with_an_error_branch_pending_votes() {
    let lattice = [
        0xba, 0x10, 0x10, 0x72, 0x08, 0x8e, 0xda, 0xe8, 0x00, 0x00, 0x90, 0x90, 0x90, 0xeb, 0xf1,
    ];
    assert_eq!(
        ds(&lattice, &[1]),
        Some(0x1010),
        "the startup's only call names DGROUP"
    );
    let split = [
        0x0e, 0x1f, 0x73, 0x03, 0xe8, 0x00, 0x00, 0xb8, 0x10, 0x10, 0x8e, 0xd8, 0xe8, 0x00, 0x00,
    ];
    assert_eq!(
        ds(&split, &[8]),
        None,
        "a side path's DS that the joined path replaces is a conflict"
    );
}

#[test]
fn a_callee_that_returns_with_another_segment_in_ds_states_nothing() {
    let mut code = [0x90u8; 0x22];
    code[..0x0c].copy_from_slice(&[
        0x0e, 0x1f, 0xe8, 0x0b, 0x00, 0xe8, 0x18, 0x00, 0xb4, 0x4c, 0xcd, 0x21,
    ]);
    code[0x10..0x16].copy_from_slice(&[0xb8, 0x10, 0x10, 0x8e, 0xd8, 0xc3]);
    code[0x20] = 0xc3;
    assert_eq!(
        ds(&code, &[0x11]),
        None,
        "the banner's DS = CS is not the segment init leaves in DS"
    );
    code[0x10..0x18].copy_from_slice(&[0x1e, 0xb8, 0x10, 0x10, 0x8e, 0xd8, 0x1f, 0xc3]);
    assert_eq!(
        ds(&code, &[0x12]),
        Some(0x1000),
        "a callee that restores DS keeps it"
    );
}

#[test]
fn a_later_call_with_another_segment_in_ds_states_nothing() {
    let mut code = [0x90u8; 0x31];
    code[..0x14].copy_from_slice(&[
        0xb8, 0x20, 0x10, 0x8e, 0xd8, 0xe8, 0x18, 0x00, 0xb8, 0x10, 0x10, 0x8e, 0xd8, 0xe8, 0x20,
        0x00, 0xb4, 0x4c, 0xcd, 0x21,
    ]);
    code[0x20] = 0xc3;
    code[0x30] = 0xc3;
    assert_eq!(
        ds(&code, &[1, 9]),
        None,
        "the BSS segment the first call runs with is not main's"
    );
    code[9] = 0x20;
    assert_eq!(ds(&code, &[1, 9]), Some(0x1020));
}

#[test]
fn a_callee_the_startup_enters_with_another_ds_is_left_out() {
    let mut code = [0x90u8; 0x41];
    code[..0x19].copy_from_slice(&[
        0xb8, 0x10, 0x10, 0x8e, 0xd8, 0xe8, 0x18, 0x00, 0x1e, 0xb8, 0x0e, 0x10, 0x8e, 0xd8, 0xe8,
        0x1f, 0x00, 0x1f, 0xe8, 0x2b, 0x00, 0xb4, 0x4c, 0xcd, 0x21,
    ]);
    code[0x20] = 0xc3;
    code[0x30] = 0xc3;
    code[0x40] = 0xc3;
    let borland = startup(&code, &[1, 0x0a]);
    assert_eq!(
        borland,
        Some(Startup {
            ds: 0x1010,
            others: vec![0x10030]
        }),
        "StartExit runs with _INIT_ in DS"
    );

    let mut msc = [0x90u8; 0x31];
    msc[..0x12].copy_from_slice(&[
        0x73, 0x04, 0x50, 0xe8, 0x1a, 0x00, 0xb8, 0x10, 0x10, 0x8e, 0xd8, 0xe8, 0x22, 0x00, 0xb4,
        0x4c, 0xcd, 0x21,
    ]);
    msc[0x20] = 0xc3;
    msc[0x30] = 0xc3;
    let entered_with_psp = startup(&msc, &[7]);
    assert_eq!(
        entered_with_psp,
        Some(Startup {
            ds: 0x1010,
            others: vec![]
        }),
        "the DOS 1 error call's runtime routine is one the program calls with DGROUP too"
    );
}

#[test]
fn an_interrupt_other_than_dos_drops_ds() {
    let code = [0x0e, 0x1f, 0xcd, 0x2f, 0xe8, 0x00, 0x00];
    assert_eq!(ds(&code, &[]), None);
}

#[test]
fn interrupt_writes_follow_the_dos_function() {
    assert_eq!(interrupt_writes(0x21, Some(0x4c)), None);
    assert_eq!(interrupt_writes(0x20, None), None);
    assert_eq!(
        interrupt_writes(0x21, Some(0x30)),
        Some(bits(&[AX, AH, BX, CX]))
    );
    assert_eq!(interrupt_writes(0x21, Some(0x3d)), Some(SERVICE_ANY));
    assert_eq!(
        interrupt_writes(0x21, Some(0x1f)),
        Some(INTERRUPT_ANY),
        "the drive parameter block is DS:BX"
    );
    assert_eq!(interrupt_writes(0x21, None), Some(INTERRUPT_ANY));
    assert_eq!(interrupt_writes(0x10, Some(0x30)), Some(INTERRUPT_ANY));
}
