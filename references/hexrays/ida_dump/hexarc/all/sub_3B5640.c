// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x3B5640
// Name:           sub_3B5640
// Function size:  241 bytes (63 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x3B5640 push    rbp
//   0x3B5641 push    rbx
//   0x3B5642 sub     rsp, 8
//   0x3B5646 mov     dword ptr [rdi+20h], 0
//   0x3B564D cmp     dword ptr [rsi+8], 1Bh
//   0x3B5651 jz      loc_3B56F0
//   0x3B5657 mov     rbp, [rsi]
//   0x3B565A mov     rbx, rdi
//   0x3B565D mov     rdi, [rdi+10h]
//   0x3B5661 mov     rsi, rbp
//   0x3B5664 call    sub_3822F0
//   0x3B5669 mov     rdi, rax
//   0x3B566C test    rax, rax
//   0x3B566F jz      loc_3B5720
//   0x3B5675 mov     eax, [rbx+18h]
//   0x3B5678 test    eax, eax
//   0x3B567A jz      short loc_3B5690
//   0x3B567C cmp     eax, 1
//   0x3B567F jnz     loc_3B572C
//   0x3B5685 mov     eax, 6
//   0x3B568A cmp     rbp, [rdi+8]
//   0x3B568E jnz     short loc_3B56E4
//   0x3B5690 movsxd  rsi, dword ptr [rdi+2Ch]
//   0x3B5694 mov     edx, 1Fh
//   0x3B5699 call    sub_383D90
//   0x3B569E lea     rdx, aEditComment; "Edit comment..."
//   0x3B56A5 lea     rcx, aEditFuncCommen; "Edit func comment..."
//   0x3B56AC mov     r8, cs:callui_ptr
//   0x3B56B3 test    al, 10h
//   0x3B56B5 mov     [rbx+20h], eax
//   0x3B56B8 mov     edi, 8Ch
//   0x3B56BD lea     rsi, aHxEditcmt; "hx:EditCmt"
//   0x3B56C4 cmovz   rcx, rdx
//   0x3B56C8 test    al, 8
//   0x3B56CA lea     rax, aEditLvarCommen; "Edit lvar comment..."
//   0x3B56D1 mov     edx, 1
//   0x3B56D6 cmovnz  rcx, rax
//   0x3B56DA xor     eax, eax
//   0x3B56DC call    qword ptr [r8]
//   0x3B56DF mov     eax, 3
//   0x3B56E4 add     rsp, 8
//   0x3B56E8 pop     rbx
//   0x3B56E9 pop     rbp
//   0x3B56EA retn
//   0x3B56EB align 10h
//   0x3B56F0 mov     r8, cs:callui_ptr
//   0x3B56F7 lea     rcx, aCopyPseudocode; "Copy pseudocode to disassembly"
//   0x3B56FE xor     eax, eax
//   0x3B5700 mov     edx, 1
//   0x3B5705 lea     rsi, aHxEditcmt; "hx:EditCmt"
//   0x3B570C mov     edi, 8Ch
//   0x3B5711 call    qword ptr [r8]
//   0x3B5714 add     rsp, 8
//   0x3B5718 mov     eax, 2
//   0x3B571D pop     rbx
//   0x3B571E pop     rbp
//   0x3B571F retn
//   0x3B5720 add     rsp, 8
//   0x3B5724 mov     eax, 6
//   0x3B5729 pop     rbx
//   0x3B572A pop     rbp
//   0x3B572B retn
//   0x3B572C call    sub_3B30D0
// ============================================================

void sub_3B5640(/* signature unknown */)
{
    // see disassembly above
}

