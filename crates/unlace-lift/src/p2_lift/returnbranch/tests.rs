use super::*;
use crate::context::ArchContext;
use std::rc::Rc;
use unlace_base::address::{Address, SeqNum};
use unlace_base::space::{AddrSpace, AddrSpaceManager, ConstantSpace, UniqueSpace};

/// Every decoded instruction emitted p-code, so the first raw op is the
/// entry's; the prefix map only matters in the tests that build one.
fn proves(fd: &Funcdata, ret: OpId, mode_switch: impl Fn(u64) -> bool) -> bool {
    computed_target(fd, ret, &crate::flow::VisitedMap::new(), mode_switch)
}

fn function() -> Funcdata {
    function_with_known_return(false)
}

fn function_with_known_return(tracked: bool) -> Funcdata {
    function_with_option(tracked, false)
}

fn function_with_option(tracked: bool, off: bool) -> Funcdata {
    let mut manager = AddrSpaceManager::new();
    manager.insert_space(Rc::new(ConstantSpace::new())).unwrap();
    manager
        .insert_space(Rc::new(UniqueSpace::new(1, 0, false)))
        .unwrap();
    let ram = Rc::new(AddrSpace::new(
        spacetype::IPTR_PROCESSOR,
        "ram",
        false,
        8,
        1,
        2,
        0,
        1,
        1,
    ));
    manager.insert_space(ram.clone()).unwrap();
    let mut arch = ArchContext::new(manager);
    arch.opbehaviors = vec![None; OpCode::CPUI_MAX as usize];
    use unlace_num::opbehavior::*;
    let behaviors: Vec<Rc<dyn OpBehavior>> = vec![
        Rc::new(OpBehaviorCopy),
        Rc::new(OpBehaviorSubpiece),
        Rc::new(OpBehaviorEqual),
        Rc::new(OpBehaviorNotEqual),
        Rc::new(OpBehaviorIntZext),
        Rc::new(OpBehaviorIntSext),
        Rc::new(OpBehaviorIntAdd),
        Rc::new(OpBehaviorIntSub),
        Rc::new(OpBehaviorInt2Comp),
        Rc::new(OpBehaviorIntNegate),
        Rc::new(OpBehaviorIntXor),
        Rc::new(OpBehaviorIntAnd),
        Rc::new(OpBehaviorIntOr),
        Rc::new(OpBehaviorIntLeft),
        Rc::new(OpBehaviorIntRight),
        Rc::new(OpBehaviorIntMult),
    ];
    for behavior in behaviors {
        let code = behavior.get_opcode();
        arch.opbehaviors[code as usize] = Some(behavior);
    }
    arch.unlace_options
        .set(crate::returnbranch::ReturnBranch(!off));
    if tracked {
        let loc = unlace_num::pcoderaw::VarnodeData {
            space: Some(ram.clone()),
            offset: 0x10,
            size: 8,
        };
        arch.indirect_return_addr = Some(loc.clone());
        arch.tracked_sets
            .default_value_mut()
            .push(unlace_sleigh::globalcontext::TrackedContext { loc, val: 0x1020 });
    }
    Funcdata::new(
        "probe",
        "probe",
        Rc::new(arch),
        Address::new(ram, 0x1000),
        0,
        0x400,
    )
    .unwrap()
}

// Inputs are (constant, offset/value, byte width); outputs use register offsets.
fn emit(
    fd: &mut Funcdata,
    pc: u64,
    code: OpCode,
    out: Option<(u64, i32)>,
    ins: &[(bool, u64, i32)],
) -> OpId {
    let ram = fd
        .get_arch()
        .manage()
        .get_space_by_name("ram")
        .unwrap()
        .clone();
    let op = fd.new_op(ins.len() as i32, Address::new(ram.clone(), pc));
    fd.op_set_opcode(op, crate::typeop::type_op_for(code));
    for (slot, &(constant, value, size)) in ins.iter().enumerate() {
        let v = if constant {
            fd.new_constant(size, value)
        } else {
            fd.new_varnode(size, &Address::new(ram.clone(), value), None)
        };
        fd.op_set_input(op, v, slot as i32).unwrap();
    }
    if let Some((offset, size)) = out {
        let v = fd.new_varnode(size, &Address::new(ram, offset), None);
        fd.op_set_output(op, v).unwrap();
    }
    op
}

