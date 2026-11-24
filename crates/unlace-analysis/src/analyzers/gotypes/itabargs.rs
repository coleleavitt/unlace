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

use unlace_decomp::goitabcalls::itab_record_name;
use unlace_decomp::langfacet::LangFacet;

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
            return direct_callee(listing, next, &insn.flows).map(|callee| (callee, held));
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

/// The one target of the direct call at `at`: its single static flow, or else
/// its single `Call` reference (the walk may list a call's fall-through among
/// its flows).
fn direct_callee(listing: &Listing, at: u64, flows: &[u64]) -> Option<u64> {
    if let [callee] = flows {
        return Some(*callee);
    }
    let mut calls = listing
        .refs_from(at)
        .iter()
        .filter(|r| r.kind == crate::listing::RefKind::Call)
        .map(|r| r.to);
    let callee = calls.next()?;
    calls.next().is_none().then_some(callee)
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

/// The x86-64 general registers by encoding number.
const REGISTERS_BY_NUMBER: [&str; 16] = [
    "RAX", "RCX", "RDX", "RBX", "RSP", "RBP", "RSI", "RDI", "R8", "R9", "R10", "R11", "R12", "R13",
    "R14", "R15",
];

/// Every `LEA r64,[rip+disp32]` (`REX.W 8D /r`, ModRM `mod=00 rm=101`) in the
/// image's executable sections whose target is a static itab:
/// `(instruction VMA, destination register, itab VMA)`. A byte scan, so it
/// finds the call sites the Listing walk did not reach (in a stripped Go
/// binary the walk misses everything only a function value calls, `main.main`
/// among them); a false hit inside another instruction must still decode into
/// a walk that reaches a call, and must agree with every other vote.
fn scanned_itab_leas(
    file: &object::File,
    itabs: &BTreeMap<u64, String>,
) -> Vec<(u64, &'static str, u64)> {
    use object::{Object, ObjectSection, SectionKind};
    let mut out = Vec::new();
    for section in file.sections() {
        if section.kind() != SectionKind::Text {
            continue;
        }
        let Ok(bytes) = section.data() else {
            continue;
        };
        let base = section.address();
        for i in 0..bytes.len().saturating_sub(6) {
            let rex = bytes[i];
            if (rex != 0x48 && rex != 0x4c) || bytes[i + 1] != 0x8d || bytes[i + 2] & 0xc7 != 0x05 {
                continue;
            }
            let number = usize::from((bytes[i + 2] >> 3) & 7) + if rex == 0x4c { 8 } else { 0 };
            let Ok(disp) = <[u8; 4]>::try_from(&bytes[i + 3..i + 7]) else {
                continue;
            };
            let Some(next) = base.checked_add(i as u64 + 7) else {
                continue;
            };
            let target = next.wrapping_add(i32::from_le_bytes(disp) as i64 as u64);
            if itabs.contains_key(&target) {
                out.push((next - 7, REGISTERS_BY_NUMBER[number], target));
            }
        }
    }
    out
}

/// [`call_after`] over instructions decoded on the spot instead of the
/// Listing's: the callee and the registers still holding the itab at the first
/// direct call after the `LEA` at `at` (7 bytes long).
fn decoded_call_after(
    translate: &dyn unlace_sleigh::translate::Translate,
    code_space: &std::rc::Rc<unlace_base::space::AddrSpace>,
    at: u64,
    reg: &'static str,
) -> Option<(u64, Vec<&'static str>)> {
    use crate::listing::classify::classify;
    use crate::listing::decode::{Decoded, decode_one_with_assembly};
    let mut held: Vec<&'static str> = vec![reg];
    let mut next = at.checked_add(7)?;
    let mut decoded = Decoded::default();
    for _ in 0..MAX_STEPS {
        decode_one_with_assembly(translate, next, code_space, &mut decoded).ok()?;
        if decoded.len == 0 {
            return None;
        }
        let class = classify(&decoded.ops, next, decoded.len);
        if class.flow.is_call {
            if class.flow.is_indirect || class.flow.is_computed {
                return None;
            }
            return match class.flows.as_slice() {
                [callee] => Some((*callee, held)),
                _ => None,
            };
        }
        if class.flow.is_jump || class.flow.is_terminal || !class.flow.has_fallthrough {
            return None;
        }
        let copied = copy_of_held(&decoded.mnemonic, &decoded.operands, &held);
        held.retain(|r| !may_write(&decoded.mnemonic, &decoded.operands, r));
        if let Some(dest) = copied {
            if !held.contains(&dest) {
                held.push(dest);
            }
        }
        if held.is_empty() {
            return None;
        }
        next = class.fall_through?;
    }
    None
}

/// The votes of [`scanned_itab_leas`], walked by [`decoded_call_after`].
fn scanned_votes(
    ctx: &AnalysisCtx,
    itabs: &BTreeMap<u64, String>,
    out: &mut BTreeMap<(u64, usize), BTreeSet<String>>,
) -> usize {
    let Some(code_space) = ctx.arch.manage().get_default_code_space().cloned() else {
        return 0;
    };
    let translate = ctx.arch.translate();
    let leas = scanned_itab_leas(ctx.file, itabs);
    for &(at, reg, itab) in &leas {
        if !INTEGER_REGISTERS.contains(&reg) {
            continue;
        }
        let (Some(interface), Some((callee, held))) = (
            itabs.get(&itab),
            decoded_call_after(translate, &code_space, at, reg),
        ) else {
            continue;
        };
        for held_reg in held {
            if let Some(index) = INTEGER_REGISTERS.iter().position(|r| *r == held_reg) {
                out.entry((callee, index))
                    .or_default()
                    .insert(interface.clone());
            }
        }
    }
    leas.len()
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
            if unlace_base::env::var_os("UNLACE_GOITABARGS_DEBUG").is_some() {
                eprintln!("[kuna goitabargs] no static itabs located");
            }
            return AnalysisOutput::default();
        }
        let types = ctx.arch.types();
        let mut hints = Vec::new();
        let mut votes = votes(listing, &itabs);
        let scanned = scanned_votes(ctx, &itabs, &mut votes);
        let debug = unlace_base::env::var_os("UNLACE_GOITABARGS_DEBUG").is_some();
        if debug {
            let leas = listing
                .instructions()
                .filter(|(_, insn)| insn.mnemonic.trim() == "LEA")
                .count();
            let itab_leas: Vec<u64> = listing
                .instructions()
                .filter(|(_, insn)| insn.mnemonic.trim() == "LEA")
                .filter(|(_, insn)| {
                    lea_target(&insn.operands).is_some_and(|(_, t)| itabs.contains_key(&t))
                })
                .map(|(&at, _)| at)
                .collect();
            eprintln!(
                "[kuna goitabargs] instructions={} assembly={} lea={} itab_lea={} scanned_lea={scanned} itabs={} votes={}",
                listing.num_instructions(),
                listing.has_assembly(),
                leas,
                itab_leas.len(),
                itabs.len(),
                votes.len()
            );
            for at in itab_leas.iter().take(64) {
                let mut next = listing.instruction_at(*at).and_then(|i| i.fall_through);
                let mut trail = Vec::new();
                for _ in 0..MAX_STEPS {
                    let Some(insn) = next.and_then(|n| listing.instruction_at(n)) else {
                        break;
                    };
                    trail.push(format!(
                        "{:#x} {} {} flows={:x?} call={} jump={} ft={}",
                        insn.addr,
                        insn.mnemonic,
                        insn.operands,
                        insn.flows,
                        insn.flow.is_call,
                        insn.flow.is_jump,
                        insn.flow.has_fallthrough
                    ));
                    if insn.flow.is_call || !insn.flow.has_fallthrough {
                        break;
                    }
                    next = insn.fall_through;
                }
                let outcome = listing
                    .instruction_at(*at)
                    .and_then(|i| lea_target(&i.operands))
                    .and_then(|(dest, _)| {
                        let reg = INTEGER_REGISTERS.iter().copied().find(|r| *r == dest)?;
                        call_after(listing, *at, reg)
                    });
                eprintln!(
                    "[kuna goitabargs] lea {at:#x} -> {:x?}: {}",
                    outcome,
                    trail.join(" ; ")
                );
            }
        }
        for ((callee, index), interfaces) in votes {
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
        if debug {
            for hint in &hints {
                eprintln!(
                    "[kuna goitabargs] hint {:#x} {} {}",
                    hint.func_addr, hint.reg, hint.name
                );
            }
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
