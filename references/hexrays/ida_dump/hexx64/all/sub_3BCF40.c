// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x3BCF40
// Name:           sub_3BCF40
// Function size:  241 bytes (63 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x3BCF40 push    rbp
//   0x3BCF41 push    rbx
//   0x3BCF42 sub     rsp, 8
//   0x3BCF46 mov     dword ptr [rdi+20h], 0
//   0x3BCF4D cmp     dword ptr [rsi+8], 1Bh
//   0x3BCF51 jz      loc_3BCFF0
//   0x3BCF57 mov     rbp, [rsi]
//   0x3BCF5A mov     rbx, rdi
//   0x3BCF5D mov     rdi, [rdi+10h]
//   0x3BCF61 mov     rsi, rbp
//   0x3BCF64 call    sub_389BF0
//   0x3BCF69 mov     rdi, rax
//   0x3BCF6C test    rax, rax
//   0x3BCF6F jz      loc_3BD020
//   0x3BCF75 mov     eax, [rbx+18h]
//   0x3BCF78 test    eax, eax
//   0x3BCF7A jz      short loc_3BCF90
//   0x3BCF7C cmp     eax, 1
//   0x3BCF7F jnz     loc_3BD02C
//   0x3BCF85 mov     eax, 6
//   0x3BCF8A cmp     rbp, [rdi+8]
//   0x3BCF8E jnz     short loc_3BCFE4
//   0x3BCF90 movsxd  rsi, dword ptr [rdi+2Ch]
//   0x3BCF94 mov     edx, 1Fh
//   0x3BCF99 call    sub_38B690
//   0x3BCF9E lea     rdx, aEditComment; "Edit comment..."
//   0x3BCFA5 lea     rcx, aEditFuncCommen; "Edit func comment..."
//   0x3BCFAC mov     r8, cs:callui_ptr
//   0x3BCFB3 test    al, 10h
//   0x3BCFB5 mov     [rbx+20h], eax
//   0x3BCFB8 mov     edi, 8Ch
//   0x3BCFBD lea     rsi, aHxEditcmt; "hx:EditCmt"
//   0x3BCFC4 cmovz   rcx, rdx
//   0x3BCFC8 test    al, 8
//   0x3BCFCA lea     rax, aEditLvarCommen; "Edit lvar comment..."
//   0x3BCFD1 mov     edx, 1
//   0x3BCFD6 cmovnz  rcx, rax
//   0x3BCFDA xor     eax, eax
//   0x3BCFDC call    qword ptr [r8]
//   0x3BCFDF mov     eax, 3
//   0x3BCFE4 add     rsp, 8
//   0x3BCFE8 pop     rbx
//   0x3BCFE9 pop     rbp
//   0x3BCFEA retn
//   0x3BCFEB align 10h
//   0x3BCFF0 mov     r8, cs:callui_ptr
//   0x3BCFF7 lea     rcx, aCopyPseudocode; "Copy pseudocode to disassembly"
//   0x3BCFFE xor     eax, eax
//   0x3BD000 mov     edx, 1
//   0x3BD005 lea     rsi, aHxEditcmt; "hx:EditCmt"
//   0x3BD00C mov     edi, 8Ch
//   0x3BD011 call    qword ptr [r8]
//   0x3BD014 add     rsp, 8
//   0x3BD018 mov     eax, 2
//   0x3BD01D pop     rbx
//   0x3BD01E pop     rbp
//   0x3BD01F retn
//   0x3BD020 add     rsp, 8
//   0x3BD024 mov     eax, 6
//   0x3BD029 pop     rbx
//   0x3BD02A pop     rbp
//   0x3BD02B retn
//   0x3BD02C call    sub_3BA9D0
// ============================================================

void sub_3BCF40(/* signature unknown */)
{
    // see disassembly above
}

