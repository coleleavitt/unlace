// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0xEDF10
// Name:           sub_EDF10
// Function size:  273 bytes (73 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0xEDF10 push    r12
//   0xEDF12 mov     r12, rdi
//   0xEDF15 push    rbp
//   0xEDF16 push    rbx
//   0xEDF17 cmp     dword ptr [rsi], 38h ; '8'
//   0xEDF1A mov     rbx, rsi
//   0xEDF1D jz      short loc_EDF38
//   0xEDF1F xor     ebp, ebp
//   0xEDF21 cmp     [r12+38h], rbx
//   0xEDF26 jz      loc_EDFC8
//   0xEDF2C mov     eax, ebp
//   0xEDF2E pop     rbx
//   0xEDF2F pop     rbp
//   0xEDF30 pop     r12
//   0xEDF32 retn
//   0xEDF33 align 8
//   0xEDF38 cmp     byte ptr [rsi+20h], 6
//   0xEDF3C jnz     short loc_EDF1F
//   0xEDF3E mov     rbp, [rsi+28h]
//   0xEDF42 mov     rdi, rbp
//   0xEDF45 call    _is_mapped
//   0xEDF4A test    al, al
//   0xEDF4C jz      short loc_EDF1F
//   0xEDF4E mov     esi, 4
//   0xEDF53 mov     rdi, rbp
//   0xEDF56 call    _get_flags_ex
//   0xEDF5B and     eax, 600h
//   0xEDF60 cmp     rax, 200h
//   0xEDF66 jz      loc_EE00B
//   0xEDF6C mov     rdi, rbp
//   0xEDF6F call    _get_func
//   0xEDF74 test    rax, rax
//   0xEDF77 jnz     short loc_EDF1F
//   0xEDF79 mov     rdi, [r12+1E0h]
//   0xEDF81 xor     edx, edx
//   0xEDF83 mov     ecx, 3
//   0xEDF88 mov     rsi, rbp
//   0xEDF8B call    sub_37B020
//   0xEDF90 test    al, al
//   0xEDF92 jnz     short loc_EDF1F
//   0xEDF94 mov     rdi, rbp
//   0xEDF97 call    sub_EDE00
//   0xEDF9C test    al, al
//   0xEDF9E jz      loc_EDF1F
//   0xEDFA4 mov     rax, [r12+1E0h]
//   0xEDFAC xor     edx, edx
//   0xEDFAE mov     rdi, rbx
//   0xEDFB1 mov     rsi, [rax+70h]
//   0xEDFB5 call    sub_117B90
//   0xEDFBA mov     ebp, eax
//   0xEDFBC jmp     loc_EDF21
//   0xEDFC1 align 8
//   0xEDFC8 mov     eax, [r12+178h]
//   0xEDFD0 test    eax, eax
//   0xEDFD2 jz      loc_EDF2C
//   0xEDFD8 mov     rax, [r12+1E0h]
//   0xEDFE0 xor     edx, edx
//   0xEDFE2 mov     rdi, rbx
//   0xEDFE5 mov     rsi, [rax+70h]
//   0xEDFE9 call    sub_117B90
//   0xEDFEE test    al, al
//   0xEDFF0 jz      loc_EDF2C
//   0xEDFF6 mov     rdx, rbx
//   0xEDFF9 mov     rsi, rbx
//   0xEDFFC mov     rdi, r12
//   0xEDFFF call    sub_FA120
//   0xEE004 or      ebp, eax
//   0xEE006 jmp     loc_EDF2C
//   0xEE00B mov     rdi, rbp
//   0xEE00E call    _prev_not_tail
//   0xEE013 cmp     rbp, rax
//   0xEE016 jnz     loc_EDF1F
//   0xEE01C jmp     loc_EDF6C
// ============================================================

void sub_EDF10(/* signature unknown */)
{
    // see disassembly above
}

