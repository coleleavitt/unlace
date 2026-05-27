//! Varargs detection from call-site patterns.
//!
//! Two complementary signals fire here:
//!
//! 1. **Variable argument counts.** When the same callee is invoked from
//!    multiple sites with *different* numbers of argument-register writes
//!    visible immediately before the `Call`, we mark the callee variadic
//!    in the [`FunctionSignatureRegistry`].
//!
//! 2. **Printf-family format parsing.** When the callee is a known
//!    printf-style libc function and the call site supplies a constant
//!    string-table address as its first argument, we parse the format
//!    string and record the inferred type of each `%`-conversion slot in
//!    [`SsaFunction::variadic_call_types`].
//!
//! Mirrors IDA's `dump_func_type_data` (`references/ida/idalib/all/`)
//! which also marks signatures as variadic and decorates printf call
//! sites with per-slot types pulled from the format string.

use std::collections::{BTreeMap, BTreeSet};

use unlace_ir::ssa::{CallingConvention, FunctionSignatureRegistry, PrimitiveType, SsaFunction};
use unlace_ir::xref::CallGraph;
use unlace_ir::{BlockId, IrOp, SpaceId};

use crate::libc_signatures::lookup_libc;

const RDI: u64 = 56;
const RSI: u64 = 48;
const RDX: u64 = 16;
const RCX: u64 = 8;
const R8: u64 = 64;
const R9: u64 = 72;

const SYSV_INT_REGS: &[u64] = &[RDI, RSI, RDX, RCX, R8, R9];
const MSX64_INT_REGS: &[u64] = &[RCX, RDX, R8, R9];

fn arg_regs(cc: CallingConvention) -> &'static [u64] {
    match cc {
        CallingConvention::SystemV => SYSV_INT_REGS,
        CallingConvention::MicrosoftX64 => MSX64_INT_REGS,
        _ => SYSV_INT_REGS,
    }
}

/// Whole-program variadic detection.
///
/// Returns `true` if any signature in `registry` was newly flagged
/// variadic during this run.
pub fn detect_variadic_callees(
    funcs: &BTreeMap<u64, SsaFunction>,
    call_graph: &CallGraph,
    registry: &mut FunctionSignatureRegistry,
) -> bool {
    let mut arg_counts: BTreeMap<u64, BTreeSet<usize>> = BTreeMap::new();

    for (&caller_addr, ssa) in funcs {
        let callees = call_graph.callees_of(caller_addr);
        if callees.is_empty() {
            continue;
        }
        for block in ssa.function.blocks.values() {
            for (idx, insn) in block.insns.iter().enumerate() {
                if insn.op != IrOp::Call {
                    continue;
                }
                let Some(t) = insn.inputs.first() else {
                    continue;
                };
                if t.space != SpaceId::Const {
                    continue;
                }
                if !callees.contains(&t.offset) {
                    continue;
                }

                let cc = registry
                    .get(&t.offset)
                    .map(|s| s.calling_convention)
                    .filter(|cc| *cc != CallingConvention::Unknown)
                    .or_else(|| funcs.get(&t.offset).map(|f| f.calling_convention))
                    .unwrap_or(ssa.calling_convention);

                let arg_count = count_arg_writes_before(&block.insns, idx, cc);
                arg_counts.entry(t.offset).or_default().insert(arg_count);
            }
        }
    }

    let mut changed = false;
    for (callee, counts) in arg_counts {
        if counts.len() > 1 {
            let entry = registry.entry(callee).or_default();
            // Set the *fixed* prefix to the smallest observed count.
            // Variadic-ness is signalled to downstream passes by the
            // mismatch between this prefix size and the observed
            // per-call-site argument counts (recorded by the printf
            // path in `SsaFunction::variadic_call_types`).
            let min = counts.iter().min().copied().unwrap_or(0);
            if entry.param_types.len() != min {
                entry.param_types.resize(min, PrimitiveType::Unknown);
            }
            changed = true;
        }
    }
    changed
}

