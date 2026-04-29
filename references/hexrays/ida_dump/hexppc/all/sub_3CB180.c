// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x3CB180
// Name:           sub_3CB180
// Function size:  161 bytes (51 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x3CB180 push    rbp
//   0x3CB181 mov     rbp, rsi
//   0x3CB184 push    rbx
//   0x3CB185 mov     rbx, rdi
//   0x3CB188 sub     rsp, 8
//   0x3CB18C mov     rax, [rsi+40h]
//   0x3CB190 mov     ecx, [rdi+38h]
//   0x3CB193 test    rax, rax
//   0x3CB196 jz      short loc_3CB1AA
//   0x3CB198 mov     edi, [rax+3Ch]
//   0x3CB19B lea     edx, [rdi-1]
//   0x3CB19E cmp     edx, 2
//   0x3CB1A1 mov     edx, 0
//   0x3CB1A6 cmovnb  rax, rdx
//   0x3CB1AA mov     rdi, [rax+40h]
//   0x3CB1AE mov     edx, ecx
//   0x3CB1B0 mov     eax, ecx
//   0x3CB1B2 not     edx
//   0x3CB1B4 mov     esi, [rdi]
//   0x3CB1B6 and     edx, esi
//   0x3CB1B8 or      eax, esi
//   0x3CB1BA test    esi, ecx
//   0x3CB1BC cmovnz  eax, edx
//   0x3CB1BF mov     rdx, cs:callui_ptr
//   0x3CB1C6 mov     [rdi], eax
//   0x3CB1C8 mov     edi, 43h ; 'C'
//   0x3CB1CD mov     rsi, [rbp+0]
//   0x3CB1D1 xor     eax, eax
//   0x3CB1D3 call    qword ptr [rdx]
//   0x3CB1D5 mov     rax, [rbp+40h]
//   0x3CB1D9 test    rax, rax
//   0x3CB1DC jz      short loc_3CB1F0
//   0x3CB1DE mov     ecx, [rax+3Ch]
//   0x3CB1E1 lea     edx, [rcx-1]
//   0x3CB1E4 cmp     edx, 2
//   0x3CB1E7 mov     edx, 0
//   0x3CB1EC cmovnb  rax, rdx
//   0x3CB1F0 mov     rsi, [rax+40h]
//   0x3CB1F4 mov     rax, [rbx]
//   0x3CB1F7 mov     rdi, rbx
//   0x3CB1FA call    qword ptr [rax+30h]
//   0x3CB1FD mov     rdi, [rbx+30h]
//   0x3CB201 lea     rcx, aMicrocode; "Microcode"
//   0x3CB208 mov     esi, 1
//   0x3CB20D movzx   edx, al
//   0x3CB210 call    _reg_int_op
//   0x3CB215 add     rsp, 8
//   0x3CB219 mov     eax, 1
//   0x3CB21E pop     rbx
//   0x3CB21F pop     rbp
//   0x3CB220 retn
// ============================================================

void sub_3CB180(/* signature unknown */)
{
    // see disassembly above
}

