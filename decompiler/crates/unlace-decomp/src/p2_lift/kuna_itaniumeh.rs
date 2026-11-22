//! (kuna `itaniumeh`) Itanium C++ exception edges in the flow graph.
//!
//! The `.gcc_except_table` call-site table says, for every call that can throw,
//! where the unwinder lands (the landing pad) and which catch clauses the pad
//! tests. Without it a landing pad is unreachable code: flow never gets there, so
//! catch bodies and cleanups vanish from the pseudocode.
//!
//! With the option on, flow gives every covered call an exceptional successor:
//! the call is followed by `if (eh_unwinding()) goto pad;`. At the pad the
//! registers the unwinder fills are defined by `eh_exception()` and
//! `eh_selector()` (the selector only at a pad with a catch clause, so a cleanup
//! pad's calls do not gain a phantom argument), so `__cxa_begin_catch(eh_exception())` and the selector tests
//! read naturally. Each pad gets a comment listing its clauses by selector value.
//! The table comes from the analysis tier (`AnalysisOutput::eh_call_sites`).

use unlace_base::address::Address;
use unlace_base::error::KunaResult;
use unlace_base::types::int4;

use unlace_num::opcodes::OpCode;

use crate::context::OpId;
use crate::funcdata::Funcdata;
use crate::op::pcodeop_flags;
use crate::userop::{BUILTIN_EH_EXCEPTION, BUILTIN_EH_SELECTOR, BUILTIN_EH_UNWINDING};

/// One catch clause of a landing pad, in action-chain order.
#[derive(Clone, Debug, PartialEq, Eq)]
pub enum EhClause {
    /// The pad runs cleanups (destructors) and resumes unwinding.
    Cleanup,
    /// `catch (T)`; `type_name` is the demangled `typeinfo` name when known.
    Catch {
        selector: i64,
        type_name: Option<String>,
    },
    /// `catch (...)`.
    CatchAll { selector: i64 },
    /// A dynamic exception specification (`throw(...)` / `noexcept`).
    Filter { selector: i64 },
}

/// One `.gcc_except_table` call-site record with a landing pad.
#[derive(Clone, Debug, PartialEq, Eq)]
pub struct EhCallSite {
    pub start: u64,
    pub end: u64,
    pub pad: u64,
    pub clauses: Vec<EhClause>,
}

/// The image's call-site table plus the two registers the unwinder fills at a
/// pad (`__builtin_eh_return_data_regno(0)` and `(1)`).
#[derive(Clone, Debug, Default)]
pub struct EhTable {
    /// Sorted by `start`; ranges do not overlap within one LSDA.
    pub sites: Vec<EhCallSite>,
    /// Pad addresses, sorted and deduplicated.
    pub pads: Vec<u64>,
    pub exception_reg: Option<(Address, int4)>,
    pub selector_reg: Option<(Address, int4)>,
}

impl EhTable {
    pub fn new(mut sites: Vec<EhCallSite>) -> EhTable {
        sites.sort_by_key(|s| (s.start, s.end));
        let mut pads: Vec<u64> = sites.iter().map(|s| s.pad).collect();
        pads.sort_unstable();
        pads.dedup();
        EhTable {
            sites,
            pads,
            exception_reg: None,
            selector_reg: None,
        }
    }

    /// The call-site record covering the instruction at `off`.
    pub fn site_at(&self, off: u64) -> Option<&EhCallSite> {
        let i = self.sites.partition_point(|s| s.start <= off);
        self.sites[..i].iter().rev().take(4).find(|s| off < s.end)
    }

    pub fn is_pad(&self, off: u64) -> bool {
        self.pads.binary_search(&off).is_ok()
    }

    fn clauses_at(&self, pad: u64) -> Vec<&EhClause> {
        let mut out: Vec<&EhClause> = Vec::new();
        for s in self.sites.iter().filter(|s| s.pad == pad) {
            for c in &s.clauses {
                if !out.contains(&c) {
                    out.push(c);
                }
            }
        }
        out
    }
}

/// The comment text for the pad at `pad`: its clauses, by selector value.
pub fn pad_comment(table: &EhTable, pad: u64) -> String {
    let parts: Vec<String> = table
        .clauses_at(pad)
        .into_iter()
        .map(|c| match c {
            EhClause::Cleanup => "cleanup".to_string(),
            EhClause::Catch {
                selector,
                type_name: Some(t),
            } => format!("catch ({t}) when selector == {selector}"),
            EhClause::Catch {
                selector,
                type_name: None,
            } => format!("catch (<unknown type>) when selector == {selector}"),
            EhClause::CatchAll { selector } => format!("catch (...) when selector == {selector}"),
            EhClause::Filter { selector } => {
                format!("exception specification when selector == {selector}")
            }
        })
        .collect();
    format!("landing pad: {}", parts.join("; "))
}

