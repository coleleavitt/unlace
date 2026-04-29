// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x240C40
// Name:           sub_240C40
// Function size:  413 bytes (107 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x240C40 push    r15
//   0x240C42 push    r14
//   0x240C44 push    r13
//   0x240C46 mov     r13, rsi
//   0x240C49 push    r12
//   0x240C4B mov     r12, rdx
//   0x240C4E push    rbp
//   0x240C4F mov     ebp, ecx
//   0x240C51 push    rbx
//   0x240C52 mov     edx, ebp
//   0x240C54 mov     rbx, rdi
//   0x240C57 sub     rsp, 48h
//   0x240C5B mov     rcx, [rsi]
//   0x240C5E mov     [rsp+78h+var_6C], r8d
//   0x240C63 lea     r14, [rsp+78h+var_50]
//   0x240C68 mov     r8, r14
//   0x240C6B mov     rax, fs:28h
//   0x240C74 mov     [rsp+78h+var_40], rax
//   0x240C79 xor     eax, eax
//   0x240C7B lea     rax, [rsi+8]
//   0x240C7F mov     rsi, r12
//   0x240C82 mov     [rsp+78h+var_50], 0
//   0x240C8B mov     rdi, rax
//   0x240C8E mov     [rsp+78h+var_68], rax
//   0x240C93 call    sub_258060
//   0x240C98 mov     r15d, eax
//   0x240C9B test    eax, eax
//   0x240C9D jz      loc_240D20
//   0x240CA3 or      byte ptr [r13+0Dh], 20h
//   0x240CA8 mov     rdi, [rsp+78h+var_50]
//   0x240CAD mov     esi, 3
//   0x240CB2 call    _get_tinfo_property
//   0x240CB7 xor     edx, edx
//   0x240CB9 mov     rdi, [r13+0]
//   0x240CBD cmp     eax, 1
//   0x240CC0 mov     esi, ebp
//   0x240CC2 setz    dl
//   0x240CC5 call    sub_32AEF0
//   0x240CCA mov     [r13+0], rax
//   0x240CCE mov     rdx, rax
//   0x240CD1 movzx   eax, byte ptr [r13+0Dh]
//   0x240CD6 test    al, 18h
//   0x240CD8 jnz     loc_240D68
//   0x240CDE cmp     r15d, 2
//   0x240CE2 jz      short loc_240D00
//   0x240CE4 mov     qword ptr [rbx], 0
//   0x240CEB mov     rsi, r14
//   0x240CEE mov     rdi, rbx
//   0x240CF1 call    _copy_tinfo_t
//   0x240CF6 jmp     short loc_240D38
//   0x240CF8 align 20h
//   0x240D00 mov     rsi, r14
//   0x240D03 mov     rdi, r13
//   0x240D06 mov     [rsp+78h+var_60], rdx
//   0x240D0B call    sub_255DF0
//   0x240D10 mov     rdx, [rsp+78h+var_60]
//   0x240D15 cmp     rdx, rax
//   0x240D18 jz      short loc_240D78
//   0x240D1A nop     word ptr [rax+rax+00h]
//   0x240D20 and     byte ptr [r13+0Dh], 0DFh
//   0x240D25 mov     ecx, [rsp+78h+var_6C]
//   0x240D29 mov     edx, ebp
//   0x240D2B mov     rdi, rbx
//   0x240D2E mov     rsi, [r12+70h]
//   0x240D33 call    sub_32C760
//   0x240D38 mov     rdi, r14
//   0x240D3B call    _clear_tinfo_t
//   0x240D40 mov     rax, [rsp+78h+var_40]
//   0x240D45 sub     rax, fs:28h
//   0x240D4E jnz     short loc_240DC8
//   0x240D50 add     rsp, 48h
//   0x240D54 mov     rax, rbx
//   0x240D57 pop     rbx
//   0x240D58 pop     rbp
//   0x240D59 pop     r12
//   0x240D5B pop     r13
//   0x240D5D pop     r14
//   0x240D5F pop     r15
//   0x240D61 retn
//   0x240D62 align 8
//   0x240D68 test    al, 6
//   0x240D6A jnz     loc_240CDE
//   0x240D70 jmp     loc_240CE4
//   0x240D75 align 8
//   0x240D78 lea     r15, [rsp+78h+var_48]
//   0x240D7D xor     ecx, ecx
//   0x240D7F xor     esi, esi
//   0x240D81 mov     rdi, r13
//   0x240D84 mov     [rsp+78h+var_48], 0
//   0x240D8D mov     rdx, r15
//   0x240D90 call    sub_265E60
//   0x240D95 mov     rdi, r15
//   0x240D98 mov     byte ptr [rsp+78h+var_60], al
//   0x240D9C call    _clear_tinfo_t
//   0x240DA1 movzx   eax, byte ptr [rsp+78h+var_60]
//   0x240DA6 test    al, al
//   0x240DA8 jz      loc_240D20
//   0x240DAE mov     rsi, [r13+28h]
//   0x240DB2 mov     rdi, [rsp+78h+var_68]
//   0x240DB7 and     rsi, 0FFFFFFFFFFFDFFFFh
//   0x240DBE call    sub_32A040
//   0x240DC3 jmp     loc_240CE4
//   0x240DC8 call    ___stack_chk_fail
//   0x240DCD mov     rbx, rax
//   0x240DD0 jmp     loc_48DD2
//   0x240DD5 mov     rbx, rax
//   0x240DD8 jmp     loc_48DCA
// ============================================================

void sub_240C40(/* signature unknown */)
{
    // see disassembly above
}

