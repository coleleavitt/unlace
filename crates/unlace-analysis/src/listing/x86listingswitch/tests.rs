use unlace_base::space::spacetype;

use super::*;

struct Spaces {
    reg: Rc<AddrSpace>,
    tmp: Rc<AddrSpace>,
    constant: Rc<AddrSpace>,
    ram: Rc<AddrSpace>,
}

impl Spaces {
    fn new() -> Self {
        Self {
            reg: Rc::new(AddrSpace::new_for_decode(spacetype::IPTR_PROCESSOR)),
            tmp: Rc::new(AddrSpace::new_for_decode(spacetype::IPTR_INTERNAL)),
            constant: Rc::new(AddrSpace::new_for_decode(spacetype::IPTR_CONSTANT)),
            ram: Rc::new(AddrSpace::new_for_decode(spacetype::IPTR_PROCESSOR)),
        }
    }

    fn vn(&self, space: &Rc<AddrSpace>, offset: u64, size: u32) -> VarnodeData {
        VarnodeData {
            space: Some(space.clone()),
            offset,
            size,
        }
    }

    fn path(&self, compared_register: u64, width: u32, signed: bool) -> Vec<Decoded> {
        let reg = |off, size| self.vn(&self.reg, off, size);
        let tmp = |off, size| self.vn(&self.tmp, off, size);
        let c = |value, size| self.vn(&self.constant, value, size);
        vec![
            Decoded {
                at: 0x1009,
                len: 7,
                ops: vec![
                    op(
                        OpCode::CPUI_INT_MULT,
                        Some(tmp(0x100, 4)),
                        vec![reg(0, 4), c(4, 4)],
                    ),
                    op(
                        OpCode::CPUI_INT_ADD,
                        Some(tmp(0x104, 4)),
                        vec![c(0x2000, 4), tmp(0x100, 4)],
                    ),
                    op(
                        OpCode::CPUI_LOAD,
                        Some(tmp(0x108, 4)),
                        vec![c(self.ram.get_index() as u64, 8), tmp(0x104, 4)],
                    ),
                    op(OpCode::CPUI_BRANCHIND, None, vec![tmp(0x108, 4)]),
                ],
            },
            Decoded {
                at: 0x1007,
                len: 2,
                ops: vec![
                    op(
                        OpCode::CPUI_BOOL_OR,
                        Some(tmp(0x100, 1)),
                        vec![reg(0x200, 1), reg(0x206, 1)],
                    ),
                    op(
                        OpCode::CPUI_BOOL_NEGATE,
                        Some(tmp(0x101, 1)),
                        vec![tmp(0x100, 1)],
                    ),
                    op(
                        OpCode::CPUI_CBRANCH,
                        None,
                        vec![self.vn(&self.ram, 0x1100, 4), tmp(0x101, 1)],
                    ),
                ],
            },
            Decoded {
                at: 0x1004,
                len: 3,
                ops: vec![
                    op(
                        if signed {
                            OpCode::CPUI_INT_SLESS
                        } else {
                            OpCode::CPUI_INT_LESS
                        },
                        Some(reg(0x200, 1)),
                        vec![reg(compared_register, width), c(3, width)],
                    ),
                    op(
                        OpCode::CPUI_INT_SUB,
                        Some(tmp(0x100, width)),
                        vec![reg(compared_register, width), c(3, width)],
                    ),
                    op(
                        OpCode::CPUI_INT_EQUAL,
                        Some(reg(0x206, 1)),
                        vec![tmp(0x100, width), c(0, width)],
                    ),
                ],
            },
        ]
    }
}

fn op(opcode: OpCode, out: Option<VarnodeData>, ins: Vec<VarnodeData>) -> FullOp {
    FullOp { opcode, out, ins }
}

fn empty_state() -> WalkState {
    WalkState {
        insns: Default::default(),
        refs: Vec::new(),
        funcs: BTreeMap::new(),
        stack_callback_refs: BTreeMap::new(),
        mode_runs: Vec::new(),
    }
}

#[test]
fn cmp_ja_proves_the_loaded_index_despite_wrapped_flag_subtraction() {
    let spaces = Spaces::new();
    let (table, lo, hi) =
        prove_path(&spaces.path(0, 4, false), 0x1007, &spaces.ram, &spaces.ram).unwrap();
    let Table::Direct(address) = table else {
        panic!("a one-level table");
    };
    assert_eq!((lo, hi), (0, 3));
    assert_eq!(address.value.at(lo), Some(0x2000));
    assert!(address.without_wrap(lo, hi));
    for (register, width, signed) in [(4, 4, false), (0, 1, false), (0, 4, true)] {
        assert!(
            prove_path(
                &spaces.path(register, width, signed),
                0x1007,
                &spaces.ram,
                &spaces.ram
            )
            .is_none()
        );
    }
}

