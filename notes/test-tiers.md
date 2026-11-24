# Test tiers: what each gate proves

Proposal, 2026-11-24 (testinfra). Every test answers one of five questions. Sorting the existing
suites by question shows which gates are redundant, which run too often for what they prove, and
which slow tests belong in the nightly run instead of every push.

| Tier | Question it answers | Fails when | Cost |
|---|---|---|---|
| T1 datatest compatibility | Does the engine still produce Ghidra's output where we claim parity? | a `docs/baseline.json` key stops passing | about 1 min on 8 workers |
| T2 stage behaviour | Does each decision we made (a fix, an option, a default) still do what its test says? | a stage assertion fails | a few minutes for 931 files |
| T3 determinism | Same input, same bytes, whatever the process, hash seed or `--jobs`? | two runs differ; a new unordered-map iteration | seconds (lint), about 1 min (run) |
| T4 semantic compile-and-run | Is the emitted C (Go, Rust) a program that computes what the binary computes? | the emitted code fails to compile, or computes a different result | tens of seconds per test; the 7 slowest 40-80 s each |
| T5 real-binary quality | On real binaries, is the output closer to source than last night's (GED, type match) and no slower? | a score or speed drop past the threshold | an hour or more; needs the decbench dataset |

T1 and T2 prove compatibility and intent on synthetic bytes. T3 is a property of every output, so
it runs on a small fixed corpus. T4 is the only tier that checks meaning rather than text. T5 is
the only tier that measures quality instead of pinning it, so it has to compare against a moving
baseline (last night) and cannot gate a PR.

## Where the existing tests sit

| Suite | Tier | Where it runs now |
|---|---|---|
| `tests/datatests` (83 files, 675 assertions) vs `docs/baseline.json`: `unlace-harness --test parity datatests_match_the_baseline` | T1 | tests.yml `gates` (every PR and push) |
| `tests/stages` (every assertion must pass): `stage_tests_pass` | T2 | tests.yml `gates` |
| `tests/golden/vectors` (opbehavior, float, addrsort, lift CSVs), `unlace-ghidra` differential harness | T1 (operator and lift level) | workspace suite; `gates` (unlace-ghidra) |
| `tests/cli` (334 JSON probes, `scripts.repipe.clitests`) | T2 (CLI surface) | `gates` |
| `unlace catalog --check`, `docs/options.md` freshness, `tools/check_spec.py`, `scripts.repipe.counters` | T2 (metadata consistency) | `gates` |
| `scripts/check_determinism.py` (lint) / `--run` | T3 | `tidy` / `gates` |
| Crate unit tests and integration suites (`unlace-cli` 398 test files, `unlace-console` 233, `unlace-decomp` 168, `unlace-sleigh` 35, others) | mostly T2; T4 where they compile output | workspace suite (nextest `ci`, 3 partitions) |
| Tests that build and run what the decompiler emitted (about 129 test files call `cc`/`clang`/`zig`/`rustc`/`go`, nearly all in `unlace-cli/tests`) | T4 | workspace suite |
| `tools/semantic`: each function of 12 construct programs, decompiled, recompiled in place of the original and run (gcc, clang, zig aarch64; -O0, -O2), vs `tools/semantic/baseline.toml` | T4 (corpus) | nightly.yml `semantic` job (since 2026-11-24; `tools/semantic/README.md`), results in `notes/semantic-results.md` |
| `tests/bug-repro`, `tests/hang-repro` binaries | T5 inputs (a regression check once an issue is fixed) | through the CLI tests that name them |
| decbench sample (`nightly.yml` `decbench`, `scripts/nightly`), `scripts/quality` | T5 | nightly.yml, manual dispatch only (no schedule yet) |
| CodSpeed benchmarks (`unlace-bench`) | T5 (speed) | codspeed.yml, every PR and push |
| Coverage (`cargo llvm-cov`, every test) | none (measurement) | coverage.yml, daily |

## Findings

