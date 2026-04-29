// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x3B4CB0
// Name:           sub_3B4CB0
// Function size:  104 bytes (27 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x3B4CB0 push    rbx
//   0x3B4CB1 cmp     rsi, [rdi+0C8h]
//   0x3B4CB8 jnb     short loc_3B4CFD
//   0x3B4CBA lea     rax, [rsi+rsi*2]
//   0x3B4CBE shl     rax, 4
//   0x3B4CC2 add     rax, [rdi+0C0h]
//   0x3B4CC9 mov     rbx, rax
//   0x3B4CCC jz      short loc_3B4CFD
//   0x3B4CCE mov     rdi, [rax]
//   0x3B4CD1 xor     esi, esi
//   0x3B4CD3 call    sub_395DA0
//   0x3B4CD8 mov     rsi, [rbx+8]
//   0x3B4CDC cmp     rsi, 0FFFFFFFFFFFFFFFFh
//   0x3B4CE0 jz      short loc_3B4CFD
//   0x3B4CE2 mov     r8, cs:callui_ptr
//   0x3B4CE9 mov     ecx, 1
//   0x3B4CEE mov     edx, 0FFFFFFFFh
//   0x3B4CF3 xor     eax, eax
//   0x3B4CF5 mov     edi, 73h ; 's'
//   0x3B4CFA call    qword ptr [r8]
//   0x3B4CFD xor     ecx, ecx
//   0x3B4CFF mov     rax, 0FFFFFFFFFFFFFFFFh
//   0x3B4D06 pop     rbx
//   0x3B4D07 mov     rsi, 0FFFFFFFF00000000h
//   0x3B4D11 and     rcx, rsi
//   0x3B4D14 mov     rdx, rcx
//   0x3B4D17 retn
// ============================================================

void sub_3B4CB0(/* signature unknown */)
{
    // see disassembly above
}

