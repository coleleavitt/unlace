// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x3CCC80
// Name:           sub_3CCC80
// Function size:  155 bytes (49 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x3CCC80 mov     rdx, [rdi+10h]
//   0x3CCC84 mov     rsi, [rsi]
//   0x3CCC87 mov     rax, [rdx+828h]
//   0x3CCC8E mov     rdx, [rdx+830h]
//   0x3CCC95 lea     rdx, [rax+rdx*8]
//   0x3CCC99 cmp     rax, rdx
//   0x3CCC9C jz      short loc_3CCD15
//   0x3CCC9E push    rbp
//   0x3CCC9F mov     rbp, rdi
//   0x3CCCA2 push    rbx
//   0x3CCCA3 sub     rsp, 8
//   0x3CCCA7 nop     word ptr [rax+rax+00000000h]
//   0x3CCCB0 mov     rbx, [rax]
//   0x3CCCB3 test    rbx, rbx
//   0x3CCCB6 jz      short loc_3CCCBD
//   0x3CCCB8 cmp     rsi, [rbx]
//   0x3CCCBB jz      short loc_3CCCD8
//   0x3CCCBD add     rax, 8
//   0x3CCCC1 cmp     rdx, rax
//   0x3CCCC4 jnz     short loc_3CCCB0
//   0x3CCCC6 add     rsp, 8
//   0x3CCCCA mov     eax, 7
//   0x3CCCCF pop     rbx
//   0x3CCCD0 pop     rbp
//   0x3CCCD1 retn
//   0x3CCCD2 align 8
//   0x3CCCD8 mov     r9, cs:callui_ptr
//   0x3CCCDF xor     edx, edx
//   0x3CCCE1 xor     r8d, r8d
//   0x3CCCE4 xor     ecx, ecx
//   0x3CCCE6 mov     edi, 38h ; '8'
//   0x3CCCEB xor     eax, eax
//   0x3CCCED call    qword ptr [r9]
//   0x3CCCF0 mov     rdx, rax
//   0x3CCCF3 test    rax, rax
//   0x3CCCF6 jz      short loc_3CCCC6
//   0x3CCCF8 mov     rax, [rbp+0]
//   0x3CCCFC mov     rsi, rbx
//   0x3CCCFF mov     rdi, rbp
//   0x3CCD02 call    qword ptr [rax+20h]
//   0x3CCD05 test    al, al
//   0x3CCD07 jz      short loc_3CCCC6
//   0x3CCD09 add     rsp, 8
//   0x3CCD0D mov     eax, 3
//   0x3CCD12 pop     rbx
//   0x3CCD13 pop     rbp
//   0x3CCD14 retn
//   0x3CCD15 mov     eax, 7
//   0x3CCD1A retn
// ============================================================

void sub_3CCC80(/* signature unknown */)
{
    // see disassembly above
}

