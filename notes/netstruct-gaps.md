# Packet-building C on a stripped static x86-64 image: what is left

External feedback on a stripped static Linux x86-64 IRC client named four
symptoms. `tests/stages/fixtures/netstruct/netstruct.c` reproduces them
(gcc 15.3.0, glibc 2.43; `build.sh`). Two are fixed by the `indexstride`
and `sockfamily` options (`docs/spec/06-variables-and-merge.md`). This note
records the rest, with the evidence from the fixture.

## No libc callee is named in the stripped static image

Every prototype-driven typing needs the callee's name, and
`netstruct-gcc-O2` names none of them:

| callee | address | body |
|---|---|---|
| `sendto` | `0x412f40` | `push 0x2c; call __syscall_cancel` |
| `recv` | `0x412f00` | `xor r8d,r8d; xor r9d,r9d; push 0x2d; call __syscall_cancel` (recvfrom with no address) |
| `connect` | `0x412ed0` | `push 0x2a; call __syscall_cancel` |
| `socket` | `0x412f60` | `mov eax,0x29; syscall` |
| `close` | `0x412030` | `push 0x3; call __syscall_cancel` |
| `strncmp`, `strlen`, `memset` | IRELATIVE slots | printed `ifunc_40c770(...)`, `ifunc_40c370(...)`, `ifunc_40c560(...)` |

- `flirt` with IDA 9.x `sig/pc/glibc_amd64.sig` names none of these: the
  signature set predates the glibc 2.41 wrappers that push the system call
  number and call `__syscall_cancel`.
- `typelib` serves only an image with `.dynstr`
  (`crates/unlace-analysis/src/analyzers/protos/typelib.rs (target)`), so a
  static image gets no library prototypes even for names it does know.
- `libcsigs` types imports only, so an unstripped static image's `send`,
  `connect` and `___snprintf_chk` stay untyped too.

The consequence for main's sender buffer: its only typed access is gcc's
inline `strcpy(dest, "\n")`, one `mov WORD PTR [rsp],0xa`, so it is declared
`unsigned short v4 [516]`. In the dynamic image `__snprintf_chk`'s `char *`
reaches it and it is `char s [1032]` already; no frame-layout rule can tell
the two apart without a name (treating any escaped buffer of unknown element
as bytes would also turn every `int x; f(&x)` into `char x[4]`).

Follow-up: name x86-64 glibc and musl system-call wrappers by their number
(both the `push N; call __syscall_cancel` and the `mov eax,N; syscall` shapes)
from the Linux x86-64 table, as `syscallnames` does for ARM `svc`, and let
`typelib` serve a static glibc or musl image under the names it recognises.

## gcc's inline strncmp

gcc -O2 expands `strncmp(buf, "SH ", 3) == 0` into
`cmp WORD PTR [rsp],0x4853; je; cmp BYTE PTR [rsp+0x2],0x20` and
`strncmp(buf, "PING", 4) == 0` into `cmp DWORD PTR [rsp],0x474e4950`
(`read_command`, `0x402cc4`-`0x402cfd`); no call remains in the binary. With
`indexstride` the compares are spelled against the char buffer:

```c
if ((*(unsigned short *)v2 == 0x4853) && (v2[2] == ' '))
  return 1;
return (uint4)(*(unsigned int *)v2 == 0x474e4950) * 2;
```

Folding that back to `strncmp`/`memcmp` is a printer idiom over a
conjunction of equality tests of consecutive bytes of one char object against
printable constants. It is a judgement call (the source may have been
`memcmp`, or byte tests), so it is the `strcmpfold` option
(`docs/spec/09-emission.md`), which prints

```c
if (strncmp(v2,"SH ",3) == 0)
  return 1;
return (uint4)(strncmp(v2,"PING",4) == 0) * 2;
```

`tests/stages/fixtures/strcmpfold` holds the gcc, clang and AArch64 shapes.
What it leaves: a buffer the frame layout splits into one variable per
compare (nothing indexes it, so `buf[0..1]` and `buf[2]` are separate
locals), ordered results, and compares through a pointer whose reads
recovered a struct type (`a0->field_0x0 == 0x50545448`).

## iphdr / tcphdr

`send_syn` at -O2 zeroes the 40-byte packet with
`pxor xmm0,xmm0; movaps [rsp+0x10],xmm0; movaps [rsp+0x20],xmm0;
mov QWORD PTR [rsp+0x30],0`, then stores the headers in words:
`mov DWORD PTR [rsp+0x10],0x28001045` (version/IHL 0x45, tos 0x10, tot_len
htons(40)), `mov WORD PTR [rsp+0x18],0x640` (ttl 64, protocol 6),
`mov DWORD PTR [rsp+0x30],0xd0160250` (doff 5, SYN, window htons(5840)). The
feedback's `0xa0051045`, `0x640` and `0x787d1850` are the same three words
(tot_len 1440; ttl/protocol; doff 5, PSH|ACK, window 0x7d78).

Three things are missing, in the order they would have to land:

1. The 16-byte vector store makes the first 16 bytes one variable, and every
   narrower store after it re-assigns the whole variable through a CONCAT:

   ```c
   char v5 [16]; // stack - 0x48
   v5 = CONCAT106(v12._0_10_,0x341200000000);
   v5 = CONCAT28(0x640,v5);
   v5 = CONCAT412(a1,v5);
   v5 = CONCAT124(v5,0x28001045);
   ```

   This is the general -O2 shape of "zero a struct, then fill fields", not
   specific to packets, and it would print the same with an `iphdr` type.
   `memsetrecover` collapses fill runs only into a typed char array
   (`RuleMemsetCopy` over `StringSequence`), so it does not fire here.
2. The types. The built-in `linux-x86_64.ktl` defines `iphdr`, `tcphdr`,
   `udphdr` and `icmphdr`, but leaves the bitfield bytes (`ihl:4 version:4`,
   tcphdr's `doff` and flags) as holes, and is served only to dynamic images.
3. The recognition. No prototype says a buffer is a packet (`sendto` takes
   `const void *`). A heuristic option could type a frame object that reaches
   a call, whose first byte is a constant 0x45-0x4f and whose byte 9 is 1, 6
   or 17, as `struct { struct iphdr ip; struct tcphdr|udphdr|icmphdr l4; }`.

At -O0 (`gcc -O0 -static -s netstruct.c`, not committed: no assertion needs
it) the packet is zeroed by a call and filled a byte at a time, so it
splits into one scalar per field (`char v1; char v5; unsigned short v6; ...`,
`v1 = 0x45; v5 = 0x10; v9 = 0x40; v10 = 6;`); once 2 and 3 exist that shape
types directly, while -O2 also needs 1.
