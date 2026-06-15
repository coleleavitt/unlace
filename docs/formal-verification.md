# Formal verification of unlace decompiler cores (Rocq/Coq)

unlace ships machine-checked mathematical proofs of its core static-analysis
and IR-transformation math, in `rocq-tests/`. The ambition is concrete: a
**provable-correctness lead** over IDA/Ghidra/Hex-Rays on the verified cores.
Those tools are tested; the unlace cores covered here are *proved* — every
theorem is checked by the Rocq 9.1 kernel with **zero admits and zero axioms**
(`Set` predicative, no rewrite rules, no type-in-type), independently
re-verified by `coqchk`.

This document is the contract for keeping the proofs honest and in sync with
the Rust.

## Methodology: spec-mirroring, not extraction

We do **not** extract Rust from Coq, nor Coq from Rust. Instead each `.v` file
**spec-mirrors** a named Rust module: it restates the Rust function as a Coq
function, arm-for-arm, in the same priority order, then proves a
soundness/algebraic-law specification about it.

Why spec-mirroring over extraction:
- The Rust is the shipping artifact and must stay idiomatic, fast, and
  `#![forbid(unsafe)]`-clean; we do not want machine-generated Coq-extracted
  Rust in the hot path.
- The proofs target the *mathematical content* (lattice laws, abstract-domain
  soundness, rewrite equivalence), which is stable even as the Rust's data
  structures and performance details change.
- It keeps the trusted computing base tiny: the kernel + the mirror, nothing
  else.

The cost of spec-mirroring is **drift risk**: the Coq could fall out of step
with the Rust. We close that with the conformance harness (below).

## The conformance harness (pins the mirror)

`crates/unlace-ir/tests/coq_conformance.rs` is the anti-drift gate. For every
proven Coq theorem there is a Rust test that exercises the *real* Rust
implementation against the *exact equation the Coq assumes*. If someone edits
`ValueLattice::join`, `KnownBits::and/or/xor`, or an algebraic identity in a way
that breaks a proven law, `cargo test -p unlace-ir --test coq_conformance`
fails — before the stale `.v` is trusted.

The harness already earned its keep: it surfaced that the Rust `contains`
(precise-fact predicate) is **not** the same as the Coq `gamma` (abstract
concretization) on the top/bottom arms — `Overdefined` is γ=⊤ but
`contains` returns `false`. The soundness theorems are stated over `gamma`, so
the harness models `gamma` faithfully and documents the distinction. That kind
of semantic gap is exactly what spec-mirroring must catch.

## The gamma / soundness convention

Abstract domains follow the gamma-only (Verasco-style) formulation:
- Each abstract element `a` has a **concretization** `gamma a : set of concrete
  values` — the set of machine values it stands for.
- An abstract transfer function `f#` is **sound** for the concrete `f` when
  `x ∈ gamma a  ⇒  f x ∈ gamma (f# a)` (it over-approximates).
- A `meet`/refinement is sound when `gamma (meet a b) ⊆ gamma a ∩ gamma b`
  (it under-approximates the intersection).

Two distinct orders show up and must not be conflated (this is the standard
abstract-interpretation subtlety, and a place naive proofs go wrong):
- the **concrete order** `gamma a ⊆ gamma b` (set inclusion of values); and
- the **abstract order** `a ⊑ b ⟺ join a b = b`.
`join` is the least upper bound in the *abstract* order; over the *concrete*
order it is only an over-approximation (a widening `join` of two ranges admits
values in neither). `ValueLattice.v` proves the LUB law on the abstract order
and the over-approximation law on `gamma`, separately, for this reason.

## Proof techniques used

- **Bit-blasting** (`KnownBits.v`, parts of `AlgebraicSimplify.v`): rewrite
  through `Z.land_spec`/`Z.lor_spec`/`Z.lxor_spec`/`Z.lnot_spec`, conclude
  per-bit with boolean reasoning (`btauto`) or case split, then lift to
  integer equality with `Z.bits_inj'` (`same_bits_eq` in `Bitvector.v`).
