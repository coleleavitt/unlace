// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x1DB560
// Name:           sub_1DB560
// Function size:  2376 bytes (529 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x1DB560 push    r15
//   0x1DB562 push    r14
//   0x1DB564 push    r13
//   0x1DB566 push    r12
//   0x1DB568 push    rbp
//   0x1DB569 push    rbx
//   0x1DB56A sub     rsp, 0C8h
//   0x1DB571 mov     r13, fs:28h
//   0x1DB57A mov     [rsp+0F8h+var_40], r13
//   0x1DB582 mov     r13, rdi
//   0x1DB585 movzx   r14d, byte ptr [r13+18h]
//   0x1DB58A test    r14b, r14b
//   0x1DB58D jnz     short loc_1DB5E0
//   0x1DB58F mov     r9, rdx
//   0x1DB592 movzx   edx, byte ptr [rdx+8]
//   0x1DB596 mov     r12, rsi
//   0x1DB599 mov     edi, ecx
//   0x1DB59B cmp     dl, 5
//   0x1DB59E jz      loc_1DB7A8
//   0x1DB5A4 mov     rsi, [r13+8]
//   0x1DB5A8 test    rsi, rsi
//   0x1DB5AB jz      short loc_1DB5E0
//   0x1DB5AD mov     rax, [rsi]
//   0x1DB5B0 mov     r11, [r9]
//   0x1DB5B3 and     rax, 0FFFFFFFFFFFFFFFCh
//   0x1DB5B7 jz      loc_1DB830
//   0x1DB5BD mov     r15, rsi
//   0x1DB5C0 test    byte ptr [rax], 2
//   0x1DB5C3 jz      short loc_1DB610
//   0x1DB5C5 cmp     qword ptr [r13+10h], 0
//   0x1DB5CA mov     r15, rsi
//   0x1DB5CD jnz     loc_1DB7C8
//   0x1DB5D3 nop     word ptr [rax+rax+00000000h]
//   0x1DB5DE xchg    ax, ax
//   0x1DB5E0 xor     eax, eax
//   0x1DB5E2 mov     rdx, [rsp+0F8h+var_40]
//   0x1DB5EA sub     rdx, fs:28h
//   0x1DB5F3 jnz     loc_1DBE73
//   0x1DB5F9 add     rsp, 0C8h
//   0x1DB600 pop     rbx
//   0x1DB601 pop     rbp
//   0x1DB602 pop     r12
//   0x1DB604 pop     r13
//   0x1DB606 pop     r14
//   0x1DB608 pop     r15
//   0x1DB60A retn
//   0x1DB60B align 10h
//   0x1DB610 movzx   ebx, byte ptr [rax+20h]
//   0x1DB614 cmp     bl, dl
//   0x1DB616 jb      loc_1DB7E0
//   0x1DB61C cmp     dl, bl
//   0x1DB61E jb      short loc_1DB62A
//   0x1DB620 cmp     r11, [rax+18h]
//   0x1DB624 jg      loc_1DB7E0
//   0x1DB62A mov     r15, rax
//   0x1DB62D mov     rax, [rax+8]
//   0x1DB631 test    byte ptr [rax], 2
//   0x1DB634 jz      short loc_1DB610
//   0x1DB636 cmp     r15, rsi
//   0x1DB639 jz      short loc_1DB5C5
//   0x1DB63B lea     rcx, [r15+18h]
//   0x1DB63F cmp     dl, [r15+20h]
//   0x1DB643 jnb     loc_1DB820
//   0x1DB649 cmp     qword ptr [r13+10h], 0
//   0x1DB64E jnz     loc_1DB7C8
//   0x1DB654 mov     rax, [r15]
//   0x1DB657 test    al, 2
//   0x1DB659 jz      loc_1DB7F0
//   0x1DB65F mov     r15, [r15+10h]
//   0x1DB663 lea     rcx, [r15+18h]
//   0x1DB667 cmp     [r15+20h], dl
//   0x1DB66B jnz     loc_1DB5E0
//   0x1DB671 movsxd  rax, dword ptr [rcx+14h]
//   0x1DB675 add     rax, [r15+18h]
//   0x1DB679 cmp     r11, rax
//   0x1DB67C jge     loc_1DB5E0
//   0x1DB682 movsxd  rbx, dword ptr [r12+4]
//   0x1DB687 movsxd  rbp, dword ptr [rcx+14h]
//   0x1DB68B mov     [rsp+0F8h+var_E8], rcx
//   0x1DB690 mov     [rsp+0F8h+var_F0], r9
//   0x1DB695 add     rbp, [r15+18h]
//   0x1DB699 lea     rax, [rbx+r11]
//   0x1DB69D mov     [rsp+0F8h+var_D4], ebx
//   0x1DB6A1 mov     [rsp+0F8h+var_F8], rax
//   0x1DB6A5 test    dil, dil
//   0x1DB6A8 jz      loc_1DB860
//   0x1DB6AE cmp     [r15+18h], r11
//   0x1DB6B2 jnz     loc_1DB5E0
//   0x1DB6B8 cmp     rax, rbp
//   0x1DB6BB jnz     loc_1DB5E0
//   0x1DB6C1 lea     rsi, [r15+28h]
//   0x1DB6C5 mov     rdi, r12
//   0x1DB6C8 call    sub_30DC90
//   0x1DB6CD mov     r9, [rsp+0F8h+var_F0]
//   0x1DB6D2 mov     rcx, [rsp+0F8h+var_E8]
//   0x1DB6D7 mov     rax, [r9]
//   0x1DB6DA cmp     rax, [r15+18h]
//   0x1DB6DE jle     loc_1DBAC0
//   0x1DB6E4 mov     rdx, cs:qword_3FDBA0
//   0x1DB6EB pxor    xmm0, xmm0
//   0x1DB6EF mov     [rsp+0F8h+var_E8], r9
//   0x1DB6F4 mov     [rsp+0F8h+var_70], 0
//   0x1DB700 mov     qword ptr [rsp+0F8h+var_88], rdx
//   0x1DB705 movups  [rsp+0F8h+var_88+8], xmm0
//   0x1DB70A mov     rsi, [rcx]
//   0x1DB70D test    r14b, r14b
//   0x1DB710 jnz     loc_1DBD30
//   0x1DB716 mov     edx, eax
//   0x1DB718 lea     rax, [rsp+0F8h+var_88]
//   0x1DB71D mov     rdi, r12
//   0x1DB720 sub     edx, esi
//   0x1DB722 mov     rsi, rax
//   0x1DB725 mov     [rsp+0F8h+var_F0], rax
//   0x1DB72A call    sub_30FC00
//   0x1DB72F test    al, al
//   0x1DB731 mov     r9, [rsp+0F8h+var_E8]
//   0x1DB736 jz      loc_1DBD20
//   0x1DB73C cmp     dword ptr [rsp+0F8h+var_88], 1
//   0x1DB741 mov     [rsp+0F8h+var_E8], r9
//   0x1DB746 jz      loc_1DBD20
//   0x1DB74C movdqa  xmm2, [rsp+0F8h+var_88]
//   0x1DB752 movdqu  xmm1, xmmword ptr [r12]
//   0x1DB758 movdqu  xmm0, xmmword ptr [r12+10h]
//   0x1DB75F mov     rdi, [rsp+0F8h+var_F0]
//   0x1DB764 movups  xmmword ptr [r12], xmm2
//   0x1DB769 movdqa  xmm2, xmmword ptr [rsp+80h]
//   0x1DB772 movaps  [rsp+0F8h+var_68], xmm1
//   0x1DB77A movups  xmmword ptr [r12+10h], xmm2
//   0x1DB780 movaps  [rsp+0F8h+var_58], xmm0
//   0x1DB788 movaps  [rsp+0F8h+var_88], xmm1
//   0x1DB78D movaps  xmmword ptr [rsp+80h], xmm0
//   0x1DB795 call    sub_30DA80
//   0x1DB79A mov     r9, [rsp+0F8h+var_E8]
//   0x1DB79F jmp     loc_1DB883
//   0x1DB7A4 align 8
//   0x1DB7A8 mov     rax, [r13+0]
//   0x1DB7AC mov     rax, [rax+5E0h]
//   0x1DB7B3 mov     rax, [rax+60h]
//   0x1DB7B7 movzx   r14d, byte ptr [rax+91h]
//   0x1DB7BF jmp     loc_1DB5A4
//   0x1DB7C4 align 8
//   0x1DB7C8 cmp     [rsi+8], r15
//   0x1DB7CC jz      loc_1DB5E0
//   0x1DB7D2 mov     rax, [r15]
//   0x1DB7D5 test    al, 2
//   0x1DB7D7 jz      short loc_1DB7F0
//   0x1DB7D9 jmp     loc_1DB65F
//   0x1DB7DE align 20h
//   0x1DB7E0 mov     rax, [rax+10h]
//   0x1DB7E4 jmp     loc_1DB631
//   0x1DB7E9 align 10h
//   0x1DB7F0 mov     rsi, [r15+8]
//   0x1DB7F4 test    byte ptr [rsi], 2
//   0x1DB7F7 jz      loc_1DBB10
//   0x1DB7FD and     rax, 0FFFFFFFFFFFFFFFCh
//   0x1DB801 mov     rsi, [rax]
//   0x1DB804 test    sil, 2
//   0x1DB808 jz      loc_1DBB90
//   0x1DB80E mov     r15, rax
//   0x1DB811 jmp     loc_1DB663
//   0x1DB816 align 20h
//   0x1DB820 cmp     r11, [r15+18h]
//   0x1DB824 jl      loc_1DB649
//   0x1DB82A jmp     loc_1DB682
//   0x1DB82F align 10h
//   0x1DB830 xor     r15d, r15d
//   0x1DB833 cmp     dl, byte ptr ds:qword_20
//   0x1DB83A jb      loc_1DB649
//   0x1DB840 mov     ecx, 18h
//   0x1DB845 cmp     r11, ds:qword_18
//   0x1DB84D jge     loc_1DB682
//   0x1DB853 jmp     loc_1DB649
//   0x1DB858 align 20h
//   0x1DB860 lea     rsi, [r15+28h]
//   0x1DB864 mov     rdi, r12
//   0x1DB867 call    sub_30DC90
//   0x1DB86C mov     r9, [rsp+0F8h+var_F0]
//   0x1DB871 mov     rcx, [rsp+0F8h+var_E8]
//   0x1DB876 mov     rax, [r9]
//   0x1DB879 cmp     [r15+18h], rax
//   0x1DB87D jl      loc_1DB6E4
//   0x1DB883 cmp     [rsp+0F8h+var_F8], rbp
//   0x1DB887 jle     loc_1DBA52
//   0x1DB88D mov     rax, [r15]
//   0x1DB890 mov     rsi, [r13+8]
//   0x1DB894 mov     rbx, r15
//   0x1DB897 test    al, 2
//   0x1DB899 jnz     short loc_1DB8C0
//   0x1DB89B mov     rdx, [r15+10h]
//   0x1DB89F test    byte ptr [rdx], 2
//   0x1DB8A2 jnz     loc_1DBAD0
//   0x1DB8A8 mov     rbx, rdx
//   0x1DB8AB mov     rdx, [rdx+8]
//   0x1DB8AF test    byte ptr [rdx], 2
//   0x1DB8B2 jz      short loc_1DB8A8
//   0x1DB8B4 nop     word ptr [rax+rax+00000000h]
//   0x1DB8BF nop
//   0x1DB8C0 cmp     rsi, rbx
//   0x1DB8C3 jz      loc_1DBA40
//   0x1DB8C9 lea     rcx, [rbx+18h]
//   0x1DB8CD movzx   edi, byte ptr [r15+20h]
//   0x1DB8D2 mov     [rsp+0F8h+var_E8], rcx
//   0x1DB8D7 cmp     [rbx+20h], dil
//   0x1DB8DB jnz     loc_1DBA40
//   0x1DB8E1 mov     rdi, [rsp+0F8h+var_F8]
//   0x1DB8E5 cmp     [rbx+18h], rdi
//   0x1DB8E9 jge     loc_1DBA40
//   0x1DB8EF mov     rbp, [rbx+18h]
//   0x1DB8F3 movsxd  rax, dword ptr [r15+2Ch]
//   0x1DB8F7 add     rax, [r15+18h]
//   0x1DB8FB cmp     rbp, rax
//   0x1DB8FE jnz     loc_1DBA40
//   0x1DB904 add     ebp, [rbx+2Ch]
//   0x1DB907 movsxd  rbp, ebp
//   0x1DB90A cmp     rbp, rdi
//   0x1DB90D jle     loc_1DB9E0
//   0x1DB913 lea     r15, [rsp+0F8h+var_C8]
//   0x1DB918 lea     rsi, [rbx+28h]
//   0x1DB91C mov     [rsp+0F8h+var_F0], r9
//   0x1DB921 mov     rdi, r15
//   0x1DB924 call    sub_30DB40
//   0x1DB929 mov     rax, cs:qword_3FDBA0
//   0x1DB930 pxor    xmm0, xmm0
//   0x1DB934 test    r14b, r14b
//   0x1DB937 mov     [rsp+0F8h+var_90], 0
//   0x1DB940 mov     r9, [rsp+0F8h+var_F0]
//   0x1DB945 mov     qword ptr [rsp+0F8h+var_A8], rax
//   0x1DB94A mov     rax, [rsp+0F8h+var_E8]
//   0x1DB94F movups  [rsp+0F8h+var_A8+8], xmm0
//   0x1DB954 mov     rax, [rax]
//   0x1DB957 jnz     loc_1DBB28
//   0x1DB95D mov     edx, dword ptr [rsp+0F8h+var_F8]
//   0x1DB960 lea     rcx, [rsp+0F8h+var_A8]
//   0x1DB965 mov     rdi, r15
//   0x1DB968 mov     rsi, rcx
//   0x1DB96B mov     [rsp+0F8h+var_E0], rcx
//   0x1DB970 sub     edx, eax
//   0x1DB972 call    sub_30FC00
//   0x1DB977 test    al, al
//   0x1DB979 mov     r9, [rsp+0F8h+var_F0]
//   0x1DB97E jz      short loc_1DB9A2
//   0x1DB980 mov     rsi, r15
//   0x1DB983 mov     rdi, r12
//   0x1DB986 mov     [rsp+0F8h+var_F0], r9
//   0x1DB98B call    sub_30EB40
//   0x1DB990 test    al, al
//   0x1DB992 mov     r9, [rsp+0F8h+var_F0]
//   0x1DB997 jnz     loc_1DBCD0
//   0x1DB99D mov     [rsp+0F8h+var_F0], r9
//   0x1DB9A2 mov     rdi, [rsp+0F8h+var_E0]
//   0x1DB9A7 call    sub_30DA80
//   0x1DB9AC mov     rdi, r15
//   0x1DB9AF call    sub_30DA80
//   0x1DB9B4 mov     rsi, [rsp+0F8h+var_E8]
//   0x1DB9B9 mov     r9, [rsp+0F8h+var_F0]
//   0x1DB9BE add     rsi, 10h
//   0x1DB9C2 mov     rdi, r12
//   0x1DB9C5 mov     [rsp+0F8h+var_F0], r9
//   0x1DB9CA call    sub_30EB40
//   0x1DB9CF mov     r9, [rsp+0F8h+var_F0]
//   0x1DB9D4 test    al, al
//   0x1DB9D6 jz      short loc_1DBA2F
//   0x1DB9D8 mov     r15, rbx
//   0x1DB9DB jmp     loc_1DB88D
//   0x1DB9E0 lea     rsi, [rbx+28h]
//   0x1DB9E4 test    r14b, r14b
//   0x1DB9E7 jz      short loc_1DB9C2
//   0x1DB9E9 lea     rax, [rsp+0F8h+var_88]
//   0x1DB9EE mov     [rsp+0F8h+var_F0], rax
//   0x1DB9F3 mov     r15, [rsp+0F8h+var_F0]
//   0x1DB9F8 mov     [rsp+0F8h+var_E8], r9
//   0x1DB9FD mov     rdi, r15
//   0x1DBA00 call    sub_30DB40
//   0x1DBA05 mov     rsi, r12
//   0x1DBA08 mov     rdi, r15
//   0x1DBA0B call    sub_30EB40
//   0x1DBA10 test    al, al
//   0x1DBA12 mov     r9, [rsp+0F8h+var_E8]
//   0x1DBA17 jnz     loc_1DBBC8
//   0x1DBA1D mov     rdi, r15
//   0x1DBA20 mov     [rsp+0F8h+var_F0], r9
//   0x1DBA25 call    sub_30DA80
//   0x1DBA2A mov     r9, [rsp+0F8h+var_F0]
//   0x1DBA2F mov     rax, [rsp+0F8h+var_F8]
//   0x1DBA33 cmp     rbp, rax
//   0x1DBA36 jge     loc_1DBE1D
//   0x1DBA3C nop     dword ptr [rax+00h]
//   0x1DBA40 movsxd  rbp, dword ptr [r12+4]
//   0x1DBA45 add     rbp, [r9]
//   0x1DBA48 cmp     [rsp+0F8h+var_F8], rbp
//   0x1DBA4C jg      loc_1DB5E0
//   0x1DBA52 mov     rax, [rsp+0F8h+var_F8]
//   0x1DBA56 cmp     rbp, rax
//   0x1DBA59 jle     short loc_1DBAC0
//   0x1DBA5B mov     rax, cs:qword_3FDBA0
//   0x1DBA62 pxor    xmm0, xmm0
//   0x1DBA66 mov     [rsp+0F8h+var_70], 0
//   0x1DBA72 movups  [rsp+0F8h+var_88+8], xmm0
//   0x1DBA77 mov     qword ptr [rsp+0F8h+var_88], rax
//   0x1DBA7C test    r14b, r14b
//   0x1DBA7F jnz     loc_1DBDB0
//   0x1DBA85 lea     rax, [rsp+0F8h+var_88]
//   0x1DBA8A mov     edx, [rsp+0F8h+var_D4]
//   0x1DBA8E mov     rdi, r12
//   0x1DBA91 mov     rsi, rax
//   0x1DBA94 mov     [rsp+0F8h+var_F0], rax
//   0x1DBA99 call    sub_30FC00
//   0x1DBA9E test    al, al
//   0x1DBAA0 jz      loc_1DBDA0
//   0x1DBAA6 cmp     dword ptr [r12], 1
//   0x1DBAAB jz      loc_1DBDA0
//   0x1DBAB1 mov     rdi, [rsp+0F8h+var_F0]
//   0x1DBAB6 call    sub_30DA80
//   0x1DBABB nop     dword ptr [rax+rax+00h]
//   0x1DBAC0 mov     eax, 1
//   0x1DBAC5 jmp     loc_1DB5E2
//   0x1DBACA align 10h
//   0x1DBAD0 and     rax, 0FFFFFFFFFFFFFFFCh
//   0x1DBAD4 mov     rbx, rax
//   0x1DBAD7 mov     rax, [rax]
//   0x1DBADA test    al, 2
//   0x1DBADC jnz     loc_1DB8C0
//   0x1DBAE2 mov     rdi, r15
//   0x1DBAE5 cmp     rdi, [rbx+10h]
//   0x1DBAE9 jnz     loc_1DB8C0
//   0x1DBAEF and     rax, 0FFFFFFFFFFFFFFFCh
//   0x1DBAF3 mov     rdi, rbx
//   0x1DBAF6 mov     rdx, rax
//   0x1DBAF9 mov     rax, [rax]
//   0x1DBAFC mov     rbx, rdx
//   0x1DBAFF test    al, 2
//   0x1DBB01 jz      short loc_1DBAE5
//   0x1DBB03 jmp     loc_1DB8C0
//   0x1DBB08 align 10h
//   0x1DBB10 mov     r15, rsi
//   0x1DBB13 mov     rsi, [rsi+10h]
//   0x1DBB17 test    byte ptr [rsi], 2
//   0x1DBB1A jnz     loc_1DB663
//   0x1DBB20 jmp     short loc_1DBB10
//   0x1DBB22 align 8
//   0x1DBB28 mov     edx, dword ptr [rsp+0F8h+var_C8+4]
//   0x1DBB2C mov     ecx, dword ptr [rsp+0F8h+var_F8]
//   0x1DBB2F mov     rdi, r15
//   0x1DBB32 mov     [rsp+0F8h+var_F0], r9
//   0x1DBB37 sub     edx, ecx
//   0x1DBB39 add     edx, eax
//   0x1DBB3B lea     rax, [rsp+0F8h+var_A8]
//   0x1DBB40 mov     rsi, rax
//   0x1DBB43 mov     [rsp+0F8h+var_E0], rax
//   0x1DBB48 call    sub_30FC00
//   0x1DBB4D mov     r9, [rsp+0F8h+var_F0]
//   0x1DBB52 test    al, al
//   0x1DBB54 mov     [rsp+0F8h+var_D0], r9
//   0x1DBB59 jnz     loc_1DBC20
//   0x1DBB5F mov     rdi, [rsp+0F8h+var_E0]
//   0x1DBB64 call    sub_30DA80
//   0x1DBB69 mov     rdi, r15
//   0x1DBB6C call    sub_30DA80
//   0x1DBB71 mov     rsi, [rsp+0F8h+var_E8]
//   0x1DBB76 lea     rax, [rsp+0F8h+var_88]
//   0x1DBB7B mov     r9, [rsp+0F8h+var_D0]
//   0x1DBB80 mov     [rsp+0F8h+var_F0], rax
//   0x1DBB85 add     rsi, 10h
//   0x1DBB89 jmp     loc_1DB9F3
//   0x1DBB8E align 10h
//   0x1DBB90 cmp     [rax+8], r15
//   0x1DBB94 jnz     loc_1DB80E
//   0x1DBB9A and     rsi, 0FFFFFFFFFFFFFFFCh
//   0x1DBB9E mov     r15, rsi
//   0x1DBBA1 mov     rsi, [rsi]
//   0x1DBBA4 test    sil, 2
//   0x1DBBA8 jnz     loc_1DB663
//   0x1DBBAE mov     rbx, rax
//   0x1DBBB1 mov     rax, r15
//   0x1DBBB4 mov     r15, rbx
//   0x1DBBB7 cmp     [rax+8], r15
//   0x1DBBBB jz      short loc_1DBB9A
//   0x1DBBBD jmp     loc_1DB80E
//   0x1DBBC2 align 8
//   0x1DBBC8 mov     rax, [rsp+0F8h+var_F0]
//   0x1DBBCD movdqu  xmm1, xmmword ptr [r12]
//   0x1DBBD3 mov     [rsp+0F8h+var_E8], r9
//   0x1DBBD8 movdqu  xmm0, xmmword ptr [r12+10h]
//   0x1DBBDF movdqa  xmm2, xmmword ptr [rax]
//   0x1DBBE3 mov     rdi, rax
//   0x1DBBE6 movaps  xmmword ptr [rax], xmm1
//   0x1DBBE9 movaps  [rsp+0F8h+var_68], xmm1
//   0x1DBBF1 movups  xmmword ptr [r12], xmm2
//   0x1DBBF6 movdqa  xmm2, xmmword ptr [rax+10h]
//   0x1DBBFB movaps  xmmword ptr [rax+10h], xmm0
//   0x1DBBFF movups  xmmword ptr [r12+10h], xmm2
//   0x1DBC05 movaps  [rsp+0F8h+var_58], xmm0
//   0x1DBC0D call    sub_30DA80
//   0x1DBC12 mov     r9, [rsp+0F8h+var_E8]
//   0x1DBC17 jmp     loc_1DB9D8
//   0x1DBC1C align 20h
//   0x1DBC20 movdqa  xmm2, [rsp+0F8h+var_A8]
//   0x1DBC26 movdqa  xmm1, [rsp+0F8h+var_C8]
//   0x1DBC2C lea     rax, [rsp+0F8h+var_88]
//   0x1DBC31 mov     rsi, r15
//   0x1DBC34 movdqa  xmm0, [rsp+0F8h+var_B8]
//   0x1DBC3A mov     rdi, rax
//   0x1DBC3D mov     [rsp+0F8h+var_F0], rax
//   0x1DBC42 movaps  [rsp+0F8h+var_C8], xmm2
//   0x1DBC47 movdqa  xmm2, xmmword ptr [rsp+60h]
//   0x1DBC4D movaps  [rsp+0F8h+var_68], xmm1
//   0x1DBC55 movaps  [rsp+0F8h+var_58], xmm0
//   0x1DBC5D movaps  [rsp+0F8h+var_B8], xmm2
//   0x1DBC62 movaps  [rsp+0F8h+var_A8], xmm1
//   0x1DBC67 movaps  xmmword ptr [rsp+60h], xmm0
//   0x1DBC6C call    sub_30DB40
//   0x1DBC71 mov     rdi, [rsp+0F8h+var_F0]
//   0x1DBC76 mov     rsi, r12
//   0x1DBC79 call    sub_30EB40
//   0x1DBC7E test    al, al
//   0x1DBC80 jz      short loc_1DBCF0
//   0x1DBC82 movdqa  xmm2, [rsp+0F8h+var_88]
//   0x1DBC88 movdqu  xmm1, xmmword ptr [r12]
//   0x1DBC8E movdqu  xmm0, xmmword ptr [r12+10h]
//   0x1DBC95 mov     rdi, [rsp+0F8h+var_F0]
//   0x1DBC9A movups  xmmword ptr [r12], xmm2
//   0x1DBC9F movdqa  xmm2, xmmword ptr [rsp+80h]
//   0x1DBCA8 movaps  [rsp+0F8h+var_68], xmm1
//   0x1DBCB0 movups  xmmword ptr [r12+10h], xmm2
//   0x1DBCB6 movaps  [rsp+0F8h+var_58], xmm0
//   0x1DBCBE movaps  [rsp+0F8h+var_88], xmm1
//   0x1DBCC3 movaps  xmmword ptr [rsp+80h], xmm0
//   0x1DBCCB call    sub_30DA80
//   0x1DBCD0 mov     rdi, [rsp+0F8h+var_E0]
//   0x1DBCD5 call    sub_30DA80
//   0x1DBCDA mov     rdi, r15
//   0x1DBCDD call    sub_30DA80
//   0x1DBCE2 jmp     loc_1DBAC0
//   0x1DBCE7 align 10h
//   0x1DBCF0 mov     rdi, [rsp+0F8h+var_F0]
//   0x1DBCF5 call    sub_30DA80
//   0x1DBCFA mov     rdi, [rsp+0F8h+var_E0]
//   0x1DBCFF call    sub_30DA80
//   0x1DBD04 mov     rdi, r15
//   0x1DBD07 call    sub_30DA80
//   0x1DBD0C mov     rsi, [rsp+0F8h+var_E8]
//   0x1DBD11 mov     r9, [rsp+0F8h+var_D0]
//   0x1DBD16 add     rsi, 10h
//   0x1DBD1A jmp     loc_1DB9F3
//   0x1DBD1F align 20h
//   0x1DBD20 mov     rdi, [rsp+0F8h+var_F0]
//   0x1DBD25 call    sub_30DA80
//   0x1DBD2A jmp     loc_1DB5E0
//   0x1DBD2F align 10h
//   0x1DBD30 mov     edx, esi
//   0x1DBD32 mov     rdi, r12
//   0x1DBD35 sub     edx, eax
//   0x1DBD37 lea     rax, [rsp+0F8h+var_88]
//   0x1DBD3C add     edx, [r12+4]
//   0x1DBD41 mov     rsi, rax
//   0x1DBD44 mov     [rsp+0F8h+var_F0], rax
//   0x1DBD49 call    sub_30FC00
//   0x1DBD4E test    al, al
//   0x1DBD50 jz      short loc_1DBD20
//   0x1DBD52 movdqa  xmm2, [rsp+0F8h+var_88]
//   0x1DBD58 movdqu  xmm1, xmmword ptr [r12]
//   0x1DBD5E movdqu  xmm0, xmmword ptr [r12+10h]
//   0x1DBD65 mov     r9, [rsp+0F8h+var_E8]
//   0x1DBD6A movups  xmmword ptr [r12], xmm2
//   0x1DBD6F movdqa  xmm2, xmmword ptr [rsp+80h]
//   0x1DBD78 movaps  [rsp+0F8h+var_68], xmm1
//   0x1DBD80 movaps  [rsp+0F8h+var_58], xmm0
//   0x1DBD88 movups  xmmword ptr [r12+10h], xmm2
//   0x1DBD8E movaps  [rsp+0F8h+var_88], xmm1
//   0x1DBD93 movaps  xmmword ptr [rsp+80h], xmm0
//   0x1DBD9B jmp     loc_1DB73C
//   0x1DBDA0 mov     rdi, [rsp+0F8h+var_F0]
//   0x1DBDA5 call    sub_30DA80
//   0x1DBDAA jmp     loc_1DB5E0
//   0x1DBDAF align 10h
//   0x1DBDB0 mov     eax, [rsp+0F8h+var_D4]
//   0x1DBDB4 mov     edx, [r12+4]
//   0x1DBDB9 mov     rdi, r12
//   0x1DBDBC sub     edx, eax
//   0x1DBDBE lea     rax, [rsp+0F8h+var_88]
//   0x1DBDC3 mov     rsi, rax
//   0x1DBDC6 mov     [rsp+0F8h+var_F0], rax
//   0x1DBDCB call    sub_30FC00
//   0x1DBDD0 test    al, al
//   0x1DBDD2 jz      short loc_1DBDA0
//   0x1DBDD4 movdqa  xmm2, [rsp+0F8h+var_88]
//   0x1DBDDA movdqu  xmm1, xmmword ptr [r12]
//   0x1DBDE0 movdqu  xmm0, xmmword ptr [r12+10h]
//   0x1DBDE7 movups  xmmword ptr [r12], xmm2
//   0x1DBDEC movdqa  xmm2, xmmword ptr [rsp+80h]
//   0x1DBDF5 movaps  [rsp+0F8h+var_68], xmm1
//   0x1DBDFD movaps  [rsp+0F8h+var_58], xmm0
//   0x1DBE05 movups  xmmword ptr [r12+10h], xmm2
//   0x1DBE0B movaps  [rsp+0F8h+var_88], xmm1
//   0x1DBE10 movaps  xmmword ptr [rsp+80h], xmm0
//   0x1DBE18 jmp     loc_1DBAA6
//   0x1DBE1D xor     eax, eax
//   0x1DBE1F pxor    xmm0, xmm0
//   0x1DBE23 xor     edx, edx
//   0x1DBE25 mov     rdi, r12
//   0x1DBE28 mov     dword ptr [rsp+0F8h+var_88], eax
//   0x1DBE2C mov     eax, [rsp+0F8h+var_D4]
//   0x1DBE30 mov     [rsp+0F8h+var_70], rdx
//   0x1DBE38 mov     dword ptr [rsp+0F8h+var_88+4], eax
//   0x1DBE3C lea     rax, [rsp+0F8h+var_88]
//   0x1DBE41 mov     rsi, rax
//   0x1DBE44 mov     [rsp+0F8h+var_F0], rax
//   0x1DBE49 mov     rbx, rax
//   0x1DBE4C movups  [rsp+0F8h+var_88+8], xmm0
//   0x1DBE51 call    sub_30DC90
//   0x1DBE56 mov     rdi, rbx
//   0x1DBE59 call    sub_30DA80
//   0x1DBE5E mov     rdi, r12
//   0x1DBE61 call    sub_30DA80
//   0x1DBE66 mov     dword ptr [r12], 8
//   0x1DBE6E jmp     loc_1DBAC0
//   0x1DBE73 call    ___stack_chk_fail
//   0x1DBE78 mov     rbx, rax
//   0x1DBE7B jmp     loc_41238
//   0x1DBE80 mov     rbx, rax
//   0x1DBE83 jmp     loc_4125D
//   0x1DBE88 mov     rbx, rax
//   0x1DBE8B jmp     loc_41296
//   0x1DBE90 mov     rbx, rax
//   0x1DBE93 jmp     loc_412C3
//   0x1DBE98 mov     rbx, rax
//   0x1DBE9B jmp     loc_4128C
//   0x1DBEA0 mov     rbx, rax
//   0x1DBEA3 jmp     loc_412ED
// ============================================================

void sub_1DB560(/* signature unknown */)
{
    // see disassembly above
}

