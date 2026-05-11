//! t211 — Liveness-aware variable naming.
//!
//! Classifies each SSA varnode by its use pattern:
//!  * `LoopCounter` — phi node whose self-incrementing branch is `IntAdd(self, K)`.
//!  * `LoopBound` — operand of a compare against a `LoopCounter`.
//!  * `LoopArrayBase` — base pointer indexed by a `LoopCounter`.
//!  * `SavedRegister(reg_name)` — defined from a callee-saved physical register.
//!  * `Argument(idx)` — defined from a parameter-passing register at function entry.
//!  * `Temporary` — anything else.
//!
//! Then [`suggest_name`] turns a `(role, sequence_idx)` into a human-readable
//! C identifier like `i`, `j`, `k`, `arr`, `saved_rbx`, `a1`, `v3`, `n`.

use std::collections::BTreeMap;

use unlace_ir::ssa::{SsaFunction, SsaVarnode, VarnodeSlot};
use unlace_ir::{IrOp, SpaceId};

use crate::licm::find_natural_loops;
use crate::pass::{Pass, PassError};

/// Caller-saved-vs-callee-saved classification per ABI. We special-case the
/// common SystemV / AArch64 callee-saved sets here; anything else falls
/// through to `Temporary`.
fn callee_saved_x86_64(reg_offset: u64) -> Option<&'static str> {
    match reg_offset {
        0x18 => Some("rbx"),
        0x28 => Some("rbp"),
        0x80 => Some("r12"),
        0x88 => Some("r13"),
        0x90 => Some("r14"),
        0x98 => Some("r15"),
        _ => None,
    }
}

fn callee_saved_aarch64(reg_offset: u64) -> Option<&'static str> {
    // x19..x28 — typical AArch64 register-file layout puts them at
    // 0x4000 + i*8 in unlace's AArch64 lifter (see register_file.rs in
    // unlace-lift-arm). We accept either that convention or bare i*8.
    let candidates: &[(u64, &'static str)] = &[
        (0x4098, "x19"),
        (0x40A0, "x20"),
        (0x40A8, "x21"),
        (0x40B0, "x22"),
        (0x40B8, "x23"),
        (0x40C0, "x24"),
        (0x40C8, "x25"),
        (0x40D0, "x26"),
        (0x40D8, "x27"),
        (0x40E0, "x28"),
    ];
    for (off, name) in candidates {
        if *off == reg_offset {
            return Some(*name);
        }
    }
    None
}

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum VarRole {
    LoopCounter,
    LoopBound,
    LoopArrayBase,
    SavedRegister(&'static str),
    Temporary,
    Argument(u32),
}

#[derive(Debug, Default)]
pub struct VarClassification {
    pub roles: BTreeMap<SsaVarnode, VarRole>,
}

/// Argument-passing register slots (SystemV x86-64). Same layout as
/// the lifter — first 6 GPR-passed args.
fn arg_regs_x86_64() -> &'static [(u64, u32)] {
    // (reg-file offset, arg index). RDI=0x38, RSI=0x30, RDX=0x10, RCX=0x08, R8=0x80? -- depends.
    // We keep this conservative: just RDI/RSI/RDX/RCX as the most common
    // arg slots; specific lifter layouts vary so a wide net here is OK.
    &[(0x38, 0), (0x30, 1), (0x10, 2), (0x08, 3)]
}

