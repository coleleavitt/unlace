// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x3B4D20
// Name:           sub_3B4D20
// Function size:  104 bytes (27 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x3B4D20 push    rbx
//   0x3B4D21 cmp     rsi, [rdi+0E8h]
//   0x3B4D28 jnb     short loc_3B4D6D
//   0x3B4D2A mov     rax, [rdi+0E0h]
//   0x3B4D31 lea     rdx, [rsi+rsi*4]
//   0x3B4D35 lea     rbx, [rax+rdx*8]
//   0x3B4D39 test    rbx, rbx
//   0x3B4D3C jz      short loc_3B4D6D
//   0x3B4D3E mov     rdi, [rbx]
//   0x3B4D41 xor     esi, esi
//   0x3B4D43 call    sub_395DA0
//   0x3B4D48 mov     rsi, [rbx+8]
//   0x3B4D4C cmp     rsi, 0FFFFFFFFFFFFFFFFh
//   0x3B4D50 jz      short loc_3B4D6D
//   0x3B4D52 mov     r8, cs:callui_ptr
//   0x3B4D59 mov     ecx, 1
//   0x3B4D5E mov     edx, 0FFFFFFFFh
//   0x3B4D63 xor     eax, eax
//   0x3B4D65 mov     edi, 73h ; 's'
//   0x3B4D6A call    qword ptr [r8]
//   0x3B4D6D xor     ecx, ecx
//   0x3B4D6F mov     rax, 0FFFFFFFFFFFFFFFFh
//   0x3B4D76 pop     rbx
//   0x3B4D77 mov     rsi, 0FFFFFFFF00000000h
//   0x3B4D81 and     rcx, rsi
//   0x3B4D84 mov     rdx, rcx
//   0x3B4D87 retn
// ============================================================

void sub_3B4D20(/* signature unknown */)
{
    // see disassembly above
}