1. **T1 and T2 already run once.** Since ci/parity-once the nextest `ci` profile skips
   `unlace-harness::parity`, so the corpora run only in the `gates` job. With
   `UNLACE_PARITY_FILES` (#1033) a local check of one stage file no longer runs all 931, and
   `target/parity-times.toml` (#1036) names the slow files from any CI run.
2. **Newly passing assertions are a T1/T2 event, not a failure.** The report classifies must-pass,
   regressed and newly passing (#1039); a bless stays a deliberate commit that names what it adds.
3. **The 7 slow T4 tests run nowhere on a schedule but coverage.** `.config/nextest.toml` drops
   them from `ci`; only coverage.yml runs them, under instrumentation, where a failure does not
   fail anything (the report is uploaded either way). They are T4 checks worth a red signal:
   - `unlace-cli::integration` `stack_struct::every_build_declares_the_record_and_prints_c`
   - `unlace-cli::integration` `stack_parameter_lifetimes::wider_stores_keep_their_width_in_narrow_parameter_slots`
   - `unlace-cli::integration` `indirect_dispatch::reentered_dispatches_preserve_each_effect_and_the_callers_return`
   - `unlace-console::integration` `verify_arm_context::generated_graphs_preserve_calls_modes_and_c_across_layouts_and_reuse`
   - `unlace-console::integration` `verify_pdecode::decode_lanes_produce_the_serial_listing`
   - `unlace-cli::decompile_all_cli` `the_memory_limit_defaults_to_the_cgroup_cap`
   - `unlace-cli::decompile_all_cli` `jobs_names_synthesized_structs_as_the_serial_run_does`
4. **nightly.yml calls tests.yml whole**, so its `tests` job repeats exactly what the last push to
   main ran and adds nothing. The nightly is the natural home for the slow set above.

## Proposal

- **Per PR (gates job):** T1, T2, T3 and the metadata checks, as now. Budget: about 10 minutes.
- **Per push to main and full-ci PRs (workspace suite, nextest `ci`):** crate tests including the
  fast T4 tests, as now.
- **Nightly (nightly.yml):** replace the `tests: uses: ./.github/workflows/tests.yml` job with a
  job that builds the workspace tests once and runs `cargo nextest run --profile nightly`, a new
  profile whose `default-filter` is exactly the seven tests in finding 3 (keep the list in one
  place: the `ci` profile's exclusion and the `nightly` profile's inclusion both read it, or a
  test in `scripts/tests` checks the two lists agree). Then the decbench job, as now. Give
  nightly.yml its schedule once the first manual run has produced a baseline.
- **Candidates to move next**, once `parity-times.toml` and the JUnit reports show their wall
  time: any stage file over 10 s (`vaarg-loop-gcc.toml` is 6 MB and is the first to measure)
  can move to a nightly-only corpus directory; the T4 tests over 30 s on a CI runner join the
  nightly profile. A move needs the measured time in its PR.
- **T4 as a corpus:** `tools/semantic/run.py --baseline tools/semantic/baseline.toml` in its own
  nightly job with pinned compilers; a row that stops passing fails it. Its x86_64-gcc subset
  (about 4 s) is the candidate for the per-PR gates once its known failures are fixed or recorded
  (proposal in `tools/semantic/README.md`).
- **Not moved:** T1 and T2 stay per PR. They are the gates that catch a regression at the PR that
  causes it, and per-file selection and the times artifact make them cheap to iterate on locally.

## Status: what runs where (2026-11-24)

**T1 and T2 run once per event.** `tests.yml`'s `gates` job runs `cargo test --release -p unlace-harness --test parity`, which is both corpora. Nothing else in `tests.yml` runs that binary: `rust-test-build` only archives the test binaries and runs `cargo test --doc`, and the three `rust-test` partitions run `--profile ci`, whose `default-filter` excludes `binary_id(unlace-harness::parity)`. `scripts/check_test_tiers.py` (run through `scripts/tests` in the tidy job) keeps the `nightly` profile's seven tests equal to the `ci` exclusions.

| Tier | Every pull request | Push to main | Nightly (`nightly.yml`, 07:17 UTC, and dispatch) | Daily coverage (`coverage.yml`) |
|---|---|---|---|---|
| T1 datatests; golden and ghidra differential | `gates` (parity, once) | `gates` (parity, once) | not run | runs (every test, parity included) |
| T2 stages, `tests/cli` probes, catalog and spec metadata | `gates` | `gates` | not run | runs |
| T3 determinism | `tidy` (static lint), `gates` (`--run`) | same | not run | runs |
| T4 fast crate tests | `rust-test` partitions only for fork PRs and PRs with `full-ci`; skipped for internal PRs | `rust-test` partitions (`ci` profile) | not run | runs |
| T4 the seven slow tests | not run (excluded from `ci`) | not run | `slow-tests` (`nightly` profile) | runs |
| T4 semantic corpus (`tools/semantic`) | not run | not run | `semantic` (`--baseline`) | not run |
| T5 decbench sample | `decbench` only for a PR that edits `nightly.yml` or `scripts/nightly/**` | not run | `decbench` (vs last night's build) | not run |

**Behaviour change.** The nightly no longer calls `tests.yml`, so it no longer repeats the gates and the workspace suite (they already ran on the push to main it builds from). The nightly is now the only scheduled run of the seven slow tests and of the semantic corpus. Its verdict has three rows: slow tests, semantic, decbench.

**Not yet proven on CI.** This change was written without running the workflows. The first manual dispatch of `nightly.yml` is the check: the `semantic` job's "Record the compilers" step prints the versions to copy into `notes/semantic-results.md`, and the zig download is pinned by version but not by checksum. The other pins (gcc and clang) come from the runner image.
