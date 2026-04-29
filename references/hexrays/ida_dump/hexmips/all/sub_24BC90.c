// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x24BC90
// Name:           sub_24BC90
// Function size:  633 bytes (150 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x24BC90 push    rbp
//   0x24BC91 mov     ebp, ecx
//   0x24BC93 push    rbx
//   0x24BC94 mov     rbx, rdi
//   0x24BC97 sub     rsp, 8
//   0x24BC9B test    rdx, rdx
//   0x24BC9E jz      short loc_24BCE8
//   0x24BCA0 mov     r8d, [rdi+158h]
//   0x24BCA7 lea     eax, [r8+1]
//   0x24BCAB mov     [rdi+158h], eax
//   0x24BCB1 cmp     eax, 3FFh
//   0x24BCB6 jg      loc_47366
//   0x24BCBC mov     rax, [rbx+130h]
//   0x24BCC3 movsxd  rdi, esi
//   0x24BCC6 cmp     dword ptr [rax+rdi*4], 11h; switch 18 cases
//   0x24BCCA ja      def_24BCE1; jumptable 000000000024BCE1 default case
//   0x24BCD0 mov     eax, [rax+rdi*4]
//   0x24BCD3 lea     rcx, jpt_24BCE1
//   0x24BCDA movsxd  rax, ds:(jpt_24BCE1 - 40E284h)[rcx+rax*4]
//   0x24BCDE add     rax, rcx
//   0x24BCE1 jmp     rax; switch jump
//   0x24BCE3 align 8
//   0x24BCE8 test    cl, cl
//   0x24BCEA jz      loc_24BEEF
//   0x24BCF0 call    sub_24B750
//   0x24BCF5 test    rax, rax
//   0x24BCF8 setnz   dl
//   0x24BCFB cmp     bpl, dl
//   0x24BCFE jnz     loc_24BEBB
//   0x24BD04 add     rsp, 8
//   0x24BD08 pop     rbx
//   0x24BD09 pop     rbp
//   0x24BD0A retn
//   0x24BD0B align 10h
//   0x24BD10 mov     rdi, rbx; jumptable 000000000024BCE1 cases 2-4,16,17
//   0x24BD13 call    sub_24CEE0
//   0x24BD18 mov     eax, [rbx+158h]
//   0x24BD1E xor     edx, edx
//   0x24BD20 lea     r8d, [rax-1]
//   0x24BD24 xor     eax, eax
//   0x24BD26 nop     word ptr [rax+rax+00000000h]
//   0x24BD30 mov     [rbx+158h], r8d
//   0x24BD37 jmp     short loc_24BCFB
//   0x24BD39 align 20h
//   0x24BD40 mov     rdi, rbx; jumptable 000000000024BCE1 cases 6-9
//   0x24BD43 call    sub_24BAD0
//   0x24BD48 mov     ecx, [rbx+158h]
//   0x24BD4E test    rax, rax
//   0x24BD51 lea     r8d, [rcx-1]
//   0x24BD55 setnz   dl
//   0x24BD58 jmp     short loc_24BD30
//   0x24BD5A align 20h
//   0x24BD60 mov     rdi, rbx; jumptable 000000000024BCE1 cases 10-12
//   0x24BD63 call    sub_24D2E0
//   0x24BD68 mov     eax, [rbx+158h]
//   0x24BD6E xor     edx, edx
//   0x24BD70 lea     r8d, [rax-1]
//   0x24BD74 xor     eax, eax
//   0x24BD76 jmp     short loc_24BD30
//   0x24BD78 align 20h
//   0x24BD80 mov     rdi, rbx; jumptable 000000000024BCE1 cases 13,14
//   0x24BD83 call    sub_24BF10
//   0x24BD88 mov     eax, [rbx+158h]
//   0x24BD8E xor     edx, edx
//   0x24BD90 lea     r8d, [rax-1]
//   0x24BD94 xor     eax, eax
//   0x24BD96 jmp     short loc_24BD30
//   0x24BD98 align 20h
//   0x24BDA0 mov     rdi, rbx; jumptable 000000000024BCE1 case 5
//   0x24BDA3 call    sub_24C180
//   0x24BDA8 mov     eax, [rbx+158h]
//   0x24BDAE xor     edx, edx
//   0x24BDB0 lea     r8d, [rax-1]
//   0x24BDB4 xor     eax, eax
//   0x24BDB6 jmp     loc_24BD30
//   0x24BDBB align 20h
//   0x24BDC0 mov     rdi, rbx; jumptable 000000000024BCE1 case 15
//   0x24BDC3 call    sub_24CCA0
//   0x24BDC8 mov     eax, [rbx+158h]
//   0x24BDCE xor     edx, edx
//   0x24BDD0 lea     r8d, [rax-1]
//   0x24BDD4 xor     eax, eax
//   0x24BDD6 jmp     loc_24BD30
//   0x24BDDB align 20h
//   0x24BDE0 mov     rax, [rbx+0B0h]; jumptable 000000000024BCE1 case 0
//   0x24BDE7 mov     rax, [rax+8]
//   0x24BDEB cmp     [rax+40h], esi
//   0x24BDEE jg      short loc_24BE58
//   0x24BDF0 mov     rdx, [rbx+0F0h]
//   0x24BDF7 test    rdx, rdx
//   0x24BDFA jz      short loc_24BE12
//   0x24BDFC mov     rax, [rdx]
//   0x24BDFF and     rax, 0FFFFFFFFFFFFFFFCh
//   0x24BE03 jz      loc_24BE89
//   0x24BE09 test    byte ptr [rax], 2
//   0x24BE0C jz      loc_24BE98
//   0x24BE12 mov     rax, cs:under_debugger_ptr
//   0x24BE19 cmp     byte ptr [rax], 0
//   0x24BE1C jnz     loc_47364
//   0x24BE22 mov     edi, 0C4C7h
//   0x24BE27 call    sub_37E160
//   0x24BE2C align 10h
//   0x24BE30 movzx   ecx, bpl; jumptable 000000000024BCE1 case 1
//   0x24BE34 mov     rdi, rbx
//   0x24BE37 call    sub_24CD90
//   0x24BE3C mov     ecx, [rbx+158h]
//   0x24BE42 test    rax, rax
//   0x24BE45 lea     r8d, [rcx-1]
//   0x24BE49 setnz   dl
//   0x24BE4C jmp     loc_24BD30
//   0x24BE51 align 8
//   0x24BE58 mov     rax, [rax+210h]
//   0x24BE5F movzx   ecx, bpl
//   0x24BE63 mov     rsi, [rax+rdi*8]
//   0x24BE67 mov     rdi, rbx
//   0x24BE6A call    sub_24B230
//   0x24BE6F mov     ecx, [rbx+158h]
//   0x24BE75 test    rax, rax
//   0x24BE78 lea     r8d, [rcx-1]
//   0x24BE7C setnz   dl
//   0x24BE7F jmp     loc_24BD30
//   0x24BE84 cmp     rax, rdx
//   0x24BE87 jz      short loc_24BE12
//   0x24BE89 xor     edx, edx
//   0x24BE8B xor     eax, eax
//   0x24BE8D jmp     loc_24BD30
//   0x24BE92 align 8
//   0x24BE98 cmp     [rax+18h], esi
//   0x24BE9B jle     short loc_24BEB0
//   0x24BE9D mov     rax, [rax+8]
//   0x24BEA1 jmp     loc_24BE09
//   0x24BEA6 align 10h
//   0x24BEB0 jge     short loc_24BE84
//   0x24BEB2 mov     rax, [rax+10h]
//   0x24BEB6 jmp     loc_24BE09
//   0x24BEBB mov     rax, cs:under_debugger_ptr
//   0x24BEC2 cmp     byte ptr [rax], 0
//   0x24BEC5 jnz     loc_47364
//   0x24BECB mov     edi, 0C4C9h
//   0x24BED0 call    sub_37E160
//   0x24BED5 mov     rax, cs:under_debugger_ptr; jumptable 000000000024BCE1 default case
//   0x24BEDC cmp     byte ptr [rax], 0
//   0x24BEDF jnz     loc_47364
//   0x24BEE5 mov     edi, 0C4C8h
//   0x24BEEA call    sub_37E160
//   0x24BEEF mov     rax, cs:under_debugger_ptr
//   0x24BEF6 cmp     byte ptr [rax], 0
//   0x24BEF9 jnz     loc_47364
//   0x24BEFF mov     edi, 0C4C6h
//   0x24BF04 call    sub_37E160
// ============================================================

void sub_24BC90(/* signature unknown */)
{
    // see disassembly above
}

