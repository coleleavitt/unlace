// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x19D60
// Name:           sub_19D60
// Function size:  672 bytes (164 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x19D60 push    r14
//   0x19D62 push    r13
//   0x19D64 mov     r13, rsi
//   0x19D67 push    r12
//   0x19D69 mov     r12, rdx
//   0x19D6C push    rbp
//   0x19D6D mov     rbp, rdi
//   0x19D70 push    rbx
//   0x19D71 sub     rsp, 10h
//   0x19D75 mov     rsi, [rdx]
//   0x19D78 xor     edx, edx
//   0x19D7A mov     r14, fs:28h
//   0x19D83 mov     [rsp+38h+var_30], r14
//   0x19D88 mov     r14d, ecx
//   0x19D8B lea     rdi, [rsp+38h+var_34]
//   0x19D90 call    _get_tinfo_size
//   0x19D95 cmp     rax, 0FFFFFFFFFFFFFFFFh
//   0x19D99 jz      loc_19EC0
//   0x19D9F mov     rbx, rax
//   0x19DA2 cmp     rax, 4
//   0x19DA6 jnz     short loc_19DB1
//   0x19DA8 test    r14b, r14b
//   0x19DAB jnz     loc_19E30
//   0x19DB1 movsxd  r14, ebx
//   0x19DB4 cmp     [rsp+38h+var_34], 4
//   0x19DB9 ja      loc_19E5C
//   0x19DBF mov     edx, r14d
//   0x19DC2 mov     rsi, r12
//   0x19DC5 mov     rdi, rbp
//   0x19DC8 call    sub_19C90
//   0x19DCD cmp     eax, 2
//   0x19DD0 jz      loc_19F10
//   0x19DD6 cmp     eax, 3
//   0x19DD9 jz      loc_19EE8
//   0x19DDF cmp     eax, 1
//   0x19DE2 jnz     loc_19EC0
//   0x19DE8 mov     rax, [rbp+0]
//   0x19DEC cmp     rbx, 4
//   0x19DF0 ja      loc_19F60
//   0x19DF6 lea     rdx, [rax+1]
//   0x19DFA cmp     rdx, 4
//   0x19DFE ja      loc_19FE1
//   0x19E04 mov     [rbp+0], rdx
//   0x19E08 test    r13, r13
//   0x19E0B jz      short loc_19E20
//   0x19E0D add     eax, 6
//   0x19E10 mov     dword ptr [r13+0], 3
//   0x19E18 mov     [r13+8], eax
//   0x19E1C nop     dword ptr [rax+00h]
//   0x19E20 mov     eax, 1
//   0x19E25 jmp     loc_19EC2
//   0x19E2A align 10h
//   0x19E30 mov     rdi, [r12]
//   0x19E34 mov     esi, 2
//   0x19E39 call    _get_tinfo_property
//   0x19E3E and     eax, 0Fh
//   0x19E41 cmp     al, 9
//   0x19E43 jnz     loc_19F00
//   0x19E49 mov     [rsp+38h+var_34], 8
//   0x19E51 mov     r14d, 8
//   0x19E57 mov     ebx, 8
//   0x19E5C mov     rax, [rbp+0]
//   0x19E60 add     rax, 1
//   0x19E64 cmp     rax, 4
//   0x19E68 ja      loc_19DBF
//   0x19E6E mov     rdx, [rbp+10h]
//   0x19E72 cmp     dword ptr [rdx+108h], 1
//   0x19E79 jz      short loc_19EB3
//   0x19E7B cmp     byte ptr [rdx+10Ch], 0
//   0x19E82 jz      loc_19DBF
//   0x19E88 mov     rdi, [r12]
//   0x19E8C mov     esi, 2
//   0x19E91 call    _get_tinfo_property
//   0x19E96 mov     edx, eax
//   0x19E98 and     edx, 0Fh
//   0x19E9B cmp     dl, 0Ah
//   0x19E9E jbe     short loc_19EAB
//   0x19EA0 and     eax, 3Fh
//   0x19EA3 cmp     al, 2Dh ; '-'
//   0x19EA5 jnz     loc_19DBF
//   0x19EAB mov     rax, [rbp+0]
//   0x19EAF add     rax, 1
//   0x19EB3 and     rax, 0FFFFFFFFFFFFFFFEh
//   0x19EB7 mov     [rbp+0], rax
//   0x19EBB jmp     loc_19DBF
//   0x19EC0 xor     eax, eax
//   0x19EC2 mov     rdx, [rsp+38h+var_30]
//   0x19EC7 sub     rdx, fs:28h
//   0x19ED0 jnz     loc_19FDC
//   0x19ED6 add     rsp, 10h
//   0x19EDA pop     rbx
//   0x19EDB pop     rbp
//   0x19EDC pop     r12
//   0x19EDE pop     r13
//   0x19EE0 pop     r14
//   0x19EE2 retn
//   0x19EE3 align 8
//   0x19EE8 mov     rdx, rbx
//   0x19EEB mov     rsi, r13
//   0x19EEE mov     rdi, rbp
//   0x19EF1 call    sub_199F0
//   0x19EF6 jmp     loc_19E20
//   0x19EFB align 20h
//   0x19F00 mov     r14d, 4
//   0x19F06 mov     ebx, 4
//   0x19F0B jmp     loc_19DB4
//   0x19F10 cmp     [rsp+38h+var_34], 4
//   0x19F15 jbe     short loc_19F24
//   0x19F17 mov     rax, [rbp+10h]
//   0x19F1B cmp     byte ptr [rax+10Ch], 0
//   0x19F22 jnz     short loc_19F98
//   0x19F24 mov     rbx, [rbp+8]
//   0x19F28 test    r13, r13
//   0x19F2B jz      short loc_19F45
//   0x19F2D mov     rdi, r13
//   0x19F30 call    _cleanup_argloc
//   0x19F35 mov     dword ptr [r13+0], 1
//   0x19F3D mov     [r13+8], rbx
//   0x19F41 mov     rbx, [rbp+8]
//   0x19F45 lea     rax, [rbx+r14+3]
//   0x19F4A and     rax, 0FFFFFFFFFFFFFFFCh
//   0x19F4E mov     [rbp+8], rax
//   0x19F52 jmp     loc_19E20
//   0x19F57 align 20h
//   0x19F60 lea     rdx, [rax+2]
//   0x19F64 cmp     rdx, 4
//   0x19F68 ja      short loc_19FE1
//   0x19F6A mov     [rbp+0], rdx
//   0x19F6E test    r13, r13
//   0x19F71 jz      loc_19E20
//   0x19F77 lea     edx, [rax+7]
//   0x19F7A add     eax, 6
//   0x19F7D mov     dword ptr [r13+0], 4
//   0x19F85 shl     edx, 10h
//   0x19F88 or      eax, edx
//   0x19F8A mov     [r13+8], eax
//   0x19F8E jmp     loc_19E20
//   0x19F93 align 8
//   0x19F98 mov     rdi, [r12]
//   0x19F9C mov     esi, 2
//   0x19FA1 call    _get_tinfo_property
//   0x19FA6 mov     rbx, [rbp+8]
//   0x19FAA mov     edx, eax
//   0x19FAC and     edx, 0Fh
//   0x19FAF cmp     dl, 0Ah
//   0x19FB2 jbe     short loc_19FBF
//   0x19FB4 and     eax, 3Fh
//   0x19FB7 cmp     al, 2Dh ; '-'
//   0x19FB9 jnz     loc_19F28
//   0x19FBF mov     eax, [rsp+38h+var_34]
//   0x19FC3 lea     edx, [rax-1]
//   0x19FC6 neg     eax
//   0x19FC8 movsxd  rdx, edx
//   0x19FCB cdqe
//   0x19FCD add     rbx, rdx
//   0x19FD0 and     rbx, rax
//   0x19FD3 mov     [rbp+8], rbx
//   0x19FD7 jmp     loc_19F28
//   0x19FDC call    ___stack_chk_fail
//   0x19FE1 mov     rax, [rsp+38h+var_30]
//   0x19FE6 sub     rax, fs:28h
//   0x19FEF jnz     short loc_19FDC
//   0x19FF1 call    sub_18950
//   0x19FF6 nop     word ptr [rax+rax+00000000h]
// ============================================================

void sub_19D60(/* signature unknown */)
{
    // see disassembly above
}

