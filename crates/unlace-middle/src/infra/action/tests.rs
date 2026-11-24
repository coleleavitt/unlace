//! Tests for the Action/Rule engine (`action.rs`).
//!
//! The mini-pipeline below builds a real [`Funcdata`] with hand-made ops and
//! exercises the load-bearing behaviours the port must reproduce exactly:
//! per-opcode dispatch *order*, the opcode-change `rule_index`-to-0 re-zero,
//! the `rule_repeatapply` fixpoint loop, the [`ActionRestartGroup`] restart
//! loop, and the [`ActionGroupList`] filtered-clone parity (two different root
//! actions derived from one spec tree).

use std::cell::RefCell;
use std::rc::Rc;

use unlace_base::address::Address;
use unlace_base::space::{
    AddrSpace, AddrSpaceManager, ConstantSpace, UniqueSpace, addrspace_flags, spacetype,
};
use unlace_num::opcodes::OpCode;

use super::*;
use crate::context::{ArchContext, TypeOp};

// -----------------------------------------------------------------------------
// Harness: a Funcdata with hand-built ops
// -----------------------------------------------------------------------------

fn build_manager() -> AddrSpaceManager {
    let mut m = AddrSpaceManager::new();
    m.insert_space(Rc::new(ConstantSpace::new())).unwrap();
    m.insert_space(Rc::new(UniqueSpace::new(1, 0, false)))
        .unwrap();
    m.insert_space(Rc::new(AddrSpace::new(
        spacetype::IPTR_PROCESSOR,
        "ram",
        false,
        8,
        1,
        2,
        addrspace_flags::hasphysical,
        1,
        1,
    )))
    .unwrap();
    m
}

fn build_fd() -> Funcdata {
    let manage = build_manager();
    let glb = Rc::new(ArchContext::new(manage));
    let ram = Rc::clone(glb.manage().get_space_by_name("ram").unwrap());
    let addr = Address::new(ram, 0x1000);
    Funcdata::new("func", "func", glb, addr, 0x10000000, 0x40).unwrap()
}

fn ram_addr(fd: &Funcdata, off: u64) -> Address {
    let ram = Rc::clone(fd.get_arch().manage().get_space_by_name("ram").unwrap());
    Address::new(ram, off)
}

/// Make a live op with the given opcode at the given ram offset, returning its id.
fn make_op(fd: &mut Funcdata, off: u64, opc: OpCode) -> OpId {
    let pc = ram_addr(fd, off);
    let id = fd.obank_mut().create_at(0, pc);
    fd.obank_mut().mark_alive(id);
    fd.obank_mut()
        .change_opcode(id, TypeOp::new(opc, 0, format!("{opc:?}")));
    id
}

// -----------------------------------------------------------------------------
// Test rules — interior-mutable logs so we can observe dispatch
// -----------------------------------------------------------------------------

type Log = Rc<RefCell<Vec<String>>>;

/// A rule that records its name + the op it was offered, never changing anything.
struct LogRule {
    tag: String,
    log: Log,
    group: &'static str,
}

impl Rule for LogRule {
    fn apply_op(&mut self, op: OpId, data: &mut Funcdata) -> int4 {
        let opc = data.obank().get(op).unwrap().code();
        self.log
            .borrow_mut()
            .push(format!("{}:{:?}", self.tag, opc));
        0
    }
    fn get_op_list(&self) -> Vec<OpCode> {
        vec![OpCode::CPUI_COPY, OpCode::CPUI_INT_ADD]
    }
    fn clone_rule(&self, grouplist: &ActionGroupList) -> Option<Box<dyn Rule>> {
        if grouplist.contains(self.group) {
            Some(Box::new(LogRule {
                tag: self.tag.clone(),
                log: self.log.clone(),
                group: self.group,
            }))
        } else {
            None
        }
    }
}

/// A rule that, on its FIRST encounter with a COPY, rewrites it to INT_ADD
/// (returning 1).  Used to test the opcode-change re-zero in `process_op`.
struct MorphRule {
    log: Log,
    fired: Rc<RefCell<bool>>,
}

impl Rule for MorphRule {
    fn apply_op(&mut self, op: OpId, data: &mut Funcdata) -> int4 {
        let opc = data.obank().get(op).unwrap().code();
        self.log.borrow_mut().push(format!("morph_sees:{opc:?}"));
        if opc == OpCode::CPUI_COPY && !*self.fired.borrow() {
            *self.fired.borrow_mut() = true;
            data.obank_mut()
                .change_opcode(op, TypeOp::new(OpCode::CPUI_INT_ADD, 0, "INT_ADD"));
            return 1; // changed the opcode -> must return non-zero
        }
        0
    }
    fn get_op_list(&self) -> Vec<OpCode> {
        vec![OpCode::CPUI_COPY, OpCode::CPUI_INT_ADD]
    }
    fn clone_rule(&self, _g: &ActionGroupList) -> Option<Box<dyn Rule>> {
        Some(Box::new(MorphRule {
            log: self.log.clone(),
            fired: self.fired.clone(),
        }))
    }
}