#[test]
fn partial_register_writes_and_instruction_local_temporaries_do_not_carry_a_proof() {
    let spaces = Spaces::new();
    for (offset, width) in [(0, 1), (1, 1), (0, 2)] {
        let mut path = spaces.path(0, 4, false);
        path.insert(
            1,
            Decoded {
                at: 0x1008,
                len: 1,
                ops: vec![op(
                    OpCode::CPUI_COPY,
                    Some(spaces.vn(&spaces.reg, offset, width)),
                    vec![spaces.vn(&spaces.constant, 0, width)],
                )],
            },
        );
        assert!(prove_path(&path, 0x1007, &spaces.ram, &spaces.ram).is_none());
    }
    let mut path = spaces.path(0, 4, false);
    path[2].ops[0].out = Some(spaces.vn(&spaces.tmp, 0x200, 1));
    path[1].ops[0].ins[0] = spaces.vn(&spaces.tmp, 0x200, 1);
    assert!(prove_path(&path, 0x1007, &spaces.ram, &spaces.ram).is_none());
}

#[test]
fn normalized_bounds_keep_machine_width_and_address_wrap_obligations() {
    let root = Key::Reg(0, 4);
    let mut proof = Proof::new();
    let normalized = Affine::root(root).shifted(-5).unwrap();
    let condition = proof.push(Condition::Compare(normalized.value, 3, Comparison::Greater));
    assert_eq!(proof.interval(condition, root), Some((5, 8)));
    let address = normalized.scaled(4).unwrap().shifted(0x2000).unwrap();
    assert!(address.without_wrap(5, 8));
    assert!(!address.without_wrap(0, 8));
    let wrapped = Affine::root(root)
        .scaled(4)
        .unwrap()
        .shifted(i128::from(u32::MAX) - 3)
        .unwrap();
    assert!(!wrapped.without_wrap(0, 3));
    let split = proof.push(Condition::Compare(
        Affine::root(root).shifted(3).unwrap().value,
        3,
        Comparison::Greater,
    ));
    assert_eq!(proof.interval(split, root), None);
}

#[test]
fn repeated_boolean_inputs_share_bounded_proof_work() {
    let root = Key::Reg(0, 4);
    let mut proof = Proof::new();
    let mut condition = proof.push(Condition::Compare(
        Affine::root(root).value,
        3,
        Comparison::Greater,
    ));
    for _ in 0..128 {
        condition = proof.push(Condition::And(condition, condition));
    }
    assert_eq!(proof.interval(condition, root), Some((0, 3)));
}

#[test]
fn a_two_level_table_reads_pointers_up_to_the_largest_index_byte() {
    let spaces = Spaces::new();
    let pointers: Vec<u8> = [0x1010u32, 0x1020, 0x1030]
        .into_iter()
        .flat_map(u32::to_le_bytes)
        .collect();
    let index = [0u8, 2, 1, 2, 0];
    let tables = X86Tables {
        pool: PoolImage::from_ranges(
            vec![
                (0x2000, 0x200c, &pointers[..]),
                (0x3000, 0x3005, &index[..]),
            ],
            4,
            true,
        )
        .unwrap(),
        data_space: spaces.ram,
        exec: vec![(0x1000, 0x1100)],
        max_entries: 64,
    };
    let bytes = Affine::root(Key::Reg(0, 4)).shifted(0x3000).unwrap();
    assert_eq!(
        tables
            .read_two_level(
                0x1009,
                (bytes.clone(), 4, 0x2000),
                (0, 4),
                &empty_state(),
                64
            )
            .and_then(Result::ok),
        Some(vec![0x1010, 0x1020, 0x1030])
    );
    assert!(
        tables
            .read_two_level(0x1009, (bytes, 4, 0x2000), (0, 5), &empty_state(), 64)
            .is_none()
    );
}

