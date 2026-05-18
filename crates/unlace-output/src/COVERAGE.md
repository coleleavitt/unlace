# IDA `cot_*` opcode coverage

This file is a one-line-per-opcode audit of unlace's coverage of IDA's
Hex-Rays expression dispatcher (`sub_2662B0`, opcodes 0–69). The
authoritative narrative copy lives in the module header of
`c_printer.rs`; this file is the at-a-glance grep target for future
maintainers.

Statuses:

* **✅** — fully emitted by unlace today.
* **⚠️ deferred** — emit helper exists; no IR producer yet (a future
  HIR/IR opcode will wire it up).
* **❌ out-of-scope** — not produced by any unlace lifter and unlikely
  to be (e.g. GCC-only computed-goto extensions).

| cot | name        | C form               | unlace IrOp / emit fn                         | Status        |
|-----|-------------|----------------------|-----------------------------------------------|---------------|
| 0   | empty       | (sentinel)           | n/a                                            | n/a           |
| 1   | comma       | `a, b`               | n/a — lifter inlines comma                     | implicit      |
| 2   | asg         | `a = b`              | `emit_statement` (assignment path)             | ✅            |
| 3   | asgbor      | `a \|= b`            | `try_emit_compound_assign` (`IntOr`)           | ✅            |
| 4   | asgxor      | `a ^= b`             | `try_emit_compound_assign` (`IntXor`)          | ✅            |
| 5   | asgband     | `a &= b`             | `try_emit_compound_assign` (`IntAnd`)          | ✅            |
| 6   | asgadd      | `a += b`             | `try_emit_compound_assign` (`IntAdd`)          | ✅            |
| 7   | asgsub      | `a -= b`             | `try_emit_compound_assign` (`IntSub`)          | ✅            |
| 8   | asgmul      | `a *= b`             | `try_emit_compound_assign` (`IntMult`)         | ✅            |
| 9   | asgsshr     | `a >>= b` (signed)   | `try_emit_compound_assign` (`IntSright`)       | ✅            |
| 10  | asgushr     | `a >>= b` (unsigned) | `try_emit_compound_assign` (`IntRight`)        | ✅            |
| 11  | asgshl      | `a <<= b`            | `try_emit_compound_assign` (`IntLeft`)         | ✅            |
| 12  | asgsdiv     | `a /= b` (signed)    | `try_emit_compound_assign` (`IntSdiv`)         | ✅            |
| 13  | asgudiv     | `a /= b` (unsigned)  | `try_emit_compound_assign` (`IntDiv`)          | ✅            |
| 14  | asgsmod     | `a %= b` (signed)    | `try_emit_compound_assign` (`IntSrem`)         | ✅            |
| 15  | asgumod     | `a %= b` (unsigned)  | `try_emit_compound_assign` (`IntRem`)          | ✅            |
| 16  | tern        | `c ? a : b`          | `HirNode::Ternary` + branch-collapse pass      | ✅            |
| 17  | lor         | `\|\|`               | `IrOp::BoolOr` → `emit_binop`                  | ✅            |
| 18  | land        | `&&`                 | `IrOp::BoolAnd` → `emit_binop`                 | ✅            |
| 19  | bor         | `\|`                 | `IrOp::IntOr` → `emit_binop`                   | ✅            |
| 20  | xor         | `^`                  | `IrOp::IntXor` → `emit_binop`                  | ✅            |
| 21  | band        | `&`                  | `IrOp::IntAnd` → `emit_binop`                  | ✅            |
| 22  | eq          | `==`                 | `IntEqual`/`FloatEqual`                        | ✅            |
| 23  | ne          | `!=`                 | `IntNotequal`/`FloatNotequal`                  | ✅            |
| 24  | sge         | `>=` (signed)        | flipped `IntSlessequal`                        | ✅            |
| 25  | uge         | `>=` (unsigned)      | flipped `IntLessequal`                         | ✅            |
| 26  | sle         | `<=` (signed)        | `IntSlessequal`/`FloatLessequal`               | ✅            |
| 27  | ule         | `<=` (unsigned)      | `IntLessequal`                                 | ✅            |
| 28  | sgt         | `>` (signed)         | flipped `IntSless`                             | ✅            |
| 29  | ugt         | `>` (unsigned)       | flipped `IntLess`                              | ✅            |
| 30  | slt         | `<` (signed)         | `IntSless`/`FloatLess`                         | ✅            |
| 31  | ult         | `<` (unsigned)       | `IntLess`                                      | ✅            |
| 32  | sshr        | `>>` (signed)        | `IntSright`                                    | ✅            |
| 33  | ushr        | `>>` (unsigned)      | `IntRight`                                     | ✅            |
| 34  | shl         | `<<`                 | `IntLeft`                                      | ✅            |
| 35  | add         | `+`                  | `IntAdd`/`Ptradd`/`FloatAdd`                   | ✅            |
| 36  | sub         | `-`                  | `IntSub`/`Ptrsub`/`FloatSub`                   | ✅            |
| 37  | mul         | `*`                  | `IntMult`/`FloatMult`                          | ✅            |
| 38  | sdiv        | `/` (signed)         | `IntSdiv`/`FloatDiv`                           | ✅            |
| 39  | udiv        | `/` (unsigned)       | `IntDiv`                                       | ✅            |
| 40  | smod        | `%` (signed)         | `IntSrem`                                      | ✅            |
| 41  | umod        | `%` (unsigned)       | `IntRem`                                       | ✅            |
| 42  | fadd        | float `+`            | `FloatAdd`                                     | ✅            |
| 43  | fsub        | float `-`            | `FloatSub`                                     | ✅            |
| 44  | fmul        | float `*`            | `FloatMult`                                    | ✅            |
| 45  | fdiv        | float `/`            | `FloatDiv`                                     | ✅            |
| 46  | fneg        | unary float `-`      | `FloatNeg`                                     | ✅            |
| 47  | neg         | unary `-`            | `Int2comp`                                     | ✅            |
| 48  | cast        | `(T)x`               | `IrOp::Cast` + `IntZext`/`IntSext`             | ✅            |
| 49  | lnot        | `!x`                 | `BoolNegate`                                   | ✅            |
| 50  | bnot        | `~x`                 | `IntNegate`                                    | ✅            |
| 51  | ref         | `&x`                 | stack-var address-taken path                   | ✅            |
| 52  | ptr         | `*p`                 | `Load` (with field/array recovery)             | ✅            |
| 53  | postinc     | `x++`                | `try_emit_postfix_inc_dec`                     | ✅            |
| 54  | postdec     | `x--`                | `try_emit_postfix_inc_dec`                     | ✅            |
| 55  | preinc      | `++x`                | folded into postinc form                       | ⚠️ deferred   |
| 56  | predec      | `--x`                | folded into postdec form                       | ⚠️ deferred   |
| 57  | idx         | `arr[i]`             | `try_array_subscript`                          | ✅            |
| 58  | memref      | `s.m`                | `try_struct_field_access`                      | ✅            |
| 59  | memptr      | `p->m`               | `try_resolve_field_from_addr`                  | ✅            |
| 60  | call        | `f(...)`             | `IrOp::Call` / `IrOp::Callind`                 | ✅            |
| 61  | var         | local name           | `emit_operand_with_prec`                       | ✅            |
| 62  | obj         | global object        | `try_global_var_name` / symbol-table fallback  | ✅            |
| 63  | num         | integer literal      | `format_constant_ctx`                          | ✅            |
| 64  | str         | `"..."`              | `emit_operand_with_prec` + `escape_c_string`   | ✅            |
| 65  | fnum        | float literal        | `format_constant_ctx` + `format_float_literal` | ✅ complete   |
| 66  | helper      | `__builtin_*` call   | `callother_intrinsic_name` table               | ✅            |
| 67  | sizeof      | `sizeof(...)`        | `emit_sizeof_type` / `emit_sizeof_expr`        | ⚠️ deferred   |
| 68  | alignof     | `_Alignof(T)`        | `emit_alignof_type`                            | ⚠️ deferred   |
| 69  | label       | `&&label` (GCC ext)  | not emitted (no computed-goto in IR)           | ❌ out-of-scope|
| 70  | type        | bare type-as-expr    | only meaningful inside `sizeof`/`offsetof`     | ❌ out-of-scope|

