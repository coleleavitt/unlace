// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x3B4FC0
// Name:           sub_3B4FC0
// Function size:  104 bytes (27 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x3B4FC0 push    rbx
//   0x3B4FC1 cmp     rsi, [rdi+0E8h]
//   0x3B4FC8 jnb     short loc_3B500D
//   0x3B4FCA lea     rax, [rsi+rsi*2]
//   0x3B4FCE shl     rax, 4
//   0x3B4FD2 add     rax, [rdi+0E0h]
//   0x3B4FD9 mov     rbx, rax
//   0x3B4FDC jz      short loc_3B500D
//   0x3B4FDE mov     rdi, [rax]
//   0x3B4FE1 xor     esi, esi
//   0x3B4FE3 call    sub_396120
//   0x3B4FE8 mov     rsi, [rbx+8]
//   0x3B4FEC cmp     rsi, 0FFFFFFFFFFFFFFFFh
//   0x3B4FF0 jz      short loc_3B500D
//   0x3B4FF2 mov     r8, cs:callui_ptr
//   0x3B4FF9 mov     ecx, 1
//   0x3B4FFE mov     edx, 0FFFFFFFFh
//   0x3B5003 xor     eax, eax
//   0x3B5005 mov     edi, 73h ; 's'
//   0x3B500A call    qword ptr [r8]
//   0x3B500D xor     ecx, ecx
//   0x3B500F mov     rax, 0FFFFFFFFFFFFFFFFh
//   0x3B5016 pop     rbx
//   0x3B5017 mov     rsi, 0FFFFFFFF00000000h
//   0x3B5021 and     rcx, rsi
//   0x3B5024 mov     rdx, rcx
//   0x3B5027 retn
// ============================================================

void sub_3B4FC0(/* signature unknown */)
{
    // see disassembly above
}

