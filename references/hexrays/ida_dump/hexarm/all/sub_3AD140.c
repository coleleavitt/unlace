// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x3AD140
// Name:           sub_3AD140
// Function size:  158 bytes (51 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x3AD140 cmp     dword ptr [rdi+50h], 1
//   0x3AD144 jnz     loc_3AD1D8
//   0x3AD14A push    r12
//   0x3AD14C push    rbp
//   0x3AD14D push    rbx
//   0x3AD14E mov     rdx, [rdi+58h]
//   0x3AD152 mov     rbx, rdi
//   0x3AD155 mov     eax, [rdx+0Ch]
//   0x3AD158 cmp     eax, 0FFFFFFFFh
//   0x3AD15B jz      short loc_3AD163
//   0x3AD15D cmp     dword ptr [rdi+78h], 49h ; 'I'
//   0x3AD161 jz      short loc_3AD1BC
//   0x3AD163 cmp     dword ptr [rdx+8], 51h ; 'Q'
//   0x3AD167 jnz     short loc_3AD1C8
//   0x3AD169 mov     rcx, cs:callui_ptr
//   0x3AD170 mov     rsi, [rbx+8]
//   0x3AD174 xor     edx, edx
//   0x3AD176 xor     eax, eax
//   0x3AD178 mov     edi, 46h ; 'F'
//   0x3AD17D call    qword ptr [rcx]
//   0x3AD17F mov     r12, rax
//   0x3AD182 test    rax, rax
//   0x3AD185 jz      short loc_3AD1C8
//   0x3AD187 lea     rsi, aGoto; "goto"
//   0x3AD18E mov     rdi, rax; haystack
//   0x3AD191 call    _strstr
//   0x3AD196 mov     rbp, rax
//   0x3AD199 test    rax, rax
//   0x3AD19C jz      short loc_3AD1C8
//   0x3AD19E mov     esi, [rbx+30h]
//   0x3AD1A1 mov     rdi, r12
//   0x3AD1A4 add     rbp, 5
//   0x3AD1A8 call    _tag_advance
//   0x3AD1AD cmp     rbp, rax
//   0x3AD1B0 ja      short loc_3AD1C8
//   0x3AD1B2 mov     rax, [rbx+58h]
//   0x3AD1B6 mov     rax, [rax+18h]
//   0x3AD1BA mov     eax, [rax]
//   0x3AD1BC pop     rbx
//   0x3AD1BD pop     rbp
//   0x3AD1BE pop     r12
//   0x3AD1C0 retn
//   0x3AD1C1 align 8
//   0x3AD1C8 pop     rbx
//   0x3AD1C9 mov     eax, 0FFFFFFFFh
//   0x3AD1CE pop     rbp
//   0x3AD1CF pop     r12
//   0x3AD1D1 retn
//   0x3AD1D2 align 8
//   0x3AD1D8 mov     eax, 0FFFFFFFFh
//   0x3AD1DD retn
// ============================================================

void sub_3AD140(/* signature unknown */)
{
    // see disassembly above
}