- **Fixed-width modeling** (`Bitvector.v`): a width-`w` machine integer is a
  `Z` kept canonical by `wrap w x = x mod 2^w = Z.land x (mask w)`. `mask`/
  `wrap` bit lemmas make width reasoning uniform.
- **Exhaustive case analysis with bounded automation** (`ValueLattice.v`):
  the 5×5(×5) enum-arm matches are discharged by a single-pass `destruct`
  over `Z.eqb`/`Z.leb` guards + `lia` on the `Z.min`/`Z.max` endpoints. (A
  doubly-nested `repeat match` blows the proof up to minutes; the single-pass
  form stays sub-second — see the comment on `join_assoc`.)

## Modeling assumptions (read before overclaiming)

Each `.v` documents its own scope; the load-bearing ones:
- `AlgebraicSimplify.v` models **unsigned** canonical reps; signed
  `IntSDiv`/`IntSRem` are out of scope. Rules are proved at all widths
  (`0 <= w`), the w=64 instance matching raw `u64`.
- `TInfo.v` proves the **flat** `get_best_fit_member` case; nested
  struct/union/array recursion is a separate obligation. Offsets are modeled
  over `nat` (unbounded), so `u64` `saturating_add` wraparound near 2^64 is
  not exercised — an explicit, documented fidelity gap.
- `KnownBits.v` `meet`/`Undef`: `Undef` is the identity for *both* join and
  meet (LLVM "undef refines to anything"), so no single `gamma` is sound for
  both; `meet_sound` is scoped to the Undef-free fragment, and that scoping is
  itself the machine-checked statement of why undef is special.

## How to add a proof when a Rust core changes

1. Edit the Rust core as usual.
2. Update the mirrored `.v` so its Coq function matches the new Rust arms.
3. Re-run `bash scripts/verify_proofs.sh` — it rebuilds and `coqchk`-verifies
   zero axioms. Fix any broken proof (do **not** `Admitted` it).
4. Add/adjust the matching check in `coq_conformance.rs` so the Rust↔Coq link
   is pinned.
5. Update `rocq-tests/COVERAGE.md` (the gap ledger) if status changed.

## Gates

```bash
bash scripts/verify_proofs.sh                          # build + coqchk, no admits/axioms
RUSTC_WRAPPER= cargo test -p unlace-ir --test coq_conformance   # pin the mirror
```

Both are wired into `scripts/quality_axes.sh` as a fourth "formal" axis.

## Bibliography (what each proof draws on)

See `research/formal/bibliography.md` for downloaded papers. Key references:
- **CompCert** `backend/Lattice.v` — the `SEMILATTICE` signature and Kildall
  dataflow; the template for `ValueLattice.v`'s order/LUB and the future
  `Kildall.v`.
- **Verasco** (Jourdan et al., POPL'15) — gamma-only abstract-domain soundness;
  the convention used in `KnownBits.v`/`ValueLattice.v`.
- **Vellvm / VIR** (Zdancewic et al.) — verified LLVM IR semantics, SSA +
  dominance; the template for the future `Dominance.v`/`SsaWf.v`.
- **Alive2** (Lopes et al., PLDI'21) and **Menendez & Nagarakatte** (PLDI'17,
  precondition inference) — peephole-rewrite verification; the model for
  `AlgebraicSimplify.v` (lhs ≡ rhs under precondition, over bitvectors).
- **coq-bbv** / **CompCert `Integers`** — fixed-width bitvector libraries; we
  use a `Z`+`wrap` model in the same spirit (`Bitvector.v`).
- **IDA `calc_tinfo_gaps` / `udt_type_data_t::get_best_fit_member`** — the
  struct-recovery algorithms mirrored in `TInfo.v`.
