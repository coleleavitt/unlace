use super::*;

#[test]
fn truncate_masks_to_the_output_width() {
    assert_eq!(truncate(0x1122334455667788, 64), 0x1122334455667788);
    assert_eq!(truncate(0x1122334455667788, 32), 0x55667788);
    assert_eq!(truncate(0x1122334455667788, 8), 0x88);
    // A width the emitter cannot produce (>64 bits) is a pass-through.
    assert_eq!(truncate(7, 128), 7);
}

#[test]
fn sign_extend_widens_the_top_bit() {
    assert_eq!(sign_extend(0x80, 8), !0x7f);
    assert_eq!(sign_extend(0x7f, 8), 0x7f);
    assert_eq!(sign_extend(0xffff_ffff, 32), u64::MAX);
    assert_eq!(sign_extend(1, 0), 1);
    assert_eq!(sign_extend(1, 64), 1);
}

#[test]
fn piece_concatenates_at_the_low_input_width_and_wide_shifts_are_zero() {
    assert_eq!(
        arith(OpCode::CPUI_PIECE, 0x1234, 0x5678, 2),
        Some(0x1234_5678)
    );
    assert_eq!(arith(OpCode::CPUI_PIECE, 0x12, 0x34, 1), Some(0x1234));
    assert_eq!(arith(OpCode::CPUI_PIECE, 0x1, 0x2, 4), Some(0x1_0000_0002));
    assert_eq!(arith(OpCode::CPUI_INT_LEFT, 1, 64, 1), Some(0));
    assert_eq!(arith(OpCode::CPUI_INT_RIGHT, u64::MAX, 70, 1), Some(0));
    assert_eq!(arith(OpCode::CPUI_INT_LEFT, 1, 63, 1), Some(1 << 63));
    assert_eq!(
        arith(OpCode::CPUI_SUBPIECE, 0x1122_3344_5566_7788, 4, 4),
        Some(0x1122_3344)
    );
    assert_eq!(arith(OpCode::CPUI_SUBPIECE, 0x11, 8, 4), Some(0));
    assert_eq!(arith(OpCode::CPUI_COPY, 1, 2, 4), None);
}

fn spaces() -> (
    Rc<unlace_base::space::AddrSpace>,
    Rc<unlace_base::space::AddrSpace>,
) {
    use unlace_base::space::{AddrSpace, spacetype};
    (
        Rc::new(AddrSpace::new_for_decode(spacetype::IPTR_CONSTANT)),
        Rc::new(AddrSpace::new_for_decode(spacetype::IPTR_PROCESSOR)),
    )
}

fn vn(space: &Rc<unlace_base::space::AddrSpace>, offset: u64, size: u32) -> VarnodeData {
    VarnodeData {
        space: Some(Rc::clone(space)),
        offset,
        size,
    }
}

#[test]
fn a_cmov_destination_is_not_known() {
    let (k, r) = spaces();
    let no_load = |_: u64, _: u32| None;
    let (rsi, rax) = (vn(&r, 0x30, 8), vn(&r, 0x0, 8));
    let mut known: HashMap<Key, u64> = HashMap::new();
    // RSI = 0x7500; RAX = 0x70bc
    apply_ops(
        &[
            (
                OpCode::CPUI_COPY,
                Some(rsi.clone()),
                vec![vn(&k, 0x7500, 8)],
            ),
            (
                OpCode::CPUI_COPY,
                Some(rax.clone()),
                vec![vn(&k, 0x70bc, 8)],
            ),
        ],
        &mut known,
        &no_load,
    );
    assert_eq!(known.get(&key_of(&rsi).unwrap()), Some(&0x7500));
    // cmove rsi,rax: if (!ZF) goto inst_next; RSI = RAX;
    apply_ops(
        &[
            (
                OpCode::CPUI_CBRANCH,
                None,
                vec![vn(&k, 0x2835, 8), vn(&r, 0x206, 1)],
            ),
            (OpCode::CPUI_COPY, Some(rsi.clone()), vec![rax.clone()]),
        ],
        &mut known,
        &no_load,
    );
    assert_eq!(known.get(&key_of(&rsi).unwrap()), None);
    assert_eq!(known.get(&key_of(&rax).unwrap()), Some(&0x70bc));
}

#[test]
fn a_partial_write_invalidates_the_whole_register() {
    let mut known: HashMap<Key, u64> = HashMap::new();
    // RDI (offset 0x38, 8 bytes) and RSI (0x30, 8 bytes) in one space.
    known.insert((1, 0x38, 8), 0x402004);
    known.insert((1, 0x30, 8), 0x11);
    // A 4-byte write to EDI kills the 8-byte RDI it overlaps...
    kill_overlapping(&mut known, &(1, 0x38, 4));
    assert!(!known.contains_key(&(1, 0x38, 8)));
    // ...and leaves the register beside it alone.
    assert_eq!(known.get(&(1, 0x30, 8)), Some(&0x11));
    // A different space never aliases.
    kill_overlapping(&mut known, &(2, 0x30, 8));
    assert_eq!(known.get(&(1, 0x30, 8)), Some(&0x11));
    // An exactly-abutting write does not.
    kill_overlapping(&mut known, &(1, 0x38, 8));
    assert_eq!(known.get(&(1, 0x30, 8)), Some(&0x11));
}

#[test]
fn a_delay_slot_write_to_the_format_register_is_seen() {
    let (k, r) = spaces();
    let (a0, ra) = (vn(&r, 0x10, 4), vn(&r, 0x7c, 4));
    let a0_key = key_of(&a0).unwrap();
    // jal printf / addiu a0,a0,0x1234: ra = next; a0 = a0 + 0x1234; call printf
    let jal_with_slot = [
        (
            OpCode::CPUI_COPY,
            Some(ra.clone()),
            vec![vn(&k, 0x400108, 4)],
        ),
        (
            OpCode::CPUI_INT_ADD,
            Some(a0.clone()),
            vec![a0.clone(), vn(&k, 0x1234, 4)],
        ),
        (OpCode::CPUI_CALL, None, vec![vn(&r, 0x400200, 4)]),
    ];
    assert!(writes_before_transfer(&jal_with_slot, &a0_key));
    // x86 `call`: the return address goes on the stack, the argument register is untouched.
    let call = [
        (
            OpCode::CPUI_COPY,
            Some(ra.clone()),
            vec![vn(&k, 0x400108, 4)],
        ),
        (OpCode::CPUI_CALL, None, vec![vn(&r, 0x400200, 4)]),
        (OpCode::CPUI_COPY, Some(a0.clone()), vec![vn(&k, 0, 4)]),
    ];
    assert!(!writes_before_transfer(&call, &a0_key));
    // A write to a sub-register overlaps.
    let sub = [(OpCode::CPUI_COPY, Some(vn(&r, 0x12, 1)), vec![vn(&k, 0, 1)])];
    assert!(writes_before_transfer(&sub, &a0_key));
}

#[test]
fn the_gettext_family_names_the_msgid_slot() {
    // `_()` is `dcgettext(NULL, msgid, LC_MESSAGES)`; `gettext(msgid)`.
    assert_eq!(
        GETTEXT_FAMILY
            .iter()
            .find(|(n, _)| *n == "gettext")
            .unwrap()
            .1,
        0
    );
    assert_eq!(
        GETTEXT_FAMILY
            .iter()
            .find(|(n, _)| *n == "dgettext")
            .unwrap()
            .1,
        1
    );
    assert_eq!(
        GETTEXT_FAMILY
            .iter()
            .find(|(n, _)| *n == "dcgettext")
            .unwrap()
            .1,
        1
    );
}