/// Recover the per-slot variadic argument types for printf-style call
/// sites within `ssa`. `string_table` maps absolute addresses of
/// read-only string constants to their byte content. Merges newly
/// recovered entries into `ssa.variadic_call_types` (additive — never
/// drops a previously-recorded site) and returns `true` if any entry was
/// inserted or modified.
///
/// The additive contract is load-bearing: this function is invoked
/// twice on the canonical pipeline path — once on the raw post-SSA IR
/// (where the format-string `Copy(reg, …)` pattern is intact) and a
/// second time after `run_passes` (where copyprop / sccp may have
/// folded the pattern away). The second call must not clobber what the
/// first observed.
pub fn parse_printf_format_strings(
    ssa: &mut SsaFunction,
    callee_name_at_addr: &dyn Fn(u64) -> Option<&'static str>,
    string_table: &BTreeMap<u64, String>,
) -> bool {
    let cc = if matches!(ssa.calling_convention, CallingConvention::Unknown) {
        CallingConvention::SystemV
    } else {
        ssa.calling_convention
    };

    let mut changed = false;

    let block_ids: Vec<BlockId> = ssa.function.blocks.keys().copied().collect();
    for bid in block_ids {
        let insns_snapshot = match ssa.function.blocks.get(&bid) {
            Some(b) => b.insns.clone(),
            None => continue,
        };
        for (idx, insn) in insns_snapshot.iter().enumerate() {
            if insn.op != IrOp::Call {
                continue;
            }
            let Some(t) = insn.inputs.first() else {
                continue;
            };
            if t.space != SpaceId::Const {
                continue;
            }
            let Some(name) = callee_name_at_addr(t.offset) else {
                continue;
            };
            let Some(libc) = lookup_libc(name) else {
                continue;
            };
            if !libc.variadic {
                continue;
            }
            let format_arg_index = printf_format_index(name);
            let format_string = insn
                .inputs
                .get(1 + format_arg_index)
                .filter(|vn| vn.space == SpaceId::Const)
                .and_then(|vn| string_table.get(&vn.offset).cloned())
                .or_else(
                    || match find_constant_arg(&insns_snapshot, idx, format_arg_index, cc) {
                        Some(addr) => string_table.get(&addr).cloned(),
                        None => None,
                    },
                );
            let Some(fmt) = format_string else { continue };
            let parsed = parse_format_string(&fmt);
            if parsed.is_empty() {
                continue;
            }
            let key = (bid, idx);
            match ssa.variadic_call_types.get(&key) {
                Some(existing) if existing == &parsed => {}
                _ => {
                    ssa.variadic_call_types.insert(key, parsed);
                    changed = true;
                }
            }
        }
    }

    changed
}

/// Index (0-based) of the format-string argument slot for the named
/// libc function. Returns `0` for printf/sprintf-family, `1` for
/// fprintf/snprintf-family.
fn printf_format_index(name: &str) -> usize {
    match name {
        "printf" | "vprintf" => 0,
        "sprintf" | "fprintf" | "vsprintf" => 1,
        "snprintf" => 2,
        // glibc FORTIFY variants take a leading flag arg, shifting the
        // format-string position by 1.
        "__printf_chk" | "__vprintf_chk" => 1,
        "__fprintf_chk" | "__sprintf_chk" | "__vsprintf_chk" => 2,
        "__snprintf_chk" => 3,
        _ => 0,
    }
}

