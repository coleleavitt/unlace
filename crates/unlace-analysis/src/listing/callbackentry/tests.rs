use super::*;
use crate::listing::{DiscoveredFunction, FlowKind, FlowType, Insn};

fn insn(addr: u64, len: u32, mnemonic: &str, call: bool) -> Insn {
    Insn {
        addr,
        len,
        fall_through: Some(addr + u64::from(len)),
        flow: FlowType {
            kind: if call {
                FlowKind::ComputedCall
            } else {
                FlowKind::Fallthrough
            },
            is_call: call,
            has_fallthrough: true,
            ..FlowType::default()
        },
        flows: Vec::new(),
        mnemonic: mnemonic.into(),
        operands: String::new(),
        pcode: None,
    }
}

fn listing(target: u64, target_insn: Option<Insn>) -> Listing {
    let mut insns = vec![
        insn(0x2000, 5, "PUSH", false),
        insn(0x2005, 6, "CALL", true),
    ];
    if let Some(target_insn) = target_insn {
        insns.push(target_insn);
    }
    Listing::from_model_for_test(
        insns,
        vec![DiscoveredFunction {
            entry: 0x2000,
            name: None,
            from_symbol: false,
            has_no_return: false,
            call_fixup: None,
        }],
        vec![(0x2000, target)],
        vec![(0x1000, 0x3000)],
    )
}

#[test]
fn pushed_executable_pointer_reaching_a_call_is_a_candidate() {
    assert_eq!(
        stack_callback_candidates(&listing(0x1000, None)),
        vec![0x1000]
    );
}

#[test]
fn instruction_interior_is_not_a_candidate() {
    let covered = insn(0x1000, 8, "MOV", false);
    assert!(stack_callback_candidates(&listing(0x1004, Some(covered))).is_empty());
}

#[test]
fn pushed_pointer_without_a_following_call_is_not_a_candidate() {
    let model = listing(0x1000, None);
    let insns = model
        .instructions()
        .filter(|&(&at, _)| at != 0x2005)
        .map(|(_, insn)| insn.clone())
        .collect();
    let model = Listing::from_model_for_test(
        insns,
        model.funcs.into_values().collect(),
        model.stack_callback_refs,
        model.exec_ranges,
    );
    assert!(stack_callback_candidates(&model).is_empty());
}
