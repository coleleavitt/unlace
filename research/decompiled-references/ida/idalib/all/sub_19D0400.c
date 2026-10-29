// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x19D0400
// Name:           sub_19D0400
// Function size:  2500 bytes (560 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x19D0400 push    r15
//   0x19D0402 mov     r15, rsi
//   0x19D0405 push    r14
//   0x19D0407 push    r13
//   0x19D0409 mov     r13d, r9d
//   0x19D040C push    r12
//   0x19D040E mov     r12, rdx
//   0x19D0411 push    rbp
//   0x19D0412 mov     rbp, rdi
//   0x19D0415 push    rbx
//   0x19D0416 mov     ebx, r8d
//   0x19D0419 sub     rsp, 178h
//   0x19D0420 mov     [rsp+1A8h+var_18C], ecx
//   0x19D0424 call    sub_168B6C0
//   0x19D0429 mov     r14, rax
//   0x19D042C mov     rax, [rsp+1A8h+arg_0]
//   0x19D0434 mov     qword ptr [rax], 0
//   0x19D043B test    bl, bl
//   0x19D043D jz      short loc_19D046A
//   0x19D043F test    r15, r15
//   0x19D0442 jz      short loc_19D046A
//   0x19D0444 test    byte ptr [r15+9], 8
//   0x19D0449 jnz     loc_19D0730
//   0x19D044F mov     rax, r15
//   0x19D0452 jmp     short loc_19D0462
//   0x19D0454 align 8
//   0x19D0458 test    byte ptr [rax+9], 8
//   0x19D045C jnz     loc_19D0730
//   0x19D0462 mov     rax, [rax]
//   0x19D0465 test    rax, rax
//   0x19D0468 jnz     short loc_19D0458
//   0x19D046A mov     rax, [rbp+0]
//   0x19D046E lea     rbx, [rsp+1A8h+var_E8]
//   0x19D0476 pxor    xmm0, xmm0
//   0x19D047A mov     rcx, 800000000h
//   0x19D0484 lea     rdx, [rbx+18h]
//   0x19D0488 mov     rsi, r12
//   0x19D048B lea     rdi, [rbx+88h]
//   0x19D0492 mov     qword ptr [rsp+1A8h+var_D8], rcx; int
//   0x19D049A mov     qword ptr [rsp+1A8h+var_78], rax; char
//   0x19D04A2 mov     eax, [rsp+1A8h+var_18C]
//   0x19D04A6 mov     [rsp+1A8h+var_E0], rdx; int
//   0x19D04AE movups  xmmword ptr [rsp+1A8h+var_90], xmm0; int
//   0x19D04B6 mov     [rsp+1A8h+var_68], eax; int
//   0x19D04BD mov     qword ptr [rsp+1A8h+var_E8], 0; int
//   0x19D04C9 mov     qword ptr [rsp+1A8h+var_80], 0; int
//   0x19D04D5 mov     qword ptr [rsp+1A8h+var_70], r12; int
//   0x19D04DD call    sub_B85890
//   0x19D04E2 pxor    xmm0, xmm0
//   0x19D04E6 mov     rdi, rbx
//   0x19D04E9 mov     rax, 101010000h
//   0x19D04F3 movaps  xmmword ptr [rsp+1A8h+var_58], xmm0; ptr
//   0x19D04FB mov     qword ptr [rsp+1A8h+var_48], rax; char
//   0x19D0503 call    sub_1A395A0
//   0x19D0508 mov     rdi, [rbp+0]
//   0x19D050C xor     r8d, r8d
//   0x19D050F xor     ecx, ecx
//   0x19D0511 mov     rdx, r15
//   0x19D0514 mov     rsi, rbx
//   0x19D0517 call    sub_1A49A10
//   0x19D051C cmp     [rsp+1A8h+var_E8], 5; switch 6 cases
//   0x19D0524 ja      short def_19D053B; jumptable 00000000019D053B default case
//   0x19D0526 mov     eax, [rsp+1A8h+var_E8]
//   0x19D052D lea     rdx, jpt_19D053B
//   0x19D0534 movsxd  rax, ds:(jpt_19D053B - 2646D68h)[rdx+rax*4]
//   0x19D0538 add     rax, rdx
//   0x19D053B jmp     rax; switch jump
//   0x19D053D align 20h
//   0x19D0540 lea     rax, [rsp+1A8h+var_148]; jumptable 00000000019D053B default case
//   0x19D0545 mov     qword ptr [rsp+1A8h+var_198], rax; int
//   0x19D054A mov     rdi, [rbp+0]
//   0x19D054E call    sub_15F1670
//   0x19D0553 pxor    xmm0, xmm0
//   0x19D0557 mov     r13, rax
//   0x19D055A movaps  xmmword ptr [rsp+1A8h+var_158], xmm0; int
//   0x19D055F mov     rax, 101010101h
//   0x19D0569 mov     qword ptr [rsp+1A8h+var_160], rax; int
//   0x19D056E lea     rax, off_2BC7128
//   0x19D0575 mov     qword ptr [rsp+1A8h+var_168], rax; int
//   0x19D057A test    r13, r13
//   0x19D057D jz      short loc_19D05A4
//   0x19D057F mov     rdi, r13
//   0x19D0582 call    sub_BA85D0
//   0x19D0587 test    rax, rax
//   0x19D058A jz      short loc_19D05A4
//   0x19D058C mov     rdi, r13
//   0x19D058F call    sub_BA85D0
//   0x19D0594 mov     rdi, rax
//   0x19D0597 call    sub_BAB630
//   0x19D059C test    rax, rax
//   0x19D059F setnz   byte ptr [rsp+1A8h+var_160+5]
//   0x19D05A4 push    0
//   0x19D05A6 xor     r9d, r9d
//   0x19D05A9 lea     rdx, [rbx+78h]
//   0x19D05AD mov     r8, r15
//   0x19D05B0 push    0
//   0x19D05B2 push    0
//   0x19D05B4 push    0
//   0x19D05B6 push    1
//   0x19D05B8 lea     rax, [rsp+1D0h+var_168]
//   0x19D05BD push    rax
//   0x19D05BE mov     ecx, dword ptr [rsp+1D8h+var_58+8]
//   0x19D05C5 mov     rdi, qword ptr [rsp+1D8h+var_198]
//   0x19D05CA mov     rsi, [rbp+0]
//   0x19D05CE call    sub_1A6BD60
//   0x19D05D3 add     rsp, 30h
//   0x19D05D7 cmp     qword ptr [rsp+1A8h+var_148], 0
//   0x19D05DD jz      short loc_19D05EB
//   0x19D05DF mov     eax, [rsp+1A8h+var_130]
//   0x19D05E3 test    eax, eax
//   0x19D05E5 jnz     loc_19D0900
//   0x19D05EB mov     r14, [rsp+1A8h+var_100]
//   0x19D05F3 mov     rbp, [rsp+1A8h+var_108]
//   0x19D05FB cmp     r14, rbp
//   0x19D05FE jz      loc_19D06F8
//   0x19D0604 nop     dword ptr [rax+00h]
//   0x19D0608 mov     r12, [rbp+0]
//   0x19D060C test    r12, r12
//   0x19D060F jz      loc_19D06E3
//   0x19D0615 mov     rax, [rbp+8]
//   0x19D0619 test    rax, rax
//   0x19D061C jz      loc_19D06E3
//   0x19D0622 cmp     r12, rax
//   0x19D0625 jnb     loc_19D0C20
//   0x19D062B mov     r13d, [r12+218h]
//   0x19D0633 mov     r15, [r12+210h]
//   0x19D063B shl     r13, 6
//   0x19D063F add     r13, r15
//   0x19D0642 cmp     r15, r13
//   0x19D0645 jz      short loc_19D0677
//   0x19D0647 nop     word ptr [rax+rax+00000000h]
//   0x19D0650 sub     r13, 40h ; '@'
//   0x19D0654 mov     rdi, [r13+18h]; void *
//   0x19D0658 lea     rax, [r13+28h]
//   0x19D065C cmp     rdi, rax
//   0x19D065F jz      loc_19D0C08
//   0x19D0665 call    __ZdlPv; operator delete(void *)
//   0x19D066A cmp     r15, r13
//   0x19D066D jnz     short loc_19D0650
//   0x19D066F mov     r13, [r12+210h]
//   0x19D0677 lea     rax, [r12+220h]
//   0x19D067F cmp     r13, rax
//   0x19D0682 jz      short loc_19D068C
//   0x19D0684 mov     rdi, r13; ptr
//   0x19D0687 call    _free
//   0x19D068C mov     rdi, [r12+1A0h]; ptr
//   0x19D0694 lea     rax, [r12+1B0h]
//   0x19D069C cmp     rdi, rax
//   0x19D069F jz      short loc_19D06A6
//   0x19D06A1 call    _free
//   0x19D06A6 lea     r15, [r12+180h]
//   0x19D06AE lea     r13, [r12+40h]
//   0x19D06B3 nop     dword ptr [rax+rax+00h]
//   0x19D06B8 mov     rdi, [r15]; void *
//   0x19D06BB lea     rax, [r15+10h]
//   0x19D06BF cmp     rdi, rax
//   0x19D06C2 jz      loc_19D0BF0
//   0x19D06C8 call    __ZdlPv; operator delete(void *)
//   0x19D06CD sub     r15, 20h ; ' '
//   0x19D06D1 cmp     r15, r13
//   0x19D06D4 jnz     short loc_19D06B8
//   0x19D06D6 mov     esi, 3A0h; unsigned __int64
//   0x19D06DB mov     rdi, r12; void *
//   0x19D06DE call    __ZdlPvm; operator delete(void *,ulong)
//   0x19D06E3 add     rbp, 18h
//   0x19D06E7 cmp     r14, rbp
//   0x19D06EA jnz     loc_19D0608
//   0x19D06F0 mov     rbp, [rsp+1A8h+var_108]
//   0x19D06F8 test    rbp, rbp
//   0x19D06FB jz      short loc_19D0705
//   0x19D06FD mov     rdi, rbp; void *
//   0x19D0700 call    __ZdlPv; operator delete(void *)
//   0x19D0705 mov     rax, qword ptr [rsp+1A8h+var_198]
//   0x19D070A mov     rdi, [rsp+1A8h+ptr]; ptr
//   0x19D070F add     rax, 20h ; ' '
//   0x19D0713 cmp     rdi, rax
//   0x19D0716 jz      short loc_19D071D
//   0x19D0718 call    _free
//   0x19D071D mov     r13d, 1
//   0x19D0723 jmp     loc_19D0820
//   0x19D0728 align 10h
//   0x19D0730 movzx   r13d, r13b
//   0x19D0734 add     rsp, 178h
//   0x19D073B mov     eax, r13d
//   0x19D073E pop     rbx
//   0x19D073F pop     rbp
//   0x19D0740 pop     r12
//   0x19D0742 pop     r13
//   0x19D0744 pop     r14
//   0x19D0746 pop     r15
//   0x19D0748 retn
//   0x19D0749 align 10h
//   0x19D0750 xor     edx, edx; jumptable 00000000019D053B cases 1,3-5
//   0x19D0752 mov     r13d, 1
//   0x19D0758 mov     word ptr [rsp+1A8h+var_48+3], dx
//   0x19D0760 mov     rdi, [rsp+1A8h+var_90]; void *
//   0x19D0768 test    rdi, rdi
//   0x19D076B jz      short loc_19D0772
//   0x19D076D call    sub_1A39780
//   0x19D0772 mov     rdi, [rsp+1A8h+var_E0]; ptr
//   0x19D077A add     rbx, 18h
//   0x19D077E cmp     rdi, rbx
//   0x19D0781 jz      short loc_19D0734
//   0x19D0783 call    _free
//   0x19D0788 jmp     short loc_19D0734
//   0x19D078A align 10h
//   0x19D0790 test    r13b, r13b; jumptable 00000000019D053B case 2
//   0x19D0793 jnz     short loc_19D071D
//   0x19D0795 mov     rax, [rsp+1A8h+var_E0]
//   0x19D079D mov     r12, [rax]
//   0x19D07A0 and     r12, 0FFFFFFFFFFFFFFF8h
//   0x19D07A4 movzx   eax, byte ptr [r12+1Ch]
//   0x19D07AA and     eax, 7Fh
//   0x19D07AD movzx   edx, al
//   0x19D07B0 sub     edx, 35h ; '5'
//   0x19D07B3 cmp     edx, 1
//   0x19D07B6 jbe     short loc_19D07C3
//   0x19D07B8 lea     edx, [rax+34h]
//   0x19D07BB and     edx, 7Fh
//   0x19D07BE cmp     dl, 1
//   0x19D07C1 ja      short loc_19D07D5
//   0x19D07C3 mov     rdi, r12
//   0x19D07C6 call    sub_B72ED0
//   0x19D07CB mov     r12, rax
//   0x19D07CE movzx   eax, byte ptr [rax+1Ch]
//   0x19D07D2 and     eax, 7Fh
//   0x19D07D5 cmp     al, 14h
//   0x19D07D7 jnz     loc_19D0CBC
//   0x19D07DD xor     edx, edx
//   0x19D07DF mov     rsi, r12
//   0x19D07E2 mov     rdi, r14
//   0x19D07E5 call    sub_A82070
//   0x19D07EA mov     r13, rax
//   0x19D07ED mov     edx, [rsp+1A8h+var_18C]
//   0x19D07F1 mov     rsi, r13
//   0x19D07F4 mov     rdi, r14
//   0x19D07F7 call    sub_A81910
//   0x19D07FC mov     rdi, [rbp+0]
//   0x19D0800 mov     rsi, r13
//   0x19D0803 mov     r13d, 2
//   0x19D0809 mov     rdx, rax
//   0x19D080C call    sub_1E61050
//   0x19D0811 mov     rcx, [rsp+1A8h+arg_0]
//   0x19D0819 mov     [rcx], rax
//   0x19D081C nop     dword ptr [rax+00h]
//   0x19D0820 cmp     [rsp+1A8h+var_48+3], 0
//   0x19D0828 jz      short loc_19D0868
//   0x19D082A cmp     [rsp+1A8h+var_E8], 5
//   0x19D0832 jz      loc_19D0C50
//   0x19D0838 cmp     [rsp+1A8h+var_90+8], 0
//   0x19D0841 jz      loc_19D0760
//   0x19D0847 mov     rdi, qword ptr [rsp+1A8h+var_78]
//   0x19D084F mov     rax, [rdi+0E8h]
//   0x19D0856 test    byte ptr [rax+2Eh], 20h
//   0x19D085A jz      loc_19D0760
//   0x19D0860 mov     rsi, rbx
//   0x19D0863 call    sub_1663B80
//   0x19D0868 movzx   eax, [rsp+1A8h+var_48+4]
//   0x19D0870 test    al, al
//   0x19D0872 jz      loc_19D0760
//   0x19D0878 cmp     [rsp+1A8h+var_E8], 5
//   0x19D0880 jnz     loc_19D0760
//   0x19D0886 nop     word ptr [rax+rax+00000000h]
//   0x19D0890 mov     rdi, qword ptr [rsp+1A8h+var_78]
//   0x19D0898 mov     rsi, rbx
//   0x19D089B call    sub_1A445B0
//   0x19D08A0 jmp     loc_19D0760
//   0x19D08A5 align 8
//   0x19D08A8 mov     rdi, [rbp+0]; jumptable 00000000019D053B case 0
//   0x19D08AC call    sub_15F1670
//   0x19D08B1 mov     r13, rax
//   0x19D08B4 test    rax, rax
//   0x19D08B7 jz      def_19D053B; jumptable 00000000019D053B default case
//   0x19D08BD mov     rdi, rax
//   0x19D08C0 call    sub_BA85D0
//   0x19D08C5 test    rax, rax
//   0x19D08C8 jz      loc_19D071D
//   0x19D08CE mov     rdi, r13
//   0x19D08D1 call    sub_BA85D0
//   0x19D08D6 lea     rcx, [rsp+1A8h+var_148]
//   0x19D08DB mov     rsi, r12
//   0x19D08DE mov     rdx, rcx
//   0x19D08E1 mov     rdi, rax
//   0x19D08E4 mov     qword ptr [rsp+1A8h+var_198], rcx
//   0x19D08E9 call    sub_BAE3D0
//   0x19D08EE test    rax, rax
//   0x19D08F1 jnz     loc_19D071D
//   0x19D08F7 jmp     loc_19D054A
//   0x19D08FC align 20h
//   0x19D0900 mov     rax, [rsp+1A8h+ptr]
//   0x19D0905 mov     rdi, [rax]
//   0x19D0908 test    rdi, rdi
//   0x19D090B jz      loc_19D0D36
//   0x19D0911 call    sub_16C47B0
//   0x19D0916 mov     r13, rax
//   0x19D0919 test    rax, rax
//   0x19D091C jz      loc_19D05EB
//   0x19D0922 movzx   eax, byte ptr [rax+1Ch]
//   0x19D0926 and     eax, 7Fh
//   0x19D0929 cmp     al, 14h
//   0x19D092B jnz     loc_19D05EB
//   0x19D0931 mov     rax, [rbp+0]
//   0x19D0935 lea     r15, [rsp+1A8h+var_188]
//   0x19D093A mov     edx, 14FEh
//   0x19D093F mov     rsi, rbp
//   0x19D0942 mov     rdi, r15
//   0x19D0945 mov     qword ptr [rsp+1A8h+var_1A0], rax; int
//   0x19D094A call    sub_168B9B0
//   0x19D094F mov     rsi, r12
//   0x19D0952 mov     edx, 5
//   0x19D0957 mov     rdi, r15
//   0x19D095A call    sub_AE9DF0
//   0x19D095F mov     rsi, qword ptr [rsp+1A8h+var_198]; int
//   0x19D0964 mov     rdi, qword ptr [rsp+1A8h+var_1A0]; int
//   0x19D0969 mov     rdx, r15; int
//   0x19D096C mov     ecx, 1; int
//   0x19D0971 call    sub_1A60AF0
//   0x19D0976 mov     r12, [rsp+1A8h+var_188]
//   0x19D097B test    r12, r12
//   0x19D097E jz      loc_19D0A6D
//   0x19D0984 mov     rax, [rsp+1A8h+var_180]
//   0x19D0989 test    rax, rax
//   0x19D098C jz      loc_19D0A6D
//   0x19D0992 cmp     r12, rax
//   0x19D0995 jb      short loc_19D09A7
//   0x19D0997 lea     rdx, [rax+3A00h]
//   0x19D099E cmp     r12, rdx
//   0x19D09A1 jbe     loc_19D0DA8
//   0x19D09A7 mov     r15d, [r12+218h]
//   0x19D09AF mov     rdx, [r12+210h]
//   0x19D09B7 shl     r15, 6
//   0x19D09BB add     r15, rdx
//   0x19D09BE cmp     rdx, r15
//   0x19D09C1 jz      short loc_19D09F9
//   0x19D09C3 nop     dword ptr [rax+rax+00h]
//   0x19D09C8 sub     r15, 40h ; '@'
//   0x19D09CC mov     rdi, [r15+18h]; void *
//   0x19D09D0 lea     rax, [r15+28h]
//   0x19D09D4 cmp     rdi, rax
//   0x19D09D7 jz      loc_19D0D28
//   0x19D09DD mov     qword ptr [rsp+1A8h+var_1A0], rdx
//   0x19D09E2 call    __ZdlPv; operator delete(void *)
//   0x19D09E7 mov     rdx, qword ptr [rsp+1A8h+var_1A0]
//   0x19D09EC cmp     rdx, r15
//   0x19D09EF jnz     short loc_19D09C8
//   0x19D09F1 mov     r15, [r12+210h]
//   0x19D09F9 lea     rax, [r12+220h]
//   0x19D0A01 cmp     r15, rax
//   0x19D0A04 jz      short loc_19D0A0E
//   0x19D0A06 mov     rdi, r15; ptr
//   0x19D0A09 call    _free
//   0x19D0A0E mov     rdi, [r12+1A0h]; ptr
//   0x19D0A16 lea     rax, [r12+1B0h]
//   0x19D0A1E cmp     rdi, rax
//   0x19D0A21 jz      short loc_19D0A28
//   0x19D0A23 call    _free
//   0x19D0A28 lea     rax, [r12+40h]
//   0x19D0A2D lea     r15, [r12+180h]
//   0x19D0A35 mov     qword ptr [rsp+1A8h+var_1A0], rax
//   0x19D0A3A nop     word ptr [rax+rax+00h]
//   0x19D0A40 mov     rdi, [r15]; void *
//   0x19D0A43 lea     rdx, [r15+10h]
//   0x19D0A47 cmp     rdi, rdx
//   0x19D0A4A jz      loc_19D0D10
//   0x19D0A50 call    __ZdlPv; operator delete(void *)
//   0x19D0A55 sub     r15, 20h ; ' '
//   0x19D0A59 cmp     r15, qword ptr [rsp+1A8h+var_1A0]
//   0x19D0A5E jnz     short loc_19D0A40
//   0x19D0A60 mov     esi, 3A0h; unsigned __int64
//   0x19D0A65 mov     rdi, r12; void *
//   0x19D0A68 call    __ZdlPvm; operator delete(void *,ulong)
//   0x19D0A6D mov     rsi, r13
//   0x19D0A70 xor     edx, edx
//   0x19D0A72 mov     rdi, r14
//   0x19D0A75 mov     r13d, 2
//   0x19D0A7B call    sub_A82070
//   0x19D0A80 mov     edx, [rsp+1A8h+var_18C]
//   0x19D0A84 mov     rdi, r14
//   0x19D0A87 mov     rsi, rax
//   0x19D0A8A mov     r12, rax
//   0x19D0A8D call    sub_A81910
//   0x19D0A92 mov     rdi, [rbp+0]
//   0x19D0A96 mov     rsi, r12
//   0x19D0A99 mov     rdx, rax
//   0x19D0A9C call    sub_1E61050
//   0x19D0AA1 mov     rsi, [rsp+1A8h+arg_0]
//   0x19D0AA9 mov     [rsi], rax
//   0x19D0AAC mov     rax, [rsp+1A8h+var_100]
//   0x19D0AB4 mov     rbp, [rsp+1A8h+var_108]
//   0x19D0ABC mov     qword ptr [rsp+1A8h+var_1A0], rax
//   0x19D0AC1 cmp     rax, rbp
//   0x19D0AC4 jz      loc_19D0BBA
//   0x19D0ACA nop     word ptr [rax+rax+00h]
//   0x19D0AD0 mov     r12, [rbp+0]
//   0x19D0AD4 test    r12, r12
//   0x19D0AD7 jz      loc_19D0BA3
//   0x19D0ADD mov     rax, [rbp+8]
//   0x19D0AE1 test    rax, rax
//   0x19D0AE4 jz      loc_19D0BA3
//   0x19D0AEA cmp     r12, rax
//   0x19D0AED jnb     loc_19D0C90
//   0x19D0AF3 mov     r14d, [r12+218h]
//   0x19D0AFB mov     r15, [r12+210h]
//   0x19D0B03 shl     r14, 6
//   0x19D0B07 add     r14, r15
//   0x19D0B0A cmp     r15, r14
//   0x19D0B0D jz      short loc_19D0B37
//   0x19D0B0F nop
//   0x19D0B10 sub     r14, 40h ; '@'
//   0x19D0B14 mov     rdi, [r14+18h]; void *
//   0x19D0B18 lea     rax, [r14+28h]
//   0x19D0B1C cmp     rdi, rax
//   0x19D0B1F jz      loc_19D0C80
//   0x19D0B25 call    __ZdlPv; operator delete(void *)
//   0x19D0B2A cmp     r15, r14
//   0x19D0B2D jnz     short loc_19D0B10
//   0x19D0B2F mov     r14, [r12+210h]
//   0x19D0B37 lea     rax, [r12+220h]
//   0x19D0B3F cmp     r14, rax
//   0x19D0B42 jz      short loc_19D0B4C
//   0x19D0B44 mov     rdi, r14; ptr
//   0x19D0B47 call    _free
//   0x19D0B4C mov     rdi, [r12+1A0h]; ptr
//   0x19D0B54 lea     rax, [r12+1B0h]
//   0x19D0B5C cmp     rdi, rax
//   0x19D0B5F jz      short loc_19D0B66
//   0x19D0B61 call    _free
//   0x19D0B66 lea     r15, [r12+180h]
//   0x19D0B6E lea     r14, [r12+40h]
//   0x19D0B73 nop     dword ptr [rax+rax+00h]
//   0x19D0B78 mov     rdi, [r15]; void *
//   0x19D0B7B lea     rdx, [r15+10h]
//   0x19D0B7F cmp     rdi, rdx
//   0x19D0B82 jz      loc_19D0C68
//   0x19D0B88 call    __ZdlPv; operator delete(void *)
//   0x19D0B8D sub     r15, 20h ; ' '
//   0x19D0B91 cmp     r15, r14
//   0x19D0B94 jnz     short loc_19D0B78
//   0x19D0B96 mov     esi, 3A0h; unsigned __int64
//   0x19D0B9B mov     rdi, r12; void *
//   0x19D0B9E call    __ZdlPvm; operator delete(void *,ulong)
//   0x19D0BA3 add     rbp, 18h
//   0x19D0BA7 cmp     qword ptr [rsp+1A8h+var_1A0], rbp
//   0x19D0BAC jnz     loc_19D0AD0
//   0x19D0BB2 mov     rbp, [rsp+1A8h+var_108]
//   0x19D0BBA test    rbp, rbp
//   0x19D0BBD jz      short loc_19D0BC7
//   0x19D0BBF mov     rdi, rbp; void *
//   0x19D0BC2 call    __ZdlPv; operator delete(void *)
//   0x19D0BC7 mov     rax, qword ptr [rsp+1A8h+var_198]
//   0x19D0BCC mov     rdi, [rsp+1A8h+ptr]; ptr
//   0x19D0BD1 add     rax, 20h ; ' '
//   0x19D0BD5 cmp     rdi, rax
//   0x19D0BD8 jz      loc_19D0820
//   0x19D0BDE call    _free
//   0x19D0BE3 jmp     loc_19D0820
//   0x19D0BE8 align 10h
//   0x19D0BF0 sub     r15, 20h ; ' '
//   0x19D0BF4 cmp     r13, r15
//   0x19D0BF7 jnz     loc_19D06B8
//   0x19D0BFD jmp     loc_19D06D6
//   0x19D0C02 align 8
//   0x19D0C08 cmp     r15, r13
//   0x19D0C0B jnz     loc_19D0650
//   0x19D0C11 jmp     loc_19D066F
//   0x19D0C16 align 20h
//   0x19D0C20 lea     rdx, [rax+3A00h]
//   0x19D0C27 cmp     r12, rdx
//   0x19D0C2A ja      loc_19D062B
//   0x19D0C30 mov     edx, [rax+3A80h]
//   0x19D0C36 lea     ecx, [rdx+1]
//   0x19D0C39 mov     [rax+3A80h], ecx
//   0x19D0C3F mov     [rax+rdx*8+3A00h], r12
//   0x19D0C47 jmp     loc_19D06E3
//   0x19D0C4C align 10h
//   0x19D0C50 cmp     [rsp+1A8h+var_48+4], 0
//   0x19D0C58 jnz     loc_19D0890
//   0x19D0C5E jmp     loc_19D0760
//   0x19D0C63 align 8
//   0x19D0C68 sub     r15, 20h ; ' '
//   0x19D0C6C cmp     r15, r14
//   0x19D0C6F jnz     loc_19D0B78
//   0x19D0C75 jmp     loc_19D0B96
//   0x19D0C7A align 20h
//   0x19D0C80 cmp     r15, r14
//   0x19D0C83 jnz     loc_19D0B10
//   0x19D0C89 jmp     loc_19D0B2F
//   0x19D0C8E align 10h
//   0x19D0C90 lea     rdx, [rax+3A00h]
//   0x19D0C97 cmp     r12, rdx
//   0x19D0C9A ja      loc_19D0AF3
//   0x19D0CA0 mov     edx, [rax+3A80h]
//   0x19D0CA6 lea     ecx, [rdx+1]
//   0x19D0CA9 mov     [rax+3A80h], ecx
//   0x19D0CAF mov     [rax+rdx*8+3A00h], r12
//   0x19D0CB7 jmp     loc_19D0BA3
//   0x19D0CBC movzx   eax, al
//   0x19D0CBF sub     eax, 3Ah ; ':'
//   0x19D0CC2 cmp     eax, 9
//   0x19D0CC5 ja      loc_19D071D
//   0x19D0CCB mov     r13, [r12+30h]
//   0x19D0CD0 test    r13, r13
//   0x19D0CD3 jz      loc_19D0D95
//   0x19D0CD9 and     r13, 0FFFFFFFFFFFFFFF0h
//   0x19D0CDD lea     rdx, [rsp+1A8h+var_18C]
//   0x19D0CE2 sub     rsp, 8
//   0x19D0CE6 mov     rdi, [rbp+0]
//   0x19D0CEA xor     r9d, r9d
//   0x19D0CED push    0
//   0x19D0CEF xor     r8d, r8d
//   0x19D0CF2 mov     ecx, 1
//   0x19D0CF7 mov     rsi, r12
//   0x19D0CFA push    0
//   0x19D0CFC push    0
//   0x19D0CFE call    sub_18F5260
//   0x19D0D03 add     rsp, 20h
//   0x19D0D07 jmp     loc_19D07ED
//   0x19D0D0C align 10h
//   0x19D0D10 sub     r15, 20h ; ' '
//   0x19D0D14 cmp     qword ptr [rsp+1A8h+var_1A0], r15
//   0x19D0D19 jnz     loc_19D0A40
//   0x19D0D1F jmp     loc_19D0A60
//   0x19D0D24 align 8
//   0x19D0D28 cmp     rdx, r15
//   0x19D0D2B jnz     loc_19D09C8
//   0x19D0D31 jmp     loc_19D09F1
//   0x19D0D36 lea     r13, [rsp+1A8h+var_188]
//   0x19D0D3B mov     edx, 14FEh
//   0x19D0D40 mov     rsi, rbp
//   0x19D0D43 mov     r14, [rbp+0]
//   0x19D0D47 mov     rdi, r13
//   0x19D0D4A call    sub_168B9B0
//   0x19D0D4F mov     edx, 5
//   0x19D0D54 mov     rsi, r12
//   0x19D0D57 mov     rdi, r13
//   0x19D0D5A call    sub_AE9DF0
//   0x19D0D5F mov     rsi, qword ptr [rsp+1A8h+var_198]; int
//   0x19D0D64 mov     rdx, r13; int
//   0x19D0D67 mov     rdi, r14; int
//   0x19D0D6A mov     ecx, 1; int
//   0x19D0D6F call    sub_1A60AF0
//   0x19D0D74 mov     rsi, [rsp+1A8h+var_188]
//   0x19D0D79 test    rsi, rsi
//   0x19D0D7C jz      short loc_19D0D8D
//   0x19D0D7E mov     rdi, [rsp+1A8h+var_180]
//   0x19D0D83 test    rdi, rdi
//   0x19D0D86 jz      short loc_19D0D8D
//   0x19D0D88 call    sub_1580C40
//   0x19D0D8D xor     r13d, r13d
//   0x19D0D90 jmp     loc_19D0AAC
//   0x19D0D95 mov     rsi, r12
//   0x19D0D98 mov     rdi, r14
//   0x19D0D9B call    sub_A7AA70
//   0x19D0DA0 mov     r13, rax
//   0x19D0DA3 jmp     loc_19D0CDD
//   0x19D0DA8 mov     edx, [rax+3A80h]
//   0x19D0DAE lea     ecx, [rdx+1]
//   0x19D0DB1 mov     [rax+3A80h], ecx
//   0x19D0DB7 mov     [rax+rdx*8+3A00h], r12
//   0x19D0DBF jmp     loc_19D0A6D
// ============================================================

void sub_19D0400(/* signature unknown */)
{
    // see disassembly above
}

