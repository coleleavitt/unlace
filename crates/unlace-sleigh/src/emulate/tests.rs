use super::test_support::*;
use super::*;
use crate::memstate::{MemoryBank, MemoryHashOverlay, MemoryImage, MemoryPageOverlay};

/// Test environment: manager/translator/memory state wired like the
/// emulate.hh documentation example (page overlay over a load image for
/// ram, hash overlays for registers and temporaries).
struct Env {
    memstate: Rc<RefCell<MemoryState>>,
    breaktable: Rc<RefCell<BreakTableCallBack>>,
    emulator: EmulatePcodeCache,
    ram: Rc<AddrSpace>,
}

fn build_env(
    make_program: impl FnOnce(&AddrSpaceManager) -> BTreeMap<u64, (i32, Vec<TestOp>)>,
    userops: Vec<String>,
) -> Env {
    let manager = Rc::new(test_manager(false));
    let program = make_program(&manager);
    let trans: Rc<dyn Translate> = Rc::new(TestTranslator::new(&manager, program, userops));
    let ram = Rc::clone(manager.get_space_by_name("ram").unwrap());
    let register = Rc::clone(manager.get_space_by_name("register").unwrap());
    let unique = Rc::clone(manager.get_space_by_name("unique").unwrap());

    let loader = Rc::new(RefCell::new(TestLoader {
        start: 0x2000,
        bytes: vec![0x11, 0x22, 0x33, 0x44, 0x55, 0x66, 0x77, 0x88],
    }));
    let image: Rc<RefCell<dyn MemoryBank>> = Rc::new(RefCell::new(MemoryImage::new(
        Rc::clone(&ram),
        8,
        64,
        loader,
    )));
    let ramstate: Rc<RefCell<dyn MemoryBank>> = Rc::new(RefCell::new(MemoryPageOverlay::new(
        Rc::clone(&ram),
        8,
        64,
        Some(image),
    )));
    let registerstate: Rc<RefCell<dyn MemoryBank>> = Rc::new(RefCell::new(MemoryHashOverlay::new(
        Rc::clone(&register),
        8,
        64,
        64,
        None,
    )));
    let uniquestate: Rc<RefCell<dyn MemoryBank>> = Rc::new(RefCell::new(MemoryHashOverlay::new(
        Rc::clone(&unique),
        8,
        64,
        64,
        None,
    )));

    let mut state = MemoryState::new(Rc::clone(&trans));
    state.set_memory_bank(ramstate);
    state.set_memory_bank(registerstate);
    state.set_memory_bank(uniquestate);
    let memstate = Rc::new(RefCell::new(state));

    let breaktable = Rc::new(RefCell::new(BreakTableCallBack::new(Rc::clone(&trans))));
    let bt_dyn: Rc<RefCell<dyn BreakTable>> = breaktable.clone();
    let emulator = EmulatePcodeCache::new(
        Rc::clone(&trans),
        Rc::clone(&manager),
        Rc::clone(&memstate),
        bt_dyn,
    );

    Env {
        memstate,
        breaktable,
        emulator,
        ram,
    }
}