/// Walk back from `call_idx` and find the most recent assignment to the
/// `arg_index`-th argument register; returns the absolute string-table
/// address embedded in that assignment, if one can be recovered.
///
/// Two patterns are recognised:
///
/// 1. **Direct constant** — `Copy(reg, const)`. Returns the constant.
/// 2. **PIE base-relative load** — `Copy(reg, t)` where `t` is defined
///    earlier in the same block as `IntAdd(base, const)` with one
///    constant operand. The lifter encodes `lea reg, [rip+disp]` this
///    way for position-independent ELF; the loader normalises `disp`
///    to a string-table-resolvable VA so the constant alone suffices.
///
/// Only the immediately preceding write to `target_reg` is consulted —
/// any other write (an unrecognised op, a non-constant source) means
/// a non-format-string path reached the call site and we give up.
fn find_constant_arg(
    insns: &[unlace_ir::IrInsn],
    call_idx: usize,
    arg_index: usize,
    cc: CallingConvention,
) -> Option<u64> {
    let regs = arg_regs(cc);
    let target_reg = *regs.get(arg_index)?;

    let mut write_idx: Option<usize> = None;
    for (idx, insn) in insns[..call_idx].iter().enumerate().rev() {
        let Some(out) = insn.output else { continue };
        if out.space == SpaceId::Register && out.offset == target_reg {
            write_idx = Some(idx);
            break;
        }
    }
    let write_idx = write_idx?;
    let writer = &insns[write_idx];
    if !matches!(writer.op, IrOp::Copy) {
        return None;
    }
    let src = writer.inputs.first()?;

    if src.space == SpaceId::Const {
        return Some(src.offset);
    }

    for prior in insns[..write_idx].iter().rev() {
        let Some(out) = prior.output else { continue };
        if out.space != src.space || out.offset != src.offset || out.size != src.size {
            continue;
        }
        if !matches!(prior.op, IrOp::IntAdd) {
            return None;
        }
        let consts: Vec<u64> = prior
            .inputs
            .iter()
            .filter(|v| v.space == SpaceId::Const)
            .map(|v| v.offset)
            .collect();
        if consts.len() == 1 {
            return Some(consts[0]);
        }
        return None;
    }
    None
}

/// Count the number of argument-register writes (Copy/IntAdd/etc. whose
/// output is an arg register) immediately preceding `call_idx`. Stops
/// at the first arg register slot that has *no* preceding write.
fn count_arg_writes_before(
    insns: &[unlace_ir::IrInsn],
    call_idx: usize,
    cc: CallingConvention,
) -> usize {
    let regs = arg_regs(cc);
    let mut written: BTreeSet<u64> = BTreeSet::new();
    for insn in insns[..call_idx].iter() {
        if let Some(out) = insn.output
            && out.space == SpaceId::Register
        {
            written.insert(out.offset);
        }
    }
    let mut count = 0usize;
    for &r in regs {
        if written.contains(&r) {
            count += 1;
        } else {
            break;
        }
    }
    count
}

/// Parse a C printf-style format string, returning the inferred
/// [`PrimitiveType`] for each `%`-conversion in order. Recognises a
/// useful subset of conversions:
///
/// * `%d`, `%i`, `%u`, `%x`, `%o`     ⇒ `Int(4)`
/// * `%lld`, `%ld` (with `l` length)   ⇒ `Int(8)`
/// * `%hd`                              ⇒ `Int(2)`
/// * `%hhd`                             ⇒ `Int(1)`
/// * `%f`, `%g`, `%e`, `%lf`            ⇒ `Double`
/// * `%s`, `%p`                         ⇒ `Ptr`
/// * `%c`                               ⇒ `Int(1)`
/// * `%%`                               ⇒ skipped (literal `%`)
///
/// Width / precision / flags are tolerated and skipped.
pub fn parse_format_string(fmt: &str) -> Vec<PrimitiveType> {
    let mut out = Vec::new();
    let bytes = fmt.as_bytes();
    let mut i = 0;
    while i < bytes.len() {
        if bytes[i] != b'%' {
            i += 1;
            continue;
        }
        i += 1;
        if i >= bytes.len() {
            break;
        }
        if bytes[i] == b'%' {
            i += 1;
            continue;
        }

        // Skip flags
        while i < bytes.len() && matches!(bytes[i], b'-' | b'+' | b' ' | b'#' | b'0') {
            i += 1;
        }
        // Skip width digits / `*`
        while i < bytes.len() && bytes[i].is_ascii_digit() {
            i += 1;
        }
        if i < bytes.len() && bytes[i] == b'*' {
            out.push(PrimitiveType::Int(4));
            i += 1;
        }
        // Skip precision: `.` then digits or `*`
        if i < bytes.len() && bytes[i] == b'.' {
            i += 1;
            while i < bytes.len() && bytes[i].is_ascii_digit() {
                i += 1;
            }
            if i < bytes.len() && bytes[i] == b'*' {
                out.push(PrimitiveType::Int(4));
                i += 1;
            }
        }

        // Length modifier
        let mut length = LengthMod::None;
        match bytes.get(i).copied() {
            Some(b'l') => {
                if bytes.get(i + 1).copied() == Some(b'l') {
                    length = LengthMod::LongLong;
                    i += 2;
                } else {
                    length = LengthMod::Long;
                    i += 1;
                }
            }
            Some(b'h') => {
                if bytes.get(i + 1).copied() == Some(b'h') {
                    length = LengthMod::HalfHalf;
                    i += 2;
                } else {
                    length = LengthMod::Half;
                    i += 1;
                }
            }
            Some(b'z') | Some(b'j') | Some(b't') => {
                length = LengthMod::Long;
                i += 1;
            }
            _ => {}
        }

        // Conversion specifier
        let Some(&conv) = bytes.get(i) else { break };
        i += 1;
        match conv {
            b'd' | b'i' | b'u' | b'x' | b'X' | b'o' | b'b' => {
                let w = match length {
                    LengthMod::None => 4,
                    LengthMod::Half => 2,
                    LengthMod::HalfHalf => 1,
                    LengthMod::Long | LengthMod::LongLong => 8,
                };
                out.push(PrimitiveType::Int(w));
            }
            b'f' | b'F' | b'e' | b'E' | b'g' | b'G' | b'a' | b'A' => {
                out.push(PrimitiveType::Double);
            }
            b's' | b'p' => out.push(PrimitiveType::Ptr),
            b'c' => out.push(PrimitiveType::Int(1)),
            b'n' => out.push(PrimitiveType::Ptr),
            _ => {}
        }
    }
    out
}

