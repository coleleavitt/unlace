// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x3138C0
// Name:           sub_3138C0
// Function size:  317 bytes (76 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x3138C0 push    rbp
//   0x3138C1 push    rbx
//   0x3138C2 mov     rbx, rdi
//   0x3138C5 sub     rsp, 28h
//   0x3138C9 mov     rax, fs:28h
//   0x3138D2 mov     [rsp+38h+var_20], rax
//   0x3138D7 xor     eax, eax
//   0x3138D9 test    sil, sil
//   0x3138DC jz      short loc_313930
//   0x3138DE lea     rdx, aCbdontshow+6; "Show"
//   0x3138E5 lea     rsi, aIconWarningHid_0; "ICON WARNING\nHIDECANCEL\nAUTOHIDE NONE"...
//   0x3138EC mov     edi, 1
//   0x3138F1 call    sub_1698A0
//   0x3138F6 test    eax, eax
//   0x3138F8 jle     short loc_31394E
//   0x3138FA mov     rax, [rsp+38h+var_20]
//   0x3138FF sub     rax, fs:28h
//   0x313908 jnz     loc_3139F0
//   0x31390E mov     rax, [rbx+160h]
//   0x313915 add     rsp, 28h
//   0x313919 mov     rdi, rbx
//   0x31391C xor     edx, edx
//   0x31391E pop     rbx
//   0x31391F pop     rbp
//   0x313920 lea     rsi, [rax+78h]
//   0x313924 jmp     sub_53CBF0
//   0x313929 align 10h
//   0x313930 xor     eax, eax
//   0x313932 lea     rdx, aHide+1; "Hide"
//   0x313939 mov     edi, 1
//   0x31393E lea     rsi, aIconWarningHid_0; "ICON WARNING\nHIDECANCEL\nAUTOHIDE NONE"...
//   0x313945 call    sub_1698A0
//   0x31394A test    eax, eax
//   0x31394C jg      short loc_313970
//   0x31394E mov     rax, [rsp+38h+var_20]
//   0x313953 sub     rax, fs:28h
//   0x31395C jnz     loc_3139F0
//   0x313962 add     rsp, 28h
//   0x313966 pop     rbx
//   0x313967 pop     rbp
//   0x313968 retn
//   0x313969 align 10h
//   0x313970 pxor    xmm0, xmm0
//   0x313974 mov     edx, 1
//   0x313979 mov     rsi, rsp
//   0x31397C mov     rdi, rbx
//   0x31397F mov     [rsp+38h+var_38], 0
//   0x313987 mov     rbp, rsp
//   0x31398A movups  [rsp+38h+var_30], xmm0
//   0x31398F call    sub_53CBF0
//   0x313994 mov     rdx, [rsp+38h+var_38]
//   0x313998 test    rdx, rdx
//   0x31399B jz      short loc_31394E
//   0x31399D mov     rbp, qword ptr [rsp+38h+var_30]
//   0x3139A2 test    rbp, rbp
//   0x3139A5 jz      short loc_3139DA
//   0x3139A7 xor     ebx, ebx
//   0x3139A9 nop     dword ptr [rax+00000000h]
//   0x3139B0 lea     rax, [rbx+rbx*2]
//   0x3139B4 lea     rax, [rdx+rax*8]
//   0x3139B8 mov     rdi, [rax]
//   0x3139BB test    rdi, rdi
//   0x3139BE jz      short loc_3139D1
//   0x3139C0 mov     qword ptr [rax+8], 0
//   0x3139C8 call    _qfree
//   0x3139CD mov     rdx, [rsp+38h+var_38]
//   0x3139D1 add     rbx, 1
//   0x3139D5 cmp     rbp, rbx
//   0x3139D8 jnz     short loc_3139B0
//   0x3139DA mov     qword ptr [rsp+38h+var_30], 0
//   0x3139E3 mov     rdi, rdx
//   0x3139E6 call    _qfree
//   0x3139EB jmp     loc_31394E
//   0x3139F0 call    ___stack_chk_fail
//   0x3139F5 mov     rbx, rax
//   0x3139F8 jmp     loc_137C2A
// ============================================================

void sub_3138C0(/* signature unknown */)
{
    // see disassembly above
}

