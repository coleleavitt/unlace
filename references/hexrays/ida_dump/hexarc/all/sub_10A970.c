// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x10A970
// Name:           sub_10A970
// Function size:  220 bytes (60 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x10A970 push    r13
//   0x10A972 mov     rcx, rsi
//   0x10A975 mov     rsi, rdi
//   0x10A978 push    r12
//   0x10A97A push    rbp
//   0x10A97B push    rbx
//   0x10A97C sub     rsp, 58h
//   0x10A980 mov     rbp, fs:28h
//   0x10A989 mov     [rsp+78h+var_30], rbp
//   0x10A98E mov     rbp, rdx
//   0x10A991 lea     r12, [rsp+78h+var_68]
//   0x10A996 lea     rdx, [rsp+78h+var_74]
//   0x10A99B mov     [rsp+78h+var_68], 0
//   0x10A9A4 mov     rdi, r12
//   0x10A9A7 mov     [rsp+78h+var_60], 0
//   0x10A9AC call    sub_1D8B90
//   0x10A9B1 mov     ebx, eax
//   0x10A9B3 test    al, al
//   0x10A9B5 jnz     short loc_10A9D8
//   0x10A9B7 mov     rax, [rsp+78h+var_30]
//   0x10A9BC sub     rax, fs:28h
//   0x10A9C5 jnz     short loc_10AA3F
//   0x10A9C7 add     rsp, 58h
//   0x10A9CB mov     eax, ebx
//   0x10A9CD pop     rbx
//   0x10A9CE pop     rbp
//   0x10A9CF pop     r12
//   0x10A9D1 pop     r13
//   0x10A9D3 retn
//   0x10A9D4 align 8
//   0x10A9D8 mov     eax, [rsp+78h+var_74]
//   0x10A9DC lea     r13, [rsp+78h+var_58]
//   0x10A9E1 pxor    xmm0, xmm0
//   0x10A9E5 xor     ecx, ecx
//   0x10A9E7 mov     rdx, r12
//   0x10A9EA mov     rsi, r13
//   0x10A9ED mov     rdi, rbp
//   0x10A9F0 movups  [rsp+78h+var_50], xmm0
//   0x10A9F5 mov     [rsp+78h+var_58], 0
//   0x10A9FD mov     [rsp+78h+var_54], eax
//   0x10AA01 mov     [rsp+78h+var_40], 0
//   0x10AA0A call    sub_1D8DE0
//   0x10AA0F test    al, al
//   0x10AA11 jz      short loc_10AA30
//   0x10AA13 lea     rsi, [rsp+78h+var_70]
//   0x10AA18 mov     rdi, r13
//   0x10AA1B call    sub_30B770
//   0x10AA20 test    al, al
//   0x10AA22 jz      short loc_10AA30
//   0x10AA24 cmp     [rsp+78h+var_70], 0
//   0x10AA2A setz    bl
//   0x10AA2D jmp     short loc_10AA32
//   0x10AA2F align 10h
//   0x10AA30 xor     ebx, ebx
//   0x10AA32 mov     rdi, r13
//   0x10AA35 call    sub_30B800
//   0x10AA3A jmp     loc_10A9B7
//   0x10AA3F call    ___stack_chk_fail
//   0x10AA44 mov     rbx, rax
//   0x10AA47 jmp     loc_34BEA
// ============================================================

void sub_10A970(/* signature unknown */)
{
    // see disassembly above
}

