# Unlace Tutorial Book

A hands-on, progressive tutorial that takes you from installing unlace through
advanced usage patterns like plugin authoring and collaborative annotation.

Unlike the [reference book](../book/README.md) which covers every feature
systematically, this tutorial follows a narrative arc: you'll decompile
increasingly challenging binaries, learn what each piece of output means, and
build intuition for when to reach for advanced tools.

## Chapters

1. [Installation](./01-installation.md) — building from source, verifying
   signatures, platform-specific notes
2. [Your First Binary](./02-first-binary.md) — decompiling a simple hello-world
   ELF end to end
3. [Understanding the Output](./03-understanding-output.md) — reading C
   pseudocode, annotations, confidence markers, and provenance comments
4. [Stripped Binaries](./04-stripped-binaries.md) — working without symbols,
   applying FLIRT signatures, and heuristic function boundary detection
5. [Type Recovery](./05-type-recovery.md) — how unlace infers struct layouts,
   enum discriminants, and function pointer signatures
6. [Plugins](./06-plugins.md) — extending unlace with Lua, Python, or WASM
   plugins to add custom passes or output formats
7. [Collaboration](./07-collaboration.md) — sharing annotations via the Lumina
   annotation server, team workflows, and merge semantics

## Prerequisites

- A working Rust toolchain (stable, 1.85+)
- Basic familiarity with C and at least one assembly language
- A Linux, macOS, or Windows (MSVC) development environment

## Conventions

Throughout this tutorial:

- `$` denotes a shell command you should type
- Output blocks prefixed with `//` are explanatory comments, not part of the
  actual output
- File paths are relative to the unlace repository root unless stated otherwise
- We use `hello` as our running example binary; source is provided in
  `fixtures/tutorial/`

## Feedback

If you find errors or confusing sections, please file an issue at
<https://github.com/coleleavitt/unlace/issues> with the label `docs`.
