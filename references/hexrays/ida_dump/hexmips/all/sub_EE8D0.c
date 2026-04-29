// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0xEE8D0
// Name:           sub_EE8D0
// Function size:  273 bytes (73 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0xEE8D0 push    r12
//   0xEE8D2 mov     r12, rdi
//   0xEE8D5 push    rbp
//   0xEE8D6 push    rbx
//   0xEE8D7 cmp     dword ptr [rsi], 38h ; '8'
//   0xEE8DA mov     rbx, rsi
//   0xEE8DD jz      short loc_EE8F8
//   0xEE8DF xor     ebp, ebp
//   0xEE8E1 cmp     [r12+38h], rbx
//   0xEE8E6 jz      loc_EE988
//   0xEE8EC mov     eax, ebp
//   0xEE8EE pop     rbx
//   0xEE8EF pop     rbp
//   0xEE8F0 pop     r12
//   0xEE8F2 retn
//   0xEE8F3 align 8
//   0xEE8F8 cmp     byte ptr [rsi+20h], 6
//   0xEE8FC jnz     short loc_EE8DF
//   0xEE8FE mov     rbp, [rsi+28h]
//   0xEE902 mov     rdi, rbp
//   0xEE905 call    _is_mapped
//   0xEE90A test    al, al
//   0xEE90C jz      short loc_EE8DF
//   0xEE90E mov     esi, 4
//   0xEE913 mov     rdi, rbp
//   0xEE916 call    _get_flags_ex
//   0xEE91B and     eax, 600h
//   0xEE920 cmp     rax, 200h
//   0xEE926 jz      loc_EE9CB
//   0xEE92C mov     rdi, rbp
//   0xEE92F call    _get_func
//   0xEE934 test    rax, rax
//   0xEE937 jnz     short loc_EE8DF
//   0xEE939 mov     rdi, [r12+1E0h]
//   0xEE941 xor     edx, edx
//   0xEE943 mov     ecx, 3
//   0xEE948 mov     rsi, rbp
//   0xEE94B call    sub_37C1A0
//   0xEE950 test    al, al
//   0xEE952 jnz     short loc_EE8DF
//   0xEE954 mov     rdi, rbp
//   0xEE957 call    sub_EE7C0
//   0xEE95C test    al, al
//   0xEE95E jz      loc_EE8DF
//   0xEE964 mov     rax, [r12+1E0h]
//   0xEE96C xor     edx, edx
//   0xEE96E mov     rdi, rbx
//   0xEE971 mov     rsi, [rax+70h]
//   0xEE975 call    sub_118550
//   0xEE97A mov     ebp, eax
//   0xEE97C jmp     loc_EE8E1
//   0xEE981 align 8
//   0xEE988 mov     eax, [r12+178h]
//   0xEE990 test    eax, eax
//   0xEE992 jz      loc_EE8EC
//   0xEE998 mov     rax, [r12+1E0h]
//   0xEE9A0 xor     edx, edx
//   0xEE9A2 mov     rdi, rbx
//   0xEE9A5 mov     rsi, [rax+70h]
//   0xEE9A9 call    sub_118550
//   0xEE9AE test    al, al
//   0xEE9B0 jz      loc_EE8EC
//   0xEE9B6 mov     rdx, rbx
//   0xEE9B9 mov     rsi, rbx
//   0xEE9BC mov     rdi, r12
//   0xEE9BF call    sub_FAAE0
//   0xEE9C4 or      ebp, eax
//   0xEE9C6 jmp     loc_EE8EC
//   0xEE9CB mov     rdi, rbp
//   0xEE9CE call    _prev_not_tail
//   0xEE9D3 cmp     rbp, rax
//   0xEE9D6 jnz     loc_EE8DF
//   0xEE9DC jmp     loc_EE92C
// ============================================================

void sub_EE8D0(/* signature unknown */)
{
    // see disassembly above
}

