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
/// destination is `reg`, with `reg` unchanged in between.
fn call_after(listing: &Listing, at: u64, reg: &str) -> Option<u64> {
    let mut next = listing.instruction_at(at)?.fall_through?;
    for _ in 0..MAX_STEPS {
        let insn = listing.instruction_at(next)?;
        if insn.flow.is_call {
            if insn.flow.is_indirect || insn.flow.is_computed {
                return None;
            }
            return match insn.flows.as_slice() {
                [callee] => Some(*callee),
                _ => None,
            };
        }
        if insn.flow.is_jump || insn.flow.is_terminal || !insn.flow.has_fallthrough {
            return None;
        }
        if may_write(&insn.mnemonic, &insn.operands, reg) {
            return None;
        }
        next = insn.fall_through?;
    }
    None
}

/// The `(callee, register index) -> interfaces` votes of every `LEA` of a
/// static itab in `itabs` (itab VMA to interface).
pub(crate) fn votes(
    listing: &Listing,
    itabs: &BTreeMap<u64, String>,
) -> BTreeMap<(u64, usize), BTreeSet<String>> {
    let mut out: BTreeMap<(u64, usize), BTreeSet<String>> = BTreeMap::new();
    for (&itab, interface) in itabs {
        for r in listing.refs_to(itab) {
            let Some(insn) = listing.instruction_at(r.from) else {
                continue;
            };
            if insn.mnemonic.trim() != "LEA" {
                continue;
            }
            let dest = insn.operands.split(',').next().unwrap_or("").trim();
            let Some(index) = INTEGER_REGISTERS.iter().position(|reg| *reg == dest) else {
                continue;
            };
            if let Some(callee) = call_after(listing, r.from, INTEGER_REGISTERS[index]) {
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
}
