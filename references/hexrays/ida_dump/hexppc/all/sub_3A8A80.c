// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x3A8A80
// Name:           sub_3A8A80
// Function size:  158 bytes (51 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x3A8A80 cmp     dword ptr [rdi+50h], 1
//   0x3A8A84 jnz     loc_3A8B18
//   0x3A8A8A push    r12
//   0x3A8A8C push    rbp
//   0x3A8A8D push    rbx
//   0x3A8A8E mov     rdx, [rdi+58h]
//   0x3A8A92 mov     rbx, rdi
//   0x3A8A95 mov     eax, [rdx+0Ch]
//   0x3A8A98 cmp     eax, 0FFFFFFFFh
//   0x3A8A9B jz      short loc_3A8AA3
//   0x3A8A9D cmp     dword ptr [rdi+78h], 49h ; 'I'
//   0x3A8AA1 jz      short loc_3A8AFC
//   0x3A8AA3 cmp     dword ptr [rdx+8], 51h ; 'Q'
//   0x3A8AA7 jnz     short loc_3A8B08
//   0x3A8AA9 mov     rcx, cs:callui_ptr
//   0x3A8AB0 mov     rsi, [rbx+8]
//   0x3A8AB4 xor     edx, edx
//   0x3A8AB6 xor     eax, eax
//   0x3A8AB8 mov     edi, 46h ; 'F'
//   0x3A8ABD call    qword ptr [rcx]
//   0x3A8ABF mov     r12, rax
//   0x3A8AC2 test    rax, rax
//   0x3A8AC5 jz      short loc_3A8B08
//   0x3A8AC7 lea     rsi, aGoto; "goto"
//   0x3A8ACE mov     rdi, rax; haystack
//   0x3A8AD1 call    _strstr
//   0x3A8AD6 mov     rbp, rax
//   0x3A8AD9 test    rax, rax
//   0x3A8ADC jz      short loc_3A8B08
//   0x3A8ADE mov     esi, [rbx+30h]
//   0x3A8AE1 mov     rdi, r12
//   0x3A8AE4 add     rbp, 5
//   0x3A8AE8 call    _tag_advance
//   0x3A8AED cmp     rbp, rax
//   0x3A8AF0 ja      short loc_3A8B08
//   0x3A8AF2 mov     rax, [rbx+58h]
//   0x3A8AF6 mov     rax, [rax+18h]
//   0x3A8AFA mov     eax, [rax]
//   0x3A8AFC pop     rbx
//   0x3A8AFD pop     rbp
//   0x3A8AFE pop     r12
//   0x3A8B00 retn
//   0x3A8B01 align 8
//   0x3A8B08 pop     rbx
//   0x3A8B09 mov     eax, 0FFFFFFFFh
//   0x3A8B0E pop     rbp
//   0x3A8B0F pop     r12
//   0x3A8B11 retn
//   0x3A8B12 align 8
//   0x3A8B18 mov     eax, 0FFFFFFFFh
//   0x3A8B1D retn
// ============================================================

void sub_3A8A80(/* signature unknown */)
{
    // see disassembly above
}

