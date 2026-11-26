# Plan: custom printers, custom passes, and output-to-binary mapping (2026-11-26)

Feedback from a friend of Cole's on what unlace needs to be useful as a platform:

1. A way to define custom printers or postprocessors, for example to produce Rust-flavoured output.
2. A way to specify custom passes and rewrites.
3. A way to know what entities and ranges of the output correspond to: what a high-level
   variable is in the binary, and for any range of the output, which disassembly addresses
   it came from.

This note is the handoff for that work: what already exists (with paths), what is missing,
the plan in stages, how each stage is checked, and the decisions that are Cole's. Nothing
here is built yet. Paths are relative to the repository root.

## Rules that apply to all of it
From `AGENTS.md`: a judgement call ships behind a `phases.toml` option, a fix or a new
surface does not; describe every behaviour change in the owning `docs/spec/` chapter in the
same change (`python3 tools/check_spec.py`); a new default must change 0 of the 675 datatest
assertions and pass the speed budget; output is deterministic (ordered maps); new code goes
in `unlace_<slug>.rs` modules of the owning phase folder; public JSON documents are described
in `docs/cli.md`. Gates: `docs/dev-setup.md` § Gates.

## 1. Custom printers and postprocessors

### What exists
- **Four output languages** through one parameterized printer: `--language c|rust|go|java`
  (`OutLang` in `crates/unlace-emit/src/p9_emit/lang.rs`, with `langrust.rs`, `langgo.rs`,
  `langjava.rs`, `langc.rs`). Each language is a `&'static LangProfile` (keywords, precedence
  ladder, statement forms, capabilities), an ABI renderer (`LangAbi`) and a type speller
  (`TypeSpeller`). There is one printer, `PrintC` (`printc.rs`, about 18,800 lines), on purpose:
  `lang.rs`'s header explains why a second printer per language drifted elsewhere. Rust output
  already exists (`docs/spec/09-emission.md` §9.6 and the many "Rust ..." sections), so the
  friend's example is covered for the built-in case; what is missing is a way for someone
  else to add or change a printer.
- **A C syntax tree** between structuring and printing: `crates/unlace-ctree` (`CTree`,
  `Stmt`/`StmtKind`, `Expr`/`ExprKind`, `CMaturity`), built for every function not printed
  flat. Its leaves are lists of p-code ops (`StmtKind::Stmts { leaf, ops }`, `ExprKind::Op`),
  which `PrintC` prints with its expression driver. Tree rewrites run in
  `PrintC::ctree_rewrite` (`printc/ctreeprint.rs`). Design: `docs/architecture/ctree.md`.
- **A token source map**: every token of the printed text with line, UTF-16 column, length,
  kind, colour, and what it stands for (instruction address, callee, variable, declaration,
  type) — `crates/unlace-emit/src/p9_emit/srcmap.rs`, checked against the text by
  `srcmap::verify`. It is shipped only by the web front end's study view
  (`crates/unlace-wasm/src/inspect.rs`, `docs/web-integration.md`), not by the CLI.

### What is missing
- No way to plug in a printer: `OutLang` is a closed enum and the profiles are `'static`.
- No structured form of the output a postprocessor can work on without parsing C text: the
  ctree is internal, and its expressions are p-code ops, not an expression tree.

### Plan
1. **Ship the token source map on the CLI** (stage 3.1 below; it serves both asks). A
   postprocessor can then restyle, rename or annotate the output token by token without
   parsing C, in any language. Small.
2. **Export the final tree as data**: `unlace decompile --json` gets an opt-in `ctree` member
   with statements and expressions as nested nodes (kind, operands, C type, the addresses of
   the ops each node came from). Expressions need a real expression tree: build it at export
   time from the leaf ops with the same precedence and folding `PrintC` uses, and check that
   printing the exported tree with a reference printer gives back `code` byte for byte for the
   whole datatest corpus. Medium to large; this is what makes outside printers possible.
3. **A Rust API for printers**: on the `unlace` facade (`crates/unlace/src/lib.rs`), return the
   tree from (2) and a `Printer` trait with the built-in C and Rust printers as reference
   implementations of it. Only after (2) is proven, since it fixes the tree's shape as an API.
4. **Data-only language flavours**: an `OutLang` profile loaded from a TOML file (keywords,
   forms, capabilities) for small dialect changes. Optional; decide after (1)-(3) are used.

## 2. Custom passes and rewrites

### What exists
- **Embedder hooks** (`crates/unlace-decomp/src/infra/hooks.rs`): `Architecture::add_rule`
  inserts a p-code `Rule` behind the last rule of a named group in the rule pool that owns it;
  `Architecture::on_phase` runs a callback on every function at a fixed point per phase
  (P2 after `start`; P3-P5 after `fullloop` reaches its fixed point; P6 after `copymarker`;
  P7 after the final `blockstructure`; P8 after the last structure pass). Both are Rust-only
  and are not reachable through the `unlace` facade (`Decompiler` has no method for them);
  no CLI surface, no option.