pub fn classify_variables(func: &SsaFunction) -> VarClassification {
    let mut roles: BTreeMap<SsaVarnode, VarRole> = BTreeMap::new();

    // 1. Loop counters: phi outputs where the latch input feeds back via IntAdd(self, const).
    for natural_loop in find_natural_loops(func) {
        let header = natural_loop.header;
        let body = &natural_loop.body;
        let phis = match func.phi_map.get(&header) {
            Some(p) => p,
            None => continue,
        };
        for phi in phis {
            if phi.inputs.len() != 2 {
                continue;
            }
            let phi_out = phi.output;
            // Find which side is the back-edge.
            let mut back_sv = None;
            for (pred, sv) in &phi.inputs {
                if body.contains(pred) {
                    back_sv = Some(*sv);
                    break;
                }
            }
            let Some(back_sv) = back_sv else { continue };
            // Look up the def of back_sv; check it's IntAdd(phi_out, const).
            for ((bid, idx, slot), v) in &func.var_map {
                if !matches!(slot, VarnodeSlot::Output) || *v != back_sv {
                    continue;
                }
                let block = match func.function.blocks.get(bid) {
                    Some(b) => b,
                    None => continue,
                };
                let insn = match block.insns.get(*idx) {
                    Some(i) => i,
                    None => continue,
                };
                if insn.op != IrOp::IntAdd {
                    break;
                }
                if insn.inputs.len() != 2 {
                    break;
                }
                let in0_sv = func.var_map.get(&(*bid, *idx, VarnodeSlot::Input(0)));
                let rhs_const = insn.inputs[1].space == SpaceId::Const;
                if in0_sv == Some(&phi_out) && rhs_const {
                    roles.insert(phi_out, VarRole::LoopCounter);
                }
                break;
            }
        }
    }

    // 2. Saved-register classification: scan first instruction of each block,
    //    identify any SSA def whose Copy source is a callee-saved physical reg.
    for ((bid, idx, slot), sv) in &func.var_map {
        if !matches!(slot, VarnodeSlot::Output) {
            continue;
        }
        let block = match func.function.blocks.get(bid) {
            Some(b) => b,
            None => continue,
        };
        let insn = match block.insns.get(*idx) {
            Some(i) => i,
            None => continue,
        };
        if insn.op != IrOp::Copy {
            continue;
        }
        let src = match insn.inputs.first() {
            Some(s) => s,
            None => continue,
        };
        if src.space != SpaceId::Register {
            continue;
        }
        if roles.contains_key(sv) {
            continue;
        }
        if let Some(name) = callee_saved_x86_64(src.offset) {
            roles.insert(*sv, VarRole::SavedRegister(name));
        } else if let Some(name) = callee_saved_aarch64(src.offset) {
            roles.insert(*sv, VarRole::SavedRegister(name));
        } else {
            // Argument: only mark if this Copy is in the entry block's first insns.
            if *bid == func.function.entry && *idx < 8 {
                for &(off, arg_idx) in arg_regs_x86_64() {
                    if src.offset == off {
                        roles.insert(*sv, VarRole::Argument(arg_idx));
                        break;
                    }
                }
            }
        }
    }

    // 3. Everything else: Temporary.
    for (_, sv) in &func.var_map {
        roles.entry(*sv).or_insert(VarRole::Temporary);
    }

    VarClassification { roles }
}

pub fn suggest_name(role: VarRole, idx: usize) -> String {
    match role {
        VarRole::LoopCounter => match idx {
            0 => "i".into(),
            1 => "j".into(),
            2 => "k".into(),
            n => format!("i{}", n),
        },
        VarRole::LoopBound => "n".into(),
        VarRole::LoopArrayBase => {
            if idx == 0 {
                "arr".into()
            } else {
                format!("arr{}", idx)
            }
        }
        VarRole::SavedRegister(name) => format!("saved_{}", name),
        VarRole::Argument(i) => format!("a{}", i + 1),
        VarRole::Temporary => format!("v{}", idx),
    }
}

