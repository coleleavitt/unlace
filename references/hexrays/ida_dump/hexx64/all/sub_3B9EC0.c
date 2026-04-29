// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x3B9EC0
// Name:           sub_3B9EC0
// Function size:  104 bytes (27 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x3B9EC0 push    rbx
//   0x3B9EC1 cmp     rsi, [rdi+0E8h]
//   0x3B9EC8 jnb     short loc_3B9F0D
//   0x3B9ECA lea     rax, [rsi+rsi*2]
//   0x3B9ECE shl     rax, 4
//   0x3B9ED2 add     rax, [rdi+0E0h]
//   0x3B9ED9 mov     rbx, rax
//   0x3B9EDC jz      short loc_3B9F0D
//   0x3B9EDE mov     rdi, [rax]
//   0x3B9EE1 xor     esi, esi
//   0x3B9EE3 call    sub_39B020
//   0x3B9EE8 mov     rsi, [rbx+8]
//   0x3B9EEC cmp     rsi, 0FFFFFFFFFFFFFFFFh
//   0x3B9EF0 jz      short loc_3B9F0D
//   0x3B9EF2 mov     r8, cs:callui_ptr
//   0x3B9EF9 mov     ecx, 1
//   0x3B9EFE mov     edx, 0FFFFFFFFh
//   0x3B9F03 xor     eax, eax
//   0x3B9F05 mov     edi, 73h ; 's'
//   0x3B9F0A call    qword ptr [r8]
//   0x3B9F0D xor     ecx, ecx
//   0x3B9F0F mov     rax, 0FFFFFFFFFFFFFFFFh
//   0x3B9F16 pop     rbx
//   0x3B9F17 mov     rsi, 0FFFFFFFF00000000h
//   0x3B9F21 and     rcx, rsi
//   0x3B9F24 mov     rdx, rcx
//   0x3B9F27 retn
// ============================================================

void sub_3B9EC0(/* signature unknown */)
{
    // see disassembly above
}

