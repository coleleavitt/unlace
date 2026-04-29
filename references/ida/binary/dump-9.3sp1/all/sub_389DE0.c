// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x389DE0
// Name:           sub_389DE0
// Function size:  120 bytes (35 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x389DE0 lea     rax, dword_4EF998
//   0x389DE7 push    rbx
//   0x389DE8 mov     rbx, rdi
//   0x389DEB mov     edi, [rax]
//   0x389DED call    _get_module_data
//   0x389DF2 mov     rdx, [rax+3F0h]
//   0x389DF9 mov     rax, [rdx+28h]
//   0x389DFD mov     rdx, [rdx+30h]
//   0x389E01 lea     rcx, [rax+rdx*8]
//   0x389E05 cmp     rax, rcx
//   0x389E08 jz      short loc_389E2D
//   0x389E0A nop     word ptr [rax+rax+00h]
//   0x389E10 mov     rdx, [rax]
//   0x389E13 test    rdx, rdx
//   0x389E16 jz      short loc_389E24
//   0x389E18 cmp     rbx, [rdx+8]
//   0x389E1C jz      short loc_389E38
//   0x389E1E cmp     rbx, [rdx+10h]
//   0x389E22 jz      short loc_389E38
//   0x389E24 add     rax, 8
//   0x389E28 cmp     rcx, rax
//   0x389E2B jnz     short loc_389E10
//   0x389E2D xor     eax, eax
//   0x389E2F pop     rbx
//   0x389E30 retn
//   0x389E31 align 8
//   0x389E38 mov     rcx, cs:callui_ptr
//   0x389E3F mov     rsi, [rdx+10h]
//   0x389E43 mov     edi, 3Ah ; ':'
//   0x389E48 mov     edx, 9
//   0x389E4D xor     eax, eax
//   0x389E4F call    qword ptr [rcx]
//   0x389E51 mov     eax, 1
//   0x389E56 pop     rbx
//   0x389E57 retn
// ============================================================

void sub_389DE0(/* signature unknown */)
{
    // see disassembly above
}

