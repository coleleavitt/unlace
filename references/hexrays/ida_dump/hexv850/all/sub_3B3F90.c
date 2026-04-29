// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x3B3F90
// Name:           sub_3B3F90
// Function size:  104 bytes (27 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x3B3F90 push    rbx
//   0x3B3F91 cmp     rsi, [rdi+0C8h]
//   0x3B3F98 jnb     short loc_3B3FDD
//   0x3B3F9A mov     rax, [rdi+0C0h]
//   0x3B3FA1 lea     rdx, [rsi+rsi*4]
//   0x3B3FA5 lea     rbx, [rax+rdx*8]
//   0x3B3FA9 test    rbx, rbx
//   0x3B3FAC jz      short loc_3B3FDD
//   0x3B3FAE mov     rdi, [rbx]
//   0x3B3FB1 xor     esi, esi
//   0x3B3FB3 call    sub_394FA0
//   0x3B3FB8 mov     rsi, [rbx+8]
//   0x3B3FBC cmp     rsi, 0FFFFFFFFFFFFFFFFh
//   0x3B3FC0 jz      short loc_3B3FDD
//   0x3B3FC2 mov     r8, cs:callui_ptr
//   0x3B3FC9 mov     ecx, 1
//   0x3B3FCE mov     edx, 0FFFFFFFFh
//   0x3B3FD3 xor     eax, eax
//   0x3B3FD5 mov     edi, 73h ; 's'
//   0x3B3FDA call    qword ptr [r8]
//   0x3B3FDD xor     ecx, ecx
//   0x3B3FDF mov     rax, 0FFFFFFFFFFFFFFFFh
//   0x3B3FE6 pop     rbx
//   0x3B3FE7 mov     rsi, 0FFFFFFFF00000000h
//   0x3B3FF1 and     rcx, rsi
//   0x3B3FF4 mov     rdx, rcx
//   0x3B3FF7 retn
// ============================================================

void sub_3B3F90(/* signature unknown */)
{
    // see disassembly above
}

