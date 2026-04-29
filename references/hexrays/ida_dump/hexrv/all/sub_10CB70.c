// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x10CB70
// Name:           sub_10CB70
// Function size:  220 bytes (60 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x10CB70 push    r13
//   0x10CB72 mov     rcx, rsi
//   0x10CB75 mov     rsi, rdi
//   0x10CB78 push    r12
//   0x10CB7A push    rbp
//   0x10CB7B push    rbx
//   0x10CB7C sub     rsp, 58h
//   0x10CB80 mov     rbp, fs:28h
//   0x10CB89 mov     [rsp+78h+var_30], rbp
//   0x10CB8E mov     rbp, rdx
//   0x10CB91 lea     r12, [rsp+78h+var_68]
//   0x10CB96 lea     rdx, [rsp+78h+var_74]
//   0x10CB9B mov     [rsp+78h+var_68], 0
//   0x10CBA4 mov     rdi, r12
//   0x10CBA7 mov     [rsp+78h+var_60], 0
//   0x10CBAC call    sub_1DB310
//   0x10CBB1 mov     ebx, eax
//   0x10CBB3 test    al, al
//   0x10CBB5 jnz     short loc_10CBD8
//   0x10CBB7 mov     rax, [rsp+78h+var_30]
//   0x10CBBC sub     rax, fs:28h
//   0x10CBC5 jnz     short loc_10CC3F
//   0x10CBC7 add     rsp, 58h
//   0x10CBCB mov     eax, ebx
//   0x10CBCD pop     rbx
//   0x10CBCE pop     rbp
//   0x10CBCF pop     r12
//   0x10CBD1 pop     r13
//   0x10CBD3 retn
//   0x10CBD4 align 8
//   0x10CBD8 mov     eax, [rsp+78h+var_74]
//   0x10CBDC lea     r13, [rsp+78h+var_58]
//   0x10CBE1 pxor    xmm0, xmm0
//   0x10CBE5 xor     ecx, ecx
//   0x10CBE7 mov     rdx, r12
//   0x10CBEA mov     rsi, r13
//   0x10CBED mov     rdi, rbp
//   0x10CBF0 movups  [rsp+78h+var_50], xmm0
//   0x10CBF5 mov     [rsp+78h+var_58], 0
//   0x10CBFD mov     [rsp+78h+var_54], eax
//   0x10CC01 mov     [rsp+78h+var_40], 0
//   0x10CC0A call    sub_1DB560
//   0x10CC0F test    al, al
//   0x10CC11 jz      short loc_10CC30
//   0x10CC13 lea     rsi, [rsp+78h+var_70]
//   0x10CC18 mov     rdi, r13
//   0x10CC1B call    sub_30D9F0
//   0x10CC20 test    al, al
//   0x10CC22 jz      short loc_10CC30
//   0x10CC24 cmp     [rsp+78h+var_70], 0
//   0x10CC2A setz    bl
//   0x10CC2D jmp     short loc_10CC32
//   0x10CC2F align 10h
//   0x10CC30 xor     ebx, ebx
//   0x10CC32 mov     rdi, r13
//   0x10CC35 call    sub_30DA80
//   0x10CC3A jmp     loc_10CBB7
//   0x10CC3F call    ___stack_chk_fail
//   0x10CC44 mov     rbx, rax
//   0x10CC47 jmp     loc_35BEA
// ============================================================

void sub_10CB70(/* signature unknown */)
{
    // see disassembly above
}

