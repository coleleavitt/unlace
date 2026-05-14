# Chapter 3: Understanding the Output

## Anatomy of a Decompiled Function

Every function that unlace emits follows a consistent structure: a header
comment block, a signature line, and the body. The header block is not mere
decoration — it carries machine-readable metadata that downstream tools (and the
`--json` output mode) can parse. Here's a fully-annotated example:

```c
// Function: process_buffer
// Address: 0x4023a0..0x402471 (209 bytes)
// Confidence: 0.91
// Calling convention: System V AMD64 ABI
// Stack frame: 48 bytes (8 spill slots)
// DWARF: partial (types only, no variable names)
int32_t process_buffer(uint8_t *buf, uint64_t len) {
    int32_t result;       // [rbp-0x4], inferred from sign-extension pattern
    uint64_t i;           // rdx, loop induction variable
    ...
}
```

The **confidence score** (0.0–1.0) reflects how certain unlace is about the
overall decompilation: a score below 0.7 means at least one pass reported
ambiguity (e.g., an indirect jump that couldn't be fully resolved). The
**address range** helps you correlate with a hex editor or debugger. Stack frame
analysis tells you how much local state the function maintains, which is useful
when reasoning about buffer overflows.

## Annotations and Provenance Comments

Inline comments throughout the body explain *why* unlace made specific choices.
These fall into three categories: **provenance** comments trace a value back to
its origin (`// from .rodata+0x48`), **confidence** markers flag uncertain
reconstructions (`// uncertain: could be uint32_t or int32_t`), and **pass
attribution** notes record which optimization pass produced a particular
simplification (`// folded by const-prop`). You can suppress annotations with
`--no-annotations` for cleaner output, or use `--annotations=verbose` to see
every intermediate transformation.

```c
    // Loop structure recovered by interval analysis (natural loop, single back-edge)
    for (i = 0; i < len; i++) {      // induction var: rdx, stride 1
        result += buf[i];             // provenance: load from [rdi + rdx]
    }
```

## Reading Type Annotations

When debug info is absent or incomplete, unlace synthesizes type names using a
systematic scheme. Pointer-width integers are `uintptr_t` or `intptr_t`;
narrower types get explicit width suffixes (`uint8_t`, `int32_t`). Struct types
that unlace recovers from memory access patterns are named `struct_ADDR` where
ADDR is the allocation site or first observed usage. You can rename these
interactively with `unlace annotate --rename struct_4023a0=ParseContext` and the
rename propagates through all references in subsequent decompilations.

Understanding these annotations is key to productive reverse engineering: rather
than treating the output as final, think of it as a first draft that you refine
by adding type information, renaming variables, and resolving ambiguities that
the automated pipeline couldn't.

→ Next: [Stripped Binaries](./04-stripped-binaries.md)