/// The synthetic program (little endian, all instructions 4 bytes):
///
/// ```text
/// 0x1000: r0 = COPY 5
/// 0x1004: r1 = COPY 7
/// 0x1008: r0 = INT_ADD r0, r1
/// 0x100c: u0 = INT_EQUAL r0, 12 ; CBRANCH +2, u0 ; r5 = COPY 0xdead
/// 0x1010: r2 = LOAD ram[0x2000]
/// 0x1014: STORE ram[0x3000] = r0
/// 0x1018: BRANCH 0x1020
/// 0x1020: CALLOTHER userop#0 ("double_r0")
/// 0x1024: r4 = COPY 0x1100
/// 0x1028: RETURN r4
/// 0x1100: r1 = COPY r1   (translation pad; never executed)
/// ```
fn build_program(manager: &AddrSpaceManager) -> BTreeMap<u64, (i32, Vec<TestOp>)> {
    let mut prog = BTreeMap::new();
    prog.insert(
        0x1000,
        (
            4,
            vec![TestOp {
                opc: OpCode::CPUI_COPY,
                out: Some(reg(manager, 0)),
                ins: vec![cst(manager, 5, 8)],
            }],
        ),
    );
    prog.insert(
        0x1004,
        (
            4,
            vec![TestOp {
                opc: OpCode::CPUI_COPY,
                out: Some(reg(manager, 1)),
                ins: vec![cst(manager, 7, 8)],
            }],
        ),
    );
    prog.insert(
        0x1008,
        (
            4,
            vec![TestOp {
                opc: OpCode::CPUI_INT_ADD,
                out: Some(reg(manager, 0)),
                ins: vec![reg(manager, 0), reg(manager, 1)],
            }],
        ),
    );
    prog.insert(
        0x100c,
        (
            4,
            vec![
                TestOp {
                    opc: OpCode::CPUI_INT_EQUAL,
                    out: Some(uvn(manager, 0x100, 1)),
                    ins: vec![reg(manager, 0), cst(manager, 12, 8)],
                },
                TestOp {
                    opc: OpCode::CPUI_CBRANCH,
                    out: None,
                    ins: vec![cst(manager, 2, 8), uvn(manager, 0x100, 1)],
                },
                TestOp {
                    opc: OpCode::CPUI_COPY,
                    out: Some(reg(manager, 5)),
                    ins: vec![cst(manager, 0xdead, 8)],
                },
            ],
        ),
    );
    prog.insert(
        0x1010,
        (
            4,
            vec![TestOp {
                opc: OpCode::CPUI_LOAD,
                out: Some(reg(manager, 2)),
                ins: vec![spaceid_vn(manager, "ram"), cst(manager, 0x2000, 8)],
            }],
        ),
    );
    prog.insert(
        0x1014,
        (
            4,
            vec![TestOp {
                opc: OpCode::CPUI_STORE,
                out: None,
                ins: vec![
                    spaceid_vn(manager, "ram"),
                    cst(manager, 0x3000, 8),
                    reg(manager, 0),
                ],
            }],
        ),
    );
    prog.insert(
        0x1018,
        (
            4,
            vec![TestOp {
                opc: OpCode::CPUI_BRANCH,
                out: None,
                ins: vec![ram_vn(manager, 0x1020, 8)],
            }],
        ),
    );
    prog.insert(
        0x1020,
        (
            4,
            vec![TestOp {
                opc: OpCode::CPUI_CALLOTHER,
                out: None,
                ins: vec![cst(manager, 0, 8)],
            }],
        ),
    );
    prog.insert(
        0x1024,
        (
            4,
            vec![TestOp {
                opc: OpCode::CPUI_COPY,
                out: Some(reg(manager, 4)),
                ins: vec![cst(manager, 0x1100, 8)],
            }],
        ),
    );
    prog.insert(
        0x1028,
        (
            4,
            vec![TestOp {
                opc: OpCode::CPUI_RETURN,
                out: None,
                ins: vec![reg(manager, 4)],
            }],
        ),
    );
    prog.insert(
        0x1100,
        (
            4,
            vec![TestOp {
                opc: OpCode::CPUI_COPY,
                out: Some(reg(manager, 1)),
                ins: vec![reg(manager, 1)],
            }],
        ),
    );
    prog
}

/// Userop breakpoint: r3 = 2 * r0, replacing the CALLOTHER.
struct DoubleR0;

impl BreakCallBack for DoubleR0 {
    fn pcode_callback(
        &mut self,
        emulate: &mut dyn EmulateMemory,
        _op: &PcodeOpRaw,
    ) -> UnlaceResult<bool> {
        let mem = Rc::clone(emulate.get_memory_state());
        let r0 = mem.borrow().get_value_by_name("r0")?;
        mem.borrow_mut().set_value_by_name("r3", 2 * r0)?;
        Ok(true)
    }
}

/// Address breakpoint replacing the instruction at its address: sets
/// r1 = 100 and continues at 0x1008 (the emulate.hh `puts` pattern).
struct SkipAndSetR1;

