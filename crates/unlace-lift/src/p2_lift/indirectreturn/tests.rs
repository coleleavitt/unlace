use super::*;
use crate::context::{ArchContext, BlockId};
use std::rc::Rc;
use unlace_base::address::Address;
use unlace_base::space::{
    AddrSpace, AddrSpaceManager, ConstantSpace, UniqueSpace, addrspace_flags, spacetype,
};

fn function(size: u32, big: bool) -> Funcdata {
    let mut manager = AddrSpaceManager::new();
    manager.insert_space(Rc::new(ConstantSpace::new())).unwrap();
    manager
        .insert_space(Rc::new(UniqueSpace::new(1, 0, false)))
        .unwrap();
    let flags = if big { addrspace_flags::big_endian } else { 0 };
    let ram = Rc::new(AddrSpace::new(
        spacetype::IPTR_PROCESSOR,
        "ram",
        big,
        size,
        1,
        2,
        flags,
        1,
        1,
    ));
    let reg = Rc::new(AddrSpace::new(
        spacetype::IPTR_PROCESSOR,
        "register",
        big,
        4,
        1,
        3,
        flags,
        1,
        1,
    ));
    manager.insert_space(ram.clone()).unwrap();
    manager.insert_space(reg.clone()).unwrap();
    let mut arch = ArchContext::new(manager);
    arch.indirect_return_addr = Some(unlace_num::pcoderaw::VarnodeData {
        space: Some(reg),
        offset: 0xf8,
        size: 8,
    });
    Funcdata::new(
        "dispatch",
        "dispatch",
        Rc::new(arch),
        Address::new(ram, 0x1000),
        0x10000000,
        0x100,
    )
    .unwrap()
}
fn input(fd: &mut Funcdata, offset: u64, size: i32) -> VarnodeId {
    let space = fd
        .get_arch()
        .manage()
        .get_space_by_name("register")
        .unwrap()
        .clone();
    let vn = fd.new_varnode(size, &Address::new(space, offset), None);
    fd.set_input_varnode(vn).unwrap()
}
fn operation(
    fd: &mut Funcdata,
    pc: u64,
    code: OpCode,
    size: i32,
    ins: &[VarnodeId],
) -> (OpId, Option<VarnodeId>) {
    let op = fd.new_op(
        ins.len() as i32,
        Address::new(fd.get_address().get_space().unwrap().clone(), pc),
    );
    fd.op_set_opcode(op, crate::typeop::type_op_for(code));
    for (i, &v) in ins.iter().enumerate() {
        fd.op_set_input(op, v, i as i32).unwrap();
    }
    let out = (size != 0).then(|| fd.new_unique(size, None));
    if let Some(v) = out {
        fd.op_set_output(op, v).unwrap();
    }
    (op, out)
}
fn attach(fd: &mut Funcdata, block: BlockId, op: OpId) {
    fd.obank_mut().mark_alive(op);
    fd.bb_insert_op(op, block, None);
}
#[test]
fn only_new_code_entering_old_code_requests_another_stage() {
    let mut fd = function(8, false);
    let ram = fd.get_address().get_space().unwrap().clone();
    let code = |fd: &mut Funcdata, pc: u64| fd.new_code_ref(&Address::new(ram.clone(), pc));
    let zero = fd.new_constant(8, 0);
    let (old, _) = operation(&mut fd, 0x1000, OpCode::CPUI_COPY, 8, &[zero]);
    let (dispatch, _) = operation(&mut fd, 0x1004, OpCode::CPUI_BRANCHIND, 0, &[zero]);
    let mark = fd.obank().get_uniq_id();
    let at = move |to: &Address| match to.get_offset() {
        0x1000 => Some(old),
        0x1004 => Some(dispatch),
        _ => None,
    };
    let none = |_: OpId| None;
    assert!(!reentered_since(&fd, mark, at, none));
    let (step, _) = operation(&mut fd, 0x1010, OpCode::CPUI_COPY, 8, &[zero]);
    assert!(!reentered_since(&fd, mark, at, none));
    assert!(reentered_since(&fd, mark, at, |op| (op == step).then_some(old)));
    let forward = code(&mut fd, 0x1020);
    let (jump, _) = operation(&mut fd, 0x1014, OpCode::CPUI_BRANCH, 0, &[forward]);
    let (leave, _) = operation(&mut fd, 0x1020, OpCode::CPUI_RETURN, 0, &[zero]);
    let ends = |op: OpId| (op == jump || op == leave).then_some(old);
    assert!(!reentered_since(&fd, mark, at, ends));
    let back = code(&mut fd, 0x1004);
    let (retry, _) = operation(&mut fd, 0x1024, OpCode::CPUI_CBRANCH, 0, &[back, zero]);
    assert!(reentered_since(&fd, mark, at, none));
    assert!(!reentered_since(&fd, fd.obank().get_uniq_id(), at, |op| {
        (op == retry).then_some(old)
    }));
}

