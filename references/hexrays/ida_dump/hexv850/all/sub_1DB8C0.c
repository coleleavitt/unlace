// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x1DB8C0
// Name:           sub_1DB8C0
// Function size:  2637 bytes (598 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x1DB8C0 push    r15
//   0x1DB8C2 push    r14
//   0x1DB8C4 push    r13
//   0x1DB8C6 push    r12
//   0x1DB8C8 push    rbp
//   0x1DB8C9 push    rbx
//   0x1DB8CA sub     rsp, 0C8h
//   0x1DB8D1 mov     [rsp+0F8h+var_E0], rsi
//   0x1DB8D6 mov     rax, fs:28h
//   0x1DB8DF mov     [rsp+0F8h+var_40], rax
//   0x1DB8E7 xor     eax, eax
//   0x1DB8E9 movzx   eax, byte ptr [rdi+18h]
//   0x1DB8ED cmp     al, [rsi+18h]
//   0x1DB8F0 jnz     loc_1DBAF0
//   0x1DB8F6 test    al, al
//   0x1DB8F8 jnz     loc_1DBAF2
//   0x1DB8FE mov     rax, [rdi+8]
//   0x1DB902 mov     r13, rdi
//   0x1DB905 mov     rdi, [rsi+8]
//   0x1DB909 mov     rcx, rax
//   0x1DB90C mov     [rsp+0F8h+var_E8], rdi
//   0x1DB911 mov     rdx, rdi
//   0x1DB914 test    rax, rax
//   0x1DB917 jz      loc_1DBB50
//   0x1DB91D cmp     qword ptr [r13+10h], 0
//   0x1DB922 jnz     loc_1DBB20
//   0x1DB928 mov     rcx, [rsp+0F8h+var_E8]
//   0x1DB92D mov     rbx, rax
//   0x1DB930 test    rcx, rcx
//   0x1DB933 jz      short loc_1DB945
//   0x1DB935 mov     rdx, [rsp+0F8h+var_E0]
//   0x1DB93A cmp     qword ptr [rdx+10h], 0
//   0x1DB93F jnz     loc_1DBB70
//   0x1DB945 lea     rcx, [rax+18h]
//   0x1DB949 cmp     rax, rbx
//   0x1DB94C jz      loc_1DC243
//   0x1DB952 cmp     dword ptr [rcx+10h], 8
//   0x1DB956 jnz     loc_1DBAF0
//   0x1DB95C mov     rdx, [rax]
//   0x1DB95F test    dl, 2
//   0x1DB962 jnz     short loc_1DB949
//   0x1DB964 mov     rcx, [rax+10h]
//   0x1DB968 test    byte ptr [rcx], 2
//   0x1DB96B jz      loc_1DBB80
//   0x1DB971 and     rdx, 0FFFFFFFFFFFFFFFCh
//   0x1DB975 mov     rcx, [rdx]
//   0x1DB978 test    cl, 2
//   0x1DB97B jz      loc_1DBBA3
//   0x1DB981 mov     rax, rdx
//   0x1DB984 jmp     short loc_1DB945
//   0x1DB986 align 10h
//   0x1DB990 and     rax, 0FFFFFFFFFFFFFFFCh
//   0x1DB994 mov     rdx, [rax]
//   0x1DB997 test    dl, 2
//   0x1DB99A jz      loc_1DBF40
//   0x1DB9A0 mov     rbx, rax
//   0x1DB9A3 nop     word ptr [rax+rax+00000000h]
//   0x1DB9AE xchg    ax, ax
//   0x1DB9B0 cmp     [r13+8], rbx
//   0x1DB9B4 jz      loc_1DBAD0
//   0x1DB9BA movzx   eax, [rsp+0F8h+var_C9]
//   0x1DB9BF lea     r15, [rbx+18h]
//   0x1DB9C3 cmp     [rbx+20h], al
//   0x1DB9C6 jnz     loc_1DBAD0
//   0x1DB9CC cmp     [rbx+18h], r14
//   0x1DB9D0 jnz     loc_1DBAD0
//   0x1DB9D6 cmp     dword ptr [r15+10h], 8
//   0x1DB9DB jz      loc_1DBAD0
//   0x1DB9E1 movsxd  rax, dword ptr [r15+14h]
//   0x1DB9E5 add     r14, rax
//   0x1DB9E8 cmp     [rsp+0F8h+var_D8], r14
//   0x1DB9ED jl      loc_1DBAD0
//   0x1DB9F3 mov     rax, cs:qword_3FFAC0
//   0x1DB9FA pxor    xmm0, xmm0
//   0x1DB9FE cmp     [rsp+0F8h+var_CA], 0
//   0x1DBA03 mov     [rsp+0F8h+var_70], 0
//   0x1DBA0F mov     edx, dword ptr [rsp+0F8h+var_C8+4]
//   0x1DBA13 movups  [rsp+0F8h+var_88+8], xmm0
//   0x1DBA18 mov     qword ptr [rsp+0F8h+var_88], rax
//   0x1DBA1D jnz     loc_1DBED0
//   0x1DBA23 lea     rbp, [rsp+0F8h+var_88]
//   0x1DBA28 mov     rdi, r12
//   0x1DBA2B mov     rsi, rbp
//   0x1DBA2E call    sub_30F440
//   0x1DBA33 test    al, al
//   0x1DBA35 jz      loc_1DC048
//   0x1DBA3B mov     rdi, [rsp+0F8h+var_F0]
//   0x1DBA40 mov     rsi, r12
//   0x1DBA43 call    sub_30D500
//   0x1DBA48 test    eax, eax
//   0x1DBA4A jnz     loc_1DC048
//   0x1DBA50 mov     rdi, [rsp+0F8h+var_F0]
//   0x1DBA55 lea     rsi, [r15+10h]
//   0x1DBA59 call    sub_30D4D0
//   0x1DBA5E movdqa  xmm2, xmmword ptr [rbp+0]
//   0x1DBA63 movdqa  xmm1, xmmword ptr [r12]
//   0x1DBA69 mov     rdi, rbp
//   0x1DBA6C movdqa  xmm0, xmmword ptr [r12+10h]
//   0x1DBA73 movaps  xmmword ptr [r12], xmm2
//   0x1DBA78 movdqa  xmm2, xmmword ptr [rbp+10h]
//   0x1DBA7D movaps  xmmword ptr [rbp+0], xmm1
//   0x1DBA81 movaps  xmmword ptr [rbp+10h], xmm0
//   0x1DBA85 movaps  [rsp+0F8h+var_68], xmm1
//   0x1DBA8D movaps  [rsp+0F8h+var_58], xmm0
//   0x1DBA95 movaps  xmmword ptr [r12+10h], xmm2
//   0x1DBA9B call    sub_30D2C0
//   0x1DBAA0 mov     eax, dword ptr [rsp+0F8h+var_C8+4]
//   0x1DBAA4 cmp     dword ptr [rsp+0F8h+var_A8+4], eax
//   0x1DBAA8 jg      loc_1DBE9E
//   0x1DBAAE mov     rdi, [rsp+0F8h+var_F0]
//   0x1DBAB3 mov     rsi, r12
//   0x1DBAB6 call    sub_30D500
//   0x1DBABB test    eax, eax
//   0x1DBABD jz      loc_1DBD4C
//   0x1DBAC3 nop     word ptr [rax+rax+00000000h]
//   0x1DBACE xchg    ax, ax
//   0x1DBAD0 mov     rdi, r12
//   0x1DBAD3 call    sub_30D2C0
//   0x1DBAD8 mov     rdi, [rsp+0F8h+var_F0]
//   0x1DBADD call    sub_30D2C0
//   0x1DBAE2 nop     word ptr [rax+rax+00000000h]
//   0x1DBAED nop     dword ptr [rax]
//   0x1DBAF0 xor     eax, eax
//   0x1DBAF2 mov     rdx, [rsp+0F8h+var_40]
//   0x1DBAFA sub     rdx, fs:28h
//   0x1DBB03 jnz     loc_1DC2D4
//   0x1DBB09 add     rsp, 0C8h
//   0x1DBB10 pop     rbx
//   0x1DBB11 pop     rbp
//   0x1DBB12 pop     r12
//   0x1DBB14 pop     r13
//   0x1DBB16 pop     r14
//   0x1DBB18 pop     r15
//   0x1DBB1A retn
//   0x1DBB1B align 20h
//   0x1DBB20 mov     rbx, [rax+8]
//   0x1DBB24 test    rdi, rdi
//   0x1DBB27 jnz     loc_1DBBD0
//   0x1DBB2D cmp     rcx, rbx
//   0x1DBB30 jz      loc_1DB945
//   0x1DBB36 mov     [rsp+0F8h+var_E8], rdx
//   0x1DBB3B mov     rax, rbx
//   0x1DBB3E mov     rbx, rcx
//   0x1DBB41 jmp     loc_1DB945
//   0x1DBB46 align 10h
//   0x1DBB50 mov     rcx, [rsp+0F8h+var_E8]
//   0x1DBB55 xor     ebx, ebx
//   0x1DBB57 test    rcx, rcx
//   0x1DBB5A jz      loc_1DB945
//   0x1DBB60 mov     rdi, [rsp+0F8h+var_E0]
//   0x1DBB65 cmp     qword ptr [rdi+10h], 0
//   0x1DBB6A jz      loc_1DB945
//   0x1DBB70 mov     rcx, [rcx+8]
//   0x1DBB74 mov     [rsp+0F8h+var_E8], rcx
//   0x1DBB79 jmp     loc_1DB945
//   0x1DBB7E align 20h
//   0x1DBB80 mov     rax, rcx
//   0x1DBB83 mov     rcx, [rcx+8]
//   0x1DBB87 test    byte ptr [rcx], 2
//   0x1DBB8A jnz     loc_1DB945
//   0x1DBB90 jmp     short loc_1DBB80
//   0x1DBB92 align 20h
//   0x1DBBA0 mov     rdx, rsi
//   0x1DBBA3 cmp     rax, [rdx+10h]
//   0x1DBBA7 jnz     loc_1DB981
//   0x1DBBAD and     rcx, 0FFFFFFFFFFFFFFFCh
//   0x1DBBB1 mov     rax, rdx
//   0x1DBBB4 mov     rsi, rcx
//   0x1DBBB7 mov     rcx, [rcx]
//   0x1DBBBA test    cl, 2
//   0x1DBBBD jz      short loc_1DBBA0
//   0x1DBBBF mov     rax, rsi
//   0x1DBBC2 jmp     loc_1DB945
//   0x1DBBC7 align 10h
//   0x1DBBD0 cmp     qword ptr [rsi+10h], 0
//   0x1DBBD5 jz      loc_1DBB2D
//   0x1DBBDB mov     rcx, [rdx+8]
//   0x1DBBDF mov     [rsp+0F8h+var_E8], rcx
//   0x1DBBE4 cmp     rax, rbx
//   0x1DBBE7 jz      loc_1DB945
//   0x1DBBED nop     dword ptr [rax]
//   0x1DBBF0 cmp     [rsp+0F8h+var_E8], rdx
//   0x1DBBF5 jz      loc_1DC2D9
//   0x1DBBFB cmp     dword ptr [rbx+28h], 8
//   0x1DBBFF lea     rbp, [rbx+18h]
//   0x1DBC03 jz      loc_1DBF78
//   0x1DBC09 mov     rax, [rsp+0F8h+var_E8]
//   0x1DBC0E lea     r15, [rax+18h]
//   0x1DBC12 movzx   eax, byte ptr [rbp+8]
//   0x1DBC16 mov     [rsp+0F8h+var_C9], al
//   0x1DBC1A cmp     al, [r15+8]
//   0x1DBC1E jnz     loc_1DBAF0
//   0x1DBC24 cmp     byte ptr [rbp+8], 5
//   0x1DBC28 mov     [rsp+0F8h+var_CA], 0
//   0x1DBC2D jnz     short loc_1DBC49
//   0x1DBC2F mov     rax, [r13+0]
//   0x1DBC33 mov     rax, [rax+5E0h]
//   0x1DBC3A mov     rax, [rax+60h]
//   0x1DBC3E movzx   eax, byte ptr [rax+91h]
//   0x1DBC45 mov     [rsp+0F8h+var_CA], al
//   0x1DBC49 lea     rax, [rsp+0F8h+var_C8]
//   0x1DBC4E lea     rsi, [rbp+10h]
//   0x1DBC52 mov     rdi, rax
//   0x1DBC55 lea     r12, [rsp+0F8h+var_A8]
//   0x1DBC5A mov     [rsp+0F8h+var_F0], rax
//   0x1DBC5F call    sub_30D380
//   0x1DBC64 lea     rsi, [r15+10h]
//   0x1DBC68 mov     rdi, r12
//   0x1DBC6B call    sub_30D380
//   0x1DBC70 movsxd  rdi, dword ptr [rsp+0F8h+var_A8+4]
//   0x1DBC75 mov     rcx, [r15]
//   0x1DBC78 movsxd  r14, dword ptr [rsp+0F8h+var_C8+4]
//   0x1DBC7D mov     rax, [rbp+0]
//   0x1DBC81 lea     r8, [rdi+rcx]
//   0x1DBC85 mov     rdx, r14
//   0x1DBC88 mov     [rsp+0F8h+var_D8], r8
//   0x1DBC8D add     r14, rax
//   0x1DBC90 cmp     rax, rcx
//   0x1DBC93 jge     loc_1DBDE0
//   0x1DBC99 cmp     r14, r8
//   0x1DBC9C jnz     loc_1DBAD0
//   0x1DBCA2 mov     rsi, cs:qword_3FFAC0
//   0x1DBCA9 pxor    xmm0, xmm0
//   0x1DBCAD cmp     [rsp+0F8h+var_CA], 0
//   0x1DBCB2 mov     [rsp+0F8h+var_70], 0
//   0x1DBCBE movups  [rsp+0F8h+var_88+8], xmm0
//   0x1DBCC3 mov     qword ptr [rsp+0F8h+var_88], rsi
//   0x1DBCC8 jnz     loc_1DC058
//   0x1DBCCE mov     edx, ecx
//   0x1DBCD0 lea     rbp, [rsp+0F8h+var_88]
//   0x1DBCD5 mov     rdi, [rsp+0F8h+var_F0]
//   0x1DBCDA sub     edx, eax
//   0x1DBCDC mov     rsi, rbp
//   0x1DBCDF call    sub_30F440
//   0x1DBCE4 test    al, al
//   0x1DBCE6 jz      loc_1DC076
//   0x1DBCEC cmp     dword ptr [rsp+0F8h+var_C8], 1
//   0x1DBCF1 jnz     loc_1DC2A5
//   0x1DBCF7 movdqa  xmm2, xmmword ptr [rbp+0]
//   0x1DBCFC movdqa  xmm1, [rsp+0F8h+var_C8]
//   0x1DBD02 mov     rdi, rbp
//   0x1DBD05 movdqa  xmm0, [rsp+0F8h+var_B8]
//   0x1DBD0B movaps  [rsp+0F8h+var_C8], xmm2
//   0x1DBD10 movdqa  xmm2, xmmword ptr [rbp+10h]
//   0x1DBD15 movaps  xmmword ptr [rbp+0], xmm1
//   0x1DBD19 movaps  xmmword ptr [rbp+10h], xmm0
//   0x1DBD1D movaps  [rsp+0F8h+var_68], xmm1
//   0x1DBD25 movaps  [rsp+0F8h+var_58], xmm0
//   0x1DBD2D movaps  [rsp+0F8h+var_B8], xmm2
//   0x1DBD32 call    sub_30D2C0
//   0x1DBD37 mov     rdi, [rsp+0F8h+var_F0]
//   0x1DBD3C mov     rsi, r12
//   0x1DBD3F call    sub_30D500
//   0x1DBD44 test    eax, eax
//   0x1DBD46 jnz     loc_1DBE90
//   0x1DBD4C mov     rax, [rbx]
//   0x1DBD4F test    al, 2
//   0x1DBD51 jnz     short loc_1DBD70
//   0x1DBD53 mov     rdx, [rbx+10h]
//   0x1DBD57 test    byte ptr [rdx], 2
//   0x1DBD5A jnz     loc_1DC088
//   0x1DBD60 mov     rbx, rdx
//   0x1DBD63 mov     rdx, [rdx+8]
//   0x1DBD67 test    byte ptr [rdx], 2
//   0x1DBD6A jz      short loc_1DBD60
//   0x1DBD6C nop     dword ptr [rax+00h]
//   0x1DBD70 mov     rcx, [rsp+0F8h+var_E8]
//   0x1DBD75 mov     rax, [rcx]
//   0x1DBD78 test    al, 2
//   0x1DBD7A jnz     short loc_1DBDB0
//   0x1DBD7C mov     rdx, [rcx+10h]
//   0x1DBD80 test    byte ptr [rdx], 2
//   0x1DBD83 jnz     loc_1DC0C8
//   0x1DBD89 mov     rax, [rdx+8]
//   0x1DBD8D test    byte ptr [rax], 2
//   0x1DBD90 jnz     short loc_1DBD9E
//   0x1DBD92 mov     rdx, rax
//   0x1DBD95 mov     rax, [rdx+8]
//   0x1DBD99 test    byte ptr [rax], 2
//   0x1DBD9C jz      short loc_1DBD92
//   0x1DBD9E mov     [rsp+0F8h+var_E8], rdx
//   0x1DBDA3 nop     word ptr [rax+rax+00000000h]
//   0x1DBDAE xchg    ax, ax
//   0x1DBDB0 mov     rdi, r12
//   0x1DBDB3 call    sub_30D2C0
//   0x1DBDB8 mov     rdi, [rsp+0F8h+var_F0]
//   0x1DBDBD call    sub_30D2C0
//   0x1DBDC2 cmp     [r13+8], rbx
//   0x1DBDC6 jz      loc_1DC29D
//   0x1DBDCC mov     rax, [rsp+0F8h+var_E0]
//   0x1DBDD1 mov     rdx, [rax+8]
//   0x1DBDD5 jmp     loc_1DBBF0
//   0x1DBDDA align 20h
//   0x1DBDE0 cmp     rcx, [rbp+0]
//   0x1DBDE4 jge     loc_1DBD37
//   0x1DBDEA mov     rdx, [rsp+0F8h+var_D8]
//   0x1DBDEF cmp     r14, rdx
//   0x1DBDF2 jnz     loc_1DBAD0
//   0x1DBDF8 mov     rdx, cs:qword_3FFAC0
//   0x1DBDFF pxor    xmm0, xmm0
//   0x1DBE03 cmp     [rsp+0F8h+var_CA], 0
//   0x1DBE08 mov     [rsp+0F8h+var_70], 0
//   0x1DBE14 movups  [rsp+0F8h+var_88+8], xmm0
//   0x1DBE19 mov     qword ptr [rsp+0F8h+var_88], rdx
//   0x1DBE1E jnz     loc_1DC108
//   0x1DBE24 mov     edx, eax
//   0x1DBE26 lea     rbp, [rsp+0F8h+var_88]
//   0x1DBE2B mov     rdi, r12
//   0x1DBE2E sub     edx, ecx
//   0x1DBE30 mov     rsi, rbp
//   0x1DBE33 call    sub_30F440
//   0x1DBE38 test    al, al
//   0x1DBE3A jz      loc_1DC1D0
//   0x1DBE40 cmp     dword ptr [rsp+0F8h+var_A8], 1
//   0x1DBE45 jnz     loc_1DC1D0
//   0x1DBE4B movdqa  xmm2, xmmword ptr [rbp+0]
//   0x1DBE50 movdqa  xmm1, [rsp+0F8h+var_A8]
//   0x1DBE56 mov     rdi, rbp
//   0x1DBE59 movdqa  xmm0, [rsp+0F8h+var_98]
//   0x1DBE5F movaps  [rsp+0F8h+var_A8], xmm2
//   0x1DBE64 movdqa  xmm2, xmmword ptr [rbp+10h]
//   0x1DBE69 movaps  xmmword ptr [rbp+0], xmm1
//   0x1DBE6D movaps  xmmword ptr [rbp+10h], xmm0
//   0x1DBE71 movaps  [rsp+0F8h+var_68], xmm1
//   0x1DBE79 movaps  [rsp+0F8h+var_58], xmm0
//   0x1DBE81 movaps  [rsp+0F8h+var_98], xmm2
//   0x1DBE86 call    sub_30D2C0
//   0x1DBE8B jmp     loc_1DBD37
//   0x1DBE90 mov     rax, [rsp+0F8h+var_D8]
//   0x1DBE95 cmp     r14, rax
//   0x1DBE98 jge     loc_1DBAD0
//   0x1DBE9E mov     rax, [rbx]
//   0x1DBEA1 test    al, 2
//   0x1DBEA3 jnz     loc_1DB9B0
//   0x1DBEA9 mov     rdx, [rbx+10h]
//   0x1DBEAD test    byte ptr [rdx], 2
//   0x1DBEB0 jnz     loc_1DB990
//   0x1DBEB6 mov     rbx, rdx
//   0x1DBEB9 mov     rdx, [rdx+8]
//   0x1DBEBD test    byte ptr [rdx], 2
//   0x1DBEC0 jnz     loc_1DB9B0
//   0x1DBEC6 jmp     short loc_1DBEB6
//   0x1DBEC8 align 10h
//   0x1DBED0 mov     eax, dword ptr [rsp+0F8h+var_A8+4]
//   0x1DBED4 lea     rbp, [rsp+0F8h+var_88]
//   0x1DBED9 mov     rdi, r12
//   0x1DBEDC mov     rsi, rbp
//   0x1DBEDF sub     eax, edx
//   0x1DBEE1 mov     edx, eax
//   0x1DBEE3 call    sub_30F440
//   0x1DBEE8 test    al, al
//   0x1DBEEA jz      loc_1DC048
//   0x1DBEF0 movdqa  xmm2, [rsp+0F8h+var_88]
//   0x1DBEF6 movdqa  xmm1, xmmword ptr [r12]
//   0x1DBEFC movdqa  xmm0, xmmword ptr [r12+10h]
//   0x1DBF03 movaps  xmmword ptr [r12], xmm2
//   0x1DBF08 movdqa  xmm2, xmmword ptr [rsp+80h]
//   0x1DBF11 movaps  [rsp+0F8h+var_68], xmm1
//   0x1DBF19 movaps  [rsp+0F8h+var_58], xmm0
//   0x1DBF21 movaps  xmmword ptr [r12+10h], xmm2
//   0x1DBF27 movaps  [rsp+0F8h+var_88], xmm1
//   0x1DBF2C movaps  xmmword ptr [rsp+80h], xmm0
//   0x1DBF34 jmp     loc_1DBA3B
//   0x1DBF39 align 20h
//   0x1DBF40 cmp     [rax+10h], rbx
//   0x1DBF44 jnz     loc_1DB9A0
//   0x1DBF4A and     rdx, 0FFFFFFFFFFFFFFFCh
//   0x1DBF4E mov     rbx, rdx
//   0x1DBF51 mov     rdx, [rdx]
//   0x1DBF54 test    dl, 2
//   0x1DBF57 jnz     loc_1DB9B0
//   0x1DBF5D mov     rcx, rax
//   0x1DBF60 mov     rax, rbx
//   0x1DBF63 mov     rbx, rcx
//   0x1DBF66 cmp     [rax+10h], rbx
//   0x1DBF6A jz      short loc_1DBF4A
//   0x1DBF6C jmp     loc_1DB9A0
//   0x1DBF71 align 8
//   0x1DBF78 mov     rdi, [rsp+0F8h+var_E8]
//   0x1DBF7D movzx   eax, byte ptr [rbp+8]
//   0x1DBF81 movzx   ecx, byte ptr [rdi+20h]
//   0x1DBF85 lea     r15, [rdi+18h]
//   0x1DBF89 cmp     al, cl
//   0x1DBF8B jb      short loc_1DBFA3
//   0x1DBF8D cmp     cl, al
//   0x1DBF8F jb      loc_1DBC12
//   0x1DBF95 mov     rax, [rdi+18h]
//   0x1DBF99 cmp     [rbp+0], rax
//   0x1DBF9D jg      loc_1DBC12
//   0x1DBFA3 movsxd  rax, dword ptr [rbp+14h]
//   0x1DBFA7 add     rax, [rbp+0]
//   0x1DBFAB movzx   ecx, byte ptr [r15+8]
//   0x1DBFB0 cmp     [rbp+8], cl
//   0x1DBFB3 jnz     short loc_1DC010
//   0x1DBFB5 cmp     [r15], rax
//   0x1DBFB8 jge     short loc_1DC010
//   0x1DBFBA movsxd  rcx, dword ptr [r15+14h]
//   0x1DBFBE add     rcx, [r15]
//   0x1DBFC1 cmp     rcx, rax
//   0x1DBFC4 jg      loc_1DBAF0
//   0x1DBFCA mov     rdi, [rsp+0F8h+var_E8]
//   0x1DBFCF mov     rcx, [rdi]
//   0x1DBFD2 test    cl, 2
//   0x1DBFD5 jnz     loc_1DC230
//   0x1DBFDB mov     rsi, [rdi+10h]
//   0x1DBFDF test    byte ptr [rsi], 2
//   0x1DBFE2 jnz     loc_1DC259
//   0x1DBFE8 mov     [rsp+0F8h+var_E8], rsi
//   0x1DBFED mov     rsi, [rsi+8]
//   0x1DBFF1 test    byte ptr [rsi], 2
//   0x1DBFF4 jz      short loc_1DBFE8
//   0x1DBFF6 mov     rcx, [rsp+0F8h+var_E8]
//   0x1DBFFB cmp     rdx, rcx
//   0x1DBFFE jnz     loc_1DC2CB
//   0x1DC004 nop     word ptr [rax+rax+00000000h]
//   0x1DC00F nop
//   0x1DC010 mov     rax, [rbx]
//   0x1DC013 test    al, 2
//   0x1DC015 jnz     loc_1DBDC2
//   0x1DC01B mov     rdx, [rbx+10h]
//   0x1DC01F test    byte ptr [rdx], 2
//   0x1DC022 jnz     loc_1DC1F0
//   0x1DC028 mov     rax, [rdx+8]
//   0x1DC02C test    byte ptr [rax], 2
//   0x1DC02F jnz     short loc_1DC03D
//   0x1DC031 mov     rdx, rax
//   0x1DC034 mov     rax, [rdx+8]
//   0x1DC038 test    byte ptr [rax], 2
//   0x1DC03B jz      short loc_1DC031
//   0x1DC03D mov     rbx, rdx
//   0x1DC040 jmp     loc_1DBDC2
//   0x1DC045 align 8
//   0x1DC048 mov     rdi, rbp
//   0x1DC04B call    sub_30D2C0
//   0x1DC050 jmp     loc_1DBAD0
//   0x1DC055 align 8
//   0x1DC058 add     edx, eax
//   0x1DC05A lea     rbp, [rsp+0F8h+var_88]
//   0x1DC05F mov     rdi, [rsp+0F8h+var_F0]
//   0x1DC064 sub     edx, ecx
//   0x1DC066 mov     rsi, rbp
//   0x1DC069 call    sub_30F440
//   0x1DC06E test    al, al
//   0x1DC070 jnz     loc_1DC170
//   0x1DC076 mov     rdi, rbp
//   0x1DC079 call    sub_30D2C0
//   0x1DC07E jmp     loc_1DBAD0
//   0x1DC083 align 8
//   0x1DC088 and     rax, 0FFFFFFFFFFFFFFFCh
//   0x1DC08C mov     rdx, [rax]
//   0x1DC08F test    dl, 2
//   0x1DC092 jz      short loc_1DC0A3
//   0x1DC094 mov     rbx, rax
//   0x1DC097 jmp     loc_1DBD70
//   0x1DC09C align 20h
//   0x1DC0A0 mov     rax, rcx
//   0x1DC0A3 cmp     [rax+10h], rbx
//   0x1DC0A7 jnz     short loc_1DC094
//   0x1DC0A9 mov     rcx, rdx
//   0x1DC0AC mov     rbx, rax
//   0x1DC0AF and     rcx, 0FFFFFFFFFFFFFFFCh
//   0x1DC0B3 mov     rdx, [rcx]
//   0x1DC0B6 test    dl, 2
//   0x1DC0B9 jz      short loc_1DC0A0
//   0x1DC0BB mov     rbx, rcx
//   0x1DC0BE jmp     loc_1DBD70
//   0x1DC0C3 align 8
//   0x1DC0C8 and     rax, 0FFFFFFFFFFFFFFFCh
//   0x1DC0CC mov     rdx, [rax]
//   0x1DC0CF test    dl, 2
//   0x1DC0D2 jnz     loc_1DC1C0
//   0x1DC0D8 mov     rcx, [rsp+0F8h+var_E8]
//   0x1DC0DD cmp     [rax+10h], rcx
//   0x1DC0E1 jnz     loc_1DC1C0
//   0x1DC0E7 mov     rcx, rdx
//   0x1DC0EA and     rcx, 0FFFFFFFFFFFFFFFCh
//   0x1DC0EE mov     rdx, [rcx]
//   0x1DC0F1 test    dl, 2
//   0x1DC0F4 jz      loc_1DC1E0
//   0x1DC0FA mov     [rsp+0F8h+var_E8], rcx
//   0x1DC0FF jmp     loc_1DBDB0
//   0x1DC104 align 8
//   0x1DC108 lea     edx, [rdi+rcx]
//   0x1DC10B lea     rbp, [rsp+0F8h+var_88]
//   0x1DC110 mov     rdi, r12
//   0x1DC113 sub     edx, eax
//   0x1DC115 mov     rsi, rbp
//   0x1DC118 call    sub_30F440
//   0x1DC11D test    al, al
//   0x1DC11F jz      loc_1DC1D0
//   0x1DC125 movdqa  xmm2, [rsp+0F8h+var_88]
//   0x1DC12B movdqa  xmm1, [rsp+0F8h+var_A8]
//   0x1DC131 movdqa  xmm0, [rsp+0F8h+var_98]
//   0x1DC137 movaps  [rsp+0F8h+var_A8], xmm2
//   0x1DC13C movdqa  xmm2, xmmword ptr [rsp+80h]
//   0x1DC145 movaps  [rsp+0F8h+var_68], xmm1
//   0x1DC14D movaps  [rsp+0F8h+var_58], xmm0
//   0x1DC155 movaps  [rsp+0F8h+var_98], xmm2
//   0x1DC15A movaps  [rsp+0F8h+var_88], xmm1
//   0x1DC15F movaps  xmmword ptr [rsp+80h], xmm0
//   0x1DC167 jmp     loc_1DBE40
//   0x1DC16C align 10h
//   0x1DC170 movdqa  xmm2, [rsp+0F8h+var_88]
//   0x1DC176 movdqa  xmm1, [rsp+0F8h+var_C8]
//   0x1DC17C movdqa  xmm0, [rsp+0F8h+var_B8]
//   0x1DC182 movaps  [rsp+0F8h+var_C8], xmm2
//   0x1DC187 movdqa  xmm2, xmmword ptr [rsp+80h]
//   0x1DC190 movaps  [rsp+0F8h+var_68], xmm1
//   0x1DC198 movaps  [rsp+0F8h+var_58], xmm0
//   0x1DC1A0 movaps  [rsp+0F8h+var_B8], xmm2
//   0x1DC1A5 movaps  [rsp+0F8h+var_88], xmm1
//   0x1DC1AA movaps  xmmword ptr [rsp+80h], xmm0
//   0x1DC1B2 jmp     loc_1DBCEC
//   0x1DC1B7 align 20h
//   0x1DC1C0 mov     [rsp+0F8h+var_E8], rax
//   0x1DC1C5 jmp     loc_1DBDB0
//   0x1DC1CA align 10h
//   0x1DC1D0 mov     rdi, rbp
//   0x1DC1D3 call    sub_30D2C0
//   0x1DC1D8 jmp     loc_1DBAD0
//   0x1DC1DD align 20h
//   0x1DC1E0 mov     rsi, rax
//   0x1DC1E3 mov     rax, rcx
//   0x1DC1E6 mov     rcx, rsi
//   0x1DC1E9 jmp     loc_1DC0DD
//   0x1DC1EE align 10h
//   0x1DC1F0 and     rax, 0FFFFFFFFFFFFFFFCh
//   0x1DC1F4 mov     rdx, [rax]
//   0x1DC1F7 test    dl, 2
//   0x1DC1FA jz      short loc_1DC207
//   0x1DC1FC mov     rbx, rax
//   0x1DC1FF jmp     loc_1DBDC2
//   0x1DC204 mov     rax, rcx
//   0x1DC207 cmp     [rax+10h], rbx
//   0x1DC20B jnz     short loc_1DC1FC
//   0x1DC20D mov     rcx, rdx
//   0x1DC210 mov     rbx, rax
//   0x1DC213 and     rcx, 0FFFFFFFFFFFFFFFCh
//   0x1DC217 mov     rdx, [rcx]
//   0x1DC21A test    dl, 2
//   0x1DC21D jz      short loc_1DC204
//   0x1DC21F mov     rbx, rcx
//   0x1DC222 jmp     loc_1DBDC2
//   0x1DC227 align 10h
//   0x1DC230 movzx   ecx, byte ptr [rbp+8]
//   0x1DC234 cmp     [r15+8], cl
//   0x1DC238 jz      loc_1DBFB5
//   0x1DC23E jmp     loc_1DC010
//   0x1DC243 mov     rax, [rsp+0F8h+var_E0]
//   0x1DC248 mov     rcx, [rsp+0F8h+var_E8]
//   0x1DC24D cmp     [rax+8], rcx
//   0x1DC251 setz    al
//   0x1DC254 jmp     loc_1DBAF2
//   0x1DC259 and     rcx, 0FFFFFFFFFFFFFFFCh
//   0x1DC25D mov     rsi, [rcx]
//   0x1DC260 test    sil, 2
//   0x1DC264 jz      short loc_1DC273
//   0x1DC266 mov     [rsp+0F8h+var_E8], rcx
//   0x1DC26B jmp     loc_1DBFF6
//   0x1DC270 mov     rcx, rdi
//   0x1DC273 mov     rdi, [rsp+0F8h+var_E8]
//   0x1DC278 cmp     [rcx+10h], rdi
//   0x1DC27C jnz     short loc_1DC266
//   0x1DC27E mov     rdi, rsi
//   0x1DC281 mov     [rsp+0F8h+var_E8], rcx
//   0x1DC286 and     rdi, 0FFFFFFFFFFFFFFFCh
//   0x1DC28A mov     rsi, [rdi]
//   0x1DC28D test    sil, 2
//   0x1DC291 jz      short loc_1DC270
//   0x1DC293 mov     [rsp+0F8h+var_E8], rdi
//   0x1DC298 jmp     loc_1DBFF6
//   0x1DC29D mov     rax, rbx
//   0x1DC2A0 jmp     loc_1DB945
//   0x1DC2A5 mov     rdi, rbp
//   0x1DC2A8 call    sub_30D2C0
//   0x1DC2AD mov     rdi, r12
//   0x1DC2B0 call    sub_30D2C0
//   0x1DC2B5 mov     rdi, [rsp+0F8h+var_F0]
//   0x1DC2BA call    sub_30D2C0
//   0x1DC2BF mov     rax, rbx
//   0x1DC2C2 mov     rbx, [r13+8]
//   0x1DC2C6 jmp     loc_1DB945
//   0x1DC2CB lea     r15, [rcx+18h]
//   0x1DC2CF jmp     loc_1DBFAB
//   0x1DC2D4 call    ___stack_chk_fail
//   0x1DC2D9 mov     rcx, [r13+8]
//   0x1DC2DD mov     rax, rbx
//   0x1DC2E0 jmp     loc_1DBB3E
//   0x1DC2E5 mov     rbx, rax
//   0x1DC2E8 jmp     loc_41316
//   0x1DC2ED mov     rbx, rax
//   0x1DC2F0 jmp     loc_4131E
//   0x1DC2F5 mov     rbx, rax
//   0x1DC2F8 jmp     loc_4134B
//   0x1DC2FD mov     rbx, rax
//   0x1DC300 jmp     loc_41326
//   0x1DC305 mov     rbx, rax
//   0x1DC308 jmp     loc_41355
// ============================================================

void sub_1DB8C0(/* signature unknown */)
{
    // see disassembly above
}

