# FLIRT: techniques on origin/master that main lacks

Scope: origin/master `crates/unlace-flirt` (IDASGN reader and writer, bundled signature sets, generator, matcher), origin/master `crates/unlace-loader/src/flirt` (the built-in startup-code table and reference matcher), and `research/flirt-improvements.md` (2026-10-29, a local file in the active checkout, not in git; its code changes are the origin/master commit bc30312b7c).

Method: read-only. `git show` and `git grep` on origin/master and origin/main (`188480126a`), plus the notes and issues main already has. No cargo or unlace binary was run. The research note's numbers are quoted from the note, not re-measured.

## Already tracked on main (not repeated here)

- Shipped signature sets (glibc, musl, libgcc, Rust, Go): `notes/ida-gap/kernel-autoanalysis.md` row 14.
- Hiding library functions (`AF_HFLIRT`): `kernel-autoanalysis.md` row 15.
- Startup-signature library selection: `notes/ida-gap/types-plugins-sigs.md` row 2. Item 1 of the table below is a different gap (the helpers themselves), but item 4 touches the same code.

Stale on main, so the notes and issues need a refresh (not done here):

- `notes/ida-gap/debuginfo-loaders.md` row 3 says collisions are not detected. `flirtsig.rs` resolves them (PRs #1186 and #1201 merged).
- `notes/ida-gap/libida-autoanalysis.md` row 22 says there is no `.til` autoload. `analyzers/flirt/autotil.rs:15` is wired at `flirt/mod.rs:145` (PR #1202 merged).
- Open issues #1148 (`.til` autoload) and #1166 (collision detection) match those merged PRs.

## Ranked table

Status on main: **have** = same behaviour or better; **partial**; **missing**. Main paths are under `crates/unlace-analysis/src/analyzers/flirt/` unless shown.

| # | Technique | What origin/master does | Main status | Port? | Size |
|---|---|---|---|---|---|
| 1 | Built-in startup-code signatures for the GCC `crtstuff.c` helpers (`deregister_tm_clones`, `register_tm_clones`, `__do_global_dtors_aux`, `frame_dummy`) and `_start`. Every dynamically linked x86-64 ELF contains these, and they have no symbols when stripped. | 21 entries in `unlace-loader/src/flirt/signatures.rs:36` (table), `:196` (`default_db`). Used by the pipeline at `pipeline.rs:4578`. The test at `pipeline.rs:8063-8203` expects `frame_dummy` named at confidence 1.0. The file header says each entry was checked against a real object. | **missing**. No `tm_clones`, `frame_dummy` or `default_db` anywhere in `crates/`. `flirtpat.rs` header (lines 1-12): a function with only a local symbol yields no pattern, so `flirt make` cannot emit these helpers from `crtbeginS.o`. `flirt/mod.rs:183` (`applies_to`) rejects startup signatures outright. The entry analyzer names `main` through the `_start` idiom only (`entry/mod.rs:548`). | **Yes.** Every stripped dynamic x86-64 ELF has these helpers. They print as `sub_` names, and the bodies are the only library code in the output. Port the method, not the bytes: generate the patterns from the crt objects (`flirt make` with a path for local-only crt helpers) so the table is reproducible. The hand-written hex needs a fixture per GCC version. | M |
| 2 | Resolving a call reference through the callee's own signature. When discovery never created the callee, its signature is matched at the target address instead. | `unlace-loader/src/flirt/mod.rs:141` (`match_function_with_refs`). Test `reference_resolves_through_callee_signature` at `:401`. The doc comment: a reference resolves through a known name or a reference-free signature of that name at the target. | **partial**. `flirt/mod.rs` header rule 3: a reference is accepted only when it points at a function already named, either from discovery or from an earlier round. A callee that discovery never created (for example `register_tm_clones`, reached only by a tail `jmp`) can never resolve. | **Yes.** The research note calls this the `register_tm_clones` case. It pairs with item 1. | S-M |
| 3 | Hit provenance: a flag that says whether a name was verified by its reference sites or matched on bytes alone. Verified hits get confidence 1.0, byte-only hits 0.9. | `unlace-flirt/src/match_pass.rs:35-39` (`FlirtHit.confidence`). Same grading in `unlace-loader/src/flirt/mod.rs` (`FlirtMatch`). | **partial**. `pass.rs:473-481` (`FidMatch`) has `by_signature` only. A FLIRT name and a FID name look the same at the rename, and nothing records whether call targets confirmed it. | **Yes**, as metadata only. It changes no decision, so it does not need an option. It lets a reader or an agent tell a confirmed name from a guess. | S |
| 4 | Choosing C-runtime signatures from the image's toolchain, and reporting a runtime release that no shipped file covers. The compiler's own runtime wins collisions. Rust and Go files apply only when the release matches. | `unlace-flirt/src/bundled.rs:129-158` (`MissingRelease`, `Selection`, `select`). Live: `pipeline.rs:3602`. | **partial**. `flirt/mod.rs:108` (`load_sigs`) reads only `UNLACE_FLIRT_SIGS`. `ruststdsigs.rs:83` (`comment_rustc`) reads the rustc record, and only for Rust. Nothing maps a GCC or clang `.comment` to a C runtime. Covered by types-plugins-sigs row 2. | **Yes**, after item 5 is decided. Otherwise there is nothing to select. The "missing release" report is cheap and useful on its own. Caution: the Rust exact-only rule (master README) is safer than a nearest-release match. `ruststdsigs.rs:308` tests an "exact or nearest" choice; its default was not checked here. | M |
| 5 | Shipped runtime signature sets (14 Linux files, 3 Windows files), with a README that gives the recipe for each. | `unlace-flirt/sig/linux-x86_64/*.sig` and `sig/windows-x86_64/*.sig`, with `README.md`. | **missing** (kernel-autoanalysis row 14). Main builds the Rust set on demand and caches it (`ruststdsigs.rs` header). | **Owner decision.** Shipping needs a licence check per library: glibc (LGPL), GCC runtime (runtime exception), LLVM, Go (BSD) and Rust (MIT/Apache). Porting the recipe and building on demand, as `ruststdsigs` does, needs no shipped data. | L |
| 6 | Go runtime signature from an installed Go toolchain (`go.o` from an external link). | `sig/linux-x86_64/go1.26-amd64.sig` and its recipe in the README. | **missing**. | **Not now.** Stripped Go binaries keep function names in `pclntab`, so the gain is smaller than for C. Revisit only if a stripped Go sample shows unnamed runtime functions. | M |
| 7 | Relocation wildcards, and GOT/TLS relaxation wildcards in the pattern. | `unlace-flirt/src/generator.rs` (relocation wildcards only). | **have**, and ahead: `flirtpat.rs` header lines 9-11 (`Option<u8>` bytes, linker-relaxable GOT and TLS sequences). | No. | - |
| 8 | Writing a `.sig` with collision resolution, reporting the collisions. | `unlace-flirt/src/sig/make/` (`tree.rs`, `objects.rs`). | **have**, and ahead: `flirtsig.rs` header (lines 1-22), `Collision` at `:34`, `resolve` at `:143`. PRs #1186 and #1201. | No. | - |
| 9 | Rounds and a one-name-per-address rule: a name that one round finds can satisfy a reference in the next round. | `unlace-flirt/src/match_pass.rs` (header, lines 1-20). | **have**. `flirt/mod.rs` header rules 2-3 and `MAX_ROUNDS`. | No. | - |
| 10 | Matching reads to the end of the executable section, not to the discovered function end, because discovered bounds are unreliable. | `unlace-loader/src/flirt/mod.rs:67` (`FunctionCode::new`). | **have** in effect: `flirt/mod.rs` header rule 1 (a function that ends the section is matched by the modules that fit). | No. | - |
| 11 | A name from a match never replaces anything but a `sub_` placeholder, so the body is still decompiled. | Matches rename the function. The research note's body-elision bug (`render_flirt_stub`) was fixed in the active checkout; the fix was not checked on master. | **have**. `flirt/mod.rs` header: names replace only `sub_` placeholders. | No. | - |
| 12 | Auto-loading the type library a signature names (`ids`, `idsnames`). | None on master. | **have** (ahead). `autotil.rs:15`, wired at `flirt/mod.rs:145`. | No. | - |
| 13 | Rust std signatures for the image's own toolchain. | Ships prebuilt sets for Rust 1.85 to 1.98 (`sig/linux-x86_64/rust-*.sig`). | **have**, and ahead on delivery: `ruststdsigs.rs` builds from the installed rustup toolchain and caches the result. | No. | - |
| 14 | ctype-table recognition as a reference target (table identified by name or by the CRC of its first 128 or 256 bytes). | `unlace-flirt/src/sig/matching.rs:175` (`ctype_table_at`). | **missing**. grep for `ctype` in `analyzers/flirt/` is empty. | No. The payoff is small, and the libc tables are typed elsewhere. | - |
| 15 | Prologue classifier used as a candidate filter. | `unlace-flirt/src/prologue.rs:22` (`classify_prologue`). No caller on master. | missing. | **No.** Dead code on master. | - |
| 16 | Fuzzy block-hash annotation (FNV block fingerprints, a similarity score). | `unlace-flirt/src/fuzzy_lookup.rs:19`, `fuzzy_annotation.rs:40`. Neither module is declared in `lib.rs`. | missing. The exact case is covered by main's FID hashes (`analyzers/fid/hash.rs`). | **No.** Dead code, and a near-match matcher would be a judgement call that needs its own evidence. | - |
| 17 | Hand-written byte-pattern library: 63 entries in TOML, `library.rs`, `bundled_sigs.rs`, `patterns/*.toml`, `signatures/*.sig`. | `unlace-flirt/src/library.rs` (not declared in `lib.rs`). | absent on main. | **No.** Dead on master. The research note measured it naming user functions wrongly (4 of 4 at `-O0`). Keep main free of invented patterns. | - |
| 18 | postcard and zstd signature database (pattern and CRC tuples). | `unlace-flirt/src/builder.rs:135` (`build_from_function_map`). No real caller. | superseded by the IDASGN writer (item 8). | **No.** | - |

## Dead on master (do not port)

`library.rs`, `bundled_sigs.rs`, `fuzzy_annotation.rs`, `fuzzy_lookup.rs`, `prologue.rs`, `generator.rs` and `builder.rs` are not used by the live pipeline. `generator.rs` also defines `generate_patterns_from_archive_bytes` at three different lines (75, 747, 1064). The research note's recommendation to delete the invented tables still holds on master.

## Suggested issues

Items 1, 4 and 2, in that order. Item 3 is a small PR and is not issued here.

## Verification status

Nothing here was built or run. Each claim comes from reading the stated ref.
