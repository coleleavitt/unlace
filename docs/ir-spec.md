# Unlace LIR Specification — v1.0

> **Status**: Frozen. This document defines the Low-level Intermediate
> Representation (LIR) used throughout `unlace`. All downstream crates
> (`unlace-ir`, `unlace-lift-*`, `unlace-passes`, `unlace-struct`,
> `unlace-output`) consume this contract.
>
> **Source**: Modeled on Ghidra P-code (NSA, public domain) — the most
> battle-tested multi-architecture register-transfer language available.
> Divergences from upstream P-code are listed in §1.4.
>
> **Audience**: Implementers of Task 7 (`unlace-ir` crate), Task 9 (x86-64
> lifter), Task 19 (IR dump formatter), and any future opcode-level pass.

---

## Table of Contents

1. [Foundations](#1-foundations)
   1. [Address Spaces](#11-address-spaces)
   2. [Varnode](#12-varnode)
   3. [Type Interpretations](#13-type-interpretations)
   4. [Divergences from Ghidra P-code](#14-divergences-from-ghidra-p-code)
2. [Canonical Text Form](#2-canonical-text-form)
   1. [Grammar (BNF)](#21-grammar-bnf)
   2. [Type Tags](#22-type-tags)
   3. [Varnode Literals](#23-varnode-literals)
   4. [Block Headers](#24-block-headers)
   5. [Instruction Lines](#25-instruction-lines)
3. [Opcode Reference](#3-opcode-reference) — 75 opcodes
   1. [Data Movement](#31-data-movement) (4)
   2. [Integer Arithmetic](#32-integer-arithmetic) (11)
   3. [Integer Comparison](#33-integer-comparison) (6)
   4. [Integer Carry & Overflow](#34-integer-carry--overflow) (3)
   5. [Bitwise & Shift](#35-bitwise--shift) (6)
   6. [Boolean](#36-boolean) (4)
   7. [Floating-Point Arithmetic](#37-floating-point-arithmetic) (7)
   8. [Floating-Point Rounding & Conversion](#38-floating-point-rounding--conversion) (8)
   9. [Floating-Point Comparison](#39-floating-point-comparison) (4)
   10. [Control Flow](#310-control-flow) (6)
   11. [Bit & Field Manipulation](#311-bit--field-manipulation) (7)
   12. [Pointer & Type](#312-pointer--type) (3)
   13. [SSA & Pseudo](#313-ssa--pseudo) (5)
4. [Quick Reference Tables](#4-quick-reference-tables)
5. [Worked Example](#5-worked-example)
6. [Versioning & Stability](#6-versioning--stability)

---

## 1. Foundations

LIR is a register-transfer language: each instruction reads zero or more input
operands (Varnodes), optionally produces one output Varnode, and may have a
control-flow effect. There is no implicit machine state. Stack pointers,
flag bits, and condition codes are all explicit Varnodes.

### 1.1. Address Spaces

A **Varnode** lives in exactly one address space. Five spaces are defined:

| Variant    | Short prefix | Wordsize | Purpose                                                        |
|------------|--------------|----------|----------------------------------------------------------------|
| `Register` | `r`          | 1        | Architectural registers (RAX, X0, $a0, …) at fixed offsets.    |
| `Ram`      | `m`          | 1        | Process memory; offset is a virtual address.                   |
| `Const`    | `c`          | 1        | Immediate constants. The `offset` field holds the constant.    |
| `Unique`   | `u`          | 1        | Lifter-private temporaries. Never aliased across instructions. |
| `Stack`    | `s`          | 1        | Stack-frame slots; offset is a signed displacement from frame. |

```rust
// Conceptual definition — actual Rust types live in Task 7's unlace-ir crate.
enum SpaceId {
    Register = 0,
    Ram      = 1,
    Const    = 2,
    Unique   = 3,
    Stack    = 4,
}
```

The numeric discriminants are part of the stable ABI and must not be
reordered (see §6).

#### Per-space rules

- **Register**: Each architecture provides a register file mapping a register
  name to `(offset, size)`. For x86-64: `RAX` → `(0, 8)`, `EAX` → `(0, 4)`,
  `AX` → `(0, 2)`, `AL` → `(0, 1)`, `AH` → `(1, 1)`, `RCX` → `(8, 8)`, etc.
  Register offsets are arch-specific and stable per arch.

- **Ram**: Offset is a 64-bit virtual address. Reads and writes go through
  `LOAD` and `STORE`; a Ram Varnode used directly as input/output of an
  arithmetic op denotes a memory cell at that address (rare; mostly for
  global data references).

- **Const**: The `offset` field encodes the value. The `size` field encodes
  the precision (in bytes). A 4-byte constant `0x10` is `Varnode {
  space: Const, offset: 0x10, size: 4 }`. Constants are never written to.

- **Unique**: Allocated by the lifter in monotonic order. Live for at most
  one basic block. Used to hold intermediate values during instruction
  translation (e.g., a flag computation reused across the next two ops).

- **Stack**: Offset is a signed 64-bit displacement encoded as `u64` via
  two's complement. Stack space is conceptually a slice of Ram, but
  promoted early so stack-relative analyses (variable recovery, frame
  pointer elimination) can operate without alias analysis. A `Stack`
  Varnode at offset `-8` denotes the 8-byte slot at `[rbp-8]` (or the
  equivalent on other architectures).

### 1.2. Varnode

A Varnode is the formal triple `(space, offset, size)`:

```rust
struct Varnode {
    space:  SpaceId,
    offset: u64,
    size:   u8, // bytes, 1..=16 typical, see §1.3
}
```

- `space` selects the address space.
- `offset` is interpreted per-space (see §1.1).
- `size` is the number of contiguous bytes the Varnode covers, in *bytes*
  not bits. Valid values are `1, 2, 4, 8, 10, 16`. Sizes `1`, `2`, `4`,
  `8` are universal; `10` is x87 extended precision; `16` is `__int128`,
  `long double`, or 128-bit SIMD lanes treated scalar.
- Two Varnodes are equal iff all three fields match. Overlapping Varnodes
  (e.g., `EAX` at `(0, 4)` and `RAX` at `(0, 8)` in the Register space)
  alias and must be reasoned about via `SUBPIECE`/`PIECE`/`INDIRECT`.

### 1.3. Type Interpretations

A Varnode by itself has **no type**. Type is forced only by the opcode that
reads or writes it:

- **Integer-typed opcodes** (`INT_ADD`, `INT_LESS`, …) interpret the
  Varnode as a two's-complement integer in the endianness of its address
  space. Signedness is opcode-dependent: `INT_LESS` is unsigned;
  `INT_SLESS` is signed.
- **Boolean-typed opcodes** (`BOOL_AND`, `CBRANCH`'s condition input,
  every comparison output) require the Varnode size to be 1 byte and the
  value to be 0 (false) or 1 (true). All other byte values are
  implementation-defined.
- **Float-typed opcodes** (`FLOAT_ADD`, `FLOAT_EQUAL`, …) interpret the
  Varnode using IEEE-754 encoding determined by size: `4` → binary32,
  `8` → binary64, `10` → x86 80-bit extended, `16` → binary128. Other
  sizes are not supported and must be rejected by the verifier.

The type tags `i32`, `f64`, `b8`, etc. that appear in the canonical text
form (§2) are *purely textual annotations* derived from `(opcode, size)`.
They do not exist in the in-memory IR; they are reconstructed when
formatting and reparsed when reading.

### 1.4. Divergences from Ghidra P-code

Three deliberate departures from upstream Ghidra:

1. **Stack space is first-class.** Ghidra has four spaces (`register`,
   `ram`, `const`, `unique`); we add `Stack` so stack-frame promotion can
   happen during lifting rather than as a late peephole pass. This
   mirrors hex-rays' `mop_S` (stack microcode operand). Lifters that do
   not promote may emit Ram-space Varnodes that a later pass converts.

2. **No `wordsize` attribute on spaces.** Every space has wordsize 1
   (byte-addressable). This simplifies LOAD/STORE semantics; the rare
   word-addressed targets (e.g., some PIC microcontrollers) are out of
   scope for v1.0 and would require an additional space variant.

3. **Opcode set is closed.** Ghidra exposes a `userop` mechanism where
   architectures define new opcodes by ID. We instead use `CALLOTHER`
   with a registered intrinsic ID drawn from a project-wide enum, and
   `UNIMPLEMENTED` for everything else. New first-class opcodes require
   a spec version bump.

All other Ghidra opcode names, arities, and semantics are preserved
verbatim.

---

## 2. Canonical Text Form

The canonical text form is the byte-identical serialization of an LIR
function used for IR dumps (`unlace decompile --emit ir`), golden tests,
and human inspection. It is a strict subset; round-tripping
`format → parse → format` must be the identity.

### 2.1. Grammar (BNF)

```bnf
<dump>          ::= <function>+
<function>      ::= <fn-header> <newline> <block>+
<fn-header>     ::= "func " <name> " @ 0x" <hex> " {"
<block>         ::= <block-header> <newline> <insn>* <terminator>
<block-header>  ::= "BB_" <decimal> <annotations>? ":"
<annotations>   ::= " [" <annot> ("," <annot>)* "]"
<annot>         ::= "entry" | "exit" | "loop_header" | "unreachable"
<insn>          ::= <indent> <typed-out> " = " <opcode> <operands>? <newline>
                  | <indent> <opcode> <operands>? <newline>
<terminator>    ::= <indent> <term-opcode> <operands>? <newline>
<typed-out>     ::= <varnode-text> ":" <type-tag>
<operands>      ::= " " <typed-in> ("," " " <typed-in>)*
<typed-in>      ::= <varnode-text> ":" <type-tag>
<varnode-text>  ::= <register-lit> | <ram-lit> | <const-lit>
                  | <unique-lit> | <stack-lit> | <ssa-lit>
<register-lit>  ::= "r" <decimal> ("." <decimal>)?           ; offset[.size]
<ram-lit>       ::= "m0x" <hex>
<const-lit>     ::= "c0x" <hex> | "c" <decimal>
<unique-lit>    ::= "u" <decimal>
<stack-lit>     ::= "s" <signed-decimal>
<ssa-lit>       ::= "v" <decimal> ("#" <decimal>)?           ; v<n>[#<version>]
<type-tag>      ::= "i" <bits> | "f" <bits> | "b" <bits>     ; bits in {1,8,16,32,64,80,128}
<term-opcode>   ::= "BRANCH" | "CBRANCH" | "BRANCHIND" | "RETURN" | "UNIMPLEMENTED"
<opcode>        ::= /* uppercase identifier from §3, e.g. "INT_ADD" */
<name>          ::= /* C-identifier-like, may be quoted with " for symbols */
<hex>           ::= [0-9a-f]+
<decimal>       ::= [0-9]+
<signed-decimal>::= "-"? [0-9]+
<bits>          ::= [0-9]+
<indent>        ::= "  "                                     ; exactly 2 spaces
<newline>       ::= "\n"                                     ; LF only, never CRLF
```

End-of-function marker is a single `}` on its own line.

### 2.2. Type Tags

Type tags are `<kind><bit-width>` where:

| Kind | Family   | Valid widths (bits)  | Notes                              |
|------|----------|----------------------|------------------------------------|
| `i`  | Integer  | 1, 8, 16, 32, 64, 128 | Signedness conveyed by opcode.    |
| `f`  | Float    | 16, 32, 64, 80, 128   | IEEE-754; 80 = x87 extended.       |
| `b`  | Boolean  | 8                     | One byte, value ∈ {0, 1}. `b8` only. |

The bit-width is derived from `Varnode.size * 8`. A Varnode of size 4
used in `INT_ADD` renders as `:i32`; the same Varnode used in `FLOAT_ADD`
renders as `:f32`. Tags are reconstructed from `(opcode, size)` during
formatting; they are not stored.

### 2.3. Varnode Literals

| Pattern              | Space      | Decoding                                            |
|----------------------|------------|-----------------------------------------------------|
| `r0`, `r8`, `r16.4`  | `Register` | `offset`, optional `.size` if disambiguating alias. |
| `m0xdeadbeef`        | `Ram`      | `offset = 0xdeadbeef`.                              |
| `c0x10`              | `Const`    | `offset = 0x10`. Hex form.                          |
| `c42`                | `Const`    | `offset = 42`. Decimal form for small values.       |
| `u0`, `u1`, `u17`    | `Unique`   | Lifter-allocated temporary; offset is the index.    |
| `s-8`, `s-24`, `s16` | `Stack`    | Signed displacement from frame pointer.             |
| `v3`, `v3#1`         | (SSA)      | SSA-renamed view; `v3#1` is version 1 of `v3`.      |

The `v<n>[#<version>]` form is emitted only after SSA construction
(Task 13). Pre-SSA dumps use the underlying Varnode literals.

When register names are configured (per architecture), formatters MAY
substitute `rax` for `r0.8`, `eax` for `r0.4`, `rsp` for `r32.8`, etc.,
provided the register table is stable. The canonical form for golden
tests uses the symbolic names when an arch register table is available.

### 2.4. Block Headers

Block headers use `BB_<decimal>` where the decimal is a stable block ID.
IDs are assigned by post-order DFS from the entry block, then renumbered
in reverse-post-order so that `BB_0` is always the entry block.

Annotations (in order, when multiple apply):

- `entry` — the function's entry block.
- `loop_header` — block is the header of a natural loop.
- `unreachable` — block is provably unreachable (kept for round-tripping
  raw lifter output before DCE).
- `exit` — block ends in `RETURN` or has no successors.

Examples:

```text
BB_0 [entry]:
BB_3 [loop_header]:
BB_7 [exit]:
BB_9 [entry, loop_header]:
```

### 2.5. Instruction Lines

Each instruction is one line, indented with exactly two spaces. Two forms:

1. **With output**: `<output>:<type> = <OPCODE> <input0>:<type>, <input1>:<type>, …`
2. **Without output**: `<OPCODE> <input0>:<type>, <input1>:<type>, …`

Spacing is exact: one space after `=`, one space after the opcode, ", "
(comma-space) between operands. No trailing whitespace.

Branch targets are encoded as `Const`-space Varnodes whose offset is the
target machine address; the formatter emits them as `@BB_<n>` once block
IDs are assigned. Pre-CFG dumps use the raw `c0x<addr>` form.

Examples:

```text
  v3:i32 = INT_ADD v1:i32, v2:i32
  v5:b8 = INT_SLESS v3:i32, c0x10:i32
  CBRANCH @BB_2, v5:b8
  STORE m, v6:i64, v3:i32
  RETURN c0x0:i64, v3:i32
```

---

## 3. Opcode Reference

75 opcodes in 13 categories. Each opcode entry lists:

- **Inputs / Output**: arity and semantic role of each Varnode.
- **Semantics**: a prose description plus a C-style equation.
- **Constraints**: size, type, and structural rules a verifier must
  enforce.
- **Example**: one canonical-text-form line.

The order of opcodes within this section is the **stable serialization
order** (Task 7's `IrOp` enum discriminants follow this ordering). Do
not reorder without a spec version bump.

### 3.1. Data Movement

### COPY

**Inputs:** 1 — `input0` source Varnode.
**Output:** Yes — destination Varnode.
**Semantics:** Copy a contiguous sequence of bytes from `input0` to
`output`. Endianness-preserving raw byte copy with no type interpretation.
Equation: `output = input0`.
**Constraints:** `input0.size == output.size`. Both Varnodes may live in
any space. A Const-space `input0` represents an immediate move.
**Example:** `v2:i32 = COPY v1:i32`

### LOAD

**Inputs:** 2 — `input0` (constant space ID identifying the space being
dereferenced); `input1` (Varnode holding the pointer offset).
**Output:** Yes — destination Varnode receives the loaded value.
**Semantics:** Dereference a pointer. The pointer is the pair `(input0,
input1)`: `input0` selects the space (typically `Ram`), `input1` is the
byte offset within it. The amount of data read equals `output.size`.
Equation: `output = *(space[input0])input1`.
**Constraints:** `input0` must be in `Const` space and its offset must be
a valid `SpaceId` discriminant. `input1.size` must match the address
width of the target space (typically 8 bytes on 64-bit targets). The
formatter renders `input0` as the space short name (`m`, `s`, etc.).
**Example:** `v3:i64 = LOAD m, v2:i64`

### STORE

**Inputs:** 3 — `input0` (constant space ID); `input1` (pointer offset);
`input2` (value to store).
**Output:** No.
**Semantics:** Write `input2` into the space identified by `input0` at
offset `input1`. Equation: `*(space[input0])input1 = input2`. STORE is
side-effecting: it must not be reordered with respect to other STOREs to
overlapping addresses, LOADs from overlapping addresses, or CALLs.
**Constraints:** Same `input0` rules as LOAD. `input1.size` matches the
target space's address width. Amount of data written equals `input2.size`.
**Example:** `STORE m, v4:i64, v3:i32`

### INDIRECT

**Inputs:** 2 — `input0` (the prior value of the affected location, or a
zero Const Varnode meaning "no prior value"); `input1` (a special
reference to the p-code op causing the indirect effect).
**Output:** Yes — Varnode whose value may have been altered indirectly.
**Semantics:** Placeholder inserted during SSA construction to model
possible aliasing or side effects (typically from a `CALL` or `STORE`)
on a Varnode that data-flow cannot directly track. The output equals
`input0` with the caveat that the operation referenced by `input1` may
have changed it. INDIRECT is never produced by raw lifting; it is
introduced by Task 13's SSA construction.
**Constraints:** `output.size == input0.size`. `input1` is a special
reference encoded as a Const Varnode whose offset is the index of the
causing op within its block. A Const-zero `input0` means the value is
produced solely by `input1`'s op.
**Example:** `v7:i64 = INDIRECT v5:i64, c0x3:i64`

### 3.2. Integer Arithmetic

### INT_ADD

**Inputs:** 2 — operands.
**Output:** Yes — sum.
**Semantics:** Two's-complement integer addition modulo `2^(8*size)`.
Identical for signed and unsigned interpretations. Equation:
`output = (input0 + input1) mod 2^(8*size)`. Carry is computed by a
separate `INT_CARRY` op.
**Constraints:** `input0.size == input1.size == output.size`.
**Example:** `v3:i32 = INT_ADD v1:i32, v2:i32`

### INT_SUB

**Inputs:** 2 — minuend, subtrahend.
**Output:** Yes — difference.
**Semantics:** Two's-complement integer subtraction modulo `2^(8*size)`.
Equation: `output = (input0 - input1) mod 2^(8*size)`. Borrow is
computed by `INT_SBORROW`.
**Constraints:** All three Varnodes must have equal size.
**Example:** `v3:i64 = INT_SUB v1:i64, v2:i64`

### INT_MULT

**Inputs:** 2 — operands.
**Output:** Yes — low half of the product.
**Semantics:** Truncating integer multiplication modulo `2^(8*size)`.
The low `size` bytes of the full product are written to `output`. To
recover the high half, sign- or zero-extend inputs first, then
`SUBPIECE`. Equation: `output = (input0 * input1) mod 2^(8*size)`.
**Constraints:** All three Varnodes must have equal size.
**Example:** `v3:i32 = INT_MULT v1:i32, v2:i32`

### INT_DIV

**Inputs:** 2 — dividend, divisor.
**Output:** Yes — unsigned quotient.
**Semantics:** Unsigned integer division. Equation:
`output = unsigned(input0) / unsigned(input1)`. Division by zero is
undefined at the LIR level; lifters should emit `UNIMPLEMENTED` when
the source machine traps, otherwise CALLs into a runtime handler.
**Constraints:** All three Varnodes must have equal size. `input1`
non-zero is a precondition obligation on the caller.
**Example:** `v3:i32 = INT_DIV v1:i32, v2:i32`

### INT_SDIV

**Inputs:** 2 — dividend, divisor.
**Output:** Yes — signed quotient.
**Semantics:** Signed integer division, truncated toward zero (C99
semantics). Equation: `output = signed(input0) / signed(input1)`.
Division by zero is undefined; the singular case `INT_MIN / -1` is also
undefined and lifters must model the source-architecture trap behavior.
**Constraints:** All three Varnodes must have equal size.
**Example:** `v3:i32 = INT_SDIV v1:i32, v2:i32`

### INT_REM

**Inputs:** 2 — dividend, divisor.
**Output:** Yes — unsigned remainder.
**Semantics:** Unsigned integer remainder. Satisfies the identity
`(input0 / input1) * input1 + (input0 % input1) == input0`. Equation:
`output = unsigned(input0) mod unsigned(input1)`.
**Constraints:** All three Varnodes must have equal size. `input1`
non-zero precondition.
**Example:** `v3:i32 = INT_REM v1:i32, v2:i32`

### INT_SREM

**Inputs:** 2 — dividend, divisor.
**Output:** Yes — signed remainder.
**Semantics:** Signed integer remainder, with the sign of the dividend
(C99 semantics). Equation:
`output = signed(input0) - INT_SDIV(input0, input1) * input1`.
**Constraints:** All three Varnodes must have equal size. Same edge
cases as INT_SDIV.
**Example:** `v3:i32 = INT_SREM v1:i32, v2:i32`

### INT_NEGATE

**Inputs:** 1 — operand.
**Output:** Yes — bitwise complement.
**Semantics:** Bitwise NOT (one's complement) of `input0`. Despite the
name, this is *not* arithmetic negation; see `INT_2COMP` for that.
Equation: `output = ~input0`.
**Constraints:** `input0.size == output.size`.
**Example:** `v2:i64 = INT_NEGATE v1:i64`

### INT_2COMP

**Inputs:** 1 — operand.
**Output:** Yes — arithmetic negation.
**Semantics:** Two's-complement arithmetic negation. Equation:
`output = -input0 mod 2^(8*size)`. Note that `INT_2COMP` of `INT_MIN`
is `INT_MIN` (the only fixed point under negation in two's complement).
**Constraints:** `input0.size == output.size`.
**Example:** `v2:i32 = INT_2COMP v1:i32`

### INT_ZEXT

**Inputs:** 1 — operand to widen.
**Output:** Yes — zero-extended result.
**Semantics:** Copy the bytes of `input0` into the least-significant
positions of `output`, fill the most-significant remainder with zero
bytes. Equation: `output = zext(input0)`.
**Constraints:** `output.size > input0.size` strictly. Equal sizes
should be `COPY`, not `INT_ZEXT`.
**Example:** `v2:i64 = INT_ZEXT v1:i32`

### INT_SEXT

**Inputs:** 1 — operand to widen.
**Output:** Yes — sign-extended result.
**Semantics:** Copy the bytes of `input0` into the least-significant
positions of `output`, fill the most-significant remainder with copies
of the most-significant bit of `input0` (0x00 or 0xff bytes). Equation:
`output = sext(input0)`.
**Constraints:** `output.size > input0.size` strictly.
**Example:** `v2:i64 = INT_SEXT v1:i32`

### 3.3. Integer Comparison

All comparison opcodes produce a 1-byte boolean output (`b8`). Both
inputs must have equal size. Output is `0x01` if the predicate holds,
`0x00` otherwise. Result type is independent of input size.

### INT_EQUAL

**Inputs:** 2 — operands.
**Output:** Yes — boolean (`b8`).
**Semantics:** Bit-for-bit equality. Works regardless of signed or
unsigned interpretation. Equation: `output = (input0 == input1) ? 1 : 0`.
**Constraints:** `input0.size == input1.size`. `output.size == 1`.
**Example:** `v3:b8 = INT_EQUAL v1:i32, v2:i32`

### INT_NOTEQUAL

**Inputs:** 2 — operands.
**Output:** Yes — boolean.
**Semantics:** Bit-for-bit inequality. Equation:
`output = (input0 != input1) ? 1 : 0`.
**Constraints:** `input0.size == input1.size`. `output.size == 1`.
**Example:** `v3:b8 = INT_NOTEQUAL v1:i64, v2:i64`

### INT_LESS

**Inputs:** 2 — operands.
**Output:** Yes — boolean.
**Semantics:** Unsigned strict less-than. Equation:
`output = (unsigned(input0) < unsigned(input1)) ? 1 : 0`.
**Constraints:** `input0.size == input1.size`. `output.size == 1`.
**Example:** `v3:b8 = INT_LESS v1:i32, v2:i32`

### INT_SLESS

**Inputs:** 2 — operands.
**Output:** Yes — boolean.
**Semantics:** Signed strict less-than. Equation:
`output = (signed(input0) < signed(input1)) ? 1 : 0`.
**Constraints:** `input0.size == input1.size`. `output.size == 1`.
**Example:** `v3:b8 = INT_SLESS v1:i32, v2:i32`

### INT_LESSEQUAL

**Inputs:** 2 — operands.
**Output:** Yes — boolean.
**Semantics:** Unsigned less-than-or-equal. Equation:
`output = (unsigned(input0) <= unsigned(input1)) ? 1 : 0`.
**Constraints:** `input0.size == input1.size`. `output.size == 1`.
**Example:** `v3:b8 = INT_LESSEQUAL v1:i32, v2:i32`

### INT_SLESSEQUAL

**Inputs:** 2 — operands.
**Output:** Yes — boolean.
**Semantics:** Signed less-than-or-equal. Equation:
`output = (signed(input0) <= signed(input1)) ? 1 : 0`.
**Constraints:** `input0.size == input1.size`. `output.size == 1`.
**Example:** `v3:b8 = INT_SLESSEQUAL v1:i32, v2:i32`

### 3.4. Integer Carry & Overflow

These three opcodes compute condition-flag values that machine
arithmetic instructions emit as side effects. Output is always `b8`.

### INT_CARRY

**Inputs:** 2 — addends.
**Output:** Yes — boolean.
**Semantics:** Returns the unsigned carry-out of `input0 + input1`,
i.e. true iff the unsigned addition overflows. Equation:
`output = (unsigned(input0) + unsigned(input1) >= 2^(8*size)) ? 1 : 0`.
Models x86 `CF` after `ADD`.
**Constraints:** `input0.size == input1.size`. `output.size == 1`.
**Example:** `v4:b8 = INT_CARRY v1:i32, v2:i32`

### INT_SCARRY

**Inputs:** 2 — addends.
**Output:** Yes — boolean.
**Semantics:** Returns the signed overflow flag for `input0 + input1`,
i.e. true iff the two-input signed addition overflows the signed range.
Equation: `output = (signed_overflow(input0 + input1)) ? 1 : 0`. Models
x86 `OF` after `ADD`.
**Constraints:** `input0.size == input1.size`. `output.size == 1`.
**Example:** `v4:b8 = INT_SCARRY v1:i32, v2:i32`

### INT_SBORROW

**Inputs:** 2 — minuend, subtrahend.
**Output:** Yes — boolean.
**Semantics:** Returns the signed overflow flag for `input0 - input1`.
Equation: `output = (signed_overflow(input0 - input1)) ? 1 : 0`. Models
x86 `OF` after `SUB`.
**Constraints:** `input0.size == input1.size`. `output.size == 1`.
**Example:** `v4:b8 = INT_SBORROW v1:i32, v2:i32`

### 3.5. Bitwise & Shift

### INT_AND

**Inputs:** 2 — operands.
**Output:** Yes — bitwise AND.
**Semantics:** Per-bit logical AND. Equation: `output = input0 & input1`.
**Constraints:** All three Varnodes must have equal size.
**Example:** `v3:i32 = INT_AND v1:i32, v2:i32`

### INT_OR

**Inputs:** 2 — operands.
**Output:** Yes — bitwise OR.
**Semantics:** Per-bit logical OR. Equation: `output = input0 | input1`.
**Constraints:** All three Varnodes must have equal size.
**Example:** `v3:i32 = INT_OR v1:i32, v2:i32`

### INT_XOR

**Inputs:** 2 — operands.
**Output:** Yes — bitwise XOR.
**Semantics:** Per-bit logical exclusive OR. Equation:
`output = input0 ^ input1`.
**Constraints:** All three Varnodes must have equal size.
**Example:** `v3:i32 = INT_XOR v1:i32, v2:i32`

### INT_LEFT

**Inputs:** 2 — value, shift count.
**Output:** Yes — left-shifted result.
**Semantics:** Logical (zero-fill) left shift. Equation:
`output = input0 << input1`. If `input1` is >= the bit width of
`input0`, output is zero (matches LLVM `shl` semantics, distinct from
x86 `SHL` which masks the count; lifters must emit a mask explicitly
when modeling x86).
**Constraints:** `input0.size == output.size`. `input1.size` may
differ; treated as unsigned shift count.
**Example:** `v3:i32 = INT_LEFT v1:i32, v2:i8`

### INT_RIGHT

**Inputs:** 2 — value, shift count.
**Output:** Yes — logically right-shifted result.
**Semantics:** Logical (zero-fill) right shift. Equation:
`output = unsigned(input0) >> input1`. Out-of-range shifts produce
zero, as for INT_LEFT.
**Constraints:** Same as INT_LEFT.
**Example:** `v3:i32 = INT_RIGHT v1:i32, v2:i8`

### INT_SRIGHT

**Inputs:** 2 — value, shift count.
**Output:** Yes — arithmetically right-shifted result.
**Semantics:** Arithmetic (sign-fill) right shift. Equation:
`output = signed(input0) >> input1`, with sign bit replicated. Shifts
by >= bit-width yield 0 if `input0` is non-negative, `-1` (all ones)
otherwise.
**Constraints:** Same as INT_LEFT.
**Example:** `v3:i32 = INT_SRIGHT v1:i32, v2:i8`

### 3.6. Boolean

These opcodes operate on 1-byte boolean Varnodes (`b8`). All inputs and
outputs must be size 1; values must be 0 or 1; behaviour for other byte
values is implementation-defined.

### BOOL_NEGATE

**Inputs:** 1 — boolean.
**Output:** Yes — boolean.
**Semantics:** Logical NOT. Equation: `output = !input0` (i.e.
`output = 1 - input0` given the well-formedness invariant).
**Constraints:** `input0.size == output.size == 1`.
**Example:** `v3:b8 = BOOL_NEGATE v2:b8`

### BOOL_AND

**Inputs:** 2 — booleans.
**Output:** Yes — boolean.
**Semantics:** Logical AND. Equation: `output = input0 & input1`. Note
that for well-formed boolean inputs, BOOL_AND and INT_AND with size 1
are identical; the distinction is for type-clarity in the IR.
**Constraints:** All three Varnodes must have size 1.
**Example:** `v4:b8 = BOOL_AND v2:b8, v3:b8`

### BOOL_OR

**Inputs:** 2 — booleans.
**Output:** Yes — boolean.
**Semantics:** Logical OR. Equation: `output = input0 | input1`.
**Constraints:** All three Varnodes must have size 1.
**Example:** `v4:b8 = BOOL_OR v2:b8, v3:b8`

### BOOL_XOR

**Inputs:** 2 — booleans.
**Output:** Yes — boolean.
**Semantics:** Logical exclusive OR (i.e. boolean inequality). Equation:
`output = input0 ^ input1`.
**Constraints:** All three Varnodes must have size 1.
**Example:** `v4:b8 = BOOL_XOR v2:b8, v3:b8`

### 3.7. Floating-Point Arithmetic

Floating-point opcodes interpret Varnodes as IEEE-754 values in the
encoding determined by `Varnode.size`: 4 bytes → binary32, 8 bytes →
binary64, 10 bytes → x87 80-bit extended, 16 bytes → binary128. All
opcodes follow IEEE-754 default rounding (round-to-nearest-even) unless
the source architecture's rounding mode register is explicitly modeled
(via Register-space Varnodes consumed by lifter-emitted CALLOTHER ops).

### FLOAT_ADD

**Inputs:** 2 — operands.
**Output:** Yes — sum.
**Semantics:** IEEE-754 addition. Equation: `output = input0 + input1`.
NaN propagates per IEEE rules.
**Constraints:** `input0.size == input1.size == output.size`. All sizes
must be a valid IEEE width (4, 8, 10, or 16).
**Example:** `v3:f64 = FLOAT_ADD v1:f64, v2:f64`

### FLOAT_SUB

**Inputs:** 2 — minuend, subtrahend.
**Output:** Yes — difference.
**Semantics:** IEEE-754 subtraction. Equation:
`output = input0 - input1`.
**Constraints:** Same as FLOAT_ADD.
**Example:** `v3:f64 = FLOAT_SUB v1:f64, v2:f64`

### FLOAT_MULT

**Inputs:** 2 — operands.
**Output:** Yes — product.
**Semantics:** IEEE-754 multiplication. Equation:
`output = input0 * input1`.
**Constraints:** Same as FLOAT_ADD.
**Example:** `v3:f64 = FLOAT_MULT v1:f64, v2:f64`

### FLOAT_DIV

**Inputs:** 2 — dividend, divisor.
**Output:** Yes — quotient.
**Semantics:** IEEE-754 division. Equation:
`output = input0 / input1`. Division by zero produces ±∞ (IEEE rules);
0/0 produces NaN; behaviour on signaling-NaN inputs is platform default.
**Constraints:** Same as FLOAT_ADD.
**Example:** `v3:f64 = FLOAT_DIV v1:f64, v2:f64`

### FLOAT_NEG

**Inputs:** 1 — operand.
**Output:** Yes — negated value.
**Semantics:** IEEE-754 negation: flip the sign bit. Equation:
`output = -input0`. NaNs preserve their payload but flip sign.
**Constraints:** `input0.size == output.size`, valid IEEE width.
**Example:** `v2:f64 = FLOAT_NEG v1:f64`

### FLOAT_ABS

**Inputs:** 1 — operand.
**Output:** Yes — absolute value.
**Semantics:** IEEE-754 absolute value: clear the sign bit. Equation:
`output = |input0|`. `|−0| = +0`. `|NaN|` is NaN with cleared sign.
**Constraints:** `input0.size == output.size`, valid IEEE width.
**Example:** `v2:f32 = FLOAT_ABS v1:f32`

### FLOAT_SQRT

**Inputs:** 1 — operand.
**Output:** Yes — square root.
**Semantics:** IEEE-754 correctly-rounded square root. Equation:
`output = sqrt(input0)`. Negative non-zero input produces NaN; `sqrt(-0)
= -0`; `sqrt(+∞) = +∞`.
**Constraints:** `input0.size == output.size`, valid IEEE width.
**Example:** `v2:f64 = FLOAT_SQRT v1:f64`

### 3.8. Floating-Point Rounding & Conversion

### FLOAT_CEIL

**Inputs:** 1 — operand.
**Output:** Yes — rounded value.
**Semantics:** Round toward +∞ (ceiling). Equation:
`output = ceil(input0)`. Result is a float with no fractional part.
**Constraints:** `input0.size == output.size`, valid IEEE width.
**Example:** `v2:f64 = FLOAT_CEIL v1:f64`

### FLOAT_FLOOR

**Inputs:** 1 — operand.
**Output:** Yes — rounded value.
**Semantics:** Round toward −∞ (floor). Equation:
`output = floor(input0)`.
**Constraints:** `input0.size == output.size`, valid IEEE width.
**Example:** `v2:f64 = FLOAT_FLOOR v1:f64`

### FLOAT_ROUND

**Inputs:** 1 — operand.
**Output:** Yes — rounded value.
**Semantics:** Round to nearest integer, ties to even (IEEE-754
roundTiesToEven). Equation: `output = round(input0)`.
**Constraints:** `input0.size == output.size`, valid IEEE width.
**Example:** `v2:f64 = FLOAT_ROUND v1:f64`

### FLOAT_TRUNC

**Inputs:** 1 — operand.
**Output:** Yes — rounded value.
**Semantics:** Round toward zero (truncate fractional part). Equation:
`output = trunc(input0)`. Output is still a float.
**Constraints:** `input0.size == output.size`, valid IEEE width.
**Example:** `v2:f64 = FLOAT_TRUNC v1:f64`

### FLOAT_NAN

**Inputs:** 1 — operand.
**Output:** Yes — boolean (`b8`).
**Semantics:** Test whether `input0` is a NaN (any payload, signaling
or quiet). Equation: `output = isnan(input0) ? 1 : 0`.
**Constraints:** `input0.size` is a valid IEEE width.
`output.size == 1`.
**Example:** `v3:b8 = FLOAT_NAN v1:f64`

### FLOAT_INT2FLOAT

**Inputs:** 1 — signed integer.
**Output:** Yes — float.
**Semantics:** Convert a two's-complement signed integer to its closest
representable IEEE-754 value, rounding per the active rounding mode
(default: round-to-nearest-even). Equation:
`output = (float) signed(input0)`. The unsigned variant is built by
zero-extending first.
**Constraints:** `input0.size` ∈ {1, 2, 4, 8, 16} (integer widths);
`output.size` is a valid IEEE width. Sizes need not match.
**Example:** `v2:f64 = FLOAT_INT2FLOAT v1:i32`

### FLOAT_FLOAT2FLOAT

**Inputs:** 1 — float.
**Output:** Yes — float of possibly different size.
**Semantics:** Convert between IEEE-754 widths: extend (e.g. f32 → f64
exact) or narrow (f64 → f32, with rounding). Equation:
`output = (float<output_size>) input0`.
**Constraints:** `input0.size` and `output.size` are both valid IEEE
widths. Equal sizes should be `COPY`.
**Example:** `v2:f32 = FLOAT_FLOAT2FLOAT v1:f64`

### FLOAT_FLOAT2INT

**Inputs:** 1 — float.
**Output:** Yes — signed integer.
**Semantics:** Convert IEEE-754 to signed integer by truncation toward
zero (C99 `(int)` cast). Equation: `output = (signed) input0`. Out-of-
range values, NaNs, and infinities are implementation-defined; lifters
must model the source-architecture behavior (typically saturation or a
trap).
**Constraints:** `input0.size` is a valid IEEE width;
`output.size` ∈ {1, 2, 4, 8, 16}.
**Example:** `v2:i32 = FLOAT_FLOAT2INT v1:f64`

### 3.9. Floating-Point Comparison

All four produce a `b8` output. All four return false (`0`) when either
operand is NaN (i.e. they are *ordered* comparisons). For unordered
variants, combine with `FLOAT_NAN` and `BOOL_*`.

### FLOAT_EQUAL

**Inputs:** 2 — operands.
**Output:** Yes — boolean.
**Semantics:** Ordered IEEE-754 equality. Returns 0 if either input is
NaN. Equation: `output = (input0 == input1 && !isnan(input0) &&
!isnan(input1)) ? 1 : 0`.
**Constraints:** `input0.size == input1.size`, valid IEEE width.
`output.size == 1`.
**Example:** `v3:b8 = FLOAT_EQUAL v1:f64, v2:f64`

### FLOAT_NOTEQUAL

**Inputs:** 2 — operands.
**Output:** Yes — boolean.
**Semantics:** Ordered IEEE-754 inequality. Returns 0 if either input
is NaN (i.e. NaN != NaN is reported as 0, matching `==` here; for the
"unordered or unequal" semantic of C `!=` use `BOOL_NEGATE
FLOAT_EQUAL`).
**Constraints:** Same as FLOAT_EQUAL.
**Example:** `v3:b8 = FLOAT_NOTEQUAL v1:f64, v2:f64`

### FLOAT_LESS

**Inputs:** 2 — operands.
**Output:** Yes — boolean.
**Semantics:** Ordered IEEE-754 less-than. Returns 0 if either input
is NaN. Equation: `output = (input0 < input1) ? 1 : 0`.
**Constraints:** Same as FLOAT_EQUAL.
**Example:** `v3:b8 = FLOAT_LESS v1:f64, v2:f64`

### FLOAT_LESSEQUAL

**Inputs:** 2 — operands.
**Output:** Yes — boolean.
**Semantics:** Ordered IEEE-754 less-than-or-equal. Returns 0 if
either input is NaN. Equation: `output = (input0 <= input1) ? 1 : 0`.
**Constraints:** Same as FLOAT_EQUAL.
**Example:** `v3:b8 = FLOAT_LESSEQUAL v1:f64, v2:f64`

### 3.10. Control Flow

These opcodes terminate basic blocks. CALL and CALLIND are terminators
in raw P-code (because the original instruction is treated as
control-flow), but post-CFG-construction they become non-terminators
within their block (the call returns to the next instruction).

### BRANCH

**Inputs:** 1 — `input0` (target Varnode whose space and offset *are*
the destination — not the contents).
**Output:** No.
**Semantics:** Unconditional jump. Equation: `goto input0`. The target
is the *literal address* encoded by `input0`'s `(space, offset)`, not
a value loaded from `input0`. A Const-space `input0` denotes p-code-
relative branching within the current machine instruction's expansion.
**Constraints:** `input0` is a Const Varnode whose offset is a valid
machine address (or a small p-code-relative offset).
**Example:** `BRANCH @BB_5`

### CBRANCH

**Inputs:** 2 — `input0` (target, same encoding as BRANCH); `input1`
(boolean condition Varnode).
**Output:** No.
**Semantics:** Conditional branch. Equation: `if (input1) goto input0`.
If `input1` is non-zero, control transfers to `input0`; otherwise
fall-through. Same p-code-relative semantics for Const-space `input0`.
**Constraints:** `input0` encoding as for BRANCH. `input1.size == 1`.
**Example:** `CBRANCH @BB_3, v5:b8`

### BRANCHIND

**Inputs:** 1 — `input0` (Varnode containing the destination offset).
**Output:** No.
**Semantics:** Indirect jump. The destination offset is *the value of*
`input0` (contrast with BRANCH, which uses `input0`'s address). The
destination space is the same space as the current instruction.
Equation: `goto [input0]`. Used for jump tables, computed gotos, and
function returns when the lifter has not yet recovered them.
**Constraints:** `input0.size` must equal the current address space's
pointer width.
**Example:** `BRANCHIND v9:i64`

### CALL

**Inputs:** 1 + N — `input0` (call target, encoded as for BRANCH);
`input1..inputN` (recovered argument Varnodes, never present in raw
output, added by Task 39's calling-convention pass).
**Output:** No (in raw form). Post-analysis, an output Varnode may be
attached to model the return value.
**Semantics:** Direct subroutine call. Equation:
`call [input0](input1, ..., inputN)`. Semantically a branch (no return
address is pushed at the LIR level — the source machine's PUSH
instruction emits a separate STORE), but tagged as CALL so structuring
treats it as a function-call edge.
**Constraints:** `input0` is a Const Varnode whose offset is a valid
machine address.
**Example:** `CALL @sub_1234, v3:i64, v4:i64`

### CALLIND

**Inputs:** 1 + N — `input0` (Varnode containing target address);
`input1..inputN` (arguments, post-analysis only).
**Output:** No (raw); analysis may add a return-value output.
**Semantics:** Indirect subroutine call. Equation:
`call [input0](input1, ..., inputN)`. Like BRANCHIND for the
control-flow part but tagged as a call.
**Constraints:** `input0.size` matches pointer width.
**Example:** `CALLIND v8:i64, v3:i64`

### RETURN

**Inputs:** 1 + [N] — `input0` (return-target Varnode; semantically
identical to BRANCHIND); optional `input1..` (recovered return values,
post-analysis only).
**Output:** No.
**Semantics:** Return from subroutine. Equation: `return [input0]`. In
raw form `input0` is typically a load of the saved return address from
the stack; analysis treats RETURN as a sink for the function.
**Constraints:** `input0.size` matches pointer width.
**Example:** `RETURN v_lr:i64, v3:i32`

### 3.11. Bit & Field Manipulation

### PIECE

**Inputs:** 2 — `input0` (most-significant bytes); `input1` (least-
significant bytes).
**Output:** Yes — concatenation.
**Semantics:** Endianness-aware concatenation: place `input0` in the
upper bytes of `output` and `input1` in the lower bytes (treating
output as a big-endian integer). Equation:
`output = (zext(input0) << (8*input1.size)) | zext(input1)`. Used by
lifters to merge `EAX:EDX` into a 64-bit value, or `AH:AL` into `AX`.
**Constraints:** `input0.size + input1.size == output.size`.
**Example:** `v3:i64 = PIECE v1:i32, v2:i32`

### SUBPIECE

**Inputs:** 2 — `input0` (source); `input1` (constant: number of
least-significant bytes to discard).
**Output:** Yes — truncated value.
**Semantics:** Discard the lowest `input1` bytes of `input0`, then take
the next `output.size` bytes. Equation:
`output = (input0 >> (8*input1)) & ((1 << (8*output.size)) - 1)`. Used
to extract `AH` from `AX` (input1=1, output.size=1), or low halves of
multiplications.
**Constraints:** `input1` must be in Const space. `input1.offset +
output.size <= input0.size` (a verifier can reject out-of-range
extractions).
**Example:** `v3:i8 = SUBPIECE v1:i32, c1:i8`

### POPCOUNT

**Inputs:** 1 — operand.
**Output:** Yes — bit count.
**Semantics:** Count of 1-bits in `input0`. Equation:
`output = popcount(input0)`. Result is zero-extended into `output` if
`output.size > log2(8*input0.size)/8`.
**Constraints:** `input0.size` and `output.size` may differ; output
must be wide enough to hold `8 * input0.size` (typically `i32` suffices
for any reasonable input).
**Example:** `v2:i32 = POPCOUNT v1:i64`

### LZCOUNT

**Inputs:** 1 — operand.
**Output:** Yes — leading-zero count.
**Semantics:** Count of leading zero bits, starting from the most
significant bit. For all-zeros input, returns `8 * input0.size`.
Equation: `output = lzcount(input0)`. Result is zero-extended.
**Constraints:** Same flexibility as POPCOUNT.
**Example:** `v2:i32 = LZCOUNT v1:i64`

### INSERT

**Inputs:** 4 — `input0` (target value); `input1` (bits to insert,
right-aligned); `position` (constant: bit position of the lowest
overwritten bit); `size_bits` (constant: number of bits to overwrite).
**Output:** Yes — `input0` with the indicated bit range overwritten.
**Semantics:** Replace the `size_bits` bits of `input0` starting at bit
`position` (LSB = bit 0) with the low `size_bits` bits of `input1`,
preserving all other bits. Equation:
`output = (input0 & ~mask) | ((input1 << position) & mask)` where
`mask = ((1 << size_bits) - 1) << position`. Models bitfield assignment
and partial-register writes such as `mov al, bl`.
**Constraints:** `input0.size == output.size`. `position` and
`size_bits` are Const-space Varnodes. `position + size_bits <=
8 * input0.size` and `size_bits <= 8 * input1.size`.
**Example:** `v3:i32 = INSERT v1:i32, v2:i8, c0:i32, c8:i32`

### ZPULL

**Inputs:** 3 — `input0` (source); `position` (constant: bit position);
`size_bits` (constant: number of bits to extract).
**Output:** Yes — extracted unsigned value.
**Semantics:** Extract a `size_bits`-wide bit range from `input0`
starting at bit `position` (LSB = bit 0), zero-extend to `output.size`.
Equation: `output = (input0 >> position) & ((1 << size_bits) - 1)`.
Models unsigned bitfield reads.
**Constraints:** `position` and `size_bits` are Const Varnodes.
`position + size_bits <= 8 * input0.size`. `size_bits <=
8 * output.size`.
**Example:** `v3:i32 = ZPULL v1:i64, c4:i32, c12:i32`

### SPULL

**Inputs:** 3 — `input0` (source); `position` (constant: bit position);
`size_bits` (constant: number of bits to extract).
**Output:** Yes — extracted signed value.
**Semantics:** Extract a `size_bits`-wide bit range from `input0`
starting at bit `position` and sign-extend (replicating the high bit of
the extracted range) to `output.size`. Equation:
`output = sext_from_bit(size_bits, (input0 >> position) &
((1 << size_bits) - 1))`. Models signed bitfield reads.
**Constraints:** Same as ZPULL.
**Example:** `v3:i32 = SPULL v1:i64, c4:i32, c12:i32`

### 3.12. Pointer & Type

These opcodes are produced by analysis (Task 16 type inference and
Task 17 structuring), never by raw lifters. They carry type information
that helps the C printer emit `arr[i]` rather than
`*(int*)((char*)arr + i*4)`.

### PTRADD

**Inputs:** 3 — `input0` (pointer to array base); `input1` (integer
index); `input2` (constant: element size in bytes).
**Output:** Yes — pointer to indexed element.
**Semantics:** Equivalent to `INT_ADD(input0, INT_MULT(input1, input2))`
but tagged to indicate `input0` is an array pointer and `input1` is an
index. Equation: `output = input0 + (input1 * input2)`. The C printer
renders this as `&input0[input1]`.
**Constraints:** `input0.size == input1.size == output.size` (pointer
width). `input2` is Const, `input2.size == input0.size`.
**Example:** `v3:i64 = PTRADD v1:i64, v2:i64, c4:i64`

### PTRSUB

**Inputs:** 2 — `input0` (pointer to struct base); `input1` (constant
or variable byte offset to a subcomponent).
**Output:** Yes — pointer to subcomponent.
**Semantics:** Equivalent to `INT_ADD(input0, input1)` but tagged to
indicate `input0` is a struct pointer and `input1` is a member offset.
Equation: `output = input0 + input1`. The C printer renders this as
`&input0->member` when `input1` corresponds to a known struct field.
**Constraints:** `input0.size == input1.size == output.size`.
**Example:** `v3:i64 = PTRSUB v1:i64, c0x10:i64`

### CAST

**Inputs:** 1 — operand.
**Output:** Yes — same value, possibly different declared type.
**Semantics:** Bit-identical copy of `input0` to `output` (no
conversion, no rounding) that flags a deliberate type reinterpretation.
Equation: `output = input0` (bytes); type changes per analysis. Used
when, for example, an integer Varnode is reinterpreted as a pointer
after type inference. The C printer emits a `(T)` cast.
**Constraints:** `input0.size == output.size`.
**Example:** `v3:i64 = CAST v1:i64`

### 3.13. SSA & Pseudo

These opcodes either are never emitted by raw lifters (MULTIEQUAL,
INDIRECT — already covered) or are placeholders for behaviour the LIR
does not fully model (CALLOTHER, CPOOLREF, NEW, UNIMPLEMENTED, SEGMENTOP).

### MULTIEQUAL

**Inputs:** N (one per predecessor block) — Varnodes from each
incoming control-flow edge.
**Output:** Yes — merged Varnode.
**Semantics:** SSA phi-function. The output equals whichever input
corresponds to the actually-taken predecessor edge at runtime.
Equation: `output = inputK` where `K` is the index of the predecessor
that transferred control to this block. MULTIEQUAL is inserted by Task
13's SSA construction at the join points of the dominance frontier.
**Constraints:** All inputs and the output have equal size. The number
of inputs equals the number of predecessors of the containing block;
the order of inputs follows the canonical predecessor ordering
(predecessors sorted by `BlockId` ascending).
**Example:** `v5:i32 = MULTIEQUAL v3:i32, v4:i32`

### CALLOTHER

**Inputs:** 1 + N — `input0` (constant: intrinsic ID drawn from a
project-wide registry); `input1..inputN` (intrinsic-specific arguments).
**Output:** Optional — depends on the intrinsic.
**Semantics:** Pseudo-operation for instructions whose semantics are
not fully modeled. Treated as a black-box with normal data-flow:
analysis must assume `output` depends on all inputs but make no further
assumption. Used for SSE/AVX/AMX, system calls, atomic primitives, MMU
operations, and architecture-specific extensions. Equation:
`output = userop[input0](input1, ..., inputN)`.
**Constraints:** `input0` is a Const Varnode. The intrinsic registry
defines the expected arity and types per ID; the verifier checks
against the registry.
**Example:** `v3:i32 = CALLOTHER c0x1:i32, v1:i32, v2:i32`

### CPOOLREF

**Inputs:** 2 + N — `input0` (Varnode containing object pointer);
`input1` (constant: query type ID); optional further constants
describing the query.
**Output:** Yes — queried value (size, offset, address, or method
pointer, depending on the query).
**Semantics:** Constant-pool reference for managed-code instruction
sets (JVM bytecode, .NET CIL, ARM64 software-defined exceptions).
Returns runtime-resolved metadata about an object. Used as a
placeholder in environments where method resolution is deferred.
Equation: `output = cpool(input0, input1, ...)`.
**Constraints:** `input1` is a Const Varnode. Other arity per query.
**Example:** `v3:i64 = CPOOLREF v1:i64, c0x2:i32`

### NEW

**Inputs:** 1 + [1] — `input0` (Varnode containing class reference or
type tag); optional `input1` (Varnode containing object count for
arrays).
**Output:** Yes — pointer to allocated object.
**Semantics:** Allocate memory for an object of the type described by
`input0` and return a pointer. Models managed-runtime `new` operators
where allocation is atomic at the instruction level. Equation:
`output = new(input0[, input1])`.
**Constraints:** `output.size` equals pointer width.
**Example:** `v2:i64 = NEW v1:i64`

### SEGMENTOP

**Inputs:** 3 — `input0` (constant: segment-space ID); `input1`
(segment selector); `input2` (within-segment offset).
**Output:** Yes — flat-address result.
**Semantics:** Combine a segment selector and an offset into a flat
address per the source architecture's segmentation model. Equation:
`output = segment_resolve(input0, input1, input2)`. Used for x86 16-bit
real mode, x86 protected-mode segment registers (FS/GS), and some
embedded architectures with bank-switched memory.
**Constraints:** `input0` is a Const Varnode. `output.size` matches the
flat address width.
**Example:** `v3:i64 = SEGMENTOP c0x0:i32, v_fs:i16, v_off:i64`

### UNIMPLEMENTED

**Inputs:** 0 — none. Optional metadata may be carried in a side-table
keyed by op address.
**Output:** No. Optional output Varnode may be attached to model an
unknown register write; analysis treats such an output as having an
unknown value with maximum aliasing.
**Semantics:** Placeholder for an instruction the lifter does not
support. Treated as a hard barrier: it may have arbitrary side effects,
so analysis must conservatively invalidate all live state crossing it
unless an explicit clobber list is provided in the side-table. The C
printer emits a comment `/* unimplemented insn at 0x... */`. Distinct
from `CALLOTHER`, which has known data-flow.
**Constraints:** No structural constraint; the op exists primarily as
a sentinel.
**Example:** `UNIMPLEMENTED`

---

## 4. Quick Reference Tables

### 4.1. Terminator vs. Non-Terminator

A *terminator* is an opcode that, when present, must be the last
instruction of its basic block. Non-terminators must not be followed by
another instruction within the block from which control could
fall-through to two different successors.

| Class                | Opcodes                                                  |
|----------------------|----------------------------------------------------------|
| Always terminator    | `BRANCH`, `CBRANCH`, `BRANCHIND`, `RETURN`, `UNIMPLEMENTED` (when no clobber-list provided) |
| Terminator-in-raw    | `CALL`, `CALLIND` (raw P-code treats them as branches; post-CFG they are non-terminators) |
| Never terminator     | All others                                               |

### 4.2. Side-Effecting vs. Pure

A *pure* opcode has no side effects: its only contribution is its
output Varnode, computed from its input Varnodes. *Side-effecting*
opcodes may modify or depend on hidden state (memory, globals, the
opaque environment of `CALLOTHER`).

| Class           | Opcodes                                                                                |
|-----------------|----------------------------------------------------------------------------------------|
| Side-effecting  | `STORE`, `LOAD` (depends on memory state), `CALL`, `CALLIND`, `RETURN`, `INDIRECT`, `CALLOTHER`, `CPOOLREF`, `NEW`, `SEGMENTOP`, `UNIMPLEMENTED`, `BRANCH`, `CBRANCH`, `BRANCHIND` |
| Pure            | All `INT_*`, `BOOL_*`, `FLOAT_*`, `COPY`, `PIECE`, `SUBPIECE`, `POPCOUNT`, `LZCOUNT`, `PTRADD`, `PTRSUB`, `CAST`, `INSERT`, `ZPULL`, `SPULL`, `MULTIEQUAL` |

LOAD is technically pure with respect to the abstract state of memory
at the LOAD's program point but is treated as side-effecting for
movement (it cannot be reordered past a STORE that may alias).

### 4.3. Form: Raw vs. SSA vs. Pseudo

| Form          | Opcodes                                                              |
|---------------|----------------------------------------------------------------------|
| Raw P-code    | All except those listed below.                                       |
| SSA-only      | `MULTIEQUAL`, `INDIRECT`                                             |
| Type-analysis | `PTRADD`, `PTRSUB`, `CAST`                                           |
| Pseudo        | `CALLOTHER`, `CPOOLREF`, `NEW`, `SEGMENTOP`                          |
| Sentinel      | `UNIMPLEMENTED`                                                      |

### 4.4. Stable Opcode Ordering

Task 7's `IrOp` enum follows this exact order (the discriminants are
their indices in this list, starting at 0). The order matches the
section ordering in §3:

```text
 0  COPY                  19  INT_LESSEQUAL         38  FLOAT_NEG             57  CALLIND
 1  LOAD                  20  INT_SLESSEQUAL        39  FLOAT_ABS             58  RETURN
 2  STORE                 21  INT_CARRY             40  FLOAT_SQRT            59  PIECE
 3  INDIRECT              22  INT_SCARRY            41  FLOAT_CEIL            60  SUBPIECE
 4  INT_ADD               23  INT_SBORROW           42  FLOAT_FLOOR           61  POPCOUNT
 5  INT_SUB               24  INT_AND               43  FLOAT_ROUND           62  LZCOUNT
 6  INT_MULT              25  INT_OR                44  FLOAT_TRUNC           63  INSERT
 7  INT_DIV               26  INT_XOR               45  FLOAT_NAN             64  ZPULL
 8  INT_SDIV              27  INT_LEFT              46  FLOAT_INT2FLOAT       65  SPULL
 9  INT_REM               28  INT_RIGHT             47  FLOAT_FLOAT2FLOAT     66  PTRADD
10  INT_SREM              29  INT_SRIGHT            48  FLOAT_FLOAT2INT       67  PTRSUB
11  INT_NEGATE            30  BOOL_NEGATE           49  FLOAT_EQUAL           68  CAST
12  INT_2COMP             31  BOOL_AND              50  FLOAT_NOTEQUAL        69  MULTIEQUAL
13  INT_ZEXT              32  BOOL_OR               51  FLOAT_LESS            70  CALLOTHER
14  INT_SEXT              33  BOOL_XOR              52  FLOAT_LESSEQUAL       71  CPOOLREF
15  INT_EQUAL             34  FLOAT_ADD             53  BRANCH                72  NEW
16  INT_NOTEQUAL          35  FLOAT_SUB             54  CBRANCH               73  SEGMENTOP
17  INT_LESS              36  FLOAT_MULT            55  BRANCHIND             74  UNIMPLEMENTED
18  INT_SLESS             37  FLOAT_DIV             56  CALL
```

This ordering is **frozen for v1.x**. Reordering or removing any entry
requires a major version bump (§6). New opcodes must be appended at the
end (positions ≥ 75) and require both a v1.x bump and `#[non_exhaustive]`
on the consuming enum to preserve forward compatibility.

### 4.5. Operand Arity Summary

| Opcode               | Inputs | Output | Notes                               |
|----------------------|--------|--------|-------------------------------------|
| COPY                 | 1      | yes    |                                     |
| LOAD                 | 2      | yes    | input0 = space ID const             |
| STORE                | 3      | no     | input0 = space ID const             |
| INDIRECT             | 2      | yes    | SSA only                            |
| INT_ADD…INT_SREM     | 2      | yes    | Equal sizes                         |
| INT_NEGATE/2COMP     | 1      | yes    |                                     |
| INT_ZEXT/SEXT        | 1      | yes    | output.size > input0.size           |
| INT_*EQUAL/LESS*     | 2      | yes    | output is b8                        |
| INT_CARRY/SCARRY/SBORROW | 2  | yes    | output is b8                        |
| INT_AND/OR/XOR       | 2      | yes    | Equal sizes                         |
| INT_LEFT/RIGHT/SRIGHT| 2      | yes    | input1 may differ in size           |
| BOOL_NEGATE          | 1      | yes    | All sizes 1                         |
| BOOL_AND/OR/XOR      | 2      | yes    | All sizes 1                         |
| FLOAT_ADD…FLOAT_DIV  | 2      | yes    | Equal IEEE width                    |
| FLOAT_NEG/ABS/SQRT   | 1      | yes    | Equal IEEE width                    |
| FLOAT_CEIL/FLOOR/ROUND/TRUNC | 1 | yes | Equal IEEE width                    |
| FLOAT_NAN            | 1      | yes    | output is b8                        |
| FLOAT_INT2FLOAT      | 1      | yes    | int → float                         |
| FLOAT_FLOAT2FLOAT    | 1      | yes    | float → float, sizes may differ     |
| FLOAT_FLOAT2INT      | 1      | yes    | float → int                         |
| FLOAT_*EQUAL/LESS*   | 2      | yes    | output is b8, ordered               |
| BRANCH               | 1      | no     | input0 is target                    |
| CBRANCH              | 2      | no     | input1 is condition                 |
| BRANCHIND            | 1      | no     |                                     |
| CALL                 | 1+N    | (yes)  | output post-analysis                |
| CALLIND              | 1+N    | (yes)  | output post-analysis                |
| RETURN               | 1+[N]  | no     | input1+ post-analysis               |
| PIECE                | 2      | yes    | sizes add to output.size            |
| SUBPIECE             | 2      | yes    | input1 is Const                     |
| POPCOUNT/LZCOUNT     | 1      | yes    |                                     |
| INSERT               | 4      | yes    | last 2 are Const                    |
| ZPULL/SPULL          | 3      | yes    | last 2 are Const                    |
| PTRADD               | 3      | yes    | input2 is Const                     |
| PTRSUB               | 2      | yes    |                                     |
| CAST                 | 1      | yes    |                                     |
| MULTIEQUAL           | N      | yes    | one per predecessor                 |
| CALLOTHER            | 1+N    | opt    | input0 is intrinsic ID              |
| CPOOLREF             | 2+N    | yes    |                                     |
| NEW                  | 1+[1]  | yes    |                                     |
| SEGMENTOP            | 3      | yes    |                                     |
| UNIMPLEMENTED        | 0      | (opt)  | sentinel                            |

---

## 5. Worked Example

A complete C function lifted to LIR canonical text form. Source:

```c
int max3(int a, int b, int c) {
    int m = a;
    if (b > m) m = b;
    if (c > m) m = c;
    return m;
}
```

Compiled at `-O0` for x86-64 System V; the lifter produces the
following LIR (registers shown with symbolic names where the arch table
provides them):

```text
func max3 @ 0x401120 {
BB_0 [entry]:
  STORE s, c-4:i64, edi:i32
  STORE s, c-8:i64, esi:i32
  STORE s, c-12:i64, edx:i32
  v1:i32 = LOAD s, c-4:i64
  STORE s, c-16:i64, v1:i32
  v2:i32 = LOAD s, c-8:i64
  v3:i32 = LOAD s, c-16:i64
  v4:b8 = INT_SLESS v3:i32, v2:i32
  CBRANCH @BB_2, v4:b8
BB_1:
  BRANCH @BB_3
BB_2:
  v5:i32 = LOAD s, c-8:i64
  STORE s, c-16:i64, v5:i32
  BRANCH @BB_3
BB_3:
  v6:i32 = LOAD s, c-12:i64
  v7:i32 = LOAD s, c-16:i64
  v8:b8 = INT_SLESS v7:i32, v6:i32
  CBRANCH @BB_5, v8:b8
BB_4:
  BRANCH @BB_6
BB_5:
  v9:i32 = LOAD s, c-12:i64
  STORE s, c-16:i64, v9:i32
  BRANCH @BB_6
BB_6 [exit]:
  v10:i32 = LOAD s, c-16:i64
  RETURN v_lr:i64, v10:i32
}
```

After SSA (Task 13), the redundant LOAD/STORE traffic on `s-16`
becomes MULTIEQUAL phi-functions:

```text
func max3 @ 0x401120 {
BB_0 [entry]:
  v1:i32 = COPY edi:i32
  v2:i32 = COPY esi:i32
  v3:i32 = COPY edx:i32
  v4:b8 = INT_SLESS v1:i32, v2:i32
  CBRANCH @BB_2, v4:b8
BB_1:
  BRANCH @BB_3
BB_2:
  BRANCH @BB_3
BB_3:
  v5:i32 = MULTIEQUAL v1:i32, v2:i32
  v6:b8 = INT_SLESS v5:i32, v3:i32
  CBRANCH @BB_5, v6:b8
BB_4:
  BRANCH @BB_6
BB_5:
  BRANCH @BB_6
BB_6 [exit]:
  v7:i32 = MULTIEQUAL v5:i32, v3:i32
  RETURN v_lr:i64, v7:i32
}
```

Both forms are valid canonical text; the second is what callers of
`unlace decompile --emit ir` will see by default (post-passes).

---

## 6. Versioning & Stability

This document is **v1.0**, frozen on the date of this commit.

### Stability guarantees

- **Opcode names** in §3 are stable. Renaming requires a major version
  bump.
- **Opcode discriminant order** (§4.4) is stable. The 75 enum variants
  in `IrOp` correspond one-to-one to the 75 named opcodes in §3, in §3
  order, with discriminants `0..=74` matching the table in §4.4.
- **`SpaceId` discriminants** (§1.1) are stable: `Register=0`, `Ram=1`,
  `Const=2`, `Unique=3`, `Stack=4`.
- **`Varnode` field types** (§1.2) are stable: `space: SpaceId, offset:
  u64, size: u8`.
- **Canonical text grammar** (§2) is stable. A v1.0 IR dump must remain
  parseable by all v1.x readers.

### What may change in v1.x

- Adding new annotations to block headers (§2.4) is backward-compatible
  if older parsers are required to ignore unknown annotations.
- Adding new register short names is backward-compatible (the `r<N>`
  fallback always works).
- Adding new opcodes appends to the end of the §3 list and the §4.4
  discriminant table; existing code that matches on the enum
  exhaustively must use `#[non_exhaustive]` to opt in.

### What requires v2.0

- Reordering, renaming, or removing any opcode.
- Changing `Varnode` field types or sizes.
- Reassigning `SpaceId` discriminants.
- Changing the meaning of any operator.

### Source attribution

The opcode set, semantics, and most prose are derived from the Ghidra
P-Code Reference Manual (NSA, public domain). Divergences from upstream
P-code are listed in §1.4. The canonical text form is original to
unlace and is not compatible with Ghidra's `pcode` output format.
