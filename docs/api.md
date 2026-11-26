# The `unlace` crate — the decompiler as a Rust library

`crates/unlace` embeds the decompiler in another Rust program: one load of a binary or of raw
bytes, then any number of functions decompiled out of it, each as C text plus the same JSON
document `unlace decompile --json` prints. It is meant for frameworks that already have a loader
and know where their functions are, and want unlace to decompile inside those bounds instead of
rediscovering them.

```toml
[dependencies]
unlace = { git = "https://github.com/coleleavitt/unlace" }
# unlace = { git = "...", features = ["embed-specs"] }   # carry the SLEIGH specs in the binary
```

```rust
use unlace::{Decompiler, Target};

let mut decompiler = Decompiler::open("a.out")?
    .with_function(0x401000, Some(0x401080), Some("parse_header"))
    .with_prototype(0x401000, "int parse_header(const char *buf, unsigned len)")
    .with_option("ctypes", "on");
let function = decompiler.decompile(0x401000)?;
println!("{}", function.c);
let variables = &function.json["functions"][0]["variables"];
```

Runnable versions: `cargo run -p unlace --example raw_blob` and
`cargo run -p unlace --example open_elf -- /usr/bin/true main`.

## The API

| Item | What it does | Command-line equivalent |
|---|---|---|
| `Decompiler::open(path)` | Load a file in any format unlace recognizes (ELF, Mach-O incl. universal and dyld-cache images, PE, DEX/APK, firmware formats). | `unlace decompile <path>` |
| `Decompiler::from_bytes(bytes)` | The same, for a container held in memory (written to a private temporary file, removed on drop). | |
| `Decompiler::from_raw(bytes, target, base, segments, entries)` | Headerless bytes at `base`, decoded as `target` (a SLEIGH language id: `Target::X86_64`, `Target::new("ARM:LE:32:v8T")`). No `segments`: the whole blob is code. With segments: only those ranges of `bytes` are mapped, each with its `Perms`. | `--raw-image --target T --base B --entry E` |
| `Decompiler::from_memory(target, regions, entries)` | Disjoint `(address, bytes, perms)` regions; the gaps are unmapped. | |
| `Decompiler::from_idb(path)` | An IDA database (`.idb`/`.i64`) without its binary: the segments mapped with their rights, decoded as the SLEIGH target IDA's processor maps to, with the database's local types, functions, prototypes and no-return flags declared. | `unlace decompile <db>` |
| `.with_idb(path)?` | Declare an IDA database's local types, functions (entries, extents, names), prototypes and no-return flags on this input; a container must be the file IDA loaded (its SHA-256). | `unlace idb import` + `--project` |
| `.with_function(start, Some(end), Some(name))` | Declare a function: entry, exclusive end (bounds flow following), name. Outranks discovery. | `--define-function start-end=name` |
| `.with_prototype(addr, "int f(char *s)")` | The function's C prototype. | `--assert "prototype addr decl"` |
| `.with_noreturn(addr)` | The function never returns; callers stop at calls to it. | (API only) |
| `.with_entry(addr)` | A raw image's code starts here (a declared function on a container). | `--entry` |
| `.with_assertion(directive)` | Any `--assert` directive (`name`, `type`, `readonly`, `flow`, `callee`, `bytes`, ...). | `--assert` |
| `.with_option(name, value)` | Flip a catalog option (`unlace catalog --json`). | `--option` |
| `.with_language(Language::C)`, `.with_mode("reliable")`, `.with_target(t)`, `.with_isa("thumb")`, `.with_slice("arm64")`, `.with_sleighpath(dir)`, `.with_project(file)`, `.with_max_fn_seconds(n)`, `.with_max_fn_memory(mib)` | The flags of the same names. | |
| `.functions()` | The inventory: `FunctionInfo { name, address, size, aliases, executable }`. | `unlace functions --json` |
| `.decompile(addr)`, `.decompile_named(name)` | One function: `Decompiled { name, address, c, prototype, warnings, json }`. | `unlace decompile --json` |
| `.decompile_all()` | Every function with a body, address order, one load, one `Result` per function. | |
| `.architecture()` | The SLEIGH language id the load chose. | |

Both IDA methods read the database with `crates/unlace-idb` and lower it to the directives `unlace idb
import` stores (`docs/cli.md`, "unlace idb"): types and prototypes rendered as C by unlace's TIL
reader, a type C cannot spell left out, comments not included.

Errors are `unlace::Error` (thiserror): `Io`, `NonUtf8Path`, `Request` (an option, bound,
prototype or assertion that does not parse), `Load`, `NotFound`, `Decompile` (carries the
document whose record holds the error), `Segments`, `Panic` (an engine panic, caught; the load
is dropped and the next call loads again).

## How it works, and what that guarantees

