// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x10CE30
// Name:           sub_10CE30
// Function size:  220 bytes (60 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x10CE30 push    r13
//   0x10CE32 mov     rcx, rsi
//   0x10CE35 mov     rsi, rdi
//   0x10CE38 push    r12
//   0x10CE3A push    rbp
//   0x10CE3B push    rbx
//   0x10CE3C sub     rsp, 58h
//   0x10CE40 mov     rbp, fs:28h
//   0x10CE49 mov     [rsp+78h+var_30], rbp
//   0x10CE4E mov     rbp, rdx
//   0x10CE51 lea     r12, [rsp+78h+var_68]
//   0x10CE56 lea     rdx, [rsp+78h+var_74]
//   0x10CE5B mov     [rsp+78h+var_68], 0
//   0x10CE64 mov     rdi, r12
//   0x10CE67 mov     [rsp+78h+var_60], 0
//   0x10CE6C call    sub_1DB690
//   0x10CE71 mov     ebx, eax
//   0x10CE73 test    al, al
//   0x10CE75 jnz     short loc_10CE98
//   0x10CE77 mov     rax, [rsp+78h+var_30]
//   0x10CE7C sub     rax, fs:28h
//   0x10CE85 jnz     short loc_10CEFF
//   0x10CE87 add     rsp, 58h
//   0x10CE8B mov     eax, ebx
//   0x10CE8D pop     rbx
//   0x10CE8E pop     rbp
//   0x10CE8F pop     r12
//   0x10CE91 pop     r13
//   0x10CE93 retn
//   0x10CE94 align 8
//   0x10CE98 mov     eax, [rsp+78h+var_74]
//   0x10CE9C lea     r13, [rsp+78h+var_58]
//   0x10CEA1 pxor    xmm0, xmm0
//   0x10CEA5 xor     ecx, ecx
//   0x10CEA7 mov     rdx, r12
//   0x10CEAA mov     rsi, r13
//   0x10CEAD mov     rdi, rbp
//   0x10CEB0 movups  [rsp+78h+var_50], xmm0
//   0x10CEB5 mov     [rsp+78h+var_58], 0
//   0x10CEBD mov     [rsp+78h+var_54], eax
//   0x10CEC1 mov     [rsp+78h+var_40], 0
//   0x10CECA call    sub_1DB8E0
//   0x10CECF test    al, al
//   0x10CED1 jz      short loc_10CEF0
//   0x10CED3 lea     rsi, [rsp+78h+var_70]
//   0x10CED8 mov     rdi, r13
//   0x10CEDB call    sub_30DD70
//   0x10CEE0 test    al, al
//   0x10CEE2 jz      short loc_10CEF0
//   0x10CEE4 cmp     [rsp+78h+var_70], 0
//   0x10CEEA setz    bl
//   0x10CEED jmp     short loc_10CEF2
//   0x10CEEF align 10h
//   0x10CEF0 xor     ebx, ebx
//   0x10CEF2 mov     rdi, r13
//   0x10CEF5 call    sub_30DE00
//   0x10CEFA jmp     loc_10CE77
//   0x10CEFF call    ___stack_chk_fail
//   0x10CF04 mov     rbx, rax
//   0x10CF07 jmp     loc_35BEA
// ============================================================

void sub_10CE30(/* signature unknown */)
{
    // see disassembly above
}

