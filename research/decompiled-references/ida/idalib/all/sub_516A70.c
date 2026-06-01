// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x516A70
// Name:           sub_516A70
// Function size:  879 bytes (213 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x516A70 push    r15; int
//   0x516A72 push    r14; int
//   0x516A74 push    r13; int
//   0x516A76 push    r12; int
//   0x516A78 push    rbp; int
//   0x516A79 mov     rbp, rsi
//   0x516A7C push    rbx; int
//   0x516A7D mov     rbx, rdi
//   0x516A80 sub     rsp, 18h
//   0x516A84 mov     r15, [rsi]
//   0x516A87 mov     rax, [rsi+8]
//   0x516A8B mov     r12, fs:28h
//   0x516A94 mov     qword ptr [rsp+48h+var_40], r12; int
//   0x516A99 mov     r12, rcx
//   0x516A9C cmp     r15, rax
//   0x516A9F jnb     loc_516BD0
//   0x516AA5 mov     r13d, edx
//   0x516AA8 cmp     r12, 0FFFFFFFFFFFFFFFFh
//   0x516AAC jnz     loc_516B60
//   0x516AB2 cmp     r15, rax
//   0x516AB5 jnb     loc_516BD0
//   0x516ABB mov     rdx, [rdi+8]
//   0x516ABF test    rdx, rdx
//   0x516AC2 jnz     loc_516C30
//   0x516AC8 mov     r14, [rbx]
//   0x516ACB mov     edx, 1
//   0x516AD0 mov     r9, r14
//   0x516AD3 sub     r14, r9
//   0x516AD6 cmp     [rbx+10h], rdx
//   0x516ADA jb      loc_516C78
//   0x516AE0 mov     r12, [rbx]
//   0x516AE3 mov     rax, [rbx+8]
//   0x516AE7 add     r12, r14
//   0x516AEA lea     rdi, [r12+21h]; dest
//   0x516AEF mov     rsi, r12; src
//   0x516AF2 mov     rdx, rax
//   0x516AF5 shl     rdx, 5
//   0x516AF9 add     rdx, rax
//   0x516AFC sub     rdx, r14; n
//   0x516AFF call    _memmove
//   0x516B04 pxor    xmm0, xmm0
//   0x516B08 mov     qword ptr [r12+10h], 0
//   0x516B11 movups  xmmword ptr [r12], xmm0
//   0x516B16 mov     byte ptr [r12+18h], 0
//   0x516B1C mov     byte ptr [r12+20h], 0
//   0x516B22 add     qword ptr [rbx+8], 1
//   0x516B27 movdqu  xmm0, xmmword ptr [rbp+0]
//   0x516B2C movups  xmmword ptr [r12], xmm0
//   0x516B31 movdqu  xmm0, xmmword ptr [rbp+9]
//   0x516B36 mov     [r12+20h], r13b
//   0x516B3B movups  xmmword ptr [r12+9], xmm0
//   0x516B41 mov     rdx, [rbx+8]
//   0x516B45 mov     rax, rdx
//   0x516B48 shl     rax, 5
//   0x516B4C add     rax, rdx
//   0x516B4F add     rax, [rbx]
//   0x516B52 mov     [rbx+18h], rax
//   0x516B56 jmp     short loc_516BAD
//   0x516B58 align 20h
//   0x516B60 mov     rdi, r15
//   0x516B63 call    _ea2node
//   0x516B68 lea     rcx, aWrongNetodeInd; ": wrong netode index"
//   0x516B6F cmp     r12, rax
//   0x516B72 jz      loc_516CC0
//   0x516B78 mov     rdx, [rbp+8]
//   0x516B7C mov     rsi, [rbp+0]
//   0x516B80 lea     rdi, aSrrangeAADropp; "srrange %a..%a dropped%s\n"
//   0x516B87 xor     eax, eax
//   0x516B89 call    sub_84F5B0
//   0x516B8E mov     rax, [rbx+28h]
//   0x516B92 mov     rsi, [rbx+20h]
//   0x516B96 lea     rdx, [rax+1]
//   0x516B9A cmp     [rbx+30h], rdx
//   0x516B9E jb      loc_516C98
//   0x516BA4 mov     [rsi+rax*8], r12
//   0x516BA8 add     qword ptr [rbx+28h], 1
//   0x516BAD mov     rax, qword ptr [rsp+48h+var_40]
//   0x516BB2 sub     rax, fs:28h
//   0x516BBB jnz     loc_516DDA
//   0x516BC1 add     rsp, 18h
//   0x516BC5 pop     rbx
//   0x516BC6 pop     rbp
//   0x516BC7 pop     r12
//   0x516BC9 pop     r13
//   0x516BCB pop     r14
//   0x516BCD pop     r15
//   0x516BCF retn
//   0x516BD0 mov     rdx, rax
//   0x516BD3 lea     rcx, byte_22F0C30
//   0x516BDA xor     eax, eax
//   0x516BDC mov     rsi, r15
//   0x516BDF lea     rdi, aSrrangeAADropp; "srrange %a..%a dropped%s\n"
//   0x516BE6 call    sub_84F5B0
//   0x516BEB cmp     r12, 0FFFFFFFFFFFFFFFFh
//   0x516BEF jnz     short loc_516B8E
//   0x516BF1 mov     rdi, [rbp+0]
//   0x516BF5 lea     r12, [rbx+20h]
//   0x516BF9 call    _ea2node
//   0x516BFE mov     rdx, [rbx+30h]
//   0x516C02 mov     rsi, [rbx+20h]
//   0x516C06 mov     [rsp+48h+var_48], rax
//   0x516C0A mov     rbp, rax
//   0x516C0D mov     rax, [rbx+28h]
//   0x516C11 lea     rdi, [rax+1]
//   0x516C15 cmp     rdx, rdi
//   0x516C18 jb      loc_516D80
//   0x516C1E mov     [rsi+rax*8], rbp
//   0x516C22 add     qword ptr [rbx+28h], 1
//   0x516C27 jmp     short loc_516BAD
//   0x516C29 align 10h
//   0x516C30 mov     r14, rdx
//   0x516C33 mov     r9, [rdi]
//   0x516C36 shl     r14, 5
//   0x516C3A add     r14, rdx
//   0x516C3D mov     rdi, [r9+r14-19h]
//   0x516C42 cmp     r12, 0FFFFFFFFFFFFFFFFh
//   0x516C46 jnz     loc_516CE0
//   0x516C4C cmp     r15, rdi
//   0x516C4F jnb     loc_516DA0
//   0x516C55 mov     rdx, rax
//   0x516C58 lea     rcx, aBrokenOrder; ":broken order"
//   0x516C5F mov     rsi, r15
//   0x516C62 xor     eax, eax
//   0x516C64 lea     rdi, aSrrangeAADropp; "srrange %a..%a dropped%s\n"
//   0x516C6B call    sub_84F5B0
//   0x516C70 jmp     loc_516BF1
//   0x516C75 align 8
//   0x516C78 mov     ecx, 21h ; '!'
//   0x516C7D mov     rsi, r9
//   0x516C80 mov     rdi, rbx
//   0x516C83 call    _qvector_reserve
//   0x516C88 mov     [rbx], rax
//   0x516C8B mov     r12, rax
//   0x516C8E jmp     loc_516AE3
//   0x516C93 align 8
//   0x516C98 lea     rdi, [rbx+20h]
//   0x516C9C mov     ecx, 8
//   0x516CA1 call    _qvector_reserve
//   0x516CA6 mov     [rbx+20h], rax
//   0x516CAA mov     rsi, rax
//   0x516CAD mov     rax, [rbx+28h]
//   0x516CB1 jmp     loc_516BA4
//   0x516CB6 align 20h
//   0x516CC0 mov     rax, [rbx+8]
//   0x516CC4 test    rax, rax
//   0x516CC7 jz      loc_516AC8
//   0x516CCD mov     rdx, rax
//   0x516CD0 add     rax, [rbx]
//   0x516CD3 mov     r15, [rbp+0]
//   0x516CD7 shl     rdx, 5
//   0x516CDB mov     rdi, [rdx+rax-19h]
//   0x516CE0 call    _ea2node
//   0x516CE5 mov     rdi, r15
//   0x516CE8 mov     r14, rax
//   0x516CEB call    _ea2node
//   0x516CF0 cmp     rax, r14
//   0x516CF3 jb      loc_516DB0
//   0x516CF9 mov     r10, [rbx+8]
//   0x516CFD mov     r9, [rbx]
//   0x516D00 mov     edx, 1
//   0x516D05 mov     rax, r10
//   0x516D08 shl     rax, 5
//   0x516D0C add     rax, r10
//   0x516D0F lea     r14, [r9+rax]
//   0x516D13 test    r10, r10
//   0x516D16 jz      loc_516AD3
//   0x516D1C mov     rsi, [rbp+0]
//   0x516D20 cmp     rsi, [r9+rax-19h]
//   0x516D25 jb      short loc_516D30
//   0x516D27 lea     rdx, [r10+1]
//   0x516D2B jmp     loc_516AD3
//   0x516D30 mov     rdi, rbx
//   0x516D33 call    sub_5168B0
//   0x516D38 mov     rdx, [rbp+8]
//   0x516D3C mov     r14, rax
//   0x516D3F cmp     [rax], rdx
//   0x516D42 jnb     short loc_516D27
//   0x516D44 mov     rsi, [rbp+0]
//   0x516D48 xor     eax, eax
//   0x516D4A lea     rcx, aBrokenOrder_0; ": broken order"
//   0x516D51 lea     rdi, aSrrangeAADropp; "srrange %a..%a dropped%s\n"
//   0x516D58 call    sub_84F5B0
//   0x516D5D mov     rdx, [rbx+28h]
//   0x516D61 mov     rsi, [rbx+20h]
//   0x516D65 lea     rax, [rdx+1]
//   0x516D69 cmp     [rbx+30h], rax
//   0x516D6D jb      short loc_516DBC
//   0x516D6F mov     [rsi+rdx*8], r12
//   0x516D73 jmp     loc_516C22
//   0x516D78 align 20h
//   0x516D80 mov     rdx, rdi
//   0x516D83 mov     ecx, 8
//   0x516D88 mov     rdi, r12
//   0x516D8B call    _qvector_reserve
//   0x516D90 mov     [rbx+20h], rax
//   0x516D94 mov     rsi, rax
//   0x516D97 mov     rax, [rbx+28h]
//   0x516D9B jmp     loc_516C1E
//   0x516DA0 add     r14, r9
//   0x516DA3 add     rdx, 1
//   0x516DA7 jmp     loc_516AD3
//   0x516DAC align 10h
//   0x516DB0 lea     rcx, aBrokenOrder; ":broken order"
//   0x516DB7 jmp     loc_516B78
//   0x516DBC mov     rdx, rax
//   0x516DBF lea     rdi, [rbx+20h]
//   0x516DC3 mov     ecx, 8
//   0x516DC8 call    _qvector_reserve
//   0x516DCD mov     rdx, [rbx+28h]
//   0x516DD1 mov     [rbx+20h], rax
//   0x516DD5 mov     rsi, rax
//   0x516DD8 jmp     short loc_516D6F
//   0x516DDA call    ___stack_chk_fail
// ============================================================

void sub_516A70(/* signature unknown */)
{
    // see disassembly above
}

