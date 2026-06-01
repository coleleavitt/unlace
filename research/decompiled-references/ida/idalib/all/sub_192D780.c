// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x192D780
// Name:           sub_192D780
// Function size:  5571 bytes (1177 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x192D780 push    r15; __int64
//   0x192D782 push    r14; int
//   0x192D784 mov     r14, rdx
//   0x192D787 push    r13; int
//   0x192D789 push    r12; int
//   0x192D78B push    rbp; int
//   0x192D78C mov     rbp, rcx
//   0x192D78F push    rbx; int
//   0x192D790 mov     rbx, rsi
//   0x192D793 sub     rsp, 198h
//   0x192D79A mov     eax, [rsp+1C8h+arg_10]
//   0x192D7A1 mov     qword ptr [rsp+1C8h+var_1B8], rdi; int
//   0x192D7A6 mov     qword ptr [rsp+1C8h+var_160], rcx; int
//   0x192D7AB mov     [rsp+1C8h+var_19C], eax
//   0x192D7AF mov     rax, [rsp+1C8h+arg_0]
//   0x192D7B7 mov     qword ptr [rsp+1C8h+var_1C0], r8; int
//   0x192D7BC mov     qword ptr [rsp+1C8h+var_198], rax; int
//   0x192D7C1 mov     rax, [rsp+1C8h+arg_8]
//   0x192D7C9 mov     [rsp+1C8h+var_188], r9d; int
//   0x192D7CE mov     qword ptr [rsp+1C8h+var_1C8], rax; int
//   0x192D7D2 test    rcx, rcx
//   0x192D7D5 jz      loc_192D890
//   0x192D7DB xor     esi, esi
//   0x192D7DD mov     rdi, rcx
//   0x192D7E0 call    sub_B75A50
//   0x192D7E5 test    eax, eax
//   0x192D7E7 jnz     loc_192E020
//   0x192D7ED movzx   eax, word ptr [r14]
//   0x192D7F1 mov     rbp, qword ptr [rsp+1C8h+var_160]
//   0x192D7F6 mov     r12d, 1
//   0x192D7FC and     ax, 1FFh
//   0x192D800 cmp     ax, 14h
//   0x192D804 jnz     short loc_192D850
//   0x192D806 mov     rdi, r14
//   0x192D809 call    sub_BFB9F0
//   0x192D80E movzx   edx, word ptr [rax]
//   0x192D811 and     dx, 1FFh
//   0x192D816 cmp     dx, 4
//   0x192D81A jnz     short loc_192D850
//   0x192D81C movzx   edx, byte ptr [rax+2]
//   0x192D820 shr     dl, 3
//   0x192D823 cmp     dl, 4
//   0x192D826 jnz     short loc_192D850
//   0x192D828 mov     rdi, [rax+10h]
//   0x192D82C call    sub_BFB9F0
//   0x192D831 movzx   edx, word ptr [rax]
//   0x192D834 and     dx, 1FFh
//   0x192D839 cmp     dx, 47h ; 'G'
//   0x192D83D jnz     loc_192E8C0
//   0x192D843 mov     rax, [rax]
//   0x192D846 test    eax, 80000h
//   0x192D84B setz    r12b
//   0x192D84F nop
//   0x192D850 test    rbp, rbp
//   0x192D853 jz      loc_192DA90
//   0x192D859 test    r12b, r12b
//   0x192D85C jz      loc_192DA90
//   0x192D862 mov     rdi, rbp
//   0x192D865 call    sub_B771C0
//   0x192D86A test    al, al
//   0x192D86C jz      loc_192E060
//   0x192D872 mov     [rsp+1C8h+var_14D], 1
//   0x192D877 mov     rbp, qword ptr [rsp+1C8h+var_160]
//   0x192D87C mov     [rsp+1C8h+var_1A0], 1
//   0x192D884 jmp     loc_192DA9D
//   0x192D889 align 10h
//   0x192D890 movzx   eax, word ptr [rdx]
//   0x192D893 and     ax, 1FFh
//   0x192D897 cmp     ax, 14h
//   0x192D89B jz      loc_192DA60
//   0x192D8A1 movzx   eax, word ptr [r8+16h]
//   0x192D8A6 mov     [rsp+1C8h+var_14D], 0
//   0x192D8AB mov     [rsp+1C8h+var_1A0], 0; int
//   0x192D8B3 mov     [rsp+1C8h+var_1A8], eax; int
//   0x192D8B7 mov     r12d, eax
//   0x192D8BA mov     [rsp+1C8h+var_1A4], eax
//   0x192D8BE mov     rax, [r14+8]
//   0x192D8C2 and     rax, 0FFFFFFFFFFFFFFF0h
//   0x192D8C6 mov     rax, [rax]
//   0x192D8C9 mov     rax, [rax+8]
//   0x192D8CD and     rax, 0FFFFFFFFFFFFFFF0h
//   0x192D8D1 mov     rdx, [rax]
//   0x192D8D4 mov     eax, 1
//   0x192D8D9 cmp     byte ptr [rdx+10h], 0Bh
//   0x192D8DD jz      short loc_192D8EB
//   0x192D8DF cmp     byte ptr [rsp+1C8h+var_19C], 1
//   0x192D8E4 sbb     eax, eax
//   0x192D8E6 not     eax
//   0x192D8E8 and     eax, 3
//   0x192D8EB mov     rcx, qword ptr [rsp+1C8h+var_1C8]
//   0x192D8EF mov     [rsp+1C8h+var_14C], eax
//   0x192D8F3 movzx   eax, r12w
//   0x192D8F7 mov     qword ptr [rsp+1C8h+var_1B0], rax; int
//   0x192D8FC cmp     rax, rcx
//   0x192D8FF jbe     short loc_192D90E
//   0x192D901 mov     eax, [rsp+1C8h+var_1A8]
//   0x192D905 cmp     rax, rcx
//   0x192D908 ja      loc_192E240
//   0x192D90E mov     rcx, qword ptr [rsp+1C8h+var_1C8]
//   0x192D912 cmp     qword ptr [rsp+1C8h+var_1B0], rcx
//   0x192D917 jnb     short loc_192D928
//   0x192D919 mov     rax, qword ptr [rsp+1C8h+var_1C0]
//   0x192D91E cmp     byte ptr [rax+13h], 0
//   0x192D922 jns     loc_192DAD0
//   0x192D928 mov     r15, qword ptr [rsp+1C8h+var_1B8]
//   0x192D92D mov     rcx, r14
//   0x192D930 mov     r14, qword ptr [rsp+1C8h+var_1C0]
//   0x192D935 mov     rsi, rbp
//   0x192D938 lea     r13, [rsp+1C8h+ptr]
//   0x192D940 lea     rax, [r13+10h]
//   0x192D944 mov     rdx, r14
//   0x192D947 mov     rdi, r15
//   0x192D94A mov     [rsp+1C8h+ptr], rax
//   0x192D952 mov     rax, 800000000h
//   0x192D95C mov     qword ptr [rsp+1C8h+var_C0], rax
//   0x192D964 call    sub_18C2050
//   0x192D969 mov     rdi, rbx
//   0x192D96C mov     ebp, eax
//   0x192D96E call    sub_C00A40
//   0x192D973 sub     rsp, 8
//   0x192D977 mov     r9, r13
//   0x192D97A xor     r8d, r8d
//   0x192D97D push    0; char
//   0x192D97F mov     rcx, r14
//   0x192D982 mov     esi, eax
//   0x192D984 mov     rdi, r15; int
//   0x192D987 push    0; char
//   0x192D989 push    rbp; int
//   0x192D98A push    [rsp+1E8h+arg_8]; __int64
//   0x192D991 push    [rsp+1F0h+arg_0]; __int64
//   0x192D998 mov     rdx, qword ptr [rsp+1F8h+var_160]
//   0x192D9A0 call    sub_192CA10
//   0x192D9A5 add     rsp, 30h
//   0x192D9A9 mov     ebp, eax
//   0x192D9AB test    al, al
//   0x192D9AD jnz     short loc_192DA2D
//   0x192D9AF mov     eax, [rsp+1C8h+var_C0]
//   0x192D9B6 test    eax, eax
//   0x192D9B8 jz      short loc_192D9F4
//   0x192D9BA sub     eax, 1
//   0x192D9BD mov     rdi, [rsp+1C8h+ptr]
//   0x192D9C5 xor     edx, edx
//   0x192D9C7 lea     rsi, ds:8[rax*8]
//   0x192D9CF nop
//   0x192D9D0 movzx   eax, byte ptr [rbx+2]
//   0x192D9D4 mov     rcx, [rdi+rdx]
//   0x192D9D8 add     rdx, 8
//   0x192D9DC shr     al, 3
//   0x192D9DF and     eax, 1
//   0x192D9E2 add     rax, 1
//   0x192D9E6 lea     rax, [rbx+rax*8]
//   0x192D9EA mov     [rdx+rax+18h], rcx
//   0x192D9EF cmp     rsi, rdx
//   0x192D9F2 jnz     short loc_192D9D0
//   0x192D9F4 movzx   edx, byte ptr [rbx+2]
//   0x192D9F8 lea     rsi, [rbx+28h]
//   0x192D9FC mov     rdi, rbx
//   0x192D9FF shr     dl, 3
//   0x192DA02 and     edx, 1
//   0x192DA05 call    sub_B643A0
//   0x192DA0A movzx   edx, byte ptr [rbx+1]
//   0x192DA0E mov     ecx, eax
//   0x192DA10 shr     al, 2
//   0x192DA13 shl     ecx, 6
//   0x192DA16 and     edx, 3Fh
//   0x192DA19 and     eax, 7
//   0x192DA1C or      edx, ecx
//   0x192DA1E mov     [rbx+1], dl
//   0x192DA21 movzx   edx, byte ptr [rbx+2]
//   0x192DA25 and     edx, 0FFFFFFF8h
//   0x192DA28 or      eax, edx
//   0x192DA2A mov     [rbx+2], al
//   0x192DA2D mov     rdi, [rsp+1C8h+ptr]; ptr
//   0x192DA35 add     r13, 10h
//   0x192DA39 cmp     rdi, r13
//   0x192DA3C jz      short loc_192DA43
//   0x192DA3E call    _free
//   0x192DA43 add     rsp, 198h
//   0x192DA4A mov     eax, ebp
//   0x192DA4C pop     rbx
//   0x192DA4D pop     rbp
//   0x192DA4E pop     r12
//   0x192DA50 pop     r13
//   0x192DA52 pop     r14
//   0x192DA54 pop     r15
//   0x192DA56 retn
//   0x192DA57 align 20h
//   0x192DA60 mov     rdi, rdx
//   0x192DA63 call    sub_BFB9F0
//   0x192DA68 movzx   edx, word ptr [rax]
//   0x192DA6B and     dx, 1FFh
//   0x192DA70 cmp     dx, 4
//   0x192DA74 jnz     short loc_192DA90
//   0x192DA76 movzx   edx, byte ptr [rax+2]
//   0x192DA7A shr     dl, 3
//   0x192DA7D cmp     dl, 4
//   0x192DA80 jz      loc_192D828
//   0x192DA86 nop     word ptr [rax+rax+00000000h]
//   0x192DA90 mov     [rsp+1C8h+var_14D], 0
//   0x192DA95 mov     [rsp+1C8h+var_1A0], 0
//   0x192DA9D mov     rax, qword ptr [rsp+1C8h+var_1C0]
//   0x192DAA2 movzx   eax, word ptr [rax+16h]
//   0x192DAA6 mov     r12d, eax
//   0x192DAA9 mov     [rsp+1C8h+var_1A4], eax
//   0x192DAAD test    rbp, rbp
//   0x192DAB0 jz      loc_192E800
//   0x192DAB6 mov     rdi, rbp
//   0x192DAB9 call    sub_B770E0
//   0x192DABE mov     rbp, qword ptr [rsp+1C8h+var_160]
//   0x192DAC3 mov     [rsp+1C8h+var_1A8], eax
//   0x192DAC7 jmp     loc_192D8BE
//   0x192DACC align 10h
//   0x192DAD0 lea     rax, [rsp+1C8h+var_128]
//   0x192DAD8 pxor    xmm0, xmm0
//   0x192DADC mov     qword ptr [rsp+1C8h+var_128], 0
//   0x192DAE8 lea     r13, [rsp+1C8h+ptr]
//   0x192DAF0 mov     qword ptr [rsp+1C8h+var_190], rax; int
//   0x192DAF5 lea     rax, [rsp+1C8h+var_108]
//   0x192DAFD mov     [rsp+1C8h+var_118], rax; int
//   0x192DB05 mov     rax, 100000000h
//   0x192DB0F mov     qword ptr [rsp+1C8h+var_110], rax; int
//   0x192DB17 xor     eax, eax
//   0x192DB19 mov     [rsp+1C8h+var_EC], ax
//   0x192DB21 mov     eax, [rsp+1C8h+var_1A4]
//   0x192DB25 sub     eax, [rsp+1C8h+var_1A0]
//   0x192DB29 movups  xmmword ptr [rsp+1C8h+var_100], xmm0
//   0x192DB31 pxor    xmm0, xmm0
//   0x192DB35 mov     [rsp+1C8h+var_180], eax; int
//   0x192DB39 mov     rax, qword ptr [rsp+1C8h+var_1B8]
//   0x192DB3E mov     qword ptr [rsp+1C8h+var_120], 0
//   0x192DB4A add     rax, 8
//   0x192DB4E mov     [rsp+1C8h+var_F0], 0
//   0x192DB59 movaps  xmmword ptr [rsp+1C8h+var_E8], xmm0
//   0x192DB61 mov     qword ptr [rsp+1C8h+var_D8], 0
//   0x192DB6D mov     qword ptr [rsp+1C8h+var_188], rax; int
//   0x192DB72 test    rbp, rbp
//   0x192DB75 jz      loc_192E080
//   0x192DB7B mov     rsi, qword ptr [rsp+1C8h+var_1B8]
//   0x192DB80 mov     rcx, rbp
//   0x192DB83 mov     rdx, r14
//   0x192DB86 mov     rdi, r13
//   0x192DB89 mov     r8, [rsp+1C8h+arg_0]
//   0x192DB91 mov     r9, [rsp+1C8h+arg_8]
//   0x192DB99 call    sub_18C5570
//   0x192DB9E mov     rax, [rsp+1C8h+ptr]
//   0x192DBA6 lea     rsi, [r13+10h]
//   0x192DBAA mov     qword ptr [rsp+1C8h+var_128], rax; int
//   0x192DBB2 mov     rax, qword ptr [rsp+1C8h+var_C0]
//   0x192DBBA mov     qword ptr [rsp+1C8h+var_120], rax; int
//   0x192DBC2 mov     rax, qword ptr [rsp+1C8h+var_190]
//   0x192DBC7 lea     rdi, [rax+10h]
//   0x192DBCB call    sub_AEA1F0
//   0x192DBD0 mov     rax, qword ptr [rsp+1C8h+var_A0]
//   0x192DBD8 mov     r12, [rsp+1C8h+var_E8]
//   0x192DBE0 mov     rbp, [rsp+1C8h+var_E8+8]
//   0x192DBE8 mov     qword ptr [rsp+1C8h+var_100], rax; int
//   0x192DBF0 mov     eax, [rsp+1C8h+var_98]
//   0x192DBF7 mov     r15, r12
//   0x192DBFA mov     [rsp+1C8h+var_100+8], eax; int
//   0x192DC01 mov     rax, qword ptr [rsp+1C8h+var_94]
//   0x192DC09 mov     qword ptr [rsp+1C8h+var_100+0Ch], rax; int
//   0x192DC11 movzx   eax, [rsp+1C8h+var_8C]
//   0x192DC19 mov     [rsp+1C8h+var_EC], ax
//   0x192DC21 mov     rax, [rsp+1C8h+var_88]
//   0x192DC29 mov     [rsp+1C8h+var_88], 0; int
//   0x192DC35 mov     [rsp+1C8h+var_E8], rax; int
//   0x192DC3D mov     rax, qword ptr [rsp+1C8h+var_80]
//   0x192DC45 mov     qword ptr [rsp+1C8h+var_80], 0; int
//   0x192DC51 mov     [rsp+1C8h+var_E8+8], rax; int
//   0x192DC59 mov     rax, [rsp+1C8h+var_78]
//   0x192DC61 mov     [rsp+1C8h+var_78], 0; ptr
//   0x192DC6D mov     qword ptr [rsp+1C8h+var_D8], rax; int
//   0x192DC75 cmp     r12, rbp
//   0x192DC78 jz      short loc_192DC9F
//   0x192DC7A nop     word ptr [rax+rax+00h]
//   0x192DC80 mov     rsi, [r15]
//   0x192DC83 test    rsi, rsi
//   0x192DC86 jz      short loc_192DC96
//   0x192DC88 mov     rdi, [r15+8]
//   0x192DC8C test    rdi, rdi
//   0x192DC8F jz      short loc_192DC96
//   0x192DC91 call    sub_1580C40
//   0x192DC96 add     r15, 18h
//   0x192DC9A cmp     rbp, r15
//   0x192DC9D jnz     short loc_192DC80
//   0x192DC9F test    r12, r12
//   0x192DCA2 jz      short loc_192DCAC
//   0x192DCA4 mov     rdi, r12; void *
//   0x192DCA7 call    __ZdlPv; operator delete(void *)
//   0x192DCAC mov     rax, qword ptr [rsp+1C8h+var_128]
//   0x192DCB4 mov     rbp, [rsp+1C8h+var_88]
//   0x192DCBC mov     qword ptr [rsp+1C8h+var_178], rax; int
//   0x192DCC1 mov     rax, qword ptr [rsp+1C8h+var_80]
//   0x192DCC9 cmp     rax, rbp
//   0x192DCCC jz      loc_192DDCB
//   0x192DCD2 mov     qword ptr [rsp+1C8h+var_170], rbx; int
//   0x192DCD7 mov     r15, rax
//   0x192DCDA mov     qword ptr [rsp+1C8h+var_168], r13; int
//   0x192DCDF nop
//   0x192DCE0 mov     rbx, [rbp+0]
//   0x192DCE4 test    rbx, rbx
//   0x192DCE7 jz      loc_192DDAC
//   0x192DCED mov     rax, [rbp+8]
//   0x192DCF1 test    rax, rax
//   0x192DCF4 jz      loc_192DDAC
//   0x192DCFA cmp     rbx, rax
//   0x192DCFD jnb     loc_192E210
//   0x192DD03 mov     r12d, [rbx+218h]
//   0x192DD0A mov     r13, [rbx+210h]
//   0x192DD11 shl     r12, 6
//   0x192DD15 add     r12, r13
//   0x192DD18 cmp     r13, r12
//   0x192DD1B jz      short loc_192DD48
//   0x192DD1D nop     dword ptr [rax]
//   0x192DD20 sub     r12, 40h ; '@'
//   0x192DD24 mov     rdi, [r12+18h]; void *
//   0x192DD29 lea     rax, [r12+28h]
//   0x192DD2E cmp     rdi, rax
//   0x192DD31 jz      loc_192E1C8
//   0x192DD37 call    __ZdlPv; operator delete(void *)
//   0x192DD3C cmp     r13, r12
//   0x192DD3F jnz     short loc_192DD20
//   0x192DD41 mov     r12, [rbx+210h]
//   0x192DD48 lea     rax, [rbx+220h]
//   0x192DD4F cmp     r12, rax
//   0x192DD52 jz      short loc_192DD5C
//   0x192DD54 mov     rdi, r12; ptr
//   0x192DD57 call    _free
//   0x192DD5C mov     rdi, [rbx+1A0h]; ptr
//   0x192DD63 lea     rax, [rbx+1B0h]
//   0x192DD6A cmp     rdi, rax
//   0x192DD6D jz      short loc_192DD74
//   0x192DD6F call    _free
//   0x192DD74 lea     r13, [rbx+180h]
//   0x192DD7B lea     r12, [rbx+40h]
//   0x192DD7F nop
//   0x192DD80 mov     rdi, [r13+0]; void *
//   0x192DD84 lea     rax, [r13+10h]
//   0x192DD88 cmp     rdi, rax
//   0x192DD8B jz      loc_192E1B0
//   0x192DD91 call    __ZdlPv; operator delete(void *)
//   0x192DD96 sub     r13, 20h ; ' '
//   0x192DD9A cmp     r13, r12
//   0x192DD9D jnz     short loc_192DD80
//   0x192DD9F mov     esi, 3A0h; unsigned __int64
//   0x192DDA4 mov     rdi, rbx; void *
//   0x192DDA7 call    __ZdlPvm; operator delete(void *,ulong)
//   0x192DDAC add     rbp, 18h
//   0x192DDB0 cmp     r15, rbp
//   0x192DDB3 jnz     loc_192DCE0
//   0x192DDB9 mov     rbx, qword ptr [rsp+1C8h+var_170]
//   0x192DDBE mov     r13, qword ptr [rsp+1C8h+var_168]
//   0x192DDC3 mov     rbp, [rsp+1C8h+var_88]
//   0x192DDCB test    rbp, rbp
//   0x192DDCE jz      short loc_192DDD8
//   0x192DDD0 mov     rdi, rbp; void *
//   0x192DDD3 call    __ZdlPv; operator delete(void *)
//   0x192DDD8 mov     rdi, [rsp+1C8h+var_B8]; ptr
//   0x192DDE0 lea     rax, [r13+20h]
//   0x192DDE4 cmp     rdi, rax
//   0x192DDE7 jz      short loc_192DDEE
//   0x192DDE9 call    _free
//   0x192DDEE cmp     qword ptr [rsp+1C8h+var_178], 0
//   0x192DDF4 jz      loc_192EA32
//   0x192DDFA mov     ecx, [rsp+1C8h+var_1A4]
//   0x192DDFE cmp     [rsp+1C8h+var_1A8], ecx
//   0x192DE02 jz      loc_192EA00
//   0x192DE08 mov     edx, 1471h
//   0x192DE0D mov     rsi, qword ptr [rsp+1C8h+var_188]
//   0x192DE12 mov     rdi, r13
//   0x192DE15 lea     rbp, [rsp+1C8h+var_138]
//   0x192DE1D call    sub_168B9B0
//   0x192DE22 mov     esi, [rsp+1C8h+var_14C]
//   0x192DE26 mov     edx, 3
//   0x192DE2B mov     rdi, r13
//   0x192DE2E call    sub_AE9DF0
//   0x192DE33 mov     esi, [rsp+1C8h+var_180]
//   0x192DE37 mov     edx, 3
//   0x192DE3C mov     rdi, r13
//   0x192DE3F call    sub_AE9DF0
//   0x192DE44 mov     esi, [rsp+1C8h+var_1C8]
//   0x192DE47 mov     edx, 3
//   0x192DE4C mov     rdi, r13
//   0x192DE4F sub     esi, [rsp+1C8h+var_1A0]
//   0x192DE53 call    sub_AE9DF0
//   0x192DE58 movzx   esi, [rsp+1C8h+var_14D]
//   0x192DE5D mov     edx, 2
//   0x192DE62 mov     rdi, r13
//   0x192DE65 call    sub_AE9DF0
//   0x192DE6A mov     rax, qword ptr [rsp+1C8h+var_100+0Ch]
//   0x192DE72 mov     rsi, rbp
//   0x192DE75 mov     rdi, r13
//   0x192DE78 mov     byte ptr [rsp+1C8h+var_130], 1; int
//   0x192DE80 mov     qword ptr [rsp+1C8h+var_138], rax; int
//   0x192DE88 call    sub_AEC610
//   0x192DE8D mov     rsi, qword ptr [rsp+1C8h+var_190]; int
//   0x192DE92 mov     rdi, qword ptr [rsp+1C8h+var_1B8]; int
//   0x192DE97 mov     rdx, r13; int
//   0x192DE9A mov     ecx, 1; int
//   0x192DE9F call    sub_1A60AF0
//   0x192DEA4 mov     rsi, [rsp+1C8h+ptr]
//   0x192DEAC test    rsi, rsi
//   0x192DEAF jz      short loc_192DEC3
//   0x192DEB1 mov     rdi, qword ptr [rsp+1C8h+var_C0]
//   0x192DEB9 test    rdi, rdi
//   0x192DEBC jz      short loc_192DEC3
//   0x192DEBE call    sub_1580C40
//   0x192DEC3 cmp     qword ptr [rsp+1C8h+var_128], 0
//   0x192DECC jz      loc_192E8E8
//   0x192DED2 mov     eax, [rsp+1C8h+var_1A4]
//   0x192DED6 mov     r13, [rsp+1C8h+var_E8+8]
//   0x192DEDE mov     rbp, [rsp+1C8h+var_E8]
//   0x192DEE6 mov     [rbx+10h], eax
//   0x192DEE9 cmp     r13, rbp
//   0x192DEEC jz      loc_192DFE8
//   0x192DEF2 nop     word ptr [rax+rax+00h]
//   0x192DEF8 mov     r12, [rbp+0]
//   0x192DEFC test    r12, r12
//   0x192DEFF jz      loc_192DFD3
//   0x192DF05 mov     rax, [rbp+8]
//   0x192DF09 test    rax, rax
//   0x192DF0C jz      loc_192DFD3
//   0x192DF12 cmp     r12, rax
//   0x192DF15 jnb     loc_192E1E0
//   0x192DF1B mov     ebx, [r12+218h]
//   0x192DF23 mov     r14, [r12+210h]
//   0x192DF2B shl     rbx, 6
//   0x192DF2F add     rbx, r14
//   0x192DF32 cmp     r14, rbx
//   0x192DF35 jz      short loc_192DF67
//   0x192DF37 nop     word ptr [rax+rax+00000000h]
//   0x192DF40 sub     rbx, 40h ; '@'
//   0x192DF44 mov     rdi, [rbx+18h]; void *
//   0x192DF48 lea     rax, [rbx+28h]
//   0x192DF4C cmp     rdi, rax
//   0x192DF4F jz      loc_192E1A0
//   0x192DF55 call    __ZdlPv; operator delete(void *)
//   0x192DF5A cmp     r14, rbx
//   0x192DF5D jnz     short loc_192DF40
//   0x192DF5F mov     rbx, [r12+210h]
//   0x192DF67 lea     rax, [r12+220h]
//   0x192DF6F cmp     rbx, rax
//   0x192DF72 jz      short loc_192DF7C
//   0x192DF74 mov     rdi, rbx; ptr
//   0x192DF77 call    _free
//   0x192DF7C mov     rdi, [r12+1A0h]; ptr
//   0x192DF84 lea     rax, [r12+1B0h]
//   0x192DF8C cmp     rdi, rax
//   0x192DF8F jz      short loc_192DF96
//   0x192DF91 call    _free
//   0x192DF96 lea     rbx, [r12+180h]
//   0x192DF9E lea     r14, [r12+40h]
//   0x192DFA3 nop     dword ptr [rax+rax+00h]
//   0x192DFA8 mov     rdi, [rbx]; void *
//   0x192DFAB lea     rax, [rbx+10h]
//   0x192DFAF cmp     rdi, rax
//   0x192DFB2 jz      loc_192E188
//   0x192DFB8 call    __ZdlPv; operator delete(void *)
//   0x192DFBD sub     rbx, 20h ; ' '
//   0x192DFC1 cmp     r14, rbx
//   0x192DFC4 jnz     short loc_192DFA8
//   0x192DFC6 mov     esi, 3A0h; unsigned __int64
//   0x192DFCB mov     rdi, r12; void *
//   0x192DFCE call    __ZdlPvm; operator delete(void *,ulong)
//   0x192DFD3 add     rbp, 18h
//   0x192DFD7 cmp     r13, rbp
//   0x192DFDA jnz     loc_192DEF8
//   0x192DFE0 mov     rbp, [rsp+1C8h+var_E8]
//   0x192DFE8 test    rbp, rbp
//   0x192DFEB jz      short loc_192DFF5
//   0x192DFED mov     rdi, rbp; void *
//   0x192DFF0 call    __ZdlPv; operator delete(void *)
//   0x192DFF5 mov     rax, qword ptr [rsp+1C8h+var_190]
//   0x192DFFA mov     rdi, [rsp+1C8h+var_118]; ptr
//   0x192E002 add     rax, 20h ; ' '
//   0x192E006 cmp     rdi, rax
//   0x192E009 jz      short loc_192E010
//   0x192E00B call    _free
//   0x192E010 mov     ebp, 1
//   0x192E015 jmp     loc_192DA43
//   0x192E01A align 20h
//   0x192E020 mov     rcx, qword ptr [rsp+1C8h+var_1B8]
//   0x192E025 mov     esi, eax
//   0x192E027 xor     ebp, ebp
//   0x192E029 mov     rdx, [rcx+0F8h]
//   0x192E030 mov     rdi, [rdx+4470h]
//   0x192E037 call    sub_FBD4B0
//   0x192E03C mov     esi, 74h ; 't'; c
//   0x192E041 mov     rdi, rax; s
//   0x192E044 call    _strchr
//   0x192E049 test    rax, rax
//   0x192E04C jz      loc_192D7ED
//   0x192E052 jmp     loc_192DA43
//   0x192E057 align 20h
//   0x192E060 mov     [rsp+1C8h+var_14D], 0
//   0x192E065 mov     rbp, qword ptr [rsp+1C8h+var_160]
//   0x192E06A mov     [rsp+1C8h+var_1A0], 0
//   0x192E072 jmp     loc_192DA9D
//   0x192E077 align 20h
//   0x192E080 mov     ecx, [rsp+1C8h+var_1A4]
//   0x192E084 mov     rax, qword ptr [rsp+1C8h+var_198]
//   0x192E089 xor     ebp, ebp
//   0x192E08B cmp     [rsp+1C8h+var_1A8], ecx
//   0x192E08F mov     rcx, qword ptr [rsp+1C8h+var_1B0]
//   0x192E094 setnz   bpl
//   0x192E098 lea     r15, [rax+rcx*8]
//   0x192E09C add     ebp, 146Eh
//   0x192E0A2 mov     rdi, [r15]
//   0x192E0A5 call    sub_EEB7E0
//   0x192E0AA mov     rsi, qword ptr [rsp+1C8h+var_188]
//   0x192E0AF xor     r8d, r8d
//   0x192E0B2 mov     ecx, ebp
//   0x192E0B4 mov     edx, eax
//   0x192E0B6 mov     rdi, r13
//   0x192E0B9 call    sub_168B9F0
//   0x192E0BE lea     rsi, [rsp+1C8h+var_14C]
//   0x192E0C3 mov     rdi, r13
//   0x192E0C6 call    sub_1588370
//   0x192E0CB mov     ecx, [rsp+1C8h+var_180]
//   0x192E0CF lea     rsi, [rsp+1C8h+var_148]
//   0x192E0D7 mov     rdi, rax
//   0x192E0DA mov     [rsp+1C8h+var_148], ecx
//   0x192E0E1 call    sub_16CF160
//   0x192E0E6 mov     edx, [rsp+1C8h+var_1C8]
//   0x192E0E9 lea     rsi, [rsp+1C8h+var_144]
//   0x192E0F1 sub     edx, [rsp+1C8h+var_1A0]
//   0x192E0F5 mov     rdi, rax
//   0x192E0F8 mov     [rsp+1C8h+var_144], edx
//   0x192E0FF call    sub_16CF160
//   0x192E104 lea     rsi, [rsp+1C8h+var_14D]
//   0x192E109 mov     rdi, rax
//   0x192E10C call    sub_15890D0
//   0x192E111 mov     rdi, r14
//   0x192E114 mov     rbp, rax
//   0x192E117 call    sub_EEC8C0
//   0x192E11C lea     rsi, [rsp+1C8h+var_140]
//   0x192E124 mov     rdi, rbp
//   0x192E127 mov     [rsp+1C8h+var_140], rax
//   0x192E12F call    sub_1587DB0
//   0x192E134 mov     rcx, qword ptr [rsp+1C8h+var_1C8]
//   0x192E138 mov     r12, rax
//   0x192E13B mov     rax, qword ptr [rsp+1C8h+var_198]
//   0x192E140 mov     rdi, [rax+rcx*8-8]
//   0x192E145 call    sub_EEC140
//   0x192E14A mov     rdi, [r15]
//   0x192E14D mov     ebp, eax
//   0x192E14F call    sub_EEB7E0
//   0x192E154 mov     [rsp+1C8h+var_138+4], ebp
//   0x192E15B lea     rbp, [rsp+1C8h+var_138]
//   0x192E163 mov     [rsp+1C8h+var_138], eax
//   0x192E16A mov     rdi, r12
//   0x192E16D mov     rsi, rbp
//   0x192E170 call    sub_1587DB0
//   0x192E175 mov     rdi, r13
//   0x192E178 call    sub_15F7200
//   0x192E17D jmp     loc_192DEC3
//   0x192E182 align 8
//   0x192E188 sub     rbx, 20h ; ' '
//   0x192E18C cmp     r14, rbx
//   0x192E18F jnz     loc_192DFA8
//   0x192E195 jmp     loc_192DFC6
//   0x192E19A align 20h
//   0x192E1A0 cmp     r14, rbx
//   0x192E1A3 jnz     loc_192DF40
//   0x192E1A9 jmp     loc_192DF5F
//   0x192E1AE align 10h
//   0x192E1B0 sub     r13, 20h ; ' '
//   0x192E1B4 cmp     r12, r13
//   0x192E1B7 jnz     loc_192DD80
//   0x192E1BD jmp     loc_192DD9F
//   0x192E1C2 align 8
//   0x192E1C8 cmp     r13, r12
//   0x192E1CB jnz     loc_192DD20
//   0x192E1D1 jmp     loc_192DD41
//   0x192E1D6 align 20h
//   0x192E1E0 lea     rdx, [rax+3A00h]
//   0x192E1E7 cmp     r12, rdx
//   0x192E1EA ja      loc_192DF1B
//   0x192E1F0 mov     edx, [rax+3A80h]
//   0x192E1F6 lea     ecx, [rdx+1]
//   0x192E1F9 mov     [rax+3A80h], ecx
//   0x192E1FF mov     [rax+rdx*8+3A00h], r12
//   0x192E207 jmp     loc_192DFD3
//   0x192E20C align 10h
//   0x192E210 lea     rdx, [rax+3A00h]
//   0x192E217 cmp     rbx, rdx
//   0x192E21A ja      loc_192DD03
//   0x192E220 mov     edx, [rax+3A80h]
//   0x192E226 lea     ecx, [rdx+1]
//   0x192E229 mov     [rax+3A80h], ecx
//   0x192E22F mov     [rax+rdx*8+3A00h], rbx
//   0x192E237 jmp     loc_192DDAC
//   0x192E23C align 20h
//   0x192E240 lea     rax, [rsp+1C8h+var_128]
//   0x192E248 pxor    xmm0, xmm0
//   0x192E24C xor     edx, edx
//   0x192E24E mov     qword ptr [rsp+1C8h+var_128], 0
//   0x192E25A mov     qword ptr [rsp+1C8h+var_190], rax; int
//   0x192E25F lea     rax, [rsp+1C8h+var_108]
//   0x192E267 lea     r13, [rsp+1C8h+ptr]
//   0x192E26F mov     [rsp+1C8h+var_118], rax; int
//   0x192E277 mov     rax, 100000000h
//   0x192E281 mov     qword ptr [rsp+1C8h+var_110], rax; int
//   0x192E289 mov     eax, [rsp+1C8h+var_1A8]
//   0x192E28D sub     eax, [rsp+1C8h+var_1A0]
//   0x192E291 movups  xmmword ptr [rsp+1C8h+var_100], xmm0
//   0x192E299 pxor    xmm0, xmm0
//   0x192E29D mov     [rsp+1C8h+var_198], eax; int
//   0x192E2A1 mov     rax, qword ptr [rsp+1C8h+var_1B8]
//   0x192E2A6 mov     qword ptr [rsp+1C8h+var_120], 0
//   0x192E2B2 add     rax, 8
//   0x192E2B6 mov     [rsp+1C8h+var_EC], dx
//   0x192E2BE mov     [rsp+1C8h+var_F0], 0
//   0x192E2C9 movaps  xmmword ptr [rsp+1C8h+var_E8], xmm0
//   0x192E2D1 mov     qword ptr [rsp+1C8h+var_D8], 0
//   0x192E2DD mov     qword ptr [rsp+1C8h+var_1B0], rax; int
//   0x192E2E2 test    rbp, rbp
//   0x192E2E5 jz      loc_192E810
//   0x192E2EB mov     rsi, qword ptr [rsp+1C8h+var_1B8]
//   0x192E2F0 mov     rcx, rbp
//   0x192E2F3 mov     rdx, r14
//   0x192E2F6 mov     rdi, r13
//   0x192E2F9 mov     r8, [rsp+1C8h+arg_0]
//   0x192E301 mov     r9, [rsp+1C8h+arg_8]
//   0x192E309 call    sub_18C5570
//   0x192E30E mov     rax, [rsp+1C8h+ptr]
//   0x192E316 lea     rsi, [r13+10h]
//   0x192E31A mov     qword ptr [rsp+1C8h+var_128], rax; int
//   0x192E322 mov     rax, qword ptr [rsp+1C8h+var_C0]
//   0x192E32A mov     qword ptr [rsp+1C8h+var_120], rax; int
//   0x192E332 mov     rax, qword ptr [rsp+1C8h+var_190]
//   0x192E337 lea     rdi, [rax+10h]
//   0x192E33B call    sub_AEA1F0
//   0x192E340 mov     rax, qword ptr [rsp+1C8h+var_A0]
//   0x192E348 mov     rbp, [rsp+1C8h+var_E8]
//   0x192E350 mov     rbx, [rsp+1C8h+var_E8+8]
//   0x192E358 mov     qword ptr [rsp+1C8h+var_100], rax; int
//   0x192E360 mov     eax, [rsp+1C8h+var_98]
//   0x192E367 mov     r12, rbp
//   0x192E36A mov     [rsp+1C8h+var_100+8], eax; int
//   0x192E371 mov     rax, qword ptr [rsp+1C8h+var_94]
//   0x192E379 mov     qword ptr [rsp+1C8h+var_100+0Ch], rax; int
//   0x192E381 movzx   eax, [rsp+1C8h+var_8C]
//   0x192E389 mov     [rsp+1C8h+var_EC], ax
//   0x192E391 mov     rax, [rsp+1C8h+var_88]
//   0x192E399 mov     [rsp+1C8h+var_88], 0; int
//   0x192E3A5 mov     [rsp+1C8h+var_E8], rax; int
//   0x192E3AD mov     rax, qword ptr [rsp+1C8h+var_80]
//   0x192E3B5 mov     qword ptr [rsp+1C8h+var_80], 0; int
//   0x192E3C1 mov     [rsp+1C8h+var_E8+8], rax; int
//   0x192E3C9 mov     rax, [rsp+1C8h+var_78]
//   0x192E3D1 mov     [rsp+1C8h+var_78], 0; ptr
//   0x192E3DD mov     qword ptr [rsp+1C8h+var_D8], rax; int
//   0x192E3E5 cmp     rbp, rbx
//   0x192E3E8 jz      short loc_192E411
//   0x192E3EA nop     word ptr [rax+rax+00h]
//   0x192E3F0 mov     rsi, [r12]
//   0x192E3F4 test    rsi, rsi
//   0x192E3F7 jz      short loc_192E408
//   0x192E3F9 mov     rdi, [r12+8]
//   0x192E3FE test    rdi, rdi
//   0x192E401 jz      short loc_192E408
//   0x192E403 call    sub_1580C40
//   0x192E408 add     r12, 18h
//   0x192E40C cmp     rbx, r12
//   0x192E40F jnz     short loc_192E3F0
//   0x192E411 test    rbp, rbp
//   0x192E414 jz      short loc_192E41E
//   0x192E416 mov     rdi, rbp; void *
//   0x192E419 call    __ZdlPv; operator delete(void *)
//   0x192E41E mov     rax, qword ptr [rsp+1C8h+var_128]
//   0x192E426 mov     rbx, [rsp+1C8h+var_88]
//   0x192E42E mov     qword ptr [rsp+1C8h+var_180], rax; int
//   0x192E433 mov     rax, qword ptr [rsp+1C8h+var_80]
//   0x192E43B cmp     rax, rbx
//   0x192E43E jz      loc_192E536
//   0x192E444 mov     qword ptr [rsp+1C8h+var_178], r13; int
//   0x192E449 mov     r15, rax
//   0x192E44C nop     dword ptr [rax+00h]
//   0x192E450 mov     rbp, [rbx]
//   0x192E453 test    rbp, rbp
//   0x192E456 jz      loc_192E51C
//   0x192E45C mov     rax, [rbx+8]
//   0x192E460 test    rax, rax
//   0x192E463 jz      loc_192E51C
//   0x192E469 cmp     rbp, rax
//   0x192E46C jnb     loc_192E7D0
//   0x192E472 mov     r12d, [rbp+218h]
//   0x192E479 mov     r13, [rbp+210h]
//   0x192E480 shl     r12, 6
//   0x192E484 add     r12, r13
//   0x192E487 cmp     r13, r12
//   0x192E48A jz      short loc_192E4B8
//   0x192E48C nop     dword ptr [rax+00h]
//   0x192E490 sub     r12, 40h ; '@'
//   0x192E494 mov     rdi, [r12+18h]; void *
//   0x192E499 lea     rax, [r12+28h]
//   0x192E49E cmp     rdi, rax
//   0x192E4A1 jz      loc_192E788
//   0x192E4A7 call    __ZdlPv; operator delete(void *)
//   0x192E4AC cmp     r13, r12
//   0x192E4AF jnz     short loc_192E490
//   0x192E4B1 mov     r12, [rbp+210h]
//   0x192E4B8 lea     rax, [rbp+220h]
//   0x192E4BF cmp     r12, rax
//   0x192E4C2 jz      short loc_192E4CC
//   0x192E4C4 mov     rdi, r12; ptr
//   0x192E4C7 call    _free
//   0x192E4CC mov     rdi, [rbp+1A0h]; ptr
//   0x192E4D3 lea     rax, [rbp+1B0h]
//   0x192E4DA cmp     rdi, rax
//   0x192E4DD jz      short loc_192E4E4
//   0x192E4DF call    _free
//   0x192E4E4 lea     r13, [rbp+180h]
//   0x192E4EB lea     r12, [rbp+40h]
//   0x192E4EF nop
//   0x192E4F0 mov     rdi, [r13+0]; void *
//   0x192E4F4 lea     rax, [r13+10h]
//   0x192E4F8 cmp     rdi, rax
//   0x192E4FB jz      loc_192E770
//   0x192E501 call    __ZdlPv; operator delete(void *)
//   0x192E506 sub     r13, 20h ; ' '
//   0x192E50A cmp     r13, r12
//   0x192E50D jnz     short loc_192E4F0
//   0x192E50F mov     esi, 3A0h; unsigned __int64
//   0x192E514 mov     rdi, rbp; void *
//   0x192E517 call    __ZdlPvm; operator delete(void *,ulong)
//   0x192E51C add     rbx, 18h
//   0x192E520 cmp     r15, rbx
//   0x192E523 jnz     loc_192E450
//   0x192E529 mov     r13, qword ptr [rsp+1C8h+var_178]
//   0x192E52E mov     rbx, [rsp+1C8h+var_88]
//   0x192E536 test    rbx, rbx
//   0x192E539 jz      short loc_192E543
//   0x192E53B mov     rdi, rbx; void *
//   0x192E53E call    __ZdlPv; operator delete(void *)
//   0x192E543 mov     rdi, [rsp+1C8h+var_B8]; ptr
//   0x192E54B lea     rax, [r13+20h]
//   0x192E54F cmp     rdi, rax
//   0x192E552 jz      short loc_192E559
//   0x192E554 call    _free
//   0x192E559 cmp     qword ptr [rsp+1C8h+var_180], 0
//   0x192E55F jz      loc_192EB86
//   0x192E565 mov     ecx, [rsp+1C8h+var_1A4]
//   0x192E569 cmp     [rsp+1C8h+var_1A8], ecx
//   0x192E56D jz      loc_192EA19
//   0x192E573 mov     edx, 146Bh
//   0x192E578 mov     rsi, qword ptr [rsp+1C8h+var_1B0]
//   0x192E57D mov     rdi, r13
//   0x192E580 lea     rbp, [rsp+1C8h+var_138]
//   0x192E588 call    sub_168B9B0
//   0x192E58D mov     esi, [rsp+1C8h+var_14C]
//   0x192E591 mov     edx, 3
//   0x192E596 mov     rdi, r13
//   0x192E599 call    sub_AE9DF0
//   0x192E59E mov     esi, [rsp+1C8h+var_198]
//   0x192E5A2 mov     edx, 3
//   0x192E5A7 mov     rdi, r13
//   0x192E5AA call    sub_AE9DF0
//   0x192E5AF mov     esi, [rsp+1C8h+var_1C8]
//   0x192E5B2 mov     edx, 3
//   0x192E5B7 mov     rdi, r13
//   0x192E5BA sub     esi, [rsp+1C8h+var_1A0]
//   0x192E5BE call    sub_AE9DF0
//   0x192E5C3 movzx   esi, [rsp+1C8h+var_14D]
//   0x192E5C8 mov     edx, 2
//   0x192E5CD mov     rdi, r13
//   0x192E5D0 call    sub_AE9DF0
//   0x192E5D5 mov     rax, qword ptr [rsp+1C8h+var_100+0Ch]
//   0x192E5DD mov     rsi, rbp
//   0x192E5E0 mov     rdi, r13
//   0x192E5E3 mov     byte ptr [rsp+1C8h+var_130], 1; int
//   0x192E5EB mov     qword ptr [rsp+1C8h+var_138], rax; int
//   0x192E5F3 call    sub_AEC610
//   0x192E5F8 mov     rsi, qword ptr [rsp+1C8h+var_190]; int
//   0x192E5FD mov     rdi, qword ptr [rsp+1C8h+var_1B8]; int
//   0x192E602 mov     rdx, r13; int
//   0x192E605 mov     ecx, 1; int
//   0x192E60A call    sub_1A60AF0
//   0x192E60F mov     rsi, [rsp+1C8h+ptr]
//   0x192E617 test    rsi, rsi
//   0x192E61A jz      short loc_192E62E
//   0x192E61C mov     rdi, qword ptr [rsp+1C8h+var_C0]
//   0x192E624 test    rdi, rdi
//   0x192E627 jz      short loc_192E62E
//   0x192E629 call    sub_1580C40
//   0x192E62E cmp     qword ptr [rsp+1C8h+var_128], 0
//   0x192E637 jz      loc_192E980
//   0x192E63D mov     r13, [rsp+1C8h+var_E8+8]
//   0x192E645 mov     rbp, [rsp+1C8h+var_E8]
//   0x192E64D cmp     r13, rbp
//   0x192E650 jz      loc_192DFE8
//   0x192E656 nop     word ptr [rax+rax+00000000h]
//   0x192E660 mov     r12, [rbp+0]
//   0x192E664 test    r12, r12
//   0x192E667 jz      loc_192E72F
//   0x192E66D mov     rax, [rbp+8]
//   0x192E671 test    rax, rax
//   0x192E674 jz      loc_192E72F
//   0x192E67A cmp     r12, rax
//   0x192E67D jnb     loc_192E7A0
//   0x192E683 mov     ebx, [r12+218h]
//   0x192E68B mov     r14, [r12+210h]
//   0x192E693 shl     rbx, 6
//   0x192E697 add     rbx, r14
//   0x192E69A cmp     r14, rbx
//   0x192E69D jz      short loc_192E6C7
//   0x192E69F nop
//   0x192E6A0 sub     rbx, 40h ; '@'
//   0x192E6A4 mov     rdi, [rbx+18h]; void *
//   0x192E6A8 lea     rax, [rbx+28h]
//   0x192E6AC cmp     rdi, rax
//   0x192E6AF jz      loc_192E758
//   0x192E6B5 call    __ZdlPv; operator delete(void *)
//   0x192E6BA cmp     r14, rbx
//   0x192E6BD jnz     short loc_192E6A0
//   0x192E6BF mov     rbx, [r12+210h]
//   0x192E6C7 lea     rax, [r12+220h]
//   0x192E6CF cmp     rbx, rax
//   0x192E6D2 jz      short loc_192E6DC
//   0x192E6D4 mov     rdi, rbx; ptr
//   0x192E6D7 call    _free
//   0x192E6DC mov     rdi, [r12+1A0h]; ptr
//   0x192E6E4 lea     rax, [r12+1B0h]
//   0x192E6EC cmp     rdi, rax
//   0x192E6EF jz      short loc_192E6F6
//   0x192E6F1 call    _free
//   0x192E6F6 lea     rbx, [r12+180h]
//   0x192E6FE lea     r14, [r12+40h]
//   0x192E703 nop     dword ptr [rax+rax+00h]
//   0x192E708 mov     rdi, [rbx]; void *
//   0x192E70B lea     rax, [rbx+10h]
//   0x192E70F cmp     rdi, rax
//   0x192E712 jz      short loc_192E748
//   0x192E714 call    __ZdlPv; operator delete(void *)
//   0x192E719 sub     rbx, 20h ; ' '
//   0x192E71D cmp     rbx, r14
//   0x192E720 jnz     short loc_192E708
//   0x192E722 mov     esi, 3A0h; unsigned __int64
//   0x192E727 mov     rdi, r12; void *
//   0x192E72A call    __ZdlPvm; operator delete(void *,ulong)
//   0x192E72F add     rbp, 18h
//   0x192E733 cmp     r13, rbp
//   0x192E736 jnz     loc_192E660
//   0x192E73C jmp     loc_192DFE0
//   0x192E741 align 8
//   0x192E748 sub     rbx, 20h ; ' '
//   0x192E74C cmp     r14, rbx
//   0x192E74F jnz     short loc_192E708
//   0x192E751 jmp     short loc_192E722
//   0x192E753 align 8
//   0x192E758 cmp     r14, rbx
//   0x192E75B jnz     loc_192E6A0
//   0x192E761 jmp     loc_192E6BF
//   0x192E766 align 10h
//   0x192E770 sub     r13, 20h ; ' '
//   0x192E774 cmp     r12, r13
//   0x192E777 jnz     loc_192E4F0
//   0x192E77D jmp     loc_192E50F
//   0x192E782 align 8
//   0x192E788 cmp     r13, r12
//   0x192E78B jnz     loc_192E490
//   0x192E791 jmp     loc_192E4B1
//   0x192E796 align 20h
//   0x192E7A0 lea     rdx, [rax+3A00h]
//   0x192E7A7 cmp     r12, rdx
//   0x192E7AA ja      loc_192E683
//   0x192E7B0 mov     edx, [rax+3A80h]
//   0x192E7B6 lea     ecx, [rdx+1]
//   0x192E7B9 mov     [rax+3A80h], ecx
//   0x192E7BF mov     [rax+rdx*8+3A00h], r12
//   0x192E7C7 jmp     loc_192E72F
//   0x192E7CC align 10h
//   0x192E7D0 lea     rdx, [rax+3A00h]
//   0x192E7D7 cmp     rbp, rdx
//   0x192E7DA ja      loc_192E472
//   0x192E7E0 mov     edx, [rax+3A80h]
//   0x192E7E6 lea     ecx, [rdx+1]
//   0x192E7E9 mov     [rax+3A80h], ecx
//   0x192E7EF mov     [rax+rdx*8+3A00h], rbp
//   0x192E7F7 jmp     loc_192E51C
//   0x192E7FC align 20h
//   0x192E800 movzx   eax, ax
//   0x192E803 mov     [rsp+1C8h+var_1A8], eax
//   0x192E807 jmp     loc_192D8BE
//   0x192E80C align 10h
//   0x192E810 mov     ecx, [rsp+1C8h+var_1A4]
//   0x192E814 cmp     [rsp+1C8h+var_1A8], ecx
//   0x192E818 jz      loc_192E967
//   0x192E81E mov     ecx, 1469h
//   0x192E823 mov     edx, [rsp+1C8h+var_188]
//   0x192E827 mov     rsi, qword ptr [rsp+1C8h+var_1B0]
//   0x192E82C xor     r8d, r8d
//   0x192E82F mov     rdi, r13
//   0x192E832 lea     rbp, [rsp+1C8h+var_138]
//   0x192E83A call    sub_168B9F0
//   0x192E83F lea     rsi, [rsp+1C8h+var_14C]
//   0x192E844 mov     rdi, r13
//   0x192E847 call    sub_1588370
//   0x192E84C mov     ecx, [rsp+1C8h+var_198]
//   0x192E850 lea     rsi, [rsp+1C8h+var_144]
//   0x192E858 mov     rdi, rax
//   0x192E85B mov     [rsp+1C8h+var_144], ecx
//   0x192E862 call    sub_16CF160
//   0x192E867 mov     esi, [rsp+1C8h+var_1C8]
//   0x192E86A sub     esi, [rsp+1C8h+var_1A0]
//   0x192E86E mov     dword ptr [rsp+1C8h+var_140], esi
//   0x192E875 mov     rdi, rax
//   0x192E878 lea     rsi, [rsp+1C8h+var_140]
//   0x192E880 call    sub_16CF160
//   0x192E885 lea     rsi, [rsp+1C8h+var_14D]
//   0x192E88A mov     rdi, rax
//   0x192E88D call    sub_15890D0
//   0x192E892 mov     rdi, r14
//   0x192E895 mov     rbx, rax
//   0x192E898 call    sub_EEC8C0
//   0x192E89D mov     qword ptr [rsp+1C8h+var_138], rax
//   0x192E8A5 mov     rdi, rbx
//   0x192E8A8 mov     rsi, rbp
//   0x192E8AB call    sub_1587DB0
//   0x192E8B0 mov     rdi, r13
//   0x192E8B3 call    sub_15F7200
//   0x192E8B8 jmp     loc_192E62E
//   0x192E8BD align 20h
//   0x192E8C0 movzx   edx, dx
//   0x192E8C3 mov     r12d, 1
//   0x192E8C9 sub     edx, 17h
//   0x192E8CC cmp     edx, 1
//   0x192E8CF ja      loc_192D850
//   0x192E8D5 cmp     qword ptr [rax+28h], 0
//   0x192E8DA setz    r12b
//   0x192E8DE jmp     loc_192D850
//   0x192E8E3 align 8
//   0x192E8E8 mov     rdi, qword ptr [rsp+1C8h+var_160]
//   0x192E8ED test    rdi, rdi
//   0x192E8F0 jz      loc_192DED2
//   0x192E8F6 xor     esi, esi
//   0x192E8F8 call    sub_B75A50
//   0x192E8FD test    eax, eax
//   0x192E8FF jnz     loc_192DED2
//   0x192E905 cmp     byte ptr [rsp+1C8h+var_19C], 0
//   0x192E90A jnz     loc_192DED2
//   0x192E910 mov     rax, qword ptr [rsp+1C8h+var_160]
//   0x192E915 mov     rsi, qword ptr [rsp+1C8h+var_188]
//   0x192E91A xor     r8d, r8d
//   0x192E91D mov     rdi, r13
//   0x192E920 mov     ecx, 16B7h
//   0x192E925 mov     edx, [rax+18h]
//   0x192E928 call    sub_168B9F0
//   0x192E92D lea     rsi, [rsp+1C8h+var_160]
//   0x192E932 mov     rdi, r13
//   0x192E935 call    sub_1795A40
//   0x192E93A mov     rdi, qword ptr [rsp+1C8h+var_160]
//   0x192E93F mov     r12, rax
//   0x192E942 call    sub_B77730
//   0x192E947 mov     rdi, r12
//   0x192E94A mov     rsi, rbp
//   0x192E94D mov     qword ptr [rsp+1C8h+var_138], rax
//   0x192E955 call    sub_1587DB0
//   0x192E95A mov     rdi, r13
//   0x192E95D call    sub_15F7200
//   0x192E962 jmp     loc_192DED2
//   0x192E967 mov     rax, qword ptr [rsp+1C8h+var_1C0]
//   0x192E96C cmp     byte ptr [rax+13h], 0
//   0x192E970 js      loc_192E81E
//   0x192E976 mov     ecx, 1468h
//   0x192E97B jmp     loc_192E823
//   0x192E980 mov     rdi, qword ptr [rsp+1C8h+var_160]
//   0x192E985 test    rdi, rdi
//   0x192E988 jz      loc_192E63D
//   0x192E98E xor     esi, esi
//   0x192E990 call    sub_B75A50
//   0x192E995 test    eax, eax
//   0x192E997 jnz     loc_192E63D
//   0x192E99D cmp     byte ptr [rsp+1C8h+var_19C], 0
//   0x192E9A2 jnz     loc_192E63D
//   0x192E9A8 mov     rax, qword ptr [rsp+1C8h+var_160]
//   0x192E9AD mov     rsi, qword ptr [rsp+1C8h+var_1B0]
//   0x192E9B2 xor     r8d, r8d
//   0x192E9B5 mov     rdi, r13
//   0x192E9B8 mov     ecx, 16B7h
//   0x192E9BD mov     edx, [rax+18h]
//   0x192E9C0 call    sub_168B9F0
//   0x192E9C5 lea     rsi, [rsp+1C8h+var_160]
//   0x192E9CA mov     rdi, r13
//   0x192E9CD call    sub_1795A40
//   0x192E9D2 mov     rdi, qword ptr [rsp+1C8h+var_160]
//   0x192E9D7 mov     rbx, rax
//   0x192E9DA call    sub_B77730
//   0x192E9DF mov     rdi, rbx
//   0x192E9E2 mov     rsi, rbp
//   0x192E9E5 mov     qword ptr [rsp+1C8h+var_138], rax
//   0x192E9ED call    sub_1587DB0
//   0x192E9F2 mov     rdi, r13
//   0x192E9F5 call    sub_15F7200
//   0x192E9FA jmp     loc_192E63D
//   0x192E9FF align 20h
//   0x192EA00 mov     rax, qword ptr [rsp+1C8h+var_1C0]
//   0x192EA05 cmp     byte ptr [rax+13h], 0
//   0x192EA09 js      loc_192DE08
//   0x192EA0F mov     edx, 1473h
//   0x192EA14 jmp     loc_192DE0D
//   0x192EA19 mov     rax, qword ptr [rsp+1C8h+var_1C0]
//   0x192EA1E cmp     byte ptr [rax+13h], 0
//   0x192EA22 js      loc_192E573
//   0x192EA28 mov     edx, 146Dh
//   0x192EA2D jmp     loc_192E578
//   0x192EA32 cmp     [rsp+1C8h+var_180], 1
//   0x192EA37 jnz     loc_192E080
//   0x192EA3D mov     rax, qword ptr [rsp+1C8h+var_160]
//   0x192EA42 test    rax, rax
//   0x192EA45 jz      loc_192E080
//   0x192EA4B mov     ebp, [rsp+1C8h+var_1A0]
//   0x192EA4F mov     rax, [rax+78h]
//   0x192EA53 mov     rax, [rax+rbp*8]
//   0x192EA57 cmp     qword ptr [rax+28h], 0
//   0x192EA5C jz      loc_192E080
//   0x192EA62 mov     ecx, [rsp+1C8h+var_1A4]
//   0x192EA66 mov     rax, qword ptr [rsp+1C8h+var_198]
//   0x192EA6B xor     r12d, r12d
//   0x192EA6E cmp     [rsp+1C8h+var_1A8], ecx
//   0x192EA72 mov     rcx, qword ptr [rsp+1C8h+var_1B0]
//   0x192EA77 setz    r12b
//   0x192EA7B lea     r15, [rax+rcx*8]
//   0x192EA7F lea     r12d, [r12+r12+1470h]
//   0x192EA87 mov     rdi, [r15]
//   0x192EA8A call    sub_EEB7E0
//   0x192EA8F mov     rsi, qword ptr [rsp+1C8h+var_188]
//   0x192EA94 xor     r8d, r8d
//   0x192EA97 mov     ecx, r12d
//   0x192EA9A mov     edx, eax
//   0x192EA9C mov     rdi, r13
//   0x192EA9F call    sub_168B9F0
//   0x192EAA4 lea     rsi, [rsp+1C8h+var_14C]
//   0x192EAA9 mov     rdi, r13
//   0x192EAAC call    sub_1588370
//   0x192EAB1 mov     r12, rax
//   0x192EAB4 mov     rax, qword ptr [rsp+1C8h+var_160]
//   0x192EAB9 cmp     byte ptr [r12+78h], 0
//   0x192EABF mov     rax, [rax+78h]
//   0x192EAC3 mov     r8, [rax+rbp*8]
//   0x192EAC7 jnz     loc_192EB67
//   0x192EACD cmp     byte ptr [r12+84h], 0
//   0x192EAD6 lea     rbp, [rsp+1C8h+var_138]
//   0x192EADE jnz     loc_192EC6C
//   0x192EAE4 mov     rdi, r12
//   0x192EAE7 mov     eax, [rsp+1C8h+var_1C8]
//   0x192EAEA lea     rsi, [rsp+1C8h+var_144]
//   0x192EAF2 sub     eax, [rsp+1C8h+var_1A0]
//   0x192EAF6 mov     [rsp+1C8h+var_144], eax
//   0x192EAFD call    sub_16CF160
//   0x192EB02 lea     rsi, [rsp+1C8h+var_14D]
//   0x192EB07 mov     rdi, rax
//   0x192EB0A call    sub_15890D0
//   0x192EB0F mov     rdi, r14
//   0x192EB12 mov     r12, rax
//   0x192EB15 call    sub_EEC8C0
//   0x192EB1A lea     rsi, [rsp+1C8h+var_140]
//   0x192EB22 mov     rdi, r12
//   0x192EB25 mov     [rsp+1C8h+var_140], rax
//   0x192EB2D call    sub_1587DB0
//   0x192EB32 mov     rcx, qword ptr [rsp+1C8h+var_198]
//   0x192EB37 mov     r12, rax
//   0x192EB3A mov     rax, qword ptr [rsp+1C8h+var_1C8]
//   0x192EB3E mov     rdi, [rcx+rax*8-8]
//   0x192EB43 call    sub_EEC140
//   0x192EB48 mov     rdi, [r15]
//   0x192EB4B mov     r14d, eax
//   0x192EB4E call    sub_EEB7E0
//   0x192EB53 mov     [rsp+1C8h+var_138+4], r14d
//   0x192EB5B mov     [rsp+1C8h+var_138], eax
//   0x192EB62 jmp     loc_192E16A
//   0x192EB67 lea     rdi, [r12+20h]
//   0x192EB6C mov     edx, 0Ah
//   0x192EB71 mov     rsi, r8
//   0x192EB74 call    sub_AE9DF0
//   0x192EB79 lea     rbp, [rsp+1C8h+var_138]
//   0x192EB81 jmp     loc_192EAE4
//   0x192EB86 cmp     [rsp+1C8h+var_198], 1
//   0x192EB8B jnz     loc_192E810
//   0x192EB91 mov     rax, qword ptr [rsp+1C8h+var_160]
//   0x192EB96 test    rax, rax
//   0x192EB99 jz      loc_192E810
//   0x192EB9F mov     ebx, [rsp+1C8h+var_1A0]
//   0x192EBA3 mov     rax, [rax+78h]
//   0x192EBA7 mov     rax, [rax+rbx*8]
//   0x192EBAB cmp     qword ptr [rax+28h], 0
//   0x192EBB0 jz      loc_192E810
//   0x192EBB6 mov     ecx, [rsp+1C8h+var_1A4]
//   0x192EBBA cmp     [rsp+1C8h+var_1A8], ecx
//   0x192EBBE jz      short loc_192EC38
//   0x192EBC0 mov     ecx, 146Ah
//   0x192EBC5 mov     edx, [rsp+1C8h+var_188]
//   0x192EBC9 mov     rsi, qword ptr [rsp+1C8h+var_1B0]
//   0x192EBCE xor     r8d, r8d
//   0x192EBD1 mov     rdi, r13
//   0x192EBD4 call    sub_168B9F0
//   0x192EBD9 lea     rsi, [rsp+1C8h+var_14C]
//   0x192EBDE mov     rdi, r13
//   0x192EBE1 call    sub_1588370
//   0x192EBE6 mov     r15, rax
//   0x192EBE9 mov     rax, qword ptr [rsp+1C8h+var_160]
//   0x192EBEE cmp     byte ptr [r15+78h], 0
//   0x192EBF3 mov     rax, [rax+78h]
//   0x192EBF7 mov     rbx, [rax+rbx*8]
//   0x192EBFB jnz     short loc_192EC51
//   0x192EBFD cmp     byte ptr [r15+84h], 0
//   0x192EC05 lea     rbp, [rsp+1C8h+var_138]
//   0x192EC0D jnz     loc_192ECE7
//   0x192EC13 lea     rsi, [rsp+1C8h+var_14D]
//   0x192EC18 mov     rdi, r15
//   0x192EC1B call    sub_15890D0
//   0x192EC20 mov     rdi, r14
//   0x192EC23 mov     rbx, rax
//   0x192EC26 call    sub_EEC8C0
//   0x192EC2B mov     qword ptr [rsp+1C8h+var_138], rax
//   0x192EC33 jmp     loc_192E8A5
//   0x192EC38 mov     rax, qword ptr [rsp+1C8h+var_1C0]
//   0x192EC3D cmp     byte ptr [rax+13h], 0
//   0x192EC41 js      loc_192EBC0
//   0x192EC47 mov     ecx, 146Ch
//   0x192EC4C jmp     loc_192EBC5
//   0x192EC51 lea     rdi, [r15+20h]
//   0x192EC55 mov     edx, 0Ah
//   0x192EC5A mov     rsi, rbx
//   0x192EC5D call    sub_AE9DF0
//   0x192EC62 lea     rbp, [rsp+1C8h+var_138]
//   0x192EC6A jmp     short loc_192EC13
//   0x192EC6C mov     rdi, r12
//   0x192EC6F mov     qword ptr [rsp+1C8h+var_1B8], r8
//   0x192EC74 call    sub_168B9E0
//   0x192EC79 mov     r8, qword ptr [rsp+1C8h+var_1B8]
//   0x192EC7E mov     qword ptr [rsp+1C8h+var_1C0], rax
//   0x192EC83 mov     rax, [r12+10h]
//   0x192EC88 test    rax, rax
//   0x192EC8B jz      short loc_192EC9B
//   0x192EC8D mov     rdx, [rax]
//   0x192EC90 mov     rdi, rax
//   0x192EC93 call    qword ptr [rdx+20h]
//   0x192EC96 mov     r8, qword ptr [rsp+1C8h+var_1B8]
//   0x192EC9B mov     rdi, qword ptr [rsp+1C8h+var_1C0]
//   0x192ECA0 lea     rbp, [rsp+1C8h+var_138]
//   0x192ECA8 mov     qword ptr [rsp+1C8h+var_1B8], r8
//   0x192ECAD mov     rsi, rbp
//   0x192ECB0 mov     qword ptr [rsp+1C8h+var_138], rax
//   0x192ECB8 call    sub_1587BC0
//   0x192ECBD mov     edx, [r12+80h]
//   0x192ECC5 mov     r8, qword ptr [rsp+1C8h+var_1B8]
//   0x192ECCA shl     rdx, 5
//   0x192ECCE add     rdx, [rax]
//   0x192ECD1 mov     rsi, r8
//   0x192ECD4 lea     rdi, [rdx+8]
//   0x192ECD8 mov     edx, 0Ah
//   0x192ECDD call    sub_AE9DF0
//   0x192ECE2 jmp     loc_192EAE4
//   0x192ECE7 mov     rdi, r15
//   0x192ECEA call    sub_168B9E0
//   0x192ECEF mov     r12, rax
//   0x192ECF2 mov     rax, [r15+10h]
//   0x192ECF6 test    rax, rax
//   0x192ECF9 jz      short loc_192ED04
//   0x192ECFB mov     rdx, [rax]
//   0x192ECFE mov     rdi, rax
//   0x192ED01 call    qword ptr [rdx+20h]
//   0x192ED04 lea     rbp, [rsp+1C8h+var_138]
//   0x192ED0C mov     rdi, r12
//   0x192ED0F mov     qword ptr [rsp+1C8h+var_138], rax
//   0x192ED17 mov     rsi, rbp
//   0x192ED1A call    sub_1587BC0
//   0x192ED1F mov     edx, [r15+80h]
//   0x192ED26 mov     rsi, rbx
//   0x192ED29 shl     rdx, 5
//   0x192ED2D add     rdx, [rax]
//   0x192ED30 lea     rdi, [rdx+8]
//   0x192ED34 mov     edx, 0Ah
//   0x192ED39 call    sub_AE9DF0
//   0x192ED3E jmp     loc_192EC13
// ============================================================

void sub_192D780(/* signature unknown */)
{
    // see disassembly above
}

