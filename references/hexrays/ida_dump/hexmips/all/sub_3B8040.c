// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x3B8040
// Name:           sub_3B8040
// Function size:  241 bytes (63 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x3B8040 push    rbp
//   0x3B8041 push    rbx
//   0x3B8042 sub     rsp, 8
//   0x3B8046 mov     dword ptr [rdi+20h], 0
//   0x3B804D cmp     dword ptr [rsi+8], 1Bh
//   0x3B8051 jz      loc_3B80F0
//   0x3B8057 mov     rbp, [rsi]
//   0x3B805A mov     rbx, rdi
//   0x3B805D mov     rdi, [rdi+10h]
//   0x3B8061 mov     rsi, rbp
//   0x3B8064 call    sub_384CF0
//   0x3B8069 mov     rdi, rax
//   0x3B806C test    rax, rax
//   0x3B806F jz      loc_3B8120
//   0x3B8075 mov     eax, [rbx+18h]
//   0x3B8078 test    eax, eax
//   0x3B807A jz      short loc_3B8090
//   0x3B807C cmp     eax, 1
//   0x3B807F jnz     loc_3B812C
//   0x3B8085 mov     eax, 6
//   0x3B808A cmp     rbp, [rdi+8]
//   0x3B808E jnz     short loc_3B80E4
//   0x3B8090 movsxd  rsi, dword ptr [rdi+2Ch]
//   0x3B8094 mov     edx, 1Fh
//   0x3B8099 call    sub_386790
//   0x3B809E lea     rdx, aEditComment; "Edit comment..."
//   0x3B80A5 lea     rcx, aEditFuncCommen; "Edit func comment..."
//   0x3B80AC mov     r8, cs:callui_ptr
//   0x3B80B3 test    al, 10h
//   0x3B80B5 mov     [rbx+20h], eax
//   0x3B80B8 mov     edi, 8Ch
//   0x3B80BD lea     rsi, aHxEditcmt; "hx:EditCmt"
//   0x3B80C4 cmovz   rcx, rdx
//   0x3B80C8 test    al, 8
//   0x3B80CA lea     rax, aEditLvarCommen; "Edit lvar comment..."
//   0x3B80D1 mov     edx, 1
//   0x3B80D6 cmovnz  rcx, rax
//   0x3B80DA xor     eax, eax
//   0x3B80DC call    qword ptr [r8]
//   0x3B80DF mov     eax, 3
//   0x3B80E4 add     rsp, 8
//   0x3B80E8 pop     rbx
//   0x3B80E9 pop     rbp
//   0x3B80EA retn
//   0x3B80EB align 10h
//   0x3B80F0 mov     r8, cs:callui_ptr
//   0x3B80F7 lea     rcx, aCopyPseudocode; "Copy pseudocode to disassembly"
//   0x3B80FE xor     eax, eax
//   0x3B8100 mov     edx, 1
//   0x3B8105 lea     rsi, aHxEditcmt; "hx:EditCmt"
//   0x3B810C mov     edi, 8Ch
//   0x3B8111 call    qword ptr [r8]
//   0x3B8114 add     rsp, 8
//   0x3B8118 mov     eax, 2
//   0x3B811D pop     rbx
//   0x3B811E pop     rbp
//   0x3B811F retn
//   0x3B8120 add     rsp, 8
//   0x3B8124 mov     eax, 6
//   0x3B8129 pop     rbx
//   0x3B812A pop     rbp
//   0x3B812B retn
//   0x3B812C call    sub_3B5AD0
// ============================================================

void sub_3B8040(/* signature unknown */)
{
    // see disassembly above
}

