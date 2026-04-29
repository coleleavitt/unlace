// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x3B5DB0
// Name:           sub_3B5DB0
// Function size:  104 bytes (27 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x3B5DB0 push    rbx
//   0x3B5DB1 cmp     rsi, [rdi+0C8h]
//   0x3B5DB8 jnb     short loc_3B5DFD
//   0x3B5DBA lea     rax, [rsi+rsi*2]
//   0x3B5DBE shl     rax, 4
//   0x3B5DC2 add     rax, [rdi+0C0h]
//   0x3B5DC9 mov     rbx, rax
//   0x3B5DCC jz      short loc_3B5DFD
//   0x3B5DCE mov     rdi, [rax]
//   0x3B5DD1 xor     esi, esi
//   0x3B5DD3 call    sub_396EA0
//   0x3B5DD8 mov     rsi, [rbx+8]
//   0x3B5DDC cmp     rsi, 0FFFFFFFFFFFFFFFFh
//   0x3B5DE0 jz      short loc_3B5DFD
//   0x3B5DE2 mov     r8, cs:callui_ptr
//   0x3B5DE9 mov     ecx, 1
//   0x3B5DEE mov     edx, 0FFFFFFFFh
//   0x3B5DF3 xor     eax, eax
//   0x3B5DF5 mov     edi, 73h ; 's'
//   0x3B5DFA call    qword ptr [r8]
//   0x3B5DFD xor     ecx, ecx
//   0x3B5DFF mov     rax, 0FFFFFFFFFFFFFFFFh
//   0x3B5E06 pop     rbx
//   0x3B5E07 mov     rsi, 0FFFFFFFF00000000h
//   0x3B5E11 and     rcx, rsi
//   0x3B5E14 mov     rdx, rcx
//   0x3B5E17 retn
// ============================================================

void sub_3B5DB0(/* signature unknown */)
{
    // see disassembly above
}

