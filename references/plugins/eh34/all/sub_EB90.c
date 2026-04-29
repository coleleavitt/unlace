// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0xEB90
// Name:           sub_EB90
// Function size:  182 bytes (46 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0xEB90 push    r12
//   0xEB92 pxor    xmm0, xmm0
//   0xEB96 push    rbp
//   0xEB97 push    rbx
//   0xEB98 mov     rbx, rdi
//   0xEB9B sub     rsp, 50h
//   0xEB9F mov     rbp, fs:28h
//   0xEBA8 mov     [rsp+68h+var_20], rbp
//   0xEBAD mov     rbp, rsi
//   0xEBB0 lea     rdi, [rsp+68h+var_48]
//   0xEBB5 mov     rcx, rsp
//   0xEBB8 movups  [rsp+68h+var_60], xmm0
//   0xEBBD mov     [rsp+68h+var_68], 0
//   0xEBC5 lea     rdx, [rbp+1E0h]
//   0xEBCC mov     rsi, rbp
//   0xEBCF call    sub_63700
//   0xEBD4 cmp     [rsp+68h+var_30], 0
//   0xEBD9 jz      short loc_EC28
//   0xEBDB mov     rax, [rsp+68h+var_48]
//   0xEBE0 movdqu  xmm0, [rsp+68h+var_40]
//   0xEBE6 mov     byte ptr [rbx+18h], 1
//   0xEBEA mov     [rbx], rax
//   0xEBED movups  xmmword ptr [rbx+8], xmm0
//   0xEBF1 mov     rdi, [rsp+68h+var_68]
//   0xEBF5 test    rdi, rdi
//   0xEBF8 jz      short loc_EC08
//   0xEBFA mov     qword ptr [rsp+68h+var_60], 0
//   0xEC03 call    _qfree
//   0xEC08 mov     rax, [rsp+68h+var_20]
//   0xEC0D sub     rax, fs:28h
//   0xEC16 jnz     short loc_EC39
//   0xEC18 add     rsp, 50h
//   0xEC1C mov     rax, rbx
//   0xEC1F pop     rbx
//   0xEC20 pop     rbp
//   0xEC21 pop     r12
//   0xEC23 retn
//   0xEC24 align 8
//   0xEC28 mov     rsi, rsp
//   0xEC2B mov     rdi, rbp
//   0xEC2E call    sub_62F20
//   0xEC33 mov     byte ptr [rbx+18h], 0
//   0xEC37 jmp     short loc_EBF1
//   0xEC39 call    ___stack_chk_fail
//   0xEC3E mov     rbx, rax
//   0xEC41 jmp     loc_6814
// ============================================================

void sub_EB90(/* signature unknown */)
{
    // see disassembly above
}