#[test]
fn known_subregister_reads_match_the_written_bytes_without_crossing_storage() {
    let value = 0x8070605040302010u64;
    let known = [(Loc(2, 0x100, 8), value)];
    for big in [false, true] {
        let bytes = if big {
            value.to_be_bytes()
        } else {
            value.to_le_bytes()
        };
        for size in [1, 2, 4, 8] {
            for offset in 0..9usize {
                let expected = if offset + size <= 8 {
                    let mut word = [0; 8];
                    let start = if big { 8 - size } else { 0 };
                    word[start..start + size].copy_from_slice(&bytes[offset..offset + size]);
                    Some(if big {
                        u64::from_be_bytes(word)
                    } else {
                        u64::from_le_bytes(word)
                    })
                } else {
                    None
                };
                assert_eq!(
                    read_known(Loc(2, 0x100 + offset as u64, size as i32), big, &known),
                    expected
                );
            }
        }
        assert!(read_known(Loc(3, 0x100, 4), big, &known).is_none());
    }
}

/// A `visited` map in which each `(address, size)` is an instruction that
/// emitted no p-code, as a MIPS `nop` does.
#[allow(clippy::mutable_key_type)]
fn without_pcode(fd: &Funcdata, run: &[(u64, i32)]) -> crate::flow::VisitedMap {
    let ram = fd.get_address().get_space().unwrap().clone();
    run.iter()
        .map(|&(at, size)| {
            (
                Address::new(ram.clone(), at),
                crate::flow::VisitStat {
                    seqnum: SeqNum::new(Address::default(), 0),
                    size,
                },
            )
        })
        .collect()
}

/// The whole run before the first operation emitted no p-code, so the
/// prefix that follows it is still the entry prefix.
#[test]
#[allow(clippy::mutable_key_type)]
fn instructions_emitting_no_pcode_may_precede_the_entry_prefix() {
    for leading in [&[(0x1000, 4)][..], &[(0x1000, 4), (0x1004, 4)][..]] {
        let first = leading.last().unwrap().0 + 4;
        let mut fd = function();
        emit(
            &mut fd,
            first,
            OpCode::CPUI_COPY,
            Some((0x20, 8)),
            &[(true, 0x1080, 8)],
        );
        let ret = emit(
            &mut fd,
            first + 4,
            OpCode::CPUI_RETURN,
            None,
            &[(false, 0x20, 8)],
        );
        let visited = without_pcode(&fd, leading);
        assert!(
            computed_target(&fd, ret, &visited, |_| false),
            "{leading:?}"
        );
        assert!(!proves(&fd, ret, |_| false), "{leading:?}");
    }
}