`unlace-cli` is a library as well as the `unlace` binary. Its `embed` module lowers a request
to the command line's own argument list, parses it with the parser `unlace decompile` uses, loads
with the same loader, and decompiles and serializes with the same functions. So an option, a mode,
a declared bound or an assertion means exactly what it means on the command line, and
`Decompiled::json` is the `unlace decompile --json` document (schema in `docs/cli.md`). The load
happens once, on the first call that needs it; a builder method called after that drops it.

Differences from the command line:

- `decompile_all()` decompiles one function at a time, as `decompile` does, not in
  `unlace decompile-all`'s callee-first batch order, and runs no worker pool.
- The load is the whole-program one even when you decompile a single address, so the
  `fast_funcdisc off` default an `--addr` run gets does not apply; pass
  `.with_option("fast_funcdisc", "off")` to match it.
- Diagnostics the command line prints on stderr (an address interior to another function, an
  unmapped declaration) are printed by the library too.

Threads: a `Decompiler` is not `Send` (the engine's program holds reference-counted state);
make one per thread. A load sets process environment variables for its load-time gates while it
runs, so loads with different load-time options belong in separate processes.

## Stability

The public items of `crates/unlace` are the stable surface: methods and fields are added, not
changed; `Error`, `Language`, `FunctionInfo` and `Decompiled` are `#[non_exhaustive]`. The JSON
document only gains keys. Option names and their values follow the catalog and can change between
releases; `unlace catalog --check` reports drift. `unlace_cli::embed` is not stable.
`unlace::unstable` is outside this promise: each part below can change or go away in any release.

### unlace::unstable::ctree — callbacks on the C syntax tree

The engine prints every function from a C syntax tree (`docs/architecture/ctree.md`) that it takes
through four levels: `Built`, `Statements`, `Rewritten`, `Final`. `Decompiler::with_tree_hook(level,
callback)` runs `callback(&mut CTree, &Funcdata)` on every printed function when its tree reaches
`level`, before the built-in rewrites of that level; the module re-exports the tree types (`CTree`,
`CMaturity`, `Stmt`, `StmtKind`, `Expr`, `ExprKind`, the ids) and `Funcdata`.

```rust
use unlace::unstable::ctree::{CMaturity, StmtKind};

// Print each function without its calls to `log_debug`.
let mut decompiler = unlace::Decompiler::open("a.out")?.with_tree_hook(
    CMaturity::Statements,
    |tree, fd| {
        let hidden: Vec<_> = (0..fd.num_calls())
            .map(|i| fd.get_call_specs(i))
            .filter(|call| call.get_name() == "log_debug")
            .map(|call| call.get_op())
            .collect();
        for id in tree.stmt_ids() {
            if let StmtKind::Stmts { ops, .. } = &mut tree.stmt_mut(id).kind {
                ops.retain(|op| !hidden.contains(op));
            }
        }
    },
);
```

Runnable: `cargo run -p unlace --example tree_hook -- /usr/bin/true main __stack_chk_fail`. Which
edits the printer honours, and that a callback runs once per print (twice per `decompile`, which
prints the text and then the line map), is in `docs/architecture/ctree.md` section 10. A hook
survives the reload a later builder method causes.

### unlace::unstable::flavour — language files

`Decompiler::with_language_file(path)?` prints through a language flavour, the TOML file
`--language-file` takes (`docs/cli.md`, "Language files"): a base language (`c`, `rust`, `go`,
`java`) with keyword and operator spellings, forms and capabilities overridden. The file is
read and checked when the method is called. An unknown field, a value its field does not take
or an override the base language's printer cannot honour is `Error::Request` naming the field;
an unreadable file is `Error::Io`. The file names its base language, so `with_language` does
not apply with it: the load refuses the pair. `Decompiled::json` reports the base language in
`"language"`.

```rust
let mut decompiler = unlace::Decompiler::open("a.out")?.with_language_file("pseudo.toml")?;
println!("{}", decompiler.decompile_named("main")?.c);
```

### unlace::unstable::hooks — custom passes and rewrite rule files

Three builder methods on `Decompiler`. The types they take (`Rule`, `RuleState`, `Funcdata`,
`OpCode`, `UnlacePhase`, ...) are the engine's own, re-exported from `unlace::unstable::hooks`:

| Method | What it adds to the default pipeline |
|---|---|
| `.with_rule(after_group, RuleState::new(group, 0, name), rule)?` | A p-code `Rule`, directly behind the last built-in rule of `after_group`, in the rule pool that holds that group. `group` decides which pipeline variants keep it. |
| `.with_phase_hook(UnlacePhase::P2..=P8, \|function\| ..)?` | A callback run with each function at the boundary of that phase. |
| `.with_rules_file(path)?` | The rules of a rewrite rule file: p-code rewrites written as TOML, the file `unlace decompile --rules FILE` takes (`docs/cli.md`, "`--rules FILE`"). An unreadable file is `Error::Io`; a refused rule is an `Error::Request` with one line per problem. |

```rust
use unlace::unstable::hooks::{RuleState, UnlacePhase};

let mut decompiler = unlace::Decompiler::open("a.out")?
    .with_rule("analysis", RuleState::new("analysis", 0, "orandsum"), OrAndSum)?
    .with_phase_hook(UnlacePhase::P6, |function| eprintln!("{} is merged", function.get_name()))?
    .with_rules_file("rules.toml")?;
```

`cargo run -p unlace --example custom_pass` is the runnable version, with the rule written out.
The module's rustdoc is the contract: the rule groups by pool (`rule_groups()` returns them),
what a rule must keep true, where each phase callback runs and what it may change there
(`P2`: ops in place before SSA; `P3`-`P5`: data flow, final; `P6`-`P8`: nothing), that a restart
runs every callback again on the rebuilt function, that no callback runs during jump-table
recovery, and that rules and callbacks must be deterministic. Rules and callbacks are registered
again on every load, before any option is applied; with none registered the pipeline and its
output are the default ones. `docs/spec/00-overview.md` §0.6 describes the mechanism.

### unlace::unstable::printer — the printed function as a tree, and printers over it

`Decompiler::tree(address)` and `tree_named(name)` decompile one function and return its text as a
`Tree`: nested `Node`s for the prototype, the declarations, the statements and the expressions,
each with its `kind`, its children, its C type where the printer knows it (`ty`), where its text is
in the code (`span`) and the instruction addresses it came from. It is the tree
`unlace decompile --json --ctree` writes as the record's `ctree` member (`docs/cli.md`, "The JSON
documents", `--ctree`); `tree_from_json` reads that member back. A function has a tree when its output
language is C; otherwise the call returns `TreeError::Unavailable` with the reason.

`Printer` prints a tree. Its methods (`function`, `prototype`, `declaration`, `item`, `statement`,
`expr`) each have a default that prints C in the decompiler's own layout and calls back into the
printer for the nodes underneath. `CPrinter` is the defaults and nothing else: `print_c(&tree)`
is the function's code, byte for byte. A printer for another flavour overrides what it prints
differently:

```rust
use unlace::unstable::printer::{Kind, Node, Printer, Writer, print};

struct LetBindings;

impl Printer for LetBindings {
    // `long acc;` becomes `let mut acc: long;`.
    fn declaration(&mut self, w: &mut Writer, node: &Node) {
        let name = node.children.iter().find(|child| child.kind == Kind::Var);
        w.push(&format!(
            "let mut {}: {};",
            name.map_or("_", |name| name.text.as_str()),
            node.ty.as_deref().unwrap_or("_"),
        ));
    }
}

let tree = unlace::Decompiler::open("a.out")?.tree_named("main")?;
println!("{}", print(&mut LetBindings, &tree));
```

Runnable: `cargo run -p unlace --example let_flavour -- /usr/bin/true main` (prototype, `let`
bindings and casts in another flavour) and `unlace decompile-all a.out --json --ctree | cargo run
-p unlace --example ctree_roundtrip` (prints every exported tree back and compares it with the
code). The node kinds and the layout rules are in `docs/architecture/ctree.md` section 11.

## For a framework with its own loader (fugue-style integration)

A framework like fugue already parses the container, maps segments, and recovers function
starts, ends and prototypes. Hand those over instead of a path:

```rust
use unlace::{Decompiler, Perms, Target};

// From the framework's own model: mapped segments, function bounds, prototypes.
let regions = program.segments().map(|s| {
    let perms = Perms { read: true, write: s.is_writable(), execute: s.is_executable() };
    (s.address(), s.bytes().to_vec(), perms)
});
let mut decompiler = Decompiler::from_memory(Target::new(program.sleigh_language_id()), regions, &[program.entry()])?;
for f in program.functions() {
    decompiler = decompiler.with_function(f.start(), Some(f.end()), Some(f.name()));
    if let Some(proto) = f.c_prototype() {
        decompiler = decompiler.with_prototype(f.start(), &proto);
    }
    if f.is_noreturn() {
        decompiler = decompiler.with_noreturn(f.start());
    }
}
let output = decompiler.decompile(function_of_interest)?;
```

- The language id is the SLEIGH one (fugue's languages are the same ids, `x86:LE:64:default`).
- Region addresses are byte addresses; `with_function` and `decompile` take the target's address
  units, which are bytes on every byte-addressed target.
- A read-only region's constants fold (switch tables, string pointers); mark writable data
  `Perms::RW` so they do not.
- Declared bounds outrank unlace's own discovery; functions you do not declare are still
  discovered from the entries, so calls into them get names and prototypes.
- When the container is one unlace loads itself, `Decompiler::open` keeps its symbols, imports,
  DWARF and relocations, and the declarations still apply on top.
