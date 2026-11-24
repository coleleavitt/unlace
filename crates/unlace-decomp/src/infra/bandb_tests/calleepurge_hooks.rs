//! Tests moved out of `kuna_calleepurge` because they reach pass hooks a higher crate
//! provides. They live in the driver, which links every hook.

#![allow(unused_imports, dead_code)]

/// The imports of `kuna_calleepurge` itself, as a glob so the tests' own imports win.
mod module_scope {
    pub(super) use crate::architecture::Architecture;
    pub(super) use crate::fspec::EXTRAPOP_UNKNOWN;
    pub(super) use std::rc::Rc;
    pub(super) use unlace_base::address::Address;
    pub(super) use unlace_base::space::{AddrSpace, spacetype};
    pub(super) use unlace_base::types::{int4, uintb};
    pub(super) use unlace_num::opcodes::OpCode;
    pub(super) use unlace_num::pcoderaw::VarnodeData;
    pub(super) use unlace_sleigh::translate::PcodeEmit;
}
use crate::calleepurge::*;
use module_scope::*;
use std::rc::Rc;
use unlace_base::space::{ConstantSpace, OtherSpace, UniqueSpace};

type Op = (OpCode, Option<VarnodeData>, Vec<VarnodeData>);

struct Fx {
    cst: Rc<AddrSpace>,
    reg: Rc<AddrSpace>,
    ram: Rc<AddrSpace>,
    tmp: Rc<AddrSpace>,
    regs: Regs,
}

fn fx() -> Fx {
    let reg: Rc<AddrSpace> = Rc::new(OtherSpace::new(1));
    let regs = Regs {
        space: reg.get_index(),
        offs: [0, 4, 8, 0xc, 0x10, 0x14, 0x18, 0x1c],
        fs: None,
    };
    Fx {
        cst: Rc::new(ConstantSpace::new()),
        reg,
        ram: Rc::new(OtherSpace::new(3)),
        tmp: Rc::new(UniqueSpace::new(2, 0, false)),
        regs,
    }
}

fn vn(space: &Rc<AddrSpace>, offset: u64, size: u32) -> VarnodeData {
    VarnodeData {
        space: Some(space.clone()),
        offset,
        size,
    }
}

impl Fx {
    fn r(&self, i: usize) -> VarnodeData {
        vn(&self.reg, self.regs.offs[i], 4)
    }
    fn c(&self, k: i64) -> VarnodeData {
        vn(&self.cst, k as u32 as u64, 4)
    }
    fn add(&self, dst: usize, src: usize, k: i64) -> Op {
        (
            OpCode::CPUI_INT_ADD,
            Some(self.r(dst)),
            vec![self.r(src), self.c(k)],
        )
    }
    fn sub_reg(&self, dst: usize, other: usize) -> Op {
        (
            OpCode::CPUI_INT_SUB,
            Some(self.r(dst)),
            vec![self.r(dst), self.r(other)],
        )
    }
    fn copy(&self, dst: usize, src: usize) -> Op {
        (OpCode::CPUI_COPY, Some(self.r(dst)), vec![self.r(src)])
    }
    fn push(&self, src: usize) -> Vec<Op> {
        vec![
            self.add(SP, SP, -4),
            (
                OpCode::CPUI_STORE,
                None,
                vec![vn(&self.cst, 3, 8), self.r(SP), self.r(src)],
            ),
        ]
    }
    fn pop(&self, dst: usize) -> Vec<Op> {
        vec![
            (
                OpCode::CPUI_LOAD,
                Some(self.r(dst)),
                vec![vn(&self.cst, 3, 8), self.r(SP)],
            ),
            self.add(SP, SP, 4),
        ]
    }
    fn ret(&self, imm: i64) -> Vec<Op> {
        let eip = vn(&self.reg, 0x284, 4);
        let mut v = vec![
            (
                OpCode::CPUI_LOAD,
                Some(eip.clone()),
                vec![vn(&self.cst, 3, 8), self.r(SP)],
            ),
            self.add(SP, SP, 4),
        ];
        if imm != 0 {
            v.push(self.add(SP, SP, imm));
        }
        v.push((OpCode::CPUI_RETURN, None, vec![eip]));
        v
    }
    fn call(&self, target: u64) -> Vec<Op> {
        let mut v = self.push(0);
        v.push((OpCode::CPUI_CALL, None, vec![vn(&self.ram, target, 4)]));
        v
    }
    fn run(&self, insns: &[Vec<Op>]) -> Vec<Step> {
        let mut state = State::at_entry();
        let mut out = Vec::new();
        for ops in insns {
            let s = step(ops, &self.regs, state);
            state = s.state;
            out.push(s);
        }
        out
    }
}

