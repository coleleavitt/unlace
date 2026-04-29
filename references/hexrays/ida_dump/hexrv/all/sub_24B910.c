// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x24B910
// Name:           sub_24B910
// Function size:  633 bytes (150 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x24B910 push    rbp
//   0x24B911 mov     ebp, ecx
//   0x24B913 push    rbx
//   0x24B914 mov     rbx, rdi
//   0x24B917 sub     rsp, 8
//   0x24B91B test    rdx, rdx
//   0x24B91E jz      short loc_24B968
//   0x24B920 mov     r8d, [rdi+158h]
//   0x24B927 lea     eax, [r8+1]
//   0x24B92B mov     [rdi+158h], eax
//   0x24B931 cmp     eax, 3FFh
//   0x24B936 jg      loc_47338
//   0x24B93C mov     rax, [rbx+130h]
//   0x24B943 movsxd  rdi, esi
//   0x24B946 cmp     dword ptr [rax+rdi*4], 11h; switch 18 cases
//   0x24B94A ja      def_24B961; jumptable 000000000024B961 default case
//   0x24B950 mov     eax, [rax+rdi*4]
//   0x24B953 lea     rcx, jpt_24B961
//   0x24B95A movsxd  rax, ds:(jpt_24B961 - 4052A4h)[rcx+rax*4]
//   0x24B95E add     rax, rcx
//   0x24B961 jmp     rax; switch jump
//   0x24B963 align 8
//   0x24B968 test    cl, cl
//   0x24B96A jz      loc_24BB6F
//   0x24B970 call    sub_24B3D0
//   0x24B975 test    rax, rax
//   0x24B978 setnz   dl
//   0x24B97B cmp     bpl, dl
//   0x24B97E jnz     loc_24BB3B
//   0x24B984 add     rsp, 8
//   0x24B988 pop     rbx
//   0x24B989 pop     rbp
//   0x24B98A retn
//   0x24B98B align 10h
//   0x24B990 mov     rdi, rbx; jumptable 000000000024B961 cases 2-4,16,17
//   0x24B993 call    sub_24CB60
//   0x24B998 mov     eax, [rbx+158h]
//   0x24B99E xor     edx, edx
//   0x24B9A0 lea     r8d, [rax-1]
//   0x24B9A4 xor     eax, eax
//   0x24B9A6 nop     word ptr [rax+rax+00000000h]
//   0x24B9B0 mov     [rbx+158h], r8d
//   0x24B9B7 jmp     short loc_24B97B
//   0x24B9B9 align 20h
//   0x24B9C0 mov     rdi, rbx; jumptable 000000000024B961 cases 6-9
//   0x24B9C3 call    sub_24B750
//   0x24B9C8 mov     ecx, [rbx+158h]
//   0x24B9CE test    rax, rax
//   0x24B9D1 lea     r8d, [rcx-1]
//   0x24B9D5 setnz   dl
//   0x24B9D8 jmp     short loc_24B9B0
//   0x24B9DA align 20h
//   0x24B9E0 mov     rdi, rbx; jumptable 000000000024B961 cases 10-12
//   0x24B9E3 call    sub_24CF60
//   0x24B9E8 mov     eax, [rbx+158h]
//   0x24B9EE xor     edx, edx
//   0x24B9F0 lea     r8d, [rax-1]
//   0x24B9F4 xor     eax, eax
//   0x24B9F6 jmp     short loc_24B9B0
//   0x24B9F8 align 20h
//   0x24BA00 mov     rdi, rbx; jumptable 000000000024B961 cases 13,14
//   0x24BA03 call    sub_24BB90
//   0x24BA08 mov     eax, [rbx+158h]
//   0x24BA0E xor     edx, edx
//   0x24BA10 lea     r8d, [rax-1]
//   0x24BA14 xor     eax, eax
//   0x24BA16 jmp     short loc_24B9B0
//   0x24BA18 align 20h
//   0x24BA20 mov     rdi, rbx; jumptable 000000000024B961 case 5
//   0x24BA23 call    sub_24BE00
//   0x24BA28 mov     eax, [rbx+158h]
//   0x24BA2E xor     edx, edx
//   0x24BA30 lea     r8d, [rax-1]
//   0x24BA34 xor     eax, eax
//   0x24BA36 jmp     loc_24B9B0
//   0x24BA3B align 20h
//   0x24BA40 mov     rdi, rbx; jumptable 000000000024B961 case 15
//   0x24BA43 call    sub_24C920
//   0x24BA48 mov     eax, [rbx+158h]
//   0x24BA4E xor     edx, edx
//   0x24BA50 lea     r8d, [rax-1]
//   0x24BA54 xor     eax, eax
//   0x24BA56 jmp     loc_24B9B0
//   0x24BA5B align 20h
//   0x24BA60 mov     rax, [rbx+0B0h]; jumptable 000000000024B961 case 0
//   0x24BA67 mov     rax, [rax+8]
//   0x24BA6B cmp     [rax+40h], esi
//   0x24BA6E jg      short loc_24BAD8
//   0x24BA70 mov     rdx, [rbx+0F0h]
//   0x24BA77 test    rdx, rdx
//   0x24BA7A jz      short loc_24BA92
//   0x24BA7C mov     rax, [rdx]
//   0x24BA7F and     rax, 0FFFFFFFFFFFFFFFCh
//   0x24BA83 jz      loc_24BB09
//   0x24BA89 test    byte ptr [rax], 2
//   0x24BA8C jz      loc_24BB18
//   0x24BA92 mov     rax, cs:under_debugger_ptr
//   0x24BA99 cmp     byte ptr [rax], 0
//   0x24BA9C jnz     loc_47336
//   0x24BAA2 mov     edi, 0C4C7h
//   0x24BAA7 call    sub_37DDE0
//   0x24BAAC align 10h
//   0x24BAB0 movzx   ecx, bpl; jumptable 000000000024B961 case 1
//   0x24BAB4 mov     rdi, rbx
//   0x24BAB7 call    sub_24CA10
//   0x24BABC mov     ecx, [rbx+158h]
//   0x24BAC2 test    rax, rax
//   0x24BAC5 lea     r8d, [rcx-1]
//   0x24BAC9 setnz   dl
//   0x24BACC jmp     loc_24B9B0
//   0x24BAD1 align 8
//   0x24BAD8 mov     rax, [rax+210h]
//   0x24BADF movzx   ecx, bpl
//   0x24BAE3 mov     rsi, [rax+rdi*8]
//   0x24BAE7 mov     rdi, rbx
//   0x24BAEA call    sub_24AEB0
//   0x24BAEF mov     ecx, [rbx+158h]
//   0x24BAF5 test    rax, rax
//   0x24BAF8 lea     r8d, [rcx-1]
//   0x24BAFC setnz   dl
//   0x24BAFF jmp     loc_24B9B0
//   0x24BB04 cmp     rax, rdx
//   0x24BB07 jz      short loc_24BA92
//   0x24BB09 xor     edx, edx
//   0x24BB0B xor     eax, eax
//   0x24BB0D jmp     loc_24B9B0
//   0x24BB12 align 8
//   0x24BB18 cmp     [rax+18h], esi
//   0x24BB1B jle     short loc_24BB30
//   0x24BB1D mov     rax, [rax+8]
//   0x24BB21 jmp     loc_24BA89
//   0x24BB26 align 10h
//   0x24BB30 jge     short loc_24BB04
//   0x24BB32 mov     rax, [rax+10h]
//   0x24BB36 jmp     loc_24BA89
//   0x24BB3B mov     rax, cs:under_debugger_ptr
//   0x24BB42 cmp     byte ptr [rax], 0
//   0x24BB45 jnz     loc_47336
//   0x24BB4B mov     edi, 0C4C9h
//   0x24BB50 call    sub_37DDE0
//   0x24BB55 mov     rax, cs:under_debugger_ptr; jumptable 000000000024B961 default case
//   0x24BB5C cmp     byte ptr [rax], 0
//   0x24BB5F jnz     loc_47336
//   0x24BB65 mov     edi, 0C4C8h
//   0x24BB6A call    sub_37DDE0
//   0x24BB6F mov     rax, cs:under_debugger_ptr
//   0x24BB76 cmp     byte ptr [rax], 0
//   0x24BB79 jnz     loc_47336
//   0x24BB7F mov     edi, 0C4C6h
//   0x24BB84 call    sub_37DDE0
// ============================================================

void sub_24B910(/* signature unknown */)
{
    // see disassembly above
}

