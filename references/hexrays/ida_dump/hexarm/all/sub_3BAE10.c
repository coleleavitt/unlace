// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x3BAE10
// Name:           sub_3BAE10
// Function size:  178 bytes (64 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x3BAE10 push    rbp
//   0x3BAE11 mov     rbp, rdi
//   0x3BAE14 push    rbx
//   0x3BAE15 sub     rsp, 8
//   0x3BAE19 cmp     dword ptr [rdx+8], 1Bh
//   0x3BAE1D jz      short loc_3BAE40
//   0x3BAE1F mov     rbx, rsi
//   0x3BAE22 test    rsi, rsi
//   0x3BAE25 jz      short loc_3BAE36
//   0x3BAE27 mov     eax, [rdi+20h]
//   0x3BAE2A test    al, 1
//   0x3BAE2C jnz     short loc_3BAE98
//   0x3BAE2E test    al, 10h
//   0x3BAE30 jnz     short loc_3BAEB0
//   0x3BAE32 test    al, 8
//   0x3BAE34 jnz     short loc_3BAE78
//   0x3BAE36 xor     eax, eax
//   0x3BAE38 add     rsp, 8
//   0x3BAE3C pop     rbx
//   0x3BAE3D pop     rbp
//   0x3BAE3E retn
//   0x3BAE3F align 20h
//   0x3BAE40 mov     rbx, cs:callui_ptr
//   0x3BAE47 mov     edi, 47h ; 'G'
//   0x3BAE4C xor     eax, eax
//   0x3BAE4E call    qword ptr [rbx]
//   0x3BAE50 mov     edi, 48h ; 'H'
//   0x3BAE55 mov     rsi, rax
//   0x3BAE58 xor     eax, eax
//   0x3BAE5A call    qword ptr [rbx]
//   0x3BAE5C test    al, al
//   0x3BAE5E jz      short loc_3BAE36
//   0x3BAE60 mov     rdi, [rbp+10h]
//   0x3BAE64 call    sub_39ED10
//   0x3BAE69 add     rsp, 8
//   0x3BAE6D mov     eax, 1
//   0x3BAE72 pop     rbx
//   0x3BAE73 pop     rbp
//   0x3BAE74 retn
//   0x3BAE75 align 8
//   0x3BAE78 lea     rdi, [rsi+38h]
//   0x3BAE7C call    sub_38DC60
//   0x3BAE81 mov     rdi, rbx
//   0x3BAE84 mov     rsi, rax
//   0x3BAE87 call    sub_38FCC0
//   0x3BAE8C movzx   eax, al
//   0x3BAE8F jmp     short loc_3BAE38
//   0x3BAE91 align 8
//   0x3BAE98 mov     rdi, rbx
//   0x3BAE9B lea     rsi, [rsi+70h]
//   0x3BAE9F call    sub_38FDB0
//   0x3BAEA4 add     rsp, 8
//   0x3BAEA8 movzx   eax, al
//   0x3BAEAB pop     rbx
//   0x3BAEAC pop     rbp
//   0x3BAEAD retn
//   0x3BAEAE align 10h
//   0x3BAEB0 mov     rdi, rsi
//   0x3BAEB3 call    sub_38FF20
//   0x3BAEB8 add     rsp, 8
//   0x3BAEBC movzx   eax, al
//   0x3BAEBF pop     rbx
//   0x3BAEC0 pop     rbp
//   0x3BAEC1 retn
// ============================================================

void sub_3BAE10(/* signature unknown */)
{
    // see disassembly above
}

