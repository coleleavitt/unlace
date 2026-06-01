// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x189BB90
// Name:           sub_189BB90
// Function size:  2157 bytes (486 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x189BB90 push    r15; ptr
//   0x189BB92 push    r14; int
//   0x189BB94 push    r13; int
//   0x189BB96 mov     r13d, edx
//   0x189BB99 push    r12; int
//   0x189BB9B mov     r12d, r9d
//   0x189BB9E push    rbp; char
//   0x189BB9F mov     rbp, rdi
//   0x189BBA2 push    rbx; int
//   0x189BBA3 mov     rbx, rcx
//   0x189BBA6 sub     rsp, 128h
//   0x189BBAD mov     qword ptr [rsp+158h+var_158], rsi; int
//   0x189BBB1 mov     qword ptr [rsp+158h+var_130], r8; int
//   0x189BBB6 call    sub_168B6C0
//   0x189BBBB mov     rdi, [rbp+0]
//   0x189BBBF xor     r9d, r9d
//   0x189BBC2 xor     r8d, r8d
//   0x189BBC5 mov     ecx, [rsp+158h+arg_8]
//   0x189BBCC mov     rdx, qword ptr [rsp+158h+arg_0]
//   0x189BBD4 mov     r14, rax
//   0x189BBD7 mov     rsi, [rdi+0C0h]
//   0x189BBDE call    sub_1A5B7C0
//   0x189BBE3 test    rax, rax
//   0x189BBE6 jz      loc_189BCB0
//   0x189BBEC mov     r15, rax
//   0x189BBEF test    rbx, rbx
//   0x189BBF2 jz      loc_189BE18
//   0x189BBF8 cmp     rbx, r15
//   0x189BBFB jz      short loc_189BC2D
//   0x189BBFD mov     rax, [r15]
//   0x189BC00 mov     rdi, r15
//   0x189BC03 call    qword ptr [rax+20h]
//   0x189BC06 lea     rcx, sub_A55E60
//   0x189BC0D mov     rdx, rax
//   0x189BC10 mov     rax, [rbx]
//   0x189BC13 mov     rax, [rax+20h]
//   0x189BC17 cmp     rax, rcx
//   0x189BC1A jnz     loc_189C188
//   0x189BC20 mov     rax, [rbx+60h]
//   0x189BC24 cmp     rdx, rax
//   0x189BC27 jnz     loc_189BE18
//   0x189BC2D mov     edx, [rsp+158h+arg_8]
//   0x189BC34 xor     r8d, r8d
//   0x189BC37 mov     ecx, 1323h
//   0x189BC3C mov     rsi, rbp
//   0x189BC3F lea     r14, [rsp+158h+var_C8]
//   0x189BC47 mov     rdi, r14
//   0x189BC4A call    sub_168B9F0
//   0x189BC4F lea     rsi, [rsp+158h+arg_0]
//   0x189BC57 mov     rdi, r14
//   0x189BC5A call    sub_169D880
//   0x189BC5F lea     rsi, [rsp+158h+var_130]
//   0x189BC64 mov     rdi, rax
//   0x189BC67 call    sub_169D880
//   0x189BC6C lea     rsi, [rsp+158h+var_F8]
//   0x189BC71 mov     [rsp+158h+var_F8], r13d
//   0x189BC76 mov     rdi, rax
//   0x189BC79 mov     [rsp+158h+var_F8+4], r12d
//   0x189BC7E call    sub_1587DB0
//   0x189BC83 mov     rdi, r14
//   0x189BC86 call    sub_15F7200
//   0x189BC8B mov     rax, [rbx+78h]
//   0x189BC8F and     rax, 0FFFFFFFFFFFFFFF8h
//   0x189BC93 mov     [rax+50h], r12d
//   0x189BC97 add     rsp, 128h
//   0x189BC9E pop     rbx
//   0x189BC9F pop     rbp
//   0x189BCA0 pop     r12
//   0x189BCA2 pop     r13
//   0x189BCA4 pop     r14
//   0x189BCA6 pop     r15
//   0x189BCA8 retn
//   0x189BCA9 align 10h
//   0x189BCB0 pxor    xmm0, xmm0
//   0x189BCB4 mov     rsi, qword ptr [rsp+158h+arg_0]
//   0x189BCBC mov     rax, 101010101h
//   0x189BCC6 mov     edx, [rsp+158h+arg_8]
//   0x189BCCD mov     qword ptr [rsp+158h+var_F0], rax; int
//   0x189BCD2 lea     rax, off_2BC6D18
//   0x189BCD9 lea     r15, [rsp+158h+var_118]
//   0x189BCDE mov     qword ptr [rsp+158h+var_F8], rax; int
//   0x189BCE3 mov     rax, [rbp+0]
//   0x189BCE7 lea     rdi, [r15+10h]
//   0x189BCEB movaps  xmmword ptr [rsp+158h+var_E8], xmm0; int
//   0x189BCF0 mov     qword ptr [rsp+158h+var_D8], rbx; int
//   0x189BCF8 mov     r8, [rax+0C0h]
//   0x189BCFF mov     qword ptr [rsp+158h+var_140], rax; int
//   0x189BD04 mov     qword ptr [rsp+158h+var_148], r8
//   0x189BD09 mov     qword ptr [rsp+158h+var_118], rsi; int
//   0x189BD0E mov     [rsp+158h+var_110], edx; int
//   0x189BD12 call    sub_B85890
//   0x189BD17 xor     r9d, r9d
//   0x189BD1A xor     ecx, ecx
//   0x189BD1C mov     rdx, r15
//   0x189BD1F lea     rdi, [rsp+158h+var_C8]
//   0x189BD27 mov     qword ptr [rsp+158h+var_150], rdi; int
//   0x189BD2C push    1
//   0x189BD2E push    0
//   0x189BD30 push    0
//   0x189BD32 push    0
//   0x189BD34 push    1
//   0x189BD36 lea     rax, [rsp+180h+var_F8]
//   0x189BD3E mov     qword ptr [rsp+180h+var_138], rax; int
//   0x189BD43 push    rax
//   0x189BD44 mov     rax, qword ptr [rsp+188h+var_140]
//   0x189BD49 mov     r8, qword ptr [rsp+188h+var_148]
//   0x189BD4E mov     rsi, rax
//   0x189BD51 call    sub_1A6BD60
//   0x189BD56 add     rsp, 30h
//   0x189BD5A cmp     qword ptr [rsp+158h+var_C8], 0
//   0x189BD63 jz      loc_189C2E0
//   0x189BD69 mov     rax, [rbp+0]
//   0x189BD6D mov     edx, 14EBh
//   0x189BD72 mov     rsi, rbp
//   0x189BD75 mov     rdi, r15
//   0x189BD78 mov     qword ptr [rsp+158h+var_148], rax; int
//   0x189BD7D call    sub_168B9B0
//   0x189BD82 mov     rsi, qword ptr [rsp+158h+arg_0]
//   0x189BD8A mov     edx, 5
//   0x189BD8F mov     rdi, r15
//   0x189BD92 call    sub_AE9DF0
//   0x189BD97 mov     rsi, qword ptr [rsp+158h+var_130]
//   0x189BD9C mov     edx, 5
//   0x189BDA1 mov     rdi, r15
//   0x189BDA4 call    sub_AE9DF0
//   0x189BDA9 mov     rsi, qword ptr [rsp+158h+var_150]; int
//   0x189BDAE mov     rdi, qword ptr [rsp+158h+var_148]; int
//   0x189BDB3 mov     rdx, r15; int
//   0x189BDB6 mov     ecx, 1; int
//   0x189BDBB call    sub_1A60AF0
//   0x189BDC0 mov     rsi, qword ptr [rsp+158h+var_118]
//   0x189BDC5 test    rsi, rsi
//   0x189BDC8 jz      short loc_189BDD9
//   0x189BDCA mov     rdi, qword ptr [rsp+158h+var_110]
//   0x189BDCF test    rdi, rdi
//   0x189BDD2 jz      short loc_189BDD9
//   0x189BDD4 call    sub_1580C40
//   0x189BDD9 mov     rdi, qword ptr [rsp+158h+var_150]
//   0x189BDDE call    sub_183AA90
//   0x189BDE3 mov     r15, rax
//   0x189BDE6 test    rax, rax
//   0x189BDE9 jz      loc_189C2E0
//   0x189BDEF movzx   eax, byte ptr [rax+1Ch]
//   0x189BDF3 and     eax, 7Fh
//   0x189BDF6 cmp     al, 14h
//   0x189BDF8 jnz     loc_189C2E0
//   0x189BDFE mov     rdi, qword ptr [rsp+158h+var_150]
//   0x189BE03 call    sub_17A1D90
//   0x189BE08 test    rbx, rbx
//   0x189BE0B jnz     loc_189BBF8
//   0x189BE11 nop     dword ptr [rax+00000000h]
//   0x189BE18 movzx   eax, byte ptr [r15+1Ch]
//   0x189BE1D and     eax, 7Fh
//   0x189BE20 cmp     al, 14h
//   0x189BE22 jnz     loc_189BF70
//   0x189BE28 mov     rdi, [rbp+0]
//   0x189BE2C xor     r9d, r9d
//   0x189BE2F xor     r8d, r8d
//   0x189BE32 mov     ecx, 1
//   0x189BE37 lea     rdx, [rsp+158h+arg_8]
//   0x189BE3F sub     rsp, 8
//   0x189BE43 mov     rsi, r15
//   0x189BE46 push    0
//   0x189BE48 push    0
//   0x189BE4A push    0
//   0x189BE4C call    sub_18F5260
//   0x189BE51 add     rsp, 20h
//   0x189BE55 xor     edx, edx
//   0x189BE57 mov     rsi, r15
//   0x189BE5A mov     rdi, r14
//   0x189BE5D call    sub_A82070
//   0x189BE62 mov     r10, r15
//   0x189BE65 mov     r11, rax
//   0x189BE68 movzx   eax, byte ptr [r15+1Ch]
//   0x189BE6D and     eax, 7Fh
//   0x189BE70 sub     eax, 40h ; '@'
//   0x189BE73 cmp     eax, 2
//   0x189BE76 ja      loc_189C058
//   0x189BE7C mov     r9, r11
//   0x189BE7F and     r9, 0FFFFFFFFFFFFFFF0h
//   0x189BE83 test    r9, r9
//   0x189BE86 jz      loc_189BC97
//   0x189BE8C mov     rax, [rsp+158h+arg_18]
//   0x189BE94 mov     [rsp+158h+var_120], 0
//   0x189BE9D test    rax, rax
//   0x189BEA0 jnz     loc_189C248
//   0x189BEA6 mov     edx, [rsp+158h+arg_8]
//   0x189BEAD mov     rsi, r11
//   0x189BEB0 mov     rdi, r14
//   0x189BEB3 call    sub_A81910
//   0x189BEB8 mov     [rsp+158h+var_120], rax
//   0x189BEBD nop     dword ptr [rax]
//   0x189BEC0 mov     rdx, [rbx+78h]
//   0x189BEC4 lea     r13, [rsp+158h+var_C8]
//   0x189BECC lea     r15, [rsp+158h+var_118]
//   0x189BED1 mov     rdi, r13
//   0x189BED4 and     rdx, 0FFFFFFFFFFFFFFF8h
//   0x189BED8 mov     [rdx+8], rax
//   0x189BEDC mov     rdx, [rax]
//   0x189BEDF add     rax, 8
//   0x189BEE3 mov     [rsp+158h+var_C0], rax
//   0x189BEEB mov     qword ptr [rsp+158h+var_C8], rdx
//   0x189BEF3 call    sub_F6CE20
//   0x189BEF8 mov     rdx, [rbx+78h]
//   0x189BEFC mov     rdi, rbp
//   0x189BEFF and     rdx, 0FFFFFFFFFFFFFFF8h
//   0x189BF03 mov     [rdx+50h], eax
//   0x189BF06 call    sub_168B6C0
//   0x189BF0B mov     rdi, rbx
//   0x189BF0E mov     r12, rax
//   0x189BF11 call    sub_BAB630
//   0x189BF16 lea     r14, [r12+740h]
//   0x189BF1E lea     rdx, [rsp+158h+var_F8]
//   0x189BF23 mov     rsi, r15
//   0x189BF26 mov     rdi, r14
//   0x189BF29 mov     qword ptr [rsp+158h+var_118], rax
//   0x189BF2E call    sub_A6DC50
//   0x189BF33 test    al, al
//   0x189BF35 jz      loc_189C0F0
//   0x189BF3B mov     r12, qword ptr [rsp+158h+var_F8]
//   0x189BF40 mov     eax, [r12+10h]
//   0x189BF45 mov     ecx, [r12+14h]
//   0x189BF4A lea     rbp, [r12+8]
//   0x189BF4F lea     rdx, [rax+1]
//   0x189BF53 cmp     rdx, rcx
//   0x189BF56 ja      loc_189C378
//   0x189BF5C mov     rdx, [rbp+0]
//   0x189BF60 mov     [rdx+rax*8], rbx
//   0x189BF64 add     dword ptr [rbp+8], 1
//   0x189BF68 jmp     loc_189BC97
//   0x189BF6D align 10h
//   0x189BF70 movzx   eax, al
//   0x189BF73 sub     eax, 40h ; '@'
//   0x189BF76 cmp     eax, 2
//   0x189BF79 ja      loc_189C1A0
//   0x189BF7F mov     rax, [r15+50h]
//   0x189BF83 mov     rdx, rax
//   0x189BF86 and     rdx, 0FFFFFFFFFFFFFFF8h
//   0x189BF8A test    al, 4
//   0x189BF8C jnz     loc_189C398
//   0x189BF92 mov     rax, [rdx]
//   0x189BF95 and     rax, 0FFFFFFFFFFFFFFF0h
//   0x189BF99 mov     rdi, [rax]
//   0x189BF9C mov     rdx, [rdi+8]
//   0x189BFA0 and     rdx, 0FFFFFFFFFFFFFFF0h
//   0x189BFA4 mov     rax, [rdx]
//   0x189BFA7 movzx   edx, byte ptr [rax+10h]
//   0x189BFAB sub     edx, 23h ; '#'
//   0x189BFAE cmp     edx, 1
//   0x189BFB1 ja      loc_189C1A0
//   0x189BFB7 movzx   eax, byte ptr [rdi+10h]
//   0x189BFBB sub     eax, 23h ; '#'
//   0x189BFBE cmp     eax, 1
//   0x189BFC1 ja      loc_189C368
//   0x189BFC7 call    sub_9C7D40
//   0x189BFCC mov     r10, rax
//   0x189BFCF test    rax, rax
//   0x189BFD2 jz      loc_189C1A0
//   0x189BFD8 movzx   eax, byte ptr [rax+1Ch]
//   0x189BFDC mov     r11, [r15+30h]
//   0x189BFE0 and     eax, 7Fh
//   0x189BFE3 cmp     al, 14h
//   0x189BFE5 mov     eax, 0
//   0x189BFEA cmovnz  r10, rax
//   0x189BFEE test    r11, r11
//   0x189BFF1 jz      loc_189C3E0
//   0x189BFF7 and     r11, 0FFFFFFFFFFFFFFF0h
//   0x189BFFB mov     qword ptr [rsp+158h+var_148], r10
//   0x189C000 mov     rdi, [rbp+0]
//   0x189C004 xor     r9d, r9d
//   0x189C007 xor     r8d, r8d
//   0x189C00A mov     qword ptr [rsp+158h+var_150], r11
//   0x189C00F lea     rdx, [rsp+158h+arg_8]
//   0x189C017 sub     rsp, 8
//   0x189C01B mov     ecx, 1
//   0x189C020 push    0
//   0x189C022 mov     rsi, r15
//   0x189C025 push    0
//   0x189C027 push    0
//   0x189C029 call    sub_18F5260
//   0x189C02E add     rsp, 20h
//   0x189C032 mov     r10, qword ptr [rsp+158h+var_148]
//   0x189C037 mov     r11, qword ptr [rsp+158h+var_150]
//   0x189C03C test    r10, r10
//   0x189C03F jnz     loc_189BE68
//   0x189C045 mov     r9, r11
//   0x189C048 and     r9, 0FFFFFFFFFFFFFFF0h
//   0x189C04C jmp     loc_189C1A6
//   0x189C051 align 8
//   0x189C058 mov     [rsp+158h+var_F8], r13d
//   0x189C05D mov     rdi, [rbp+0]
//   0x189C061 mov     rdx, r11
//   0x189C064 lea     r8, [rsp+158h+var_C8]
//   0x189C06C mov     [rsp+158h+var_F8+4], r12d
//   0x189C071 mov     rax, [r10+28h]
//   0x189C075 mov     ecx, 1
//   0x189C07A mov     esi, [rsp+158h+arg_8]
//   0x189C081 mov     qword ptr [rsp+158h+var_150], r11
//   0x189C086 mov     qword ptr [rsp+158h+var_118], rax
//   0x189C08B lea     rax, unk_2BC6DE8
//   0x189C092 mov     dword ptr [rsp+158h+var_C0], 0F06h
//   0x189C09D add     rax, 10h
//   0x189C0A1 mov     qword ptr [rsp+158h+var_C8], rax
//   0x189C0A9 lea     rax, [rsp+158h+var_F8]
//   0x189C0AE mov     [rsp+158h+var_B8], rax
//   0x189C0B6 lea     rax, [rsp+158h+var_130]
//   0x189C0BB mov     [rsp+158h+var_B0], rax
//   0x189C0C3 lea     rax, [rsp+158h+var_118]
//   0x189C0C8 mov     [rsp+158h+var_A8], rax
//   0x189C0D0 call    sub_1E63C20
//   0x189C0D5 test    al, al
//   0x189C0D7 jnz     loc_189BC97
//   0x189C0DD mov     r11, qword ptr [rsp+158h+var_150]
//   0x189C0E2 jmp     loc_189BE7C
//   0x189C0E7 align 10h
//   0x189C0F0 mov     edx, [r12+750h]
//   0x189C0F8 mov     eax, [r12+748h]
//   0x189C100 mov     rbp, qword ptr [rsp+158h+var_F8]
//   0x189C105 add     eax, 1
//   0x189C108 lea     esi, [rdx+rdx]
//   0x189C10B lea     edi, ds:0[rax*4]
//   0x189C112 lea     ecx, [rsi+rdx]
//   0x189C115 mov     qword ptr [rsp+158h+var_C8], rbp
//   0x189C11D cmp     edi, ecx
//   0x189C11F jnb     loc_189C3AA
//   0x189C125 mov     ecx, edx
//   0x189C127 mov     esi, edx
//   0x189C129 sub     ecx, [r12+74Ch]
//   0x189C131 sub     ecx, eax
//   0x189C133 shr     esi, 3
//   0x189C136 cmp     ecx, esi
//   0x189C138 jbe     loc_189C3A8
//   0x189C13E cmp     qword ptr [rbp+0], 0FFFFFFFFFFFFF000h
//   0x189C146 mov     [r12+748h], eax
//   0x189C14E jz      short loc_189C159
//   0x189C150 sub     dword ptr [r12+74Ch], 1
//   0x189C159 mov     rax, qword ptr [rsp+158h+var_118]
//   0x189C15E mov     [rbp+0], rax
//   0x189C162 lea     rax, [rbp+18h]
//   0x189C166 add     rbp, 8
//   0x189C16A mov     [rbp+0], rax
//   0x189C16E mov     rax, 400000000h
//   0x189C178 mov     [rbp+8], rax
//   0x189C17C xor     eax, eax
//   0x189C17E jmp     loc_189BF5C
//   0x189C183 align 8
//   0x189C188 mov     qword ptr [rsp+158h+var_150], rdx
//   0x189C18D mov     rdi, rbx
//   0x189C190 call    rax
//   0x189C192 mov     rdx, qword ptr [rsp+158h+var_150]
//   0x189C197 jmp     loc_189BC24
//   0x189C19C align 20h
//   0x189C1A0 xor     r9d, r9d
//   0x189C1A3 xor     r11d, r11d
//   0x189C1A6 xor     r8d, r8d
//   0x189C1A9 mov     ecx, 1328h
//   0x189C1AE mov     rsi, rbp
//   0x189C1B1 mov     qword ptr [rsp+158h+var_140], r9
//   0x189C1B6 lea     rax, [rsp+158h+var_C8]
//   0x189C1BE mov     edx, [rsp+158h+arg_8]
//   0x189C1C5 mov     qword ptr [rsp+158h+var_148], r11
//   0x189C1CA mov     rdi, rax
//   0x189C1CD mov     qword ptr [rsp+158h+var_150], rax
//   0x189C1D2 call    sub_168B9F0
//   0x189C1D7 mov     rdi, qword ptr [rsp+158h+var_150]
//   0x189C1DC lea     rsi, [rsp+158h+arg_0]
//   0x189C1E4 call    sub_169D880
//   0x189C1E9 mov     rdi, qword ptr [rsp+158h+var_150]
//   0x189C1EE call    sub_15F7200
//   0x189C1F3 mov     edx, [r15+18h]
//   0x189C1F7 xor     r8d, r8d
//   0x189C1FA mov     rsi, rbp
//   0x189C1FD mov     rdi, qword ptr [rsp+158h+var_150]
//   0x189C202 mov     ecx, 71h ; 'q'
//   0x189C207 call    sub_168B9F0
//   0x189C20C mov     rdi, qword ptr [rsp+158h+var_150]
//   0x189C211 call    sub_15F7200
//   0x189C216 movzx   eax, byte ptr [r15+1Ch]
//   0x189C21B mov     r11, qword ptr [rsp+158h+var_148]
//   0x189C220 mov     r9, qword ptr [rsp+158h+var_140]
//   0x189C225 and     eax, 7Fh
//   0x189C228 sub     eax, 40h ; '@'
//   0x189C22B cmp     eax, 2
//   0x189C22E jbe     loc_189BE83
//   0x189C234 lea     rax, [rsp+158h+var_F8]
//   0x189C239 mov     qword ptr [rsp+158h+var_138], rax
//   0x189C23E jmp     loc_189C2F0
//   0x189C243 align 8
//   0x189C248 mov     rdi, [rbp+0]
//   0x189C24C mov     r12, [rsp+158h+arg_20]
//   0x189C254 mov     rsi, r11
//   0x189C257 xor     edx, edx
//   0x189C259 call    sub_1E61050
//   0x189C25E push    0
//   0x189C260 shr     r12, 20h
//   0x189C264 mov     rdi, rbp
//   0x189C267 push    0
//   0x189C269 mov     r9d, r12d
//   0x189C26C mov     rcx, rax
//   0x189C26F push    0
//   0x189C271 push    0
//   0x189C273 push    0
//   0x189C275 push    0
//   0x189C277 push    [rsp+188h+arg_18]
//   0x189C27E push    [rsp+190h+arg_10]
//   0x189C285 mov     r8d, dword ptr [rsp+198h+arg_20]
//   0x189C28D mov     edx, [rsp+198h+arg_8]
//   0x189C294 mov     rsi, qword ptr [rsp+198h+var_158]
//   0x189C299 call    sub_1A8CEF0
//   0x189C29E add     rsp, 40h
//   0x189C2A2 mov     rdi, rax
//   0x189C2A5 test    dl, dl
//   0x189C2A7 jnz     loc_189BC97
//   0x189C2AD test    rax, rax
//   0x189C2B0 jz      loc_189BC97
//   0x189C2B6 lea     rsi, [rsp+158h+var_120]
//   0x189C2BB call    sub_1E5F010
//   0x189C2C0 mov     r11, rax
//   0x189C2C3 mov     rax, [rsp+158h+var_120]
//   0x189C2C8 test    rax, rax
//   0x189C2CB jnz     loc_189BEC0
//   0x189C2D1 jmp     loc_189BEA6
//   0x189C2D6 align 20h
//   0x189C2E0 mov     rdi, qword ptr [rsp+158h+var_150]
//   0x189C2E5 call    sub_17A1D90
//   0x189C2EA xor     r9d, r9d
//   0x189C2ED xor     r11d, r11d
//   0x189C2F0 mov     r15, qword ptr [rsp+158h+var_150]
//   0x189C2F5 xor     r8d, r8d
//   0x189C2F8 mov     ecx, 14EAh
//   0x189C2FD mov     rsi, rbp
//   0x189C300 mov     edx, [rsp+158h+arg_8]
//   0x189C307 mov     qword ptr [rsp+158h+var_140], r9
//   0x189C30C mov     rdi, r15
//   0x189C30F mov     qword ptr [rsp+158h+var_148], r11
//   0x189C314 call    sub_168B9F0
//   0x189C319 lea     rsi, [rsp+158h+arg_0]
//   0x189C321 mov     rdi, r15
//   0x189C324 call    sub_169D880
//   0x189C329 lea     rsi, [rsp+158h+var_130]
//   0x189C32E mov     rdi, rax
//   0x189C331 call    sub_169D880
//   0x189C336 mov     rsi, qword ptr [rsp+158h+var_138]
//   0x189C33B mov     [rsp+158h+var_F8], r13d
//   0x189C340 mov     rdi, rax
//   0x189C343 mov     [rsp+158h+var_F8+4], r12d
//   0x189C348 call    sub_1587DB0
//   0x189C34D mov     rdi, r15
//   0x189C350 call    sub_15F7200
//   0x189C355 mov     r11, qword ptr [rsp+158h+var_148]
//   0x189C35A mov     r9, qword ptr [rsp+158h+var_140]
//   0x189C35F jmp     loc_189BE83
//   0x189C364 align 8
//   0x189C368 call    sub_F63050
//   0x189C36D mov     rdi, rax
//   0x189C370 jmp     loc_189BFC7
//   0x189C375 align 8
//   0x189C378 lea     rsi, [r12+18h]
//   0x189C37D mov     ecx, 8
//   0x189C382 mov     rdi, rbp
//   0x189C385 call    sub_2237220
//   0x189C38A mov     eax, [r12+10h]
//   0x189C38F jmp     loc_189BF5C
//   0x189C394 align 8
//   0x189C398 mov     rax, [rdx+8]
//   0x189C39C jmp     loc_189BF95
//   0x189C3A1 align 8
//   0x189C3A8 mov     esi, edx
//   0x189C3AA mov     rdi, r14
//   0x189C3AD call    sub_A8C350
//   0x189C3B2 mov     rdx, r13
//   0x189C3B5 mov     rsi, r15
//   0x189C3B8 mov     rdi, r14
//   0x189C3BB call    sub_A6DC50
//   0x189C3C0 mov     eax, [r12+748h]
//   0x189C3C8 mov     rbp, qword ptr [rsp+158h+var_C8]
//   0x189C3D0 add     eax, 1
//   0x189C3D3 jmp     loc_189C13E
//   0x189C3D8 align 20h
//   0x189C3E0 mov     rsi, r15
//   0x189C3E3 mov     rdi, r14
//   0x189C3E6 mov     qword ptr [rsp+158h+var_150], r10
//   0x189C3EB call    sub_A7AA70
//   0x189C3F0 mov     r10, qword ptr [rsp+158h+var_150]
//   0x189C3F5 mov     r11, rax
//   0x189C3F8 jmp     loc_189BFFB
// ============================================================

void sub_189BB90(/* signature unknown */)
{
    // see disassembly above
}

