// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x3B9F30
// Name:           sub_3B9F30
// Function size:  104 bytes (27 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x3B9F30 push    rbx
//   0x3B9F31 cmp     rsi, [rdi+0C8h]
//   0x3B9F38 jnb     short loc_3B9F7D
//   0x3B9F3A lea     rax, [rsi+rsi*2]
//   0x3B9F3E shl     rax, 4
//   0x3B9F42 add     rax, [rdi+0C0h]
//   0x3B9F49 mov     rbx, rax
//   0x3B9F4C jz      short loc_3B9F7D
//   0x3B9F4E mov     rdi, [rax]
//   0x3B9F51 xor     esi, esi
//   0x3B9F53 call    sub_39B020
//   0x3B9F58 mov     rsi, [rbx+8]
//   0x3B9F5C cmp     rsi, 0FFFFFFFFFFFFFFFFh
//   0x3B9F60 jz      short loc_3B9F7D
//   0x3B9F62 mov     r8, cs:callui_ptr
//   0x3B9F69 mov     ecx, 1
//   0x3B9F6E mov     edx, 0FFFFFFFFh
//   0x3B9F73 xor     eax, eax
//   0x3B9F75 mov     edi, 73h ; 's'
//   0x3B9F7A call    qword ptr [r8]
//   0x3B9F7D xor     ecx, ecx
//   0x3B9F7F mov     rax, 0FFFFFFFFFFFFFFFFh
//   0x3B9F86 pop     rbx
//   0x3B9F87 mov     rsi, 0FFFFFFFF00000000h
//   0x3B9F91 and     rcx, rsi
//   0x3B9F94 mov     rdx, rcx
//   0x3B9F97 retn
// ============================================================

void sub_3B9F30(/* signature unknown */)
{
    // see disassembly above
}

