// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x385C60
// Name:           sub_385C60
// Function size:  120 bytes (35 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x385C60 lea     rax, dword_4DC8D8
//   0x385C67 push    rbx
//   0x385C68 mov     rbx, rdi
//   0x385C6B mov     edi, [rax]
//   0x385C6D call    _get_module_data
//   0x385C72 mov     rdx, [rax+3F0h]
//   0x385C79 mov     rax, [rdx+28h]
//   0x385C7D mov     rdx, [rdx+30h]
//   0x385C81 lea     rcx, [rax+rdx*8]
//   0x385C85 cmp     rax, rcx
//   0x385C88 jz      short loc_385CAD
//   0x385C8A nop     word ptr [rax+rax+00h]
//   0x385C90 mov     rdx, [rax]
//   0x385C93 test    rdx, rdx
//   0x385C96 jz      short loc_385CA4
//   0x385C98 cmp     rbx, [rdx+8]
//   0x385C9C jz      short loc_385CB8
//   0x385C9E cmp     rbx, [rdx+10h]
//   0x385CA2 jz      short loc_385CB8
//   0x385CA4 add     rax, 8
//   0x385CA8 cmp     rcx, rax
//   0x385CAB jnz     short loc_385C90
//   0x385CAD xor     eax, eax
//   0x385CAF pop     rbx
//   0x385CB0 retn
//   0x385CB1 align 8
//   0x385CB8 mov     rcx, cs:callui_ptr
//   0x385CBF mov     rsi, [rdx+10h]
//   0x385CC3 mov     edi, 3Ah ; ':'
//   0x385CC8 mov     edx, 9
//   0x385CCD xor     eax, eax
//   0x385CCF call    qword ptr [rcx]
//   0x385CD1 mov     eax, 1
//   0x385CD6 pop     rbx
//   0x385CD7 retn
// ============================================================

void sub_385C60(/* signature unknown */)
{
    // see disassembly above
}