#[derive(Copy, Clone, Debug)]
enum LengthMod {
    None,
    Half,
    HalfHalf,
    Long,
    LongLong,
}

#[cfg(test)]
mod tests {
    use super::*;
    use smallvec::smallvec;
    use unlace_ir::ssa::build_ssa;
    use unlace_ir::{BasicBlock, Function, IrInsn, Varnode};

    // -------------------------------------------------------------------
    // Format-string parser
    // -------------------------------------------------------------------

    #[test]
    fn parse_basic_specifiers() {
        assert_eq!(parse_format_string("%d"), vec![PrimitiveType::Int(4)]);
        assert_eq!(parse_format_string("%lld"), vec![PrimitiveType::Int(8)]);
        assert_eq!(
            parse_format_string("%s %p"),
            vec![PrimitiveType::Ptr, PrimitiveType::Ptr]
        );
        assert_eq!(parse_format_string("%f"), vec![PrimitiveType::Double]);
        assert_eq!(
            parse_format_string("plain string with %%"),
            Vec::<PrimitiveType>::new()
        );
        assert_eq!(
            parse_format_string("%hd %hhx"),
            vec![PrimitiveType::Int(2), PrimitiveType::Int(1)]
        );
        assert_eq!(parse_format_string("%5.2f"), vec![PrimitiveType::Double]);
    }

    #[test]
    fn t88_printf_format_drives_arg_types() {
        // Build a function that calls `printf("%d %s", 5, "hi")`. The
        // pass should record `[Int(4), Ptr]` in variadic_call_types.
        let printf_addr: u64 = 0x4040;
        let fmt_addr: u64 = 0x5000;
        let arg2_addr: u64 = 0x6000;

        let mut func = Function::new("caller", BlockId(0), 0x1000);
        let mut bb = BasicBlock::new(BlockId(0));
        let rdi = Varnode::reg(RDI, 8);
        let rsi = Varnode::reg(RSI, 8);
        let rdx = Varnode::reg(RDX, 8);
        bb.insns.push(IrInsn::with_output(
            IrOp::Copy,
            rdi,
            smallvec![Varnode::constant(fmt_addr, 8)],
            0x1000,
        ));
        bb.insns.push(IrInsn::with_output(
            IrOp::Copy,
            rsi,
            smallvec![Varnode::constant(5, 4)],
            0x1004,
        ));
        bb.insns.push(IrInsn::with_output(
            IrOp::Copy,
            rdx,
            smallvec![Varnode::constant(arg2_addr, 8)],
            0x1008,
        ));
        bb.insns.push(IrInsn::without_output(
            IrOp::Call,
            smallvec![Varnode::constant(printf_addr, 8)],
            0x100c,
        ));
        bb.insns.push(IrInsn::without_output(
            IrOp::Return,
            smallvec![Varnode::constant(0, 8)],
            0x1010,
        ));
        func.insert_block(bb);
        let mut ssa = build_ssa(func);
        ssa.calling_convention = CallingConvention::SystemV;

        let mut strings: BTreeMap<u64, String> = BTreeMap::new();
        strings.insert(fmt_addr, "%d %s".to_string());

        let resolver = move |addr: u64| -> Option<&'static str> {
            if addr == printf_addr {
                Some("printf")
            } else {
                None
            }
        };