#[test]
fn only_edges_that_reach_a_dispatch_are_its_reentries() {
    let mut fd = function(8, false);
    let ram = fd.get_address().get_space().unwrap().clone();
    let zero = fd.new_constant(8, 0);
    let head = fd.new_code_ref(&Address::new(ram.clone(), 0x1000));
    let (a_pre, _) = operation(&mut fd, 0x1000, OpCode::CPUI_COPY, 8, &[zero]);
    let (a, _) = operation(&mut fd, 0x1004, OpCode::CPUI_BRANCHIND, 0, &[zero]);
    let (b_pre, _) = operation(&mut fd, 0x1010, OpCode::CPUI_COPY, 8, &[zero]);
    let (b, _) = operation(&mut fd, 0x1014, OpCode::CPUI_BRANCHIND, 0, &[zero]);
    let (other, _) = operation(&mut fd, 0x1020, OpCode::CPUI_COPY, 8, &[zero]);
    let (leave, _) = operation(&mut fd, 0x1024, OpCode::CPUI_RETURN, 0, &[zero]);
    let (back, _) = operation(&mut fd, 0x1030, OpCode::CPUI_BRANCH, 0, &[head]);
    let at = move |to: &Address| match to.get_offset() {
        0x1000 => Some(a_pre),
        _ => None,
    };
    let next = move |op: OpId| match op {
        o if o == a_pre => Some(a),
        o if o == b_pre => Some(b),
        o if o == other => Some(leave),
        _ => None,
    };
    let both: BTreeSet<OpId> = [a, b].into_iter().collect();
    let edges = [(back, a_pre), (leave, other), (back, b_pre)];
    let reached = reaching_edges(&fd, &both, &edges, at, next);
    assert_eq!(reached.get(&a).map(Vec::as_slice), Some(&edges[..1]));
    assert_eq!(reached.get(&b).map(Vec::as_slice), Some(&edges[2..]));
    assert_eq!(
        reached.len(),
        2,
        "the edge into unrelated code reaches no dispatch"
    );
}

#[test]
fn only_a_reentry_retry_bypasses_the_select_option_and_keeps_its_targets() {
    let ram = function(8, false)
        .get_address()
        .get_space()
        .unwrap()
        .clone();
    let mut jt = JumpTable::new(Address::new(ram.clone(), 0x1004));
    jt.increment_recovery_count();
    jt.increment_recovery_count();
    use crate::constselectjump::ConstSelectMode;
    assert!(
        !crate::constselectjump::admits(&jt, ConstSelectMode::Reentry)
            && crate::constselectjump::admits(&jt, ConstSelectMode::On)
    );
    jt.unlace_retry_flow();
    assert!(crate::constselectjump::admits(
        &jt,
        ConstSelectMode::Reentry
    ));
    assert!(!jt.unlace_keeps_recovered_targets());
    jt.unlace_push_entry(Address::new(ram, 0x1040), 0, 0x1040);
    assert!(jt.unlace_keeps_recovered_targets());
    jt.mark_complete();
    assert!(
        !jt.unlace_keeps_recovered_targets()
            && crate::constselectjump::admits(&jt, ConstSelectMode::Reentry)
    );
}

