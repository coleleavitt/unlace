// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0xB34E0
// Name:           sub_B34E0
// Function size:  489 bytes (130 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0xB34E0 push    r15
//   0xB34E2 pxor    xmm0, xmm0
//   0xB34E6 push    r14
//   0xB34E8 push    r13
//   0xB34EA mov     r13d, ecx
//   0xB34ED xor     ecx, ecx
//   0xB34EF push    r12
//   0xB34F1 mov     r12, rdx
//   0xB34F4 mov     rdx, rsi
//   0xB34F7 mov     rsi, rdi
//   0xB34FA push    rbp
//   0xB34FB push    rbx
//   0xB34FC sub     rsp, 38h
//   0xB3500 mov     [rsp+68h+var_60], r8
//   0xB3505 mov     r8d, 3
//   0xB350B mov     rax, fs:28h
//   0xB3514 mov     [rsp+68h+var_40], rax
//   0xB3519 xor     eax, eax
//   0xB351B lea     rax, [rsp+68h+var_58]
//   0xB3520 movups  [rsp+68h+var_50], xmm0
//   0xB3525 mov     [rsp+68h+var_58], 0
//   0xB352E mov     rdi, rax
//   0xB3531 call    sub_32EC50
//   0xB3536 xor     ebx, ebx
//   0xB3538 xor     ecx, ecx
//   0xB353A cmp     qword ptr [rsp+68h+var_50], 0
//   0xB3540 movsxd  r14, r13d
//   0xB3543 jnz     short loc_B3561
//   0xB3545 jmp     loc_B367E
//   0xB354A align 10h
//   0xB3550 add     ebx, 1
//   0xB3553 movsxd  rcx, ebx
//   0xB3556 cmp     rcx, qword ptr [rsp+68h+var_50]
//   0xB355B jnb     loc_B35E8
//   0xB3561 shl     rcx, 6
//   0xB3565 add     rcx, [rsp+68h+var_58]
//   0xB356A mov     rbp, [rcx]
//   0xB356D mov     r15, rcx
//   0xB3570 test    rbp, rbp
//   0xB3573 jnz     loc_B368D
//   0xB3579 mov     rdi, [rcx+38h]
//   0xB357D mov     esi, 2
//   0xB3582 call    _get_tinfo_property
//   0xB3587 and     eax, 0Fh
//   0xB358A cmp     al, 0Bh
//   0xB358C jz      short loc_B3550
//   0xB358E test    r12, r12
//   0xB3591 jz      short loc_B35A9
//   0xB3593 mov     rsi, [r12]
//   0xB3597 mov     rdi, [r15+38h]
//   0xB359B mov     edx, 2
//   0xB35A0 call    _compare_tinfo
//   0xB35A5 test    al, al
//   0xB35A7 jnz     short loc_B35C0
//   0xB35A9 test    r13d, r13d
//   0xB35AC jz      short loc_B3550
//   0xB35AE mov     rsi, [r15+38h]
//   0xB35B2 xor     edx, edx
//   0xB35B4 xor     edi, edi
//   0xB35B6 call    _get_tinfo_size
//   0xB35BB cmp     r14, rax
//   0xB35BE jnz     short loc_B3550
//   0xB35C0 cmp     [rsp+68h+var_60], 0
//   0xB35C6 jz      short loc_B35DB
//   0xB35C8 mov     rsi, [rsp+68h+var_60]
//   0xB35CD mov     rdx, [r15+38h]
//   0xB35D1 mov     rax, [rsi]
//   0xB35D4 mov     [rsi], rdx
//   0xB35D7 mov     [r15+38h], rax
//   0xB35DB mov     r13d, 1
//   0xB35E1 jmp     short loc_B35EB
//   0xB35E3 align 8
//   0xB35E8 xor     r13d, r13d
//   0xB35EB mov     rdi, [rsp+68h+var_58]
//   0xB35F0 test    rdi, rdi
//   0xB35F3 jz      short loc_B365C
//   0xB35F5 mov     r12, qword ptr [rsp+68h+var_50]
//   0xB35FA test    r12, r12
//   0xB35FD jz      short loc_B364E
//   0xB35FF nop
//   0xB3600 mov     rax, rbp
//   0xB3603 shl     rax, 6
//   0xB3607 lea     rbx, [rdi+rax]
//   0xB360B lea     rdi, [rbx+38h]
//   0xB360F call    _clear_tinfo_t
//   0xB3614 mov     rdi, [rbx+20h]
//   0xB3618 test    rdi, rdi
//   0xB361B jz      short loc_B362A
//   0xB361D mov     qword ptr [rbx+28h], 0
//   0xB3625 call    _qfree
//   0xB362A mov     rdi, [rbx+8]
//   0xB362E test    rdi, rdi
//   0xB3631 jz      short loc_B3640
//   0xB3633 mov     qword ptr [rbx+10h], 0
//   0xB363B call    _qfree
//   0xB3640 add     rbp, 1
//   0xB3644 mov     rdi, [rsp+68h+var_58]
//   0xB3649 cmp     r12, rbp
//   0xB364C jnz     short loc_B3600
//   0xB364E mov     qword ptr [rsp+68h+var_50], 0
//   0xB3657 call    _qfree
//   0xB365C mov     rax, [rsp+68h+var_40]
//   0xB3661 sub     rax, fs:28h
//   0xB366A jnz     short loc_B36B7
//   0xB366C add     rsp, 38h
//   0xB3670 mov     eax, r13d
//   0xB3673 pop     rbx
//   0xB3674 pop     rbp
//   0xB3675 pop     r12
//   0xB3677 pop     r13
//   0xB3679 pop     r14
//   0xB367B pop     r15
//   0xB367D retn
//   0xB367E mov     rdi, [rsp+68h+var_58]
//   0xB3683 xor     r13d, r13d
//   0xB3686 test    rdi, rdi
//   0xB3689 jnz     short loc_B364E
//   0xB368B jmp     short loc_B365C
//   0xB368D mov     rax, cs:under_debugger_ptr
//   0xB3694 cmp     byte ptr [rax], 0
//   0xB3697 jnz     loc_3085C
//   0xB369D mov     rax, [rsp+68h+var_40]
//   0xB36A2 sub     rax, fs:28h
//   0xB36AB jnz     short loc_B36BC
//   0xB36AD mov     edi, 0C70Ch
//   0xB36B2 call    sub_37CFE0
//   0xB36B7 call    ___stack_chk_fail
//   0xB36BC call    ___stack_chk_fail
//   0xB36C1 mov     r12, rax
//   0xB36C4 jmp     loc_3085E
// ============================================================

void sub_B34E0(/* signature unknown */)
{
    // see disassembly above
}

