//! Actual flow recovery: edge closure, failed retry diagnostics and costly stages.
use std::path::PathBuf;
use unlace_base::address::Address;
use unlace_console::engine::bootstrap_from_raw;
use unlace_decomp::decompile_drive::build_and_follow_flow;
use unlace_num::opcodes::OpCode;

fn flow(
    relative: &str,
    both_off: bool,
) -> (
    unlace_console::engine::ConsoleProgram,
    unlace_decomp::funcdata::Funcdata,
) {
    flow_with(
        relative,
        if both_off {
            &[("returnbranch", "off"), ("constselectjump", "off")]
        } else {
            &[]
        },
    )
}

fn flow_with(
    relative: &str,
    options: &[(&str, &str)],
) -> (
    unlace_console::engine::ConsoleProgram,
    unlace_decomp::funcdata::Funcdata,
) {
    let root = PathBuf::from(env!("CARGO_MANIFEST_DIR")).join("../..");
    let mut program = bootstrap_from_raw(
        root.join(relative).to_str().unwrap(),
        "MIPS:BE:64:octeon:default",
        0x400000,
        &[0x400000],
        None,
        &[root.join("specs").to_string_lossy().into_owned()],
    )
    .unwrap();
    for (name, value) in options {
        program.arch_mut().set_unlace_option(name, value).unwrap();
    }
    program.commit_pending_analysis().unwrap();
    let entry = Address::new(
        program
            .arch()
            .manage()
            .get_default_code_space()
            .unwrap()
            .clone(),
        0x400000,
    );
    let fd = build_and_follow_flow(program.arch_mut(), "bounce", entry, 0).unwrap();
    (program, fd)
}

/// `jumptablework` (default 250000 instructions, b3668e64e9) stops this chain at
/// 316 targets, after which the closure is not recovered at all. The test checks
/// the closure itself, so it pins the bound off; the default is covered below.
#[test]
fn four_hundred_steps_use_two_full_recovery_stages() {
    let (program, fd) = flow_with(
        "tests/fixtures/indirect-flow-closure/chain-400-64.bin",
        &[("jumptablework", "off")],
    );
    assert_eq!(fd.num_jump_tables(), 1);
    let table = fd.get_jump_table(0);
    assert_eq!(table.num_entries(), 401, "400 stores and the caller return");
    assert_eq!(table.get_recover_count(), 2, "entry and final SSA closure");
    assert!(
        !program
            .arch()
            .commentdb
            .comments()
            .iter()
            .any(|c| c.text.contains("more targets"))
    );
}

#[test]
fn failed_real_retry_keeps_its_target_and_warns() {
    let (program, fd) = flow(
        "tests/fixtures/indirect-flow-closure/retry-failure-64.bin",
        false,
    );
    assert_eq!(fd.num_jump_tables(), 1);
    let table = fd.get_jump_table(0);
    assert_eq!(table.num_entries(), 1);
    assert_eq!(table.get_recover_count(), 2);
    let op = fd.obank().get(table.get_indirect_op().unwrap()).unwrap();
    assert_eq!(op.code(), OpCode::CPUI_BRANCHIND);
    assert!(program.arch().commentdb.comments().iter().any(|c| {
        c.text
            .contains("Re-entered indirect jump may have more targets")
    }));
}

#[test]
fn ordinary_register_closure_needs_only_the_reentry_value() {
    let path = "tests/fixtures/indirect-dispatch/reentry-64-r9-2.bin";
    let (_, fd) = flow_with(path, &[("returnbranch", "off")]);
    assert_eq!(fd.num_jump_tables(), 1);
    assert_eq!(fd.get_jump_table(0).num_entries(), 3);
    let (_, fd) = flow(path, true);
    assert_eq!(
        fd.get_jump_table(0).num_entries(),
        1,
        "off keeps upstream's first target"
    );
}

/// The default work bound stops the same chain partway: the dispatch prints as a
/// computed call and its partial table is dropped, so flow still completes.
#[test]
fn work_bound_truncation_leaves_no_table_behind() {
    let (_, fd) = flow(
        "tests/fixtures/indirect-flow-closure/chain-400-64.bin",
        false,
    );
    assert_eq!(fd.num_jump_tables(), 0);
}

fn warnings(program: &unlace_console::engine::ConsoleProgram) -> usize {
    program
        .arch()
        .commentdb
        .comments()
        .iter()
        .filter(|c| {
            c.text
                .contains("Re-entered indirect jump may have more targets")
        })
        .count()
}

fn entries(fd: &unlace_decomp::funcdata::Funcdata) -> Vec<usize> {
    (0..fd.num_jump_tables())
        .map(|i| fd.get_jump_table(i as i32).num_entries() as usize)
        .collect()
}

#[test]
fn unrelated_single_target_jumps_spend_no_retry_budget() {
    let path = "tests/fixtures/indirect-flow-closure/singletons-128-64.bin";
    let (program, fd) = flow(path, false);
    let sizes = entries(&fd);
    assert_eq!(sizes.len(), 129);
    assert_eq!(sizes.iter().filter(|&&n| n == 1).count(), 128, "{sizes:?}");
    assert_eq!(
        sizes.iter().filter(|&&n| n == 2).count(),
        1,
        "the dispatcher keeps both steps"
    );
    assert_eq!(warnings(&program), 0);
    let (_, fd) = flow_with(path, &[("constselectjump", "off")]);
    assert!(entries(&fd).iter().all(|&n| n == 1));
}

#[test]
fn every_dispatch_left_at_the_retry_cap_is_warned() {
    let (program, fd) = flow(
        "tests/fixtures/indirect-flow-closure/two-chains-64.bin",
        false,
    );
    let sizes: Vec<_> = entries(&fd).into_iter().filter(|&n| n > 1).collect();
    assert_eq!(sizes.len(), 2, "{sizes:?}");
    assert!(
        sizes.iter().all(|&n| n < 80),
        "both chains need more than the cap: {sizes:?}"
    );
    assert_eq!(warnings(&program), 2);
}
