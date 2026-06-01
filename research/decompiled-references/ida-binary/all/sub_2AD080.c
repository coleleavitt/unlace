// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x2AD080
// Name:           gruser_model_data_t__::vfunc_5
// Function size:  165 bytes (47 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x2AD080 push    r14; int
//   0x2AD082 mov     r14, rdi
//   0x2AD085 push    r13; int
//   0x2AD087 mov     r13d, r8d
//   0x2AD08A push    r12; int
//   0x2AD08C push    rbp; int
//   0x2AD08D mov     rbp, rsi
//   0x2AD090 push    rbx; int
//   0x2AD091 sub     rsp, 10h
//   0x2AD095 mov     r12, fs:28h
//   0x2AD09E mov     [rsp+38h+var_30], r12; QT::QFont *
//   0x2AD0A3 mov     r12, r9
//   0x2AD0A6 call    grida_model_data_t____vfunc_5
//   0x2AD0AB mov     ebx, eax
//   0x2AD0AD test    al, al
//   0x2AD0AF jnz     short loc_2AD0D0
//   0x2AD0B1 mov     rax, [rsp+38h+var_30]
//   0x2AD0B6 sub     rax, fs:28h
//   0x2AD0BF jnz     short loc_2AD120
//   0x2AD0C1 add     rsp, 10h
//   0x2AD0C5 mov     eax, ebx
//   0x2AD0C7 pop     rbx
//   0x2AD0C8 pop     rbp
//   0x2AD0C9 pop     r12
//   0x2AD0CB pop     r13
//   0x2AD0CD pop     r14
//   0x2AD0CF retn
//   0x2AD0D0 mov     rdx, [r14+8]
//   0x2AD0D4 xor     eax, eax
//   0x2AD0D6 lea     r9, [rsp+38h+var_34]
//   0x2AD0DB mov     r8, rsp
//   0x2AD0DE mov     ecx, r13d
//   0x2AD0E1 mov     esi, 0Eh
//   0x2AD0E6 mov     rdi, r12
//   0x2AD0E9 mov     [rsp+38h+var_38], 0
//   0x2AD0F0 mov     [rsp+38h+var_34], 0
//   0x2AD0F8 call    sub_2BB510
//   0x2AD0FD test    eax, eax
//   0x2AD0FF jz      short loc_2AD0B1
//   0x2AD101 movd    xmm0, [rsp+38h+var_38]
//   0x2AD106 movd    xmm2, [rsp+38h+var_34]
//   0x2AD10C movq    xmm1, qword ptr [rbp+0]
//   0x2AD111 punpckldq xmm0, xmm2
//   0x2AD115 paddd   xmm0, xmm1
//   0x2AD119 movq    qword ptr [rbp+8], xmm0
//   0x2AD11E jmp     short loc_2AD0B1
//   0x2AD120 call    ___stack_chk_fail
// ============================================================

void gruser_model_data_t__::vfunc_5(/* signature unknown */)
{
    // see disassembly above
}

