// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x3C7A00
// Name:           sub_3C7A00
// Function size:  161 bytes (51 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x3C7A00 push    rbp
//   0x3C7A01 mov     rbp, rsi
//   0x3C7A04 push    rbx
//   0x3C7A05 mov     rbx, rdi
//   0x3C7A08 sub     rsp, 8
//   0x3C7A0C mov     rax, [rsi+40h]
//   0x3C7A10 mov     ecx, [rdi+38h]
//   0x3C7A13 test    rax, rax
//   0x3C7A16 jz      short loc_3C7A2A
//   0x3C7A18 mov     edi, [rax+3Ch]
//   0x3C7A1B lea     edx, [rdi-1]
//   0x3C7A1E cmp     edx, 2
//   0x3C7A21 mov     edx, 0
//   0x3C7A26 cmovnb  rax, rdx
//   0x3C7A2A mov     rdi, [rax+40h]
//   0x3C7A2E mov     edx, ecx
//   0x3C7A30 mov     eax, ecx
//   0x3C7A32 not     edx
//   0x3C7A34 mov     esi, [rdi]
//   0x3C7A36 and     edx, esi
//   0x3C7A38 or      eax, esi
//   0x3C7A3A test    esi, ecx
//   0x3C7A3C cmovnz  eax, edx
//   0x3C7A3F mov     rdx, cs:callui_ptr
//   0x3C7A46 mov     [rdi], eax
//   0x3C7A48 mov     edi, 43h ; 'C'
//   0x3C7A4D mov     rsi, [rbp+0]
//   0x3C7A51 xor     eax, eax
//   0x3C7A53 call    qword ptr [rdx]
//   0x3C7A55 mov     rax, [rbp+40h]
//   0x3C7A59 test    rax, rax
//   0x3C7A5C jz      short loc_3C7A70
//   0x3C7A5E mov     ecx, [rax+3Ch]
//   0x3C7A61 lea     edx, [rcx-1]
//   0x3C7A64 cmp     edx, 2
//   0x3C7A67 mov     edx, 0
//   0x3C7A6C cmovnb  rax, rdx
//   0x3C7A70 mov     rsi, [rax+40h]
//   0x3C7A74 mov     rax, [rbx]
//   0x3C7A77 mov     rdi, rbx
//   0x3C7A7A call    qword ptr [rax+30h]
//   0x3C7A7D mov     rdi, [rbx+30h]
//   0x3C7A81 lea     rcx, aMicrocode; "Microcode"
//   0x3C7A88 mov     esi, 1
//   0x3C7A8D movzx   edx, al
//   0x3C7A90 call    _reg_int_op
//   0x3C7A95 add     rsp, 8
//   0x3C7A99 mov     eax, 1
//   0x3C7A9E pop     rbx
//   0x3C7A9F pop     rbp
//   0x3C7AA0 retn
// ============================================================

void sub_3C7A00(/* signature unknown */)
{
    // see disassembly above
}

