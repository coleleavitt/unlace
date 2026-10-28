# Research Ideas

This file is the *parking lot* for ideas that have not been promised, scheduled,
or scoped. Items here are deliberately speculative — if something here moves
forward it gets lifted into `plan.md` and `docs/handoffs/`. Do not treat any
entry here as a commitment.

## Output quality

- Hybrid SSA + Egg-based expression rewriter for the printer. Replace the
  current ad-hoc folding with an e-graph saturate + extract phase. The win
  would be principled cross-statement folding without duplicating side effects;
  the open question is cost on large CFGs.
- Cost model for IDA-style helper macros. Today we emit `LOBYTE` / `HIDWORD`
  whenever the pattern matches; a real cost model would prefer the explicit
  shift+mask when it leads to fewer parens or improves readability.

## Type recovery

- TIE-style constraint solver with explicit lattice for nominal vs structural
  types. Current `TypeConstraintSolverPass` is implemented but does not surface
  why a particular type was chosen — a witness-style trace would make audits
  comprehensible.
- Variant/sum-type recovery from Rust-style enum discriminants. We already
  recognise some `RustEnumPass` shapes; the harder case is non-trivial
  data-carrying variants.

## Control flow

- Region-tree-based goto elimination. The current pass set is mostly local
  pattern matches; a real region tree would let us decide which gotos are
  reducible and which are intrinsically irreducible before deleting labels.
- Cross-function inlining detection. Detect callee bodies that were inlined
  and re-merge them visually under the caller signature.

## Loaders and formats

- Mach-O kernel cache filesets (KEXTs + image4 wrappers). The parser exists in
  `unlace-loader/src/ios_img4.rs`, but extracting individual kernel extensions
  is non-trivial.
- Generic ARM Cortex-M firmware loader that follows the vector table to
  function discovery. Currently relies on user-provided base addresses.

## Tooling

- A "decompiler diary" mode: every output change is logged with the
  responsible passes, so post-hoc triage of an output regression is mechanical.

## What does NOT belong here

- Anything with a stakeholder. That goes in `plan.md`.
- Anything with a measurable acceptance criterion. That goes in a handoff.
- Anything that has actually shipped. That goes in `docs/status.md`.