#[test]
fn only_full_or_pointer_width_low_return_inputs_supply_a_return() {
    for big in [false, true] {
        for address_size in [4, 8] {
            for size in [1, 2, 4, 8] {
                let mut fd = function(address_size, big);
                let low = 0xf8 + if big { 8 - size as u64 } else { 0 };
                let vn = input(&mut fd, low, size);
                assert_eq!(
                    incoming_return(&fd, vn),
                    size == 8 || size as u32 == address_size
                );
            }
        }
    }
}
#[test]
fn transfer_mask_is_read_from_raw_storage_before_ssa() {
    let mut fd = function(8, false);
    let ra = input(&mut fd, 0xf8, 8);
    let bits = fd.new_constant(8, !1);
    let (_, out) = operation(&mut fd, 0x1010, OpCode::CPUI_INT_AND, 8, &[ra, bits]);
    let location = fd.vbank().get(out.unwrap()).unwrap().get_addr().clone();
    let raw_read = fd.new_varnode(8, &location, None);
    let (branch, _) = operation(&mut fd, 0x1010, OpCode::CPUI_BRANCHIND, 0, &[raw_read]);
    assert_eq!(target_encoding(&fd, branch), Some((8, !1)));
    let destructive = fd.new_constant(8, 0xfffe);
    let (_, out) = operation(&mut fd, 0x1008, OpCode::CPUI_INT_AND, 8, &[ra, destructive]);
    assert!(collect(&fd, out.unwrap(), (8, !1), &mut HashSet::new(), &mut 128).is_none());
    assert!(collect(&fd, ra, (8, !1), &mut HashSet::new(), &mut 0).is_none());
}
#[test]
fn cyclic_target_proofs_need_a_seed_and_refuse_an_unknown_input() {
    let mut fd = function(8, false);
    let ra = input(&mut fd, 0xf8, 8);
    let constant = fd.new_constant(8, 0x1040);
    let (phi, out) = operation(
        &mut fd,
        0x1010,
        OpCode::CPUI_MULTIEQUAL,
        8,
        &[constant, ra, ra],
    );
    let out = out.unwrap();
    fd.op_set_input(phi, out, 2).unwrap();
    let proof = collect(&fd, out, (8, u64::MAX), &mut HashSet::new(), &mut 128).unwrap();
    assert!(proof.returns);
    assert_eq!(proof.constants, [0x1040].into_iter().collect());
    assert!(collect(&fd, out, (8, u64::MAX), &mut HashSet::new(), &mut 1).is_none());
    let unknown = input(&mut fd, 0xf0, 8);
    fd.op_set_input(phi, unknown, 0).unwrap();
    assert!(collect(&fd, out, (8, u64::MAX), &mut HashSet::new(), &mut 128).is_none());
    fd.op_set_all_input(phi, &[out, out, out]).unwrap();
    let proof = collect(&fd, out, (8, u64::MAX), &mut HashSet::new(), &mut 128).unwrap();
    assert!(!proof.returns && proof.constants.is_empty());
}

