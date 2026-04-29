// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x3824E0
// Name:           sub_3824E0
// Function size:  120 bytes (35 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x3824E0 lea     rax, dword_4BB8D8
//   0x3824E7 push    rbx
//   0x3824E8 mov     rbx, rdi
//   0x3824EB mov     edi, [rax]
//   0x3824ED call    _get_module_data
//   0x3824F2 mov     rdx, [rax+3F0h]
//   0x3824F9 mov     rax, [rdx+28h]
//   0x3824FD mov     rdx, [rdx+30h]
//   0x382501 lea     rcx, [rax+rdx*8]
//   0x382505 cmp     rax, rcx
//   0x382508 jz      short loc_38252D
//   0x38250A nop     word ptr [rax+rax+00h]
//   0x382510 mov     rdx, [rax]
//   0x382513 test    rdx, rdx
//   0x382516 jz      short loc_382524
//   0x382518 cmp     rbx, [rdx+8]
//   0x38251C jz      short loc_382538
//   0x38251E cmp     rbx, [rdx+10h]
//   0x382522 jz      short loc_382538
//   0x382524 add     rax, 8
//   0x382528 cmp     rcx, rax
//   0x38252B jnz     short loc_382510
//   0x38252D xor     eax, eax
//   0x38252F pop     rbx
//   0x382530 retn
//   0x382531 align 8
//   0x382538 mov     rcx, cs:callui_ptr
//   0x38253F mov     rsi, [rdx+10h]
//   0x382543 mov     edi, 3Ah ; ':'
//   0x382548 mov     edx, 9
//   0x38254D xor     eax, eax
//   0x38254F call    qword ptr [rcx]
//   0x382551 mov     eax, 1
//   0x382556 pop     rbx
//   0x382557 retn
// ============================================================

void sub_3824E0(/* signature unknown */)
{
    // see disassembly above
}

