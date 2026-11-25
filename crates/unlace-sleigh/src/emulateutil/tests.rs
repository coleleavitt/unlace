use super::*;
use crate::emulate::TranslateFloatFormats;
use crate::emulate::test_support::{
    TestLoader, TestTranslator, cst, ram_vn, reg, spaceid_vn, test_manager, uvn,
};
use crate::translate::{PcodeEmit, Translate};
use unlace_num::opbehavior::{FloatFormatProvider, register_instructions};

/// Coerce the concrete test loader handle to the trait-object handle.
fn dyn_loader(l: &Rc<RefCell<TestLoader>>) -> Rc<RefCell<dyn LoadImage>> {
    let coerced: Rc<RefCell<dyn LoadImage>> = l.clone();
    coerced
}

struct SnippetEnv {
    manager: Rc<AddrSpaceManager>,
    loader: Rc<RefCell<TestLoader>>,
    inst: Vec<Option<Rc<dyn OpBehavior>>>,
    ram: Rc<AddrSpace>,
}

fn build_snippet_env() -> SnippetEnv {
    let manager = Rc::new(test_manager(false));
    let trans: Rc<dyn Translate> =
        Rc::new(TestTranslator::new(&manager, BTreeMap::new(), Vec::new()));
    let loader = Rc::new(RefCell::new(TestLoader {
        start: 0x2000,
        bytes: vec![0x11, 0x22, 0x33, 0x44, 0x55, 0x66, 0x77, 0x88],
    }));
    let mut inst: Vec<Option<Rc<dyn OpBehavior>>> = Vec::new();
    let provider: Rc<dyn FloatFormatProvider> = Rc::new(TranslateFloatFormats(trans));
    register_instructions(&mut inst, &provider);
    let ram = Rc::clone(manager.get_space_by_name("ram").unwrap());
    SnippetEnv {
        manager,
        loader,
        inst,
        ram,
    }
}

fn run(snippet: &mut EmulateSnippet) -> UnlaceResult<()> {
    snippet.reset_memory();
    let mut steps = 0;
    while !snippet.get_halt() {
        snippet.execute_current_op()?;
        steps += 1;
        assert!(steps < 100, "runaway snippet");
    }
    Ok(())
}

/// The snippet (temporaries in the unique space at 0x80..):
///
/// ```text
/// 0: u80 = COPY 4
/// 1: u88 = INT_MULT u80, 3        -> 12
/// 2: u90 = LOAD ram[0x2000]       -> 0x8877665544332211
/// 3: u98 = INT_ADD u88, u90       -> 0x887766554433221d
/// 4: CBRANCH +2, 1                -> skips op 5
/// 5: u98 = COPY 0                  (skipped)
/// 6: ua0 = INT_SUB u98, 1         -> 0x887766554433221c
/// ```
fn build_arith_snippet(env: &SnippetEnv) -> EmulateSnippet {
    let mut snippet = EmulateSnippet::new(dyn_loader(&env.loader), Rc::clone(&env.manager));
    let addr = Address::new(Rc::clone(&env.ram), 0x1000);
    let m = &env.manager;
    {
        let mut emit = snippet.build_emitter(&env.inst, 0x200);
        emit.dump(
            &addr,
            OpCode::CPUI_COPY,
            Some(&uvn(m, 0x80, 8)),
            &[cst(m, 4, 8)],
        );
        emit.dump(
            &addr,
            OpCode::CPUI_INT_MULT,
            Some(&uvn(m, 0x88, 8)),
            &[uvn(m, 0x80, 8), cst(m, 3, 8)],
        );
        emit.dump(
            &addr,
            OpCode::CPUI_LOAD,
            Some(&uvn(m, 0x90, 8)),
            &[spaceid_vn(m, "ram"), cst(m, 0x2000, 8)],
        );
        emit.dump(
            &addr,
            OpCode::CPUI_INT_ADD,
            Some(&uvn(m, 0x98, 8)),
            &[uvn(m, 0x88, 8), uvn(m, 0x90, 8)],
        );
        emit.dump(
            &addr,
            OpCode::CPUI_CBRANCH,
            None,
            &[cst(m, 2, 8), cst(m, 1, 1)],
        );
        emit.dump(
            &addr,
            OpCode::CPUI_COPY,
            Some(&uvn(m, 0x98, 8)),
            &[cst(m, 0, 8)],
        );
        emit.dump(
            &addr,
            OpCode::CPUI_INT_SUB,
            Some(&uvn(m, 0xa0, 8)),
            &[uvn(m, 0x98, 8), cst(m, 1, 8)],
        );
    }
    snippet
}

