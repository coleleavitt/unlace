// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x344FE0
// Name:           sub_344FE0
// Function size:  127 bytes (31 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x344FE0 push    r14; int
//   0x344FE2 push    rbx; int
//   0x344FE3 sub     rsp, 18h
//   0x344FE7 mov     rdi, fs:28h
//   0x344FF0 mov     qword ptr [rsp+28h+var_20], rdi; int
//   0x344FF5 lea     rdi, aNavigationHist; "Navigation history"
//   0x344FFC call    sub_4A0300
//   0x345001 test    rax, rax
//   0x345004 jz      short loc_345028
//   0x345006 mov     rax, qword ptr [rsp+28h+var_20]
//   0x34500B sub     rax, fs:28h
//   0x345014 jnz     short loc_345052
//   0x345016 add     rsp, 18h
//   0x34501A mov     eax, 1
//   0x34501F pop     rbx
//   0x345020 pop     r14
//   0x345022 retn
//   0x345023 align 8
//   0x345028 mov     edi, 100h
//   0x34502D call    _qalloc_or_throw
//   0x345032 mov     rdi, rax
//   0x345035 mov     rbx, rax
//   0x345038 call    sub_344E70
//   0x34503D mov     rsi, rsp
//   0x345040 mov     rdi, rbx
//   0x345043 mov     [rsp+28h+var_28], 0
//   0x34504B call    sub_4AED50
//   0x345050 jmp     short loc_345006
//   0x345052 call    ___stack_chk_fail
//   0x345057 mov     r14, rax
//   0x34505A jmp     loc_13B673
// ============================================================

void sub_344FE0(/* signature unknown */)
{
    // see disassembly above
}

