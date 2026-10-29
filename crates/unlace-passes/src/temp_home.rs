//! Read lifter temporaries back through the register that holds their value.
//!
//! x86 lifting computes a value into a `Unique` temporary and then copies it
//! to its destination register (`u = rbx + 1; rbx = ZEXT u`), or reads a
//! register through a narrower temporary (`u = SUBPIECE rax`). Copy
//! propagation then points later reads of the value — the `cmp ebx, 8` that
//! follows, the `mov ecx, esi` after `mov esi, eax` — at `u`, so the temp has
//! several uses and the printer declares it as a `// temp` local beside the
//! register variable that already holds the same value.
//!
//! Hex-Rays never meets this shape: its local variables are the locations
//! themselves, and microcode temporaries are propagated away before lvar
//! allocation (see `research/hexrays-lvar-coalescing.md`). This pass gets the
//! same result on SSA. Every read of a temp is redirected to a register
//! version that provably holds the temp's value at that read:
//!
//! - the register a view temp was read from (`u = SUBPIECE r#j`), or
//! - a register the temp was stored to (`r#k = COPY u` / `r#k = ZEXT u`),
//!
//! as long as no definition of that register (instruction or phi) lies on any
//! path from where the register gets the value to the read. A temp left with
//! its single defining use folds into that register write.
//!
//! Equality tests of a counter's old value (`dec edx; jne` lifts to
//! `u = rdx; rdx = u - 1; if (u != 1)`) are rebased onto the new value
//! (`if (rdx != 0)`), which modular arithmetic keeps exact for `==`/`!=`.

use std::collections::{BTreeMap, BTreeSet};

use unlace_ir::ssa::{SsaFunction, SsaVarnode, VarnodeSlot};
use unlace_ir::{ArchId, BlockId, IrOp, SpaceId, Varnode};

use crate::dce::DeadCodeElimPass;
use crate::dead_flag_elim::is_x86_flag_bit;
use crate::pass::{Pass, PassError};

/// x86-64 `rsp`: stack-address temps keep their own name so stack-slot
/// recovery in the printer still resolves them through their definition.
const X86_RSP_OFFSET: u64 = 32;

pub struct TempHomePass;

impl Pass for TempHomePass {
    fn name(&self) -> &str {
        "temp-home"
    }

    fn phase(&self) -> crate::pass::PassPhase {
        crate::pass::PassPhase::FinalCleanup
    }

    fn run(&self, func: &mut SsaFunction) -> Result<bool, PassError> {
        // A temp's bytes sit at the low end of its register, at the
        // register's own offset, only in the little-endian x86 register file.
        if !matches!(func.arch, ArchId::X86 | ArchId::X86_64) {
            return Ok(false);
        }
        let mut changed = forward_temp_copies(func);
        changed |= fold_signed_flag_tests(func);
        let rewrites = plan_rewrites(func);
        let trace = tracing::enabled!(target: "unlace::temp_home", tracing::Level::DEBUG);
        changed |= !rewrites.is_empty();
        for rw in rewrites {
            if trace {
                tracing::debug!(
                    target: "unlace::temp_home",
                    "func={} at={:?} input={} -> {:?} {:?}",
                    func.function.name,
                    rw.at,
                    rw.input,
                    rw.register,
                    rw.rebased,
                );
            }
            apply(func, &rw);
        }
        // Reads that moved to a register leave view temps without uses.
        if changed {
            while DeadCodeElimPass.run(func)? {}
        }
        changed |= rehome_views(func, trace);
        changed |= copy_before_clobber(func, trace);
        Ok(changed)
    }
}

