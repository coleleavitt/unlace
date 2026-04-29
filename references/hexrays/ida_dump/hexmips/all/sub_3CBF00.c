// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x3CBF00
// Name:           sub_3CBF00
// Function size:  155 bytes (49 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x3CBF00 mov     rdx, [rdi+10h]
//   0x3CBF04 mov     rsi, [rsi]
//   0x3CBF07 mov     rax, [rdx+828h]
//   0x3CBF0E mov     rdx, [rdx+830h]
//   0x3CBF15 lea     rdx, [rax+rdx*8]
//   0x3CBF19 cmp     rax, rdx
//   0x3CBF1C jz      short loc_3CBF95
//   0x3CBF1E push    rbp
//   0x3CBF1F mov     rbp, rdi
//   0x3CBF22 push    rbx
//   0x3CBF23 sub     rsp, 8
//   0x3CBF27 nop     word ptr [rax+rax+00000000h]
//   0x3CBF30 mov     rbx, [rax]
//   0x3CBF33 test    rbx, rbx
//   0x3CBF36 jz      short loc_3CBF3D
//   0x3CBF38 cmp     rsi, [rbx]
//   0x3CBF3B jz      short loc_3CBF58
//   0x3CBF3D add     rax, 8
//   0x3CBF41 cmp     rdx, rax
//   0x3CBF44 jnz     short loc_3CBF30
//   0x3CBF46 add     rsp, 8
//   0x3CBF4A mov     eax, 7
//   0x3CBF4F pop     rbx
//   0x3CBF50 pop     rbp
//   0x3CBF51 retn
//   0x3CBF52 align 8
//   0x3CBF58 mov     r9, cs:callui_ptr
//   0x3CBF5F xor     edx, edx
//   0x3CBF61 xor     r8d, r8d
//   0x3CBF64 xor     ecx, ecx
//   0x3CBF66 mov     edi, 38h ; '8'
//   0x3CBF6B xor     eax, eax
//   0x3CBF6D call    qword ptr [r9]
//   0x3CBF70 mov     rdx, rax
//   0x3CBF73 test    rax, rax
//   0x3CBF76 jz      short loc_3CBF46
//   0x3CBF78 mov     rax, [rbp+0]
//   0x3CBF7C mov     rsi, rbx
//   0x3CBF7F mov     rdi, rbp
//   0x3CBF82 call    qword ptr [rax+20h]
//   0x3CBF85 test    al, al
//   0x3CBF87 jz      short loc_3CBF46
//   0x3CBF89 add     rsp, 8
//   0x3CBF8D mov     eax, 3
//   0x3CBF92 pop     rbx
//   0x3CBF93 pop     rbp
//   0x3CBF94 retn
//   0x3CBF95 mov     eax, 7
//   0x3CBF9A retn
// ============================================================

void sub_3CBF00(/* signature unknown */)
{
    // see disassembly above
}

