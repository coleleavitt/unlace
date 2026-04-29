// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x3ACC00
// Name:           sub_3ACC00
// Function size:  158 bytes (51 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x3ACC00 cmp     dword ptr [rdi+50h], 1
//   0x3ACC04 jnz     loc_3ACC98
//   0x3ACC0A push    r12
//   0x3ACC0C push    rbp
//   0x3ACC0D push    rbx
//   0x3ACC0E mov     rdx, [rdi+58h]
//   0x3ACC12 mov     rbx, rdi
//   0x3ACC15 mov     eax, [rdx+0Ch]
//   0x3ACC18 cmp     eax, 0FFFFFFFFh
//   0x3ACC1B jz      short loc_3ACC23
//   0x3ACC1D cmp     dword ptr [rdi+78h], 49h ; 'I'
//   0x3ACC21 jz      short loc_3ACC7C
//   0x3ACC23 cmp     dword ptr [rdx+8], 51h ; 'Q'
//   0x3ACC27 jnz     short loc_3ACC88
//   0x3ACC29 mov     rcx, cs:callui_ptr
//   0x3ACC30 mov     rsi, [rbx+8]
//   0x3ACC34 xor     edx, edx
//   0x3ACC36 xor     eax, eax
//   0x3ACC38 mov     edi, 46h ; 'F'
//   0x3ACC3D call    qword ptr [rcx]
//   0x3ACC3F mov     r12, rax
//   0x3ACC42 test    rax, rax
//   0x3ACC45 jz      short loc_3ACC88
//   0x3ACC47 lea     rsi, aGoto; "goto"
//   0x3ACC4E mov     rdi, rax; haystack
//   0x3ACC51 call    _strstr
//   0x3ACC56 mov     rbp, rax
//   0x3ACC59 test    rax, rax
//   0x3ACC5C jz      short loc_3ACC88
//   0x3ACC5E mov     esi, [rbx+30h]
//   0x3ACC61 mov     rdi, r12
//   0x3ACC64 add     rbp, 5
//   0x3ACC68 call    _tag_advance
//   0x3ACC6D cmp     rbp, rax
//   0x3ACC70 ja      short loc_3ACC88
//   0x3ACC72 mov     rax, [rbx+58h]
//   0x3ACC76 mov     rax, [rax+18h]
//   0x3ACC7A mov     eax, [rax]
//   0x3ACC7C pop     rbx
//   0x3ACC7D pop     rbp
//   0x3ACC7E pop     r12
//   0x3ACC80 retn
//   0x3ACC81 align 8
//   0x3ACC88 pop     rbx
//   0x3ACC89 mov     eax, 0FFFFFFFFh
//   0x3ACC8E pop     rbp
//   0x3ACC8F pop     r12
//   0x3ACC91 retn
//   0x3ACC92 align 8
//   0x3ACC98 mov     eax, 0FFFFFFFFh
//   0x3ACC9D retn
// ============================================================

void sub_3ACC00(/* signature unknown */)
{
    // see disassembly above
}

