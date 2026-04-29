// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0xF2AD0
// Name:           sub_F2AD0
// Function size:  273 bytes (73 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0xF2AD0 push    r12
//   0xF2AD2 mov     r12, rdi
//   0xF2AD5 push    rbp
//   0xF2AD6 push    rbx
//   0xF2AD7 cmp     dword ptr [rsi], 38h ; '8'
//   0xF2ADA mov     rbx, rsi
//   0xF2ADD jz      short loc_F2AF8
//   0xF2ADF xor     ebp, ebp
//   0xF2AE1 cmp     [r12+38h], rbx
//   0xF2AE6 jz      loc_F2B88
//   0xF2AEC mov     eax, ebp
//   0xF2AEE pop     rbx
//   0xF2AEF pop     rbp
//   0xF2AF0 pop     r12
//   0xF2AF2 retn
//   0xF2AF3 align 8
//   0xF2AF8 cmp     byte ptr [rsi+20h], 6
//   0xF2AFC jnz     short loc_F2ADF
//   0xF2AFE mov     rbp, [rsi+28h]
//   0xF2B02 mov     rdi, rbp
//   0xF2B05 call    _is_mapped
//   0xF2B0A test    al, al
//   0xF2B0C jz      short loc_F2ADF
//   0xF2B0E mov     esi, 4
//   0xF2B13 mov     rdi, rbp
//   0xF2B16 call    _get_flags_ex
//   0xF2B1B and     eax, 600h
//   0xF2B20 cmp     rax, 200h
//   0xF2B26 jz      loc_F2BCB
//   0xF2B2C mov     rdi, rbp
//   0xF2B2F call    _get_func
//   0xF2B34 test    rax, rax
//   0xF2B37 jnz     short loc_F2ADF
//   0xF2B39 mov     rdi, [r12+1E0h]
//   0xF2B41 xor     edx, edx
//   0xF2B43 mov     ecx, 3
//   0xF2B48 mov     rsi, rbp
//   0xF2B4B call    sub_3810A0
//   0xF2B50 test    al, al
//   0xF2B52 jnz     short loc_F2ADF
//   0xF2B54 mov     rdi, rbp
//   0xF2B57 call    sub_F29C0
//   0xF2B5C test    al, al
//   0xF2B5E jz      loc_F2ADF
//   0xF2B64 mov     rax, [r12+1E0h]
//   0xF2B6C xor     edx, edx
//   0xF2B6E mov     rdi, rbx
//   0xF2B71 mov     rsi, [rax+70h]
//   0xF2B75 call    sub_11C750
//   0xF2B7A mov     ebp, eax
//   0xF2B7C jmp     loc_F2AE1
//   0xF2B81 align 8
//   0xF2B88 mov     eax, [r12+178h]
//   0xF2B90 test    eax, eax
//   0xF2B92 jz      loc_F2AEC
//   0xF2B98 mov     rax, [r12+1E0h]
//   0xF2BA0 xor     edx, edx
//   0xF2BA2 mov     rdi, rbx
//   0xF2BA5 mov     rsi, [rax+70h]
//   0xF2BA9 call    sub_11C750
//   0xF2BAE test    al, al
//   0xF2BB0 jz      loc_F2AEC
//   0xF2BB6 mov     rdx, rbx
//   0xF2BB9 mov     rsi, rbx
//   0xF2BBC mov     rdi, r12
//   0xF2BBF call    sub_FECE0
//   0xF2BC4 or      ebp, eax
//   0xF2BC6 jmp     loc_F2AEC
//   0xF2BCB mov     rdi, rbp
//   0xF2BCE call    _prev_not_tail
//   0xF2BD3 cmp     rbp, rax
//   0xF2BD6 jnz     loc_F2ADF
//   0xF2BDC jmp     loc_F2B2C
// ============================================================

void sub_F2AD0(/* signature unknown */)
{
    // see disassembly above
}

