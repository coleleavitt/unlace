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

The Fast Library Identification and Recognition Technology (FLIRT) database
matches known library function byte patterns against the target binary. Unlace
ships with signature databases for common C runtimes (glibc, musl, MSVC CRT,
newlib) and lets you supply custom `.sig` files for proprietary SDKs. Applying
signatures transforms meaningless `sub_XXXXX` names into recognizable library
calls:

```bash
$ unlace decompile ./hello-stripped --flirt-db /usr/share/unlace/sigs/glibc-2.31-amd64.sig
```

After FLIRT matching, `sub_401050` becomes `printf`, `sub_401030` becomes
`puts`, and the decompilation reads almost identically to the non-stripped
version. You can generate custom FLIRT databases from any static library using
`unlace flirt-gen ./libfoo.a -o libfoo.sig`.

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
