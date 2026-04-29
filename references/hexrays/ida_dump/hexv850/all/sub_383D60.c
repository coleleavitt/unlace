// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x383D60
// Name:           sub_383D60
// Function size:  120 bytes (35 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x383D60 lea     rax, dword_4C2AB8
//   0x383D67 push    rbx
//   0x383D68 mov     rbx, rdi
//   0x383D6B mov     edi, [rax]
//   0x383D6D call    _get_module_data
//   0x383D72 mov     rdx, [rax+3F0h]
//   0x383D79 mov     rax, [rdx+28h]
//   0x383D7D mov     rdx, [rdx+30h]
//   0x383D81 lea     rcx, [rax+rdx*8]
//   0x383D85 cmp     rax, rcx
//   0x383D88 jz      short loc_383DAD
//   0x383D8A nop     word ptr [rax+rax+00h]
//   0x383D90 mov     rdx, [rax]
//   0x383D93 test    rdx, rdx
//   0x383D96 jz      short loc_383DA4
//   0x383D98 cmp     rbx, [rdx+8]
//   0x383D9C jz      short loc_383DB8
//   0x383D9E cmp     rbx, [rdx+10h]
//   0x383DA2 jz      short loc_383DB8
//   0x383DA4 add     rax, 8
//   0x383DA8 cmp     rcx, rax
//   0x383DAB jnz     short loc_383D90
//   0x383DAD xor     eax, eax
//   0x383DAF pop     rbx
//   0x383DB0 retn
//   0x383DB1 align 8
//   0x383DB8 mov     rcx, cs:callui_ptr
//   0x383DBF mov     rsi, [rdx+10h]
//   0x383DC3 mov     edi, 3Ah ; ':'
//   0x383DC8 mov     edx, 9
//   0x383DCD xor     eax, eax
//   0x383DCF call    qword ptr [rcx]
//   0x383DD1 mov     eax, 1
//   0x383DD6 pop     rbx
//   0x383DD7 retn
// ============================================================

void sub_383D60(/* signature unknown */)
{
    // see disassembly above
}

