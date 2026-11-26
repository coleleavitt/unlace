use super::*;

fn evidence() -> MzEvidence {
    let mut module = vec![0x90u8; 0x40];
    module[0x00..0x05].copy_from_slice(&[0x9a, 0x10, 0x00, 0x00, 0x10]);
    module[0x05..0x0a].copy_from_slice(&[0x9a, 0x10, 0x00, 0x00, 0x10]);
    module[0x0a..0x0c].copy_from_slice(&[0x00, 0x00]);
    module[0x0c..0x12].copy_from_slice(&[0x2e, 0xea, 0x00, 0x00, 0x00, 0x10]);
    module[0x12..0x15].copy_from_slice(&[0xf4, 0xb0, 0xf4]);
    MzEvidence::new(0x10000, module, vec![0x10003])
}

fn call() -> FlowType {
    FlowType {
        is_call: true,
        ..FlowType::default()
    }
}

#[test]
fn a_far_branch_counts_only_through_a_relocated_segment_word() {
    let mz = evidence();
    assert!(!mz.is_unrelocated_far_branch(0x10000, 5));
    assert!(mz.is_unrelocated_far_branch(0x10005, 5));
    assert!(
        mz.is_unrelocated_far_branch(0x1000c, 6),
        "a prefixed far jump"
    );
    assert!(
        !mz.is_unrelocated_far_branch(0x10012, 1),
        "not a far branch"
    );
}

#[test]
fn zero_fill_dirties_the_run_until_the_next_transfer() {
    let mz = evidence();
    let mut run = SweepRun::default();
    assert!(run.step(&mz, 0x10000, 5, &call()));
    assert!(
        !run.step(&mz, 0x10005, 5, &call()),
        "an unrelocated far call does not count"
    );
    assert!(!run.step(&mz, 0x1000a, 2, &FlowType::default()));
    assert!(
        !run.step(&mz, 0x10000, 5, &call()),
        "a call after zero fill does not count"
    );
    assert!(
        run.step(&mz, 0x10000, 5, &call()),
        "the transfer ended the dirty run"
    );
    run.undecodable();
    assert!(!run.step(&mz, 0x10000, 5, &call()));
    assert!(
        mz.is_zero_fill(0x1000a, 2) && !mz.is_zero_fill(0x10012, 1) && !mz.is_zero_fill(0x10040, 2)
    );
}

#[test]
fn an_opening_far_branch_refuses_a_target_only_where_relocations_exist() {
    let mz = evidence();
    assert!(!mz.refuses_opening(0x10000, 5), "a relocated far call");
    assert!(mz.refuses_opening(0x10005, 5));
    let unrelocated = MzEvidence::new(0x10000, mz.module.clone(), Vec::new());
    assert!(unrelocated.is_unrelocated_far_branch(0x10000, 5));
    assert!(
        !unrelocated.refuses_opening(0x10000, 5),
        "a module with no relocation table fixes its own far calls"
    );
}

#[test]
fn halt_does_not_end_a_run() {
    let mz = evidence();
    let spin = FlowType {
        is_jump: true,
        ..FlowType::default()
    };
    assert!(
        !mz.ends_run(0x10012, 1, &spin),
        "HLT resumes after an interrupt"
    );
    assert!(
        mz.ends_run(0x10013, 2, &spin),
        "an instruction whose last byte is f4 is not HLT"
    );
    let mut run = SweepRun::default();
    run.undecodable();
    run.step(&mz, 0x10012, 1, &spin);
    assert!(!run.step(&mz, 0x10000, 5, &call()));
}
