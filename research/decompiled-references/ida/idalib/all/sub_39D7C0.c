// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x39D7C0
// Name:           sub_39D7C0
// Function size:  2992 bytes (668 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x39D7C0 push    r15
//   0x39D7C2 push    r14
//   0x39D7C4 push    r13
//   0x39D7C6 push    r12
//   0x39D7C8 mov     r12, rdi
//   0x39D7CB push    rbp
//   0x39D7CC push    rbx
//   0x39D7CD mov     rbx, rsi
//   0x39D7D0 sub     rsp, 98h
//   0x39D7D7 mov     rdi, [rdi]
//   0x39D7DA mov     r13, fs:28h
//   0x39D7E3 mov     [rsp+0C8h+var_40], r13
//   0x39D7EB mov     r13d, edx
//   0x39D7EE mov     rbp, [rdi+5F8h]
//   0x39D7F5 cmp     edx, 1
//   0x39D7F8 jz      loc_39DB08
//   0x39D7FE test    rbx, rbx
//   0x39D801 jz      loc_39DD60
//   0x39D807 mov     esi, 3Ah ; ':'; c
//   0x39D80C mov     rdi, rbx; s
//   0x39D80F call    _strchr
//   0x39D814 mov     [rsp+0C8h+var_C0], rax
//   0x39D819 mov     r14, rax
//   0x39D81C test    rax, rax
//   0x39D81F jz      short loc_39D856
//   0x39D821 sub     rax, rbx
//   0x39D824 lea     r15, [rsp+0C8h+var_68]
//   0x39D829 mov     rsi, rbx
//   0x39D82C movsxd  rcx, eax
//   0x39D82F lea     edx, [rax+1]
//   0x39D832 mov     eax, 10h
//   0x39D837 mov     rdi, r15
//   0x39D83A cmp     rcx, 10h
//   0x39D83E movsxd  rdx, edx
//   0x39D841 mov     rbx, r15
//   0x39D844 cmovnb  rdx, rax
//   0x39D848 add     r14, 1
//   0x39D84C call    _qstrncpy
//   0x39D851 mov     [rsp+0C8h+var_C0], r14
//   0x39D856 cmp     r13d, 1
//   0x39D85A jz      loc_39DB30
//   0x39D860 cmp     qword ptr [rbp+28h], 0
//   0x39D865 mov     byte ptr [rsp+0C8h+n], 0
//   0x39D86A jz      loc_39DD90
//   0x39D870 mov     rax, [r12+10h]
//   0x39D875 mov     r15, [rax+18h]
//   0x39D879 mov     [rsp+0C8h+var_B0], r15
//   0x39D87E mov     r14, [r15]
//   0x39D881 test    r14, r14
//   0x39D884 jnz     short loc_39D8A1
//   0x39D886 jmp     loc_39DF70
//   0x39D88B align 10h
//   0x39D890 mov     r14, [r15+8]
//   0x39D894 add     r15, 8
//   0x39D898 test    r14, r14
//   0x39D89B jz      loc_39DF70
//   0x39D8A1 movzx   ebp, byte ptr [r14]
//   0x39D8A5 xor     eax, eax
//   0x39D8A7 mov     rdi, rbx; s1
//   0x39D8AA cmp     bpl, 2Dh ; '-'
//   0x39D8AE setz    al
//   0x39D8B1 add     r14, rax
//   0x39D8B4 mov     rsi, r14; s2
//   0x39D8B7 call    _strcasecmp
//   0x39D8BC mov     edx, eax
//   0x39D8BE test    eax, eax
//   0x39D8C0 jnz     short loc_39D890
//   0x39D8C2 mov     rax, [rsp+0C8h+var_B0]
//   0x39D8C7 mov     rcx, r15
//   0x39D8CA sub     rcx, rax
//   0x39D8CD sar     rcx, 3
//   0x39D8D1 mov     ebx, ecx
//   0x39D8D3 cmp     ecx, 0FFFFFFFFh
//   0x39D8D6 jz      loc_39DF64
//   0x39D8DC cmp     bpl, 2Dh ; '-'
//   0x39D8E0 setz    byte ptr [rsp+0C8h+var_B0]
//   0x39D8E5 cmp     byte ptr [rsp+0C8h+n], 0
//   0x39D8EA jnz     loc_39DE90
//   0x39D8F0 mov     dword ptr [rsp+0C8h+n], edx
//   0x39D8F4 call    _is_cvt64
//   0x39D8F9 mov     edx, dword ptr [rsp+0C8h+n]
//   0x39D8FD test    al, al
//   0x39D8FF mov     ebp, eax
//   0x39D901 jnz     loc_39E095
//   0x39D907 xor     edx, edx
//   0x39D909 xor     eax, eax
//   0x39D90B mov     esi, ebx
//   0x39D90D mov     edi, 2
//   0x39D912 call    sub_3792E0
//   0x39D917 test    rax, rax
//   0x39D91A js      loc_39E130
//   0x39D920 mov     rdi, [r12]
//   0x39D924 xor     esi, esi
//   0x39D926 lea     r15, [rsp+0C8h+s]
//   0x39D92B call    sub_51EB30
//   0x39D930 mov     rdi, [r12]
//   0x39D934 mov     ecx, 10h
//   0x39D939 mov     rdx, r15
//   0x39D93C mov     esi, 1
//   0x39D941 call    sub_630CA0
//   0x39D946 test    rax, rax
//   0x39D949 jnz     short loc_39D950
//   0x39D94B mov     [rsp+0C8h+s], 0; __int64
//   0x39D950 mov     [rsp+0C8h+var_88], 0
//   0x39D959 pxor    xmm0, xmm0
//   0x39D95D mov     rdi, r15; s
//   0x39D960 movups  xmmword ptr [rsp+0C8h+var_80], xmm0
//   0x39D965 call    _strlen
//   0x39D96A lea     rdi, [rsp+0C8h+var_88]
//   0x39D96F mov     ecx, 1
//   0x39D974 xor     esi, esi
//   0x39D976 lea     rdx, [rax+1]
//   0x39D97A mov     rbx, rax
//   0x39D97D mov     [rsp+0C8h+n], rdx; int
//   0x39D982 call    _qvector_reserve
//   0x39D987 mov     rdx, [rsp+0C8h+n]
//   0x39D98C mov     rsi, r15; src
//   0x39D98F mov     rdi, rax; dest
//   0x39D992 mov     [rsp+0C8h+var_88], rax; int
//   0x39D997 mov     [rsp+0C8h+var_80], rdx
//   0x39D99C mov     rdx, rbx; n
//   0x39D99F call    _memmove
//   0x39D9A4 mov     rax, [rsp+0C8h+var_88]
//   0x39D9A9 mov     byte ptr [rax+rbx], 0
//   0x39D9AD mov     r15, [rsp+0C8h+var_88]
//   0x39D9B2 cmp     [rsp+0C8h+var_80], 0
//   0x39D9B8 mov     rsi, r15
//   0x39D9BB jnz     short loc_39D9C4
//   0x39D9BD lea     rsi, haystack; s2
//   0x39D9C4 mov     rdi, r14; s1
//   0x39D9C7 call    _strcasecmp
//   0x39D9CC mov     ebx, eax
//   0x39D9CE test    r15, r15
//   0x39D9D1 jz      short loc_39D9E4
//   0x39D9D3 mov     [rsp+0C8h+var_80], 0; void *
//   0x39D9DC mov     rdi, r15; ptr
//   0x39D9DF call    _qfree
//   0x39D9E4 test    ebx, ebx
//   0x39D9E6 jnz     loc_39E118
//   0x39D9EC cmp     byte ptr [rsp+0C8h+var_B0], 0
//   0x39D9F1 jz      loc_39E0E8
//   0x39D9F7 cmp     r13d, 3
//   0x39D9FB jz      loc_39E190
//   0x39DA01 lea     rbx, byte_2CCB4CB
//   0x39DA08 cmp     byte ptr [rbx], 0
//   0x39DA0B jnz     loc_39DA9A
//   0x39DA11 mov     rax, [r12+10h]
//   0x39DA16 mov     rdi, [r12]
//   0x39DA1A mov     rdx, [rax+28h]
//   0x39DA1E cmp     qword ptr [rdx], 0
//   0x39DA22 jz      loc_39E213
//   0x39DA28 xor     r15d, r15d
//   0x39DA2B nop     dword ptr [rax+rax+00h]
//   0x39DA30 add     r15d, 1
//   0x39DA34 movsxd  rax, r15d
//   0x39DA37 cmp     qword ptr [rdx+rax*8], 0
//   0x39DA3C jnz     short loc_39DA30
//   0x39DA3E mov     esi, 8
//   0x39DA43 call    sub_631AD0
//   0x39DA48 movzx   eax, al
//   0x39DA4B cmp     eax, r15d
//   0x39DA4E jge     loc_39E21D
//   0x39DA54 mov     rdi, [r12]
//   0x39DA58 mov     esi, 8
//   0x39DA5D call    sub_631AD0
//   0x39DA62 mov     rdx, [r12+10h]
//   0x39DA67 movzx   ecx, al
//   0x39DA6A mov     rdx, [rdx+28h]
//   0x39DA6E lea     rcx, [rdx+rcx*8+8]
//   0x39DA73 nop     word ptr [rax+rax+00000000h]
//   0x39DA7E xchg    ax, ax
//   0x39DA80 cmp     qword ptr [rdx], 0
//   0x39DA84 jz      short loc_39DA9A
//   0x39DA86 add     rdx, 8
//   0x39DA8A cmp     rdx, rcx
//   0x39DA8D jnz     short loc_39DA80
//   0x39DA8F movzx   esi, al
//   0x39DA92 mov     rdi, r12
//   0x39DA95 call    sub_39AA50
//   0x39DA9A mov     rdi, [r12]
//   0x39DA9E call    sub_4CAE90
//   0x39DAA3 test    bpl, bpl
//   0x39DAA6 jz      loc_39E030
//   0x39DAAC mov     rdi, [r12]; int
//   0x39DAB0 cmp     r13d, 1
//   0x39DAB4 jnz     short loc_39DAC3
//   0x39DAB6 cmp     dword ptr [rdi+98h], 2
//   0x39DABD jnz     loc_39E272
//   0x39DAC3 call    sub_682080
//   0x39DAC8 cmp     [rsp+0C8h+var_C0], 0
//   0x39DACE jz      short loc_39DAEF
//   0x39DAD0 mov     rsi, [rsp+0C8h+var_C0]
//   0x39DAD5 xor     eax, eax
//   0x39DAD7 mov     edx, 1
//   0x39DADC mov     edi, 9
//   0x39DAE1 call    sub_3792E0
//   0x39DAE6 test    rax, rax
//   0x39DAE9 js      loc_39E05B
//   0x39DAEF cmp     byte ptr [rbx], 0
//   0x39DAF2 jz      loc_39E204
//   0x39DAF8 mov     eax, 1
//   0x39DAFD jmp     loc_39DD62
//   0x39DB02 align 8
//   0x39DB08 cmp     byte ptr [rdi+9Ch], 0
//   0x39DB0F jz      loc_39D7FE
//   0x39DB15 mov     edx, 10h
//   0x39DB1A mov     esi, 2Dh ; '-'
//   0x39DB1F call    sub_631C90
//   0x39DB24 test    al, al
//   0x39DB26 jnz     loc_39D7FE
//   0x39DB2C jmp     short loc_39DAF8
//   0x39DB2E align 10h
//   0x39DB30 mov     rdi, [r12]
//   0x39DB34 cmp     byte ptr [rdi+9Ch], 0
//   0x39DB3B jz      loc_39D860
//   0x39DB41 lea     r15, [rsp+0C8h+s]
//   0x39DB46 mov     ecx, 10h
//   0x39DB4B mov     esi, 1
//   0x39DB50 mov     rdx, r15
//   0x39DB53 call    sub_630CA0
//   0x39DB58 test    rax, rax
//   0x39DB5B jz      loc_39E160
//   0x39DB61 pxor    xmm0, xmm0
//   0x39DB65 mov     rdi, r15; s
//   0x39DB68 lea     r14, [rsp+0C8h+var_88]
//   0x39DB6D mov     [rsp+0C8h+var_88], 0
//   0x39DB76 movups  xmmword ptr [rsp+0C8h+var_80], xmm0
//   0x39DB7B call    _strlen
//   0x39DB80 mov     ecx, 1
//   0x39DB85 xor     esi, esi
//   0x39DB87 mov     rdi, r14
//   0x39DB8A lea     rdx, [rax+1]
//   0x39DB8E mov     [rsp+0C8h+n], rax
//   0x39DB93 mov     [rsp+0C8h+var_B0], rdx
//   0x39DB98 call    _qvector_reserve
//   0x39DB9D mov     rdx, [rsp+0C8h+var_B0]
//   0x39DBA2 mov     r14, [rsp+0C8h+n]
//   0x39DBA7 mov     rsi, r15; src
//   0x39DBAA mov     rdi, rax; dest
//   0x39DBAD mov     [rsp+0C8h+var_88], rax
//   0x39DBB2 mov     [rsp+0C8h+var_80], rdx
//   0x39DBB7 mov     rdx, r14; n
//   0x39DBBA call    _memmove
//   0x39DBBF mov     rax, [rsp+0C8h+var_88]
//   0x39DBC4 mov     byte ptr [rax+r14], 0
//   0x39DBC9 mov     r15, [rsp+0C8h+var_88]
//   0x39DBCE cmp     [rsp+0C8h+var_80], 0
//   0x39DBD4 mov     rsi, r15
//   0x39DBD7 jnz     short loc_39DBE0
//   0x39DBD9 lea     rsi, haystack; s2
//   0x39DBE0 mov     rdi, rbx; s1
//   0x39DBE3 call    _strcasecmp
//   0x39DBE8 test    eax, eax
//   0x39DBEA jz      loc_39E140
//   0x39DBF0 test    r15, r15
//   0x39DBF3 jz      loc_39DAF8
//   0x39DBF9 mov     [rsp+0C8h+var_80], 0
//   0x39DC02 mov     rdi, r15; ptr
//   0x39DC05 call    _qfree
//   0x39DC0A jmp     loc_39DAF8
//   0x39DC0F align 10h
//   0x39DC10 lea     r15, [rsp+0C8h+s]
//   0x39DC15 mov     ecx, 10h
//   0x39DC1A mov     esi, 1
//   0x39DC1F mov     rdx, r15
//   0x39DC22 call    sub_630CA0
//   0x39DC27 test    rax, rax
//   0x39DC2A jnz     short loc_39DC31
//   0x39DC2C mov     [rsp+0C8h+s], 0
//   0x39DC31 pxor    xmm0, xmm0
//   0x39DC35 mov     rdi, r15; s
//   0x39DC38 lea     r14, [rsp+0C8h+var_88]
//   0x39DC3D mov     [rsp+0C8h+var_88], 0
//   0x39DC46 movups  xmmword ptr [rsp+0C8h+var_80], xmm0
//   0x39DC4B call    _strlen
//   0x39DC50 mov     ecx, 1
//   0x39DC55 xor     esi, esi
//   0x39DC57 mov     rdi, r14
//   0x39DC5A lea     r12, [rax+1]
//   0x39DC5E mov     rbp, rax
//   0x39DC61 mov     rdx, r12
//   0x39DC64 call    _qvector_reserve
//   0x39DC69 mov     rdx, rbp; n
//   0x39DC6C mov     rdi, rax; dest
//   0x39DC6F mov     rsi, r15; src
//   0x39DC72 mov     [rsp+0C8h+var_88], rax
//   0x39DC77 mov     [rsp+0C8h+var_80], r12
//   0x39DC7C call    _memmove
//   0x39DC81 mov     rax, [rsp+0C8h+var_88]
//   0x39DC86 lea     rdx, haystack
//   0x39DC8D mov     byte ptr [rax+rbp], 0
//   0x39DC91 cmp     [rsp+0C8h+var_80], 0
//   0x39DC97 jz      short loc_39DC9E
//   0x39DC99 mov     rdx, [rsp+0C8h+var_88]
//   0x39DC9E lea     rdi, [rsp+0C8h+var_A8]
//   0x39DCA3 lea     rsi, aBecauseTheUser; "\nbecause the user has specified '%s'"
//   0x39DCAA xor     eax, eax
//   0x39DCAC call    sub_35A790
//   0x39DCB1 mov     rdi, [rsp+0C8h+var_88]; ptr
//   0x39DCB6 test    rdi, rdi
//   0x39DCB9 jz      short loc_39DCC9
//   0x39DCBB mov     [rsp+0C8h+var_80], 0
//   0x39DCC4 call    _qfree
//   0x39DCC9 mov     rax, qword ptr [rsp+0C8h+var_A0]
//   0x39DCCE pxor    xmm0, xmm0
//   0x39DCD2 mov     rcx, [rsp+0C8h+var_A8]
//   0x39DCD7 mov     [rsp+0C8h+var_88], 0
//   0x39DCE0 movups  xmmword ptr [rsp+0C8h+var_80], xmm0
//   0x39DCE5 test    rax, rax
//   0x39DCE8 jz      loc_39E0D7
//   0x39DCEE mov     rdx, rbx
//   0x39DCF1 lea     rsi, aCannotSetTheTa; "Cannot set the target processor type '%"...
//   0x39DCF8 mov     rdi, r14
//   0x39DCFB xor     eax, eax
//   0x39DCFD call    sub_35A790
//   0x39DD02 mov     rax, [rsp+0C8h+var_80]
//   0x39DD07 lea     rsi, haystack
//   0x39DD0E cmp     r13d, 1
//   0x39DD12 jz      loc_39E2CA
//   0x39DD18 test    rax, rax
//   0x39DD1B jz      short loc_39DD22
//   0x39DD1D mov     rsi, [rsp+0C8h+var_88]
//   0x39DD22 lea     rdi, unk_22D5D2E
//   0x39DD29 xor     eax, eax
//   0x39DD2B call    sub_378D50
//   0x39DD30 mov     rdi, [rsp+0C8h+var_88]; ptr
//   0x39DD35 test    rdi, rdi
//   0x39DD38 jz      short loc_39DD48
//   0x39DD3A mov     [rsp+0C8h+var_80], 0
//   0x39DD43 call    _qfree
//   0x39DD48 mov     rdi, [rsp+0C8h+var_A8]; ptr
//   0x39DD4D test    rdi, rdi
//   0x39DD50 jz      short loc_39DD60
//   0x39DD52 mov     qword ptr [rsp+0C8h+var_A0], 0
//   0x39DD5B call    _qfree
//   0x39DD60 xor     eax, eax
//   0x39DD62 mov     rdx, [rsp+0C8h+var_40]
//   0x39DD6A sub     rdx, fs:28h
//   0x39DD73 jnz     loc_39E26D
//   0x39DD79 add     rsp, 98h
//   0x39DD80 pop     rbx
//   0x39DD81 pop     rbp
//   0x39DD82 pop     r12
//   0x39DD84 pop     r13
//   0x39DD86 pop     r14
//   0x39DD88 pop     r15
//   0x39DD8A retn
//   0x39DD8B align 10h
//   0x39DD90 mov     rdi, [r12]
//   0x39DD94 mov     edx, r13d
//   0x39DD97 mov     rsi, rbx
//   0x39DD9A call    sub_39D560
//   0x39DD9F mov     byte ptr [rsp+0C8h+n], al
//   0x39DDA3 test    al, al
//   0x39DDA5 jnz     loc_39D870
//   0x39DDAB cmp     r13d, 1
//   0x39DDAF jnz     short loc_39DD60
//   0x39DDB1 mov     rax, [rsp+0C8h+var_40]
//   0x39DDB9 sub     rax, fs:28h
//   0x39DDC2 jnz     loc_39E327
//   0x39DDC8 xor     edi, edi
//   0x39DDCA xor     eax, eax
//   0x39DDCC call    sub_39AE70
//   0x39DDD1 align 8
//   0x39DDD8 mov     rax, [rdi+688h]
//   0x39DDDF lea     r14, [rsp+0C8h+var_88]
//   0x39DDE4 mov     rbp, [rax+658h]
//   0x39DDEB call    sub_681C40
//   0x39DDF0 mov     rdi, r14
//   0x39DDF3 mov     byte ptr [r12+911h], 1
//   0x39DDFC mov     [rsp+0C8h+var_88], rbp
//   0x39DE01 call    _netnode_kill
//   0x39DE06 mov     rdi, [r12]
//   0x39DE0A mov     edx, r13d
//   0x39DE0D mov     rsi, rbx
//   0x39DE10 call    sub_39D560
//   0x39DE15 test    al, al
//   0x39DE17 jz      short loc_39DDAB
//   0x39DE19 mov     rax, [r12+10h]
//   0x39DE1E mov     r15, [rax+18h]
//   0x39DE22 mov     [rsp+0C8h+n], r15
//   0x39DE27 mov     r14, [r15]
//   0x39DE2A test    r14, r14
//   0x39DE2D jnz     short loc_39DE49
//   0x39DE2F jmp     loc_39E23C
//   0x39DE34 align 8
//   0x39DE38 mov     r14, [r15+8]
//   0x39DE3C add     r15, 8
//   0x39DE40 test    r14, r14
//   0x39DE43 jz      loc_39E23C
//   0x39DE49 movzx   ebp, byte ptr [r14]
//   0x39DE4D xor     eax, eax
//   0x39DE4F mov     rdi, rbx; s1
//   0x39DE52 cmp     bpl, 2Dh ; '-'
//   0x39DE56 setz    al
//   0x39DE59 add     r14, rax
//   0x39DE5C mov     rsi, r14; s2
//   0x39DE5F call    _strcasecmp
//   0x39DE64 test    eax, eax
//   0x39DE66 jnz     short loc_39DE38
//   0x39DE68 mov     rcx, [rsp+0C8h+n]
//   0x39DE6D mov     rax, r15
//   0x39DE70 sub     rax, rcx
//   0x39DE73 sar     rax, 3
//   0x39DE77 mov     ebx, eax
//   0x39DE79 cmp     eax, 0FFFFFFFFh
//   0x39DE7C jz      loc_39E23C
//   0x39DE82 cmp     bpl, 2Dh ; '-'
//   0x39DE86 setz    byte ptr [rsp+0C8h+var_B0]
//   0x39DE8B nop     dword ptr [rax+rax+00h]
//   0x39DE90 mov     rax, [r12]
//   0x39DE94 cmp     dword ptr [rax+98h], 2
//   0x39DE9B jz      loc_39E170
//   0x39DEA1 call    _is_cvt64
//   0x39DEA6 mov     ebp, 1
//   0x39DEAB test    al, al
//   0x39DEAD jnz     loc_39E090
//   0x39DEB3 mov     r15, [r12]
//   0x39DEB7 mov     edi, [r15+98h]
//   0x39DEBE test    edi, edi
//   0x39DEC0 jz      loc_39E2F5
//   0x39DEC6 mov     rdi, r14; s
//   0x39DEC9 call    _strlen
//   0x39DECE mov     edx, 10h
//   0x39DED3 mov     esi, 1
//   0x39DED8 mov     rdi, r15
//   0x39DEDB cmp     rax, rdx
//   0x39DEDE mov     rcx, rdx
//   0x39DEE1 mov     rdx, r14
//   0x39DEE4 cmovbe  rcx, rax
//   0x39DEE8 call    sub_632C30
//   0x39DEED mov     rax, [r12]
//   0x39DEF1 mov     esi, 1
//   0x39DEF6 mov     rdi, [rax+688h]
//   0x39DEFD add     rdi, 28h ; '('
//   0x39DF01 call    sub_6008E0
//   0x39DF06 mov     rdi, [r12]
//   0x39DF0A cmp     dword ptr [rdi+98h], 2
//   0x39DF11 jz      loc_39E232
//   0x39DF17 xor     esi, esi
//   0x39DF19 call    sub_638430
//   0x39DF1E test    al, al
//   0x39DF20 jz      loc_39E29D
//   0x39DF26 xor     eax, eax
//   0x39DF28 movzx   edx, bpl
//   0x39DF2C mov     esi, ebx
//   0x39DF2E mov     edi, 2
//   0x39DF33 call    sub_3792E0
//   0x39DF38 test    rax, rax
//   0x39DF3B js      loc_39E130
//   0x39DF41 mov     rdi, [r12]
//   0x39DF45 mov     ebp, 1
//   0x39DF4A cmp     dword ptr [rdi+98h], 2
//   0x39DF51 jnz     loc_39D924
//   0x39DF57 mov     rdi, r12
//   0x39DF5A call    sub_39CDD0
//   0x39DF5F jmp     loc_39D920
//   0x39DF64 mov     rbx, r14
//   0x39DF67 nop     word ptr [rax+rax+00000000h]
//   0x39DF70 mov     rdi, [r12]
//   0x39DF74 cmp     dword ptr [rdi+98h], 2
//   0x39DF7B jz      loc_39DDD8
//   0x39DF81 cmp     byte ptr [rsp+0C8h+n], 0
//   0x39DF86 jnz     loc_39E23C
//   0x39DF8C mov     [rsp+0C8h+var_A8], 0
//   0x39DF95 pxor    xmm0, xmm0
//   0x39DF99 movups  [rsp+0C8h+var_A0], xmm0
//   0x39DF9E cmp     r13d, 3
//   0x39DFA2 jz      short loc_39DFB1
//   0x39DFA4 cmp     byte ptr [rdi+9Ch], 0
//   0x39DFAB jnz     loc_39DC10
//   0x39DFB1 cmp     dword ptr [rdi+98h], 2
//   0x39DFB8 jz      loc_39E0C0
//   0x39DFBE lea     rdi, [rsp+0C8h+var_A8]
//   0x39DFC3 mov     ecx, 1
//   0x39DFC8 mov     edx, 36h ; '6'
//   0x39DFCD xor     esi, esi
//   0x39DFCF call    _qvector_reserve
//   0x39DFD4 movdqa  xmm0, cs:xmmword_23A7760
//   0x39DFDC mov     [rsp+0C8h+var_A8], rax
//   0x39DFE1 mov     rcx, 726F737365636F72h
//   0x39DFEB lea     r14, [rsp+0C8h+var_88]
//   0x39DFF0 mov     qword ptr [rsp+0C8h+var_A0], 36h ; '6'
//   0x39DFF9 movups  xmmword ptr [rax], xmm0
//   0x39DFFC movdqa  xmm0, cs:xmmword_23A7770
//   0x39E004 movups  xmmword ptr [rax+10h], xmm0
//   0x39E008 movdqa  xmm0, cs:xmmword_23A7780
//   0x39E010 movups  xmmword ptr [rax+20h], xmm0
//   0x39E014 mov     [rax+2Dh], rcx
//   0x39E018 mov     rax, [rsp+0C8h+var_A8]
//   0x39E01D mov     byte ptr [rax+35h], 0
//   0x39E021 mov     rax, qword ptr [rsp+0C8h+var_A0]
//   0x39E026 jmp     loc_39DCCE
//   0x39E02B align 10h
//   0x39E030 cmp     [rsp+0C8h+var_C0], 0
//   0x39E036 jz      loc_39DAF8
//   0x39E03C mov     rsi, [rsp+0C8h+var_C0]
//   0x39E041 xor     eax, eax
//   0x39E043 mov     edx, 1
//   0x39E048 mov     edi, 9
//   0x39E04D call    sub_3792E0
//   0x39E052 test    rax, rax
//   0x39E055 jns     loc_39DAF8
//   0x39E05B mov     rax, [rsp+0C8h+var_40]
//   0x39E063 sub     rax, fs:28h
//   0x39E06C jnz     loc_39E293
//   0x39E072 mov     rdx, [rsp+0C8h+var_C0]
//   0x39E077 mov     rsi, r14
//   0x39E07A lea     rdi, aProcessorModul; "Processor module '%s' did not accept th"...
//   0x39E081 xor     eax, eax
//   0x39E083 call    sub_378C70
//   0x39E088 align 10h
//   0x39E090 mov     edx, 1
//   0x39E095 xor     eax, eax
//   0x39E097 mov     esi, ebx
//   0x39E099 mov     edi, 2
//   0x39E09E call    sub_3792E0
//   0x39E0A3 test    rax, rax
//   0x39E0A6 js      loc_39E130
//   0x39E0AC mov     rdi, [r12]
//   0x39E0B0 xor     ebp, ebp
//   0x39E0B2 jmp     loc_39D924
//   0x39E0B7 align 20h
//   0x39E0C0 mov     [rsp+0C8h+var_88], 0
//   0x39E0C9 pxor    xmm0, xmm0
//   0x39E0CD lea     r14, [rsp+0C8h+var_88]
//   0x39E0D2 movups  xmmword ptr [rsp+0C8h+var_80], xmm0
//   0x39E0D7 lea     rcx, haystack
//   0x39E0DE jmp     loc_39DCEE
//   0x39E0E3 align 8
//   0x39E0E8 mov     rdi, r14; s
//   0x39E0EB call    _strlen
//   0x39E0F0 mov     edx, 10h
//   0x39E0F5 mov     rdi, [r12]
//   0x39E0F9 mov     esi, 1
//   0x39E0FE cmp     rax, rdx
//   0x39E101 mov     rcx, rdx
//   0x39E104 mov     rdx, r14
//   0x39E107 cmovbe  rcx, rax
//   0x39E10B call    sub_632C30
//   0x39E110 jmp     loc_39D9F7
//   0x39E115 align 8
//   0x39E118 mov     rsi, r14
//   0x39E11B lea     rdi, aSettingProcess; "Setting processor to '%s'\n"
//   0x39E122 xor     eax, eax
//   0x39E124 call    sub_368890
//   0x39E129 jmp     loc_39D9EC
//   0x39E12E align 10h
//   0x39E130 mov     rdi, [r12]
//   0x39E134 mov     rbx, r14
//   0x39E137 jmp     loc_39DF8C
//   0x39E13C align 20h
//   0x39E140 test    r15, r15
//   0x39E143 jz      loc_39D860
//   0x39E149 mov     [rsp+0C8h+var_80], 0
//   0x39E152 mov     rdi, r15; ptr
//   0x39E155 call    _qfree
//   0x39E15A jmp     loc_39D860
//   0x39E15F align 20h
//   0x39E160 mov     [rsp+0C8h+s], 0
//   0x39E165 jmp     loc_39DB61
//   0x39E16A align 10h
//   0x39E170 call    _is_cvt64
//   0x39E175 mov     ebp, eax
//   0x39E177 test    al, al
//   0x39E179 jz      loc_39DEB3
//   0x39E17F xor     edx, edx
//   0x39E181 jmp     loc_39E095
//   0x39E186 align 10h
//   0x39E190 mov     rax, [r12]
//   0x39E194 mov     esi, 14h
//   0x39E199 mov     byte ptr [rax+9Ch], 1
//   0x39E1A0 mov     rdi, [r12]
//   0x39E1A4 call    sub_631AD0
//   0x39E1A9 mov     rdi, [r12]
//   0x39E1AD mov     esi, 13h
//   0x39E1B2 mov     rbx, rax
//   0x39E1B5 call    sub_631AD0
//   0x39E1BA mov     rdx, rbx
//   0x39E1BD mov     ecx, 28h ; '('
//   0x39E1C2 mov     rdi, r12
//   0x39E1C5 mov     rsi, rax
//   0x39E1C8 call    sub_3A61A0
//   0x39E1CD mov     rdi, [r12]
//   0x39E1D1 mov     esi, 14h
//   0x39E1D6 call    sub_631AD0
//   0x39E1DB mov     rdi, [r12]
//   0x39E1DF mov     esi, 13h
//   0x39E1E4 mov     rbx, rax
//   0x39E1E7 call    sub_631AD0
//   0x39E1EC mov     ecx, 0C8h
//   0x39E1F1 mov     rdx, rbx
//   0x39E1F4 mov     rdi, r12
//   0x39E1F7 mov     rsi, rax
//   0x39E1FA call    sub_3A61A0
//   0x39E1FF jmp     loc_39DA01
//   0x39E204 mov     edi, 40h ; '@'
//   0x39E209 call    _init_plugins
//   0x39E20E jmp     loc_39DAF8
//   0x39E213 mov     esi, 8
//   0x39E218 call    sub_631AD0
//   0x39E21D mov     rdi, [r12]
//   0x39E221 xor     edx, edx
//   0x39E223 mov     esi, 8
//   0x39E228 call    sub_632610
//   0x39E22D jmp     loc_39DA54
//   0x39E232 call    sub_62F8F0
//   0x39E237 jmp     loc_39DF26
//   0x39E23C mov     rax, cs:under_debugger_ptr
//   0x39E243 cmp     byte ptr [rax], 0
//   0x39E246 jnz     loc_39E33B
//   0x39E24C mov     rax, [rsp+0C8h+var_40]
//   0x39E254 sub     rax, fs:28h
//   0x39E25D jnz     loc_39E322
//   0x39E263 mov     edi, 573h
//   0x39E268 call    _interr
//   0x39E26D call    ___stack_chk_fail
//   0x39E272 mov     rax, [rsp+0C8h+var_40]
//   0x39E27A sub     rax, fs:28h
//   0x39E283 jnz     short loc_39E298
//   0x39E285 lea     rdi, aSetProcessorTy_1; "set_processor_type() is called too earl"...
//   0x39E28C xor     eax, eax
//   0x39E28E call    sub_378C70
//   0x39E293 call    ___stack_chk_fail
//   0x39E298 call    ___stack_chk_fail
//   0x39E29D mov     rax, cs:under_debugger_ptr
//   0x39E2A4 cmp     byte ptr [rax], 0
//   0x39E2A7 jnz     loc_2B29A2
//   0x39E2AD mov     rax, [rsp+0C8h+var_40]
//   0x39E2B5 sub     rax, fs:28h
//   0x39E2BE jnz     short loc_39E331
//   0x39E2C0 mov     edi, 572h
//   0x39E2C5 call    _interr
//   0x39E2CA test    rax, rax
//   0x39E2CD jz      short loc_39E2D4
//   0x39E2CF mov     rsi, [rsp+0C8h+var_88]
//   0x39E2D4 mov     rax, [rsp+0C8h+var_40]
//   0x39E2DC sub     rax, fs:28h
//   0x39E2E5 jnz     short loc_39E32C
//   0x39E2E7 lea     rdi, unk_22D5D2E
//   0x39E2EE xor     eax, eax
//   0x39E2F0 call    sub_39AE70
//   0x39E2F5 mov     rax, cs:under_debugger_ptr
//   0x39E2FC cmp     byte ptr [rax], 0
//   0x39E2FF jnz     loc_2B29A2
//   0x39E305 mov     rax, [rsp+0C8h+var_40]
//   0x39E30D sub     rax, fs:28h
//   0x39E316 jnz     short loc_39E336
//   0x39E318 mov     edi, 570h
//   0x39E31D call    _interr
//   0x39E322 call    ___stack_chk_fail
//   0x39E327 call    ___stack_chk_fail
//   0x39E32C call    ___stack_chk_fail
//   0x39E331 call    ___stack_chk_fail
//   0x39E336 call    ___stack_chk_fail
//   0x39E33B jmp     loc_2B29A2
//   0x39E340 mov     rbx, rax
//   0x39E343 jmp     loc_2B29A4
//   0x39E348 mov     rbx, rax
//   0x39E34B jmp     loc_2B29EC
//   0x39E350 mov     rbx, rax
//   0x39E353 jmp     loc_2B29D6
//   0x39E358 mov     rbx, rax
//   0x39E35B jmp     loc_2B2A27
//   0x39E360 mov     rbx, rax
//   0x39E363 jmp     loc_2B2A40
//   0x39E368 mov     rbx, rax
//   0x39E36B jmp     loc_2B2A71
// ============================================================

void sub_39D7C0(/* signature unknown */)
{
    // see disassembly above
}

