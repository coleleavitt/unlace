// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x3B5110
// Name:           sub_3B5110
// Function size:  104 bytes (27 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x3B5110 push    rbx
//   0x3B5111 cmp     rsi, [rdi+0C8h]
//   0x3B5118 jnb     short loc_3B515D
//   0x3B511A mov     rax, [rdi+0C0h]
//   0x3B5121 lea     rdx, [rsi+rsi*4]
//   0x3B5125 lea     rbx, [rax+rdx*8]
//   0x3B5129 test    rbx, rbx
//   0x3B512C jz      short loc_3B515D
//   0x3B512E mov     rdi, [rbx]
//   0x3B5131 xor     esi, esi
//   0x3B5133 call    sub_396120
//   0x3B5138 mov     rsi, [rbx+8]
//   0x3B513C cmp     rsi, 0FFFFFFFFFFFFFFFFh
//   0x3B5140 jz      short loc_3B515D
//   0x3B5142 mov     r8, cs:callui_ptr
//   0x3B5149 mov     ecx, 1
//   0x3B514E mov     edx, 0FFFFFFFFh
//   0x3B5153 xor     eax, eax
//   0x3B5155 mov     edi, 73h ; 's'
//   0x3B515A call    qword ptr [r8]
//   0x3B515D xor     ecx, ecx
//   0x3B515F mov     rax, 0FFFFFFFFFFFFFFFFh
//   0x3B5166 pop     rbx
//   0x3B5167 mov     rsi, 0FFFFFFFF00000000h
//   0x3B5171 and     rcx, rsi
//   0x3B5174 mov     rdx, rcx
//   0x3B5177 retn
// ============================================================

void sub_3B5110(/* signature unknown */)
{
    // see disassembly above
}

