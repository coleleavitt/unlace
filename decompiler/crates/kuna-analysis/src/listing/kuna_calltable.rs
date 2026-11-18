//! (kuna `calltable`) Tables of code addresses the Listing reaches through a
//! computed jump or call.
//!
//! IDA reads a table a computed transfer indexes and votes (`check_flat_jump_table`,
//! 0x486cc0): an indexed CALL, or a jump whose distinct targets are 40% or more
//! other functions' entries, dispatches to functions (a call table); any other
//! jump table is a switch, and an entry point sitting on one of its cases that
//! nothing calls is demoted (`sub_488d60`, `AFL_NOTPROC`). This scan reads the
//! same tables with [`super::kuna_switchtable::register_targets`] over the
//! decoded Listing and returns both halves: the call-table targets as new
//! entries, and the discovered (not symbol) entries that are switch cases no
//! call reaches. A jump through a pointer table with no range check is a call
//! table on x86 only when every target sits on a 16-byte function boundary
//! (a switch whose range check the slice did not reach has case labels in the
//! middle of its function).

use std::collections::{BTreeSet, HashSet};
use std::rc::Rc;

use kuna_decomp::architecture::Architecture;
use kuna_num::opcodes::OpCode;
use kuna_sleigh::translate::Translate;

use super::kuna_poolref::PoolImage;
use super::kuna_switchtable::{preserved_registers, register_targets, Reach, DEFAULT_MAX_ENTRIES};
use super::xrefs::{decode, FullCapture};
use super::{Listing, RefKind};

/// What the scan found.
#[derive(Debug, Default)]
pub struct CallTables {
    /// Targets of call tables: new function entries.
    pub entries: Vec<u64>,
    /// Discovered entries that are switch cases no call reaches.
    pub demoted: Vec<u64>,
}

/// Read every computed jump and call's table in the Listing.
pub fn scan(file: &object::File, listing: &Listing, arch: &Architecture, translate: &dyn Translate) -> CallTables {
    let mut out = CallTables::default();
    let Some(pool) = PoolImage::new(file) else { return out };
    let Some(code_space) = arch.manage().get_default_code_space().map(Rc::clone) else { return out };
    let data_space = arch.manage().get_default_data_space().map(Rc::clone);
    let decoded: HashSet<u64> = listing.instructions().map(|(&a, _)| a).collect();
    let preserved = preserved_registers(arch);
    let reach = Reach {
        max_entries: match arch.max_jumptable_size {
            0 => DEFAULT_MAX_ENTRIES,
            n => n as usize,
        },
        preserved: &preserved,
        compact: arch.archid.starts_with("AARCH64"),
    };
    let exec = listing.exec_ranges().to_vec();
    let x86 = arch.archid.starts_with("x86");
    let entries: BTreeSet<u64> = listing.functions().map(|(&e, _)| e).collect();
    let mut calls: BTreeSet<u64> = BTreeSet::new();
    let mut cases: BTreeSet<u64> = BTreeSet::new();
    let mut cap = FullCapture::default();
    for (&vma, insn) in listing.instructions() {
        if !insn.flow.is_computed || !insn.flows.is_empty() {
            continue;
        }
        if decode(translate, vma, &code_space, &mut cap).is_none() {
            continue;
        }
        let Some(target) = cap
            .ops()
            .iter()
            .find(|o| matches!(o.opcode, OpCode::CPUI_BRANCHIND | OpCode::CPUI_CALLIND))
            .and_then(|o| o.ins.first())
            .cloned()
        else {
            continue;
        };
        let read = register_targets(translate, &code_space, data_space.as_ref(), &decoded, vma, &target, &pool, &exec, &reach);
        let distinct: BTreeSet<u64> = read.cases.into_iter().collect();
        if distinct.is_empty() {
            continue;
        }
        let owner = listing.function_containing(vma).map(|f| f.entry);
        let foreign = distinct.iter().filter(|t| entries.contains(t) && Some(**t) != owner).count();
        let aligned = x86 && distinct.len() >= 2 && distinct.iter().all(|t| t % 16 == 0);
        if insn.flow.is_call || (read.unbounded && aligned) || foreign * 5 >= distinct.len() * 2 {
            calls.extend(distinct);
        } else if !read.unbounded {
            cases.extend(distinct);
        }
    }
    out.entries = calls.iter().copied().filter(|t| !entries.contains(t)).collect();
    out.demoted = listing
        .functions()
        .filter(|(e, f)| !f.from_symbol && cases.contains(e) && !calls.contains(e))
        .filter(|(&e, _)| !listing.refs_to(e).iter().any(|r| r.kind == RefKind::Call))
        .map(|(&e, _)| e)
        .collect();
    out
}
