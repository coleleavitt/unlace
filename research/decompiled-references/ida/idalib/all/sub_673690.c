// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x673690
// Name:           sub_673690
// Function size:  411 bytes (102 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x673690 push    r13; int
//   0x673692 push    r12; int
//   0x673694 push    rbp; int
//   0x673695 push    rbx; int
//   0x673696 sub     rsp, 48h
//   0x67369A mov     rax, fs:28h
//   0x6736A3 mov     qword ptr [rsp+68h+var_30], rax; int
//   0x6736A8 xor     eax, eax
//   0x6736AA test    sil, 1
//   0x6736AE jnz     short loc_6736D8
//   0x6736B0 mov     r13d, edx
//   0x6736B3 mov     rax, rsi
//   0x6736B6 mov     rdx, [rdi+18h]
//   0x6736BA mov     rbp, rdi
//   0x6736BD neg     rax
//   0x6736C0 mov     rbx, rsi
//   0x6736C3 cmovs   rax, rsi
//   0x6736C7 cmp     [rdx+10h], rax
//   0x6736CB jnb     short loc_673700
//   0x6736CD mov     eax, 0FFFFFFF5h
//   0x6736D2 jmp     short loc_6736DD
//   0x6736D4 align 8
//   0x6736D8 mov     eax, 0FFFFFFFAh
//   0x6736DD mov     rdx, qword ptr [rsp+68h+var_30]
//   0x6736E2 sub     rdx, fs:28h
//   0x6736EB jnz     loc_673816
//   0x6736F1 add     rsp, 48h
//   0x6736F5 pop     rbx
//   0x6736F6 pop     rbp
//   0x6736F7 pop     r12
//   0x6736F9 pop     r13
//   0x6736FB retn
//   0x6736FC align 20h
//   0x673700 test    rsi, rsi
//   0x673703 jnz     short loc_673710
//   0x673705 xor     eax, eax
//   0x673707 jmp     short loc_6736DD
//   0x673709 align 10h
//   0x673710 mov     r12d, ecx
//   0x673713 call    sub_5108B0
//   0x673718 test    al, al
//   0x67371A jnz     loc_6737C0
//   0x673720 add     dword ptr [rbp+320h], 1
//   0x673727 movzx   eax, byte ptr [rbp+0B90h]
//   0x67372E pxor    xmm0, xmm0
//   0x673732 mov     rdi, rbp
//   0x673735 mov     byte ptr [rbp+0B90h], 1
//   0x67373C mov     qword ptr [rsp+68h+var_58], rbp; int
//   0x673741 mov     qword ptr [rsp+68h+var_50], 0; int
//   0x67374A mov     byte ptr [rsp+68h+var_38], 1; int
//   0x67374F mov     byte ptr [rsp+68h+var_38+1], al
//   0x673753 mov     byte ptr [rsp+68h+var_38+2], 0
//   0x673758 movaps  xmmword ptr [rsp+68h+var_48], xmm0; int
//   0x67375D call    sub_681B50
//   0x673762 mov     rax, qword ptr [rsp+68h+var_58]
//   0x673767 mov     rdi, [rax]
//   0x67376A call    sub_5C9D00
//   0x67376F lea     rdi, [rbp+658h]
//   0x673776 call    sub_503DD0
//   0x67377B test    eax, eax
//   0x67377D jnz     short loc_6737A0
//   0x67377F xor     eax, eax
//   0x673781 lea     rdi, [rsp+68h+var_58]
//   0x673786 mov     [rsp+68h+var_5C], eax
//   0x67378A call    sub_66FC30
//   0x67378F mov     eax, [rsp+68h+var_5C]
//   0x673793 jmp     loc_6736DD
//   0x673798 align 20h
//   0x6737A0 lea     rcx, [rsp+68h+var_38+2]
//   0x6737A5 movzx   r9d, r12b
//   0x6737A9 mov     edx, r13d
//   0x6737AC mov     rsi, rbx
//   0x6737AF lea     r8, [rsp+68h+var_50]
//   0x6737B4 mov     rdi, rbp; int
//   0x6737B7 call    sub_672F40
//   0x6737BC jmp     short loc_673781
//   0x6737BE align 20h
//   0x6737C0 xor     esi, esi
//   0x6737C2 mov     rdi, rbp
//   0x6737C5 mov     rcx, 0FFFFFFFFFFFFFFFFh
//   0x6737CC mov     rdx, rbx
//   0x6737CF call    sub_66EA50
//   0x6737D4 mov     rbp, [rbp+0]
//   0x6737D8 mov     esi, 5Dh ; ']'
//   0x6737DD mov     rdi, rbp
//   0x6737E0 call    sub_631AD0
//   0x6737E5 cmp     rax, 0FFFFFFFFFFFFFFFFh
//   0x6737E9 jz      loc_673705
//   0x6737EF mov     rdx, [rbp+688h]
//   0x6737F6 mov     esi, 5Dh ; ']'
//   0x6737FB mov     rdi, rbp
//   0x6737FE mov     rcx, [rdx+18h]
//   0x673802 lea     rdx, [rbx+rax]
//   0x673806 and     rdx, [rcx+10h]
//   0x67380A call    sub_632610
//   0x67380F xor     eax, eax
//   0x673811 jmp     loc_6736DD
//   0x673816 call    ___stack_chk_fail
//   0x67381B mov     rbx, rax
//   0x67381E jmp     loc_2D24C6
//   0x673823 mov     rbx, rax
//   0x673826 jmp     loc_2D24E8
// ============================================================

void sub_673690(/* signature unknown */)
{
    // see disassembly above
}

