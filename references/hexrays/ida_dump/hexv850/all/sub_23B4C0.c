// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x23B4C0
// Name:           sub_23B4C0
// Function size:  413 bytes (107 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x23B4C0 push    r15
//   0x23B4C2 push    r14
//   0x23B4C4 push    r13
//   0x23B4C6 mov     r13, rsi
//   0x23B4C9 push    r12
//   0x23B4CB mov     r12, rdx
//   0x23B4CE push    rbp
//   0x23B4CF mov     ebp, ecx
//   0x23B4D1 push    rbx
//   0x23B4D2 mov     edx, ebp
//   0x23B4D4 mov     rbx, rdi
//   0x23B4D7 sub     rsp, 48h
//   0x23B4DB mov     rcx, [rsi]
//   0x23B4DE mov     [rsp+78h+var_6C], r8d
//   0x23B4E3 lea     r14, [rsp+78h+var_50]
//   0x23B4E8 mov     r8, r14
//   0x23B4EB mov     rax, fs:28h
//   0x23B4F4 mov     [rsp+78h+var_40], rax
//   0x23B4F9 xor     eax, eax
//   0x23B4FB lea     rax, [rsi+8]
//   0x23B4FF mov     rsi, r12
//   0x23B502 mov     [rsp+78h+var_50], 0
//   0x23B50B mov     rdi, rax
//   0x23B50E mov     [rsp+78h+var_68], rax
//   0x23B513 call    sub_2528E0
//   0x23B518 mov     r15d, eax
//   0x23B51B test    eax, eax
//   0x23B51D jz      loc_23B5A0
//   0x23B523 or      byte ptr [r13+0Dh], 20h
//   0x23B528 mov     rdi, [rsp+78h+var_50]
//   0x23B52D mov     esi, 3
//   0x23B532 call    _get_tinfo_property
//   0x23B537 xor     edx, edx
//   0x23B539 mov     rdi, [r13+0]
//   0x23B53D cmp     eax, 1
//   0x23B540 mov     esi, ebp
//   0x23B542 setz    dl
//   0x23B545 call    sub_325150
//   0x23B54A mov     [r13+0], rax
//   0x23B54E mov     rdx, rax
//   0x23B551 movzx   eax, byte ptr [r13+0Dh]
//   0x23B556 test    al, 18h
//   0x23B558 jnz     loc_23B5E8
//   0x23B55E cmp     r15d, 2
//   0x23B562 jz      short loc_23B580
//   0x23B564 mov     qword ptr [rbx], 0
//   0x23B56B mov     rsi, r14
//   0x23B56E mov     rdi, rbx
//   0x23B571 call    _copy_tinfo_t
//   0x23B576 jmp     short loc_23B5B8
//   0x23B578 align 20h
//   0x23B580 mov     rsi, r14
//   0x23B583 mov     rdi, r13
//   0x23B586 mov     [rsp+78h+var_60], rdx
//   0x23B58B call    sub_250670
//   0x23B590 mov     rdx, [rsp+78h+var_60]
//   0x23B595 cmp     rdx, rax
//   0x23B598 jz      short loc_23B5F8
//   0x23B59A nop     word ptr [rax+rax+00h]
//   0x23B5A0 and     byte ptr [r13+0Dh], 0DFh
//   0x23B5A5 mov     ecx, [rsp+78h+var_6C]
//   0x23B5A9 mov     edx, ebp
//   0x23B5AB mov     rdi, rbx
//   0x23B5AE mov     rsi, [r12+70h]
//   0x23B5B3 call    sub_3269C0
//   0x23B5B8 mov     rdi, r14
//   0x23B5BB call    _clear_tinfo_t
//   0x23B5C0 mov     rax, [rsp+78h+var_40]
//   0x23B5C5 sub     rax, fs:28h
//   0x23B5CE jnz     short loc_23B648
//   0x23B5D0 add     rsp, 48h
//   0x23B5D4 mov     rax, rbx
//   0x23B5D7 pop     rbx
//   0x23B5D8 pop     rbp
//   0x23B5D9 pop     r12
//   0x23B5DB pop     r13
//   0x23B5DD pop     r14
//   0x23B5DF pop     r15
//   0x23B5E1 retn
//   0x23B5E2 align 8
//   0x23B5E8 test    al, 6
//   0x23B5EA jnz     loc_23B55E
//   0x23B5F0 jmp     loc_23B564
//   0x23B5F5 align 8
//   0x23B5F8 lea     r15, [rsp+78h+var_48]
//   0x23B5FD xor     ecx, ecx
//   0x23B5FF xor     esi, esi
//   0x23B601 mov     rdi, r13
//   0x23B604 mov     [rsp+78h+var_48], 0
//   0x23B60D mov     rdx, r15
//   0x23B610 call    sub_2606E0
//   0x23B615 mov     rdi, r15
//   0x23B618 mov     byte ptr [rsp+78h+var_60], al
//   0x23B61C call    _clear_tinfo_t
//   0x23B621 movzx   eax, byte ptr [rsp+78h+var_60]
//   0x23B626 test    al, al
//   0x23B628 jz      loc_23B5A0
//   0x23B62E mov     rsi, [r13+28h]
//   0x23B632 mov     rdi, [rsp+78h+var_68]
//   0x23B637 and     rsi, 0FFFFFFFFFFFDFFFFh
//   0x23B63E call    sub_3243C0
//   0x23B643 jmp     loc_23B564
//   0x23B648 call    ___stack_chk_fail
//   0x23B64D mov     rbx, rax
//   0x23B650 jmp     loc_45C08
//   0x23B655 mov     rbx, rax
//   0x23B658 jmp     loc_45C00
// ============================================================

void sub_23B4C0(/* signature unknown */)
{
    // see disassembly above
}

