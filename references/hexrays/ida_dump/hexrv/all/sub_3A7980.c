// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x3A7980
// Name:           sub_3A7980
// Function size:  158 bytes (51 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x3A7980 cmp     dword ptr [rdi+50h], 1
//   0x3A7984 jnz     loc_3A7A18
//   0x3A798A push    r12
//   0x3A798C push    rbp
//   0x3A798D push    rbx
//   0x3A798E mov     rdx, [rdi+58h]
//   0x3A7992 mov     rbx, rdi
//   0x3A7995 mov     eax, [rdx+0Ch]
//   0x3A7998 cmp     eax, 0FFFFFFFFh
//   0x3A799B jz      short loc_3A79A3
//   0x3A799D cmp     dword ptr [rdi+78h], 49h ; 'I'
//   0x3A79A1 jz      short loc_3A79FC
//   0x3A79A3 cmp     dword ptr [rdx+8], 51h ; 'Q'
//   0x3A79A7 jnz     short loc_3A7A08
//   0x3A79A9 mov     rcx, cs:callui_ptr
//   0x3A79B0 mov     rsi, [rbx+8]
//   0x3A79B4 xor     edx, edx
//   0x3A79B6 xor     eax, eax
//   0x3A79B8 mov     edi, 46h ; 'F'
//   0x3A79BD call    qword ptr [rcx]
//   0x3A79BF mov     r12, rax
//   0x3A79C2 test    rax, rax
//   0x3A79C5 jz      short loc_3A7A08
//   0x3A79C7 lea     rsi, aGoto; "goto"
//   0x3A79CE mov     rdi, rax; haystack
//   0x3A79D1 call    _strstr
//   0x3A79D6 mov     rbp, rax
//   0x3A79D9 test    rax, rax
//   0x3A79DC jz      short loc_3A7A08
//   0x3A79DE mov     esi, [rbx+30h]
//   0x3A79E1 mov     rdi, r12
//   0x3A79E4 add     rbp, 5
//   0x3A79E8 call    _tag_advance
//   0x3A79ED cmp     rbp, rax
//   0x3A79F0 ja      short loc_3A7A08
//   0x3A79F2 mov     rax, [rbx+58h]
//   0x3A79F6 mov     rax, [rax+18h]
//   0x3A79FA mov     eax, [rax]
//   0x3A79FC pop     rbx
//   0x3A79FD pop     rbp
//   0x3A79FE pop     r12
//   0x3A7A00 retn
//   0x3A7A01 align 8
//   0x3A7A08 pop     rbx
//   0x3A7A09 mov     eax, 0FFFFFFFFh
//   0x3A7A0E pop     rbp
//   0x3A7A0F pop     r12
//   0x3A7A11 retn
//   0x3A7A12 align 8
//   0x3A7A18 mov     eax, 0FFFFFFFFh
//   0x3A7A1D retn
// ============================================================

void sub_3A7980(/* signature unknown */)
{
    // see disassembly above
}