fn sp(s: &Step) -> Val {
    s.state.0[SP].unwrap()
}

impl Fx {
    fn load(&self, base: usize, off: i64) -> Vec<Op> {
        let t = vn(&self.tmp, 0x100, 4);
        vec![
            (
                OpCode::CPUI_INT_ADD,
                Some(t.clone()),
                vec![self.r(base), self.c(off)],
            ),
            (
                OpCode::CPUI_LOAD,
                Some(self.r(0)),
                vec![vn(&self.cst, 3, 8), t],
            ),
        ]
    }
    fn extent(&self, insns: &[Vec<Op>]) -> (i64, bool) {
        let steps = self.run(insns);
        (
            steps.iter().map(|s| s.arg_end).max().unwrap_or(4),
            steps.iter().any(|s| s.unplaced),
        )
    }
}

impl Fx {
    fn extent_tracked(&self, insns: &[Vec<Op>]) -> (i64, bool) {
        let (mut state, mut end, mut unplaced) = (State::at_entry(), 4, false);
        for ops in insns {
            let s = step_with(ops, &self.regs, state, true);
            state = s.state;
            end = end.max(s.arg_end);
            unplaced |= s.unplaced;
        }
        (end, unplaced)
    }
}

impl Fx {
    fn store_at(&self, base: usize, off: i64, src: usize) -> Vec<Op> {
        let t = vn(&self.tmp, 0x200, 4);
        vec![
            (
                OpCode::CPUI_INT_ADD,
                Some(t.clone()),
                vec![self.r(base), self.c(off)],
            ),
            (
                OpCode::CPUI_STORE,
                None,
                vec![vn(&self.cst, 3, 8), t, self.r(src)],
            ),
        ]
    }
}

struct NoImage;

impl unlace_sleigh::loadimage::LoadImage for NoImage {
    fn get_file_name(&self) -> &str {
        "none"
    }
    fn load_fill(
        &mut self,
        _ptr: &mut [u8],
        _addr: &Address,
    ) -> unlace_base::error::KunaResult<()> {
        Err(unlace_base::error::KunaError::data_unavail("none"))
    }
    fn get_arch_type(&self) -> Vec<u8> {
        Vec::new()
    }
    fn adjust_vma(&mut self, _adjust: i64) {}
}

#[test]
fn a_host_flush_drops_the_walks_and_keeps_the_decoded_instructions() {
    let sleigh = unlace_sleigh::sleigh::Sleigh::new(
        Box::new(NoImage),
        Box::new(unlace_sleigh::globalcontext::ContextInternal::new()),
    );
    let mut arch = Architecture::new("t", sleigh);
    {
        let mut cache = arch
            .kuna_tables
            .get::<crate::calleepurge::CacheCell>()
            .borrow_mut();
        cache.whole.insert(0x1000, (UNKNOWN, 0));
        cache.cut.insert((0x2000, CUT), UNKNOWN);
        cache.decoded.insert(0x1000, Rc::new((Vec::new(), 1)));
    }
    arch.flush_remote_caches();
    let cache = arch
        .kuna_tables
        .get::<crate::calleepurge::CacheCell>()
        .borrow();
    assert!(
        cache.whole.is_empty() && cache.cut.is_empty(),
        "a walk read names a flush may have changed"
    );
    assert_eq!(cache.decoded.len(), 1);
}
