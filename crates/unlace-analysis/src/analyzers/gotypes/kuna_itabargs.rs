//! (kuna `goitabcalls`) Interface parameters of a stripped Go binary, typed from
//! the static itabs its callers pass.
//!
//! Without DWARF nothing says that a function's first two integer registers are
//! an interface value. Its callers do: converting a concrete value to an
//! interface at a call site loads the static itab `go:itab.<concrete>,<iface>`
//! (`LEA RAX,[itab]`) into the register that carries the table word, and the
//! register ABI fixes which parameter that is. This Listing consumer reads every
//! `LEA` of a static itab, follows its fall-through to the first direct call
//! (at most [`MAX_STEPS`] instructions, no branch, no instruction writing the
//! register), and votes `(callee, register) -> interface`. A pair every vote
//! agrees on becomes an input hint: the callee's register is `<arg>_tab`, a
//! pointer to the interface's `go.itab.<interface>` record, so a call through
//! it prints by method name. A Go value of interface type has one static type,
//! so two interfaces for one register mean the scan misread a site, and the
//! pair is dropped. x86-64 only (the register spellings), and only where the
//! record exists.

use std::collections::{BTreeMap, BTreeSet};

use unlace_decomp::kuna_goitabcalls::itab_record_name;
use unlace_decomp::kuna_langfacet::LangFacet;

use crate::listing::Listing;
use crate::pass::{AnalysisCtx, AnalysisOutput, AnalysisPass, InputHintFact, Phase};

/// The Go amd64 register ABI's integer argument registers, in order.
const INTEGER_REGISTERS: [&str; 9] = ["RAX", "RBX", "RCX", "RDI", "RSI", "R8", "R9", "R10", "R11"];

/// How many instructions after the `LEA` the call may be.
const MAX_STEPS: usize = 16;

/// Mnemonics whose first operand is read, not written.
const READS_FIRST: [&str; 5] = ["CMP", "TEST", "PUSH", "NOP", "BT"];

/// Mnemonics that write integer registers they do not name.
const IMPLICIT_WRITES: [&str; 12] = [
    "MUL", "IMUL", "DIV", "IDIV", "CDQ", "CQO", "CWD", "CPUID", "SYSCALL", "RDTSC", "XCHG",
    "CMPXCHG",
];

/// The spellings of integer register `reg` and its narrower parts.
fn aliases(reg: &str) -> Vec<String> {
    match reg {
        "RAX" => ["RAX", "EAX", "AX", "AL", "AH"].map(String::from).to_vec(),
        "RBX" => ["RBX", "EBX", "BX", "BL", "BH"].map(String::from).to_vec(),
        "RCX" => ["RCX", "ECX", "CX", "CL", "CH"].map(String::from).to_vec(),
        "RDI" => ["RDI", "EDI", "DI", "DIL"].map(String::from).to_vec(),
        "RSI" => ["RSI", "ESI", "SI", "SIL"].map(String::from).to_vec(),
        _ => ["", "D", "W", "B"]
            .iter()
            .map(|suffix| format!("{reg}{suffix}"))
            .collect(),
    }
}

/// `true` when an instruction may change `reg`: it names one of its spellings
/// as its first operand (and does not only read it), or writes registers it
/// does not name.
fn may_write(mnemonic: &str, operands: &str, reg: &str) -> bool {
    let mnemonic = mnemonic.trim();
    if mnemonic.is_empty() {
        return true;
    }
    let base = mnemonic.split_whitespace().last().unwrap_or(mnemonic);
    if IMPLICIT_WRITES.contains(&base) {
        return true;
    }
    if READS_FIRST.contains(&base) {
        return false;
    }
    let first = operands.split(',').next().unwrap_or("").trim();
    aliases(reg).iter().any(|alias| alias == first)
}

/// The callee of the first direct call after the `LEA` at `at` whose
/// destination is `reg`, with the registers still holding the itab there: the
/// `LEA`'s destination and every register a whole-register `MOV` copied it
/// to, each until an instruction may write it. `None` once no register holds
/// it.
fn call_after(listing: &Listing, at: u64, reg: &'static str) -> Option<(u64, Vec<&'static str>)> {
    let mut held: Vec<&'static str> = vec![reg];
    let mut next = listing.instruction_at(at)?.fall_through?;
    for _ in 0..MAX_STEPS {
        let insn = listing.instruction_at(next)?;
        if insn.flow.is_call {
            if insn.flow.is_indirect || insn.flow.is_computed {
                return None;
            }
            return match insn.flows.as_slice() {
                [callee] => Some((*callee, held)),
                _ => None,
            };
        }
        if insn.flow.is_jump || insn.flow.is_terminal || !insn.flow.has_fallthrough {
            return None;
        }
        let copied = copy_of_held(&insn.mnemonic, &insn.operands, &held);
        held.retain(|r| !may_write(&insn.mnemonic, &insn.operands, r));
        if let Some(dest) = copied {
            if !held.contains(&dest) {
                held.push(dest);
            }
        }
        if held.is_empty() {
            return None;
        }
        next = insn.fall_through?;
    }
    None
}

