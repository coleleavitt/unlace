// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x3B59D0
// Name:           sub_3B59D0
// Function size:  178 bytes (64 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x3B59D0 push    rbp
//   0x3B59D1 mov     rbp, rdi
//   0x3B59D4 push    rbx
//   0x3B59D5 sub     rsp, 8
//   0x3B59D9 cmp     dword ptr [rdx+8], 1Bh
//   0x3B59DD jz      short loc_3B5A00
//   0x3B59DF mov     rbx, rsi
//   0x3B59E2 test    rsi, rsi
//   0x3B59E5 jz      short loc_3B59F6
//   0x3B59E7 mov     eax, [rdi+20h]
//   0x3B59EA test    al, 1
//   0x3B59EC jnz     short loc_3B5A58
//   0x3B59EE test    al, 10h
//   0x3B59F0 jnz     short loc_3B5A70
//   0x3B59F2 test    al, 8
//   0x3B59F4 jnz     short loc_3B5A38
//   0x3B59F6 xor     eax, eax
//   0x3B59F8 add     rsp, 8
//   0x3B59FC pop     rbx
//   0x3B59FD pop     rbp
//   0x3B59FE retn
//   0x3B59FF align 20h
//   0x3B5A00 mov     rbx, cs:callui_ptr
//   0x3B5A07 mov     edi, 47h ; 'G'
//   0x3B5A0C xor     eax, eax
//   0x3B5A0E call    qword ptr [rbx]
//   0x3B5A10 mov     edi, 48h ; 'H'
//   0x3B5A15 mov     rsi, rax
//   0x3B5A18 xor     eax, eax
//   0x3B5A1A call    qword ptr [rbx]
//   0x3B5A1C test    al, al
//   0x3B5A1E jz      short loc_3B59F6
//   0x3B5A20 mov     rdi, [rbp+10h]
//   0x3B5A24 call    sub_3998D0
//   0x3B5A29 add     rsp, 8
//   0x3B5A2D mov     eax, 1
//   0x3B5A32 pop     rbx
//   0x3B5A33 pop     rbp
//   0x3B5A34 retn
//   0x3B5A35 align 8
//   0x3B5A38 lea     rdi, [rsi+38h]
//   0x3B5A3C call    sub_388820
//   0x3B5A41 mov     rdi, rbx
//   0x3B5A44 mov     rsi, rax
//   0x3B5A47 call    sub_38A880
//   0x3B5A4C movzx   eax, al
//   0x3B5A4F jmp     short loc_3B59F8
//   0x3B5A51 align 8
//   0x3B5A58 mov     rdi, rbx
//   0x3B5A5B lea     rsi, [rsi+70h]
//   0x3B5A5F call    sub_38A970
//   0x3B5A64 add     rsp, 8
//   0x3B5A68 movzx   eax, al
//   0x3B5A6B pop     rbx
//   0x3B5A6C pop     rbp
//   0x3B5A6D retn
//   0x3B5A6E align 10h
//   0x3B5A70 mov     rdi, rsi
//   0x3B5A73 call    sub_38AAE0
//   0x3B5A78 add     rsp, 8
//   0x3B5A7C movzx   eax, al
//   0x3B5A7F pop     rbx
//   0x3B5A80 pop     rbp
//   0x3B5A81 retn
// ============================================================

void sub_3B59D0(/* signature unknown */)
{
    // see disassembly above
}