- **Ctree rewrites** run inside the printer (`PrintC::ctree_rewrite`) and are not hookable.
- **`crates/unlace-plugin`**: a `UnlacePlugin` trait whose hooks return findings only
  (`on_function`, `on_binary`), gated by an existing option. Its README says the dynamic loader
  and the wasm sandbox were deliberately not ported: loading native code is a trust decision.
- **Per-run options** turn existing passes on and off (`unlace catalog`, `--option`).

### What is missing
- A supported way for a library user to add a pass: the hooks exist but are internal.
- A hook at the tree level (the Hex-Rays `hxe_maturity` equivalent: run a tree visitor at a
  known `CMaturity`).
- A way to write a rewrite without Rust (a pattern file).
- Loading extensions at run time.

### Plan
1. **Expose the hooks on the facade**: `Decompiler::with_rule(after_group, rule)` and
   `Decompiler::with_phase_hook(phase, callback)`, plus a small example crate under
   `examples/` and a test that shows a rule firing and a phase callback seeing the function.
   Document the contract: which rule groups exist (the group names of the rule rows in
   `crates/unlace-decomp/src/infra/universalaction.rs`), what a callback may change at each phase, and that a restart runs callbacks again.
   Small.
2. **Tree hooks**: a callback per `CMaturity` level with mutable access to the `CTree`, run
   from `ctree_rewrite`, so tree-level rewrites like the built-in `boolreturn` or `orexit`
   can be written outside the printer. Move the built-in tree rewrites onto the same hook so
   there is one mechanism. Medium.
3. **Declarative p-code rewrites**: a TOML or s-expression pattern (`INT_AND(x, 0xff)` with
   `x` 1 byte -> `x`) compiled into a generic `Rule`. Only after (1) shows which rewrites
   people write; the pattern language is a design of its own. Large.
4. **Run-time loading** (native libraries or WASM components): Cole's decision, see below.

## 3. What the output corresponds to

### What exists
- `decompile --json` / `decompile-all --json`: `line_mappings` (each line of `code` to the sorted
  instruction addresses on it), and per variable `kind` (`arg`, `stack`, `register`),
  `arg_index`, `stack_offset`, `size`, `line_numbers` and `addresses` (the union of the mapped
  addresses of its lines), resolved from the printer's markup against the live IR
  (`docs/cli.md`, "The JSON documents").
- The token source map above (web front end only), with `address`, `callee`, `var`, `decl`.
- `unlace disassemble` / `raw-pcode` for the instructions themselves.

### What is missing
- Tokens on the CLI, so a column range (not just a line) maps to addresses.
- Where a variable lives over its life: a high-level variable merges several varnodes (a
  register here, a stack slot there, pieces of a wider value). Today a `register` row has no
  register name and no address ranges where it holds the value.
- Queries in both directions: "this span of the output -> which addresses" and "this
  address -> which spans and which variables".
- Statement- and expression-level ranges (the `if` on lines 4-9 came from these blocks).

### Plan
1. **`tokens` on `decompile --json`**: the same records the web view ships, opt-in
   (`--tokens`) so existing documents do not grow, with `tokens_error` when the map does not
   rebuild the text. The wasm path already produces them; this moves the call into the shared
   CLI document builder. Small.
2. **Variable storage**: per variable a `storage` list, one entry per piece of storage it
   occupies: space (`register`, `stack`, `ram`), register name or offset, size, and the
   instruction address ranges where that piece holds the variable (from the `HighVariable`'s
   instances and their covers). Check it against DWARF location lists on the symbolized
   fixtures, which say where each local lives at each pc. Medium.
3. **`unlace map`**: a query command over the same data:
   `unlace map BIN FUNC --line 12` or `--span 12:5-14:20` prints the instruction addresses;
   `--addr 0x401020` prints the output spans and the variables live there. JSON and text.
   Small once (1) and (2) exist.
4. **Statement ranges**: each ctree statement with its line span and its address set, from
   the node's origin block and ops, in the `ctree` export of 1.2 and in `unlace map`.

## Order and size
| Step | What | Size | Depends on |
|---|---|---|---|
| 3.1 | `tokens` on the CLI | S | - |
| 2.1 | rules and phase hooks on the `unlace` facade, example, contract doc | S | - |
| 3.2 | variable storage with address ranges | M | - |
| 3.3 | `unlace map` | S | 3.1, 3.2 |
| 2.2 | ctree hooks per maturity; built-in tree rewrites moved onto them | M | - |
| 1.2 + 3.4 | the tree as data, with statement ranges; reference printer round trip | M-L | 2.2 |
| 1.3 | `Printer` trait on the facade | M | 1.2 |
| 2.3 | declarative rewrites | L | 2.1 used in practice |
| 1.4 | data-only language flavours | S-M | 1.3 |

