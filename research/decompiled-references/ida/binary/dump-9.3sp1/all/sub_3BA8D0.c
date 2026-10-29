// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x3BA8D0
// Name:           sub_3BA8D0
// Function size:  178 bytes (64 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x3BA8D0 push    rbp
//   0x3BA8D1 mov     rbp, rdi
//   0x3BA8D4 push    rbx
//   0x3BA8D5 sub     rsp, 8
//   0x3BA8D9 cmp     dword ptr [rdx+8], 1Bh
//   0x3BA8DD jz      short loc_3BA900
//   0x3BA8DF mov     rbx, rsi
//   0x3BA8E2 test    rsi, rsi
//   0x3BA8E5 jz      short loc_3BA8F6
//   0x3BA8E7 mov     eax, [rdi+20h]
//   0x3BA8EA test    al, 1
//   0x3BA8EC jnz     short loc_3BA958
//   0x3BA8EE test    al, 10h
//   0x3BA8F0 jnz     short loc_3BA970
//   0x3BA8F2 test    al, 8
//   0x3BA8F4 jnz     short loc_3BA938
//   0x3BA8F6 xor     eax, eax
//   0x3BA8F8 add     rsp, 8
//   0x3BA8FC pop     rbx
//   0x3BA8FD pop     rbp
//   0x3BA8FE retn
//   0x3BA8FF align 20h
//   0x3BA900 mov     rbx, cs:callui_ptr
//   0x3BA907 mov     edi, 47h ; 'G'
//   0x3BA90C xor     eax, eax
//   0x3BA90E call    qword ptr [rbx]
//   0x3BA910 mov     edi, 48h ; 'H'
//   0x3BA915 mov     rsi, rax
//   0x3BA918 xor     eax, eax
//   0x3BA91A call    qword ptr [rbx]
//   0x3BA91C test    al, al
//   0x3BA91E jz      short loc_3BA8F6
//   0x3BA920 mov     rdi, [rbp+10h]
//   0x3BA924 call    sub_39E7D0
//   0x3BA929 add     rsp, 8
//   0x3BA92D mov     eax, 1
//   0x3BA932 pop     rbx
//   0x3BA933 pop     rbp
//   0x3BA934 retn
//   0x3BA935 align 8
//   0x3BA938 lea     rdi, [rsi+38h]
//   0x3BA93C call    sub_38D720
//   0x3BA941 mov     rdi, rbx
//   0x3BA944 mov     rsi, rax
//   0x3BA947 call    sub_38F780
//   0x3BA94C movzx   eax, al
//   0x3BA94F jmp     short loc_3BA8F8
//   0x3BA951 align 8
//   0x3BA958 mov     rdi, rbx
//   0x3BA95B lea     rsi, [rsi+70h]
//   0x3BA95F call    sub_38F870
//   0x3BA964 add     rsp, 8
//   0x3BA968 movzx   eax, al
//   0x3BA96B pop     rbx
//   0x3BA96C pop     rbp
//   0x3BA96D retn
//   0x3BA96E align 10h
//   0x3BA970 mov     rdi, rsi
//   0x3BA973 call    sub_38F9E0
//   0x3BA978 add     rsp, 8
//   0x3BA97C movzx   eax, al
//   0x3BA97F pop     rbx
//   0x3BA980 pop     rbp
//   0x3BA981 retn
// ============================================================

void sub_3BA8D0(/* signature unknown */)
{
    // see disassembly above
}

