# Chapter 3: Understanding the Output

## C Pseudocode Conventions

unlace produces C-like pseudocode with several conventions:

### Variable Naming

| Prefix | Meaning |
|--------|---------|
| `v0`, `v1`, ... | Unnamed local variables |
| `arg0`, `arg1`, ... | Function parameters (when names unavailable) |
| `i`, `j`, `k` | Loop induction variables |
| `result` | Return value accumulator |

When debug info (DWARF/PDB) is available, original variable names are
preserved.

### Type Annotations

```c
// Recovered types shown in declarations
int64_t v0;           // 8-byte integer (from register width)
float *v1;           // Pointer to float (from usage pattern)
struct_t *v2;        // Struct pointer (from field access pattern)
```

### Special Comments

```c
/* WARNING: timeout - analysis incomplete */
/* NOTE: possible tail call at 0x4012a0 */
/* FLIRT: matches libc6/2.31/strlen */
```

### Control Flow

```c
// Structured loops
while (condition) { ... }
do { ... } while (condition);
for (i = 0; i < n; i++) { ... }

// Goto (when structuring fails)
label_0x4010f0:
    goto label_0x4010f0;
```

## Reading the IR

Use `--emit ir` to see the intermediate representation:

```
BLOCK 0 (entry):
  v0:i64 = COPY RSP
  v1:i64 = INT_SUB v0, 0x20:i64
  STORE [v1 + 0x8], RDI
  CBRANCH v2, @block_2, @block_3
```

Each line shows: `output:type = OPCODE inputs`

## Reading the CFG

Use `--emit dot` and render with Graphviz:

```bash
$ unlace decompile ./binary -f main --emit dot | dot -Tsvg > cfg.svg
```

Nodes are basic blocks; edges show control flow. Back-edges (loops) are
drawn with dashed lines.

## Next Steps

→ [Chapter 4: Working with Architectures](./04-architectures.md)
