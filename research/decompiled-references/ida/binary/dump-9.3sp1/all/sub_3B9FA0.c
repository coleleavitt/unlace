// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x3B9FA0
// Name:           sub_3B9FA0
// Function size:  104 bytes (27 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x3B9FA0 push    rbx
//   0x3B9FA1 cmp     rsi, [rdi+0E8h]
//   0x3B9FA8 jnb     short loc_3B9FED
//   0x3B9FAA mov     rax, [rdi+0E0h]
//   0x3B9FB1 lea     rdx, [rsi+rsi*4]
//   0x3B9FB5 lea     rbx, [rax+rdx*8]
//   0x3B9FB9 test    rbx, rbx
//   0x3B9FBC jz      short loc_3B9FED
//   0x3B9FBE mov     rdi, [rbx]
//   0x3B9FC1 xor     esi, esi
//   0x3B9FC3 call    sub_39B020
//   0x3B9FC8 mov     rsi, [rbx+8]
//   0x3B9FCC cmp     rsi, 0FFFFFFFFFFFFFFFFh
//   0x3B9FD0 jz      short loc_3B9FED
//   0x3B9FD2 mov     r8, cs:callui_ptr
//   0x3B9FD9 mov     ecx, 1
//   0x3B9FDE mov     edx, 0FFFFFFFFh
//   0x3B9FE3 xor     eax, eax
//   0x3B9FE5 mov     edi, 73h ; 's'
//   0x3B9FEA call    qword ptr [r8]
//   0x3B9FED xor     ecx, ecx
//   0x3B9FEF mov     rax, 0FFFFFFFFFFFFFFFFh
//   0x3B9FF6 pop     rbx
//   0x3B9FF7 mov     rsi, 0FFFFFFFF00000000h
//   0x3BA001 and     rcx, rsi
//   0x3BA004 mov     rdx, rcx
//   0x3BA007 retn
// ============================================================

void sub_3B9FA0(/* signature unknown */)
{
    // see disassembly above
}

