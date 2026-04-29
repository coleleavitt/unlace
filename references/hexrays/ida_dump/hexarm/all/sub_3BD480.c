// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x3BD480
// Name:           sub_3BD480
// Function size:  241 bytes (63 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x3BD480 push    rbp
//   0x3BD481 push    rbx
//   0x3BD482 sub     rsp, 8
//   0x3BD486 mov     dword ptr [rdi+20h], 0
//   0x3BD48D cmp     dword ptr [rsi+8], 1Bh
//   0x3BD491 jz      loc_3BD530
//   0x3BD497 mov     rbp, [rsi]
//   0x3BD49A mov     rbx, rdi
//   0x3BD49D mov     rdi, [rdi+10h]
//   0x3BD4A1 mov     rsi, rbp
//   0x3BD4A4 call    sub_38A130
//   0x3BD4A9 mov     rdi, rax
//   0x3BD4AC test    rax, rax
//   0x3BD4AF jz      loc_3BD560
//   0x3BD4B5 mov     eax, [rbx+18h]
//   0x3BD4B8 test    eax, eax
//   0x3BD4BA jz      short loc_3BD4D0
//   0x3BD4BC cmp     eax, 1
//   0x3BD4BF jnz     loc_3BD56C
//   0x3BD4C5 mov     eax, 6
//   0x3BD4CA cmp     rbp, [rdi+8]
//   0x3BD4CE jnz     short loc_3BD524
//   0x3BD4D0 movsxd  rsi, dword ptr [rdi+2Ch]
//   0x3BD4D4 mov     edx, 1Fh
//   0x3BD4D9 call    sub_38BBD0
//   0x3BD4DE lea     rdx, aEditComment; "Edit comment..."
//   0x3BD4E5 lea     rcx, aEditFuncCommen; "Edit func comment..."
//   0x3BD4EC mov     r8, cs:callui_ptr
//   0x3BD4F3 test    al, 10h
//   0x3BD4F5 mov     [rbx+20h], eax
//   0x3BD4F8 mov     edi, 8Ch
//   0x3BD4FD lea     rsi, aHxEditcmt; "hx:EditCmt"
//   0x3BD504 cmovz   rcx, rdx
//   0x3BD508 test    al, 8
//   0x3BD50A lea     rax, aEditLvarCommen; "Edit lvar comment..."
//   0x3BD511 mov     edx, 1
//   0x3BD516 cmovnz  rcx, rax
//   0x3BD51A xor     eax, eax
//   0x3BD51C call    qword ptr [r8]
//   0x3BD51F mov     eax, 3
//   0x3BD524 add     rsp, 8
//   0x3BD528 pop     rbx
//   0x3BD529 pop     rbp
//   0x3BD52A retn
//   0x3BD52B align 10h
//   0x3BD530 mov     r8, cs:callui_ptr
//   0x3BD537 lea     rcx, aCopyPseudocode; "Copy pseudocode to disassembly"
//   0x3BD53E xor     eax, eax
//   0x3BD540 mov     edx, 1
//   0x3BD545 lea     rsi, aHxEditcmt; "hx:EditCmt"
//   0x3BD54C mov     edi, 8Ch
//   0x3BD551 call    qword ptr [r8]
//   0x3BD554 add     rsp, 8
//   0x3BD558 mov     eax, 2
//   0x3BD55D pop     rbx
//   0x3BD55E pop     rbp
//   0x3BD55F retn
//   0x3BD560 add     rsp, 8
//   0x3BD564 mov     eax, 6
//   0x3BD569 pop     rbx
//   0x3BD56A pop     rbp
//   0x3BD56B retn
//   0x3BD56C call    sub_3BAF10
// ============================================================

void sub_3BD480(/* signature unknown */)
{
    // see disassembly above
}