3.1, 2.1 and 3.2 are independent and can run in parallel worktrees.

## How each step is checked
- Byte identity: none of these steps may change `code`. Datatest parity must match
  `docs/baseline.json` and `tests/stages` must fail only the assertions `main` already fails.
- 3.1: `srcmap::verify` on every function of the datatest corpus through the CLI path (the
  existing `crates/unlace-console/tests/verify_srcmap.rs` covers the console path).
- 3.2: DWARF location lists of the symbolized fixtures as ground truth; report agreement.
- 1.2: the reference printer reprints the exported tree to `code` byte for byte, corpus-wide.
- 2.1 / 2.2: an example rule and an example tree rewrite with tests; the default pipeline is
  unchanged when nothing is registered (the hooks are already built that way).
- Speed: opt-in surfaces cost nothing when off; measure `decompile --json` with them on.

## Decisions for Cole
- **How outside code gets in.** Options: Rust crates that link `unlace` (compile-time, no new
  trust questions; the hooks already work this way); WASM components loaded at run time
  (sandboxed, language-neutral, a new dependency and an ABI to keep stable); native shared
  libraries (fast, unsafe, the reason `unlace-plugin` stopped short); Python bindings; or
  data only (JSON out, pattern files in). Suggested: data out first (3.1, 1.2), Rust API second
  (2.1, 1.3), run-time loading only if someone needs it.
- **API stability.** Exposing the tree and the hooks on the facade makes their shapes a
  promise. Mark them unstable (a feature flag or a `unstable` module) until 1.3 has users?
- **Whether `unlace map` is a new subcommand** or flags on `decompile`.

## Status (2026-11-26): implemented

Every step above is on `main`. The decisions were made as follows:
- **How outside code gets in:** data (JSON out, TOML files in) and a Rust API on the `unlace`
  facade. There is no run-time loading of native libraries or WASM.
- **API stability:** the new facade APIs are in `unlace::unstable`, which has no stability
  promise.
- **`unlace map`:** a new subcommand.

| Steps | PR | What landed |
|---|---|---|
| 1.4 | #1540 | `--language-file FILE` (TOML flavour over a base language: keywords, operators, a few forms, one capability), console `language file`, `Decompiler::with_language_file` |
| 2.1, 2.3 | #1541 | `Decompiler::with_rule` / `with_phase_hook` (`unlace::unstable::hooks`), example `custom_pass.rs`; `--rules FILE` p-code rewrite rules as TOML, checked at load; the pool's deadline is now polled on every rewind |
| 2.2, 1.2 + 3.4, 1.3 | #1542 | tree callbacks per `CMaturity` (`Decompiler::with_tree_hook`), the 15 built-in tree rewrites on the same schedule; `--ctree` JSON (statements, expressions, types, line spans, op addresses); `Printer` trait (`unlace::unstable::printer`), examples `let_flavour.rs`, `ctree_roundtrip.rs` |
| 3.1, 3.2, 3.3 | #1543 | `--tokens`, `--storage` (per-variable storage pieces with address ranges), `unlace map BIN FUNC --line/--span/--addr`, `unlace::unstable::mapping` |

What came out differently from the plan:
- **Tree as data (1.2):** the expression tree is recorded from the printer's RPN driver
  during one extra render, not rebuilt from the leaf ops.
  - Every exported tree prints back byte for byte: 38,332 C functions in 1,482 fixture
    binaries, plus 4,871 corpus functions.
  - A node that does not print back stays `raw`. That covers nesting past 61 levels and
    the `structdefs` / `bytearrayc` preambles.
  - Only C output has a tree.
- **Built-in tree rewrites (2.2):** they stay printer functions, run from the same schedule
  as callbacks, because they read printer state a callback cannot see. A callback can make
  the edits the built-ins make, nothing more.
- **Storage (3.2):** opt-in (`--storage`). Always on, it grows the document by 46–103%.
  - Agreement with the DWARF location information is 94–97% of bytes for C/C++/Rust and
    93–99% for Go.
  - Go names a location for only 15% of the bytes DWARF does. This is a naming gap in the
    Go output (spec 06).
- **Language flavours (1.4):** a key is accepted only where the printer honours it
  everywhere.
  - Type spellings, most statement forms, and a set of keywords and operators per
    language are refused; `docs/spec/09-emission.md` §9.6 lists them.
  - The JSON `language` key still names the base language.
- **`--jobs`:** `--tokens` and `--ctree` cross `--jobs` workers in the result frame (version 14), so the document is the same at every job count.