/// Put back the copy that propagation carried a read past.
///
/// `mov ebp, r12d; ...; lea r12d, [...]; sub ebp, 1` lifts to
/// `rbp = ZEXT r12:i32; ...; r12 = ...; rbp = ZEXT (SUBPIECE rbp - 1)`.
/// Copy propagation reads the temp `r12d` was written from (`u`, defined in
/// an earlier block) at the `sub`, and the first `mov` dies. `r12` no longer
/// holds `u` at the read, but it did when the block was entered, and the
/// `sub` writes `rbp`, which nothing touches between the clobber of `r12`
/// and that write. Hex-Rays never deletes that `mov` (its propagation
/// stops at the redefinition of `r12`); here it comes back as
/// `rbp = ZEXT r12:i32` right before the clobber, and the read moves to
/// `rbp`.
fn copy_before_clobber(func: &mut SsaFunction, trace: bool) -> bool {
    let facts = collect_facts(func);
    let Values { holders, .. } = collect_values(func);
    let mut uses: BTreeMap<SsaVarnode, Vec<(BlockId, usize, usize)>> = BTreeMap::new();
    // Temps computed from the stack pointer: the printer resolves their
    // reads to the stack slot through the definition, so a copy would only
    // add a statement.
    let mut stack_addresses: BTreeSet<SsaVarnode> = BTreeSet::new();
    for (&(bid, idx, ref slot), &sv) in &func.var_map {
        match *slot {
            VarnodeSlot::Input(input) if sv.base.space == SpaceId::Unique => {
                uses.entry(sv).or_default().push((bid, idx, input));
            }
            VarnodeSlot::Input(_)
                if sv.base.space == SpaceId::Register && sv.base.offset == X86_RSP_OFFSET =>
            {
                if let Some(&out) = func.var_map.get(&(bid, idx, VarnodeSlot::Output))
                    && out.base.space == SpaceId::Unique
                {
                    stack_addresses.insert(out);
                }
            }
            _ => {}
        }
    }

    struct Plan {
        block: BlockId,
        /// The first clobber of the holder's register: the copy goes here.
        clobber: usize,
        holder: SsaVarnode,
        /// The register the read's value chain is written to.
        destination: Varnode,
        temp: SsaVarnode,
        read: (usize, usize),
    }
    let mut plans: Vec<Plan> = Vec::new();
    let mut claims: BTreeMap<(BlockId, u64), Vec<(usize, usize)>> = BTreeMap::new();
    for (&bid, block) in &func.function.blocks {
        for (idx, insn) in block.insns.iter().enumerate() {
            for (input, raw) in insn.inputs.iter().enumerate() {
                let Some(&temp) = func.var_map.get(&(bid, idx, VarnodeSlot::Input(input))) else {
                    continue;
                };
                if temp.base.space != SpaceId::Unique
                    || raw.size != temp.base.size
                    || stack_addresses.contains(&temp)
                {
                    continue;
                }
                let width = temp.base.size;
                let Some((destination, end)) = written_register(func, &uses, bid, idx) else {
                    continue;
                };
                if !is_home_register(&destination) || !exact_register_read(width, destination.size)
                {
                    continue;
                }
                let Some(candidates) = holders.get(&temp) else {
                    continue;
                };
                // A holder that held at block entry and was clobbered before
                // the read.
                let found = candidates.iter().find_map(|holder| {
                    if holder.from.0 == bid || !holds_until(&facts, holder, (bid, 0)) {
                        return None;
                    }
                    let clobber = facts.defs.get(&bid)?.iter().find_map(|&(at, vn)| {
                        at.filter(|&at| at < idx && overlaps(&vn, &holder.register.base))
                    })?;
                    Some((holder.register, clobber))
                });
                let Some((holder, clobber)) = found else {
                    continue;
                };
                if overlaps(&destination, &holder.base)
                    || register_touched_between(func, bid, clobber, end, &destination, temp)
                {
                    continue;
                }
                let claimed = claims.entry((bid, destination.offset)).or_default();
                if claimed
                    .iter()
                    .any(|&(from, to)| from <= end && clobber <= to)
                {
                    continue;
                }
                claimed.push((clobber, end));
                plans.push(Plan {
                    block: bid,
                    clobber,
                    holder,
                    destination,
                    temp,
                    read: (idx, input),
                });
            }
        }
    }
    if plans.is_empty() {
        return false;
    }

    let mut next_version: BTreeMap<Varnode, u32> = BTreeMap::new();
    for sv in func
        .var_map
        .values()
        .chain(func.phi_map.values().flatten().map(|phi| &phi.output))
    {
        let next = next_version.entry(sv.base).or_default();
        *next = (*next).max(sv.version + 1);
    }
    // Later insertions first, so earlier ones keep their indices.
    plans.sort_by_key(|plan| (plan.block, std::cmp::Reverse(plan.clobber)));
    for plan in plans {
        let width = plan.temp.base.size;
        let next = next_version.entry(plan.destination).or_default();
        let home = SsaVarnode {
            base: plan.destination,
            version: *next,
        };
        *next += 1;
        if trace {
            tracing::debug!(
                target: "unlace::temp_home",
                "func={} copy-before-clobber block={:?} insn={} temp={:?} holder={:?} -> {home:?}",
                func.function.name,
                plan.block,
                plan.clobber,
                plan.temp,
                plan.holder,
            );
        }
        let op = if width == plan.destination.size {
            IrOp::Copy
        } else {
            IrOp::IntZext
        };
        shift_insn_keys(func, plan.block, plan.clobber);
        let Some(block) = func.function.blocks.get_mut(&plan.block) else {
            continue;
        };
        let copy = unlace_ir::IrInsn::with_output(
            op,
            plan.destination,
            smallvec::smallvec![Varnode::reg(plan.holder.base.offset, width)],
            block.insns[plan.clobber].addr,
        );
        block.insns.insert(plan.clobber, copy);
        func.var_map
            .insert((plan.block, plan.clobber, VarnodeSlot::Output), home);
        func.var_map.insert(
            (plan.block, plan.clobber, VarnodeSlot::Input(0)),
            plan.holder,
        );
        if let Some(&ty) = func.var_types.get(&plan.temp) {
            func.var_types.insert(home, ty);
        }
        let (idx, input) = (plan.read.0 + 1, plan.read.1);
        block.insns[idx].inputs[input] = Varnode::reg(plan.destination.offset, width);
        func.var_map
            .insert((plan.block, idx, VarnodeSlot::Input(input)), home);
    }
    true
}

/// Move the per-instruction tables of `bid` up by one from `from` on, making
/// room for an instruction inserted at `from`.
fn shift_insn_keys(func: &mut SsaFunction, bid: BlockId, from: usize) {
    let moved: Vec<_> = func
        .var_map
        .range((bid, from, VarnodeSlot::Output)..)
        .take_while(|&(&(b, _, _), _)| b == bid)
        .map(|(k, &v)| (k.clone(), v))
        .collect();
    for (key, _) in moved.iter() {
        func.var_map.remove(key);
    }
    for ((b, idx, slot), sv) in moved {
        func.var_map.insert((b, idx + 1, slot), sv);
    }
    let hints: Vec<_> = func
        .stack_offset_hints
        .range((bid, from)..=(bid, usize::MAX))
        .map(|(&k, &v)| (k, v))
        .collect();
    for &(key, _) in hints.iter() {
        func.stack_offset_hints.remove(&key);
    }
    for ((b, idx), offset) in hints {
        func.stack_offset_hints.insert((b, idx + 1), offset);
    }
    let setup: Vec<_> = func
        .frame_setup_insns
        .range((bid, from)..=(bid, usize::MAX))
        .copied()
        .collect();
    for key in setup.iter() {
        func.frame_setup_insns.remove(key);
    }
    for (b, idx) in setup {
        func.frame_setup_insns.insert((b, idx + 1));
    }
}

