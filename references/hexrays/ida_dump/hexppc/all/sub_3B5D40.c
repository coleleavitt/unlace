// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x3B5D40
// Name:           sub_3B5D40
// Function size:  104 bytes (27 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x3B5D40 push    rbx
//   0x3B5D41 cmp     rsi, [rdi+0E8h]
//   0x3B5D48 jnb     short loc_3B5D8D
//   0x3B5D4A lea     rax, [rsi+rsi*2]
//   0x3B5D4E shl     rax, 4
//   0x3B5D52 add     rax, [rdi+0E0h]
//   0x3B5D59 mov     rbx, rax
//   0x3B5D5C jz      short loc_3B5D8D
//   0x3B5D5E mov     rdi, [rax]
//   0x3B5D61 xor     esi, esi
//   0x3B5D63 call    sub_396EA0
//   0x3B5D68 mov     rsi, [rbx+8]
//   0x3B5D6C cmp     rsi, 0FFFFFFFFFFFFFFFFh
//   0x3B5D70 jz      short loc_3B5D8D
//   0x3B5D72 mov     r8, cs:callui_ptr
//   0x3B5D79 mov     ecx, 1
//   0x3B5D7E mov     edx, 0FFFFFFFFh
//   0x3B5D83 xor     eax, eax
//   0x3B5D85 mov     edi, 73h ; 's'
//   0x3B5D8A call    qword ptr [r8]
//   0x3B5D8D xor     ecx, ecx
//   0x3B5D8F mov     rax, 0FFFFFFFFFFFFFFFFh
//   0x3B5D96 pop     rbx
//   0x3B5D97 mov     rsi, 0FFFFFFFF00000000h
//   0x3B5DA1 and     rcx, rsi
//   0x3B5DA4 mov     rdx, rcx
//   0x3B5DA7 retn
// ============================================================

void sub_3B5D40(/* signature unknown */)
{
    // see disassembly above
}

