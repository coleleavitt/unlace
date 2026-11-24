# Original unlace: sparse constant propagation and known bits

Scope: `origin/master` `crates/unlace-passes/src/sccp.rs` (65 KB), `branch_fold.rs`, `known_bits_analysis.rs`, `known_bits_simplify.rs`, `const_fold.rs`, `lazy_value_info.rs`, `noreturn_propagation.rs`, and `crates/unlace-ir/src/known_bits.rs` and `value_lattice.rs`, compared with `origin/main`. Read statically from source (not comments). Nothing was built or run. "partial" means main has the same idea in a narrower form. Line numbers: master refs are for `origin/master`, main refs for `origin/main` at `73e711d205`.

Main has no whole-function lattice pass. Its constant propagation is Ghidra-style: rule pools, `ActionDeterminedBranch`, `condconst`, and the `nzm` (may-be-nonzero) mask. Master's SCCP and branch folding are the parts main lacks.

## Ranked table

| # | Technique | Original (origin/master) | Main status (origin/main) | Worth porting and why | Size |
|---|---|---|---|---|---|
| 1 | Sparse conditional constant propagation: CFG-edge reachability worklist, phi meets over feasible predecessors only, external inputs forced to Bottom, unresolved Top left in place | `sccp.rs:1-17` (algorithm), `:194` init_external_inputs, `:381` eval_phi, `:448` visit_cbranch, `:559` solve_with_budget, `:1108` rewrite | **missing** as a lattice pass. Partial: `condconst.rs:1-24` (ActionConditionalConst port: constant down one CBRANCH edge, through MULTIEQUAL edges); `coreaction_early.rs:1023` ActionDeterminedBranch (CBRANCH on a literal constant only); `coreaction_early.rs:715` ActionUnreachable | Yes, behind an option. It kills dead arms that the equality-only condconst cannot see, and the phi filter is what makes them die. Needs a work budget (master's `SccpLimits`, `:29-56`) and a 0/675 parity check before any default flip | M |
| 2 | Constant-branch fold over symbolic `base + offset` values, with dead-edge removal and CFG/phi repair. The motivation is that dead edges from peeled loop guards make `goto`-into-loop shapes | `branch_fold.rs:1-20` (doc), `:75` collect_folds, `:169` Base, `:232` Evaluator, `:297` reaching_def, `:339` def_value, `:360` eval_insn | **partial**: `vaargconst.rs:86` tracks SP-relative symbolic values but only for vaarg; `opaqueimplied.rs:1-30` (option `opaquepredicate`) decides comparisons from dominating branches on the same values. No symbolic-base fold for loop guards or peeled checks | Yes. It targets structure quality, which fits the decompiler-structure work. Keep it separate from #1, since it works on symbolic values that SCCP leaves as Bottom | M |
| 3 | Full `KnownBits` (known-zero and known-one masks) with transfer functions for and/or/xor, shifts, zext/sext/trunc, add/sub, and `count_min_leading_zeros` | `known_bits.rs:106` and, `:118` or, `:128` xor, `:143` shl, `:156` lshr, `:175` ashr, `:211` zext, `:225` sext, `:248` trunc, `:260` add, `:292` sub | **partial**: `funcdata_varnode.rs:161` calc_nz_mask gives only a may-be-nonzero mask; `ruleaction_4.rs:105` nzmask_of; `coreaction_early.rs:463` ActionNonzeroMask. No known-one bits | Yes, as a query helper in `unlace-middle`, not a pass. Known-one bits are what let rules prove `x | c` and mask identities that nzm cannot. Do NOT port `known_bits_analysis.rs` as written: it is one pass in no particular order with an explicit TODO for a fixpoint over PHI chains | M |
| 4 | Fold a whole result to a constant when known bits fix every bit (`known_bits_simplify.rs:21-100`: x&0, x|-1, shifts by width) | `known_bits_simplify.rs:21` pass, `:34` run | **partial**: `coreaction_early.rs` ActionVarnodeProps const-folds when consumed bits and nzm are disjoint; rule pool `ruleaction_1.rs:766` RuleOrMask and the identities in `passes-algebra.md` | Only after #3. Then it is a small rule over the new bits | S |
| 5 | Never rewrite a LOAD that is MMIO or volatile to a constant COPY, and count the preserved accesses | `sccp.rs:1131-1140` alias-category barrier, `record_preserved`; test `:1800-1830` | **partial**: `volatileload.rs:133` is_volatile keeps a proven volatile load live, driven by type qualifiers. No `AliasCategory::Mmio` tag on main (no hit in `unlace-ir`) | Yes, small. Add a check that the volatile guard also covers MMIO-tagged loads, with the preserved counter for observability | S |
| 6 | Do not fold values that feed CALLOTHER inputs (e.g. CMOVcc condition flags) into constants | `sccp.rs:1043-1060` collect_callother_input_defs, used in `rewrite` | **not located**: no grep hit for a CALLOTHER-input protection in the constant-propagation paths on main | Unverified. Write a regression test first (CMOVcc flag inputs under condconst and the rule pool). Port only if the test folds | S |
| 7 | Constant evaluator table for SCCP and const-fold | `sccp.rs:789-1000` evaluate; `const_fold.rs` | **have**: `condconst.rs` header says `executeSimple` is reproduced through the engine OpBehavior table | No | - |
| 8 | Interval arithmetic (`ConstantRange`: exact, full, unsigned, intersect, add) | `known_bits.rs:346` ConstantRange | **have**: `unlace-middle/src/substrate/rangeutil.rs:83` CircleRange (Ghidra circle ranges), `:777` intersect | No | - |
| 9 | Shared `ValueLattice` (Unknown / Undef / Constant / Range / Overdefined) with join and meet | `value_lattice.rs:1-94` | **partial**: no shared type. `crates/unlace-analysis/src/listing/switchtable.rs:72-80` folds a four-value lattice for jump tables, and `opaqueimplied.rs` keeps intervals | No. A separate type is a refactor, not a technique. #1 can use its own lattice | - |
| 10 | Edge-sensitive value facts (`LazyValueInfo`, keyed by block or edge) | `lazy_value_info.rs:17` | **have, by other means**: `opaqueimplied.rs` covers the dominating-edge use. Master's LVI has no caller outside its own test and `lib.rs:428` re-export, so it is dead code there | Skip | - |
| 11 | Noreturn propagation to a fixpoint through callers | `noreturn_propagation.rs:1-20` | **have** at the analysis tier: `unlace-analysis/src/analyzers/noreturn_propagate/mod.rs:94-108` (default on). The IR-level trim of dead instructions after a promoted tail call is partial | Skip; the analysis tier covers it | - |

## Not assessed here

- `caller_param_propagate.rs`: caller-to-callee type propagation belongs to the types area, not constant propagation.
- `inline_foldback.rs`: idiom recognition, covered by `notes/orig-unlace/passes-idioms.md`.

## Suggested order

1. #1 SCCP as an option-gated pass, reusing the `SccpLimits` shape.
2. #3 known-one bits in `unlace-middle`, then #4 as a rule over them.
3. #2 symbolic branch folding, after #1 is in, so the two can share the dead-edge repair.
4. #5 and #6 as small guards, each with a test.

Tracking issues for #1, #2 and #3 are opened after this PR merges.