/// Fold x86 signed-compare flag tests to the comparison they encode, where
/// the flags were set in another block: `ZF || SF != OF` after `cmp a, b`
/// lifts to `EQUAL(a, b) | (SLESS(a, b) ^ SBORROW(a, b))` and becomes
/// `SLESSEQUAL(a, b)`; the bare `SF != OF` becomes `SLESS(a, b)`.
/// `ConditionSimplifyPass` folds the same idiom inside a block; across blocks
/// the flags reach the test as named values and print as `// temp` locals.
/// The operands are re-read at the test, so a register operand must still
/// hold the compared value there.
fn fold_signed_flag_tests(func: &mut SsaFunction) -> bool {
    let facts = collect_facts(func);
    let mut defs: BTreeMap<SsaVarnode, Point> = BTreeMap::new();
    for (&(bid, idx, ref slot), &sv) in &func.var_map {
        if *slot == VarnodeSlot::Output {
            defs.insert(sv, (bid, idx));
        }
    }
    let insn_at = |(bid, idx): Point| func.function.blocks.get(&bid)?.insns.get(idx);
    // Peel width-only pass-throughs between a flag and its comparison.
    let compare_of = |sv: SsaVarnode| -> Option<(IrOp, Point)> {
        let mut point = *defs.get(&sv)?;
        for _ in 0..4 {
            let insn = insn_at(point)?;
            match insn.op {
                IrOp::Copy | IrOp::IntZext | IrOp::Subpiece => {
                    let src = func
                        .var_map
                        .get(&(point.0, point.1, VarnodeSlot::Input(0)))?;
                    point = *defs.get(src)?;
                }
                op => return Some((op, point)),
            }
        }
        None
    };
    let operands = |point: Point| -> Option<[Operand; 2]> {
        let insn = insn_at(point)?;
        let slot = |i: usize| {
            let raw = *insn.inputs.get(i)?;
            Some((
                raw,
                func.var_map
                    .get(&(point.0, point.1, VarnodeSlot::Input(i)))
                    .copied(),
            ))
        };
        Some([slot(0)?, slot(1)?])
    };
    let same = |p: Point, q: Point| -> Option<[Operand; 2]> {
        let (x, y) = (operands(p)?, operands(q)?);
        let eq = |a: &Operand, b: &Operand| {
            a.1 == b.1 && (a.1.is_some() || a.0 == b.0) && a.0.size == b.0.size
        };
        (eq(&x[0], &y[0]) && eq(&x[1], &y[1])).then_some(x)
    };
    // `SLESS(a, b) ^ SBORROW(a, b)` → the SLESS point and its operands.
    let signed_less = |x: SsaVarnode, y: SsaVarnode| -> Option<(Point, [Operand; 2])> {
        let ((ox, px), (oy, py)) = (compare_of(x)?, compare_of(y)?);
        let (sless, sborrow) = match (ox, oy) {
            (IrOp::IntSless, IrOp::IntSborrow) => (px, py),
            (IrOp::IntSborrow, IrOp::IntSless) => (py, px),
            _ => return None,
        };
        Some((sless, same(sless, sborrow)?))
    };

    let mut rewrites: Vec<(Point, IrOp, [Operand; 2], Point)> = Vec::new();
    for (&bid, block) in &func.function.blocks {
        for (idx, insn) in block.insns.iter().enumerate() {
            if !matches!(insn.op, IrOp::BoolOr | IrOp::BoolXor) || insn.inputs.len() != 2 {
                continue;
            }
            let (Some(&x), Some(&y)) = (
                func.var_map.get(&(bid, idx, VarnodeSlot::Input(0))),
                func.var_map.get(&(bid, idx, VarnodeSlot::Input(1))),
            ) else {
                continue;
            };
            let found = if insn.op == IrOp::BoolXor {
                signed_less(x, y).map(|(at, ops)| (IrOp::IntSless, ops, at))
            } else {
                [(x, y), (y, x)].into_iter().find_map(|(zf, xor)| {
                    let (IrOp::IntEqual, eq_at) = compare_of(zf)? else {
                        return None;
                    };
                    let (xor_op, xor_at) = compare_of(xor)?;
                    if xor_op != IrOp::BoolXor {
                        return None;
                    }
                    let xs = (
                        *func
                            .var_map
                            .get(&(xor_at.0, xor_at.1, VarnodeSlot::Input(0)))?,
                        *func
                            .var_map
                            .get(&(xor_at.0, xor_at.1, VarnodeSlot::Input(1)))?,
                    );
                    let (sless_at, ops) = signed_less(xs.0, xs.1)?;
                    same(eq_at, sless_at)?;
                    Some((IrOp::IntSlessequal, ops, sless_at))
                })
            };
            let Some((op, ops, compared_at)) = found else {
                continue;
            };
            let at = (bid, idx);
            let readable = ops.iter().all(|(_, sv)| match sv {
                Some(sv) if sv.base.space == SpaceId::Register => holds_until(
                    &facts,
                    &Holder {
                        register: *sv,
                        from: compared_at,
                    },
                    at,
                ),
                _ => true,
            });
            if readable && compared_at != at {
                rewrites.push((at, op, ops, compared_at));
            }
        }
    }

    let changed = !rewrites.is_empty();
    for ((bid, idx), op, ops, _) in rewrites {
        let Some(insn) = func
            .function
            .blocks
            .get_mut(&bid)
            .and_then(|b| b.insns.get_mut(idx))
        else {
            continue;
        };
        insn.op = op;
        for (input, (raw, sv)) in ops.into_iter().enumerate() {
            let key = (bid, idx, VarnodeSlot::Input(input));
            match sv {
                Some(sv) => {
                    insn.inputs[input] = if sv.base.space == SpaceId::Register {
                        Varnode::reg(sv.base.offset, raw.size)
                    } else {
                        sv.base
                    };
                    func.var_map.insert(key, sv);
                }
                None => {
                    insn.inputs[input] = raw;
                    func.var_map.remove(&key);
                }
            }
        }
    }
    changed
}

