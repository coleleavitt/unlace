// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x3B8DC0
// Name:           sub_3B8DC0
// Function size:  241 bytes (63 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x3B8DC0 push    rbp
//   0x3B8DC1 push    rbx
//   0x3B8DC2 sub     rsp, 8
//   0x3B8DC6 mov     dword ptr [rdi+20h], 0
//   0x3B8DCD cmp     dword ptr [rsi+8], 1Bh
//   0x3B8DD1 jz      loc_3B8E70
//   0x3B8DD7 mov     rbp, [rsi]
//   0x3B8DDA mov     rbx, rdi
//   0x3B8DDD mov     rdi, [rdi+10h]
//   0x3B8DE1 mov     rsi, rbp
//   0x3B8DE4 call    sub_385A70
//   0x3B8DE9 mov     rdi, rax
//   0x3B8DEC test    rax, rax
//   0x3B8DEF jz      loc_3B8EA0
//   0x3B8DF5 mov     eax, [rbx+18h]
//   0x3B8DF8 test    eax, eax
//   0x3B8DFA jz      short loc_3B8E10
//   0x3B8DFC cmp     eax, 1
//   0x3B8DFF jnz     loc_3B8EAC
//   0x3B8E05 mov     eax, 6
//   0x3B8E0A cmp     rbp, [rdi+8]
//   0x3B8E0E jnz     short loc_3B8E64
//   0x3B8E10 movsxd  rsi, dword ptr [rdi+2Ch]
//   0x3B8E14 mov     edx, 1Fh
//   0x3B8E19 call    sub_387510
//   0x3B8E1E lea     rdx, aEditComment; "Edit comment..."
//   0x3B8E25 lea     rcx, aEditFuncCommen; "Edit func comment..."
//   0x3B8E2C mov     r8, cs:callui_ptr
//   0x3B8E33 test    al, 10h
//   0x3B8E35 mov     [rbx+20h], eax
//   0x3B8E38 mov     edi, 8Ch
//   0x3B8E3D lea     rsi, aHxEditcmt; "hx:EditCmt"
//   0x3B8E44 cmovz   rcx, rdx
//   0x3B8E48 test    al, 8
//   0x3B8E4A lea     rax, aEditLvarCommen; "Edit lvar comment..."
//   0x3B8E51 mov     edx, 1
//   0x3B8E56 cmovnz  rcx, rax
//   0x3B8E5A xor     eax, eax
//   0x3B8E5C call    qword ptr [r8]
//   0x3B8E5F mov     eax, 3
//   0x3B8E64 add     rsp, 8
//   0x3B8E68 pop     rbx
//   0x3B8E69 pop     rbp
//   0x3B8E6A retn
//   0x3B8E6B align 10h
//   0x3B8E70 mov     r8, cs:callui_ptr
//   0x3B8E77 lea     rcx, aCopyPseudocode; "Copy pseudocode to disassembly"
//   0x3B8E7E xor     eax, eax
//   0x3B8E80 mov     edx, 1
//   0x3B8E85 lea     rsi, aHxEditcmt; "hx:EditCmt"
//   0x3B8E8C mov     edi, 8Ch
//   0x3B8E91 call    qword ptr [r8]
//   0x3B8E94 add     rsp, 8
//   0x3B8E98 mov     eax, 2
//   0x3B8E9D pop     rbx
//   0x3B8E9E pop     rbp
//   0x3B8E9F retn
//   0x3B8EA0 add     rsp, 8
//   0x3B8EA4 mov     eax, 6
//   0x3B8EA9 pop     rbx
//   0x3B8EAA pop     rbp
//   0x3B8EAB retn
//   0x3B8EAC call    sub_3B6850
// ============================================================

void sub_3B8DC0(/* signature unknown */)
{
    // see disassembly above
}

