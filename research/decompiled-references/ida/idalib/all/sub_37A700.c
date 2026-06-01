// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x37A700
// Name:           sub_37A700
// Function size:  921 bytes (208 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x37A700 push    r15
//   0x37A702 lea     rdx, [rdi+0C0h]
//   0x37A709 push    r14
//   0x37A70B mov     r14, rdi
//   0x37A70E push    r13
//   0x37A710 push    r12
//   0x37A712 push    rbp
//   0x37A713 push    rbx
//   0x37A714 sub     rsp, 1E8h
//   0x37A71B mov     rbx, [rdi+68h]
//   0x37A71F mov     eax, [rsi+8]
//   0x37A722 mov     rbp, fs:28h
//   0x37A72B mov     [rsp+218h+var_40], rbp
//   0x37A733 mov     rbp, rsi
//   0x37A736 mov     r13, [rdi+88h]
//   0x37A73D lea     r12, [rsp+218h+var_158]
//   0x37A745 mov     r15, [rdi+8]
//   0x37A749 or      bh, 4
//   0x37A74C lea     ecx, [rax-6]
//   0x37A74F mov     r8, r12
//   0x37A752 mov     rsi, r13
//   0x37A755 mov     rdi, rbx
//   0x37A758 call    sub_3681D0
//   0x37A75D test    al, al
//   0x37A75F jnz     short loc_37A7A8
//   0x37A761 xor     edi, edi
//   0x37A763 lea     rsi, aAddStrucMember; "add_struc_member"
//   0x37A76A call    _set_error_string
//   0x37A76F mov     edi, 38h ; '8'
//   0x37A774 call    _set_qerrno
//   0x37A779 mov     rdx, [rsp+218h+var_40]
//   0x37A781 sub     rdx, fs:28h
//   0x37A78A jnz     loc_37AA84
//   0x37A790 add     rsp, 1E8h
//   0x37A797 pop     rbx
//   0x37A798 pop     rbp
//   0x37A799 pop     r12
//   0x37A79B pop     r13
//   0x37A79D pop     r14
//   0x37A79F pop     r15
//   0x37A7A1 retn
//   0x37A7A2 align 8
//   0x37A7A8 xor     esi, esi
//   0x37A7AA mov     rdi, rbx
//   0x37A7AD call    _is_off
//   0x37A7B2 test    al, al
//   0x37A7B4 jz      loc_37A968
//   0x37A7BA lea     rax, [rsp+218h+var_1F0]
//   0x37A7BF mov     rsi, r15
//   0x37A7C2 mov     [rsp+218h+var_1F0], 0
//   0x37A7CB mov     rdi, rax
//   0x37A7CE mov     [rsp+218h+var_218], rax
//   0x37A7D2 call    _get_type_by_tid
//   0x37A7D7 test    al, al
//   0x37A7D9 jz      loc_37A953
//   0x37A7DF pxor    xmm0, xmm0
//   0x37A7E3 cmp     qword ptr [r14+30h], 0
//   0x37A7E8 mov     [rsp+218h+var_1D8], 0
//   0x37A7F1 mov     [rsp+218h+ptr], 0
//   0x37A7FA mov     [rsp+218h+var_178], 1
//   0x37A806 mov     [rsp+218h+var_170], 0FFFFFFFFh
//   0x37A811 mov     [rsp+218h+var_168], 0
//   0x37A81D mov     [rsp+218h+var_160], 0
//   0x37A825 movaps  [rsp+218h+var_1E8], xmm0
//   0x37A82A movups  [rsp+218h+var_1D0], xmm0
//   0x37A82F movaps  [rsp+218h+var_1B8], xmm0
//   0x37A834 movaps  [rsp+218h+var_1A8], xmm0
//   0x37A839 jz      short loc_37A8B2
//   0x37A83B mov     r9, [r14+28h]
//   0x37A83F test    r9, r9
//   0x37A842 jz      short loc_37A8B2
//   0x37A844 mov     rdi, r9; s
//   0x37A847 mov     [rsp+218h+src], r9
//   0x37A84C call    _strlen
//   0x37A851 test    rax, rax
//   0x37A854 jz      short loc_37A8B2
//   0x37A856 lea     rdx, [rax+1]
//   0x37A85A lea     rdi, [rsp+218h+var_1D8]
//   0x37A85F mov     ecx, 1
//   0x37A864 xor     esi, esi
//   0x37A866 mov     [rsp+218h+n], rax
//   0x37A86B lea     r15, [rsp+218h+var_1E8]
//   0x37A870 mov     [rsp+218h+var_208], rdx
//   0x37A875 call    _qvector_reserve
//   0x37A87A mov     rdx, [rsp+218h+var_208]
//   0x37A87F mov     r8, [rsp+218h+n]
//   0x37A884 mov     rdi, rax; dest
//   0x37A887 mov     [rsp+218h+var_1D8], rax
//   0x37A88C mov     rsi, [rsp+218h+src]; src
//   0x37A891 mov     qword ptr [rsp+218h+var_1D0], rdx
//   0x37A896 mov     rdx, r8; n
//   0x37A899 mov     [rsp+218h+var_208], r8
//   0x37A89E call    _memmove
//   0x37A8A3 mov     rax, [rsp+218h+var_1D8]
//   0x37A8A8 mov     r8, [rsp+218h+var_208]
//   0x37A8AD mov     byte ptr [rax+r8], 0
//   0x37A8B2 mov     rax, [r14+48h]
//   0x37A8B6 cmp     rax, 0FFFFFFFFFFFFFFFFh
//   0x37A8BA jz      loc_37AA50
//   0x37A8C0 shl     rax, 3
//   0x37A8C4 mov     qword ptr [rsp+218h+var_1E8], rax
//   0x37A8C9 lea     rax, qword_2CCB598
//   0x37A8D0 lea     r9, haystack
//   0x37A8D7 cmp     qword ptr [rsp+218h+var_1D0], 0
//   0x37A8DD mov     rax, [rax]
//   0x37A8E0 mov     rdi, [rax+688h]
//   0x37A8E7 jnz     loc_37A998
//   0x37A8ED lea     rax, [rsp+218h+var_1A8]
//   0x37A8F2 mov     rcx, r12
//   0x37A8F5 lea     r15, [rsp+218h+var_1E8]
//   0x37A8FA mov     rdx, rbx
//   0x37A8FD mov     r8, [r14+0A8h]
//   0x37A904 mov     rsi, rax
//   0x37A907 mov     [rsp+218h+src], rax
//   0x37A90C call    sub_614E90
//   0x37A911 test    al, al
//   0x37A913 jnz     loc_37A9A8
//   0x37A919 mov     rdi, [rsp+218h+src]
//   0x37A91E call    _clear_tinfo_t
//   0x37A923 mov     rdi, [rsp+218h+ptr]; ptr
//   0x37A928 test    rdi, rdi
//   0x37A92B jz      short loc_37A93B
//   0x37A92D mov     qword ptr [rsp+218h+var_1B8], 0
//   0x37A936 call    _qfree
//   0x37A93B mov     rdi, [rsp+218h+var_1D8]; ptr
//   0x37A940 test    rdi, rdi
//   0x37A943 jz      short loc_37A953
//   0x37A945 mov     qword ptr [rsp+218h+var_1D0], 0
//   0x37A94E call    _qfree
//   0x37A953 mov     rdi, [rsp+218h+var_218]
//   0x37A957 call    _clear_tinfo_t
//   0x37A95C xor     eax, eax
//   0x37A95E jmp     loc_37A779
//   0x37A963 align 8
//   0x37A968 xor     esi, esi
//   0x37A96A mov     rdi, rbx
//   0x37A96D call    _is_off
//   0x37A972 test    al, al
//   0x37A974 jz      loc_37AA10
//   0x37A97A cmp     r13, 0FFFFFFFFFFFFFFFFh
//   0x37A97E jnz     loc_37A7BA
//   0x37A984 mov     qword ptr [rbp+8], 0FFFFFFFFFFFFFFFBh
//   0x37A98C xor     eax, eax
//   0x37A98E jmp     loc_37A779
//   0x37A993 align 8
//   0x37A998 mov     r9, [rsp+218h+var_1D8]
//   0x37A99D jmp     loc_37A8ED
//   0x37A9A2 align 8
//   0x37A9A8 mov     rsi, qword ptr [rsp+218h+var_1A8]
//   0x37A9AD xor     edx, edx
//   0x37A9AF xor     edi, edi
//   0x37A9B1 call    _get_tinfo_size
//   0x37A9B6 shl     rax, 3
//   0x37A9BA mov     r8, r12
//   0x37A9BD mov     rcx, r13
//   0x37A9C0 mov     rdx, rbx
//   0x37A9C3 mov     qword ptr [rsp+218h+var_1E8+8], rax
//   0x37A9C8 lea     rax, qword_2CCB598
//   0x37A9CF mov     rsi, r15
//   0x37A9D2 mov     rax, [rax]
//   0x37A9D5 mov     rdi, [rax+688h]
//   0x37A9DC call    sub_6BE720
//   0x37A9E1 mov     rdi, [rsp+218h+var_218]
//   0x37A9E5 xor     r9d, r9d
//   0x37A9E8 mov     ecx, 1
//   0x37A9ED mov     rdx, r15
//   0x37A9F0 mov     r8, 0FFFFFFFFFFFFFFFFh
//   0x37A9F7 mov     esi, 9
//   0x37A9FC call    _set_tinfo_property4
//   0x37AA01 cdqe
//   0x37AA03 mov     [rbp+8], rax
//   0x37AA07 jmp     loc_37A919
//   0x37AA0C align 10h
//   0x37AA10 xor     esi, esi
//   0x37AA12 mov     rdi, rbx
//   0x37AA15 call    _is_enum
//   0x37AA1A test    al, al
//   0x37AA1C jnz     loc_37A97A
//   0x37AA22 xor     esi, esi
//   0x37AA24 mov     rdi, rbx
//   0x37AA27 call    _is_stroff
//   0x37AA2C test    al, al
//   0x37AA2E jnz     loc_37A97A
//   0x37AA34 xor     esi, esi
//   0x37AA36 mov     rdi, rbx
//   0x37AA39 call    _is_custfmt
//   0x37AA3E test    al, al
//   0x37AA40 jnz     loc_37A97A
//   0x37AA46 jmp     loc_37A7BA
//   0x37AA4B align 10h
//   0x37AA50 mov     rdi, [rsp+218h+var_1F0]
//   0x37AA55 mov     esi, 10h
//   0x37AA5A lea     r15, [rsp+218h+var_1E8]
//   0x37AA5F call    _get_tinfo_property
//   0x37AA64 mov     rdx, rax
//   0x37AA67 xor     eax, eax
//   0x37AA69 test    edx, edx
//   0x37AA6B jz      loc_37A8C4
//   0x37AA71 mov     rsi, [rsp+218h+var_1F0]
//   0x37AA76 xor     edx, edx
//   0x37AA78 xor     edi, edi
//   0x37AA7A call    _get_tinfo_size
//   0x37AA7F jmp     loc_37A8C0
//   0x37AA84 call    ___stack_chk_fail
//   0x37AA89 mov     rbx, rax
//   0x37AA8C jmp     loc_2B0348
//   0x37AA91 mov     rbx, rax
//   0x37AA94 jmp     loc_2B0340
// ============================================================

void sub_37A700(/* signature unknown */)
{
    // see disassembly above
}

