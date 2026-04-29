// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x24C890
// Name:           sub_24C890
// Function size:  633 bytes (150 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x24C890 push    rbp
//   0x24C891 mov     ebp, ecx
//   0x24C893 push    rbx
//   0x24C894 mov     rbx, rdi
//   0x24C897 sub     rsp, 8
//   0x24C89B test    rdx, rdx
//   0x24C89E jz      short loc_24C8E8
//   0x24C8A0 mov     r8d, [rdi+158h]
//   0x24C8A7 lea     eax, [r8+1]
//   0x24C8AB mov     [rdi+158h], eax
//   0x24C8B1 cmp     eax, 3FFh
//   0x24C8B6 jg      loc_4739C
//   0x24C8BC mov     rax, [rbx+130h]
//   0x24C8C3 movsxd  rdi, esi
//   0x24C8C6 cmp     dword ptr [rax+rdi*4], 11h; switch 18 cases
//   0x24C8CA ja      def_24C8E1; jumptable 000000000024C8E1 default case
//   0x24C8D0 mov     eax, [rax+rdi*4]
//   0x24C8D3 lea     rcx, jpt_24C8E1
//   0x24C8DA movsxd  rax, ds:(jpt_24C8E1 - 418C24h)[rcx+rax*4]
//   0x24C8DE add     rax, rcx
//   0x24C8E1 jmp     rax; switch jump
//   0x24C8E3 align 8
//   0x24C8E8 test    cl, cl
//   0x24C8EA jz      loc_24CAEF
//   0x24C8F0 call    sub_24C350
//   0x24C8F5 test    rax, rax
//   0x24C8F8 setnz   dl
//   0x24C8FB cmp     bpl, dl
//   0x24C8FE jnz     loc_24CABB
//   0x24C904 add     rsp, 8
//   0x24C908 pop     rbx
//   0x24C909 pop     rbp
//   0x24C90A retn
//   0x24C90B align 10h
//   0x24C910 mov     rdi, rbx; jumptable 000000000024C8E1 cases 2-4,16,17
//   0x24C913 call    sub_24DAE0
//   0x24C918 mov     eax, [rbx+158h]
//   0x24C91E xor     edx, edx
//   0x24C920 lea     r8d, [rax-1]
//   0x24C924 xor     eax, eax
//   0x24C926 nop     word ptr [rax+rax+00000000h]
//   0x24C930 mov     [rbx+158h], r8d
//   0x24C937 jmp     short loc_24C8FB
//   0x24C939 align 20h
//   0x24C940 mov     rdi, rbx; jumptable 000000000024C8E1 cases 6-9
//   0x24C943 call    sub_24C6D0
//   0x24C948 mov     ecx, [rbx+158h]
//   0x24C94E test    rax, rax
//   0x24C951 lea     r8d, [rcx-1]
//   0x24C955 setnz   dl
//   0x24C958 jmp     short loc_24C930
//   0x24C95A align 20h
//   0x24C960 mov     rdi, rbx; jumptable 000000000024C8E1 cases 10-12
//   0x24C963 call    sub_24DEE0
//   0x24C968 mov     eax, [rbx+158h]
//   0x24C96E xor     edx, edx
//   0x24C970 lea     r8d, [rax-1]
//   0x24C974 xor     eax, eax
//   0x24C976 jmp     short loc_24C930
//   0x24C978 align 20h
//   0x24C980 mov     rdi, rbx; jumptable 000000000024C8E1 cases 13,14
//   0x24C983 call    sub_24CB10
//   0x24C988 mov     eax, [rbx+158h]
//   0x24C98E xor     edx, edx
//   0x24C990 lea     r8d, [rax-1]
//   0x24C994 xor     eax, eax
//   0x24C996 jmp     short loc_24C930
//   0x24C998 align 20h
//   0x24C9A0 mov     rdi, rbx; jumptable 000000000024C8E1 case 5
//   0x24C9A3 call    sub_24CD80
//   0x24C9A8 mov     eax, [rbx+158h]
//   0x24C9AE xor     edx, edx
//   0x24C9B0 lea     r8d, [rax-1]
//   0x24C9B4 xor     eax, eax
//   0x24C9B6 jmp     loc_24C930
//   0x24C9BB align 20h
//   0x24C9C0 mov     rdi, rbx; jumptable 000000000024C8E1 case 15
//   0x24C9C3 call    sub_24D8A0
//   0x24C9C8 mov     eax, [rbx+158h]
//   0x24C9CE xor     edx, edx
//   0x24C9D0 lea     r8d, [rax-1]
//   0x24C9D4 xor     eax, eax
//   0x24C9D6 jmp     loc_24C930
//   0x24C9DB align 20h
//   0x24C9E0 mov     rax, [rbx+0B0h]; jumptable 000000000024C8E1 case 0
//   0x24C9E7 mov     rax, [rax+8]
//   0x24C9EB cmp     [rax+40h], esi
//   0x24C9EE jg      short loc_24CA58
//   0x24C9F0 mov     rdx, [rbx+0F0h]
//   0x24C9F7 test    rdx, rdx
//   0x24C9FA jz      short loc_24CA12
//   0x24C9FC mov     rax, [rdx]
//   0x24C9FF and     rax, 0FFFFFFFFFFFFFFFCh
//   0x24CA03 jz      loc_24CA89
//   0x24CA09 test    byte ptr [rax], 2
//   0x24CA0C jz      loc_24CA98
//   0x24CA12 mov     rax, cs:under_debugger_ptr
//   0x24CA19 cmp     byte ptr [rax], 0
//   0x24CA1C jnz     loc_4739A
//   0x24CA22 mov     edi, 0C4C7h
//   0x24CA27 call    sub_37EEE0
//   0x24CA2C align 10h
//   0x24CA30 movzx   ecx, bpl; jumptable 000000000024C8E1 case 1
//   0x24CA34 mov     rdi, rbx
//   0x24CA37 call    sub_24D990
//   0x24CA3C mov     ecx, [rbx+158h]
//   0x24CA42 test    rax, rax
//   0x24CA45 lea     r8d, [rcx-1]
//   0x24CA49 setnz   dl
//   0x24CA4C jmp     loc_24C930
//   0x24CA51 align 8
//   0x24CA58 mov     rax, [rax+210h]
//   0x24CA5F movzx   ecx, bpl
//   0x24CA63 mov     rsi, [rax+rdi*8]
//   0x24CA67 mov     rdi, rbx
//   0x24CA6A call    sub_24BE30
//   0x24CA6F mov     ecx, [rbx+158h]
//   0x24CA75 test    rax, rax
//   0x24CA78 lea     r8d, [rcx-1]
//   0x24CA7C setnz   dl
//   0x24CA7F jmp     loc_24C930
//   0x24CA84 cmp     rax, rdx
//   0x24CA87 jz      short loc_24CA12
//   0x24CA89 xor     edx, edx
//   0x24CA8B xor     eax, eax
//   0x24CA8D jmp     loc_24C930
//   0x24CA92 align 8
//   0x24CA98 cmp     [rax+18h], esi
//   0x24CA9B jle     short loc_24CAB0
//   0x24CA9D mov     rax, [rax+8]
//   0x24CAA1 jmp     loc_24CA09
//   0x24CAA6 align 10h
//   0x24CAB0 jge     short loc_24CA84
//   0x24CAB2 mov     rax, [rax+10h]
//   0x24CAB6 jmp     loc_24CA09
//   0x24CABB mov     rax, cs:under_debugger_ptr
//   0x24CAC2 cmp     byte ptr [rax], 0
//   0x24CAC5 jnz     loc_4739A
//   0x24CACB mov     edi, 0C4C9h
//   0x24CAD0 call    sub_37EEE0
//   0x24CAD5 mov     rax, cs:under_debugger_ptr; jumptable 000000000024C8E1 default case
//   0x24CADC cmp     byte ptr [rax], 0
//   0x24CADF jnz     loc_4739A
//   0x24CAE5 mov     edi, 0C4C8h
//   0x24CAEA call    sub_37EEE0
//   0x24CAEF mov     rax, cs:under_debugger_ptr
//   0x24CAF6 cmp     byte ptr [rax], 0
//   0x24CAF9 jnz     loc_4739A
//   0x24CAFF mov     edi, 0C4C6h
//   0x24CB04 call    sub_37EEE0
// ============================================================

void sub_24C890(/* signature unknown */)
{
    // see disassembly above
}