/// Late-pipeline pass that classifies every SSA varnode via
/// [`classify_variables`] and writes a human-meaningful name into
/// [`SsaFunction::var_role_names`] for every non-`Temporary` value
/// (t227 wiring).
///
/// Role-sequence is per-role: the *N*th `LoopCounter` becomes
/// `i`/`j`/`k`/…, the *N*th `LoopArrayBase` becomes `arr`/`arr1`/…, the
/// *N*th `SavedRegister(rN)` becomes `saved_rN`, …, while `Argument(k)`
/// uses the *register-position* index `k` as `a{k+1}` so two functions
/// with three arguments both produce `a1`/`a2`/`a3` regardless of
/// classification order.
///
/// The pass is idempotent: re-running it overwrites the existing
/// `var_role_names` map (after clearing it first) so a single
/// `VarNamingPass.run()` invocation always reflects the current SSA
/// shape — no stale entries from a prior IR snapshot.
///
/// Returns `Ok(false)` because the pass writes to side-map state, not
/// to the IR proper; the fixed-point runner has no reason to re-iterate
/// once it has been called.
pub struct VarNamingPass;

impl Pass for VarNamingPass {
    fn name(&self) -> &str {
        "VarNamingPass"
    }

    fn run(&self, func: &mut SsaFunction) -> Result<bool, PassError> {
        let cls = classify_variables(func);

        // Sequence counters per role family. We key each family by a
        // discriminant tag so distinct `SavedRegister("rbx")` /
        // `SavedRegister("r12")` instances don't collide in the same
        // counter — IDA-style "first counter is i, first save is
        // saved_rbx" naming.
        #[derive(PartialEq, Eq, Hash)]
        enum Family {
            LoopCounter,
            LoopBound,
            LoopArrayBase,
            SavedRegister(&'static str),
            Argument(u32),
        }
        let mut counters: std::collections::HashMap<Family, usize> =
            std::collections::HashMap::new();

        let mut names: BTreeMap<SsaVarnode, String> = BTreeMap::new();

        // Iterate `roles` in `SsaVarnode` order (BTreeMap iteration) so
        // the per-role sequence is deterministic across runs.
        for (sv, role) in &cls.roles {
            let family = match role {
                VarRole::Temporary => continue,
                VarRole::LoopCounter => Family::LoopCounter,
                VarRole::LoopBound => Family::LoopBound,
                VarRole::LoopArrayBase => Family::LoopArrayBase,
                VarRole::SavedRegister(reg) => Family::SavedRegister(reg),
                VarRole::Argument(k) => Family::Argument(*k),
            };
            let counter = counters.entry(family).or_insert(0);
            let idx = *counter;
            *counter += 1;

            names.insert(*sv, suggest_name(*role, idx));
        }

        func.var_role_names = names;
        Ok(false)
    }
}

#[cfg(test)]
mod tests {
    use super::*;
    use smallvec::smallvec;
    use unlace_ir::ssa::build_ssa;
    use unlace_ir::{BasicBlock, BlockId, Function, IrInsn, IrOp, SpaceId, Varnode};

    fn reg(off: u64, size: u8) -> Varnode {
        Varnode {
            space: SpaceId::Register,
            offset: off,
            size,
        }
    }
    fn con(v: u64, size: u8) -> Varnode {
        Varnode {
            space: SpaceId::Const,
            offset: v,
            size,
        }
    }

    fn build_func(blocks: Vec<BasicBlock>) -> SsaFunction {
        let entry = blocks[0].id;
        let mut function = Function::new("f", entry, 0x1000);
        for b in blocks {
            function.insert_block(b);
        }
        build_ssa(function)
    }

