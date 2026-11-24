//! (kuna) `calleeretpurge` — read how many bytes a callee pops off its own
//! `ret imm16`.
//!
//! An x86 callee that ends `ret N` removes `N` argument bytes on top of the
//! return address. i386 SysV does it for every function returning a struct
//! through a hidden pointer (`ret $4`), and a callee-cleans convention does it
//! for its whole parameter area. The call's prototype model cannot see that:
//! `x86gcc.cspec` states `extrapop="4"`, so `ActionExtraPopSetup` plants
//! `ESP = ESP + 4` after the call, the caller's own `sub esp,N` that re-reserves
//! the popped bytes is taken at face value, and every stack slot after the call
//! drifts by `N` — one local splits into two variables and the read half has no
//! definition.
//!
//! The driver decodes each direct callee once per image (following
//! fall-through, direct branches and calls, stopping a path at a `RETURN` or an
//! indirect branch) and records the net stack-pointer change of the `RETURN`
//! instructions it reaches. When every one agrees, that change is the callee's
//! extrapop and `ActionExtraPopSetup` uses it in place of the model's.
//! A body with no reachable return, or whose returns disagree, says nothing.
//! The ObjC `objc_msgSend*_stret` imports have no body to read but pop the
//! hidden result pointer like any struct-returning function, so they get 8.
//! 32-bit x86 only: x86-64 code does not pop arguments, and the decode is not
//! free when a Ghidra host serves the instructions. Not under a Windows
//! compiler spec either: its models state no extrapop, and
//! [`crate::kuna_calleepurge`] reads the callee's purge there.

use unlace_base::address::Address;
use unlace_base::space::spacetype;
use unlace_base::types::int4;
use unlace_num::opcodes::OpCode;
use unlace_num::pcoderaw::VarnodeData;

use crate::funcdata::Funcdata;

const MAX_PURGE_PROBE_INSTRUCTIONS: u32 = 4096;

#[derive(Default)]
struct PurgeEmit {
    sp: Option<(int4, u64, u32)>,
    sp_delta: i64,
    sp_unknown_write: bool,
    returns: bool,
    ends_flow: bool,
    unresolved: bool,
    targets: Vec<Address>,
}

impl PurgeEmit {
    fn is_sp(&self, v: &VarnodeData) -> bool {
        self.sp.is_some_and(|(idx, off, size)| {
            v.offset == off
                && v.size == size
                && v.space.as_ref().is_some_and(|s| s.get_index() == idx)
        })
    }
}

impl unlace_sleigh::translate::PcodeEmit for PurgeEmit {
    fn dump(
        &mut self,
        _addr: &Address,
        opc: OpCode,
        outvar: Option<&VarnodeData>,
        vars: &[VarnodeData],
    ) {
        if let Some(o) = outvar.filter(|o| self.is_sp(o)) {
            let constant = vars.get(1).filter(|c| {
                c.space
                    .as_ref()
                    .is_some_and(|s| s.get_type() == spacetype::IPTR_CONSTANT)
            });
            match (opc, vars.first().is_some_and(|v| self.is_sp(v)), constant) {
                (OpCode::CPUI_INT_ADD, true, Some(c)) => {
                    self.sp_delta += sign_extend(c.offset, o.size);
                }
                (OpCode::CPUI_INT_SUB, true, Some(c)) => {
                    self.sp_delta -= sign_extend(c.offset, o.size);
                }
                _ => self.sp_unknown_write = true,
            }
        }
        match opc {
            OpCode::CPUI_RETURN => {
                self.returns = true;
                self.ends_flow = true;
            }
            OpCode::CPUI_BRANCHIND => self.unresolved = true,
            OpCode::CPUI_BRANCH | OpCode::CPUI_CBRANCH => {
                match vars.first().and_then(|v| v.space.as_ref()) {
                    Some(sp) if sp.get_type() == spacetype::IPTR_CONSTANT => {}
                    Some(sp) => {
                        self.targets
                            .push(Address::new(std::rc::Rc::clone(sp), vars[0].offset));
                        if opc == OpCode::CPUI_BRANCH {
                            self.ends_flow = true;
                        }
                    }
                    None => self.unresolved = true,
                }
            }
            _ => {}
        }
    }
}

fn sign_extend(v: u64, size: u32) -> i64 {
    if size >= 8 {
        return v as i64;
    }
    let shift = 64 - 8 * size;
    ((v << shift) as i64) >> shift
}