/// Give a register view that outlives its register a register of its own.
///
/// `mov edi, eax; shr eax, 1; and edi, 1` lifts to `u = SUBPIECE rax;
/// rax = rax >> 1; rdi = u & 1`: copy propagation reads `u` where the code
/// read `edi`, and the dead `rdi = ZEXT u` is deleted, so no register holds
/// the old `eax` any more and the printer declares `u` as a `// temp`. When
/// the last reader of `u` writes a register `R` that nothing reads or writes
/// between `u`'s definition and that write, the definition itself becomes the
/// write of a fresh `R` version — the `mov edi, eax` again — and every read
/// of `u` reads `R`. All of this happens inside one block.
fn rehome_views(func: &mut SsaFunction, trace: bool) -> bool {
    let mut uses: BTreeMap<SsaVarnode, Vec<(BlockId, usize, usize)>> = BTreeMap::new();
    for (&(bid, idx, ref slot), &sv) in &func.var_map {
        if let VarnodeSlot::Input(input) = *slot
            && sv.base.space == SpaceId::Unique
        {
            uses.entry(sv).or_default().push((bid, idx, input));
        }
    }
    let phi_inputs: BTreeSet<SsaVarnode> = func
        .phi_map
        .values()
        .flatten()
        .flat_map(|phi| phi.inputs.iter().map(|&(_, sv)| sv))
        .collect();
    let mut next_version: BTreeMap<Varnode, u32> = BTreeMap::new();
    for sv in func
        .var_map
        .values()
        .chain(func.phi_map.values().flatten().map(|phi| &phi.output))
    {
        let next = next_version.entry(sv.base).or_default();
        *next = (*next).max(sv.version + 1);
    }

    let mut plans = Vec::new();
    let mut claims: BTreeMap<(BlockId, u64), Vec<(usize, usize)>> = BTreeMap::new();
    for (&bid, block) in &func.function.blocks {
        for (def, insn) in block.insns.iter().enumerate() {
            let Some(&temp) = func.var_map.get(&(bid, def, VarnodeSlot::Output)) else {
                continue;
            };
            if temp.base.space != SpaceId::Unique
                || phi_inputs.contains(&temp)
                || !is_rehomable_op(insn.op)
            {
                continue;
            }
            let Some(reads) = uses.get(&temp) else {
                continue;
            };
            if reads.iter().any(|&(b, i, _)| b != bid || i <= def) {
                continue;
            }
            let last = reads.iter().map(|&(_, i, _)| i).max().unwrap_or(def);
            let view = register_view_source(func, bid, def, insn).filter(|src| src.size <= 8);
            // Until a register the value was computed from changes, the
            // printer can inline the computation at every reader; only a
            // value that outlives its operands needs storage of its own.
            if !inputs_redefined_before(func, bid, def, last) {
                continue;
            }
            let Some((register, end)) = written_register(func, &uses, bid, last) else {
                continue;
            };
            let width = temp.base.size;
            if !is_home_register(&register)
                || !(width == register.size || (width == 4 && register.size == 8))
                || register_touched_between(func, bid, def + 1, end, &register, temp)
            {
                continue;
            }
            // Plans are checked against the code before any rewrite, so two
            // overlapping ones could both claim `R`; keep the first.
            let interval = (def, end);
            let claimed = claims.entry((bid, register.offset)).or_default();
            if claimed.iter().any(|&(from, to)| from <= end && def <= to) {
                continue;
            }
            claimed.push(interval);
            plans.push((bid, def, register, view, temp, reads.clone()));
        }
    }

    let changed = !plans.is_empty();
    for (bid, def, register, view, temp, reads) in plans {
        let width = temp.base.size;
        // A register view becomes the zero-extending `mov` it was; a
        // computed value is written at its own width.
        let base = if view.is_some() || width == register.size {
            register
        } else {
            Varnode::reg(register.offset, width)
        };
        let next = next_version.entry(base).or_default();
        let home = SsaVarnode {
            base,
            version: *next,
        };
        *next += 1;
        if trace {
            tracing::debug!(
                target: "unlace::temp_home",
                "func={} rehome block={bid:?} insn={def} temp={temp:?} -> {home:?}",
                func.function.name,
            );
        }
        let Some(block) = func.function.blocks.get_mut(&bid) else {
            continue;
        };
        let insn = &mut block.insns[def];
        if let Some(src) = view {
            insn.op = if width == base.size {
                IrOp::Copy
            } else {
                IrOp::IntZext
            };
            insn.inputs = smallvec::smallvec![Varnode::reg(src.offset, width)];
        }
        insn.output = Some(base);
        func.var_map.insert((bid, def, VarnodeSlot::Output), home);
        for (_, idx, input) in reads {
            block.insns[idx].inputs[input] = Varnode::reg(base.offset, width);
            func.var_map
                .insert((bid, idx, VarnodeSlot::Input(input)), home);
        }
    }
    changed
}

/// Value-producing ops whose result may be written straight to a register.
fn is_rehomable_op(op: IrOp) -> bool {
    !matches!(
        op,
        IrOp::Store
            | IrOp::Call
            | IrOp::Callind
            | IrOp::Callother
            | IrOp::Branch
            | IrOp::Cbranch
            | IrOp::Branchind
            | IrOp::Return
            | IrOp::New
            | IrOp::Cpoolref
            | IrOp::Indirect
            | IrOp::Multiequal
    )
}

/// The register a `COPY`/low `SUBPIECE` temp reads, if the def is one.
fn register_view_source(
    func: &SsaFunction,
    bid: BlockId,
    def: usize,
    insn: &unlace_ir::IrInsn,
) -> Option<Varnode> {
    let low_view = insn.op == IrOp::Copy
        || (insn.op == IrOp::Subpiece
            && insn
                .inputs
                .get(1)
                .is_some_and(|c| c.space == SpaceId::Const && c.offset == 0));
    let src = func.var_map.get(&(bid, def, VarnodeSlot::Input(0)))?;
    (low_view && src.base.space == SpaceId::Register).then_some(src.base)
}

/// Whether a register `def` reads is written again before `last`.
fn inputs_redefined_before(func: &SsaFunction, bid: BlockId, def: usize, last: usize) -> bool {
    let Some(block) = func.function.blocks.get(&bid) else {
        return true;
    };
    let read: Vec<Varnode> = (0..block.insns[def].inputs.len())
        .filter_map(|input| func.var_map.get(&(bid, def, VarnodeSlot::Input(input))))
        .filter(|sv| sv.base.space == SpaceId::Register)
        .map(|sv| sv.base)
        .collect();
    (def + 1..last).any(|idx| {
        func.var_map
            .get(&(bid, idx, VarnodeSlot::Output))
            .is_some_and(|out| read.iter().any(|r| overlaps(r, &out.base)))
    })
}

/// The register written at the end of the value chain that ends at `idx`:
/// `idx`'s own register output, or the register a single-use temp output
/// is stored to further down the block. Returns it with that write's index.
fn written_register(
    func: &SsaFunction,
    uses: &BTreeMap<SsaVarnode, Vec<(BlockId, usize, usize)>>,
    bid: BlockId,
    idx: usize,
) -> Option<(Varnode, usize)> {
    let out = *func.var_map.get(&(bid, idx, VarnodeSlot::Output))?;
    if out.base.space == SpaceId::Register {
        return Some((out.base, idx));
    }
    let [(b, next, _)] = uses.get(&out)?.as_slice() else {
        return None;
    };
    let insn = func.function.blocks.get(b)?.insns.get(*next)?;
    let stored = *func.var_map.get(&(*b, *next, VarnodeSlot::Output))?;
    (*b == bid
        && matches!(insn.op, IrOp::Copy | IrOp::IntZext)
        && stored.base.space == SpaceId::Register)
        .then_some((stored.base, *next))
}

/// Whether anything other than reads of `view` touches `register` from
/// `from` on: a read up to and including `end`, or a write before `end`.
fn register_touched_between(
    func: &SsaFunction,
    bid: BlockId,
    from: usize,
    end: usize,
    register: &Varnode,
    view: SsaVarnode,
) -> bool {
    let Some(block) = func.function.blocks.get(&bid) else {
        return true;
    };
    (from..=end).any(|idx| {
        let insn = &block.insns[idx];
        let reads = insn.inputs.iter().enumerate().any(|(input, raw)| {
            let sv = func.var_map.get(&(bid, idx, VarnodeSlot::Input(input)));
            sv != Some(&view)
                && (overlaps(raw, register) || sv.is_some_and(|sv| overlaps(&sv.base, register)))
        });
        let writes = idx < end
            && (insn.output.is_some_and(|out| overlaps(&out, register))
                || func
                    .var_map
                    .get(&(bid, idx, VarnodeSlot::Output))
                    .is_some_and(|sv| overlaps(&sv.base, register)));
        reads || writes || matches!(insn.op, IrOp::Call | IrOp::Callind)
    })
}

