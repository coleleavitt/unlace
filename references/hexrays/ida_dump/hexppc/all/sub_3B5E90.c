// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x3B5E90
// Name:           sub_3B5E90
// Function size:  104 bytes (27 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x3B5E90 push    rbx
//   0x3B5E91 cmp     rsi, [rdi+0C8h]
//   0x3B5E98 jnb     short loc_3B5EDD
//   0x3B5E9A mov     rax, [rdi+0C0h]
//   0x3B5EA1 lea     rdx, [rsi+rsi*4]
//   0x3B5EA5 lea     rbx, [rax+rdx*8]
//   0x3B5EA9 test    rbx, rbx
//   0x3B5EAC jz      short loc_3B5EDD
//   0x3B5EAE mov     rdi, [rbx]
//   0x3B5EB1 xor     esi, esi
//   0x3B5EB3 call    sub_396EA0
//   0x3B5EB8 mov     rsi, [rbx+8]
//   0x3B5EBC cmp     rsi, 0FFFFFFFFFFFFFFFFh
//   0x3B5EC0 jz      short loc_3B5EDD
//   0x3B5EC2 mov     r8, cs:callui_ptr
//   0x3B5EC9 mov     ecx, 1
//   0x3B5ECE mov     edx, 0FFFFFFFFh
//   0x3B5ED3 xor     eax, eax
//   0x3B5ED5 mov     edi, 73h ; 's'
//   0x3B5EDA call    qword ptr [r8]
//   0x3B5EDD xor     ecx, ecx
//   0x3B5EDF mov     rax, 0FFFFFFFFFFFFFFFFh
//   0x3B5EE6 pop     rbx
//   0x3B5EE7 mov     rsi, 0FFFFFFFF00000000h
//   0x3B5EF1 and     rcx, rsi
//   0x3B5EF4 mov     rdx, rcx
//   0x3B5EF7 retn
// ============================================================

void sub_3B5E90(/* signature unknown */)
{
    // see disassembly above
}

