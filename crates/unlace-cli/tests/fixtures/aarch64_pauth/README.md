# AArch64 pointer-authentication fixture

`pauth.elf` holds `probe` (`probe.s`): two words per FEAT_PAuth and FEAT_PAuth_LR
instruction record in LLVM 22's AArch64 TableGen (predicates HasPAuth, HasPAuthLR,
HasV8_3a: `pac*`, `aut*`, `xpac*`, `bra*`/`blra*`, `reta*`, `ereta*`,
`ldraa`/`ldrab`, `pacga`, and the Armv9.5 `*sppc`, `*171615`, `retaasppc`/`retabsppc`
forms), plus `pacm` (`hint #39`) and the odd hint `hint #35` next to `bti c`. One word
is the record with every field zero, the other has random fields. `probe.txt` is
unlace's listing. It matches `llvm-mc --disassemble -mattr=+all` (with or without
aliases) word for word, except that unlace prints immediates in hex and `[x0]!` for
`[x0, #0]!`. Built with LLVM 22:

```sh
llvm-mc -triple=aarch64 -mattr=+all -filetype=obj probe.s -o probe.o
ld.lld -shared --build-id=none -o pauth.elf probe.o
```