/// The destination of `MOV dst,src` when both are whole integer argument
/// registers and `src` holds the itab.
fn copy_of_held(mnemonic: &str, operands: &str, held: &[&'static str]) -> Option<&'static str> {
    if mnemonic.trim() != "MOV" {
        return None;
    }
    let (dest, source) = operands.split_once(',')?;
    let source = source.trim();
    if !held.iter().any(|reg| *reg == source) {
        return None;
    }
    INTEGER_REGISTERS
        .iter()
        .copied()
        .find(|reg| *reg == dest.trim())
}

/// `(destination, address)` of an `LEA` whose source the disassembly prints as
/// an absolute address (`RCX,[0x4cfcc0]`, a RIP-relative operand resolved).
fn lea_target(operands: &str) -> Option<(&str, u64)> {
    let (dest, source) = operands.split_once(',')?;
    let hex = source.trim().strip_prefix("[0x")?.strip_suffix(']')?;
    Some((dest.trim(), u64::from_str_radix(hex, 16).ok()?))
}

/// The `(callee, register index) -> interfaces` votes of every `LEA` of a
/// static itab in `itabs` (itab VMA to interface).
pub(crate) fn votes(
    listing: &Listing,
    itabs: &BTreeMap<u64, String>,
) -> BTreeMap<(u64, usize), BTreeSet<String>> {
    let mut out: BTreeMap<(u64, usize), BTreeSet<String>> = BTreeMap::new();
    for (&at, insn) in listing.instructions() {
        if insn.mnemonic.trim() != "LEA" {
            continue;
        }
        let Some((dest, target)) = lea_target(&insn.operands) else {
            continue;
        };
        let Some(interface) = itabs.get(&target) else {
            continue;
        };
        let Some(index) = INTEGER_REGISTERS.iter().position(|reg| *reg == dest) else {
            continue;
        };
        let Some((callee, held)) = call_after(listing, at, INTEGER_REGISTERS[index]) else {
            continue;
        };
        for reg in held {
            if let Some(index) = INTEGER_REGISTERS.iter().position(|r| *r == reg) {
                out.entry((callee, index))
                    .or_default()
                    .insert(interface.clone());
            }
        }
    }
    out
}

/// (kuna `goitabcalls`) The stripped-binary interface-parameter pass (a
/// Listing consumer, gated by the option).
pub struct GoItabArgsPass;

impl AnalysisPass for GoItabArgsPass {
    fn phase(&self) -> Phase {
        Phase::P1
    }
    fn id(&self) -> &'static str {
        "goitabargs"
    }
    fn run(&self, ctx: &AnalysisCtx) -> AnalysisOutput {
        let Some(listing) = ctx.listing else {
            return AnalysisOutput::default();
        };
        if !ctx.arch.archid.starts_with("x86:LE:64:") {
            return AnalysisOutput::default();
        }
        let itabs: BTreeMap<u64, String> = super::static_itab_interfaces(ctx.file)
            .into_iter()
            .collect();
        if itabs.is_empty() {
            return AnalysisOutput::default();
        }
        let types = ctx.arch.types();
        let mut hints = Vec::new();
        for ((callee, index), interfaces) in votes(listing, &itabs) {
            if interfaces.len() != 1 {
                continue;
            }
            let Some(interface) = interfaces.into_iter().next() else {
                continue;
            };
            let name = itab_record_name(&interface);
            let facet = LangFacet::GoItab {
                interface: interface.clone(),
            };
            if types.kuna_lang_facet(&name) != Some(facet) {
                continue;
            }
            let Some(record) = types.find_by_name(&name).ok().flatten() else {
                continue;
            };
            let Ok(table) = types.get_type_pointer(8, record, 1) else {
                continue;
            };
            hints.push(InputHintFact {
                func_addr: callee,
                reg: INTEGER_REGISTERS[index],
                name: format!("arg{index}_tab"),
                type_: Some(table),
            });
        }
        AnalysisOutput {
            go_itab_inputs: hints,
            ..Default::default()
        }
    }
}

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn writes_of_a_register_or_its_parts_stop_the_walk() {
        assert!(may_write("MOV", "RAX,RBX", "RAX"));
        assert!(may_write("XOR", "EAX,EAX", "RAX"));
        assert!(may_write("MOV", "R8D,0x1", "R8"));
        assert!(!may_write("MOV", "RBX,RAX", "RAX"));
        assert!(!may_write("CMP", "RAX,0x0", "RAX"));
        assert!(may_write("IMUL", "RCX", "RAX"));
        assert!(
            may_write("", "", "RAX"),
            "an unknown instruction is a write"
        );
    }

    #[test]
    fn a_whole_register_copy_carries_the_itab() {
        assert_eq!(copy_of_held("MOV", "RAX,RCX", &["RCX"]), Some("RAX"));
        assert_eq!(copy_of_held("MOV", "EAX,ECX", &["RCX"]), None);
        assert_eq!(
            copy_of_held("MOV", "qword ptr [RSP + 0x78],RCX", &["RCX"]),
            None
        );
        assert_eq!(copy_of_held("MOV", "RAX,RBX", &["RCX"]), None);
    }

    #[test]
    fn lea_targets_read_the_resolved_address() {
        assert_eq!(lea_target("RCX,[0x4cfcc0]"), Some(("RCX", 0x4cfcc0)));
        assert_eq!(lea_target("RAX,[RSP + 0x78]"), None);
        assert_eq!(lea_target("RAX"), None);
    }
}
