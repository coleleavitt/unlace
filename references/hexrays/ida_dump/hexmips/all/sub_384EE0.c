// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x384EE0
// Name:           sub_384EE0
// Function size:  120 bytes (35 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x384EE0 lea     rax, dword_4CF8F8
//   0x384EE7 push    rbx
//   0x384EE8 mov     rbx, rdi
//   0x384EEB mov     edi, [rax]
//   0x384EED call    _get_module_data
//   0x384EF2 mov     rdx, [rax+3F0h]
//   0x384EF9 mov     rax, [rdx+28h]
//   0x384EFD mov     rdx, [rdx+30h]
//   0x384F01 lea     rcx, [rax+rdx*8]
//   0x384F05 cmp     rax, rcx
//   0x384F08 jz      short loc_384F2D
//   0x384F0A nop     word ptr [rax+rax+00h]
//   0x384F10 mov     rdx, [rax]
//   0x384F13 test    rdx, rdx
//   0x384F16 jz      short loc_384F24
//   0x384F18 cmp     rbx, [rdx+8]
//   0x384F1C jz      short loc_384F38
//   0x384F1E cmp     rbx, [rdx+10h]
//   0x384F22 jz      short loc_384F38
//   0x384F24 add     rax, 8
//   0x384F28 cmp     rcx, rax
//   0x384F2B jnz     short loc_384F10
//   0x384F2D xor     eax, eax
//   0x384F2F pop     rbx
//   0x384F30 retn
//   0x384F31 align 8
//   0x384F38 mov     rcx, cs:callui_ptr
//   0x384F3F mov     rsi, [rdx+10h]
//   0x384F43 mov     edi, 3Ah ; ':'
//   0x384F48 mov     edx, 9
//   0x384F4D xor     eax, eax
//   0x384F4F call    qword ptr [rcx]
//   0x384F51 mov     eax, 1
//   0x384F56 pop     rbx
//   0x384F57 retn
// ============================================================

void sub_384EE0(/* signature unknown */)
{
    // see disassembly above
}

