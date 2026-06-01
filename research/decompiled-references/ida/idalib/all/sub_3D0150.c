// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x3D0150
// Name:           sub_3D0150
// Function size:  261 bytes (76 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x3D0150 push    r12; int
//   0x3D0152 mov     edx, 1000h
//   0x3D0157 mov     r12, rdi
//   0x3D015A push    rbp; int
//   0x3D015B push    rbx; int
//   0x3D015C mov     rbx, rsi
//   0x3D015F call    sub_3CFF40
//   0x3D0164 test    al, al
//   0x3D0166 jz      short loc_3D01D0
//   0x3D0168 lea     rax, qword_2CCB548
//   0x3D016F mov     rax, [rax]
//   0x3D0172 test    rax, rax
//   0x3D0175 jz      short loc_3D0181
//   0x3D0177 mov     esi, 1
//   0x3D017C mov     rdi, rbx
//   0x3D017F call    rax
//   0x3D0181 mov     edx, 4
//   0x3D0186 mov     rsi, rbx
//   0x3D0189 mov     rdi, r12
//   0x3D018C call    sub_3BE900
//   0x3D0191 and     eax, 600h
//   0x3D0196 cmp     rax, 200h
//   0x3D019C jz      loc_3D0230
//   0x3D01A2 mov     edx, 4
//   0x3D01A7 mov     rsi, rbx
//   0x3D01AA mov     rdi, r12
//   0x3D01AD call    sub_3BE900
//   0x3D01B2 mov     rdx, rax
//   0x3D01B5 and     edx, 0C000h
//   0x3D01BB cmp     rdx, 8000h
//   0x3D01C2 jz      short loc_3D01E8
//   0x3D01C4 mov     ebp, 1
//   0x3D01C9 pop     rbx
//   0x3D01CA mov     eax, ebp
//   0x3D01CC pop     rbp
//   0x3D01CD pop     r12
//   0x3D01CF retn
//   0x3D01D0 mov     ebp, eax
//   0x3D01D2 call    _get_merge_state
//   0x3D01D7 test    al, 2
//   0x3D01D9 jnz     short loc_3D0181
//   0x3D01DB mov     eax, ebp
//   0x3D01DD pop     rbx
//   0x3D01DE pop     rbp
//   0x3D01DF pop     r12
//   0x3D01E1 retn
//   0x3D01E2 align 8
//   0x3D01E8 mov     rdx, rax
//   0x3D01EB not     rdx
//   0x3D01EE and     dh, 6
//   0x3D01F1 jz      short loc_3D0248
//   0x3D01F3 mov     rdi, rbx
//   0x3D01F6 call    _get_item_end
//   0x3D01FB mov     rsi, rbx
//   0x3D01FE mov     rdi, r12
//   0x3D0201 sub     rax, rbx
//   0x3D0204 mov     rdx, rax
//   0x3D0207 call    sub_3C1E00
//   0x3D020C test    al, al
//   0x3D020E jnz     short loc_3D01C4
//   0x3D0210 mov     ecx, 100h
//   0x3D0215 lea     rdx, byte_22F0C30; src
//   0x3D021C mov     rsi, rbx; int
//   0x3D021F mov     rdi, r12; int
//   0x3D0222 call    sub_4D7EC0
//   0x3D0227 jmp     short loc_3D01C4
//   0x3D0229 align 10h
//   0x3D0230 mov     rsi, rbx
//   0x3D0233 mov     rdi, r12
//   0x3D0236 call    sub_3C2650
//   0x3D023B mov     rbx, rax
//   0x3D023E jmp     loc_3D01A2
//   0x3D0243 align 8
//   0x3D0248 test    eax, 10000000h
//   0x3D024D jnz     loc_3D01C4
//   0x3D0253 jmp     short loc_3D01F3
// ============================================================

void sub_3D0150(/* signature unknown */)
{
    // see disassembly above
}