#[test]
fn a_raw_negated_left_operand_supplies_the_transfer_mask() {
    let mut fd = function(8, false);
    let ra = input(&mut fd, 0xf8, 8);
    let two = fd.new_constant(8, 2);
    let (_, negative) = operation(&mut fd, 0x1010, OpCode::CPUI_INT_2COMP, 8, &[two]);
    let location = fd
        .vbank()
        .get(negative.unwrap())
        .unwrap()
        .get_addr()
        .clone();
    let raw = fd.new_varnode(8, &location, None);
    let (_, target) = operation(&mut fd, 0x1010, OpCode::CPUI_INT_AND, 8, &[raw, ra]);
    let location = fd.vbank().get(target.unwrap()).unwrap().get_addr().clone();
    let raw = fd.new_varnode(8, &location, None);
    let (branch, _) = operation(&mut fd, 0x1010, OpCode::CPUI_BRANCHIND, 0, &[raw]);
    assert_eq!(target_encoding(&fd, branch), Some((8, !1)));
}
fn dispatch(variant: &str) -> (Funcdata, JumpTable, Address) {
    let mut fd = function(8, false);
    let root = fd.bblocks_root_pub();
    let p0 = fd.bblocks_mut().new_block_basic(root);
    let p1 = fd.bblocks_mut().new_block_basic(root);
    let block = fd.bblocks_mut().new_block_basic(root);
    let address = Address::new(
        fd.get_address().get_space().unwrap().clone(),
        if variant == "prefix" { 0x100c } else { 0x1010 },
    );
    fd.set_basic_block_range(block, &address, &address);
    fd.bblocks_mut().add_edge(p0, block);
    fd.bblocks_mut().add_edge(p1, block);
    let constant = fd.new_constant(8, 0x1040);
    let ret = input(&mut fd, if variant == "unknown" { 0xf0 } else { 0xf8 }, 8);
    let (phi, target) = operation(
        &mut fd,
        0x1010,
        OpCode::CPUI_MULTIEQUAL,
        8,
        &[constant, ret],
    );
    attach(&mut fd, block, phi);
    let target = target.unwrap();
    if variant == "pure" || variant == "returned" {
        let (step, bumped) = operation(&mut fd, 0x1010, OpCode::CPUI_INT_ADD, 8, &[ret, constant]);
        attach(&mut fd, block, step);
        if variant == "returned" {
            let (leave, _) = operation(
                &mut fd,
                0x1011,
                OpCode::CPUI_RETURN,
                0,
                &[constant, bumped.unwrap()],
            );
            attach(&mut fd, p0, leave);
        }
    }
    if variant == "effect" {
        let (effect, _) = operation(
            &mut fd,
            0x1010,
            OpCode::CPUI_STORE,
            0,
            &[constant, constant, constant],
        );
        attach(&mut fd, block, effect);
    }
    let (branch, _) = operation(&mut fd, 0x1010, OpCode::CPUI_BRANCHIND, 0, &[target]);
    attach(&mut fd, block, branch);
    let (first, _) = operation(&mut fd, 0x1000, OpCode::CPUI_BRANCH, 0, &[constant]);
    attach(&mut fd, p0, first);
    let code = if variant == "conditional" {
        OpCode::CPUI_CBRANCH
    } else {
        OpCode::CPUI_BRANCH
    };
    if variant == "likely" || variant == "internal" {
        let skip = if variant == "likely" {
            fd.new_code_ref(&Address::new(
                fd.get_address().get_space().unwrap().clone(),
                0x1030,
            ))
        } else {
            constant
        };
        operation(&mut fd, 0x1020, OpCode::CPUI_CBRANCH, 0, &[skip, constant]);
    }
    let dispatcher = fd.new_code_ref(&Address::new(
        fd.get_address().get_space().unwrap().clone(),
        0x1010,
    ));
    let (last, _) = operation(&mut fd, 0x1020, code, 0, &[dispatcher]);
    attach(&mut fd, p1, last);
    if variant == "outside-reader" {
        let (reader, _) = operation(&mut fd, 0x1020, OpCode::CPUI_COPY, 8, &[target]);
        attach(&mut fd, p0, reader);
    }
    let site = fd.obank().get(last).unwrap().get_addr().clone();
    if variant == "override" {
        fd.get_override_mut()
            .insert_flow_override(site.clone(), crate::overrides::flow_type::BRANCH);
    }
    let mut jt = JumpTable::new(fd.obank().get(branch).unwrap().get_addr().clone());
    jt.set_indirect_op_addr(branch, fd.obank().get(branch).unwrap().get_addr().clone());
    jt.unlace_set_target_encoding(Some((8, u64::MAX)));
    jt.unlace_set_trivial_model();
    let target = Address::new(
        fd.get_address().get_space().unwrap().clone(),
        if variant == "missing-target" {
            0x1050
        } else {
            0x1040
        },
    );
    jt.unlace_push_entry(target, 0, 0x1040);
    (fd, jt, site)
}
#[test]
fn selector_normalization_preserves_all_operations_and_shared_readers() {
    for variant in [
        "positive",
        "effect",
        "conditional",
        "unknown",
        "override",
        "missing-target",
        "prefix",
        "likely",
        "pure",
        "returned",
        "internal",
        "outside-reader",
    ] {
        let (mut fd, jt, site) = dispatch(variant);
        let branch = jt.get_indirect_op().unwrap();
        let old_root = fd.obank().get(branch).unwrap().get_in(0).unwrap();
        let operations: Vec<_> = fd.obank().iter_alive().collect();
        assert_eq!(
            normalize_return_selector(&mut fd, &jt),
            !matches!(variant, "unknown" | "missing-target"),
            "{variant}"
        );
        assert_eq!(
            fd.get_override().get_flow_override(&site),
            if variant == "override" {
                crate::overrides::flow_type::BRANCH
            } else {
                crate::overrides::flow_type::NONE
            }
        );
        for op in operations {
            assert!(!fd.obank().get(op).unwrap().is_dead());
        }
        if !matches!(variant, "unknown" | "missing-target") {
            let new_root = fd.obank().get(branch).unwrap().get_in(0).unwrap();
            assert_ne!(old_root, new_root);
            let proof = destinations(&fd, new_root, (8, u64::MAX), 128).unwrap();
            assert!(!proof.returns);
            assert_eq!(proof.constants, [0, 0x1040].into_iter().collect());
            assert!(!normalize_return_selector(&mut fd, &jt));
            assert!(
                destinations(&fd, old_root, (8, u64::MAX), 128)
                    .unwrap()
                    .returns
            );
        }
    }
}
#[test]
fn a_reentered_select_admits_the_incoming_return_as_its_last_unlabelled_address() {
    use crate::jumptable::JumpModel;
    for variant in ["return", "unknown", "constants", "not-admitted"] {
        let mut fd = function(8, false);
        let near = fd.new_constant(8, 0x1040);
        let far = fd.new_constant(8, 0x1080);
        let other = match variant {
            "return" | "not-admitted" => input(&mut fd, 0xf8, 8),
            "unknown" => input(&mut fd, 0xf0, 8),
            _ => far,
        };
        let (_, target) = operation(
            &mut fd,
            0x1010,
            OpCode::CPUI_MULTIEQUAL,
            8,
            &[near, far, other],
        );
        let (branch, _) = operation(
            &mut fd,
            0x1010,
            OpCode::CPUI_BRANCHIND,
            0,
            &[target.unwrap()],
        );
        let mut model = crate::constselectjump::JumpModelConstSelect::new();
        if variant != "not-admitted" {
            model.unlace_admit_return(Some((8, u64::MAX)));
        }
        let found = model.recover_model(&mut fd, branch, 0, 64).unwrap();
        assert_eq!(
            found,
            variant == "return" || variant == "constants",
            "{variant}"
        );
        assert_eq!(
            model.unlace_returns_to_caller(),
            variant == "return",
            "{variant}"
        );
        if variant == "return" {
            let mut addresses = Vec::new();
            model
                .build_addresses(&fd, branch, &mut addresses, None, None)
                .unwrap();
            let offsets: Vec<_> = addresses.iter().map(|a| a.get_offset()).collect();
            assert_eq!(offsets, [0x1040, 0x1080, 0x1011]);
            let mut labels = Vec::new();
            model
                .build_labels(&mut fd, &mut addresses, &mut labels, &model.clone())
                .unwrap();
            assert_eq!(labels, [0x1040, 0x1080, crate::jumptable::NO_LABEL]);
            assert_eq!(model.get_table_size(), 3);
        }
    }
}
