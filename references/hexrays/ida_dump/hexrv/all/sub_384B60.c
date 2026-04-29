// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x384B60
// Name:           sub_384B60
// Function size:  120 bytes (35 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x384B60 lea     rax, dword_4C1BB8
//   0x384B67 push    rbx
//   0x384B68 mov     rbx, rdi
//   0x384B6B mov     edi, [rax]
//   0x384B6D call    _get_module_data
//   0x384B72 mov     rdx, [rax+3F0h]
//   0x384B79 mov     rax, [rdx+28h]
//   0x384B7D mov     rdx, [rdx+30h]
//   0x384B81 lea     rcx, [rax+rdx*8]
//   0x384B85 cmp     rax, rcx
//   0x384B88 jz      short loc_384BAD
//   0x384B8A nop     word ptr [rax+rax+00h]
//   0x384B90 mov     rdx, [rax]
//   0x384B93 test    rdx, rdx
//   0x384B96 jz      short loc_384BA4
//   0x384B98 cmp     rbx, [rdx+8]
//   0x384B9C jz      short loc_384BB8
//   0x384B9E cmp     rbx, [rdx+10h]
//   0x384BA2 jz      short loc_384BB8
//   0x384BA4 add     rax, 8
//   0x384BA8 cmp     rcx, rax
//   0x384BAB jnz     short loc_384B90
//   0x384BAD xor     eax, eax
//   0x384BAF pop     rbx
//   0x384BB0 retn
//   0x384BB1 align 8
//   0x384BB8 mov     rcx, cs:callui_ptr
//   0x384BBF mov     rsi, [rdx+10h]
//   0x384BC3 mov     edi, 3Ah ; ':'
//   0x384BC8 mov     edx, 9
//   0x384BCD xor     eax, eax
//   0x384BCF call    qword ptr [rcx]
//   0x384BD1 mov     eax, 1
//   0x384BD6 pop     rbx
//   0x384BD7 retn
// ============================================================

void sub_384B60(/* signature unknown */)
{
    // see disassembly above
}