/// Only a decoded instruction that emitted nothing may be skipped: an
/// unrecorded gap, an instruction that did emit p-code, one whose length
/// does not reach the first operation, and an operation before the entry
/// all leave the prefix unproven.
#[test]
#[allow(clippy::mutable_key_type)]
fn a_gap_before_the_entry_prefix_is_not_assumed_empty() {
    let mut fd = function();
    emit(
        &mut fd,
        0x1004,
        OpCode::CPUI_COPY,
        Some((0x20, 8)),
        &[(true, 0x1080, 8)],
    );
    let ret = emit(
        &mut fd,
        0x1008,
        OpCode::CPUI_RETURN,
        None,
        &[(false, 0x20, 8)],
    );
    let ram = fd.get_address().get_space().unwrap().clone();
    assert!(!computed_target(
        &fd,
        ret,
        &crate::flow::VisitedMap::new(),
        |_| false
    ));
    let mut emitted = without_pcode(&fd, &[(0x1000, 4)]);
    emitted
        .get_mut(&Address::new(ram.clone(), 0x1000))
        .unwrap()
        .seqnum = SeqNum::new(Address::new(ram.clone(), 0x1000), 1);
    assert!(!computed_target(&fd, ret, &emitted, |_| false));
    assert!(!computed_target(
        &fd,
        ret,
        &without_pcode(&fd, &[(0x1000, 2)]),
        |_| false
    ));
    assert!(!computed_target(
        &fd,
        ret,
        &without_pcode(&fd, &[(0x1000, 8)]),
        |_| false
    ));
    let mut below = function();
    emit(
        &mut below,
        0x0ffc,
        OpCode::CPUI_COPY,
        Some((0x20, 8)),
        &[(true, 0x1080, 8)],
    );
    let ret = emit(
        &mut below,
        0x1000,
        OpCode::CPUI_RETURN,
        None,
        &[(false, 0x20, 8)],
    );
    assert!(!computed_target(
        &below,
        ret,
        &without_pcode(&below, &[(0x0ffc, 4)]),
        |_| false
    ));
}

/// The marker is named by the language, not by an architecture id.
#[test]
fn only_the_isa_mode_user_op_name_is_a_mode_switch() {
    assert!(names_isa_mode_switch(b"setISAMode"));
    assert!(!names_isa_mode_switch(b"setisamode"));
    assert!(!names_isa_mode_switch(b"setISAMode2"));
    assert!(!names_isa_mode_switch(b""));
}

#[test]
fn captured_jump_target_survives_the_delay_slot_overwrite() {
    let mut fd = function();
    emit(
        &mut fd,
        0x1000,
        OpCode::CPUI_COPY,
        Some((0x10, 8)),
        &[(true, 0x1020, 8)],
    );
    emit(
        &mut fd,
        0x1004,
        OpCode::CPUI_COPY,
        Some((0x20, 8)),
        &[(false, 0x10, 8)],
    );
    emit(
        &mut fd,
        0x1004,
        OpCode::CPUI_COPY,
        Some((0x10, 8)),
        &[(false, 0x30, 8)],
    );
    let ret = emit(
        &mut fd,
        0x1004,
        OpCode::CPUI_RETURN,
        None,
        &[(false, 0x20, 8)],
    );
    assert!(proves(&fd, ret, |_| false));
    fd.obank_mut()
        .get_mut(ret)
        .unwrap()
        .set_flag(crate::op::pcodeop_flags::badinstruction);
    assert!(!proves(&fd, ret, |_| false));
    fd.obank_mut()
        .get_mut(ret)
        .unwrap()
        .clear_flag(crate::op::pcodeop_flags::badinstruction);
    let at = Address::new(fd.get_address().get_space().unwrap().clone(), 0x1004);
    fd.get_override_mut()
        .insert_flow_override(at, crate::overrides::flow_type::RETURN);
    assert!(!proves(&fd, ret, |_| false));
}

#[test]
fn option_off_keeps_the_return() {
    let mut fd = function_with_option(false, true);
    emit(
        &mut fd,
        0x1000,
        OpCode::CPUI_COPY,
        Some((0x20, 8)),
        &[(true, 0x1020, 8)],
    );
    let ret = emit(
        &mut fd,
        0x1004,
        OpCode::CPUI_RETURN,
        None,
        &[(false, 0x20, 8)],
    );
    assert!(!proves(&fd, ret, |_| false));
}

