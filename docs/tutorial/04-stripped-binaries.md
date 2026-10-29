# Chapter 4: Stripped Binaries

## The Challenge of Missing Symbols

Real-world targets — malware, firmware, proprietary applications — are almost
always stripped. Without symbols, unlace must discover function boundaries
through heuristic analysis (prologue pattern matching, call-target enumeration,
and exception-table parsing), infer types purely from data flow, and generate
synthetic names for every function and global. Strip our hello binary and re-run
the decompiler to see the difference:

```bash
$ strip --strip-all -o hello-stripped hello
$ unlace decompile ./hello-stripped --function 0x401136
```

```c
// Function: sub_401136
// Address: 0x401136..0x40117a (68 bytes)
// Confidence: 0.87
// Note: no symbols, names are synthetic
int32_t sub_401136(int32_t arg0, uint8_t **arg1) {
    if (arg0 > 1) {
        printf("Hello, %s!\n", *(arg1 + 8));
    } else {
        puts("Hello, world!");
    }
    return 0;
}
```

Notice that the function and argument names are gone, replaced by positional
names (`arg0`, `arg1`) and an address-based function name. But the structure,
types, and string references are still recovered correctly — the decompilation
quality degrades gracefully rather than catastrophically.

## Applying FLIRT Signatures

The Fast Library Identification and Recognition Technology (FLIRT) matches
known library function byte patterns against the target binary. Unlace
ships a small pattern database for common C runtimes and reads IDA's `.sig`
files for anything else (see [FLIRT signatures](../flirt.md)). Applying
signatures turns `sub_XXXXX` names of statically linked library code into
the library names:

```bash
$ unlace decompile ./target.exe --sig vc64ucrt.sig --sig vc64rtf.sig
$ unlace decompile ./target.exe --sig-dir ./sig/pc
```

Matched functions are named at their definition and in every call site;
their bodies are still decompiled. Without `--sig`, a small built-in table
names the C runtime startup code (`_start`, `deregister_tm_clones`,
`register_tm_clones`, `__do_global_dtors_aux`, `frame_dummy`).
`unlace siggen ./libfoo.a -o libfoo.sig` builds a `.sig` file from a
static library; ready-made files for x86-64
Linux runtimes are in `crates/unlace-flirt/sig/linux-x86_64/`.

## Heuristic Function Discovery

When the binary lacks both symbols and a complete `.eh_frame` section (common in
hand-written assembly or obfuscated code), unlace falls back to recursive
descent disassembly augmented by prologue scanning. The algorithm first follows
all direct call targets from known entry points, then sweeps uncharted regions
looking for canonical function prologues (`push rbp; mov rbp, rsp` on x86-64,
`stp x29, x30, [sp, #-N]!` on AArch64). Functions discovered heuristically are
flagged with a lower confidence score and a `// heuristic entry` annotation so
you know to double-check their boundaries.

→ Next: [Type Recovery](./05-type-recovery.md)
