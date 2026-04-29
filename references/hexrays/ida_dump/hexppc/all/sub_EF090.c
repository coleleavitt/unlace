// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0xEF090
// Name:           sub_EF090
// Function size:  273 bytes (73 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0xEF090 push    r12
//   0xEF092 mov     r12, rdi
//   0xEF095 push    rbp
//   0xEF096 push    rbx
//   0xEF097 cmp     dword ptr [rsi], 38h ; '8'
//   0xEF09A mov     rbx, rsi
//   0xEF09D jz      short loc_EF0B8
//   0xEF09F xor     ebp, ebp
//   0xEF0A1 cmp     [r12+38h], rbx
//   0xEF0A6 jz      loc_EF148
//   0xEF0AC mov     eax, ebp
//   0xEF0AE pop     rbx
//   0xEF0AF pop     rbp
//   0xEF0B0 pop     r12
//   0xEF0B2 retn
//   0xEF0B3 align 8
//   0xEF0B8 cmp     byte ptr [rsi+20h], 6
//   0xEF0BC jnz     short loc_EF09F
//   0xEF0BE mov     rbp, [rsi+28h]
//   0xEF0C2 mov     rdi, rbp
//   0xEF0C5 call    _is_mapped
//   0xEF0CA test    al, al
//   0xEF0CC jz      short loc_EF09F
//   0xEF0CE mov     esi, 4
//   0xEF0D3 mov     rdi, rbp
//   0xEF0D6 call    _get_flags_ex
//   0xEF0DB and     eax, 600h
//   0xEF0E0 cmp     rax, 200h
//   0xEF0E6 jz      loc_EF18B
//   0xEF0EC mov     rdi, rbp
//   0xEF0EF call    _get_func
//   0xEF0F4 test    rax, rax
//   0xEF0F7 jnz     short loc_EF09F
//   0xEF0F9 mov     rdi, [r12+1E0h]
//   0xEF101 xor     edx, edx
//   0xEF103 mov     ecx, 3
//   0xEF108 mov     rsi, rbp
//   0xEF10B call    sub_37CF20
//   0xEF110 test    al, al
//   0xEF112 jnz     short loc_EF09F
//   0xEF114 mov     rdi, rbp
//   0xEF117 call    sub_EEF80
//   0xEF11C test    al, al
//   0xEF11E jz      loc_EF09F
//   0xEF124 mov     rax, [r12+1E0h]
//   0xEF12C xor     edx, edx
//   0xEF12E mov     rdi, rbx
//   0xEF131 mov     rsi, [rax+70h]
//   0xEF135 call    sub_118D10
//   0xEF13A mov     ebp, eax
//   0xEF13C jmp     loc_EF0A1
//   0xEF141 align 8
//   0xEF148 mov     eax, [r12+178h]
//   0xEF150 test    eax, eax
//   0xEF152 jz      loc_EF0AC
//   0xEF158 mov     rax, [r12+1E0h]
//   0xEF160 xor     edx, edx
//   0xEF162 mov     rdi, rbx
//   0xEF165 mov     rsi, [rax+70h]
//   0xEF169 call    sub_118D10
//   0xEF16E test    al, al
//   0xEF170 jz      loc_EF0AC
//   0xEF176 mov     rdx, rbx
//   0xEF179 mov     rsi, rbx
//   0xEF17C mov     rdi, r12
//   0xEF17F call    sub_FB2A0
//   0xEF184 or      ebp, eax
//   0xEF186 jmp     loc_EF0AC
//   0xEF18B mov     rdi, rbp
//   0xEF18E call    _prev_not_tail
//   0xEF193 cmp     rbp, rax
//   0xEF196 jnz     loc_EF09F
//   0xEF19C jmp     loc_EF0EC
// ============================================================

void sub_EF090(/* signature unknown */)
{
    // see disassembly above
}

