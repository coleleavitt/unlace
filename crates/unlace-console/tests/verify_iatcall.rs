//! End-to-end gate for the call edge an imported API call makes through its
//! IAT slot (the on-demand xref query's data-reference projection).
//!
//! Fixture: `pe_noreturn_import.exe`, whose `bail` and `entry` both end in
//! `CALL qword ptr [0x140005038]` — the shape MSVC emits for every Win32 call.
//! SLEIGH lifts it to `$U = COPY (ram,0x140005038,8); ...; CALLIND $U`, so the
//! slot is not the flow op's own operand and the walk used to file it as a plain
//! read of a pointer: `unlace decompile-graph` reported one edge for the whole
//! program and every import as called by nothing (GH-456).
//!
//! The forwarding veneer at `0x140001070` is the control. Its `JMP qword ptr
//! [0x140005038]` puts the slot in the flow op's own operand and stays a read:
//! that jump is the import's other half, which the index already folds into one
//! callable, not a call site of it.

use unlace_analysis::listing::xrefs::{self, XrefIndex, XrefKind};
use unlace_console::engine::bootstrap_from_object;

const FIXTURE: &str = "pe_noreturn_import.exe";

/// The IAT slot the loader fills in with `KERNEL32!ExitProcess`.
const SLOT: u64 = 0x140005038;
/// The MinGW `FF 25` veneer that forwards through [`SLOT`].
const VENEER: u64 = 0x140001070;
/// `(the calling function, its `CALL qword ptr [SLOT]`)`.
const CALL_SITES: [(u64, u64); 2] = [(0x140001000, 0x140001004), (0x140001040, 0x140001068)];
/// The one direct call in the program, which was always an edge.
const DIRECT_CALL: (u64, u64) = (0x14000104f, 0x140001010);

use unlace_testkit::repo_root;

/// Bootstrap the fixture and build the index `unlace xrefs` answers out of.
fn index() -> XrefIndex {
    let bin = repo_root()
        .join("crates/unlace-analysis/tests/fixtures")
        .join(FIXTURE);
    let specs = repo_root().join("specs");
    let spec_roots = vec![specs.to_str().unwrap().to_string()];
    let mut prog = bootstrap_from_object(bin.to_str().unwrap(), "", &spec_roots)
        .expect("bootstrap fixture with built processor specs");
    prog.commit_pending_analysis()
        .expect("analysis commit succeeds");

    let bytes = std::fs::read(&bin).expect("fixture readable");
    let file = object::File::parse(&*bytes).expect("fixture parses");
    let seeds: Vec<u64> = prog
        .function_entries_canonical()
        .iter()
        .map(|e| e.addr.get_offset())
        .collect();
    xrefs::build(&file, prog.arch(), prog.arch().translate(), &seeds)
}

/// The defect: `CALL qword ptr [__imp_ExitProcess]` is a call site of the
/// import, and the slot it reads its destination out of is where that edge
/// lands. It used to come back as a read, which is not a call-graph edge.
#[test]
fn a_call_through_an_iat_slot_is_a_call_edge_to_the_import() {
    let idx = index();
    let refs: Vec<(u64, XrefKind)> = idx.refs_to(SLOT).iter().map(|r| (r.from, r.kind)).collect();
    for (func, site) in CALL_SITES {
        assert!(
            refs.contains(&(site, XrefKind::Call)),
            "the call at {site:#x} reaches ExitProcess through {SLOT:#x}; got {refs:?}"
        );
        assert_eq!(
            idx.function_containing(site),
            Some(func),
            "the call at {site:#x} belongs to the function entered at {func:#x}"
        );
    }
}

/// `unlace xrefs --to` the import answers over the whole alias class, so both call
/// sites are there under either address and neither is a read.
#[test]
fn both_ends_of_the_import_answer_with_two_call_sites() {
    let idx = index();
    for target in [SLOT, VENEER] {
        let mut rows: Vec<(u64, XrefKind)> = idx
            .refs_to_unified(target)
            .iter()
            .map(|r| (r.from, r.kind))
            .collect();
        rows.sort_unstable();
        assert_eq!(
            rows,
            CALL_SITES
                .iter()
                .map(|&(_, site)| (site, XrefKind::Call))
                .collect::<Vec<_>>(),
            "--to {target:#x}"
        );
    }
}

/// The control. The veneer's own `JMP qword ptr [slot]` is the import's other
/// half, not a call site of it, and is classified as a forwarding jump. The
/// direct call, which never went through a slot at all, remains a call.
#[test]
fn the_forwarding_veneer_is_a_jump_and_the_direct_call_stays_a_call() {
    let idx = index();
    let jump: Vec<(u64, XrefKind)> = idx
        .refs_from_instruction(VENEER)
        .iter()
        .map(|r| (r.to, r.kind))
        .collect();
    assert_eq!(jump, vec![(SLOT, XrefKind::Jump)]);

    let (site, callee) = DIRECT_CALL;
    let direct: Vec<(u64, XrefKind)> = idx
        .refs_from_instruction(site)
        .iter()
        .map(|r| (r.to, r.kind))
        .collect();
    assert_eq!(direct, vec![(callee, XrefKind::Call)]);
}
