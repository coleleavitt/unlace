// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x3B6EC0
// Name:           sub_3B6EC0
// Function size:  241 bytes (63 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x3B6EC0 push    rbp
//   0x3B6EC1 push    rbx
//   0x3B6EC2 sub     rsp, 8
//   0x3B6EC6 mov     dword ptr [rdi+20h], 0
//   0x3B6ECD cmp     dword ptr [rsi+8], 1Bh
//   0x3B6ED1 jz      loc_3B6F70
//   0x3B6ED7 mov     rbp, [rsi]
//   0x3B6EDA mov     rbx, rdi
//   0x3B6EDD mov     rdi, [rdi+10h]
//   0x3B6EE1 mov     rsi, rbp
//   0x3B6EE4 call    sub_383B70
//   0x3B6EE9 mov     rdi, rax
//   0x3B6EEC test    rax, rax
//   0x3B6EEF jz      loc_3B6FA0
//   0x3B6EF5 mov     eax, [rbx+18h]
//   0x3B6EF8 test    eax, eax
//   0x3B6EFA jz      short loc_3B6F10
//   0x3B6EFC cmp     eax, 1
//   0x3B6EFF jnz     loc_3B6FAC
//   0x3B6F05 mov     eax, 6
//   0x3B6F0A cmp     rbp, [rdi+8]
//   0x3B6F0E jnz     short loc_3B6F64
//   0x3B6F10 movsxd  rsi, dword ptr [rdi+2Ch]
//   0x3B6F14 mov     edx, 1Fh
//   0x3B6F19 call    sub_385610
//   0x3B6F1E lea     rdx, aEditComment; "Edit comment..."
//   0x3B6F25 lea     rcx, aEditFuncCommen; "Edit func comment..."
//   0x3B6F2C mov     r8, cs:callui_ptr
//   0x3B6F33 test    al, 10h
//   0x3B6F35 mov     [rbx+20h], eax
//   0x3B6F38 mov     edi, 8Ch
//   0x3B6F3D lea     rsi, aHxEditcmt; "hx:EditCmt"
//   0x3B6F44 cmovz   rcx, rdx
//   0x3B6F48 test    al, 8
//   0x3B6F4A lea     rax, aEditLvarCommen; "Edit lvar comment..."
//   0x3B6F51 mov     edx, 1
//   0x3B6F56 cmovnz  rcx, rax
//   0x3B6F5A xor     eax, eax
//   0x3B6F5C call    qword ptr [r8]
//   0x3B6F5F mov     eax, 3
//   0x3B6F64 add     rsp, 8
//   0x3B6F68 pop     rbx
//   0x3B6F69 pop     rbp
//   0x3B6F6A retn
//   0x3B6F6B align 10h
//   0x3B6F70 mov     r8, cs:callui_ptr
//   0x3B6F77 lea     rcx, aCopyPseudocode; "Copy pseudocode to disassembly"
//   0x3B6F7E xor     eax, eax
//   0x3B6F80 mov     edx, 1
//   0x3B6F85 lea     rsi, aHxEditcmt; "hx:EditCmt"
//   0x3B6F8C mov     edi, 8Ch
//   0x3B6F91 call    qword ptr [r8]
//   0x3B6F94 add     rsp, 8
//   0x3B6F98 mov     eax, 2
//   0x3B6F9D pop     rbx
//   0x3B6F9E pop     rbp
//   0x3B6F9F retn
//   0x3B6FA0 add     rsp, 8
//   0x3B6FA4 mov     eax, 6
//   0x3B6FA9 pop     rbx
//   0x3B6FAA pop     rbp
//   0x3B6FAB retn
//   0x3B6FAC call    sub_3B4950
// ============================================================

void sub_3B6EC0(/* signature unknown */)
{
    // see disassembly above
}