#[test]
fn a_zeroed_return_register_keeps_the_return() {
    for (value, kept) in [(0, false), (0x1020, true)] {
        let mut fd = function();
        emit(
            &mut fd,
            0x1000,
            OpCode::CPUI_COPY,
            Some((0x10, 8)),
            &[(true, value, 8)],
        );
        let ret = emit(
            &mut fd,
            0x1004,
            OpCode::CPUI_RETURN,
            None,
            &[(false, 0x10, 8)],
        );
        assert_eq!(proves(&fd, ret, |_| false), kept, "{value:#x}");
    }
}

#[test]
fn known_incoming_return_address_still_requires_a_proven_overwrite() {
    for overwritten in [false, true] {
        let mut fd = function_with_known_return(true);
        if overwritten {
            emit(
                &mut fd,
                0x1000,
                OpCode::CPUI_COPY,
                Some((0x10, 8)),
                &[(true, 0x1030, 8)],
            );
        }
        emit(
            &mut fd,
            0x1000,
            OpCode::CPUI_COPY,
            Some((0x20, 8)),
            &[(false, 0x10, 8)],
        );
        let ret = emit(
            &mut fd,
            0x1000,
            OpCode::CPUI_RETURN,
            None,
            &[(false, 0x20, 8)],
        );
        assert_eq!(proves(&fd, ret, |_| false), overwritten);
    }
}

#[test]
fn writing_ra_in_the_delay_slot_does_not_retarget_an_incoming_return() {
    let mut fd = function();
    emit(
        &mut fd,
        0x1000,
        OpCode::CPUI_COPY,
        Some((0x20, 8)),
        &[(false, 0x10, 8)],
    );
    emit(
        &mut fd,
        0x1000,
        OpCode::CPUI_COPY,
        Some((0x10, 8)),
        &[(true, 0x1020, 8)],
    );
    let ret = emit(
        &mut fd,
        0x1000,
        OpCode::CPUI_RETURN,
        None,
        &[(false, 0x20, 8)],
    );
    assert!(!proves(&fd, ret, |_| false));
}

#[test]
fn partial_writes_and_unknown_loads_invalidate_full_values() {
    for (code, width, ins) in [
        (OpCode::CPUI_COPY, 4, vec![(true, 0x1020, 4)]),
        (OpCode::CPUI_LOAD, 8, vec![(true, 2, 8), (true, 0x1020, 8)]),
    ] {
        let mut fd = function();
        emit(
            &mut fd,
            0x1000,
            OpCode::CPUI_COPY,
            Some((0x10, 8)),
            &[(true, 0x1020, 8)],
        );
        emit(&mut fd, 0x1004, code, Some((0x10, width)), &ins);
        let ret = emit(
            &mut fd,
            0x1008,
            OpCode::CPUI_RETURN,
            None,
            &[(false, 0x10, 8)],
        );
        assert!(!proves(&fd, ret, |_| false), "{code:?}");
    }
}

#[test]
fn calls_branches_unknown_userops_and_budget_exhaustion_decline() {
    for code in [
        OpCode::CPUI_CALL,
        OpCode::CPUI_CALLIND,
        OpCode::CPUI_BRANCH,
        OpCode::CPUI_BRANCHIND,
        OpCode::CPUI_CBRANCH,
        OpCode::CPUI_CALLOTHER,
    ] {
        let mut fd = function();
        emit(
            &mut fd,
            0x1000,
            OpCode::CPUI_COPY,
            Some((0x10, 8)),
            &[(true, 0x1020, 8)],
        );
        emit(&mut fd, 0x1004, code, None, &[(true, 7, 8), (true, 0, 1)]);
        let ret = emit(
            &mut fd,
            0x1008,
            OpCode::CPUI_RETURN,
            None,
            &[(false, 0x10, 8)],
        );
        assert!(!proves(&fd, ret, |_| false), "{code:?}");
        assert_eq!(
            proves(&fd, ret, |id| id == 7),
            code == OpCode::CPUI_CALLOTHER
        );
    }
    let mut fd = function();
    for i in 0..256 {
        emit(
            &mut fd,
            0x1000 + 4 * i,
            OpCode::CPUI_COPY,
            Some((0x10, 8)),
            &[(true, 0x1020, 8)],
        );
    }
    let ret = emit(
        &mut fd,
        0x1400,
        OpCode::CPUI_RETURN,
        None,
        &[(false, 0x10, 8)],
    );
    assert!(!proves(&fd, ret, |_| false));
}

