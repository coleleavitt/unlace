// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x3B4C40
// Name:           sub_3B4C40
// Function size:  104 bytes (27 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x3B4C40 push    rbx
//   0x3B4C41 cmp     rsi, [rdi+0E8h]
//   0x3B4C48 jnb     short loc_3B4C8D
//   0x3B4C4A lea     rax, [rsi+rsi*2]
//   0x3B4C4E shl     rax, 4
//   0x3B4C52 add     rax, [rdi+0E0h]
//   0x3B4C59 mov     rbx, rax
//   0x3B4C5C jz      short loc_3B4C8D
//   0x3B4C5E mov     rdi, [rax]
//   0x3B4C61 xor     esi, esi
//   0x3B4C63 call    sub_395DA0
//   0x3B4C68 mov     rsi, [rbx+8]
//   0x3B4C6C cmp     rsi, 0FFFFFFFFFFFFFFFFh
//   0x3B4C70 jz      short loc_3B4C8D
//   0x3B4C72 mov     r8, cs:callui_ptr
//   0x3B4C79 mov     ecx, 1
//   0x3B4C7E mov     edx, 0FFFFFFFFh
//   0x3B4C83 xor     eax, eax
//   0x3B4C85 mov     edi, 73h ; 's'
//   0x3B4C8A call    qword ptr [r8]
//   0x3B4C8D xor     ecx, ecx
//   0x3B4C8F mov     rax, 0FFFFFFFFFFFFFFFFh
//   0x3B4C96 pop     rbx
//   0x3B4C97 mov     rsi, 0FFFFFFFF00000000h
//   0x3B4CA1 and     rcx, rsi
//   0x3B4CA4 mov     rdx, rcx
//   0x3B4CA7 retn
// ============================================================

void sub_3B4C40(/* signature unknown */)
{
    // see disassembly above
}

