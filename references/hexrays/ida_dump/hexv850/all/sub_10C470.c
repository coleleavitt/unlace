// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x10C470
// Name:           sub_10C470
// Function size:  220 bytes (60 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x10C470 push    r13
//   0x10C472 mov     rcx, rsi
//   0x10C475 mov     rsi, rdi
//   0x10C478 push    r12
//   0x10C47A push    rbp
//   0x10C47B push    rbx
//   0x10C47C sub     rsp, 58h
//   0x10C480 mov     rbp, fs:28h
//   0x10C489 mov     [rsp+78h+var_30], rbp
//   0x10C48E mov     rbp, rdx
//   0x10C491 lea     r12, [rsp+78h+var_68]
//   0x10C496 lea     rdx, [rsp+78h+var_74]
//   0x10C49B mov     [rsp+78h+var_68], 0
//   0x10C4A4 mov     rdi, r12
//   0x10C4A7 mov     [rsp+78h+var_60], 0
//   0x10C4AC call    sub_1DAB50
//   0x10C4B1 mov     ebx, eax
//   0x10C4B3 test    al, al
//   0x10C4B5 jnz     short loc_10C4D8
//   0x10C4B7 mov     rax, [rsp+78h+var_30]
//   0x10C4BC sub     rax, fs:28h
//   0x10C4C5 jnz     short loc_10C53F
//   0x10C4C7 add     rsp, 58h
//   0x10C4CB mov     eax, ebx
//   0x10C4CD pop     rbx
//   0x10C4CE pop     rbp
//   0x10C4CF pop     r12
//   0x10C4D1 pop     r13
//   0x10C4D3 retn
//   0x10C4D4 align 8
//   0x10C4D8 mov     eax, [rsp+78h+var_74]
//   0x10C4DC lea     r13, [rsp+78h+var_58]
//   0x10C4E1 pxor    xmm0, xmm0
//   0x10C4E5 xor     ecx, ecx
//   0x10C4E7 mov     rdx, r12
//   0x10C4EA mov     rsi, r13
//   0x10C4ED mov     rdi, rbp
//   0x10C4F0 movups  [rsp+78h+var_50], xmm0
//   0x10C4F5 mov     [rsp+78h+var_58], 0
//   0x10C4FD mov     [rsp+78h+var_54], eax
//   0x10C501 mov     [rsp+78h+var_40], 0
//   0x10C50A call    sub_1DADA0
//   0x10C50F test    al, al
//   0x10C511 jz      short loc_10C530
//   0x10C513 lea     rsi, [rsp+78h+var_70]
//   0x10C518 mov     rdi, r13
//   0x10C51B call    sub_30D230
//   0x10C520 test    al, al
//   0x10C522 jz      short loc_10C530
//   0x10C524 cmp     [rsp+78h+var_70], 0
//   0x10C52A setz    bl
//   0x10C52D jmp     short loc_10C532
//   0x10C52F align 10h
//   0x10C530 xor     ebx, ebx
//   0x10C532 mov     rdi, r13
//   0x10C535 call    sub_30D2C0
//   0x10C53A jmp     loc_10C4B7
//   0x10C53F call    ___stack_chk_fail
//   0x10C544 mov     rbx, rax
//   0x10C547 jmp     loc_35BEA
// ============================================================

void sub_10C470(/* signature unknown */)
{
    // see disassembly above
}

