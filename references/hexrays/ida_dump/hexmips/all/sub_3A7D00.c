// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x3A7D00
// Name:           sub_3A7D00
// Function size:  158 bytes (51 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x3A7D00 cmp     dword ptr [rdi+50h], 1
//   0x3A7D04 jnz     loc_3A7D98
//   0x3A7D0A push    r12
//   0x3A7D0C push    rbp
//   0x3A7D0D push    rbx
//   0x3A7D0E mov     rdx, [rdi+58h]
//   0x3A7D12 mov     rbx, rdi
//   0x3A7D15 mov     eax, [rdx+0Ch]
//   0x3A7D18 cmp     eax, 0FFFFFFFFh
//   0x3A7D1B jz      short loc_3A7D23
//   0x3A7D1D cmp     dword ptr [rdi+78h], 49h ; 'I'
//   0x3A7D21 jz      short loc_3A7D7C
//   0x3A7D23 cmp     dword ptr [rdx+8], 51h ; 'Q'
//   0x3A7D27 jnz     short loc_3A7D88
//   0x3A7D29 mov     rcx, cs:callui_ptr
//   0x3A7D30 mov     rsi, [rbx+8]
//   0x3A7D34 xor     edx, edx
//   0x3A7D36 xor     eax, eax
//   0x3A7D38 mov     edi, 46h ; 'F'
//   0x3A7D3D call    qword ptr [rcx]
//   0x3A7D3F mov     r12, rax
//   0x3A7D42 test    rax, rax
//   0x3A7D45 jz      short loc_3A7D88
//   0x3A7D47 lea     rsi, aGoto; "goto"
//   0x3A7D4E mov     rdi, rax; haystack
//   0x3A7D51 call    _strstr
//   0x3A7D56 mov     rbp, rax
//   0x3A7D59 test    rax, rax
//   0x3A7D5C jz      short loc_3A7D88
//   0x3A7D5E mov     esi, [rbx+30h]
//   0x3A7D61 mov     rdi, r12
//   0x3A7D64 add     rbp, 5
//   0x3A7D68 call    _tag_advance
//   0x3A7D6D cmp     rbp, rax
//   0x3A7D70 ja      short loc_3A7D88
//   0x3A7D72 mov     rax, [rbx+58h]
//   0x3A7D76 mov     rax, [rax+18h]
//   0x3A7D7A mov     eax, [rax]
//   0x3A7D7C pop     rbx
//   0x3A7D7D pop     rbp
//   0x3A7D7E pop     r12
//   0x3A7D80 retn
//   0x3A7D81 align 8
//   0x3A7D88 pop     rbx
//   0x3A7D89 mov     eax, 0FFFFFFFFh
//   0x3A7D8E pop     rbp
//   0x3A7D8F pop     r12
//   0x3A7D91 retn
//   0x3A7D92 align 8
//   0x3A7D98 mov     eax, 0FFFFFFFFh
//   0x3A7D9D retn
// ============================================================

void sub_3A7D00(/* signature unknown */)
{
    // see disassembly above
}

