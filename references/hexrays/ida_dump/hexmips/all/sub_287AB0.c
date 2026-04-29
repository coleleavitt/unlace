// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x287AB0
// Name:           sub_287AB0
// Function size:  406 bytes (111 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x287AB0 push    r12
//   0x287AB2 mov     r12, rdi
//   0x287AB5 push    rbp
//   0x287AB6 lea     rbp, jpt_287AD4
//   0x287ABD push    rbx
//   0x287ABE mov     rbx, rsi
//   0x287AC1 mov     eax, [rbx+8]
//   0x287AC4 sub     eax, 46h ; 'F'; switch 12 cases
//   0x287AC7 cmp     eax, 0Bh
//   0x287ACA ja      short def_287AD4; jumptable 0000000000287AD4 default case, cases 71,74,76-79
//   0x287ACC movsxd  rax, ss:(jpt_287AD4 - 40FAD4h)[rbp+rax*4]
//   0x287AD1 add     rax, rbp
//   0x287AD4 jmp     rax; switch jump
//   0x287AD6 align 20h
//   0x287AE0 mov     rsi, rbx; jumptable 0000000000287AD4 case 72
//   0x287AE3 mov     rdi, r12
//   0x287AE6 call    sub_287400
//   0x287AEB test    al, al
//   0x287AED jnz     short loc_287AC1
//   0x287AEF nop
//   0x287AF0 xor     eax, eax; jumptable 0000000000287AD4 default case, cases 71,74,76-79
//   0x287AF2 pop     rbx
//   0x287AF3 pop     rbp
//   0x287AF4 pop     r12
//   0x287AF6 retn
//   0x287AF7 align 20h
//   0x287B00 mov     rax, [rbx+18h]; jumptable 0000000000287AD4 case 81
//   0x287B04 mov     rsi, rbx
//   0x287B07 mov     rdi, r12
//   0x287B0A mov     edx, [rax]
//   0x287B0C call    sub_27F620
//   0x287B11 test    al, al
//   0x287B13 jz      loc_287C10
//   0x287B19 mov     rdi, [rbx+18h]
//   0x287B1D test    rdi, rdi
//   0x287B20 jz      short loc_287B27
//   0x287B22 call    j__qfree
//   0x287B27 mov     dword ptr [rbx+8], 4Eh ; 'N'
//   0x287B2E add     dword ptr [r12+54h], 1
//   0x287B34 jmp     short loc_287AC1
//   0x287B36 align 20h
//   0x287B40 mov     rsi, rbx; jumptable 0000000000287AD4 case 80
//   0x287B43 mov     rdi, r12
//   0x287B46 call    sub_2871B0
//   0x287B4B test    al, al
//   0x287B4D jz      loc_287BF0
//   0x287B53 add     dword ptr [r12+54h], 1
//   0x287B59 jmp     loc_287AC1
//   0x287B5E align 20h
//   0x287B60 mov     rsi, rbx; jumptable 0000000000287AD4 case 75
//   0x287B63 mov     rdi, r12
//   0x287B66 call    sub_292D30
//   0x287B6B test    al, al
//   0x287B6D jnz     short loc_287B53
//   0x287B6F mov     rsi, rbx
//   0x287B72 mov     rdi, r12
//   0x287B75 call    sub_2934E0
//   0x287B7A test    al, al
//   0x287B7C jnz     loc_287AC1
//   0x287B82 mov     rsi, rbx
//   0x287B85 mov     rdi, r12
//   0x287B88 call    sub_2925D0
//   0x287B8D test    al, al
//   0x287B8F jz      def_287AD4; jumptable 0000000000287AD4 default case, cases 71,74,76-79
//   0x287B95 jmp     short loc_287B53
//   0x287B97 align 20h
//   0x287BA0 mov     rsi, rbx; jumptable 0000000000287AD4 case 70
//   0x287BA3 mov     rdi, r12
//   0x287BA6 call    sub_286C60
//   0x287BAB pop     rbx
//   0x287BAC pop     rbp
//   0x287BAD movzx   eax, al
//   0x287BB0 pop     r12
//   0x287BB2 retn
//   0x287BB3 align 8
//   0x287BB8 mov     rsi, rbx; jumptable 0000000000287AD4 case 73
//   0x287BBB mov     rdi, r12
//   0x287BBE call    sub_293BE0
//   0x287BC3 test    al, al
//   0x287BC5 jnz     short loc_287B53
//   0x287BC7 mov     rsi, rbx
//   0x287BCA mov     rdi, r12
//   0x287BCD call    sub_283210
//   0x287BD2 test    al, al
//   0x287BD4 jnz     loc_287AC1
//   0x287BDA mov     rsi, rbx
//   0x287BDD mov     rdi, r12
//   0x287BE0 call    sub_283C60
//   0x287BE5 movzx   eax, al
//   0x287BE8 jmp     loc_287AF2
//   0x287BED align 10h
//   0x287BF0 mov     rsi, rbx
//   0x287BF3 mov     rdi, r12
//   0x287BF6 call    sub_2877C0
//   0x287BFB test    al, al
//   0x287BFD jz      def_287AD4; jumptable 0000000000287AD4 default case, cases 71,74,76-79
//   0x287C03 jmp     loc_287AC1
//   0x287C08 align 10h
//   0x287C10 mov     rsi, rbx
//   0x287C13 mov     rdi, r12
//   0x287C16 call    sub_27F740
//   0x287C1B test    al, al
//   0x287C1D jnz     loc_287B53
//   0x287C23 mov     rsi, rbx
//   0x287C26 mov     rdi, r12
//   0x287C29 call    sub_286EC0
//   0x287C2E test    al, al
//   0x287C30 jz      def_287AD4; jumptable 0000000000287AD4 default case, cases 71,74,76-79
//   0x287C36 add     dword ptr [r12+54h], 1
//   0x287C3C mov     eax, 1
//   0x287C41 jmp     loc_287AF2
// ============================================================

void sub_287AB0(/* signature unknown */)
{
    // see disassembly above
}