#[test]
fn test_emulateutil_snippet_execution() {
    let env = build_snippet_env();
    let mut snippet = build_arith_snippet(&env);
    assert!(snippet.check_for_legal_code());

    run(&mut snippet).unwrap();
    assert_eq!(snippet.get_temp_value(0x80), 4);
    assert_eq!(snippet.get_temp_value(0x88), 12);
    assert_eq!(snippet.get_temp_value(0x90), 0x8877665544332211);
    // the CBRANCH skipped op 5, so u98 keeps the INT_ADD result
    assert_eq!(snippet.get_temp_value(0x98), 0x887766554433221d);
    assert_eq!(snippet.get_temp_value(0xa0), 0x887766554433221c);
    // an unwritten temporary reads 0
    assert_eq!(snippet.get_temp_value(0xb0), 0);
    // the execute address is the address the ops were emitted at
    assert_eq!(snippet.get_execute_address().get_offset(), 0x1000);

    // reset_memory makes the snippet rerunnable with identical results
    run(&mut snippet).unwrap();
    assert_eq!(snippet.get_temp_value(0xa0), 0x887766554433221c);

    // direct injection of a temporary value
    snippet.reset_memory();
    snippet.set_varnode_value(0x80, 10);
    assert_eq!(snippet.get_temp_value(0x80), 10);
}

#[test]
fn test_emulateutil_snippet_illegal_code() {
    let env = build_snippet_env();
    let m = &env.manager;
    let addr = Address::new(Rc::clone(&env.ram), 0x1000);

    // STORE is illegal: detected by checkForLegalCode and an error at
    // execution time
    let mut snippet = EmulateSnippet::new(dyn_loader(&env.loader), Rc::clone(&env.manager));
    {
        let mut emit = snippet.build_emitter(&env.inst, 0x200);
        emit.dump(
            &addr,
            OpCode::CPUI_STORE,
            None,
            &[spaceid_vn(m, "ram"), cst(m, 0x3000, 8), cst(m, 1, 8)],
        );
    }
    assert!(!snippet.check_for_legal_code());
    snippet.reset_memory();
    assert_eq!(
        snippet.execute_current_op().unwrap_err().explain(),
        format!(
            "Illegal p-code operation in snippet: {}",
            get_opname(OpCode::CPUI_STORE)
        )
    );

    // absolute BRANCH: illegal code, and an execution-time error
    let mut snippet = EmulateSnippet::new(dyn_loader(&env.loader), Rc::clone(&env.manager));
    {
        let mut emit = snippet.build_emitter(&env.inst, 0x200);
        emit.dump(&addr, OpCode::CPUI_BRANCH, None, &[ram_vn(m, 0x4000, 8)]);
    }
    assert!(!snippet.check_for_legal_code());
    snippet.reset_memory();
    assert_eq!(
        snippet.execute_current_op().unwrap_err().explain(),
        "Tried to emulate absolute branch in snippet code"
    );

    // relative branch out of bounds
    let mut snippet = EmulateSnippet::new(dyn_loader(&env.loader), Rc::clone(&env.manager));
    {
        let mut emit = snippet.build_emitter(&env.inst, 0x200);
        emit.dump(&addr, OpCode::CPUI_BRANCH, None, &[cst(m, 100, 8)]);
    }
    snippet.reset_memory();
    assert_eq!(
        snippet.execute_current_op().unwrap_err().explain(),
        "Relative branch out of bounds in snippet code"
    );

    // writing a non-temporary or reading a register is illegal code
    let mut snippet = EmulateSnippet::new(dyn_loader(&env.loader), Rc::clone(&env.manager));
    {
        let mut emit = snippet.build_emitter(&env.inst, 0x200);
        emit.dump(&addr, OpCode::CPUI_COPY, Some(&reg(m, 0)), &[cst(m, 1, 8)]);
    }
    assert!(!snippet.check_for_legal_code());
    let mut snippet = EmulateSnippet::new(dyn_loader(&env.loader), Rc::clone(&env.manager));
    {
        let mut emit = snippet.build_emitter(&env.inst, 0x200);
        emit.dump(
            &addr,
            OpCode::CPUI_COPY,
            Some(&uvn(m, 0x80, 8)),
            &[reg(m, 0)],
        );
    }
    assert!(!snippet.check_for_legal_code());

    // reading a temporary before writing it
    let mut snippet = EmulateSnippet::new(dyn_loader(&env.loader), Rc::clone(&env.manager));
    {
        let mut emit = snippet.build_emitter(&env.inst, 0x200);
        emit.dump(
            &addr,
            OpCode::CPUI_INT_ADD,
            Some(&uvn(m, 0x88, 8)),
            &[uvn(m, 0x80, 8), cst(m, 1, 8)],
        );
    }
    assert!(snippet.check_for_legal_code());
    snippet.reset_memory();
    assert_eq!(
        snippet.execute_current_op().unwrap_err().explain(),
        "Read before write in snippet emulation"
    );
}