/// Point every read of `t2` in `t2 = COPY t1` (both temps) at `t1`. Temps are
/// single-assignment, so the copy is the same value everywhere.
fn forward_temp_copies(func: &mut SsaFunction) -> bool {
    let mut copy_of: BTreeMap<SsaVarnode, SsaVarnode> = BTreeMap::new();
    for (&bid, block) in &func.function.blocks {
        for (idx, insn) in block.insns.iter().enumerate() {
            if insn.op != IrOp::Copy {
                continue;
            }
            let (Some(&out), Some(&src)) = (
                func.var_map.get(&(bid, idx, VarnodeSlot::Output)),
                func.var_map.get(&(bid, idx, VarnodeSlot::Input(0))),
            ) else {
                continue;
            };
            if out.base.space == SpaceId::Unique
                && src.base.space == SpaceId::Unique
                && out.base.size == src.base.size
            {
                copy_of.insert(out, src);
            }
        }
    }
    let root = |mut sv: SsaVarnode| {
        // Bounded: a malformed cycle must not hang the pass.
        for _ in 0..copy_of.len() {
            match copy_of.get(&sv) {
                Some(&src) if src != sv => sv = src,
                _ => break,
            }
        }
        sv
    };
    let mut changed = false;
    for (&bid, block) in &mut func.function.blocks {
        for (idx, insn) in block.insns.iter_mut().enumerate() {
            for (input, raw) in insn.inputs.iter_mut().enumerate() {
                let key = (bid, idx, VarnodeSlot::Input(input));
                let Some(&temp) = func.var_map.get(&key) else {
                    continue;
                };
                if !copy_of.contains_key(&temp) {
                    continue;
                }
                let src = root(temp);
                *raw = src.base;
                func.var_map.insert(key, src);
                changed = true;
            }
        }
    }
    changed
}

/// A point in a block: `(block, instruction index)`.
type Point = (BlockId, usize);

/// An instruction input: its raw varnode and its SSA value (none for a
/// constant).
type Operand = (Varnode, Option<SsaVarnode>);

/// A register version holding a temp's value from `from` onwards.
#[derive(Clone, Copy, Debug)]
struct Holder {
    register: SsaVarnode,
    from: Point,
}

#[derive(Debug)]
struct Rewrite {
    at: Point,
    input: usize,
    register: SsaVarnode,
    width: u8,
    /// For a rebased equality test: the constant input index and its new value.
    rebased: Option<(usize, u64)>,
}

struct Facts {
    idom: BTreeMap<BlockId, BlockId>,
    /// Register bases each block defines, by instruction index (phis use
    /// `None`, ordered before every instruction).
    defs: BTreeMap<BlockId, Vec<(Option<usize>, Varnode)>>,
    successors: BTreeMap<BlockId, Vec<BlockId>>,
    predecessors: BTreeMap<BlockId, Vec<BlockId>>,
}

/// Where the temps' values live in registers.
struct Values {
    /// Register versions holding a temp's value.
    holders: BTreeMap<SsaVarnode, Vec<Holder>>,
    /// `d = v + delta` for a temp `d`, keyed by the canonical value `v`.
    offsets: BTreeMap<SsaVarnode, Vec<(SsaVarnode, u64)>>,
    /// A view temp's register value and width (`u = SUBPIECE r#j` → `(r#j, 4)`).
    views: BTreeMap<SsaVarnode, (SsaVarnode, u8)>,
}

fn collect_values(func: &SsaFunction) -> Values {
    let mut holders: BTreeMap<SsaVarnode, Vec<Holder>> = BTreeMap::new();
    // Register versions holding the low `width` bytes of another register
    // version (`rsi#1 = ZEXT rax#3:i32`), keyed by `(rax#3, width)`.
    let mut value_holders: BTreeMap<(SsaVarnode, u8), Vec<Holder>> = BTreeMap::new();
    let mut offsets: BTreeMap<SsaVarnode, Vec<(SsaVarnode, u64)>> = BTreeMap::new();
    let mut views: BTreeMap<SsaVarnode, (SsaVarnode, u8)> = BTreeMap::new();

    // Raw varnodes are not authoritative this late (operands may be renamed);
    // spaces and versions come from the SSA slots.
    for (&bid, block) in &func.function.blocks {
        for (idx, insn) in block.insns.iter().enumerate() {
            let Some(&out_sv) = func.var_map.get(&(bid, idx, VarnodeSlot::Output)) else {
                continue;
            };
            let input_sv = |i: usize| {
                func.var_map
                    .get(&(bid, idx, VarnodeSlot::Input(i)))
                    .copied()
            };
            let Some(in_sv) = input_sv(0) else {
                continue;
            };
            let read_width = insn.inputs.first().map_or(0, |raw| raw.size);
            let holder = |register| Holder {
                register,
                from: (bid, idx),
            };
            match (insn.op, out_sv.base.space, in_sv.base.space) {
                (IrOp::Copy | IrOp::Subpiece, SpaceId::Unique, SpaceId::Register) => {
                    let low_view = insn.op == IrOp::Copy
                        || insn
                            .inputs
                            .get(1)
                            .is_some_and(|c| c.space == SpaceId::Const && c.offset == 0);
                    if !low_view || !is_home_register(&in_sv.base) {
                        continue;
                    }
                    let width = out_sv.base.size;
                    views.insert(out_sv, (in_sv, width));
                    if exact_register_read(width, in_sv.base.size) {
                        holders.entry(out_sv).or_default().push(holder(in_sv));
                    }
                }
                (IrOp::Copy | IrOp::IntZext, SpaceId::Register, SpaceId::Unique) => {
                    if out_sv.base.size >= in_sv.base.size && is_home_register(&out_sv.base) {
                        holders.entry(in_sv).or_default().push(holder(out_sv));
                    }
                }
                (IrOp::Copy | IrOp::IntZext, SpaceId::Register, SpaceId::Register) => {
                    if out_sv.base.size >= read_width
                        && is_home_register(&out_sv.base)
                        && is_home_register(&in_sv.base)
                    {
                        value_holders
                            .entry((in_sv, read_width))
                            .or_default()
                            .push(holder(out_sv));
                    }
                }
                (IrOp::IntAdd | IrOp::IntSub, SpaceId::Unique, _) => {
                    let Some(c) = insn.inputs.get(1).filter(|c| c.space == SpaceId::Const) else {
                        continue;
                    };
                    let delta = if insn.op == IrOp::IntAdd {
                        c.offset
                    } else {
                        c.offset.wrapping_neg()
                    };
                    let value = views.get(&in_sv).map_or(in_sv, |&(reg, _)| reg);
                    offsets.entry(value).or_default().push((out_sv, delta));
                }
                _ => {}
            }
        }
    }
    // A view is also held wherever its register value was copied to.
    for (view, key) in &views {
        if let Some(copies) = value_holders.get(key) {
            holders
                .entry(*view)
                .or_default()
                .extend(copies.iter().copied());
        }
    }
    Values {
        holders,
        offsets,
        views,
    }
}

