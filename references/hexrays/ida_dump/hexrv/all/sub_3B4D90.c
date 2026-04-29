// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x3B4D90
// Name:           sub_3B4D90
// Function size:  104 bytes (27 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x3B4D90 push    rbx
//   0x3B4D91 cmp     rsi, [rdi+0C8h]
//   0x3B4D98 jnb     short loc_3B4DDD
//   0x3B4D9A mov     rax, [rdi+0C0h]
//   0x3B4DA1 lea     rdx, [rsi+rsi*4]
//   0x3B4DA5 lea     rbx, [rax+rdx*8]
//   0x3B4DA9 test    rbx, rbx
//   0x3B4DAC jz      short loc_3B4DDD
//   0x3B4DAE mov     rdi, [rbx]
//   0x3B4DB1 xor     esi, esi
//   0x3B4DB3 call    sub_395DA0
//   0x3B4DB8 mov     rsi, [rbx+8]
//   0x3B4DBC cmp     rsi, 0FFFFFFFFFFFFFFFFh
//   0x3B4DC0 jz      short loc_3B4DDD
//   0x3B4DC2 mov     r8, cs:callui_ptr
//   0x3B4DC9 mov     ecx, 1
//   0x3B4DCE mov     edx, 0FFFFFFFFh
//   0x3B4DD3 xor     eax, eax
//   0x3B4DD5 mov     edi, 73h ; 's'
//   0x3B4DDA call    qword ptr [r8]
//   0x3B4DDD xor     ecx, ecx
//   0x3B4DDF mov     rax, 0FFFFFFFFFFFFFFFFh
//   0x3B4DE6 pop     rbx
//   0x3B4DE7 mov     rsi, 0FFFFFFFF00000000h
//   0x3B4DF1 and     rcx, rsi
//   0x3B4DF4 mov     rdx, rcx
//   0x3B4DF7 retn
// ============================================================

void sub_3B4D90(/* signature unknown */)
{
    // see disassembly above
}