impl BreakCallBack for SkipAndSetR1 {
    fn address_callback(
        &mut self,
        emulate: &mut dyn EmulateMemory,
        addr: &Address,
    ) -> UnlaceResult<bool> {
        let mem = Rc::clone(emulate.get_memory_state());
        mem.borrow_mut().set_value_by_name("r1", 100)?;
        let spc = Rc::clone(addr.get_space().unwrap());
        emulate.set_execute_address(&Address::new(spc, 0x1008))?;
        Ok(true) // This replaces the indicated instruction
    }
}

fn run_to(env: &mut Env, stop: u64) {
    let mut steps = 0;
    while env.emulator.get_execute_address().get_offset() != stop {
        env.emulator.execute_instruction().unwrap();
        steps += 1;
        assert!(steps < 100, "runaway emulation");
    }
}

#[test]
fn test_emulate_pcodecache_program() {
    let mut env = build_env(build_program, vec!["double_r0".to_string()]);
    env.breaktable
        .borrow_mut()
        .register_pcode_callback("double_r0", Rc::new(RefCell::new(DoubleR0)))
        .unwrap();

    env.emulator
        .set_execute_address(&Address::new(Rc::clone(&env.ram), 0x1000))
        .unwrap();
    assert!(env.emulator.is_instruction_start());
    run_to(&mut env, 0x1100);

    // hand-derived end state from the C++ semantics
    let mem = env.memstate.borrow();
    assert_eq!(mem.get_value_by_name("r0").unwrap(), 12);
    assert_eq!(mem.get_value_by_name("r1").unwrap(), 7);
    assert_eq!(mem.get_value_by_name("r2").unwrap(), 0x8877665544332211);
    assert_eq!(mem.get_value_by_name("r3").unwrap(), 24);
    assert_eq!(mem.get_value_by_name("r4").unwrap(), 0x1100);
    // the CBRANCH (r0 == 12) skipped the r5 write
    assert_eq!(mem.get_value_by_name("r5").unwrap(), 0);
    // the STORE landed in ram (little-endian bytes)
    assert_eq!(mem.get_value(&env.ram, 0x3000, 8).unwrap(), 12);
    let mut bytes = [0u8; 8];
    mem.get_chunk(&mut bytes, &env.ram, 0x3000).unwrap();
    assert_eq!(bytes, [12, 0, 0, 0, 0, 0, 0, 0]);
    // the LOAD source is still the load-image data
    assert_eq!(
        mem.get_value(&env.ram, 0x2000, 8).unwrap(),
        0x8877665544332211
    );
}

#[test]
fn test_emulate_pcodecache_address_breakpoint() {
    let mut env = build_env(build_program, vec!["double_r0".to_string()]);
    env.breaktable
        .borrow_mut()
        .register_pcode_callback("double_r0", Rc::new(RefCell::new(DoubleR0)))
        .unwrap();
    env.breaktable.borrow_mut().register_address_callback(
        &Address::new(Rc::clone(&env.ram), 0x1004),
        Rc::new(RefCell::new(SkipAndSetR1)),
    );

    env.emulator
        .set_execute_address(&Address::new(Rc::clone(&env.ram), 0x1000))
        .unwrap();
    run_to(&mut env, 0x1100);

    // breakpoint variant: r1 = 100 (callback), r0 = 5 + 100, the
    // CBRANCH is NOT taken (105 != 12) so r5 = 0xdead executes
    let mem = env.memstate.borrow();
    assert_eq!(mem.get_value_by_name("r0").unwrap(), 105);
    assert_eq!(mem.get_value_by_name("r1").unwrap(), 100);
    assert_eq!(mem.get_value_by_name("r3").unwrap(), 210);
    assert_eq!(mem.get_value_by_name("r5").unwrap(), 0xdead);
    assert_eq!(mem.get_value(&env.ram, 0x3000, 8).unwrap(), 105);
}

