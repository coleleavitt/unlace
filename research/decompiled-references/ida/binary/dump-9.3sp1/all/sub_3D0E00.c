// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x3D0E00
// Name:           sub_3D0E00
// Function size:  155 bytes (49 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x3D0E00 mov     rdx, [rdi+10h]
//   0x3D0E04 mov     rsi, [rsi]
//   0x3D0E07 mov     rax, [rdx+828h]
//   0x3D0E0E mov     rdx, [rdx+830h]
//   0x3D0E15 lea     rdx, [rax+rdx*8]
//   0x3D0E19 cmp     rax, rdx
//   0x3D0E1C jz      short loc_3D0E95
//   0x3D0E1E push    rbp
//   0x3D0E1F mov     rbp, rdi
//   0x3D0E22 push    rbx
//   0x3D0E23 sub     rsp, 8
//   0x3D0E27 nop     word ptr [rax+rax+00000000h]
//   0x3D0E30 mov     rbx, [rax]
//   0x3D0E33 test    rbx, rbx
//   0x3D0E36 jz      short loc_3D0E3D
//   0x3D0E38 cmp     rsi, [rbx]
//   0x3D0E3B jz      short loc_3D0E58
//   0x3D0E3D add     rax, 8
//   0x3D0E41 cmp     rdx, rax
//   0x3D0E44 jnz     short loc_3D0E30
//   0x3D0E46 add     rsp, 8
//   0x3D0E4A mov     eax, 7
//   0x3D0E4F pop     rbx
//   0x3D0E50 pop     rbp
//   0x3D0E51 retn
//   0x3D0E52 align 8
//   0x3D0E58 mov     r9, cs:callui_ptr
//   0x3D0E5F xor     edx, edx
//   0x3D0E61 xor     r8d, r8d
//   0x3D0E64 xor     ecx, ecx
//   0x3D0E66 mov     edi, 38h ; '8'
//   0x3D0E6B xor     eax, eax
//   0x3D0E6D call    qword ptr [r9]
//   0x3D0E70 mov     rdx, rax
//   0x3D0E73 test    rax, rax
//   0x3D0E76 jz      short loc_3D0E46
//   0x3D0E78 mov     rax, [rbp+0]
//   0x3D0E7C mov     rsi, rbx
//   0x3D0E7F mov     rdi, rbp
//   0x3D0E82 call    qword ptr [rax+20h]
//   0x3D0E85 test    al, al
//   0x3D0E87 jz      short loc_3D0E46
//   0x3D0E89 add     rsp, 8
//   0x3D0E8D mov     eax, 3
//   0x3D0E92 pop     rbx
//   0x3D0E93 pop     rbp
//   0x3D0E94 retn
//   0x3D0E95 mov     eax, 7
//   0x3D0E9A retn
// ============================================================

void sub_3D0E00(/* signature unknown */)
{
    // see disassembly above
}

