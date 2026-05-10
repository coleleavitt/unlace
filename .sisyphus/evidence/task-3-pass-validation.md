# Task 3 pass validation: `fixtures/medium.elf`

Command used:

```sh
RUST_LOG=unlace_struct=debug cargo run -q --bin unlace -- decompile fixtures/medium.elf --emit c -vv 2>&1
```

The requested `unlace decompile ...` path is equivalent to the workspace binary invocation above. Output showed pass-level debug instrumentation under the `unlace_struct` target.

## Pass firing summary

| Pass | Fires on medium.elf? | Representative input seen | Why / why not |
| --- | --- | --- | --- |
| `condition_simplify` SSA pass | Yes | `main`: 64 blocks, first run 999 insns; `f_rec_fib`: 46 blocks, 723 insns; `f_ackermann`: 91 blocks, 704 insns | Fires repeatedly to fixed point. It applies boolean/comparison canonicalization: `main` first run simplified 88 expressions, `f_rec_fib` simplified 61 then 1, `f_ackermann` simplified 55. Later fixed-point iterations report `simplified=0`. |
| `struct_field_detect` SSA pass | Yes, but no changes | `main`: 23 memory accesses, 0 base-plus-constant accesses; `f_rec_fib`: 40 memory accesses, 0 base-plus-constant accesses; `f_ackermann`: 18 memory accesses, 0 base-plus-constant accesses | The pass runs, but does not emit structs because medium.elf's analyzed memory accesses do not produce repeated nonzero base+constant offsets; `candidate_bases=0`, `changed=false`. |
| `ternary_recovery` | Yes, no recoveries | `main`: 3 if/else candidates; `f_rec_fib`: 1; `f_ackermann`: 23 | It runs and sees candidates, but all are skipped because they do not match the strict ternary shape: both branches must be single `COPY` statements to the same output. |
| `short_circuit` | Yes, no recoveries | `main`, `_start`, `f_rec_fib`, `f_ackermann`: `candidates=0`, `existing_bool_ops=0` | It runs, but medium.elf does not present nested/duplicated if-chain shapes suitable for `&&`/`||` collapse after current structuring. |
| `flatten_if_else` | Yes, no flattening | `main`, `_start`, `f_rec_fib`, `f_ackermann`: `candidates=0`, `remaining=0` | It runs, but no single-child else-block containing another if is present in the observed HIR. |
| HIR chain `condition_simplify` | Yes, no simplifications | `main`: 8 HIR if candidates, 288 def-map entries; `f_rec_fib`: 2 candidates, 163 entries | It runs after flattening, but simplified 0 chains because no adjacent chain predicates are identical or complementary under the def map. |
| `if_to_switch` | Yes, no switches | `main`: 8 if candidates; `f_rec_fib`: 2; `f_ackermann`: 25; `min_cases=3` | It runs, but converts 0 chains because candidates fail minimum case count and/or strict `IntEqual(expr, const)` same-expression chain requirements. |
| `while_to_for` | Yes, partial conversions | `main`: 11 while loops considered; `f_rec_fib`: 1; `f_ackermann`: 9 | It converts some loops (`main` 4/11, `f_rec_fib` 1/1). Skips happen when an init/update pair is not safe, post-loop liveness prevents promotion, or condition-only fallback is unavailable. |
| `goto_elim` | Yes, partial removals | `f_ackermann`: first observed 13 gotos, later removed 6; `sub_14b0`: removed 1 goto and 1 label; `main`: 1 goto/1 label remains initially | It runs several cleanup passes. It removes only redundant forward gotos to following labels; remaining gotos are not in that safe shape at that invocation. |
| `switch_recovery` | No in CLI pipeline | No `switch_recovery` debug lines appeared in the decompile trace | Instrumentation was added to `recover_switches` and `refine_switches_with_tables`, but the medium.elf CLI decompile pipeline does not call those functions. Grep confirms call sites are currently tests only, not the decompile pipeline. Thus it cannot fire on this command without changing pass logic/pipeline wiring, which this task forbids. |

## Notes

- The requested files `crates/unlace-struct/src/condition_simplify.rs` and `crates/unlace-struct/src/struct_field_detect.rs` do not exist in this checkout. The actual pass implementations are under `crates/unlace-passes/src/condition_simplify.rs` and `crates/unlace-passes/src/struct_field_detect.rs`; their debug events use `target: "unlace_struct"` so the requested `RUST_LOG=unlace_struct=debug` command captures them.
- No pass logic was intentionally changed; instrumentation records entry inputs and summary counts only.
- Build precheck: `cargo fmt --all && cargo check --workspace` passed.
