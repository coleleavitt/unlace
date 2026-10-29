// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x345060
// Name:           sub_345060
// Function size:  127 bytes (31 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x345060 push    r14; int
//   0x345062 push    rbx; int
//   0x345063 sub     rsp, 18h
//   0x345067 mov     rdi, fs:28h
//   0x345070 mov     qword ptr [rsp+28h+var_20], rdi; int
//   0x345075 lea     rdi, aNavigationHist; "Navigation history"
//   0x34507C call    sub_4A0300
//   0x345081 test    rax, rax
//   0x345084 jz      short loc_3450A8
//   0x345086 mov     rax, qword ptr [rsp+28h+var_20]
//   0x34508B sub     rax, fs:28h
//   0x345094 jnz     short loc_3450D2
//   0x345096 add     rsp, 18h
//   0x34509A mov     eax, 1
//   0x34509F pop     rbx
//   0x3450A0 pop     r14
//   0x3450A2 retn
//   0x3450A3 align 8
//   0x3450A8 mov     edi, 100h
//   0x3450AD call    _qalloc_or_throw
//   0x3450B2 mov     rdi, rax
//   0x3450B5 mov     rbx, rax
//   0x3450B8 call    sub_344E70
//   0x3450BD mov     rsi, rsp
//   0x3450C0 mov     rdi, rbx
//   0x3450C3 mov     [rsp+28h+var_28], 0
//   0x3450CB call    sub_4AED50
//   0x3450D0 jmp     short loc_345086
//   0x3450D2 call    ___stack_chk_fail
//   0x3450D7 mov     r14, rax
//   0x3450DA jmp     loc_13B698
// ============================================================

void sub_345060(/* signature unknown */)
{
    // see disassembly above
}

