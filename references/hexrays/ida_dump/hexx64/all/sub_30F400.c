// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x30F400
// Name:           sub_30F400
// Function size:  1013 bytes (205 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x30F400 push    r14
//   0x30F402 push    r13
//   0x30F404 push    r12
//   0x30F406 push    rbp
//   0x30F407 push    rbx
//   0x30F408 sub     rsp, 20h
//   0x30F40C mov     rbp, fs:28h
//   0x30F415 mov     [rsp+48h+var_30], rbp
//   0x30F41A mov     rbp, rdi
//   0x30F41D mov     rdi, [rdi+20h]
//   0x30F421 mov     eax, [rdi]
//   0x30F423 cmp     eax, 4
//   0x30F426 jz      short loc_30F450
//   0x30F428 cmp     eax, 14h
//   0x30F42B jz      short loc_30F48F
//   0x30F42D mov     rax, [rsp+48h+var_30]
//   0x30F432 sub     rax, fs:28h
//   0x30F43B jnz     loc_30F7B4
//   0x30F441 add     rsp, 20h
//   0x30F445 xor     eax, eax
//   0x30F447 pop     rbx
//   0x30F448 pop     rbp
//   0x30F449 pop     r12
//   0x30F44B pop     r13
//   0x30F44D pop     r14
//   0x30F44F retn
//   0x30F450 add     rdi, 20h ; ' '
//   0x30F454 lea     rsi, [rsp+48h+var_38]
//   0x30F459 xor     edx, edx
//   0x30F45B mov     ebx, [rbp+38h]
//   0x30F45E call    sub_11FD80
//   0x30F463 mov     rdi, [rbp+20h]
//   0x30F467 test    al, al
//   0x30F469 jz      short loc_30F488
//   0x30F46B cmp     rbx, [rsp+48h+var_38]
//   0x30F470 jnz     short loc_30F488
//   0x30F472 lea     rsi, [rdi+40h]
//   0x30F476 lea     rdi, [rbp+28h]
//   0x30F47A call    sub_125180
//   0x30F47F jmp     short loc_30F42D
//   0x30F481 align 8
//   0x30F488 mov     eax, [rdi]
//   0x30F48A cmp     eax, 14h
//   0x30F48D jnz     short loc_30F42D
//   0x30F48F mov     rax, [rbp+8]
//   0x30F493 cmp     byte ptr [rdi+20h], 1
//   0x30F497 mov     rbx, [rax+5E0h]
//   0x30F49E jz      loc_30F728
//   0x30F4A4 lea     rsi, [rsp+48h+var_40]
//   0x30F4A9 call    sub_11C8A0
//   0x30F4AE test    rax, rax
//   0x30F4B1 jz      loc_30F42D
//   0x30F4B7 mov     rdx, [rsp+48h+var_40]
//   0x30F4BC cmp     byte ptr [rdx], 1
//   0x30F4BF jnz     loc_30F42D
//   0x30F4C5 mov     ecx, [rdx+8]
//   0x30F4C8 cmp     [rbx+3Ch], ecx
//   0x30F4CB jnz     loc_30F42D
//   0x30F4D1 xor     edx, edx
//   0x30F4D3 lea     rsi, [rsp+48h+var_38]
//   0x30F4D8 mov     rdi, rax
//   0x30F4DB mov     ebx, [rbp+38h]
//   0x30F4DE call    sub_11FD80
//   0x30F4E3 test    al, al
//   0x30F4E5 jz      loc_30F42D
//   0x30F4EB cmp     rbx, [rsp+48h+var_38]
//   0x30F4F0 jnz     loc_30F42D
//   0x30F4F6 mov     rax, [rbp+8]
//   0x30F4FA mov     r13, [rax+5D8h]
//   0x30F501 mov     rax, [rbp+20h]
//   0x30F505 mov     dword ptr [rax], 4
//   0x30F50B mov     rax, [rbp+20h]
//   0x30F50F lea     rdi, [rax+30h]
//   0x30F513 call    sub_11CDA0
//   0x30F518 mov     edi, 50h ; 'P'
//   0x30F51D call    j__qalloc_or_throw
//   0x30F522 mov     r12, rax
//   0x30F525 mov     rax, [rbp+20h]
//   0x30F529 mov     rdi, r12
//   0x30F52C lea     r14, [r12+20h]
//   0x30F531 mov     rsi, [rax+18h]
//   0x30F535 mov     rax, 0FFFFFFFF00000000h
//   0x30F53F mov     qword ptr [r12+28h], 0
//   0x30F548 mov     [r12+20h], rax
//   0x30F54D mov     [r12+30h], rax
//   0x30F552 mov     qword ptr [r12+38h], 0
//   0x30F55B mov     [r12+40h], rax
//   0x30F560 mov     qword ptr [r12+48h], 0
//   0x30F569 call    sub_330970
//   0x30F56E mov     rbx, [rbp+20h]
//   0x30F572 lea     rdi, [rbx+20h]
//   0x30F576 call    sub_11CDA0
//   0x30F57B mov     byte ptr [rbx+20h], 4
//   0x30F57F lea     rsi, aGetCurrent; "get_current"
//   0x30F586 mov     rdi, r14
//   0x30F589 mov     [rbx+28h], r12
//   0x30F58D mov     rax, [rbp+20h]
//   0x30F591 mov     edx, [rax+44h]
//   0x30F594 mov     [rax+24h], edx
//   0x30F597 mov     dword ptr [r12], 38h ; '8'
//   0x30F59F call    sub_11D4A0
//   0x30F5A4 mov     edi, 138h
//   0x30F5A9 call    j__qalloc_or_throw
//   0x30F5AE pxor    xmm0, xmm0
//   0x30F5B2 mov     qword ptr [rax], 0FFFFFFFFFFFFFFFFh
//   0x30F5B9 mov     rbx, rax
//   0x30F5BC mov     qword ptr [rax+8], 0
//   0x30F5C4 mov     qword ptr [rax+10h], 0
//   0x30F5CC mov     qword ptr [rax+18h], 0
//   0x30F5D4 mov     qword ptr [rax+30h], 0
//   0x30F5DC mov     qword ptr [rax+48h], 0
//   0x30F5E4 mov     qword ptr [rax+50h], 0
//   0x30F5EC mov     qword ptr [rax+58h], 0
//   0x30F5F4 mov     qword ptr [rax+60h], 0
//   0x30F5FC mov     qword ptr [rax+68h], 0
//   0x30F604 mov     qword ptr [rax+70h], 0
//   0x30F60C mov     qword ptr [rax+88h], 0
//   0x30F617 mov     qword ptr [rax+90h], 0
//   0x30F622 mov     qword ptr [rax+98h], 0
//   0x30F62D mov     qword ptr [rax+0B0h], 0
//   0x30F638 mov     qword ptr [rax+0B8h], 0
//   0x30F643 mov     qword ptr [rax+0C0h], 0
//   0x30F64E mov     qword ptr [rax+0D8h], 0
//   0x30F659 mov     qword ptr [rax+0F0h], 0
//   0x30F664 mov     qword ptr [rax+0F8h], 0
//   0x30F66F mov     qword ptr [rax+100h], 0
//   0x30F67A mov     qword ptr [rax+118h], 0
//   0x30F685 mov     qword ptr [rax+120h], 0
//   0x30F690 movups  xmmword ptr [rax+20h], xmm0
//   0x30F694 movups  xmmword ptr [rax+38h], xmm0
//   0x30F698 movups  xmmword ptr [rax+78h], xmm0
//   0x30F69C movups  xmmword ptr [rax+0A0h], xmm0
//   0x30F6A3 movups  xmmword ptr [rax+0C8h], xmm0
//   0x30F6AA movups  xmmword ptr [rax+0E0h], xmm0
//   0x30F6B1 movups  xmmword ptr [rax+108h], xmm0
//   0x30F6B8 movups  xmmword ptr [rax+128h], xmm0
//   0x30F6BF mov     byte ptr [r12+40h], 8
//   0x30F6C5 mov     [r12+48h], rax
//   0x30F6CA mov     rax, [rbp+20h]
//   0x30F6CE mov     eax, [rax+44h]
//   0x30F6D1 mov     [r12+44h], eax
//   0x30F6D6 or      dword ptr [rbx+118h], 15h
//   0x30F6DD cmp     byte ptr [r13+518h], 0
//   0x30F6E5 jz      short loc_30F758
//   0x30F6E7 add     r13, 518h
//   0x30F6EE mov     rsi, r13
//   0x30F6F1 mov     rdi, rbx
//   0x30F6F4 call    sub_335200
//   0x30F6F9 test    al, al
//   0x30F6FB jz      loc_30F7B9
//   0x30F701 mov     rsi, [rbp+8]
//   0x30F705 mov     rdi, rbx
//   0x30F708 call    sub_330290
//   0x30F70D mov     rdx, [rbp+10h]
//   0x30F711 mov     eax, [rdx+18h]
//   0x30F714 and     ah, 0FDh
//   0x30F717 or      al, 80h
//   0x30F719 mov     [rdx+18h], eax
//   0x30F71C jmp     loc_30F42D
//   0x30F721 align 8
//   0x30F728 mov     eax, [rdi+28h]
//   0x30F72B cmp     [rbx+3Ch], eax
//   0x30F72E jnz     loc_30F4A4
//   0x30F734 add     rdi, 30h ; '0'
//   0x30F738 xor     edx, edx
//   0x30F73A lea     rsi, [rbp+28h]
//   0x30F73E call    sub_125B60
//   0x30F743 test    al, al
//   0x30F745 jnz     loc_30F4F6
//   0x30F74B mov     rdi, [rbp+20h]
//   0x30F74F jmp     loc_30F4A4
//   0x30F754 align 8
//   0x30F758 add     r13, 518h
//   0x30F75F xor     r9d, r9d
//   0x30F762 xor     r8d, r8d
//   0x30F765 xor     ecx, ecx
//   0x30F767 lea     rax, unk_42D930
//   0x30F76E xor     esi, esi
//   0x30F770 lea     rdx, [rsp+48h+var_38]
//   0x30F775 mov     rdi, r13
//   0x30F778 mov     [rsp+48h+var_38], rax
//   0x30F77D call    _deserialize_tinfo
//   0x30F782 test    al, al
//   0x30F784 jnz     loc_30F6EE
//   0x30F78A mov     rax, cs:under_debugger_ptr
//   0x30F791 cmp     byte ptr [rax], 0
//   0x30F794 jnz     loc_506BA
//   0x30F79A mov     rax, [rsp+48h+var_30]
//   0x30F79F sub     rax, fs:28h
//   0x30F7A8 jnz     short loc_30F7E3
//   0x30F7AA mov     edi, 0C82Bh
//   0x30F7AF call    sub_383060
//   0x30F7B4 call    ___stack_chk_fail
//   0x30F7B9 mov     rax, cs:under_debugger_ptr
//   0x30F7C0 cmp     byte ptr [rax], 0
//   0x30F7C3 jnz     loc_506BA
//   0x30F7C9 mov     rax, [rsp+48h+var_30]
//   0x30F7CE sub     rax, fs:28h
//   0x30F7D7 jnz     short loc_30F7E8
//   0x30F7D9 mov     edi, 0C552h
//   0x30F7DE call    sub_383060
//   0x30F7E3 call    ___stack_chk_fail
//   0x30F7E8 call    ___stack_chk_fail
//   0x30F7ED mov     rbx, rax
//   0x30F7F0 jmp     loc_506BC
// ============================================================

void sub_30F400(/* signature unknown */)
{
    // see disassembly above
}

