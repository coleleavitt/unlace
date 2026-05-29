# x87 FPU stack / TOP-tracking — research grounding for t54

Research gathered 2026-05-29 to ground the x87 top-of-stack (TOP) tracking
implementation. Sources below; the model is standard and well-attested.

## Authoritative sources

1. **Formal Specification of the x87 Floating-Point Instruction Set** — Sabine
   Bartels / Saarland (WJP group), `Ba08.pdf`
   (https://www-wjp.cs.uni-saarland.de/publikationen/Ba08.pdf).
   Key fact: "there is a top-of-stack pointer `top(f)` stored in the x87 status
   word referring to the element at the top of the stack. `top(f) = f.fsw[13:11]`."
   The 8 data registers form a *rotating* stack indexed relative to TOP.

2. **The pitfalls of verifying floating-point computations** — Monniaux
   (https://hal.science/hal-00128124v4/file/floating-point-article.pdf, ACM TOPLAS
   2008). Documents x87/IA32 80-bit-internal vs 64-bit semantics and why abstract
   interpretation must model the x87 stack precisely (Section 7).

3. **Intel 64 and IA-32 Architectures SW Developer's Manual, Vol. 1 ch. 8**
   (x87 FPU) and Vol. 2 (per-instruction TOP effects). Canonical push/pop rules.

## The model to implement

The x87 register file is 8 physical registers R0..R7. Programs address them
through `ST(i)`, which is **relative to TOP**:

    ST(i)  ==  physical R[(TOP + i) mod 8]

`TOP` is a 3-bit modular counter. Instruction effects on TOP:

- **push** (FLD, FILD, FBLD, FLD1/FLDZ/FLDPI/… constant loads):
  `TOP ← (TOP - 1) mod 8`, then write the loaded value into the new `ST(0)`.
- **pop** (FSTP, FISTP, FBSTP; and the `P`-suffixed arithmetic FADDP/FMULP/
  FSUBP/FSUBRP/FDIVP/FDIVRP/FCOMP/FCOMPP — FCOMPP pops twice):
  perform the store/op into its destination, then `TOP ← (TOP + 1) mod 8`
  (twice for FCOMPP / the double-pop forms).
- **exchange** (FXCH ST(i)): swap ST(0) ↔ ST(i); TOP unchanged.
- **non-popping arithmetic / compare** (FADD/FSUB/FMUL/FDIV/FCOM/FUCOM,
  FLD-to-ST forms that don't push, FST without P): operate relative to TOP,
  TOP unchanged.
- **FINCSTP / FDECSTP**: explicit `TOP ± 1`. **FFREE**: no TOP change.
  **FNINIT / FRSTOR**: reset TOP to a known value (7 / loaded).

In *well-formed* compiler output the net TOP delta over a function (and around
balanced regions) is statically known and the stack is balanced at returns, so
a static pass can compute a concrete TOP at every program point.

## Why unlace currently mis-models it (verified by the t54 explore agent)

`crates/unlace-lift-x86/src/ops/fpu.rs` + `register_file::st_reg(i)` return a
**fixed** varnode keyed by the literal ST index, with NO TOP tracking. So:
- two `fldt` both write `st0` → the first def is dead/overwritten;
- FMUL/FXCH/FADD read `st1` which no FLD ever defined → read-uninitialised;
- the dead FLD survives DCE (Callother is side-effecting), leaking a spurious
  load (e.g. `sum_squares_x87`).

`Lifter::lift_insn` lifts ONE instruction with no function context, so TOP
cannot be threaded *inside* the lifter. The correct architecture is a
**post-lift SSA/IR pass** (in `unlace-passes`, early — before copy-prop/DCE)
that:

1. Walks the CFG in a forward dataflow, carrying an integer `top` (mod 8).
2. At each x87 op, rewrites its ST(i) operands to physical `R[(top+i)%8]`
   varnodes (a distinct register-space offset band reserved for the 8 x87
   physical regs), then applies the push/pop TOP delta.
3. Reconciles `top` at CFG join points: in well-formed code all predecessors
   agree; if they disagree (irreducible / hand-asm), fall back to leaving the
   ST(i) refs untouched for that region (conservative — no worse than today).
4. After rewriting, the duplicate-st0 collisions disappear: the two FLDs write
   R[7] then R[6], FMUL reads the right slots, and ordinary
   copy-prop/DCE/folding then clean up naturally.

This is a cross-cutting producer feature (new pass + register-file ST-physical
band + tests), hence delegated as a dedicated multi-session effort.
