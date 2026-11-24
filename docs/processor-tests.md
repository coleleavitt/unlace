# Processor-family tests

A new SLEIGH processor family proves itself with a row in
[`crates/unlace-cli/tests/processors.toml`](../crates/unlace-cli/tests/processors.toml), not a
new `*_raw.rs` test file. One test, `processors::processor_families_decompile` in the
`unlace-cli` integration suite, reads the manifest and decompiles every listed function through
the CLI, the way a user runs it on a raw image:

```sh
unlace decompile <image> <address> --raw-image --target <language> --base <base>
```

A function passes when that run exits 0, its lowercased output contains neither
`unimplemented` nor `bad instruction` nor any `forbid` entry, and it contains every `expect`
entry (case-sensitive substrings). Every failing function is reported together, with its output.

## Adding a family

```toml
# The Lanai language decompiles a compare-and-branch routine built with clang's Lanai backend.
[[family]]
name = "lanai"
language = "lanai:BE:32:default"      # a list runs each function once per language
base = "0x0"
fixture = "crates/unlace-cli/tests/fixtures/lanai/funcs.bin"   # or: image = "lanai"
forbid = ["halt_baddata"]             # optional, case-insensitive

[[family.function]]
test = "lanai_compare_branch_decompiles"
address = "0x0"
expect = [
    "if (a1 <= a0)",  # why this text matters
    "return a1 + a0;",
]
```

- `name` is unique across the manifest (a repeated name is an error); a family with two images
  is two rows, `<family>_<image>`.
- `fixture` is a path from the repository root; commit the image under
  `crates/unlace-cli/tests/fixtures/<family>/` with `git add -f` (`.bin` is ignored globally).
- `image` names an entry of the manifest's `[images]` table instead: hex bytes, whitespace
  ignored, written to a scratch file at test time. Use it for images of a few hundred bytes.
- `args` on a family adds CLI arguments to every run (`args = ["--addr"]`).
- A `[[family.function]]` may set its own `language` (or list), and its own `forbid` entries,
  which add to the family's.
- `xfail = "<why>"` on a function marks a known failure: the run prints it with the reason and
  goes on, and the test fails once that function passes, so the marker cannot outlive the bug.
- Unknown keys are errors, so a misspelt `expect` fails instead of passing silently.

Run only some families while working on them:

```sh
UNLACE_PROCESSORS=lanai,meta cargo test -p unlace-cli --test integration processors::
```

## Loaded images

A family with `loader = "auto"` (and no `language` or `base`) loads its fixture as a file instead:

```sh
unlace decompile <image> <address>
```

so the loader picks the language from the image (the ELF header) and applies its relocations.
`address` may be a symbol name. The `elfroute_*` rows use it: one real ET_REL or ET_EXEC build
of `fixtures/elfroute/fx.c` per machine the ELF loader routes by header or relocates with a
machine-specific encoder, so a regression in either shows up as a missing call name or global.

A test whose shape does not fit (several commands, a check on JSON output) stays its own file in `crates/unlace-cli/tests/`, registered in `integration.rs`.