        let changed = parse_printf_format_strings(&mut ssa, &resolver, &strings);
        assert!(changed);

        let entry = ssa
            .variadic_call_types
            .values()
            .next()
            .expect("printf call site should have an entry");
        assert_eq!(entry.len(), 2);
        assert_eq!(entry[0], PrimitiveType::Int(4));
        assert_eq!(entry[1], PrimitiveType::Ptr);
    }

    #[test]
    fn t88_variable_arg_count_marks_variadic() {
        // Two callers of the same target — caller_a writes 1 arg reg
        // (RDI), caller_b writes 3 (RDI, RSI, RDX). The detector should
        // observe count={1,3} and set the variadic flag.
        let target = 0xDEAD_0000u64;

        let make_caller = |addr: u64, n: usize| -> SsaFunction {
            let mut func = Function::new("c", BlockId(0), addr);
            let mut bb = BasicBlock::new(BlockId(0));
            let regs = [RDI, RSI, RDX];
            for (i, &reg) in regs.iter().take(n).enumerate() {
                let r = Varnode::reg(reg, 8);
                bb.insns.push(IrInsn::with_output(
                    IrOp::Copy,
                    r,
                    smallvec![Varnode::constant(i as u64, 8)],
                    addr + i as u64 * 4,
                ));
            }
            bb.insns.push(IrInsn::without_output(
                IrOp::Call,
                smallvec![Varnode::constant(target, 8)],
                addr + 0x100,
            ));
            bb.insns.push(IrInsn::without_output(
                IrOp::Return,
                smallvec![Varnode::constant(0, 8)],
                addr + 0x108,
            ));
            func.insert_block(bb);
            let mut ssa = build_ssa(func);
            ssa.calling_convention = CallingConvention::SystemV;
            ssa
        };

        let mut funcs = BTreeMap::new();
        funcs.insert(0x1000u64, make_caller(0x1000, 1));
        funcs.insert(0x2000u64, make_caller(0x2000, 3));

        // Make the target itself a tiny leaf so the call-graph has it.
        let mut target_func = Function::new("target", BlockId(0), target);
        let mut bb = BasicBlock::new(BlockId(0));
        bb.insns.push(IrInsn::without_output(
            IrOp::Return,
            smallvec![Varnode::constant(0, 8)],
            target,
        ));
        target_func.insert_block(bb);
        let mut target_ssa = build_ssa(target_func);
        target_ssa.calling_convention = CallingConvention::SystemV;
        funcs.insert(target, target_ssa);

        let ir_funcs: BTreeMap<u64, _> = funcs
            .iter()
            .map(|(a, s)| (*a, s.function.clone()))
            .collect();
        let cg = unlace_ir::xref::build_call_graph(&ir_funcs);

        let mut registry = FunctionSignatureRegistry::new();
        let changed = detect_variadic_callees(&funcs, &cg, &mut registry);
        assert!(changed);
        // The target's signature should reflect the smallest count = 1
        // as the fixed prefix. The "variadic" flag is communicated by
        // the size mismatch + caller observation; a future Symbol-level
        // flag could record this explicitly.
        let sig = registry.get(&target).expect("target sig present");
        assert_eq!(sig.param_types.len(), 1);
    }
}