fn plan_rewrites(func: &SsaFunction) -> Vec<Rewrite> {
    let facts = collect_facts(func);
    let Values {
        holders,
        offsets,
        views,
    } = collect_values(func);

    let mut rewrites = Vec::new();
    for (&bid, block) in &func.function.blocks {
        for (idx, insn) in block.insns.iter().enumerate() {
            let at = (bid, idx);
            for (input, raw) in insn.inputs.iter().enumerate() {
                let Some(&temp) = func.var_map.get(&(bid, idx, VarnodeSlot::Input(input))) else {
                    continue;
                };
                if temp.base.space != SpaceId::Unique {
                    continue;
                }
                if let Some(register) = readable_holder(&holders, &facts, temp, at) {
                    rewrites.push(Rewrite {
                        at,
                        input,
                        register,
                        width: raw.size,
                        rebased: None,
                    });
                    continue;
                }
                if let Some(rw) =
                    rebase_equality(&holders, &offsets, &views, &facts, insn, at, input, temp)
                {
                    rewrites.push(rw);
                }
            }
        }
    }
    rewrites
}

/// The printer names a register at its full width, so a temp may only be read
/// back through a register when that keeps the value exact: the whole
/// register, or an x86-64 32-bit view (whose writes zero the upper half).
fn exact_register_read(width: u8, register_size: u8) -> bool {
    width == register_size || (width == 4 && register_size == 8)
}

/// `if (old == k)` → `if (new == k + delta)` when `new = old + delta` is held
/// in a register at the test and `old` no longer is.
#[allow(clippy::too_many_arguments)]
fn rebase_equality(
    holders: &BTreeMap<SsaVarnode, Vec<Holder>>,
    offsets: &BTreeMap<SsaVarnode, Vec<(SsaVarnode, u64)>>,
    views: &BTreeMap<SsaVarnode, (SsaVarnode, u8)>,
    facts: &Facts,
    insn: &unlace_ir::IrInsn,
    at: Point,
    input: usize,
    temp: SsaVarnode,
) -> Option<Rewrite> {
    if !matches!(insn.op, IrOp::IntEqual | IrOp::IntNotequal) || insn.inputs.len() != 2 {
        return None;
    }
    let other = 1 - input;
    let k = insn.inputs[other];
    if k.space != SpaceId::Const {
        return None;
    }
    let width = insn.inputs[input].size;
    let value = views.get(&temp).map_or(temp, |&(reg, _)| reg);
    offsets.get(&value)?.iter().find_map(|&(new, delta)| {
        if new.base.size != width {
            return None;
        }
        let register = readable_holder(holders, facts, new, at)?;
        let mask = if width >= 8 {
            u64::MAX
        } else {
            (1u64 << (u64::from(width) * 8)) - 1
        };
        Some(Rewrite {
            at,
            input,
            register,
            width,
            rebased: Some((other, k.offset.wrapping_add(delta) & mask)),
        })
    })
}

/// The first register version holding `temp` whose register is not redefined
/// between where it receives the value and `at`.
fn readable_holder(
    holders: &BTreeMap<SsaVarnode, Vec<Holder>>,
    facts: &Facts,
    temp: SsaVarnode,
    at: Point,
) -> Option<SsaVarnode> {
    holders
        .get(&temp)?
        .iter()
        .find(|holder| holder.from != at && holds_until(facts, holder, at))
        .map(|holder| holder.register)
}

fn holds_until(facts: &Facts, holder: &Holder, at: Point) -> bool {
    let reg = holder.register.base;
    let (from_block, from_idx) = holder.from;
    let (use_block, use_idx) = at;
    let defines = |block: BlockId, range: &dyn Fn(Option<usize>) -> bool| {
        facts.defs.get(&block).is_some_and(|defs| {
            defs.iter()
                .any(|(idx, vn)| range(*idx) && overlaps(vn, &reg))
        })
    };
    if from_block == use_block && from_idx < use_idx {
        return !defines(from_block, &|i| {
            i.is_some_and(|i| i > from_idx && i < use_idx)
        });
    }
    // Across blocks: no definition after the holder in its block, none in any
    // block on a path from there to the use, and none before the use.
    if defines(from_block, &|i| i.is_some_and(|i| i > from_idx)) {
        return false;
    }
    if !dominates(facts, from_block, use_block) {
        return false;
    }
    let forward = reach(&facts.successors, from_block, from_block);
    let backward = reach(&facts.predecessors, use_block, from_block);
    if !forward.contains(&use_block) {
        return false;
    }
    let use_in_cycle = backward.contains(&use_block);
    for block in forward.intersection(&backward) {
        if *block == use_block {
            continue;
        }
        if defines(*block, &|_| true) {
            return false;
        }
    }
    if use_in_cycle && defines(use_block, &|_| true) {
        return false;
    }
    !defines(use_block, &|i| i.is_none_or(|i| i < use_idx))
}

fn dominates(facts: &Facts, dominator: BlockId, mut block: BlockId) -> bool {
    loop {
        if block == dominator {
            return true;
        }
        match facts.idom.get(&block) {
            Some(&parent) if parent != block => block = parent,
            _ => return false,
        }
    }
}

/// Blocks reachable from `start`'s neighbours in `edges`, never entering `stop`.
fn reach(
    edges: &BTreeMap<BlockId, Vec<BlockId>>,
    start: BlockId,
    stop: BlockId,
) -> BTreeSet<BlockId> {
    let mut seen = BTreeSet::new();
    let mut work: Vec<BlockId> = edges.get(&start).cloned().unwrap_or_default();
    while let Some(block) = work.pop() {
        if block == stop || !seen.insert(block) {
            continue;
        }
        work.extend(edges.get(&block).into_iter().flatten().copied());
    }
    seen
}

