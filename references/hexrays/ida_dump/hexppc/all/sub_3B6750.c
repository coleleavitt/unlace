// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x3B6750
// Name:           sub_3B6750
// Function size:  178 bytes (64 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x3B6750 push    rbp
//   0x3B6751 mov     rbp, rdi
//   0x3B6754 push    rbx
//   0x3B6755 sub     rsp, 8
//   0x3B6759 cmp     dword ptr [rdx+8], 1Bh
//   0x3B675D jz      short loc_3B6780
//   0x3B675F mov     rbx, rsi
//   0x3B6762 test    rsi, rsi
//   0x3B6765 jz      short loc_3B6776
//   0x3B6767 mov     eax, [rdi+20h]
//   0x3B676A test    al, 1
//   0x3B676C jnz     short loc_3B67D8
//   0x3B676E test    al, 10h
//   0x3B6770 jnz     short loc_3B67F0
//   0x3B6772 test    al, 8
//   0x3B6774 jnz     short loc_3B67B8
//   0x3B6776 xor     eax, eax
//   0x3B6778 add     rsp, 8
//   0x3B677C pop     rbx
//   0x3B677D pop     rbp
//   0x3B677E retn
//   0x3B677F align 20h
//   0x3B6780 mov     rbx, cs:callui_ptr
//   0x3B6787 mov     edi, 47h ; 'G'
//   0x3B678C xor     eax, eax
//   0x3B678E call    qword ptr [rbx]
//   0x3B6790 mov     edi, 48h ; 'H'
//   0x3B6795 mov     rsi, rax
//   0x3B6798 xor     eax, eax
//   0x3B679A call    qword ptr [rbx]
//   0x3B679C test    al, al
//   0x3B679E jz      short loc_3B6776
//   0x3B67A0 mov     rdi, [rbp+10h]
//   0x3B67A4 call    sub_39A650
//   0x3B67A9 add     rsp, 8
//   0x3B67AD mov     eax, 1
//   0x3B67B2 pop     rbx
//   0x3B67B3 pop     rbp
//   0x3B67B4 retn
//   0x3B67B5 align 8
//   0x3B67B8 lea     rdi, [rsi+38h]
//   0x3B67BC call    sub_3895A0
//   0x3B67C1 mov     rdi, rbx
//   0x3B67C4 mov     rsi, rax
//   0x3B67C7 call    sub_38B600
//   0x3B67CC movzx   eax, al
//   0x3B67CF jmp     short loc_3B6778
//   0x3B67D1 align 8
//   0x3B67D8 mov     rdi, rbx
//   0x3B67DB lea     rsi, [rsi+70h]
//   0x3B67DF call    sub_38B6F0
//   0x3B67E4 add     rsp, 8
//   0x3B67E8 movzx   eax, al
//   0x3B67EB pop     rbx
//   0x3B67EC pop     rbp
//   0x3B67ED retn
//   0x3B67EE align 10h
//   0x3B67F0 mov     rdi, rsi
//   0x3B67F3 call    sub_38B860
//   0x3B67F8 add     rsp, 8
//   0x3B67FC movzx   eax, al
//   0x3B67FF pop     rbx
//   0x3B6800 pop     rbp
//   0x3B6801 retn
// ============================================================

void sub_3B6750(/* signature unknown */)
{
    // see disassembly above
}