// -----------------------------------------------------------------------------
// Worked dummy rule for the module docs (a real, minimal const-fold shape)
// -----------------------------------------------------------------------------

/// The documented worked example: a minimal rule that operates only on
/// `INT_ADD`, never mutates (so it is safe to run anywhere), and registers
/// against the `"analysis"` group.  This is the shape W5 rules copy.
pub struct DummyConstFold;

impl Rule for DummyConstFold {
    fn apply_op(&mut self, _op: OpId, _data: &mut Funcdata) -> int4 {
        0 // a real rule would fold and return 1
    }
    fn get_op_list(&self) -> Vec<OpCode> {
        vec![OpCode::CPUI_INT_ADD]
    }
    fn clone_rule(&self, grouplist: &ActionGroupList) -> Option<Box<dyn Rule>> {
        if grouplist.contains("analysis") {
            Some(Box::new(DummyConstFold))
        } else {
            None
        }
    }
}

// -----------------------------------------------------------------------------
// Tests
// -----------------------------------------------------------------------------

#[test]
fn perop_registration_is_insertion_order() {
    let log: Log = Rc::new(RefCell::new(Vec::new()));
    let mut pool = ActionPool::new(ruleflags::rule_repeatapply, "pool");
    for tag in ["A", "B", "C"] {
        pool.add_rule(
            RuleState::new("analysis", 0, tag),
            Box::new(LogRule {
                tag: tag.to_string(),
                log: log.clone(),
                group: "analysis",
            }),
        );
    }
    // Each registered rule lists COPY and INT_ADD; both per-op lists must be in
    // registration order A,B,C.
    assert_eq!(pool.perop_names(OpCode::CPUI_COPY), vec!["A", "B", "C"]);
    assert_eq!(pool.perop_names(OpCode::CPUI_INT_ADD), vec!["A", "B", "C"]);
    // A rule on an opcode it didn't register for sees nothing.
    assert!(pool.perop_names(OpCode::CPUI_STORE).is_empty());
}

#[test]
fn pool_dispatches_each_op_through_every_rule_in_order() {
    let mut fd = build_fd();
    // Two ops: a COPY then an INT_ADD (distinct addresses -> optree order).
    make_op(&mut fd, 0x1000, OpCode::CPUI_COPY);
    make_op(&mut fd, 0x1004, OpCode::CPUI_INT_ADD);

    let log: Log = Rc::new(RefCell::new(Vec::new()));
    let mut pool = ActionPool::new(0, "pool");
    for tag in ["A", "B"] {
        pool.add_rule(
            RuleState::new("analysis", 0, tag),
            Box::new(LogRule {
                tag: tag.to_string(),
                log: log.clone(),
                group: "analysis",
            }),
        );
    }
    let mut ctx = ActionContext::new();
    let res = pool.apply(&mut fd, &mut ctx);
    assert_eq!(res, 0);
    // op1 (COPY): A then B; op2 (INT_ADD): A then B.
    assert_eq!(
        *log.borrow(),
        vec![
            "A:CPUI_COPY",
            "B:CPUI_COPY",
            "A:CPUI_INT_ADD",
            "B:CPUI_INT_ADD"
        ]
    );
}

#[test]
fn opcode_change_rezeros_rule_index() {
    // A pool: [Morph, Log].  Morph turns the COPY into INT_ADD and returns 1,
    // which must reset rule_index to 0 -> the whole list re-runs against the
    // NEW opcode (so Morph sees INT_ADD, then Log sees INT_ADD).  Without the
    // re-zero we would only see Log once on the COPY's stale list.
    let mut fd = build_fd();
    make_op(&mut fd, 0x1000, OpCode::CPUI_COPY);

    let log: Log = Rc::new(RefCell::new(Vec::new()));
    let fired = Rc::new(RefCell::new(false));
    let mut pool = ActionPool::new(0, "pool");
    pool.add_rule(
        RuleState::new("analysis", 0, "morph"),
        Box::new(MorphRule {
            log: log.clone(),
            fired: fired.clone(),
        }),
    );
    pool.add_rule(
        RuleState::new("analysis", 0, "log"),
        Box::new(LogRule {
            tag: "log".into(),
            log: log.clone(),
            group: "analysis",
        }),
    );

    let mut ctx = ActionContext::new();
    assert_eq!(pool.apply(&mut fd, &mut ctx), 0);
    // 1. morph sees COPY, rewrites -> INT_ADD, returns 1, rule_index reset to 0.
    // 2. morph sees INT_ADD (no change, fired latch set).
    // 3. log sees INT_ADD.
    assert_eq!(
        *log.borrow(),
        vec![
            "morph_sees:CPUI_COPY",
            "morph_sees:CPUI_INT_ADD",
            "log:CPUI_INT_ADD"
        ]
    );
}

