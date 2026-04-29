// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x1DB8E0
// Name:           sub_1DB8E0
// Function size:  2376 bytes (529 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x1DB8E0 push    r15
//   0x1DB8E2 push    r14
//   0x1DB8E4 push    r13
//   0x1DB8E6 push    r12
//   0x1DB8E8 push    rbp
//   0x1DB8E9 push    rbx
//   0x1DB8EA sub     rsp, 0C8h
//   0x1DB8F1 mov     r13, fs:28h
//   0x1DB8FA mov     [rsp+0F8h+var_40], r13
//   0x1DB902 mov     r13, rdi
//   0x1DB905 movzx   r14d, byte ptr [r13+18h]
//   0x1DB90A test    r14b, r14b
//   0x1DB90D jnz     short loc_1DB960
//   0x1DB90F mov     r9, rdx
//   0x1DB912 movzx   edx, byte ptr [rdx+8]
//   0x1DB916 mov     r12, rsi
//   0x1DB919 mov     edi, ecx
//   0x1DB91B cmp     dl, 5
//   0x1DB91E jz      loc_1DBB28
//   0x1DB924 mov     rsi, [r13+8]
//   0x1DB928 test    rsi, rsi
//   0x1DB92B jz      short loc_1DB960
//   0x1DB92D mov     rax, [rsi]
//   0x1DB930 mov     r11, [r9]
//   0x1DB933 and     rax, 0FFFFFFFFFFFFFFFCh
//   0x1DB937 jz      loc_1DBBB0
//   0x1DB93D mov     r15, rsi
//   0x1DB940 test    byte ptr [rax], 2
//   0x1DB943 jz      short loc_1DB990
//   0x1DB945 cmp     qword ptr [r13+10h], 0
//   0x1DB94A mov     r15, rsi
//   0x1DB94D jnz     loc_1DBB48
//   0x1DB953 nop     word ptr [rax+rax+00000000h]
//   0x1DB95E xchg    ax, ax
//   0x1DB960 xor     eax, eax
//   0x1DB962 mov     rdx, [rsp+0F8h+var_40]
//   0x1DB96A sub     rdx, fs:28h
//   0x1DB973 jnz     loc_1DC1F3
//   0x1DB979 add     rsp, 0C8h
//   0x1DB980 pop     rbx
//   0x1DB981 pop     rbp
//   0x1DB982 pop     r12
//   0x1DB984 pop     r13
//   0x1DB986 pop     r14
//   0x1DB988 pop     r15
//   0x1DB98A retn
//   0x1DB98B align 10h
//   0x1DB990 movzx   ebx, byte ptr [rax+20h]
//   0x1DB994 cmp     bl, dl
//   0x1DB996 jb      loc_1DBB60
//   0x1DB99C cmp     dl, bl
//   0x1DB99E jb      short loc_1DB9AA
//   0x1DB9A0 cmp     r11, [rax+18h]
//   0x1DB9A4 jg      loc_1DBB60
//   0x1DB9AA mov     r15, rax
//   0x1DB9AD mov     rax, [rax+8]
//   0x1DB9B1 test    byte ptr [rax], 2
//   0x1DB9B4 jz      short loc_1DB990
//   0x1DB9B6 cmp     r15, rsi
//   0x1DB9B9 jz      short loc_1DB945
//   0x1DB9BB lea     rcx, [r15+18h]
//   0x1DB9BF cmp     dl, [r15+20h]
//   0x1DB9C3 jnb     loc_1DBBA0
//   0x1DB9C9 cmp     qword ptr [r13+10h], 0
//   0x1DB9CE jnz     loc_1DBB48
//   0x1DB9D4 mov     rax, [r15]
//   0x1DB9D7 test    al, 2
//   0x1DB9D9 jz      loc_1DBB70
//   0x1DB9DF mov     r15, [r15+10h]
//   0x1DB9E3 lea     rcx, [r15+18h]
//   0x1DB9E7 cmp     [r15+20h], dl
//   0x1DB9EB jnz     loc_1DB960
//   0x1DB9F1 movsxd  rax, dword ptr [rcx+14h]
//   0x1DB9F5 add     rax, [r15+18h]
//   0x1DB9F9 cmp     r11, rax
//   0x1DB9FC jge     loc_1DB960
//   0x1DBA02 movsxd  rbx, dword ptr [r12+4]
//   0x1DBA07 movsxd  rbp, dword ptr [rcx+14h]
//   0x1DBA0B mov     [rsp+0F8h+var_E8], rcx
//   0x1DBA10 mov     [rsp+0F8h+var_F0], r9
//   0x1DBA15 add     rbp, [r15+18h]
//   0x1DBA19 lea     rax, [rbx+r11]
//   0x1DBA1D mov     [rsp+0F8h+var_D4], ebx
//   0x1DBA21 mov     [rsp+0F8h+var_F8], rax
//   0x1DBA25 test    dil, dil
//   0x1DBA28 jz      loc_1DBBE0
//   0x1DBA2E cmp     [r15+18h], r11
//   0x1DBA32 jnz     loc_1DB960
//   0x1DBA38 cmp     rax, rbp
//   0x1DBA3B jnz     loc_1DB960
//   0x1DBA41 lea     rsi, [r15+28h]
//   0x1DBA45 mov     rdi, r12
//   0x1DBA48 call    sub_30E010
//   0x1DBA4D mov     r9, [rsp+0F8h+var_F0]
//   0x1DBA52 mov     rcx, [rsp+0F8h+var_E8]
//   0x1DBA57 mov     rax, [r9]
//   0x1DBA5A cmp     rax, [r15+18h]
//   0x1DBA5E jle     loc_1DBE40
//   0x1DBA64 mov     rdx, cs:qword_406B60
//   0x1DBA6B pxor    xmm0, xmm0
//   0x1DBA6F mov     [rsp+0F8h+var_E8], r9
//   0x1DBA74 mov     [rsp+0F8h+var_70], 0
//   0x1DBA80 mov     qword ptr [rsp+0F8h+var_88], rdx
//   0x1DBA85 movups  [rsp+0F8h+var_88+8], xmm0
//   0x1DBA8A mov     rsi, [rcx]
//   0x1DBA8D test    r14b, r14b
//   0x1DBA90 jnz     loc_1DC0B0
//   0x1DBA96 mov     edx, eax
//   0x1DBA98 lea     rax, [rsp+0F8h+var_88]
//   0x1DBA9D mov     rdi, r12
//   0x1DBAA0 sub     edx, esi
//   0x1DBAA2 mov     rsi, rax
//   0x1DBAA5 mov     [rsp+0F8h+var_F0], rax
//   0x1DBAAA call    sub_30FF80
//   0x1DBAAF test    al, al
//   0x1DBAB1 mov     r9, [rsp+0F8h+var_E8]
//   0x1DBAB6 jz      loc_1DC0A0
//   0x1DBABC cmp     dword ptr [rsp+0F8h+var_88], 1
//   0x1DBAC1 mov     [rsp+0F8h+var_E8], r9
//   0x1DBAC6 jz      loc_1DC0A0
//   0x1DBACC movdqa  xmm2, [rsp+0F8h+var_88]
//   0x1DBAD2 movdqu  xmm1, xmmword ptr [r12]
//   0x1DBAD8 movdqu  xmm0, xmmword ptr [r12+10h]
//   0x1DBADF mov     rdi, [rsp+0F8h+var_F0]
//   0x1DBAE4 movups  xmmword ptr [r12], xmm2
//   0x1DBAE9 movdqa  xmm2, xmmword ptr [rsp+80h]
//   0x1DBAF2 movaps  [rsp+0F8h+var_68], xmm1
//   0x1DBAFA movups  xmmword ptr [r12+10h], xmm2
//   0x1DBB00 movaps  [rsp+0F8h+var_58], xmm0
//   0x1DBB08 movaps  [rsp+0F8h+var_88], xmm1
//   0x1DBB0D movaps  xmmword ptr [rsp+80h], xmm0
//   0x1DBB15 call    sub_30DE00
//   0x1DBB1A mov     r9, [rsp+0F8h+var_E8]
//   0x1DBB1F jmp     loc_1DBC03
//   0x1DBB24 align 8
//   0x1DBB28 mov     rax, [r13+0]
//   0x1DBB2C mov     rax, [rax+5E0h]
//   0x1DBB33 mov     rax, [rax+60h]
//   0x1DBB37 movzx   r14d, byte ptr [rax+91h]
//   0x1DBB3F jmp     loc_1DB924
//   0x1DBB44 align 8
//   0x1DBB48 cmp     [rsi+8], r15
//   0x1DBB4C jz      loc_1DB960
//   0x1DBB52 mov     rax, [r15]
//   0x1DBB55 test    al, 2
//   0x1DBB57 jz      short loc_1DBB70
//   0x1DBB59 jmp     loc_1DB9DF
//   0x1DBB5E align 20h
//   0x1DBB60 mov     rax, [rax+10h]
//   0x1DBB64 jmp     loc_1DB9B1
//   0x1DBB69 align 10h
//   0x1DBB70 mov     rsi, [r15+8]
//   0x1DBB74 test    byte ptr [rsi], 2
//   0x1DBB77 jz      loc_1DBE90
//   0x1DBB7D and     rax, 0FFFFFFFFFFFFFFFCh
//   0x1DBB81 mov     rsi, [rax]
//   0x1DBB84 test    sil, 2
//   0x1DBB88 jz      loc_1DBF10
//   0x1DBB8E mov     r15, rax
//   0x1DBB91 jmp     loc_1DB9E3
//   0x1DBB96 align 20h
//   0x1DBBA0 cmp     r11, [r15+18h]
//   0x1DBBA4 jl      loc_1DB9C9
//   0x1DBBAA jmp     loc_1DBA02
//   0x1DBBAF align 10h
//   0x1DBBB0 xor     r15d, r15d
//   0x1DBBB3 cmp     dl, byte ptr ds:qword_20
//   0x1DBBBA jb      loc_1DB9C9
//   0x1DBBC0 mov     ecx, 18h
//   0x1DBBC5 cmp     r11, ds:qword_18
//   0x1DBBCD jge     loc_1DBA02
//   0x1DBBD3 jmp     loc_1DB9C9
//   0x1DBBD8 align 20h
//   0x1DBBE0 lea     rsi, [r15+28h]
//   0x1DBBE4 mov     rdi, r12
//   0x1DBBE7 call    sub_30E010
//   0x1DBBEC mov     r9, [rsp+0F8h+var_F0]
//   0x1DBBF1 mov     rcx, [rsp+0F8h+var_E8]
//   0x1DBBF6 mov     rax, [r9]
//   0x1DBBF9 cmp     [r15+18h], rax
//   0x1DBBFD jl      loc_1DBA64
//   0x1DBC03 cmp     [rsp+0F8h+var_F8], rbp
//   0x1DBC07 jle     loc_1DBDD2
//   0x1DBC0D mov     rax, [r15]
//   0x1DBC10 mov     rsi, [r13+8]
//   0x1DBC14 mov     rbx, r15
//   0x1DBC17 test    al, 2
//   0x1DBC19 jnz     short loc_1DBC40
//   0x1DBC1B mov     rdx, [r15+10h]
//   0x1DBC1F test    byte ptr [rdx], 2
//   0x1DBC22 jnz     loc_1DBE50
//   0x1DBC28 mov     rbx, rdx
//   0x1DBC2B mov     rdx, [rdx+8]
//   0x1DBC2F test    byte ptr [rdx], 2
//   0x1DBC32 jz      short loc_1DBC28
//   0x1DBC34 nop     word ptr [rax+rax+00000000h]
//   0x1DBC3F nop
//   0x1DBC40 cmp     rsi, rbx
//   0x1DBC43 jz      loc_1DBDC0
//   0x1DBC49 lea     rcx, [rbx+18h]
//   0x1DBC4D movzx   edi, byte ptr [r15+20h]
//   0x1DBC52 mov     [rsp+0F8h+var_E8], rcx
//   0x1DBC57 cmp     [rbx+20h], dil
//   0x1DBC5B jnz     loc_1DBDC0
//   0x1DBC61 mov     rdi, [rsp+0F8h+var_F8]
//   0x1DBC65 cmp     [rbx+18h], rdi
//   0x1DBC69 jge     loc_1DBDC0
//   0x1DBC6F mov     rbp, [rbx+18h]
//   0x1DBC73 movsxd  rax, dword ptr [r15+2Ch]
//   0x1DBC77 add     rax, [r15+18h]
//   0x1DBC7B cmp     rbp, rax
//   0x1DBC7E jnz     loc_1DBDC0
//   0x1DBC84 add     ebp, [rbx+2Ch]
//   0x1DBC87 movsxd  rbp, ebp
//   0x1DBC8A cmp     rbp, rdi
//   0x1DBC8D jle     loc_1DBD60
//   0x1DBC93 lea     r15, [rsp+0F8h+var_C8]
//   0x1DBC98 lea     rsi, [rbx+28h]
//   0x1DBC9C mov     [rsp+0F8h+var_F0], r9
//   0x1DBCA1 mov     rdi, r15
//   0x1DBCA4 call    sub_30DEC0
//   0x1DBCA9 mov     rax, cs:qword_406B60
//   0x1DBCB0 pxor    xmm0, xmm0
//   0x1DBCB4 test    r14b, r14b
//   0x1DBCB7 mov     [rsp+0F8h+var_90], 0
//   0x1DBCC0 mov     r9, [rsp+0F8h+var_F0]
//   0x1DBCC5 mov     qword ptr [rsp+0F8h+var_A8], rax
//   0x1DBCCA mov     rax, [rsp+0F8h+var_E8]
//   0x1DBCCF movups  [rsp+0F8h+var_A8+8], xmm0
//   0x1DBCD4 mov     rax, [rax]
//   0x1DBCD7 jnz     loc_1DBEA8
//   0x1DBCDD mov     edx, dword ptr [rsp+0F8h+var_F8]
//   0x1DBCE0 lea     rcx, [rsp+0F8h+var_A8]
//   0x1DBCE5 mov     rdi, r15
//   0x1DBCE8 mov     rsi, rcx
//   0x1DBCEB mov     [rsp+0F8h+var_E0], rcx
//   0x1DBCF0 sub     edx, eax
//   0x1DBCF2 call    sub_30FF80
//   0x1DBCF7 test    al, al
//   0x1DBCF9 mov     r9, [rsp+0F8h+var_F0]
//   0x1DBCFE jz      short loc_1DBD22
//   0x1DBD00 mov     rsi, r15
//   0x1DBD03 mov     rdi, r12
//   0x1DBD06 mov     [rsp+0F8h+var_F0], r9
//   0x1DBD0B call    sub_30EEC0
//   0x1DBD10 test    al, al
//   0x1DBD12 mov     r9, [rsp+0F8h+var_F0]
//   0x1DBD17 jnz     loc_1DC050
//   0x1DBD1D mov     [rsp+0F8h+var_F0], r9
//   0x1DBD22 mov     rdi, [rsp+0F8h+var_E0]
//   0x1DBD27 call    sub_30DE00
//   0x1DBD2C mov     rdi, r15
//   0x1DBD2F call    sub_30DE00
//   0x1DBD34 mov     rsi, [rsp+0F8h+var_E8]
//   0x1DBD39 mov     r9, [rsp+0F8h+var_F0]
//   0x1DBD3E add     rsi, 10h
//   0x1DBD42 mov     rdi, r12
//   0x1DBD45 mov     [rsp+0F8h+var_F0], r9
//   0x1DBD4A call    sub_30EEC0
//   0x1DBD4F mov     r9, [rsp+0F8h+var_F0]
//   0x1DBD54 test    al, al
//   0x1DBD56 jz      short loc_1DBDAF
//   0x1DBD58 mov     r15, rbx
//   0x1DBD5B jmp     loc_1DBC0D
//   0x1DBD60 lea     rsi, [rbx+28h]
//   0x1DBD64 test    r14b, r14b
//   0x1DBD67 jz      short loc_1DBD42
//   0x1DBD69 lea     rax, [rsp+0F8h+var_88]
//   0x1DBD6E mov     [rsp+0F8h+var_F0], rax
//   0x1DBD73 mov     r15, [rsp+0F8h+var_F0]
//   0x1DBD78 mov     [rsp+0F8h+var_E8], r9
//   0x1DBD7D mov     rdi, r15
//   0x1DBD80 call    sub_30DEC0
//   0x1DBD85 mov     rsi, r12
//   0x1DBD88 mov     rdi, r15
//   0x1DBD8B call    sub_30EEC0
//   0x1DBD90 test    al, al
//   0x1DBD92 mov     r9, [rsp+0F8h+var_E8]
//   0x1DBD97 jnz     loc_1DBF48
//   0x1DBD9D mov     rdi, r15
//   0x1DBDA0 mov     [rsp+0F8h+var_F0], r9
//   0x1DBDA5 call    sub_30DE00
//   0x1DBDAA mov     r9, [rsp+0F8h+var_F0]
//   0x1DBDAF mov     rax, [rsp+0F8h+var_F8]
//   0x1DBDB3 cmp     rbp, rax
//   0x1DBDB6 jge     loc_1DC19D
//   0x1DBDBC nop     dword ptr [rax+00h]
//   0x1DBDC0 movsxd  rbp, dword ptr [r12+4]
//   0x1DBDC5 add     rbp, [r9]
//   0x1DBDC8 cmp     [rsp+0F8h+var_F8], rbp
//   0x1DBDCC jg      loc_1DB960
//   0x1DBDD2 mov     rax, [rsp+0F8h+var_F8]
//   0x1DBDD6 cmp     rbp, rax
//   0x1DBDD9 jle     short loc_1DBE40
//   0x1DBDDB mov     rax, cs:qword_406B60
//   0x1DBDE2 pxor    xmm0, xmm0
//   0x1DBDE6 mov     [rsp+0F8h+var_70], 0
//   0x1DBDF2 movups  [rsp+0F8h+var_88+8], xmm0
//   0x1DBDF7 mov     qword ptr [rsp+0F8h+var_88], rax
//   0x1DBDFC test    r14b, r14b
//   0x1DBDFF jnz     loc_1DC130
//   0x1DBE05 lea     rax, [rsp+0F8h+var_88]
//   0x1DBE0A mov     edx, [rsp+0F8h+var_D4]
//   0x1DBE0E mov     rdi, r12
//   0x1DBE11 mov     rsi, rax
//   0x1DBE14 mov     [rsp+0F8h+var_F0], rax
//   0x1DBE19 call    sub_30FF80
//   0x1DBE1E test    al, al
//   0x1DBE20 jz      loc_1DC120
//   0x1DBE26 cmp     dword ptr [r12], 1
//   0x1DBE2B jz      loc_1DC120
//   0x1DBE31 mov     rdi, [rsp+0F8h+var_F0]
//   0x1DBE36 call    sub_30DE00
//   0x1DBE3B nop     dword ptr [rax+rax+00h]
//   0x1DBE40 mov     eax, 1
//   0x1DBE45 jmp     loc_1DB962
//   0x1DBE4A align 10h
//   0x1DBE50 and     rax, 0FFFFFFFFFFFFFFFCh
//   0x1DBE54 mov     rbx, rax
//   0x1DBE57 mov     rax, [rax]
//   0x1DBE5A test    al, 2
//   0x1DBE5C jnz     loc_1DBC40
//   0x1DBE62 mov     rdi, r15
//   0x1DBE65 cmp     rdi, [rbx+10h]
//   0x1DBE69 jnz     loc_1DBC40
//   0x1DBE6F and     rax, 0FFFFFFFFFFFFFFFCh
//   0x1DBE73 mov     rdi, rbx
//   0x1DBE76 mov     rdx, rax
//   0x1DBE79 mov     rax, [rax]
//   0x1DBE7C mov     rbx, rdx
//   0x1DBE7F test    al, 2
//   0x1DBE81 jz      short loc_1DBE65
//   0x1DBE83 jmp     loc_1DBC40
//   0x1DBE88 align 10h
//   0x1DBE90 mov     r15, rsi
//   0x1DBE93 mov     rsi, [rsi+10h]
//   0x1DBE97 test    byte ptr [rsi], 2
//   0x1DBE9A jnz     loc_1DB9E3
//   0x1DBEA0 jmp     short loc_1DBE90
//   0x1DBEA2 align 8
//   0x1DBEA8 mov     edx, dword ptr [rsp+0F8h+var_C8+4]
//   0x1DBEAC mov     ecx, dword ptr [rsp+0F8h+var_F8]
//   0x1DBEAF mov     rdi, r15
//   0x1DBEB2 mov     [rsp+0F8h+var_F0], r9
//   0x1DBEB7 sub     edx, ecx
//   0x1DBEB9 add     edx, eax
//   0x1DBEBB lea     rax, [rsp+0F8h+var_A8]
//   0x1DBEC0 mov     rsi, rax
//   0x1DBEC3 mov     [rsp+0F8h+var_E0], rax
//   0x1DBEC8 call    sub_30FF80
//   0x1DBECD mov     r9, [rsp+0F8h+var_F0]
//   0x1DBED2 test    al, al
//   0x1DBED4 mov     [rsp+0F8h+var_D0], r9
//   0x1DBED9 jnz     loc_1DBFA0
//   0x1DBEDF mov     rdi, [rsp+0F8h+var_E0]
//   0x1DBEE4 call    sub_30DE00
//   0x1DBEE9 mov     rdi, r15
//   0x1DBEEC call    sub_30DE00
//   0x1DBEF1 mov     rsi, [rsp+0F8h+var_E8]
//   0x1DBEF6 lea     rax, [rsp+0F8h+var_88]
//   0x1DBEFB mov     r9, [rsp+0F8h+var_D0]
//   0x1DBF00 mov     [rsp+0F8h+var_F0], rax
//   0x1DBF05 add     rsi, 10h
//   0x1DBF09 jmp     loc_1DBD73
//   0x1DBF0E align 10h
//   0x1DBF10 cmp     [rax+8], r15
//   0x1DBF14 jnz     loc_1DBB8E
//   0x1DBF1A and     rsi, 0FFFFFFFFFFFFFFFCh
//   0x1DBF1E mov     r15, rsi
//   0x1DBF21 mov     rsi, [rsi]
//   0x1DBF24 test    sil, 2
//   0x1DBF28 jnz     loc_1DB9E3
//   0x1DBF2E mov     rbx, rax
//   0x1DBF31 mov     rax, r15
//   0x1DBF34 mov     r15, rbx
//   0x1DBF37 cmp     [rax+8], r15
//   0x1DBF3B jz      short loc_1DBF1A
//   0x1DBF3D jmp     loc_1DBB8E
//   0x1DBF42 align 8
//   0x1DBF48 mov     rax, [rsp+0F8h+var_F0]
//   0x1DBF4D movdqu  xmm1, xmmword ptr [r12]
//   0x1DBF53 mov     [rsp+0F8h+var_E8], r9
//   0x1DBF58 movdqu  xmm0, xmmword ptr [r12+10h]
//   0x1DBF5F movdqa  xmm2, xmmword ptr [rax]
//   0x1DBF63 mov     rdi, rax
//   0x1DBF66 movaps  xmmword ptr [rax], xmm1
//   0x1DBF69 movaps  [rsp+0F8h+var_68], xmm1
//   0x1DBF71 movups  xmmword ptr [r12], xmm2
//   0x1DBF76 movdqa  xmm2, xmmword ptr [rax+10h]
//   0x1DBF7B movaps  xmmword ptr [rax+10h], xmm0
//   0x1DBF7F movups  xmmword ptr [r12+10h], xmm2
//   0x1DBF85 movaps  [rsp+0F8h+var_58], xmm0
//   0x1DBF8D call    sub_30DE00
//   0x1DBF92 mov     r9, [rsp+0F8h+var_E8]
//   0x1DBF97 jmp     loc_1DBD58
//   0x1DBF9C align 20h
//   0x1DBFA0 movdqa  xmm2, [rsp+0F8h+var_A8]
//   0x1DBFA6 movdqa  xmm1, [rsp+0F8h+var_C8]
//   0x1DBFAC lea     rax, [rsp+0F8h+var_88]
//   0x1DBFB1 mov     rsi, r15
//   0x1DBFB4 movdqa  xmm0, [rsp+0F8h+var_B8]
//   0x1DBFBA mov     rdi, rax
//   0x1DBFBD mov     [rsp+0F8h+var_F0], rax
//   0x1DBFC2 movaps  [rsp+0F8h+var_C8], xmm2
//   0x1DBFC7 movdqa  xmm2, xmmword ptr [rsp+60h]
//   0x1DBFCD movaps  [rsp+0F8h+var_68], xmm1
//   0x1DBFD5 movaps  [rsp+0F8h+var_58], xmm0
//   0x1DBFDD movaps  [rsp+0F8h+var_B8], xmm2
//   0x1DBFE2 movaps  [rsp+0F8h+var_A8], xmm1
//   0x1DBFE7 movaps  xmmword ptr [rsp+60h], xmm0
//   0x1DBFEC call    sub_30DEC0
//   0x1DBFF1 mov     rdi, [rsp+0F8h+var_F0]
//   0x1DBFF6 mov     rsi, r12
//   0x1DBFF9 call    sub_30EEC0
//   0x1DBFFE test    al, al
//   0x1DC000 jz      short loc_1DC070
//   0x1DC002 movdqa  xmm2, [rsp+0F8h+var_88]
//   0x1DC008 movdqu  xmm1, xmmword ptr [r12]
//   0x1DC00E movdqu  xmm0, xmmword ptr [r12+10h]
//   0x1DC015 mov     rdi, [rsp+0F8h+var_F0]
//   0x1DC01A movups  xmmword ptr [r12], xmm2
//   0x1DC01F movdqa  xmm2, xmmword ptr [rsp+80h]
//   0x1DC028 movaps  [rsp+0F8h+var_68], xmm1
//   0x1DC030 movups  xmmword ptr [r12+10h], xmm2
//   0x1DC036 movaps  [rsp+0F8h+var_58], xmm0
//   0x1DC03E movaps  [rsp+0F8h+var_88], xmm1
//   0x1DC043 movaps  xmmword ptr [rsp+80h], xmm0
//   0x1DC04B call    sub_30DE00
//   0x1DC050 mov     rdi, [rsp+0F8h+var_E0]
//   0x1DC055 call    sub_30DE00
//   0x1DC05A mov     rdi, r15
//   0x1DC05D call    sub_30DE00
//   0x1DC062 jmp     loc_1DBE40
//   0x1DC067 align 10h
//   0x1DC070 mov     rdi, [rsp+0F8h+var_F0]
//   0x1DC075 call    sub_30DE00
//   0x1DC07A mov     rdi, [rsp+0F8h+var_E0]
//   0x1DC07F call    sub_30DE00
//   0x1DC084 mov     rdi, r15
//   0x1DC087 call    sub_30DE00
//   0x1DC08C mov     rsi, [rsp+0F8h+var_E8]
//   0x1DC091 mov     r9, [rsp+0F8h+var_D0]
//   0x1DC096 add     rsi, 10h
//   0x1DC09A jmp     loc_1DBD73
//   0x1DC09F align 20h
//   0x1DC0A0 mov     rdi, [rsp+0F8h+var_F0]
//   0x1DC0A5 call    sub_30DE00
//   0x1DC0AA jmp     loc_1DB960
//   0x1DC0AF align 10h
//   0x1DC0B0 mov     edx, esi
//   0x1DC0B2 mov     rdi, r12
//   0x1DC0B5 sub     edx, eax
//   0x1DC0B7 lea     rax, [rsp+0F8h+var_88]
//   0x1DC0BC add     edx, [r12+4]
//   0x1DC0C1 mov     rsi, rax
//   0x1DC0C4 mov     [rsp+0F8h+var_F0], rax
//   0x1DC0C9 call    sub_30FF80
//   0x1DC0CE test    al, al
//   0x1DC0D0 jz      short loc_1DC0A0
//   0x1DC0D2 movdqa  xmm2, [rsp+0F8h+var_88]
//   0x1DC0D8 movdqu  xmm1, xmmword ptr [r12]
//   0x1DC0DE movdqu  xmm0, xmmword ptr [r12+10h]
//   0x1DC0E5 mov     r9, [rsp+0F8h+var_E8]
//   0x1DC0EA movups  xmmword ptr [r12], xmm2
//   0x1DC0EF movdqa  xmm2, xmmword ptr [rsp+80h]
//   0x1DC0F8 movaps  [rsp+0F8h+var_68], xmm1
//   0x1DC100 movaps  [rsp+0F8h+var_58], xmm0
//   0x1DC108 movups  xmmword ptr [r12+10h], xmm2
//   0x1DC10E movaps  [rsp+0F8h+var_88], xmm1
//   0x1DC113 movaps  xmmword ptr [rsp+80h], xmm0
//   0x1DC11B jmp     loc_1DBABC
//   0x1DC120 mov     rdi, [rsp+0F8h+var_F0]
//   0x1DC125 call    sub_30DE00
//   0x1DC12A jmp     loc_1DB960
//   0x1DC12F align 10h
//   0x1DC130 mov     eax, [rsp+0F8h+var_D4]
//   0x1DC134 mov     edx, [r12+4]
//   0x1DC139 mov     rdi, r12
//   0x1DC13C sub     edx, eax
//   0x1DC13E lea     rax, [rsp+0F8h+var_88]
//   0x1DC143 mov     rsi, rax
//   0x1DC146 mov     [rsp+0F8h+var_F0], rax
//   0x1DC14B call    sub_30FF80
//   0x1DC150 test    al, al
//   0x1DC152 jz      short loc_1DC120
//   0x1DC154 movdqa  xmm2, [rsp+0F8h+var_88]
//   0x1DC15A movdqu  xmm1, xmmword ptr [r12]
//   0x1DC160 movdqu  xmm0, xmmword ptr [r12+10h]
//   0x1DC167 movups  xmmword ptr [r12], xmm2
//   0x1DC16C movdqa  xmm2, xmmword ptr [rsp+80h]
//   0x1DC175 movaps  [rsp+0F8h+var_68], xmm1
//   0x1DC17D movaps  [rsp+0F8h+var_58], xmm0
//   0x1DC185 movups  xmmword ptr [r12+10h], xmm2
//   0x1DC18B movaps  [rsp+0F8h+var_88], xmm1
//   0x1DC190 movaps  xmmword ptr [rsp+80h], xmm0
//   0x1DC198 jmp     loc_1DBE26
//   0x1DC19D xor     eax, eax
//   0x1DC19F pxor    xmm0, xmm0
//   0x1DC1A3 xor     edx, edx
//   0x1DC1A5 mov     rdi, r12
//   0x1DC1A8 mov     dword ptr [rsp+0F8h+var_88], eax
//   0x1DC1AC mov     eax, [rsp+0F8h+var_D4]
//   0x1DC1B0 mov     [rsp+0F8h+var_70], rdx
//   0x1DC1B8 mov     dword ptr [rsp+0F8h+var_88+4], eax
//   0x1DC1BC lea     rax, [rsp+0F8h+var_88]
//   0x1DC1C1 mov     rsi, rax
//   0x1DC1C4 mov     [rsp+0F8h+var_F0], rax
//   0x1DC1C9 mov     rbx, rax
//   0x1DC1CC movups  [rsp+0F8h+var_88+8], xmm0
//   0x1DC1D1 call    sub_30E010
//   0x1DC1D6 mov     rdi, rbx
//   0x1DC1D9 call    sub_30DE00
//   0x1DC1DE mov     rdi, r12
//   0x1DC1E1 call    sub_30DE00
//   0x1DC1E6 mov     dword ptr [r12], 8
//   0x1DC1EE jmp     loc_1DBE40
//   0x1DC1F3 call    ___stack_chk_fail
//   0x1DC1F8 mov     rbx, rax
//   0x1DC1FB jmp     loc_41266
//   0x1DC200 mov     rbx, rax
//   0x1DC203 jmp     loc_4128B
//   0x1DC208 mov     rbx, rax
//   0x1DC20B jmp     loc_412C4
//   0x1DC210 mov     rbx, rax
//   0x1DC213 jmp     loc_412F1
//   0x1DC218 mov     rbx, rax
//   0x1DC21B jmp     loc_412BA
//   0x1DC220 mov     rbx, rax
//   0x1DC223 jmp     loc_4131B
// ============================================================

void sub_1DB8E0(/* signature unknown */)
{
    // see disassembly above
}

