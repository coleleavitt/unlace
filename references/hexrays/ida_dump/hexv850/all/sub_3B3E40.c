// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x3B3E40
// Name:           sub_3B3E40
// Function size:  104 bytes (27 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x3B3E40 push    rbx
//   0x3B3E41 cmp     rsi, [rdi+0E8h]
//   0x3B3E48 jnb     short loc_3B3E8D
//   0x3B3E4A lea     rax, [rsi+rsi*2]
//   0x3B3E4E shl     rax, 4
//   0x3B3E52 add     rax, [rdi+0E0h]
//   0x3B3E59 mov     rbx, rax
//   0x3B3E5C jz      short loc_3B3E8D
//   0x3B3E5E mov     rdi, [rax]
//   0x3B3E61 xor     esi, esi
//   0x3B3E63 call    sub_394FA0
//   0x3B3E68 mov     rsi, [rbx+8]
//   0x3B3E6C cmp     rsi, 0FFFFFFFFFFFFFFFFh
//   0x3B3E70 jz      short loc_3B3E8D
//   0x3B3E72 mov     r8, cs:callui_ptr
//   0x3B3E79 mov     ecx, 1
//   0x3B3E7E mov     edx, 0FFFFFFFFh
//   0x3B3E83 xor     eax, eax
//   0x3B3E85 mov     edi, 73h ; 's'
//   0x3B3E8A call    qword ptr [r8]
//   0x3B3E8D xor     ecx, ecx
//   0x3B3E8F mov     rax, 0FFFFFFFFFFFFFFFFh
//   0x3B3E96 pop     rbx
//   0x3B3E97 mov     rsi, 0FFFFFFFF00000000h
//   0x3B3EA1 and     rcx, rsi
//   0x3B3EA4 mov     rdx, rcx
//   0x3B3EA7 retn
// ============================================================

void sub_3B3E40(/* signature unknown */)
{
    // see disassembly above
}

