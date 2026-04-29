// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x3B7CC0
// Name:           sub_3B7CC0
// Function size:  241 bytes (63 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x3B7CC0 push    rbp
//   0x3B7CC1 push    rbx
//   0x3B7CC2 sub     rsp, 8
//   0x3B7CC6 mov     dword ptr [rdi+20h], 0
//   0x3B7CCD cmp     dword ptr [rsi+8], 1Bh
//   0x3B7CD1 jz      loc_3B7D70
//   0x3B7CD7 mov     rbp, [rsi]
//   0x3B7CDA mov     rbx, rdi
//   0x3B7CDD mov     rdi, [rdi+10h]
//   0x3B7CE1 mov     rsi, rbp
//   0x3B7CE4 call    sub_384970
//   0x3B7CE9 mov     rdi, rax
//   0x3B7CEC test    rax, rax
//   0x3B7CEF jz      loc_3B7DA0
//   0x3B7CF5 mov     eax, [rbx+18h]
//   0x3B7CF8 test    eax, eax
//   0x3B7CFA jz      short loc_3B7D10
//   0x3B7CFC cmp     eax, 1
//   0x3B7CFF jnz     loc_3B7DAC
//   0x3B7D05 mov     eax, 6
//   0x3B7D0A cmp     rbp, [rdi+8]
//   0x3B7D0E jnz     short loc_3B7D64
//   0x3B7D10 movsxd  rsi, dword ptr [rdi+2Ch]
//   0x3B7D14 mov     edx, 1Fh
//   0x3B7D19 call    sub_386410
//   0x3B7D1E lea     rdx, aEditComment; "Edit comment..."
//   0x3B7D25 lea     rcx, aEditFuncCommen; "Edit func comment..."
//   0x3B7D2C mov     r8, cs:callui_ptr
//   0x3B7D33 test    al, 10h
//   0x3B7D35 mov     [rbx+20h], eax
//   0x3B7D38 mov     edi, 8Ch
//   0x3B7D3D lea     rsi, aHxEditcmt; "hx:EditCmt"
//   0x3B7D44 cmovz   rcx, rdx
//   0x3B7D48 test    al, 8
//   0x3B7D4A lea     rax, aEditLvarCommen; "Edit lvar comment..."
//   0x3B7D51 mov     edx, 1
//   0x3B7D56 cmovnz  rcx, rax
//   0x3B7D5A xor     eax, eax
//   0x3B7D5C call    qword ptr [r8]
//   0x3B7D5F mov     eax, 3
//   0x3B7D64 add     rsp, 8
//   0x3B7D68 pop     rbx
//   0x3B7D69 pop     rbp
//   0x3B7D6A retn
//   0x3B7D6B align 10h
//   0x3B7D70 mov     r8, cs:callui_ptr
//   0x3B7D77 lea     rcx, aCopyPseudocode; "Copy pseudocode to disassembly"
//   0x3B7D7E xor     eax, eax
//   0x3B7D80 mov     edx, 1
//   0x3B7D85 lea     rsi, aHxEditcmt; "hx:EditCmt"
//   0x3B7D8C mov     edi, 8Ch
//   0x3B7D91 call    qword ptr [r8]
//   0x3B7D94 add     rsp, 8
//   0x3B7D98 mov     eax, 2
//   0x3B7D9D pop     rbx
//   0x3B7D9E pop     rbp
//   0x3B7D9F retn
//   0x3B7DA0 add     rsp, 8
//   0x3B7DA4 mov     eax, 6
//   0x3B7DA9 pop     rbx
//   0x3B7DAA pop     rbp
//   0x3B7DAB retn
//   0x3B7DAC call    sub_3B5750
// ============================================================

void sub_3B7CC0(/* signature unknown */)
{
    // see disassembly above
}

