use super::*;

#[test]
fn proof_join_allocation_does_not_change_the_original_pool() {
    use unlace_base::space::{AddrSpace, ConstantSpace, VarnodeStorage, addrspace_flags};
    let mut original = AddrSpaceManager::new();
    original
        .insert_space(Rc::new(ConstantSpace::new()))
        .unwrap();
    let register = Rc::new(AddrSpace::new(
        spacetype::IPTR_PROCESSOR,
        "register",
        true,
        4,
        1,
        4,
        addrspace_flags::hasphysical,
        1,
        1,
    ));
    original.insert_space(register.clone()).unwrap();
    original
        .insert_space(Rc::new(JoinSpace::new(5, true)))
        .unwrap();
    original.set_default_code_space(4).unwrap();
    original.set_default_data_space(4).unwrap();
    let pieces = |offset| {
        [
            VarnodeStorage {
                space: Some(register.clone()),
                offset,
                size: 4,
            },
            VarnodeStorage {
                space: Some(register.clone()),
                offset: offset + 4,
                size: 4,
            },
        ]
    };
    let old = original.find_add_join(&pieces(0), 0).unwrap();
    let local = proof_manager(&original).unwrap();
    assert!(Rc::ptr_eq(
        original.get_space_by_name("register").unwrap(),
        local.get_space_by_name("register").unwrap(),
    ));
    let fresh = local.find_add_join(&pieces(8), 0).unwrap();
    let address = |record: &JoinRecord| {
        Address::new(
            record.get_unified().space.as_ref().unwrap().clone(),
            record.get_unified().offset,
        )
    };
    assert_eq!(address(&old).get_offset(), address(&fresh).get_offset());
    assert!(!Rc::ptr_eq(
        address(&old).get_space().unwrap(),
        address(&fresh).get_space().unwrap(),
    ));
    assert_eq!(
        join(&original, &local, &address(&old))
            .unwrap()
            .get_piece(0)
            .offset,
        0
    );
    assert_eq!(
        join(&original, &local, &address(&fresh))
            .unwrap()
            .get_piece(0)
            .offset,
        8
    );
    local.find_add_join(&pieces(16), 0).unwrap();
    assert!(original.find_join(16).is_err());
    drop(local);
    assert!(Rc::ptr_eq(&old, &original.find_join(0).unwrap()));
    let next = original.find_add_join(&pieces(24), 0).unwrap();
    assert_eq!(next.get_unified().offset, 16);
}

fn mode_bundle() -> (Collect, VarnodeData, VarnodeData, VarnodeData) {
    use unlace_base::space::{AddrSpace, ConstantSpace, UniqueSpace, addrspace_flags};
    let register = Rc::new(AddrSpace::new(
        spacetype::IPTR_PROCESSOR,
        "register",
        true,
        4,
        1,
        4,
        addrspace_flags::hasphysical,
        1,
        1,
    ));
    let unique: Rc<unlace_base::space::AddrSpace> = Rc::new(UniqueSpace::new(2, 0, true));
    let constants: Rc<unlace_base::space::AddrSpace> = Rc::new(ConstantSpace::new());
    let vn = |space: &Rc<unlace_base::space::AddrSpace>, offset, size| VarnodeData {
        space: Some(space.clone()),
        offset,
        size,
    };
    let ra = vn(&register, 124, 4);
    let pc = vn(&register, 128, 4);
    let mode = vn(&register, 0x3f00, 1);
    let bit = vn(&unique, 0x1900, 4);
    let target = vn(&unique, 0x1c00, 4);
    let ops = Collect(vec![
        (
            OpCode::CPUI_INT_AND,
            Some(bit.clone()),
            vec![ra.clone(), vn(&constants, 1, 4)],
        ),
        (
            OpCode::CPUI_INT_NOTEQUAL,
            Some(mode.clone()),
            vec![bit, vn(&constants, 0, 4)],
        ),
        (
            OpCode::CPUI_CALLOTHER,
            None,
            vec![vn(&constants, 0, 4), mode.clone()],
        ),
        (
            OpCode::CPUI_INT_2COMP,
            Some(target.clone()),
            vec![vn(&constants, 2, 4)],
        ),
        (
            OpCode::CPUI_INT_AND,
            Some(target.clone()),
            vec![target.clone(), ra.clone()],
        ),
        (OpCode::CPUI_COPY, Some(pc.clone()), vec![target]),
        (
            OpCode::CPUI_INT_ADD,
            Some(vn(&register, 8, 4)),
            vec![vn(&register, 32, 4), vn(&register, 8, 4)],
        ),
        (OpCode::CPUI_RETURN, None, vec![pc.clone()]),
    ]);
    (ops, ra, pc, mode)
}

#[test]
fn return_mode_requires_the_exact_switch_dependency_and_only_one_userop() {
    let (ops, ra, pc, mode) = mode_bundle();
    assert!(return_mode(&ops, &ra, &pc, &mode, 0));
    assert!(!return_mode(&ops, &ra, &pc, &mode, 1));
    for mutation in 0..13 {
        let (mut ops, ra, pc, mut mode) = mode_bundle();
        match mutation {
            0 => ops.0[2].2[1].offset += 1,
            1 => ops.0[2].2[1].size = 4,
            2 => ops.0[2].2.push(ra.clone()),
            3 => ops.0[2].1 = Some(mode.clone()),
            4 => ops.0[1].2[0].offset += 4,
            5 => ops.0[0].2[1].offset = 3,
            6 => ops.0.swap(0, 1),
            7 => ops.0.insert(3, (OpCode::CPUI_CALLOTHER, None, vec![])),
            8 => mode.offset += 1,
            9 => ops.0[3].2[0].offset = 1,
            10 => ops.0[4].2[1].offset = 16,
            11 => ops.0[5].1.as_mut().unwrap().offset = 16,
            _ => ops.0.last_mut().unwrap().2[0].offset = 16,
        }
        assert!(
            !return_mode(&ops, &ra, &pc, &mode, 0),
            "mutation {mutation}"
        );
    }
}

#[test]
fn a_wide_bool_is_not_an_eight_byte_integer_formal() {
    assert_eq!(integer_width(type_metatype::TYPE_BOOL, 8), None);
    assert_eq!(integer_width(type_metatype::TYPE_BOOL, 4), None);
    assert_eq!(integer_width(type_metatype::TYPE_BOOL, 1), Some(1));
    assert_eq!(integer_width(type_metatype::TYPE_INT, 8), Some(8));
    assert_eq!(integer_width(type_metatype::TYPE_UINT, 8), Some(8));
}

#[test]
fn exhausted_budget_cannot_resume_from_a_partial_prefix() {
    let mut budget = Budget(7);
    assert_eq!(budget.spend(4), Some(()));
    assert_eq!(budget.spend(4), None);
    assert_eq!(budget.0, 0);
    assert_eq!(budget.spend(1), None);
}