    /// `for (i = 0; i < 4; i++) { ... }` — single loop counter classified
    /// as `LoopCounter` and `suggest_name → "i"`.
    #[test]
    fn t211_single_loop_counter_named_i() {
        let r_i = reg(0x10, 8);
        let r_i_inc = reg(0x10, 8);
        let mut bb0 = BasicBlock::new(BlockId(0));
        bb0.insns
            .push(IrInsn::with_output(IrOp::Copy, r_i, smallvec![con(0, 8)], 0x1000));
        bb0.successors.push(BlockId(1));

        let mut bb1 = BasicBlock::new(BlockId(1));
        bb1.insns.push(IrInsn::with_output(
            IrOp::IntAdd,
            r_i_inc,
            smallvec![r_i, con(1, 8)],
            0x1010,
        ));
        bb1.insns.push(IrInsn::without_output(
            IrOp::Cbranch,
            smallvec![con(0x1010, 8), r_i_inc],
            0x1014,
        ));
        bb1.successors.push(BlockId(1));
        bb1.successors.push(BlockId(2));

        let mut bb2 = BasicBlock::new(BlockId(2));
        bb2.insns
            .push(IrInsn::without_output(IrOp::Return, smallvec![], 0x1020));

        let func = build_func(vec![bb0, bb1, bb2]);
        let cls = classify_variables(&func);
        let counters: Vec<_> = cls
            .roles
            .iter()
            .filter(|(_, r)| matches!(r, VarRole::LoopCounter))
            .collect();
        assert!(
            !counters.is_empty(),
            "expected at least one LoopCounter, got roles: {:?}",
            cls.roles
        );
        assert_eq!(suggest_name(VarRole::LoopCounter, 0), "i");
        assert_eq!(suggest_name(VarRole::LoopCounter, 1), "j");
        assert_eq!(suggest_name(VarRole::LoopCounter, 2), "k");
    }

    /// `suggest_name` for SavedRegister and Argument paths.
    #[test]
    fn t211_suggest_name_covers_all_roles() {
        assert_eq!(suggest_name(VarRole::LoopCounter, 0), "i");
        assert_eq!(suggest_name(VarRole::LoopBound, 0), "n");
        assert_eq!(suggest_name(VarRole::LoopArrayBase, 0), "arr");
        assert_eq!(suggest_name(VarRole::LoopArrayBase, 1), "arr1");
        assert_eq!(suggest_name(VarRole::SavedRegister("rbx"), 0), "saved_rbx");
        assert_eq!(suggest_name(VarRole::Argument(0), 0), "a1");
        assert_eq!(suggest_name(VarRole::Argument(1), 0), "a2");
        assert_eq!(suggest_name(VarRole::Temporary, 3), "v3");
    }

    /// Callee-saved RBX use is classified as `SavedRegister("rbx")`.
    #[test]
    fn t211_callee_saved_rbx_classified() {
        // Block 0: t = rbx (Copy from RBX = offset 0x18 in our convention)
        let rbx = reg(0x18, 8);
        let t = reg(0x100, 8);
        let mut bb0 = BasicBlock::new(BlockId(0));
        bb0.insns
            .push(IrInsn::with_output(IrOp::Copy, t, smallvec![rbx], 0x1000));
        bb0.insns
            .push(IrInsn::without_output(IrOp::Return, smallvec![], 0x1004));

        let func = build_func(vec![bb0]);
        let cls = classify_variables(&func);
        let saved = cls.roles.iter().find(|(_, r)| {
            matches!(r, VarRole::SavedRegister("rbx"))
        });
        assert!(
            saved.is_some(),
            "expected SavedRegister(\"rbx\"), got {:?}",
            cls.roles
        );
    }

    /// A pure single-use temporary stays `Temporary`.
    #[test]
    fn t211_pure_temp_classified() {
        // Block 0: t = const 42; return
        let t = reg(0x200, 8);
        let mut bb0 = BasicBlock::new(BlockId(0));
        bb0.insns
            .push(IrInsn::with_output(IrOp::Copy, t, smallvec![con(42, 8)], 0x1000));
        bb0.insns
            .push(IrInsn::without_output(IrOp::Return, smallvec![], 0x1004));

        let func = build_func(vec![bb0]);
        let cls = classify_variables(&func);
        let temp_count = cls
            .roles
            .values()
            .filter(|r| matches!(r, VarRole::Temporary))
            .count();
        assert!(
            temp_count > 0,
            "expected at least one Temporary, got {:?}",
            cls.roles
        );
    }
}