#[test]
fn an_invalid_in_bound_word_cannot_shorten_the_proved_table() {
    let spaces = Spaces::new();
    let bytes: Vec<_> = [0x1010u32, 0x1020, 0xdead, 0x1040, 0x1050]
        .into_iter()
        .flat_map(u32::to_le_bytes)
        .collect();
    let mut tables = X86Tables {
        pool: PoolImage::from_ranges(vec![(0x2000, 0x2014, &bytes)], 4, true).unwrap(),
        data_space: spaces.ram,
        exec: vec![(0x1000, 0x1100)],
        max_entries: 4,
    };
    let address = Affine::root(Key::Reg(0, 4))
        .scaled(4)
        .unwrap()
        .shifted(0x2000)
        .unwrap();
    assert!(
        tables
            .read(0x1009, address.clone(), 0, 3, &empty_state())
            .is_none()
    );
    tables.max_entries = 2;
    assert_eq!(
        tables.read(0x1009, address, 0, 3, &empty_state()),
        Some(vec![0x1010, 0x1020])
    );
}

#[test]
fn repeated_cases_preserve_the_bound_and_do_not_consume_the_adjacent_callback() {
    let spaces = Spaces::new();
    let bytes: Vec<_> = [0x1010u32, 0x1020, 0x1010, 0x1040, 0x1050]
        .into_iter()
        .flat_map(u32::to_le_bytes)
        .collect();
    let tables = X86Tables {
        pool: PoolImage::from_ranges(vec![(0x2000, 0x2014, &bytes)], 4, true).unwrap(),
        data_space: spaces.ram,
        exec: vec![(0x1000, 0x1100)],
        max_entries: 1024,
    };
    let address = Affine::root(Key::Reg(0, 4))
        .scaled(4)
        .unwrap()
        .shifted(0x2000)
        .unwrap();
    let mut state = empty_state();
    state.funcs.insert(
        0x1050,
        super::super::model::DiscoveredFunction {
            entry: 0x1050,
            name: Some("independent".into()),
            from_symbol: true,
            has_no_return: false,
            call_fixup: None,
        },
    );
    assert_eq!(
        tables.read(0x1009, address.clone(), 0, 3, &state),
        Some(vec![0x1010, 0x1020, 0x1010, 0x1040])
    );
    state.funcs.insert(
        0x1020,
        super::super::model::DiscoveredFunction {
            entry: 0x1020,
            name: None,
            from_symbol: false,
            has_no_return: false,
            call_fixup: None,
        },
    );
    assert!(tables.read(0x1009, address, 0, 3, &state).is_none());
}

#[test]
fn the_declared_pool_range_must_contain_every_byte_of_the_table() {
    let spaces = Spaces::new();
    let bytes: Vec<_> = [0x1010u32, 0x1020, 0x1030, 0x1040]
        .into_iter()
        .flat_map(u32::to_le_bytes)
        .collect();
    let tables = X86Tables {
        pool: PoolImage::from_ranges(vec![(0x2000, 0x200f, &bytes)], 4, true).unwrap(),
        data_space: spaces.ram,
        exec: vec![(0x1000, 0x1100)],
        max_entries: 1024,
    };
    let address = Affine::root(Key::Reg(0, 4))
        .scaled(4)
        .unwrap()
        .shifted(0x2000)
        .unwrap();
    assert!(tables.read(0x1009, address, 0, 3, &empty_state()).is_none());
}

#[test]
fn incoming_and_table_rows_refuse_before_exhausting_the_aggregate_budget() {
    let state = empty_state();
    let admitted = BTreeMap::from([(0x1009, vec![0x1010, 0x1020, 0x1030, 0x1040])]);
    assert!(incoming_edges(&state, &admitted, &mut ProofBudget(3)).is_none());
    assert_eq!(
        incoming_edges(&state, &admitted, &mut ProofBudget(4))
            .unwrap()
            .len(),
        4
    );
    let spaces = Spaces::new();
    let bytes: Vec<_> = [0x1010u32, 0x1020, 0x1030, 0x1040]
        .into_iter()
        .flat_map(u32::to_le_bytes)
        .collect();
    let tables = X86Tables {
        pool: PoolImage::from_ranges(vec![(0x2000, 0x2010, &bytes)], 4, true).unwrap(),
        data_space: spaces.ram,
        exec: vec![(0x1000, 0x1100)],
        max_entries: 1024,
    };
    let address = Affine::root(Key::Reg(0, 4))
        .scaled(4)
        .unwrap()
        .shifted(0x2000)
        .unwrap();
    assert_eq!(
        tables.read_bounded(0x1009, address, 0, 3, &state, 3),
        Some(Err(()))
    );
}

#[test]
fn retained_edges_remain_budgeted_without_host_resident_measurements() {
    let state = empty_state();
    let budget = CandidateBudget {
        original_insns: 0,
        initial_bytes: 0,
        resident: None,
        limit: 1024,
    };
    assert!(budget.allows(&state, 4));
    assert!(!budget.allows(&state, 5));
    assert_eq!(budget.records(&state, 3), 1);
}