#[test]
fn test_emulateutil_snippet_branch_to_end_halts() {
    let env = build_snippet_env();
    let m = &env.manager;
    let addr = Address::new(Rc::clone(&env.ram), 0x1000);
    let mut snippet = EmulateSnippet::new(dyn_loader(&env.loader), Rc::clone(&env.manager));
    {
        let mut emit = snippet.build_emitter(&env.inst, 0x200);
        emit.dump(
            &addr,
            OpCode::CPUI_COPY,
            Some(&uvn(m, 0x80, 8)),
            &[cst(m, 1, 8)],
        );
        // BRANCH +2 from index 1 lands exactly one past the end: halt
        emit.dump(&addr, OpCode::CPUI_BRANCH, None, &[cst(m, 2, 8)]);
        emit.dump(
            &addr,
            OpCode::CPUI_COPY,
            Some(&uvn(m, 0x80, 8)),
            &[cst(m, 99, 8)],
        );
    }
    run(&mut snippet).unwrap();
    assert!(snippet.get_halt());
    assert_eq!(snippet.get_temp_value(0x80), 1);
}

/// getLoadImageValue endianness handling: the 8-byte read, the
/// big-endian downshift for small sizes and the little-endian mask.
#[test]
fn test_emulateutil_snippet_load_image_value() {
    // little endian: mask the low sz bytes
    let env = build_snippet_env();
    let m = &env.manager;
    let addr = Address::new(Rc::clone(&env.ram), 0x1000);
    let mut snippet = EmulateSnippet::new(dyn_loader(&env.loader), Rc::clone(&env.manager));
    {
        let mut emit = snippet.build_emitter(&env.inst, 0x200);
        emit.dump(
            &addr,
            OpCode::CPUI_LOAD,
            Some(&uvn(m, 0x80, 4)),
            &[spaceid_vn(m, "ram"), cst(m, 0x2000, 8)],
        );
    }
    run(&mut snippet).unwrap();
    assert_eq!(snippet.get_temp_value(0x80), 0x44332211);

    // big endian: the value is shifted down from the top of the uintb
    let manager_be = Rc::new(test_manager(true));
    let ram_be = Rc::clone(manager_be.get_space_by_name("ram").unwrap());
    let loader_be = Rc::new(RefCell::new(TestLoader {
        start: 0x2000,
        bytes: vec![0x11, 0x22, 0x33, 0x44, 0x55, 0x66, 0x77, 0x88],
    }));
    let mut snippet = EmulateSnippet::new(dyn_loader(&loader_be), Rc::clone(&manager_be));
    let addr_be = Address::new(Rc::clone(&ram_be), 0x1000);
    {
        let mut emit = snippet.build_emitter(&env.inst, 0x200);
        emit.dump(
            &addr_be,
            OpCode::CPUI_LOAD,
            Some(&uvn(&manager_be, 0x80, 4)),
            &[spaceid_vn(&manager_be, "ram"), cst(&manager_be, 0x2000, 8)],
        );
        emit.dump(
            &addr_be,
            OpCode::CPUI_LOAD,
            Some(&uvn(&manager_be, 0x88, 8)),
            &[spaceid_vn(&manager_be, "ram"), cst(&manager_be, 0x2000, 8)],
        );
    }
    run(&mut snippet).unwrap();
    assert_eq!(snippet.get_temp_value(0x80), 0x11223344);
    assert_eq!(snippet.get_temp_value(0x88), 0x1122334455667788);

    // a LOAD outside the image propagates DataUnavail (not caught here)
    let mut snippet = EmulateSnippet::new(dyn_loader(&env.loader), Rc::clone(&env.manager));
    {
        let mut emit = snippet.build_emitter(&env.inst, 0x200);
        emit.dump(
            &addr,
            OpCode::CPUI_LOAD,
            Some(&uvn(m, 0x80, 8)),
            &[spaceid_vn(m, "ram"), cst(m, 0x9000, 8)],
        );
    }
    snippet.reset_memory();
    assert!(matches!(
        snippet.execute_current_op(),
        Err(UnlaceError::DataUnavail { .. })
    ));
}
