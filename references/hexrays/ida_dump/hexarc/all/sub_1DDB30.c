// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x1DDB30
// Name:           sub_1DDB30
// Function size:  1690 bytes (407 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x1DDB30 push    r15
//   0x1DDB32 mov     r10, rsi
//   0x1DDB35 push    r14
//   0x1DDB37 mov     r14, r8
//   0x1DDB3A push    r13
//   0x1DDB3C push    r12
//   0x1DDB3E push    rbp
//   0x1DDB3F mov     rbp, rcx
//   0x1DDB42 push    rbx
//   0x1DDB43 mov     rbx, rdx
//   0x1DDB46 movsxd  rdx, r9d
//   0x1DDB49 lea     r13, [rbx+18h]
//   0x1DDB4D mov     r9, rbx
//   0x1DDB50 sub     rsp, 0B8h
//   0x1DDB57 movdqu  xmm3, xmmword ptr [rbx+18h]
//   0x1DDB5C mov     r8, [rbx+18h]
//   0x1DDB60 movzx   ecx, byte ptr [r13+8]
//   0x1DDB65 movzx   eax, byte ptr [rbp+8]
//   0x1DDB69 mov     [rsp+0E8h+var_D8], rdi
//   0x1DDB6E mov     esi, [r13+14h]
//   0x1DDB72 movsxd  rdi, dword ptr [r14+4]
//   0x1DDB76 add     r8, rdx
//   0x1DDB79 mov     r12, fs:28h
//   0x1DDB82 mov     [rsp+0E8h+var_40], r12
//   0x1DDB8A mov     r12, rdx
//   0x1DDB8D movaps  [rsp+0E8h+var_E8], xmm3
//   0x1DDB91 cmp     al, cl
//   0x1DDB93 jz      loc_1DDC90
//   0x1DDB99 cmp     al, [r13+8]
//   0x1DDB9D jz      short loc_1DDBD0
//   0x1DDB9F xor     ebp, ebp
//   0x1DDBA1 mov     rax, [rsp+0E8h+var_40]
//   0x1DDBA9 sub     rax, fs:28h
//   0x1DDBB2 jnz     loc_1DE1B5
//   0x1DDBB8 add     rsp, 0B8h
//   0x1DDBBF mov     eax, ebp
//   0x1DDBC1 pop     rbx
//   0x1DDBC2 pop     rbp
//   0x1DDBC3 pop     r12
//   0x1DDBC5 pop     r13
//   0x1DDBC7 pop     r14
//   0x1DDBC9 pop     r15
//   0x1DDBCB retn
//   0x1DDBCC align 10h
//   0x1DDBD0 mov     rcx, [rbp+0]
//   0x1DDBD4 mov     rax, [rbx+18h]
//   0x1DDBD8 mov     [rsp+0E8h+var_C0], r10
//   0x1DDBDD mov     [rsp+0E8h+var_C8], r9
//   0x1DDBE2 mov     [rsp+0E8h+var_D0], r8
//   0x1DDBE7 cmp     rcx, rax
//   0x1DDBEA jl      short loc_1DDB9F
//   0x1DDBEC add     rdi, rcx
//   0x1DDBEF add     rdx, rax
//   0x1DDBF2 cmp     rdi, rdx
//   0x1DDBF5 jg      short loc_1DDB9F
//   0x1DDBF7 lea     rax, [r13+10h]
//   0x1DDBFB lea     r15, [rsp+0E8h+var_A8]
//   0x1DDC00 mov     rsi, rax
//   0x1DDC03 mov     rdi, r15
//   0x1DDC06 mov     [rsp+0E8h+var_B8], rax
//   0x1DDC0B call    sub_30B8C0
//   0x1DDC10 mov     rax, cs:qword_3F9A58
//   0x1DDC17 pxor    xmm0, xmm0
//   0x1DDC1B cmp     byte ptr [r13+8], 5
//   0x1DDC20 mov     r8, [rsp+0E8h+var_D0]
//   0x1DDC25 mov     r9, [rsp+0E8h+var_C8]
//   0x1DDC2A movups  [rsp+0E8h+var_88+8], xmm0
//   0x1DDC2F mov     qword ptr [rsp+0E8h+var_88], rax
//   0x1DDC34 mov     r10, [rsp+0E8h+var_C0]
//   0x1DDC39 mov     [rsp+0E8h+var_70], 0
//   0x1DDC42 jz      loc_1DDFF0
//   0x1DDC48 lea     rax, [rsp+0E8h+var_88]
//   0x1DDC4D mov     edx, r12d
//   0x1DDC50 mov     rdi, r15
//   0x1DDC53 mov     [rsp+0E8h+var_B0], r10
//   0x1DDC58 mov     rsi, rax
//   0x1DDC5B mov     [rsp+0E8h+var_C0], r9
//   0x1DDC60 mov     [rsp+0E8h+var_C8], r8
//   0x1DDC65 mov     [rsp+0E8h+var_D0], rax
//   0x1DDC6A call    sub_30D980
//   0x1DDC6F test    al, al
//   0x1DDC71 jnz     loc_1DDE68
//   0x1DDC77 xor     ebp, ebp
//   0x1DDC79 mov     rdi, [rsp+0E8h+var_D0]
//   0x1DDC7E call    sub_30B800
//   0x1DDC83 mov     rdi, r15
//   0x1DDC86 call    sub_30B800
//   0x1DDC8B jmp     loc_1DDBA1
//   0x1DDC90 mov     r11, [rbp+0]
//   0x1DDC94 mov     byte ptr [rsp+0E8h+var_D0], cl
//   0x1DDC98 cmp     r8, r11
//   0x1DDC9B jg      loc_1DDB99
//   0x1DDCA1 sub     esi, r12d
//   0x1DDCA4 movsxd  r15, edi
//   0x1DDCA7 movsxd  rsi, esi
//   0x1DDCAA add     r15, r11
//   0x1DDCAD add     rsi, r8
//   0x1DDCB0 cmp     rsi, r15
//   0x1DDCB3 jl      loc_1DDB99
//   0x1DDCB9 lea     r15, [rsp+0E8h+var_A8]
//   0x1DDCBE lea     rsi, [rbx+28h]
//   0x1DDCC2 mov     [rsp+0E8h+var_B8], r10
//   0x1DDCC7 mov     rdi, r15
//   0x1DDCCA mov     [rsp+0E8h+var_C8], r8
//   0x1DDCCF mov     [rsp+0E8h+var_C0], rbx
//   0x1DDCD4 call    sub_30B8C0
//   0x1DDCD9 mov     rax, cs:qword_3F9A58
//   0x1DDCE0 pxor    xmm0, xmm0
//   0x1DDCE4 cmp     byte ptr [r13+8], 5
//   0x1DDCE9 mov     r8, [rsp+0E8h+var_C8]
//   0x1DDCEE mov     r9, [rsp+0E8h+var_C0]
//   0x1DDCF3 movups  [rsp+0E8h+var_88+8], xmm0
//   0x1DDCF8 mov     r10, [rsp+0E8h+var_B8]
//   0x1DDCFD movzx   ecx, byte ptr [rsp+0E8h+var_D0]
//   0x1DDD02 mov     qword ptr [rsp+0E8h+var_88], rax
//   0x1DDD07 mov     [rsp+0E8h+var_70], 0
//   0x1DDD10 jz      loc_1DDF50
//   0x1DDD16 lea     rax, [rsp+0E8h+var_88]
//   0x1DDD1B mov     edx, r12d
//   0x1DDD1E mov     rdi, r15
//   0x1DDD21 mov     [rsp+0E8h+var_B0], r10
//   0x1DDD26 mov     rsi, rax
//   0x1DDD29 mov     byte ptr [rsp+0E8h+var_B8], cl
//   0x1DDD2D mov     [rsp+0E8h+var_C0], r9
//   0x1DDD32 mov     [rsp+0E8h+var_C8], r8
//   0x1DDD37 mov     [rsp+0E8h+var_D0], rax
//   0x1DDD3C call    sub_30D980
//   0x1DDD41 test    al, al
//   0x1DDD43 jnz     short loc_1DDD60
//   0x1DDD45 xor     ebp, ebp
//   0x1DDD47 mov     rdi, [rsp+0E8h+var_D0]
//   0x1DDD4C call    sub_30B800
//   0x1DDD51 mov     rdi, r15
//   0x1DDD54 call    sub_30B800
//   0x1DDD59 jmp     loc_1DDBA1
//   0x1DDD5E align 20h
//   0x1DDD60 mov     r8, [rsp+0E8h+var_C8]
//   0x1DDD65 mov     r9, [rsp+0E8h+var_C0]
//   0x1DDD6A movzx   ecx, byte ptr [rsp+0E8h+var_B8]
//   0x1DDD6F mov     r10, [rsp+0E8h+var_B0]
//   0x1DDD74 mov     rsi, [rbp+0]
//   0x1DDD78 cmp     r8, rsi
//   0x1DDD7B jg      short loc_1DDD45
//   0x1DDD7D movsxd  rdx, dword ptr [rsp+0E8h+var_88+4]
//   0x1DDD82 movsxd  rax, dword ptr [r14+4]
//   0x1DDD86 add     rdx, r8
//   0x1DDD89 add     rax, rsi
//   0x1DDD8C cmp     rdx, rax
//   0x1DDD8F jl      short loc_1DDD45
//   0x1DDD91 cmp     cl, 5
//   0x1DDD94 jz      loc_1DE0CD
//   0x1DDD9A mov     edx, esi
//   0x1DDD9C sub     edx, r8d
//   0x1DDD9F mov     rdi, [rsp+0E8h+var_D0]
//   0x1DDDA4 mov     rsi, r14
//   0x1DDDA7 mov     [rsp+0E8h+var_C0], r9
//   0x1DDDAC mov     [rsp+0E8h+var_C8], r8
//   0x1DDDB1 call    sub_30CCA0
//   0x1DDDB6 mov     ebp, eax
//   0x1DDDB8 test    al, al
//   0x1DDDBA jz      short loc_1DDD45
//   0x1DDDBC cmp     dword ptr [rsp+0E8h+var_A8], 1
//   0x1DDDC1 mov     r8, [rsp+0E8h+var_C8]
//   0x1DDDC6 mov     r9, [rsp+0E8h+var_C0]
//   0x1DDDCB jz      loc_1DE084
//   0x1DDDD1 lea     rdi, [r13+10h]
//   0x1DDDD5 mov     rsi, r15
//   0x1DDDD8 mov     [rsp+0E8h+var_C0], r9
//   0x1DDDDD mov     [rsp+0E8h+var_C8], r8
//   0x1DDDE2 call    sub_30BA10
//   0x1DDDE7 mov     rax, [rbx]
//   0x1DDDEA mov     rdi, [rsp+0E8h+var_D8]
//   0x1DDDEF mov     r8, [rsp+0E8h+var_C8]
//   0x1DDDF4 mov     r9, [rsp+0E8h+var_C0]
//   0x1DDDF9 test    al, 2
//   0x1DDDFB lea     r12, [rdi+8]
//   0x1DDDFF jnz     short loc_1DDE30
//   0x1DDE01 mov     rdx, [rbx+10h]
//   0x1DDE05 test    byte ptr [rdx], 2
//   0x1DDE08 jnz     loc_1DE134
//   0x1DDE0E mov     r9, rdx
//   0x1DDE11 mov     rdx, [rdx+8]
//   0x1DDE15 test    byte ptr [rdx], 2
//   0x1DDE18 jz      short loc_1DDE0E
//   0x1DDE1A mov     rax, [rsp+0E8h+var_D8]
//   0x1DDE1F lea     r12, [rax+8]
//   0x1DDE23 nop     word ptr [rax+rax+00000000h]
//   0x1DDE2E xchg    ax, ax
//   0x1DDE30 mov     rdx, qword ptr [rsp+0E8h+var_E8+8]
//   0x1DDE35 mov     qword ptr [rsp+0E8h+var_E8], r8
//   0x1DDE39 mov     rsi, r9
//   0x1DDE3C mov     rdi, r12
//   0x1DDE3F mov     rax, qword ptr [rsp+0E8h+var_E8]
//   0x1DDE43 mov     r8, [rsp+0E8h+var_D0]
//   0x1DDE48 mov     qword ptr [rsp+0E8h+var_E8+8], rdx
//   0x1DDE4D mov     rdx, qword ptr [rsp+0E8h+var_E8+8]
//   0x1DDE52 mov     rcx, rdx
//   0x1DDE55 mov     rdx, rax
//   0x1DDE58 call    sub_1DD220
//   0x1DDE5D jmp     loc_1DDD47
//   0x1DDE62 align 8
//   0x1DDE68 mov     r8, [rsp+0E8h+var_C8]
//   0x1DDE6D mov     r9, [rsp+0E8h+var_C0]
//   0x1DDE72 mov     r10, [rsp+0E8h+var_B0]
//   0x1DDE77 mov     rcx, [rbp+0]
//   0x1DDE7B mov     rax, [rbx+18h]
//   0x1DDE7F cmp     rcx, rax
//   0x1DDE82 jl      loc_1DDC77
//   0x1DDE88 movsxd  rdx, dword ptr [rsp+0E8h+var_A8+4]
//   0x1DDE8D movsxd  rsi, dword ptr [r14+4]
//   0x1DDE91 add     rdx, rax
//   0x1DDE94 add     rsi, rcx
//   0x1DDE97 cmp     rdx, rsi
//   0x1DDE9A jl      loc_1DDC77
//   0x1DDEA0 cmp     byte ptr [r13+8], 5
//   0x1DDEA5 jz      loc_1DE0E5
//   0x1DDEAB mov     edx, ecx
//   0x1DDEAD sub     edx, eax
//   0x1DDEAF mov     rsi, r14
//   0x1DDEB2 mov     rdi, r15
//   0x1DDEB5 mov     [rsp+0E8h+var_C0], r9
//   0x1DDEBA mov     [rsp+0E8h+var_C8], r8
//   0x1DDEBF call    sub_30CCA0
//   0x1DDEC4 mov     ebp, eax
//   0x1DDEC6 test    al, al
//   0x1DDEC8 jz      loc_1DDC77
//   0x1DDECE mov     rdi, [rsp+0E8h+var_B8]
//   0x1DDED3 mov     rsi, r15
//   0x1DDED6 call    sub_30BA10
//   0x1DDEDB mov     rax, [rbx]
//   0x1DDEDE mov     r8, [rsp+0E8h+var_C8]
//   0x1DDEE3 mov     r9, [rsp+0E8h+var_C0]
//   0x1DDEE8 test    al, 2
//   0x1DDEEA jnz     short loc_1DDF10
//   0x1DDEEC mov     rdx, [rbx+10h]
//   0x1DDEF0 test    byte ptr [rdx], 2
//   0x1DDEF3 jnz     loc_1DE0FD
//   0x1DDEF9 mov     r9, rdx
//   0x1DDEFC mov     rdx, [rdx+8]
//   0x1DDF00 test    byte ptr [rdx], 2
//   0x1DDF03 jz      short loc_1DDEF9
//   0x1DDF05 nop     word ptr [rax+rax+00000000h]
//   0x1DDF10 cmp     dword ptr [rsp+0E8h+var_88], 1
//   0x1DDF15 jz      loc_1DDC79
//   0x1DDF1B mov     rdx, qword ptr [rsp+0E8h+var_E8+8]
//   0x1DDF20 mov     rdi, [rsp+0E8h+var_D8]
//   0x1DDF25 mov     qword ptr [rsp+0E8h+var_E8], r8
//   0x1DDF29 mov     rsi, r9
//   0x1DDF2C mov     r8, [rsp+0E8h+var_D0]
//   0x1DDF31 mov     qword ptr [rsp+0E8h+var_E8+8], rdx
//   0x1DDF36 mov     rdx, qword ptr [rsp+0E8h+var_E8]
//   0x1DDF3A add     rdi, 8
//   0x1DDF3E mov     rcx, qword ptr [rsp+0E8h+var_E8+8]
//   0x1DDF43 call    sub_1DD220
//   0x1DDF48 jmp     loc_1DDC79
//   0x1DDF4D align 10h
//   0x1DDF50 mov     rax, [r10+60h]
//   0x1DDF54 cmp     byte ptr [rax+91h], 0
//   0x1DDF5B jz      loc_1DDD16
//   0x1DDF61 mov     edx, dword ptr [rsp+0E8h+var_A8+4]
//   0x1DDF65 lea     rax, [rsp+0E8h+var_88]
//   0x1DDF6A mov     rdi, r15
//   0x1DDF6D mov     byte ptr [rsp+0E8h+var_B8], cl
//   0x1DDF71 mov     rsi, rax
//   0x1DDF74 mov     [rsp+0E8h+var_B0], r10
//   0x1DDF79 sub     edx, r12d
//   0x1DDF7C mov     [rsp+0E8h+var_C0], r9
//   0x1DDF81 mov     [rsp+0E8h+var_C8], r8
//   0x1DDF86 mov     [rsp+0E8h+var_D0], rax
//   0x1DDF8B call    sub_30D980
//   0x1DDF90 test    al, al
//   0x1DDF92 mov     r8, [rsp+0E8h+var_C8]
//   0x1DDF97 mov     r9, [rsp+0E8h+var_C0]
//   0x1DDF9C movzx   ecx, byte ptr [rsp+0E8h+var_B8]
//   0x1DDFA1 mov     r10, [rsp+0E8h+var_B0]
//   0x1DDFA6 jz      loc_1DDD45
//   0x1DDFAC movdqa  xmm2, [rsp+0E8h+var_88]
//   0x1DDFB2 movdqa  xmm1, [rsp+0E8h+var_A8]
//   0x1DDFB8 movdqa  xmm0, [rsp+0E8h+var_98]
//   0x1DDFBE movaps  [rsp+0E8h+var_A8], xmm2
//   0x1DDFC3 movdqa  xmm2, xmmword ptr [rsp+70h]
//   0x1DDFC9 movaps  [rsp+0E8h+var_68], xmm1
//   0x1DDFD1 movaps  [rsp+0E8h+var_58], xmm0
//   0x1DDFD9 movaps  [rsp+0E8h+var_98], xmm2
//   0x1DDFDE movaps  [rsp+0E8h+var_88], xmm1
//   0x1DDFE3 movaps  xmmword ptr [rsp+70h], xmm0
//   0x1DDFE8 jmp     loc_1DDD74
//   0x1DDFED align 10h
//   0x1DDFF0 mov     rax, [r10+60h]
//   0x1DDFF4 cmp     byte ptr [rax+91h], 0
//   0x1DDFFB jz      loc_1DDC48
//   0x1DE001 mov     edx, dword ptr [rsp+0E8h+var_A8+4]
//   0x1DE005 lea     rax, [rsp+0E8h+var_88]
//   0x1DE00A mov     rdi, r15
//   0x1DE00D mov     [rsp+0E8h+var_B0], r10
//   0x1DE012 mov     rsi, rax
//   0x1DE015 mov     [rsp+0E8h+var_C0], r9
//   0x1DE01A sub     edx, r12d
//   0x1DE01D mov     [rsp+0E8h+var_C8], r8
//   0x1DE022 mov     [rsp+0E8h+var_D0], rax
//   0x1DE027 call    sub_30D980
//   0x1DE02C test    al, al
//   0x1DE02E mov     r8, [rsp+0E8h+var_C8]
//   0x1DE033 mov     r9, [rsp+0E8h+var_C0]
//   0x1DE038 mov     r10, [rsp+0E8h+var_B0]
//   0x1DE03D jz      loc_1DDC77
//   0x1DE043 movdqa  xmm2, [rsp+0E8h+var_88]
//   0x1DE049 movdqa  xmm1, [rsp+0E8h+var_A8]
//   0x1DE04F movdqa  xmm0, [rsp+0E8h+var_98]
//   0x1DE055 movaps  [rsp+0E8h+var_A8], xmm2
//   0x1DE05A movdqa  xmm2, xmmword ptr [rsp+70h]
//   0x1DE060 movaps  [rsp+0E8h+var_68], xmm1
//   0x1DE068 movaps  [rsp+0E8h+var_58], xmm0
//   0x1DE070 movaps  [rsp+0E8h+var_98], xmm2
//   0x1DE075 movaps  [rsp+0E8h+var_88], xmm1
//   0x1DE07A movaps  xmmword ptr [rsp+70h], xmm0
//   0x1DE07F jmp     loc_1DDE77
//   0x1DE084 mov     r12, [rsp+0E8h+var_D8]
//   0x1DE089 mov     rax, [rbx]
//   0x1DE08C mov     r13, rbx
//   0x1DE08F add     r12, 8
//   0x1DE093 test    al, 2
//   0x1DE095 jnz     short loc_1DE0B0
//   0x1DE097 mov     rdx, [rbx+10h]
//   0x1DE09B test    byte ptr [rdx], 2
//   0x1DE09E jnz     loc_1DE178
//   0x1DE0A4 mov     r13, rdx
//   0x1DE0A7 mov     rdx, [rdx+8]
//   0x1DE0AB test    byte ptr [rdx], 2
//   0x1DE0AE jz      short loc_1DE0A4
//   0x1DE0B0 mov     rsi, rbx
//   0x1DE0B3 mov     rdi, r12
//   0x1DE0B6 mov     [rsp+0E8h+var_D8], r8
//   0x1DE0BB call    sub_1DCA10
//   0x1DE0C0 mov     r8, [rsp+0E8h+var_D8]
//   0x1DE0C5 mov     r9, r13
//   0x1DE0C8 jmp     loc_1DDE30
//   0x1DE0CD mov     rcx, [r10+60h]
//   0x1DE0D1 sub     edx, eax
//   0x1DE0D3 cmp     byte ptr [rcx+91h], 0
//   0x1DE0DA jnz     loc_1DDD9F
//   0x1DE0E0 jmp     loc_1DDD9A
//   0x1DE0E5 mov     rdi, [r10+60h]
//   0x1DE0E9 sub     edx, esi
//   0x1DE0EB cmp     byte ptr [rdi+91h], 0
//   0x1DE0F2 jnz     loc_1DDEAF
//   0x1DE0F8 jmp     loc_1DDEAB
//   0x1DE0FD and     rax, 0FFFFFFFFFFFFFFFCh
//   0x1DE101 mov     rdx, [rax]
//   0x1DE104 test    dl, 2
//   0x1DE107 jz      short loc_1DE114
//   0x1DE109 mov     r9, rax
//   0x1DE10C jmp     loc_1DDF10
//   0x1DE111 mov     rax, rcx
//   0x1DE114 cmp     r9, [rax+10h]
//   0x1DE118 jnz     short loc_1DE109
//   0x1DE11A mov     rcx, rdx
//   0x1DE11D mov     r9, rax
//   0x1DE120 and     rcx, 0FFFFFFFFFFFFFFFCh
//   0x1DE124 mov     rdx, [rcx]
//   0x1DE127 test    dl, 2
//   0x1DE12A jz      short loc_1DE111
//   0x1DE12C mov     r9, rcx
//   0x1DE12F jmp     loc_1DDF10
//   0x1DE134 and     rax, 0FFFFFFFFFFFFFFFCh
//   0x1DE138 mov     rdx, [rax]
//   0x1DE13B test    dl, 2
//   0x1DE13E jz      short loc_1DE148
//   0x1DE140 mov     r9, rax
//   0x1DE143 jmp     loc_1DDE30
//   0x1DE148 cmp     r9, [rax+10h]
//   0x1DE14C jnz     short loc_1DE170
//   0x1DE14E and     rdx, 0FFFFFFFFFFFFFFFCh
//   0x1DE152 mov     r9, rdx
//   0x1DE155 mov     rdx, [rdx]
//   0x1DE158 test    dl, 2
//   0x1DE15B jnz     loc_1DDE1A
//   0x1DE161 mov     rcx, rax
//   0x1DE164 mov     rax, r9
//   0x1DE167 mov     r9, rcx
//   0x1DE16A cmp     r9, [rax+10h]
//   0x1DE16E jz      short loc_1DE14E
//   0x1DE170 mov     r9, rax
//   0x1DE173 jmp     loc_1DDE1A
//   0x1DE178 and     rax, 0FFFFFFFFFFFFFFFCh
//   0x1DE17C mov     rcx, rbx
//   0x1DE17F mov     r13, rax
//   0x1DE182 mov     rax, [rax]
//   0x1DE185 test    al, 2
//   0x1DE187 jnz     loc_1DE0B0
//   0x1DE18D cmp     [r13+10h], rcx
//   0x1DE191 jnz     loc_1DE0B0
//   0x1DE197 and     rax, 0FFFFFFFFFFFFFFFCh
//   0x1DE19B mov     rdx, rax
//   0x1DE19E mov     rax, [rax]
//   0x1DE1A1 test    al, 2
//   0x1DE1A3 jz      short loc_1DE1AD
//   0x1DE1A5 mov     r13, rdx
//   0x1DE1A8 jmp     loc_1DE0B0
//   0x1DE1AD mov     rcx, r13
//   0x1DE1B0 mov     r13, rdx
//   0x1DE1B3 jmp     short loc_1DE18D
//   0x1DE1B5 call    ___stack_chk_fail
//   0x1DE1BA mov     rbx, rax
//   0x1DE1BD jmp     loc_40660
//   0x1DE1C2 mov     rbx, rax
//   0x1DE1C5 jmp     loc_4068D
// ============================================================

void sub_1DDB30(/* signature unknown */)
{
    // see disassembly above
}