#[test]
fn test_emulate_pcodecache_single_step() {
    let mut env = build_env(build_program, Vec::new());

    // position on the 3-op instruction and inspect the cache
    env.emulator
        .set_execute_address(&Address::new(Rc::clone(&env.ram), 0x100c))
        .unwrap();
    // r0 is 0 (unwritten): INT_EQUAL is false, CBRANCH falls through
    assert!(env.emulator.is_instruction_start());
    assert_eq!(env.emulator.num_current_ops(), 3);
    assert_eq!(env.emulator.get_current_op_index(), 0);
    assert_eq!(
        env.emulator.get_op_by_index(0).get_opcode(),
        OpCode::CPUI_INT_EQUAL
    );
    assert_eq!(
        env.emulator.get_op_by_index(1).get_opcode(),
        OpCode::CPUI_CBRANCH
    );
    assert_eq!(
        env.emulator.get_op_by_index(2).get_opcode(),
        OpCode::CPUI_COPY
    );

    env.emulator.execute_current_op().unwrap();
    assert!(!env.emulator.is_instruction_start());
    assert_eq!(env.emulator.get_current_op_index(), 1);
    env.emulator.execute_current_op().unwrap(); // CBRANCH false: fallthru
    assert_eq!(env.emulator.get_current_op_index(), 2);
    env.emulator.execute_current_op().unwrap(); // r5 = 0xdead, next instr
    assert!(env.emulator.is_instruction_start());
    assert_eq!(env.emulator.get_execute_address().get_offset(), 0x1010);
    assert_eq!(
        env.memstate.borrow().get_value_by_name("r5").unwrap(),
        0xdead
    );

    // halt flag is application-controlled state only
    assert!(env.emulator.get_halt());
    env.emulator.set_halt(false);
    assert!(!env.emulator.get_halt());
}

#[test]
fn test_emulate_pcodecache_errors() {
    let make_program = |manager: &AddrSpaceManager| {
        let mut prog = BTreeMap::new();
        // 0x1000: BRANCH +5 (out of bounds: 1 op in the cache)
        prog.insert(
            0x1000,
            (
                4,
                vec![TestOp {
                    opc: OpCode::CPUI_BRANCH,
                    out: None,
                    ins: vec![cst(manager, 5, 8)],
                }],
            ),
        );
        // 0x1004: BRANCH with a relative offset that truncates to -1
        prog.insert(
            0x1004,
            (
                4,
                vec![TestOp {
                    opc: OpCode::CPUI_BRANCH,
                    out: None,
                    ins: vec![cst(manager, u64::MAX, 8)],
                }],
            ),
        );
        // 0x1008: CALLOTHER userop#0 with nothing registered
        prog.insert(
            0x1008,
            (
                4,
                vec![TestOp {
                    opc: OpCode::CPUI_CALLOTHER,
                    out: None,
                    ins: vec![cst(manager, 0, 8)],
                }],
            ),
        );
        prog
    };
    let mut env = build_env(make_program, vec!["nothooked".to_string()]);

    env.emulator
        .set_execute_address(&Address::new(Rc::clone(&env.ram), 0x1000))
        .unwrap();
    assert_eq!(
        env.emulator.execute_instruction().unwrap_err().explain(),
        "Bad intra-instruction branch"
    );
    env.emulator
        .set_execute_address(&Address::new(Rc::clone(&env.ram), 0x1004))
        .unwrap();
    assert_eq!(
        env.emulator.execute_instruction().unwrap_err().explain(),
        "Bad intra-instruction branch"
    );
    env.emulator
        .set_execute_address(&Address::new(Rc::clone(&env.ram), 0x1008))
        .unwrap();
    assert_eq!(
        env.emulator.execute_instruction().unwrap_err().explain(),
        "Userop not hooked"
    );

    // translating an unmapped address errs out of set_execute_address
    assert!(
        env.emulator
            .set_execute_address(&Address::new(Rc::clone(&env.ram), 0x9999))
            .is_err()
    );

    // registering against an unknown userop name
    assert_eq!(
        env.breaktable
            .borrow_mut()
            .register_pcode_callback("bogus", Rc::new(RefCell::new(DoubleR0)))
            .unwrap_err()
            .explain(),
        "Bad userop name: bogus"
    );
}
