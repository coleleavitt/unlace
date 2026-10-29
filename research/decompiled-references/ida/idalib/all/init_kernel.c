// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x38EDB0
// Name:           init_kernel
// Function size:  722 bytes (170 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x38EDB0 push    r13
//   0x38EDB2 push    r12
//   0x38EDB4 mov     r12, rsi
//   0x38EDB7 push    rbp
//   0x38EDB8 push    rbx
//   0x38EDB9 sub     rsp, 18h
//   0x38EDBD mov     rbx, cs:callui_ptr
//   0x38EDC4 mov     rbp, fs:28h
//   0x38EDCD mov     [rsp+38h+var_30], rbp
//   0x38EDD2 mov     rbp, rdx
//   0x38EDD5 mov     [rbx], rdi
//   0x38EDD8 call    sub_38E020
//   0x38EDDD call    sub_3FAEC0
//   0x38EDE2 xor     edi, edi
//   0x38EDE4 call    _set_qerrno
//   0x38EDE9 mov     edi, 35h ; '5'
//   0x38EDEE xor     eax, eax
//   0x38EDF0 call    qword ptr [rbx]
//   0x38EDF2 xor     r8d, r8d
//   0x38EDF5 xor     ecx, ecx
//   0x38EDF7 xor     edx, edx
//   0x38EDF9 mov     cs:byte_2CCB550, al
//   0x38EDFF mov     edi, 7
//   0x38EE04 xor     eax, eax
//   0x38EE06 mov     rsi, 1DA11B00000000h
//   0x38EE10 call    qword ptr [rbx]
//   0x38EE12 test    rax, rax
//   0x38EE15 jle     loc_38F018
//   0x38EE1B lea     rdi, sub_5FEFB0
//   0x38EE22 lea     r13, [rsp+38h+var_34]
//   0x38EE27 call    sub_7477E0
//   0x38EE2C mov     esi, [r12]
//   0x38EE30 mov     rdx, rbp
//   0x38EE33 mov     rdi, r13
//   0x38EE36 mov     [rsp+38h+var_34], esi
//   0x38EE3A call    sub_827FE0
//   0x38EE3F mov     rbp, rax
//   0x38EE42 call    sub_38E170
//   0x38EE47 lea     rdi, aIdaHlp; "ida.hlp"
//   0x38EE4E mov     rdx, rbp
//   0x38EE51 mov     rsi, r13
//   0x38EE54 call    sub_780CE0
//   0x38EE59 call    sub_4B3870
//   0x38EE5E call    sub_42AB00
//   0x38EE63 call    sub_52ADC0
//   0x38EE68 call    sub_425380
//   0x38EE6D call    sub_55CAB0
//   0x38EE72 call    sub_78E3C0
//   0x38EE77 xor     eax, eax
//   0x38EE79 mov     edi, 5Fh ; '_'
//   0x38EE7E call    qword ptr [rbx]
//   0x38EE80 test    rax, rax
//   0x38EE83 jz      short loc_38EE8C
//   0x38EE85 mov     cs:qword_2CCB548, rax
//   0x38EE8C cmp     [rsp+38h+var_34], 1
//   0x38EE91 mov     ebx, 1
//   0x38EE96 jg      short loc_38EEAB
//   0x38EE98 jmp     short loc_38EF10
//   0x38EE9A align 20h
//   0x38EEA0 mov     eax, [rsp+38h+var_34]
//   0x38EEA4 add     ebx, 1
//   0x38EEA7 cmp     ebx, eax
//   0x38EEA9 jge     short loc_38EF10
//   0x38EEAB movsxd  rax, ebx
//   0x38EEAE lea     r13, [rbp+rax*8+0]
//   0x38EEB3 mov     rdi, [r13+0]
//   0x38EEB7 cmp     byte ptr [rdi], 2Dh ; '-'
//   0x38EEBA jnz     short loc_38EF10
//   0x38EEBC cmp     byte ptr [rdi+1], 4Fh ; 'O'
//   0x38EEC0 jnz     short loc_38EEA0
//   0x38EEC2 add     rdi, 2; src
//   0x38EEC6 call    sub_38E5F0
//   0x38EECB test    al, al
//   0x38EECD jz      loc_38F061
//   0x38EED3 mov     edx, [rsp+38h+var_34]
//   0x38EED7 lea     eax, [rbx+1]
//   0x38EEDA mov     rdi, r13; dest
//   0x38EEDD cdqe
//   0x38EEDF sub     edx, ebx
//   0x38EEE1 lea     rsi, [rbp+rax*8+0]; src
//   0x38EEE6 movsxd  rdx, edx
//   0x38EEE9 shl     rdx, 3; n
//   0x38EEED call    _memmove
//   0x38EEF2 mov     eax, [rsp+38h+var_34]
//   0x38EEF6 sub     eax, 1
//   0x38EEF9 mov     [rsp+38h+var_34], eax
//   0x38EEFD cmp     ebx, eax
//   0x38EEFF jl      short loc_38EEAB
//   0x38EF01 nop     word ptr [rax+rax+00000000h]
//   0x38EF0C nop     dword ptr [rax+00h]
//   0x38EF10 call    sub_5FF0F0
//   0x38EF15 mov     rbx, [rax+270h]
//   0x38EF1C mov     rdi, rbx; int
//   0x38EF1F call    _vcred_init
//   0x38EF24 lea     rsi, aVault+1; "vault"
//   0x38EF2B mov     rdi, rbx
//   0x38EF2E call    sub_38EC90
//   0x38EF33 call    sub_395BF0
//   0x38EF38 test    al, al
//   0x38EF3A jz      loc_38F050
//   0x38EF40 call    sub_5FF0F0
//   0x38EF45 mov     esi, 1
//   0x38EF4A mov     r13, [rax+278h]
//   0x38EF51 mov     rdi, r13
//   0x38EF54 call    sub_7CC470
//   0x38EF59 call    sub_5FF0F0
//   0x38EF5E xor     esi, esi
//   0x38EF60 mov     rbx, [rax+280h]
//   0x38EF67 mov     rdi, rbx
//   0x38EF6A call    sub_7CC470
//   0x38EF6F lea     rsi, aAppliedLumina+0Ah; "lumina"
//   0x38EF76 mov     rdi, r13
//   0x38EF79 call    sub_38EC90
//   0x38EF7E lea     rsi, aSecondaryLumin; "secondary_lumina"
//   0x38EF85 mov     rdi, rbx
//   0x38EF88 call    sub_38EC90
//   0x38EF8D call    sub_5FF0F0
//   0x38EF92 mov     rbx, [rax+298h]
//   0x38EF99 cmp     qword ptr [rbx+18h], 10h
//   0x38EF9E mov     rsi, [rbx+8]
//   0x38EFA2 jbe     loc_38F030
//   0x38EFA8 movdqa  xmm0, cs:xmmword_23A7700
//   0x38EFB0 mov     qword ptr [rbx+10h], 11h
//   0x38EFB8 mov     rdi, rbx
//   0x38EFBB movups  xmmword ptr [rsi], xmm0
//   0x38EFBE mov     rax, [rbx+8]
//   0x38EFC2 mov     byte ptr [rax+10h], 0
//   0x38EFC6 mov     eax, 1BBh
//   0x38EFCB mov     [rbx+20h], ax
//   0x38EFCF call    sub_7CCAB0
//   0x38EFD4 lea     rsi, aTlm; "tlm"
//   0x38EFDB mov     rdi, rbx
//   0x38EFDE call    sub_38EC90
//   0x38EFE3 mov     rdi, cs:term_kernel_ptr
//   0x38EFEA call    _qatexit
//   0x38EFEF mov     eax, [rsp+38h+var_34]
//   0x38EFF3 mov     [r12], eax
//   0x38EFF7 mov     rax, [rsp+38h+var_30]
//   0x38EFFC sub     rax, fs:28h
//   0x38F005 jnz     short loc_38F07D
//   0x38F007 add     rsp, 18h
//   0x38F00B mov     rax, rbp
//   0x38F00E pop     rbx
//   0x38F00F pop     rbp
//   0x38F010 pop     r12
//   0x38F012 pop     r13
//   0x38F014 retn
//   0x38F015 align 8
//   0x38F018 lea     rsi, a1CommandLine1+15h; value
//   0x38F01F lea     rdi, aIdaIsInteracti; "IDA_IS_INTERACTIVE"
//   0x38F026 call    _qsetenv
//   0x38F02B jmp     loc_38EE1B
//   0x38F030 lea     rdi, [rbx+8]
//   0x38F034 mov     ecx, 1
//   0x38F039 mov     edx, 11h
//   0x38F03E call    _qvector_reserve
//   0x38F043 mov     [rbx+8], rax
//   0x38F047 mov     rsi, rax
//   0x38F04A jmp     loc_38EFA8
//   0x38F04F align 10h
//   0x38F050 lea     rdi, qword_2CCB4E0; int
//   0x38F057 call    sub_397B30
//   0x38F05C jmp     loc_38EF40
//   0x38F061 mov     rax, [rsp+38h+var_30]
//   0x38F066 sub     rax, fs:28h
//   0x38F06F jnz     short loc_38F07D
//   0x38F071 mov     edi, 5A0h
//   0x38F076 xor     eax, eax
//   0x38F078 call    sub_387C60
//   0x38F07D call    ___stack_chk_fail
// ============================================================

void init_kernel(/* signature unknown */)
{
    // see disassembly above
}

