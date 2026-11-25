use super::*;
use crate::listing::model::{FlowKind, FlowType, Insn};

fn insn(addr: u64, kind: FlowKind, flows: Vec<u64>) -> Insn {
    let terminal = matches!(kind, FlowKind::Return | FlowKind::UnconditionalBranch);
    Insn {
        addr,
        len: 4,
        fall_through: (!terminal).then_some(addr + 4),
        flow: FlowType {
            kind,
            is_call: kind == FlowKind::Call,
            is_jump: matches!(
                kind,
                FlowKind::UnconditionalBranch | FlowKind::ConditionalBranch
            ),
            is_terminal: kind == FlowKind::Return,
            is_conditional: kind == FlowKind::ConditionalBranch,
            has_fallthrough: !terminal,
            ..Default::default()
        },
        flows,
        mnemonic: "".into(),
        operands: String::new(),
        pcode: None,
    }
}

/// f@0x100 and g@0x200 both jump into the shared tail at 0x300, which
/// returns; f also calls h@0x400, which must not join f's body.
fn listing() -> Listing {
    use FlowKind::*;
    let insns = vec![
        insn(0x100, Call, vec![0x400]),
        insn(0x104, ConditionalBranch, vec![0x300]),
        insn(0x108, Return, vec![]),
        insn(0x200, Fallthrough, vec![]),
        insn(0x204, UnconditionalBranch, vec![0x300]),
        insn(0x300, Fallthrough, vec![]),
        insn(0x304, Return, vec![]),
        insn(0x400, Return, vec![]),
    ];
    Listing::from_parts_for_test(insns, &[0x100, 0x200, 0x400])
}

#[test]
fn shared_tail_has_both_owners() {
    let m = ChunkModel::build(&listing());
    assert_eq!(m.chunks(0x100).unwrap(), &[(0x100, 0x10c), (0x300, 0x308)]);
    assert_eq!(m.chunks(0x200).unwrap(), &[(0x200, 0x208), (0x300, 0x308)]);
    assert_eq!(m.chunks(0x400).unwrap(), &[(0x400, 0x404)]);
    assert_eq!(m.owners(0x304), vec![0x100, 0x200]);
    assert_eq!(m.owners(0x104), vec![0x100]);
    assert_eq!(m.tail_count(), 2);
}
