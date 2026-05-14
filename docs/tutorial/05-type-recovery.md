# Chapter 5: Type Recovery

## How Unlace Infers Types

Type recovery is the hardest problem in decompilation — machine code operates on
untyped bit vectors, so we must reconstruct the programmer's intent from usage
patterns. Unlace uses a constraint-based approach: every operation generates type
constraints (e.g., a `cmp` followed by `jl` implies signed comparison, so both
operands are likely signed integers), and a unification engine solves the
constraint system to find the most specific type assignment that satisfies all
observations.

The solver works in three phases. First, **local inference** within a single
function assigns preliminary types based on instruction semantics (loads from
byte-aligned offsets suggest arrays, sign-extension implies signed narrowing,
etc.). Second, **interprocedural propagation** flows type information across call
edges — if `sub_401200` is known to take a `FILE *` as its first argument (from
FLIRT or manual annotation), every caller's corresponding argument inherits that
type. Third, **struct recovery** groups related memory accesses into composite
types by analyzing base-pointer + offset patterns across the entire program.

## Struct Layout Recovery

Consider a function that accesses `[rdi+0]`, `[rdi+8]`, and `[rdi+16]` — unlace
infers a struct with at least three fields. The field types come from how those
loads are subsequently used: if `[rdi+0]` is passed to `strlen`, it's likely a
`char *`; if `[rdi+8]` is compared against zero and used as a loop bound, it's
likely a `size_t`. The reconstructed struct gets a synthetic name and appears in
the output:

```c
// Recovered struct at usage site 0x4023a0
struct struct_4023a0 {
    char *field_0;      // offset 0, from strlen() argument
    uint64_t field_8;   // offset 8, loop bound usage
    void *field_16;     // offset 16, opaque (only stored/loaded)
};
```

You can refine these types manually with `unlace annotate --type` and the
changes persist in the project's annotation database, improving all subsequent
decompilations of functions that use the same struct.

## Limitations and Escape Hatches

The type system is necessarily conservative — when constraints conflict (e.g., a
value is used as both signed and unsigned in different contexts), unlace picks
the wider type and emits a warning annotation. Union types, C++ virtual
dispatch, and Rust enum layouts present ongoing challenges. For cases where the
automated recovery fails, you can supply a type hint file (`--type-hints
hints.toml`) that provides ground-truth types for specific addresses, letting
the solver anchor its inference on known-good data points.

→ Next: [Plugins](./06-plugins.md)