/// The net stack-pointer change of every `RETURN` reachable from `entry`, when
/// they all agree; `None` when none is reached or two disagree.
pub fn probe_return_purge<T: unlace_sleigh::translate::Translate + ?Sized>(
    tr: &T,
    entry: &Address,
) -> Option<int4> {
    if tr.probe_register("RSP").is_some() {
        return None;
    }
    let sp_storage = tr.probe_register("ESP")?;
    let sp_vn = unlace_sleigh::translate::varnode_data_from_storage(&sp_storage);
    let sp = (sp_vn.space.as_ref()?.get_index(), sp_vn.offset, sp_vn.size);
    if entry.get_space()?.get_type() != spacetype::IPTR_PROCESSOR {
        return None;
    }
    let mut seen = std::collections::HashSet::new();
    let mut todo = vec![entry.clone()];
    let mut budget = MAX_PURGE_PROBE_INSTRUCTIONS;
    let mut purge: Option<i64> = None;
    while let Some(at) = todo.pop() {
        if !seen.insert((at.get_space()?.get_index(), at.get_offset())) {
            continue;
        }
        if budget == 0 {
            break;
        }
        budget -= 1;
        let mut emit = PurgeEmit {
            sp: Some(sp),
            ..PurgeEmit::default()
        };
        let len = match tr.one_instruction(&mut emit, &at) {
            Ok(n) if n > 0 => n,
            _ => continue,
        };
        if emit.returns {
            if emit.sp_unknown_write {
                return None;
            }
            match purge {
                None => purge = Some(emit.sp_delta),
                Some(p) if p != emit.sp_delta => return None,
                _ => {}
            }
        }
        if emit.unresolved {
            continue;
        }
        todo.append(&mut emit.targets);
        if !emit.ends_flow {
            todo.push(&at + len as i64);
        }
    }
    purge
        .and_then(|p| int4::try_from(p).ok())
        .filter(|&p| p > 0)
}

/// Record the return purge of every direct callee of `data`, decoding each
/// distinct callee once per image. A no-op unless `option calleeretpurge` is on.
pub fn seed(arch: &mut crate::architecture::Architecture, data: &mut Funcdata) {
    if !arch
        .kuna_options
        .get::<crate::kuna_calleeretpurge::CalleeRetPurge>()
        .0
        || arch.get_description().contains("windows")
    {
        return;
    }
    for i in 0..data.num_calls() {
        let e = data.get_call_specs(i).get_entry_address().clone();
        let Some(sp) = e.get_space() else { continue };
        if e.is_invalid() {
            continue;
        }
        let key = (sp.get_index(), e.get_offset());
        let purge = match arch.kuna_callee_purge_cache.get(&key) {
            Some(p) => *p,
            None => {
                let p = probe_return_purge(arch.translate(), &e);
                arch.kuna_callee_purge_cache.insert(key, p);
                p
            }
        };
        if let Some(p) = purge.or_else(|| stret_purge(arch, data.get_call_specs(i).get_name())) {
            data.kuna_set_callee_purge(&e, p);
        }
    }
}

/// The ObjC message senders that return a structure in memory pop its hidden
/// pointer on i386, as IDA special-cases them (`pc.so` 0x37670): they are
/// imports, so there is no body to read the `ret $4` from.
fn stret_purge(arch: &crate::architecture::Architecture, name: &str) -> Option<int4> {
    const SENDERS: [&str; 3] = [
        "objc_msgSend_stret",
        "objc_msgSendSuper_stret",
        "objc_msgSendSuper2_stret",
    ];
    if !arch.get_description().starts_with("x86:LE:32") {
        return None;
    }
    let bare = name
        .strip_prefix("__imp_")
        .unwrap_or(name)
        .trim_start_matches('_');
    SENDERS.contains(&bare).then_some(8)
}

/// The extrapop call `i` should use: the callee's own decoded return purge when
/// one was recorded, else the prototype's.
pub fn effective_extra_pop(data: &Funcdata, i: int4) -> int4 {
    let fc = data.get_call_specs(i);
    data.kuna_callee_purge(fc.get_entry_address())
        .unwrap_or_else(|| fc.get_extra_pop())
}

crate::kuna_flag!(
    /// (kuna) Take a direct callee's extrapop from its own `ret imm16`
    /// (option `calleeretpurge`).  See [`crate::kuna_calleeretpurge`].
    CalleeRetPurge,
    "calleeretpurge",
    "Callee `ret imm16` extrapop",
    unset: true,
    shipped: true
);
