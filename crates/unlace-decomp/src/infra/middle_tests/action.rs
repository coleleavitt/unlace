//! Tests moved out of `action` because they read higher-band modules. They live in the
//! driver so the middle band can become its own crate (unlace-middle).

#![allow(unused_imports, dead_code)]

use crate::action::*;
use crate::context::ArchContext;
use crate::context::OpId;
use crate::context::TypeOp;
use crate::funcdata::Funcdata;
use smallvec::SmallVec;
use std::cell::RefCell;
use std::collections::BTreeMap;
use std::rc::Rc;
use unlace_base::address::Address;
use unlace_base::address::SeqNum;
use unlace_base::error::UnlaceError;
use unlace_base::error::UnlaceResult;
use unlace_base::space::AddrSpace;
use unlace_base::space::AddrSpaceManager;
use unlace_base::space::ConstantSpace;
use unlace_base::space::UniqueSpace;
use unlace_base::space::addrspace_flags;
use unlace_base::space::spacetype;
use unlace_base::types::int4;
use unlace_base::types::uint4;
use unlace_num::opcodes::OpCode;

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

/// The real dead-op removal rule, recording the ops each application took out
/// (a cascade takes out several at once) in the order the pass's log saw them.
struct RecordedRemoval {
    inner: crate::ruleaction_1::RuleEarlyRemoval,
    removed: Rc<RefCell<Vec<OpId>>>,
}

impl Rule for RecordedRemoval {
    fn apply_op(&mut self, op: OpId, data: &mut Funcdata) -> int4 {
        let mark = data.dead_wave_log_mark();
        let res = self.inner.apply_op(op, data);
        self.removed
            .borrow_mut()
            .extend_from_slice(data.dead_wave_log_since(mark).0);
        res
    }
    fn get_op_list(&self) -> Vec<OpCode> {
        self.inner.get_op_list()
    }
    fn clone_rule(&self, _g: &ActionGroupList) -> Option<Box<dyn Rule>> {
        Some(Box::new(RecordedRemoval {
            inner: crate::ruleaction_1::RuleEarlyRemoval::new("deadcode"),
            removed: self.removed.clone(),
        }))
    }
    fn removes_dead_ops(&self) -> bool {
        true
    }
}

/// A chain of `n` two-input `opc` ops, each reading the one before twice and
/// the last read by nothing, beside `n` INT_ADDs, under the real dead-op
/// removal rule with `deadcascade` at `cascade`. Returns the ops left, how many
/// ops the log rule was offered, and the order the chain was removed in. The
/// ops have no block, so a removal never marks its op dead: the pool counts it
/// as an ordinary change and every pass is a sweep.
fn run_cascade_chain(n: u64, opc: OpCode, cascade: Option<u32>) -> (Vec<u64>, usize, Vec<u64>) {
    let mut arch = ArchContext::new(build_manager());
    arch.unlace_options
        .set(crate::coreoptions::DeadCascade(cascade));
    let glb = Rc::new(arch);
    let ram = Rc::clone(glb.manage().get_space_by_name("ram").unwrap());
    ram.clear_flags(addrspace_flags::does_deadcode);
    let mut fd = Funcdata::new(
        "func",
        "func",
        glb,
        Address::new(ram, 0x1000),
        0x10000000,
        0x40,
    )
    .unwrap();
    let mut prev = fd.new_constant(4, 7);
    for i in 0..n {
        let op = make_op(&mut fd, 0x1000 + 0x10 * i, opc);
        if opc == OpCode::CPUI_MULTIEQUAL {
            fd.obank_mut()
                .get_mut(op)
                .unwrap()
                .set_flag(crate::op::pcodeop_flags::marker);
        }
        fd.op_set_all_input(op, &[prev, prev]).unwrap();
        let at = ram_addr(&fd, 0x100 + 8 * i);
        prev = fd.new_varnode_out(4, &at, op).unwrap();
        make_op(&mut fd, 0x1008 + 0x10 * i, OpCode::CPUI_INT_ADD);
    }
    let log: Log = Rc::new(RefCell::new(Vec::new()));
    let removed: Rc<RefCell<Vec<OpId>>> = Rc::new(RefCell::new(Vec::new()));
    let mut pool = ActionPool::new(ruleflags::rule_repeatapply, "pool");
    pool.add_rule(
        RuleState::new("deadcode", 0, "earlyremoval"),
        Box::new(RecordedRemoval {
            inner: crate::ruleaction_1::RuleEarlyRemoval::new("deadcode"),
            removed: removed.clone(),
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
    pool.perform(&mut fd, &mut ctx);
    let offset = |fd: &Funcdata, id: OpId| fd.obank().get(id).unwrap().get_addr().get_offset();
    let removed = removed.borrow();
    let alive = fd
        .obank()
        .iter_all()
        .filter(|(_, id)| !removed.contains(id))
        .map(|(_, id)| offset(&fd, id))
        .collect();
    let order = removed.iter().map(|&id| offset(&fd, id)).collect();
    let offers = log.borrow().len();
    (alive, offers, order)
}

/// (unlace `deadcascade`) The real removal rule takes a dead chain of joins out
/// in the pass that removes its last link, or from the given pass of the pool's
/// run, in the order one-link-per-pass removal would, and leaves the same ops;
/// a chain of other ops still dies one link per pass.
#[test]
fn dead_cascade_removes_a_join_chain_in_one_pass_in_the_order_passes_would() {
    let join = OpCode::CPUI_MULTIEQUAL;
    let (passes_alive, passes_offers, passes_order) = run_cascade_chain(40, join, None);
    let (cascade_alive, cascade_offers, cascade_order) = run_cascade_chain(40, join, Some(0));
    assert_eq!(passes_alive, cascade_alive);
    assert_eq!(passes_alive.len(), 40, "{passes_alive:?}");
    assert!(
        passes_alive.iter().all(|off| off % 0x10 == 8),
        "{passes_alive:?}"
    );
    assert_eq!(passes_order, cascade_order);
    assert_eq!(passes_order.len(), 40);
    assert!(passes_offers > 40 * 20, "{passes_offers}");
    assert!(cascade_offers <= 2 * 80, "{cascade_offers}");
    let (later_alive, later_offers, later_order) = run_cascade_chain(40, join, Some(10));
    assert_eq!(later_alive, passes_alive);
    assert_eq!(later_order, passes_order);
    assert!(
        later_offers > 10 * 40 && later_offers < 13 * 40,
        "{later_offers}"
    );
    let (_, xor_offers, xor_order) = run_cascade_chain(40, OpCode::CPUI_INT_XOR, Some(0));
    assert_eq!(xor_order.len(), 40);
    assert!(xor_offers > 40 * 20, "{xor_offers}");
}