#[test]
fn a_store_forgets_only_the_facts_in_the_space_it_writes() {
    let ram = 2;
    for (space, kept) in [(ram, false), (7, true)] {
        let mut fd = function();
        emit(
            &mut fd,
            0x1000,
            OpCode::CPUI_COPY,
            Some((0x10, 8)),
            &[(true, 0x1020, 8)],
        );
        emit(
            &mut fd,
            0x1004,
            OpCode::CPUI_STORE,
            None,
            &[(true, space, 8), (false, 0x18, 8), (true, 0, 8)],
        );
        let ret = emit(
            &mut fd,
            0x1008,
            OpCode::CPUI_RETURN,
            None,
            &[(false, 0x10, 8)],
        );
        assert_eq!(proves(&fd, ret, |_| false), kept, "space {space}");
    }
    let mut fd = function();
    emit(
        &mut fd,
        0x1000,
        OpCode::CPUI_COPY,
        Some((0x10, 8)),
        &[(true, 0x1020, 8)],
    );
    emit(
        &mut fd,
        0x1004,
        OpCode::CPUI_STORE,
        None,
        &[(false, 0x28, 8), (false, 0x18, 8), (true, 0, 8)],
    );
    let ret = emit(
        &mut fd,
        0x1008,
        OpCode::CPUI_RETURN,
        None,
        &[(false, 0x10, 8)],
    );
    assert!(!proves(&fd, ret, |_| false), "unknown space");
}

#[test]
fn local_edge_constants_stop_at_unknown_values_calls_and_partial_writes() {
    for case in [
        "constant",
        "unknown",
        "call",
        "partial",
        "store-other",
        "store-same",
    ] {
        let mut fd = function();
        let dispatch = emit(
            &mut fd,
            0x1000,
            OpCode::CPUI_BRANCHIND,
            None,
            &[(false, 0x10, 8)],
        );
        let start = emit(
            &mut fd,
            0x1020,
            OpCode::CPUI_COPY,
            Some((0x10, 8)),
            &[(
                case != "unknown",
                if case == "unknown" { 0x18 } else { 0x1040 },
                8,
            )],
        );
        fd.obank_mut()
            .get_mut(start)
            .unwrap()
            .set_flag(crate::op::pcodeop_flags::startbasic);
        match case {
            "call" => {
                emit(
                    &mut fd,
                    0x1024,
                    OpCode::CPUI_CALL,
                    None,
                    &[(true, 0x2000, 8)],
                );
            }
            "partial" => {
                emit(
                    &mut fd,
                    0x1024,
                    OpCode::CPUI_COPY,
                    Some((0x12, 1)),
                    &[(true, 0, 1)],
                );
            }
            "store-other" => {
                emit(
                    &mut fd,
                    0x1024,
                    OpCode::CPUI_STORE,
                    None,
                    &[(true, 7, 8), (false, 0x18, 8), (true, 0, 8)],
                );
            }
            "store-same" => {
                emit(
                    &mut fd,
                    0x1024,
                    OpCode::CPUI_STORE,
                    None,
                    &[(true, 2, 8), (false, 0x18, 8), (true, 0, 8)],
                );
            }
            _ => {}
        }
        let edge = emit(
            &mut fd,
            0x1028,
            OpCode::CPUI_BRANCH,
            None,
            &[(true, 0x1000, 8)],
        );
        let proved = matches!(case, "constant" | "store-other");
        assert_eq!(
            target_on_edge(&fd, edge, dispatch, |_| false),
            proved.then_some(0x1040),
            "{case}"
        );
    }
}