fn collect_facts(func: &SsaFunction) -> Facts {
    let mut defs: BTreeMap<BlockId, Vec<(Option<usize>, Varnode)>> = BTreeMap::new();
    for (&bid, phis) in &func.phi_map {
        let entry = defs.entry(bid).or_default();
        entry.extend(phis.iter().map(|phi| (None, phi.output.base)));
    }
    for (&bid, block) in &func.function.blocks {
        let entry = defs.entry(bid).or_default();
        for (idx, insn) in block.insns.iter().enumerate() {
            // Count both spellings of the output, raw and SSA, as a definition.
            if let Some(out) = insn.output.filter(|out| out.space == SpaceId::Register) {
                entry.push((Some(idx), out));
            }
            if let Some(sv) = func
                .var_map
                .get(&(bid, idx, VarnodeSlot::Output))
                .filter(|sv| sv.base.space == SpaceId::Register)
            {
                entry.push((Some(idx), sv.base));
            }
        }
    }
    let mut successors: BTreeMap<BlockId, Vec<BlockId>> = BTreeMap::new();
    let mut predecessors: BTreeMap<BlockId, Vec<BlockId>> = BTreeMap::new();
    for &bid in func.function.blocks.keys() {
        for (succ, _) in func.cfg.edges_from(bid) {
            if func.function.blocks.contains_key(&succ) {
                successors.entry(bid).or_default().push(succ);
                predecessors.entry(succ).or_default().push(bid);
            }
        }
    }
    let idom = func
        .function
        .blocks
        .keys()
        .filter_map(|&bid| func.dom_tree.idom(bid).map(|parent| (bid, parent)))
        .collect();
    Facts {
        idom,
        defs,
        successors,
        predecessors,
    }
}

fn apply(func: &mut SsaFunction, rw: &Rewrite) {
    let (bid, idx) = rw.at;
    let Some(insn) = func
        .function
        .blocks
        .get_mut(&bid)
        .and_then(|b| b.insns.get_mut(idx))
    else {
        return;
    };
    insn.inputs[rw.input] = Varnode::reg(rw.register.base.offset, rw.width);
    func.var_map
        .insert((bid, idx, VarnodeSlot::Input(rw.input)), rw.register);
    if let Some((other, value)) = rw.rebased {
        insn.inputs[other] = Varnode::constant(value, insn.inputs[other].size);
    }
}

/// Registers that may stand in for a temp: general registers, not the stack
/// pointer or the RFLAGS bits.
fn is_home_register(vn: &Varnode) -> bool {
    vn.space == SpaceId::Register && vn.offset != X86_RSP_OFFSET && !is_x86_flag_bit(vn)
}

fn overlaps(a: &Varnode, b: &Varnode) -> bool {
    let a_end = a.offset.saturating_add(u64::from(a.size));
    let b_end = b.offset.saturating_add(u64::from(b.size));
    a.space == b.space && a.offset < b_end && b.offset < a_end
}

#[cfg(test)]
mod tests {
    use smallvec::smallvec;

    use unlace_ir::ssa::build_ssa;
    use unlace_ir::{BasicBlock, Function, IrInsn};

    use super::*;

    const RBX: u64 = 24;
    const RDX: u64 = 16;

    fn x86_ssa(insns: Vec<IrInsn>) -> SsaFunction {
        let mut func = Function::new("test", BlockId(0), 0x1000);
        let mut bb = BasicBlock::new(BlockId(0));
        bb.insns = insns;
        func.insert_block(bb);
        let mut ssa = build_ssa(func);
        ssa.arch = ArchId::X86_64;
        ssa
    }

    fn input_sv(ssa: &SsaFunction, idx: usize, input: usize) -> SsaVarnode {
        ssa.var_map[&(BlockId(0), idx, VarnodeSlot::Input(input))]
    }

    fn output_sv(ssa: &SsaFunction, idx: usize) -> SsaVarnode {
        ssa.var_map[&(BlockId(0), idx, VarnodeSlot::Output)]
    }

    fn insn(ssa: &SsaFunction, idx: usize) -> &IrInsn {
        &ssa.function.blocks[&BlockId(0)].insns[idx]
    }

    /// `u = ebx + 1; rbx = ZEXT u; c = u != 8` reads the compare through `rbx`.
    #[test]
    fn read_after_store_uses_the_register() {
        let u = Varnode::unique(0x100, 4);
        let c = Varnode::unique(0x110, 1);
        let mut ssa = x86_ssa(vec![
            IrInsn::with_output(
                IrOp::IntAdd,
                u,
                smallvec![Varnode::reg(RBX, 4), Varnode::constant(1, 4)],
                0x1000,
            ),
            IrInsn::with_output(IrOp::IntZext, Varnode::reg(RBX, 8), smallvec![u], 0x1000),
            IrInsn::with_output(
                IrOp::IntNotequal,
                c,
                smallvec![u, Varnode::constant(8, 4)],
                0x1003,
            ),
            IrInsn::without_output(IrOp::Return, smallvec![c], 0x1005),
        ]);
        assert!(TempHomePass.run(&mut ssa).expect("pass runs"));
        let compare = ssa.function.blocks[&BlockId(0)]
            .insns
            .iter()
            .position(|i| i.op == IrOp::IntNotequal)
            .expect("compare kept");
        let home = ssa.function.blocks[&BlockId(0)]
            .insns
            .iter()
            .position(|i| i.op == IrOp::IntZext)
            .expect("home write kept");
        assert_eq!(input_sv(&ssa, compare, 0), output_sv(&ssa, home));
        assert_eq!(insn(&ssa, compare).inputs[0], Varnode::reg(RBX, 4));
    }

    /// `u = edx; rdx = ZEXT(edx - 1); c = u != 1` becomes `c = edx != 0`.
    #[test]
    fn old_counter_equality_is_rebased_onto_the_new_value() {
        let old = Varnode::unique(0x100, 4);
        let new = Varnode::unique(0x104, 4);
        let c = Varnode::unique(0x110, 1);
        let mut ssa = x86_ssa(vec![
            IrInsn::with_output(IrOp::Copy, old, smallvec![Varnode::reg(RDX, 4)], 0x1000),
            IrInsn::with_output(
                IrOp::IntSub,
                new,
                smallvec![Varnode::reg(RDX, 4), Varnode::constant(1, 4)],
                0x1000,
            ),
            IrInsn::with_output(IrOp::IntZext, Varnode::reg(RDX, 8), smallvec![new], 0x1000),
            IrInsn::with_output(
                IrOp::IntNotequal,
                c,
                smallvec![old, Varnode::constant(1, 4)],
                0x1003,
            ),
            IrInsn::without_output(IrOp::Return, smallvec![c], 0x1005),
        ]);
        assert!(TempHomePass.run(&mut ssa).expect("pass runs"));
        let block = &ssa.function.blocks[&BlockId(0)];
        let compare = block
            .insns
            .iter()
            .position(|i| i.op == IrOp::IntNotequal)
            .expect("compare kept");
        assert_eq!(insn(&ssa, compare).inputs[0], Varnode::reg(RDX, 4));
        assert_eq!(insn(&ssa, compare).inputs[1], Varnode::constant(0, 4));
        assert_eq!(input_sv(&ssa, compare, 0).base.offset, RDX);
    }

