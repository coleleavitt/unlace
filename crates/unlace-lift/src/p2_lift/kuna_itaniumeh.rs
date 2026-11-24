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

/// (kuna `msvceh`) An MSVC x64 catch funclet entered as a pad: the parent's
/// frame register (`None`: the stack pointer) and its `UNWIND_INFO` frame
/// offset, which give the establisher frame the runtime passes in RDX, and each
/// `ret` of the funclet with the parent address it continues at.
#[derive(Clone, Debug, PartialEq, Eq)]
pub struct MsvcFunclet {
    pub pad: u64,
    pub frame_reg: Option<String>,
    pub frame_offset: u64,
    pub returns: Vec<(u64, u64)>,
    /// An x86 catch block: the runtime calls it with EBP already the parent's,
    /// so only the stack pointer moves (by 4) and RDX is not defined.
    pub x86: bool,
    /// An unwind (destructor) or `__finally` funclet, with its end: after it the
    /// exception keeps propagating, so each of its `ret`s ends the path.
    pub cleanup_end: Option<u64>,
}

/// An [`MsvcFunclet`] with its registers resolved.
#[derive(Clone, Debug)]
pub struct FuncletPad {
    pub pad: u64,
    pub frame: Option<(Address, int4)>,
    pub frame_offset: u64,
    pub returns: Vec<(u64, u64)>,
    pub x86: bool,
    pub cleanup_end: Option<u64>,
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
    /// (kuna `msvceh`) MSVC try regions, one record per catch funclet, sorted by
    /// `(start, end)`; regions of one function do not overlap, so the records
    /// covering an address all share its region.
    pub msvc_sites: Vec<EhCallSite>,
    /// (kuna `msvceh`) The catch funclets those records enter, sorted by pad.
    pub funclets: Vec<FuncletPad>,
    /// (kuna `msvceh`) The stack pointer and the establisher-frame argument
    /// register (RSP, RDX).
    pub stack_reg: Option<(Address, int4)>,
    pub establisher_reg: Option<(Address, int4)>,
    /// (kuna `msvceh`) Every funclet `ret` and its continuation, sorted.
    pub funclet_returns: Vec<(u64, u64)>,
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
            ..EhTable::default()
        }
    }

    /// (kuna `msvceh`) Add the MSVC records and funclet pads.
    pub fn with_msvc(
        mut self,
        mut sites: Vec<EhCallSite>,
        mut funclets: Vec<FuncletPad>,
    ) -> EhTable {
        sites.sort_by_key(|s| (s.start, s.end));
        funclets.sort_by_key(|f| f.pad);
        funclets.dedup_by_key(|f| f.pad);
        let mut returns: Vec<(u64, u64)> =
            funclets.iter().flat_map(|f| f.returns.clone()).collect();
        returns.sort_unstable();
        returns.dedup_by_key(|r| r.0);
        self.pads.extend(sites.iter().map(|s| s.pad));
        self.pads.sort_unstable();
        self.pads.dedup();
        self.msvc_sites = sites;
        self.funclets = funclets;
        self.funclet_returns = returns;
        self
    }

    /// Every record, Itanium then MSVC.
    pub fn all_sites(&self) -> impl Iterator<Item = &EhCallSite> {
        self.sites.iter().chain(self.msvc_sites.iter())
    }

    /// (kuna `msvceh`) The funclet entered at `pad`.
    pub fn funclet(&self, pad: u64) -> Option<&FuncletPad> {
        let i = self.funclets.binary_search_by_key(&pad, |f| f.pad).ok()?;
        self.funclets.get(i)
    }

    /// (kuna `msvceh`) The MSVC records covering `off`, in handler order.
    pub fn msvc_sites_at(&self, off: u64) -> Vec<&EhCallSite> {
        let i = self.msvc_sites.partition_point(|s| s.start <= off);
        let Some(last) = i.checked_sub(1).and_then(|k| self.msvc_sites.get(k)) else {
            return Vec::new();
        };
        let region = last.start;
        let first = self.msvc_sites[..i].partition_point(|s| s.start < region);
        self.msvc_sites[first..i]
            .iter()
            .filter(|s| off < s.end)
            .collect()
    }

    /// (kuna `msvceh`) Is `off` inside a cleanup funclet (`[pad, end)`)?
    pub fn in_cleanup_funclet(&self, off: u64) -> bool {
        let i = self.funclets.partition_point(|f| f.pad <= off);
        i.checked_sub(1)
            .and_then(|k| self.funclets.get(k))
            .and_then(|f| f.cleanup_end)
            .is_some_and(|end| off < end)
    }

    /// (kuna `msvceh`) The parent address a funclet `ret` at `off` continues at.
    pub fn funclet_return(&self, off: u64) -> Option<u64> {
        let i = self
            .funclet_returns
            .binary_search_by_key(&off, |r| r.0)
            .ok()?;
        Some(self.funclet_returns[i].1)
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
        for s in self.all_sites().filter(|s| s.pad == pad) {
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
    if let Some(f) = table.funclet(pad.get_offset()) {
        return define_funclet_frame(data, table, f, pad);
    }
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

/// (kuna `msvceh`) Enter a catch funclet as a pad: RDX, the establisher frame
/// the runtime passes, is the parent's frame register less its `UNWIND_INFO`
/// offset (the stack pointer when it has none), and the stack pointer drops by
/// the return address the runtime's call pushed, so the funclet's `ret`, turned
/// into a branch to its continuation, leaves the parent's stack as it was.
fn define_funclet_frame(
    data: &mut Funcdata,
    table: &EhTable,
    f: &FuncletPad,
    pad: &Address,
) -> KunaResult<()> {
    let Some((sp, sp_size)) = &table.stack_reg else {
        return Ok(());
    };
    if !f.x86 {
        let Some((rdx, rdx_size)) = &table.establisher_reg else {
            return Ok(());
        };
        let (frame, frame_size) = match &f.frame {
            Some((a, s)) => (a, *s),
            None => (sp, *sp_size),
        };
        let establisher = data.new_op(2, pad.clone());
        data.op_set_opcode_code(establisher, OpCode::CPUI_INT_SUB);
        let src = data.new_varnode(frame_size, frame, None);
        data.op_set_input(establisher, src, 0)?;
        let off = data.new_constant(frame_size, f.frame_offset);
        data.op_set_input(establisher, off, 1)?;
        data.new_varnode_out(*rdx_size, rdx, establisher)?;
    }
    let push = data.new_op(2, pad.clone());
    data.op_set_opcode_code(push, OpCode::CPUI_INT_SUB);
    let cur = data.new_varnode(*sp_size, sp, None);
    data.op_set_input(push, cur, 0)?;
    let eight = data.new_constant(*sp_size, *sp_size as u64);
    data.op_set_input(push, eight, 1)?;
    data.new_varnode_out(*sp_size, sp, push)?;
    let caught: Vec<String> = table
        .clauses_at(pad.get_offset())
        .into_iter()
        .map(|c| match c {
            EhClause::Catch {
                type_name: Some(t), ..
            } => format!("catch ({t})"),
            EhClause::Cleanup => "cleanup, then the exception propagates".to_string(),
            _ => "catch (...)".to_string(),
        })
        .collect();
    data.push_raw_comment(
        USER2,
        pad.clone(),
        format!("catch funclet: {}", caught.join("; ")),
    );
    Ok(())
}

/// (kuna `msvceh`) A funclet `ret` (among `ops`, one instruction's) becomes a
/// branch to `cont`, the parent address the catch resumes at.
pub fn return_to_continuation(data: &mut Funcdata, ops: &[OpId], cont: &Address) -> KunaResult<()> {
    let Some(&ret) = ops.iter().find(|&&op| {
        data.obank()
            .get(op)
            .is_some_and(|o| o.code() == OpCode::CPUI_RETURN)
    }) else {
        return Ok(());
    };
    data.op_set_opcode_code(ret, OpCode::CPUI_BRANCH);
    let dest = data.new_code_ref(cont);
    data.op_set_all_input(ret, &[dest])
}

/// (kuna `msvceh`) A cleanup funclet's `ret` (among `ops`) ends the path: after
/// the cleanup the exception keeps propagating out of the parent.
pub fn return_to_halt(data: &mut Funcdata, ops: &[OpId]) -> KunaResult<()> {
    let Some(&ret) = ops.iter().find(|&&op| {
        data.obank()
            .get(op)
            .is_some_and(|o| o.code() == OpCode::CPUI_RETURN)
    }) else {
        return Ok(());
    };
    let one = data.new_constant(4, 1);
    data.op_set_all_input(ret, &[one])?;
    data.op_mark_halt(ret, pcodeop_flags::noreturn)
}

/// Ghidra's `Comment::user2`, the instruction comment the printer emits inline.
const USER2: unlace_base::types::uint4 = 2;

pub use crate::kuna_coreoptions::ItaniumEh;

crate::kuna_arch_state!(EhTable);

/// The image's call-site table, when `itaniumeh` is on; empty before the loader commits one.
pub fn eh_table(glb: &crate::context::ArchContext) -> Option<std::rc::Rc<EhTable>> {
    glb.kuna_options
        .get::<crate::kuna_coreoptions::ItaniumEh>()
        .on
        .then(|| glb.kuna_states.get_rc::<EhTable>().unwrap_or_default())
}

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
    fn msvc_regions_funclets_and_returns() {
        let site = |pad: u64, selector: i64| EhCallSite {
            start: 0x10b8,
            end: 0x10be,
            pad,
            clauses: vec![EhClause::CatchAll { selector }],
        };
        let t = table().with_msvc(
            vec![site(0x10eb, 2), site(0x10c7, 1)],
            vec![FuncletPad {
                pad: 0x10c7,
                frame: None,
                frame_offset: 0,
                returns: vec![(0x10ea, 0x10be)],
                x86: false,
                cleanup_end: None,
            }],
        );
        let pads: Vec<u64> = t.msvc_sites_at(0x10b8).iter().map(|s| s.pad).collect();
        assert_eq!(pads, vec![0x10eb, 0x10c7]);
        assert!(t.msvc_sites_at(0x10be).is_empty());
        assert!(t.is_pad(0x10c7) && t.is_pad(0x10eb) && t.is_pad(0x40));
        assert!(t.funclet(0x10c7).is_some() && t.funclet(0x10eb).is_none());
        assert_eq!(t.funclet_return(0x10ea), Some(0x10be));
        assert!(!t.in_cleanup_funclet(0x10c8));
        assert!(t.site_at(0x10b8).is_none());
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