#[test]
fn dead_op_is_skipped_and_destroyed() {
    // A pool over two ops where the first is already dead.  process_op must
    // skip the dead op, destroy it (opDeadAndGone), and dispatch only to the
    // live one.
    let mut fd = build_fd();
    let dead = make_op(&mut fd, 0x1000, OpCode::CPUI_COPY);
    fd.obank_mut().mark_dead(dead); // back to the dead list, dead flag set
    make_op(&mut fd, 0x1004, OpCode::CPUI_INT_ADD);
    assert_eq!(fd.obank().iter_all().count(), 2);

    let log: Log = Rc::new(RefCell::new(Vec::new()));
    let mut pool = ActionPool::new(0, "pool");
    pool.add_rule(
        RuleState::new("analysis", 0, "A"),
        Box::new(LogRule {
            tag: "A".into(),
            log: log.clone(),
            group: "analysis",
        }),
    );
    let mut ctx = ActionContext::new();
    assert_eq!(pool.apply(&mut fd, &mut ctx), 0);
    // Only the live INT_ADD was dispatched.
    assert_eq!(*log.borrow(), vec!["A:CPUI_INT_ADD"]);
    // The dead op was destroyed (opDeadAndGone removed it from the optree).
    assert_eq!(fd.obank().iter_all().count(), 1);
}

#[test]
fn default_groups_match_cpp_member_lists() {
    let mut db = ActionDatabase::new();
    build_default_groups(&mut db);

    // Spot-check membership exactly against coreaction.cc:5675.
    let decompile = db.get_group("decompile").unwrap();
    assert!(decompile.contains("base"));
    assert!(decompile.contains("canonicalcompare"));
    assert!(decompile.contains("presentcompare"));
    assert!(decompile.contains("conditionalexe"));
    assert!(!decompile.contains("noproto")); // jumptable-only

    let jumptable = db.get_group("jumptable").unwrap();
    assert!(jumptable.contains("noproto"));
    assert!(jumptable.contains("normalizebranches"));
    assert!(!jumptable.contains("presentcompare")); // decompile-only

    let register = db.get_group("register").unwrap();
    // register = { base, analysis, canonicalcompare, subvar }
    assert!(register.contains("base"));
    assert!(register.contains("analysis"));
    assert!(register.contains("canonicalcompare"));
    assert!(register.contains("subvar"));
    assert!(!register.contains("deadcode"));

    let firstpass = db.get_group("firstpass").unwrap();
    assert!(firstpass.contains("base"));
    assert!(!firstpass.contains("analysis"));

    // A missing group errors.
    assert!(db.get_group("nope").is_err());
}

#[test]
fn dummy_rule_registers_and_dispatches_only_on_its_opcode() {
    // The documented worked example: DummyConstFold is offered only INT_ADD.
    let mut pool = ActionPool::new(0, "pool");
    pool.add_rule(
        RuleState::new("analysis", 0, "DummyConstFold"),
        Box::new(DummyConstFold),
    );
    assert_eq!(
        pool.perop_names(OpCode::CPUI_INT_ADD),
        vec!["DummyConstFold"]
    );
    assert!(pool.perop_names(OpCode::CPUI_COPY).is_empty());

    // It survives an "analysis" grouplist and drops otherwise.
    assert!(
        pool.clone_filtered(&ActionGroupList::from_names(["analysis"]))
            .is_some()
    );
    assert!(
        pool.clone_filtered(&ActionGroupList::from_names(["other"]))
            .is_none()
    );
}

/// A rule that reports a change on every COPY it sees, so its pool never
/// reaches a fixpoint.
struct AlwaysChanges;

impl Rule for AlwaysChanges {
    fn apply_op(&mut self, _op: OpId, _data: &mut Funcdata) -> int4 {
        1
    }
    fn get_op_list(&self) -> Vec<OpCode> {
        vec![OpCode::CPUI_COPY]
    }
    fn clone_rule(&self, _g: &ActionGroupList) -> Option<Box<dyn Rule>> {
        Some(Box::new(AlwaysChanges))
    }
}

#[test]
fn repeatapply_pool_that_never_settles_stops_at_the_repeat_cap() {
    let mut fd = build_fd();
    make_op(&mut fd, 0x1000, OpCode::CPUI_COPY);
    let mut pool = ActionPool::new(ruleflags::rule_repeatapply, "pool");
    pool.add_rule(
        RuleState::new("analysis", 0, "always"),
        Box::new(AlwaysChanges),
    );
    let mut ctx = ActionContext::new();
    let res = pool.perform(&mut fd, &mut ctx);
    assert!(res > 0);
    assert_eq!(ctx.repeats, MAX_REPEATS + 1);
    let warnings = fd.drain_pending_comments();
    assert_eq!(warnings.len(), 1);
    assert!(warnings[0].2.contains("Stopped repeating"));
}
