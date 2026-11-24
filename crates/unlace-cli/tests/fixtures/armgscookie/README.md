# armgscookie fixture

`gs_thumb.exe` is a Windows on ARM (Thumb-2) PE with no symbols. Its `caller` (0x401014) is
bracketed by the MSVC `/GS` helpers `__security_push_cookie` (0x401028) and
`__security_pop_cookie` (0x401040), written out in `gs.s` with the CRT's instruction streams,
and reads its first stack argument (`ldr r0,[sp,#12]` after the push and `push {r4,lr}`).
Built with clang version 22.1.8 (https://github.com/llvm/llvm-project.git ca7933e47d3a3451d81e72ac174dcb5aa28b59d1) and lld-link:

```sh
clang --target=thumbv7-windows-msvc -c gs.s -o gs.obj
lld-link /nologo /entry:start /subsystem:console /nodefaultlib /base:0x400000 /out:gs_thumb.exe gs.obj
```

SHA-256 `bcd9ec58203d77b9326f5e12976468a1e3ca8e8e72e3cc1dc094e1129c0d5d2a`.