/// Append `if (eh_unwinding()) goto pad;` right after the call `call`, in the
/// dead list of the instruction being decoded. Returns the CBRANCH, which the
/// caller anchors any no-return halt after.
pub fn insert_unwind_edge(data: &mut Funcdata, call: OpId, pad: &Address) -> KunaResult<OpId> {
    let pc = data
        .obank()
        .get(call)
        .map(|o| o.get_addr().clone())
        .unwrap_or_else(|| pad.clone());
    let test = data.new_op(1, pc.clone());
    data.op_set_opcode_code(test, OpCode::CPUI_CALLOTHER);
    if let Some(o) = data.obank_mut().get_mut(test) {
        o.clear_flag(pcodeop_flags::call);
    }
    let id = data.new_constant(4, BUILTIN_EH_UNWINDING as u64);
    data.op_set_input(test, id, 0)?;
    let flag = data.new_unique_out(1, test)?;
    let branch = data.new_op(2, pc);
    data.op_set_opcode_code(branch, OpCode::CPUI_CBRANCH);
    let dest = data.new_code_ref(pad);
    data.op_set_input(branch, dest, 0)?;
    data.op_set_input(branch, flag, 1)?;
    data.op_dead_insert_after(test, call);
    data.op_dead_insert_after(branch, test);
    Ok(branch)
}

/// Define the exception and selector registers at the pad `pad` with
/// `eh_exception()` / `eh_selector()`. Called before the pad's own instruction
/// is translated, so the two ops lead that instruction.
pub fn define_pad_registers(data: &mut Funcdata, table: &EhTable, pad: &Address) -> KunaResult<()> {
    let catches = table
        .clauses_at(pad.get_offset())
        .iter()
        .any(|c| **c != EhClause::Cleanup);
    let selector = if catches { &table.selector_reg } else { &None };
    for (reg, id) in [
        (&table.exception_reg, BUILTIN_EH_EXCEPTION),
        (selector, BUILTIN_EH_SELECTOR),
    ] {
        let Some((addr, size)) = reg else { continue };
        let op = data.new_op(1, pad.clone());
        data.op_set_opcode_code(op, OpCode::CPUI_CALLOTHER);
        if let Some(o) = data.obank_mut().get_mut(op) {
            o.clear_flag(pcodeop_flags::call);
        }
        let c = data.new_constant(4, id as u64);
        data.op_set_input(op, c, 0)?;
        data.new_varnode_out(*size, addr, op)?;
    }
    data.push_raw_comment(USER2, pad.clone(), pad_comment(table, pad.get_offset()));
    Ok(())
}

/// Ghidra's `Comment::user2`, the instruction comment the printer emits inline.
const USER2: unlace_base::types::uint4 = 2;

#[cfg(test)]
mod tests {
    use super::*;

    fn table() -> EhTable {
        EhTable::new(vec![
            EhCallSite {
                start: 0x20,
                end: 0x30,
                pad: 0x80,
                clauses: vec![EhClause::Cleanup],
            },
            EhCallSite {
                start: 0x5,
                end: 0xa,
                pad: 0x40,
                clauses: vec![
                    EhClause::Catch {
                        selector: 1,
                        type_name: Some("std::runtime_error const&".into()),
                    },
                    EhClause::CatchAll { selector: 2 },
                ],
            },
        ])
    }

    #[test]
    fn covered_calls_and_pads() {
        let t = table();
        assert_eq!(t.site_at(0x5).map(|s| s.pad), Some(0x40));
        assert_eq!(t.site_at(0x9).map(|s| s.pad), Some(0x40));
        assert!(t.site_at(0xa).is_none());
        assert_eq!(t.site_at(0x2f).map(|s| s.pad), Some(0x80));
        assert!(t.is_pad(0x40) && t.is_pad(0x80) && !t.is_pad(0x5));
    }

    #[test]
    fn pad_comment_lists_clauses_by_selector() {
        let t = table();
        assert_eq!(
            pad_comment(&t, 0x40),
            "landing pad: catch (std::runtime_error const&) when selector == 1; catch (...) when selector == 2"
        );
        assert_eq!(pad_comment(&t, 0x80), "landing pad: cleanup");
    }
}