    /// A register written again before the read no longer holds the temp.
    #[test]
    fn clobbered_register_is_not_read_back() {
        let u = Varnode::unique(0x100, 4);
        let c = Varnode::unique(0x110, 1);
        let mut ssa = x86_ssa(vec![
            IrInsn::with_output(
                IrOp::IntAdd,
                u,
                smallvec![Varnode::reg(RBX, 4), Varnode::constant(1, 4)],
                0x1000,
            ),
            IrInsn::with_output(IrOp::IntZext, Varnode::reg(RBX, 8), smallvec![u], 0x1000),
            IrInsn::with_output(
                IrOp::Copy,
                Varnode::reg(RBX, 8),
                smallvec![Varnode::constant(0, 8)],
                0x1003,
            ),
            IrInsn::with_output(
                IrOp::IntNotequal,
                c,
                smallvec![u, Varnode::constant(8, 4)],
                0x1006,
            ),
            IrInsn::without_output(IrOp::Return, smallvec![c], 0x1008),
        ]);
        TempHomePass.run(&mut ssa).expect("pass runs");
        let compare = ssa.function.blocks[&BlockId(0)]
            .insns
            .iter()
            .position(|i| i.op == IrOp::IntNotequal)
            .expect("compare kept");
        assert_eq!(input_sv(&ssa, compare, 0).base.space, SpaceId::Unique);
    }

    const RBP: u64 = 40;

    /// Block 0: `u = SUBPIECE rbp`. Block 1: `rbp = 5; d = u - 1;
    /// rbx = ZEXT d`, plus `extra` before the read.
    fn view_read_past_clobber(extra: Vec<IrInsn>) -> SsaFunction {
        let u = Varnode::unique(0x100, 4);
        let d = Varnode::unique(0x104, 4);
        let mut func = Function::new("test", BlockId(0), 0x1000);
        let mut bb0 = BasicBlock::new(BlockId(0));
        bb0.insns = vec![
            IrInsn::with_output(
                IrOp::Subpiece,
                u,
                smallvec![Varnode::reg(RBP, 8), Varnode::constant(0, 1)],
                0x1000,
            ),
            IrInsn::without_output(IrOp::Branch, smallvec![], 0x1003),
        ];
        bb0.successors = smallvec![BlockId(1)];
        let mut bb1 = BasicBlock::new(BlockId(1));
        bb1.insns = vec![IrInsn::with_output(
            IrOp::Copy,
            Varnode::reg(RBP, 8),
            smallvec![Varnode::constant(5, 8)],
            0x1010,
        )];
        bb1.insns.extend(extra);
        bb1.insns.extend([
            IrInsn::with_output(
                IrOp::IntSub,
                d,
                smallvec![u, Varnode::constant(1, 4)],
                0x1020,
            ),
            IrInsn::with_output(IrOp::IntZext, Varnode::reg(RBX, 8), smallvec![d], 0x1020),
            IrInsn::without_output(IrOp::Return, smallvec![], 0x1023),
        ]);
        func.insert_block(bb0);
        func.insert_block(bb1);
        let mut ssa = build_ssa(func);
        ssa.arch = ArchId::X86_64;
        ssa
    }

    /// The read of `u` after `rbp` is clobbered gets `rbx = ZEXT rbp:i32`
    /// before the clobber and reads `rbx`: the `mov` propagation deleted.
    #[test]
    fn clobbered_holder_is_copied_to_the_destination_first() {
        let mut ssa = view_read_past_clobber(vec![]);
        let rbp_entry = input_sv(&ssa, 0, 0);
        assert!(TempHomePass.run(&mut ssa).expect("pass runs"));
        let block = &ssa.function.blocks[&BlockId(1)];
        let ops: Vec<IrOp> = block.insns.iter().map(|i| i.op).collect();
        assert_eq!(
            ops,
            vec![
                IrOp::IntZext,
                IrOp::Copy,
                IrOp::IntSub,
                IrOp::IntZext,
                IrOp::Return
            ]
        );
        assert_eq!(block.insns[0].output, Some(Varnode::reg(RBX, 8)));
        assert_eq!(block.insns[0].inputs[0], Varnode::reg(RBP, 4));
        assert_eq!(
            ssa.var_map[&(BlockId(1), 0, VarnodeSlot::Input(0))],
            rbp_entry
        );
        let home = ssa.var_map[&(BlockId(1), 0, VarnodeSlot::Output)];
        assert_eq!(home.base, Varnode::reg(RBX, 8));
        assert_eq!(block.insns[2].inputs[0], Varnode::reg(RBX, 4));
        assert_eq!(ssa.var_map[&(BlockId(1), 2, VarnodeSlot::Input(0))], home);
        // The clobber and the final write kept their SSA names.
        assert_eq!(
            ssa.var_map[&(BlockId(1), 1, VarnodeSlot::Output)].base,
            Varnode::reg(RBP, 8)
        );
        assert_eq!(
            ssa.var_map[&(BlockId(1), 3, VarnodeSlot::Input(0))],
            ssa.var_map[&(BlockId(1), 2, VarnodeSlot::Output)]
        );
    }

    /// A destination read between the clobber and the write is live there,
    /// so the temp keeps its own storage.
    #[test]
    fn destination_in_use_blocks_the_copy() {
        let mut ssa = view_read_past_clobber(vec![IrInsn::with_output(
            IrOp::IntAdd,
            Varnode::reg(RDX, 8),
            smallvec![Varnode::reg(RBX, 8), Varnode::constant(1, 8)],
            0x1014,
        )]);
        TempHomePass.run(&mut ssa).expect("pass runs");
        let block = &ssa.function.blocks[&BlockId(1)];
        let sub = block
            .insns
            .iter()
            .position(|i| i.op == IrOp::IntSub)
            .expect("sub kept");
        assert_eq!(
            ssa.var_map[&(BlockId(1), sub, VarnodeSlot::Input(0))]
                .base
                .space,
            SpaceId::Unique
        );
    }
}
