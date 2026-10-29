// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x199380
// Name:           breakpoints_desktop_widget_factory_t__::vfunc_3
// Function size:  86 bytes (17 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x199380 sub     rsp, 28h
//   0x199384 lea     rdi, aBreakpoints+1; "Breakpoints"
//   0x19938B mov     rax, fs:28h
//   0x199394 mov     [rsp+28h+var_10], rax
//   0x199399 xor     eax, eax
//   0x19939B mov     rsi, rsp
//   0x19939E mov     [rsp+28h+var_28], 0FFFFFFFFFFFFFFFFh
//   0x1993A6 mov     [rsp+28h+var_20], 0
//   0x1993AF call    sub_19F9B0
//   0x1993B4 mov     rdi, rax
//   0x1993B7 call    sub_2DBE50
//   0x1993BC mov     rdx, [rsp+28h+var_10]
//   0x1993C1 sub     rdx, fs:28h
//   0x1993CA jnz     short loc_1993D1
//   0x1993CC add     rsp, 28h
//   0x1993D0 retn
//   0x1993D1 call    ___stack_chk_fail
// ============================================================

void breakpoints_desktop_widget_factory_t__::vfunc_3(/* signature unknown */)
{
    // see disassembly above
}