(Note: IDA renumbers `cot_alignof` / `cot_label` / `cot_type` as 67 /
68 / 69 in some builds; the table follows the most recent dump used to
audit unlace.)

## String escape parity (`cot_str` / 64)

`escape_c_string` mirrors IDA's `str2user` (called from `sub_265AA0`):

* Single-character escapes: `\\ \" \n \r \t \v \f \a \b \0`.
* `\xHH` for any other non-printable byte.
* Multi-byte UTF-8 codepoints are byte-decomposed into `\xHH` sequences
  so the output is bytewise unambiguous.
* Single quotes (`'`) inside a `"..."` literal are not escaped.

Tests: `test_escape_c_string_standard_singles`,
`test_escape_c_string_hex_fallback_for_other_controls`,
`test_escape_c_string_printable_passthrough`,
`test_escape_c_string_single_quote_is_bare`,
`test_escape_c_string_multibyte_utf8_byte_decomposed`.

## Batch 19: CExpr printer-AST coverage table

The high-level [`CExpr`] AST is the new substrate for printer rewrites
that need precedence/side-effect awareness (no string surgery). The
authoritative variant table is generated from
[`cexpr_coverage_rows`](src/expr_ast.rs); the rendered Markdown is
kept here for at-a-glance review.

| variant | arity | precedence | may side-effect | notes |
|---------|------:|----------:|:---------------:|-------|
| `Lit` | 0 | 0 | no | Opaque pre-rendered leaf (identifier, integer literal, etc.) |
| `Cast` | 1 | 2 | no | `(T)(inner)`; always parens the inner. |
| `Member` | 1 | 1 | no | `obj->field` / `obj.field`; postfix. |
| `Index` | 2 | 1 | no | `arr[idx]`; postfix. |
| `Deref` | 1 | 2 | no | `*p`; unary prefix. |
| `AddrOf` | 1 | 2 | no | `&x`; unary prefix. |
| `Binary` | 2 | 14 | no | Precedence recovered from token via `binary_precedence`. |
| `Call` | * | 1 | yes | `callee(args...)`; postfix and assumed to carry side effects. |
| `Coerce` | 1 | 2 | no | IDA narrowing cast: `(_DWORD)x`, `(_QWORD)x`, etc. |
| `Macro` | * | 1 | no | IDA pseudo-macros (`LOBYTE`, `HIDWORD`, …). |
| `Ternary` | 3 | 13 | no | `c ? a : b`; right-associative. |
| `Sizeof` | 1 | 1 | no | `sizeof(inner)`. |
| `PreInc` | 1 | 2 | yes | `++x`; mutates operand. |
| `PreDec` | 1 | 2 | yes | `--x`; mutates operand. |
| `PostInc` | 1 | 1 | yes | `x++`. |
| `PostDec` | 1 | 1 | yes | `x--`. |
| `Comma` | 2 | 15 | yes | `a, b`; loosest binding. |
| `Assign` | 2 | 14 | yes | `lhs = rhs`; right-associative. |
| `CompoundAssign` | 2 | 14 | yes | `lhs <op>= rhs`. |
| `Neg` | 1 | 2 | no | `-x`. |
| `LogicalNot` | 1 | 2 | no | `!x`. |
| `BitwiseNot` | 1 | 2 | no | `~x`. |
| `Helper` | * | 1 | yes | IDA helper call (no prototype). |
| `FuncId` | 0 | 1 | no | `name@0xADDR`. |
| `StmtExpr` | 0 | 1 | yes | GCC statement expression. |
| `Str` | 0 | 1 | no | C string literal `"..."`. |
| `Obj` | 0 | 1 | no | Named global at known address. |
| `Empty` | 0 | 1 | no | `cot_empty` sentinel; renders empty. |
| `Label` | 0 | 1 | no | `cot_label` → `LABEL_<n>`. |
| `Var` | 0 | 1 | no | `cot_var` local-var reference. |
| `Num` | 0 | 1 | no | `cot_num` typed integer literal. |
| `Fnum` | 0 | 1 | no | `cot_fnum` float literal (IEEE bits). |
| `TypeRef` | 0 | 1 | no | `cot_type` bare type-name reference. |
| `FloatNeg` | 1 | 2 | no | `cot_fneg`. |
| `FloatBinary` | 2 | 4 | no | `cot_fadd`/`fsub`/`fmul`/`fdiv` — token shape matches `Binary` but distinct for semantics. |
| `PtrDiff` | 2 | 4 | no | `cot_psub` pointer subtraction; renders with `/* ptrdiff */`. |

The unit test `cexpr_coverage_lists_every_variant` pins this table
against the live enum, so adding a new variant without a row fails at
test time.

After completion plan §4, CExpr covers **36 of 69** IDA `cot_*`
opcodes with explicit variants; the rest map cleanly through
`Binary { op }` token-based dispatch (the entire binary-arithmetic /
comparison / shift / logical family, plus the integer compound-assign
forms which already share the `CompoundAssign` variant).
