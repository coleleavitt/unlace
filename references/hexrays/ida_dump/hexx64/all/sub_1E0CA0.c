// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x1E0CA0
// Name:           sub_1E0CA0
// Function size:  2637 bytes (598 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x1E0CA0 push    r15
//   0x1E0CA2 push    r14
//   0x1E0CA4 push    r13
//   0x1E0CA6 push    r12
//   0x1E0CA8 push    rbp
//   0x1E0CA9 push    rbx
//   0x1E0CAA sub     rsp, 0C8h
//   0x1E0CB1 mov     [rsp+0F8h+var_E0], rsi
//   0x1E0CB6 mov     rax, fs:28h
//   0x1E0CBF mov     [rsp+0F8h+var_40], rax
//   0x1E0CC7 xor     eax, eax
//   0x1E0CC9 movzx   eax, byte ptr [rdi+18h]
//   0x1E0CCD cmp     al, [rsi+18h]
//   0x1E0CD0 jnz     loc_1E0ED0
//   0x1E0CD6 test    al, al
//   0x1E0CD8 jnz     loc_1E0ED2
//   0x1E0CDE mov     rax, [rdi+8]
//   0x1E0CE2 mov     r13, rdi
//   0x1E0CE5 mov     rdi, [rsi+8]
//   0x1E0CE9 mov     rcx, rax
//   0x1E0CEC mov     [rsp+0F8h+var_E8], rdi
//   0x1E0CF1 mov     rdx, rdi
//   0x1E0CF4 test    rax, rax
//   0x1E0CF7 jz      loc_1E0F30
//   0x1E0CFD cmp     qword ptr [r13+10h], 0
//   0x1E0D02 jnz     loc_1E0F00
//   0x1E0D08 mov     rcx, [rsp+0F8h+var_E8]
//   0x1E0D0D mov     rbx, rax
//   0x1E0D10 test    rcx, rcx
//   0x1E0D13 jz      short loc_1E0D25
//   0x1E0D15 mov     rdx, [rsp+0F8h+var_E0]
//   0x1E0D1A cmp     qword ptr [rdx+10h], 0
//   0x1E0D1F jnz     loc_1E0F50
//   0x1E0D25 lea     rcx, [rax+18h]
//   0x1E0D29 cmp     rax, rbx
//   0x1E0D2C jz      loc_1E1623
//   0x1E0D32 cmp     dword ptr [rcx+10h], 8
//   0x1E0D36 jnz     loc_1E0ED0
//   0x1E0D3C mov     rdx, [rax]
//   0x1E0D3F test    dl, 2
//   0x1E0D42 jnz     short loc_1E0D29
//   0x1E0D44 mov     rcx, [rax+10h]
//   0x1E0D48 test    byte ptr [rcx], 2
//   0x1E0D4B jz      loc_1E0F60
//   0x1E0D51 and     rdx, 0FFFFFFFFFFFFFFFCh
//   0x1E0D55 mov     rcx, [rdx]
//   0x1E0D58 test    cl, 2
//   0x1E0D5B jz      loc_1E0F83
//   0x1E0D61 mov     rax, rdx
//   0x1E0D64 jmp     short loc_1E0D25
//   0x1E0D66 align 10h
//   0x1E0D70 and     rax, 0FFFFFFFFFFFFFFFCh
//   0x1E0D74 mov     rdx, [rax]
//   0x1E0D77 test    dl, 2
//   0x1E0D7A jz      loc_1E1320
//   0x1E0D80 mov     rbx, rax
//   0x1E0D83 nop     word ptr [rax+rax+00000000h]
//   0x1E0D8E xchg    ax, ax
//   0x1E0D90 cmp     [r13+8], rbx
//   0x1E0D94 jz      loc_1E0EB0
//   0x1E0D9A movzx   eax, [rsp+0F8h+var_C9]
//   0x1E0D9F lea     r15, [rbx+18h]
//   0x1E0DA3 cmp     [rbx+20h], al
//   0x1E0DA6 jnz     loc_1E0EB0
//   0x1E0DAC cmp     [rbx+18h], r14
//   0x1E0DB0 jnz     loc_1E0EB0
//   0x1E0DB6 cmp     dword ptr [r15+10h], 8
//   0x1E0DBB jz      loc_1E0EB0
//   0x1E0DC1 movsxd  rax, dword ptr [r15+14h]
//   0x1E0DC5 add     r14, rax
//   0x1E0DC8 cmp     [rsp+0F8h+var_D8], r14
//   0x1E0DCD jl      loc_1E0EB0
//   0x1E0DD3 mov     rax, cs:qword_424018
//   0x1E0DDA pxor    xmm0, xmm0
//   0x1E0DDE cmp     [rsp+0F8h+var_CA], 0
//   0x1E0DE3 mov     [rsp+0F8h+var_70], 0
//   0x1E0DEF mov     edx, dword ptr [rsp+0F8h+var_C8+4]
//   0x1E0DF3 movups  [rsp+0F8h+var_88+8], xmm0
//   0x1E0DF8 mov     qword ptr [rsp+0F8h+var_88], rax
//   0x1E0DFD jnz     loc_1E12B0
//   0x1E0E03 lea     rbp, [rsp+0F8h+var_88]
//   0x1E0E08 mov     rdi, r12
//   0x1E0E0B mov     rsi, rbp
//   0x1E0E0E call    sub_314D00
//   0x1E0E13 test    al, al
//   0x1E0E15 jz      loc_1E1428
//   0x1E0E1B mov     rdi, [rsp+0F8h+var_F0]
//   0x1E0E20 mov     rsi, r12
//   0x1E0E23 call    sub_312DC0
//   0x1E0E28 test    eax, eax
//   0x1E0E2A jnz     loc_1E1428
//   0x1E0E30 mov     rdi, [rsp+0F8h+var_F0]
//   0x1E0E35 lea     rsi, [r15+10h]
//   0x1E0E39 call    sub_312D90
//   0x1E0E3E movdqa  xmm2, xmmword ptr [rbp+0]
//   0x1E0E43 movdqa  xmm1, xmmword ptr [r12]
//   0x1E0E49 mov     rdi, rbp
//   0x1E0E4C movdqa  xmm0, xmmword ptr [r12+10h]
//   0x1E0E53 movaps  xmmword ptr [r12], xmm2
//   0x1E0E58 movdqa  xmm2, xmmword ptr [rbp+10h]
//   0x1E0E5D movaps  xmmword ptr [rbp+0], xmm1
//   0x1E0E61 movaps  xmmword ptr [rbp+10h], xmm0
//   0x1E0E65 movaps  [rsp+0F8h+var_68], xmm1
//   0x1E0E6D movaps  [rsp+0F8h+var_58], xmm0
//   0x1E0E75 movaps  xmmword ptr [r12+10h], xmm2
//   0x1E0E7B call    sub_312B80
//   0x1E0E80 mov     eax, dword ptr [rsp+0F8h+var_C8+4]
//   0x1E0E84 cmp     dword ptr [rsp+0F8h+var_A8+4], eax
//   0x1E0E88 jg      loc_1E127E
//   0x1E0E8E mov     rdi, [rsp+0F8h+var_F0]
//   0x1E0E93 mov     rsi, r12
//   0x1E0E96 call    sub_312DC0
//   0x1E0E9B test    eax, eax
//   0x1E0E9D jz      loc_1E112C
//   0x1E0EA3 nop     word ptr [rax+rax+00000000h]
//   0x1E0EAE xchg    ax, ax
//   0x1E0EB0 mov     rdi, r12
//   0x1E0EB3 call    sub_312B80
//   0x1E0EB8 mov     rdi, [rsp+0F8h+var_F0]
//   0x1E0EBD call    sub_312B80
//   0x1E0EC2 nop     word ptr [rax+rax+00000000h]
//   0x1E0ECD nop     dword ptr [rax]
//   0x1E0ED0 xor     eax, eax
//   0x1E0ED2 mov     rdx, [rsp+0F8h+var_40]
//   0x1E0EDA sub     rdx, fs:28h
//   0x1E0EE3 jnz     loc_1E16B4
//   0x1E0EE9 add     rsp, 0C8h
//   0x1E0EF0 pop     rbx
//   0x1E0EF1 pop     rbp
//   0x1E0EF2 pop     r12
//   0x1E0EF4 pop     r13
//   0x1E0EF6 pop     r14
//   0x1E0EF8 pop     r15
//   0x1E0EFA retn
//   0x1E0EFB align 20h
//   0x1E0F00 mov     rbx, [rax+8]
//   0x1E0F04 test    rdi, rdi
//   0x1E0F07 jnz     loc_1E0FB0
//   0x1E0F0D cmp     rcx, rbx
//   0x1E0F10 jz      loc_1E0D25
//   0x1E0F16 mov     [rsp+0F8h+var_E8], rdx
//   0x1E0F1B mov     rax, rbx
//   0x1E0F1E mov     rbx, rcx
//   0x1E0F21 jmp     loc_1E0D25
//   0x1E0F26 align 10h
//   0x1E0F30 mov     rcx, [rsp+0F8h+var_E8]
//   0x1E0F35 xor     ebx, ebx
//   0x1E0F37 test    rcx, rcx
//   0x1E0F3A jz      loc_1E0D25
//   0x1E0F40 mov     rdi, [rsp+0F8h+var_E0]
//   0x1E0F45 cmp     qword ptr [rdi+10h], 0
//   0x1E0F4A jz      loc_1E0D25
//   0x1E0F50 mov     rcx, [rcx+8]
//   0x1E0F54 mov     [rsp+0F8h+var_E8], rcx
//   0x1E0F59 jmp     loc_1E0D25
//   0x1E0F5E align 20h
//   0x1E0F60 mov     rax, rcx
//   0x1E0F63 mov     rcx, [rcx+8]
//   0x1E0F67 test    byte ptr [rcx], 2
//   0x1E0F6A jnz     loc_1E0D25
//   0x1E0F70 jmp     short loc_1E0F60
//   0x1E0F72 align 20h
//   0x1E0F80 mov     rdx, rsi
//   0x1E0F83 cmp     rax, [rdx+10h]
//   0x1E0F87 jnz     loc_1E0D61
//   0x1E0F8D and     rcx, 0FFFFFFFFFFFFFFFCh
//   0x1E0F91 mov     rax, rdx
//   0x1E0F94 mov     rsi, rcx
//   0x1E0F97 mov     rcx, [rcx]
//   0x1E0F9A test    cl, 2
//   0x1E0F9D jz      short loc_1E0F80
//   0x1E0F9F mov     rax, rsi
//   0x1E0FA2 jmp     loc_1E0D25
//   0x1E0FA7 align 10h
//   0x1E0FB0 cmp     qword ptr [rsi+10h], 0
//   0x1E0FB5 jz      loc_1E0F0D
//   0x1E0FBB mov     rcx, [rdx+8]
//   0x1E0FBF mov     [rsp+0F8h+var_E8], rcx
//   0x1E0FC4 cmp     rax, rbx
//   0x1E0FC7 jz      loc_1E0D25
//   0x1E0FCD nop     dword ptr [rax]
//   0x1E0FD0 cmp     [rsp+0F8h+var_E8], rdx
//   0x1E0FD5 jz      loc_1E16B9
//   0x1E0FDB cmp     dword ptr [rbx+28h], 8
//   0x1E0FDF lea     rbp, [rbx+18h]
//   0x1E0FE3 jz      loc_1E1358
//   0x1E0FE9 mov     rax, [rsp+0F8h+var_E8]
//   0x1E0FEE lea     r15, [rax+18h]
//   0x1E0FF2 movzx   eax, byte ptr [rbp+8]
//   0x1E0FF6 mov     [rsp+0F8h+var_C9], al
//   0x1E0FFA cmp     al, [r15+8]
//   0x1E0FFE jnz     loc_1E0ED0
//   0x1E1004 cmp     byte ptr [rbp+8], 5
//   0x1E1008 mov     [rsp+0F8h+var_CA], 0
//   0x1E100D jnz     short loc_1E1029
//   0x1E100F mov     rax, [r13+0]
//   0x1E1013 mov     rax, [rax+5E0h]
//   0x1E101A mov     rax, [rax+60h]
//   0x1E101E movzx   eax, byte ptr [rax+91h]
//   0x1E1025 mov     [rsp+0F8h+var_CA], al
//   0x1E1029 lea     rax, [rsp+0F8h+var_C8]
//   0x1E102E lea     rsi, [rbp+10h]
//   0x1E1032 mov     rdi, rax
//   0x1E1035 lea     r12, [rsp+0F8h+var_A8]
//   0x1E103A mov     [rsp+0F8h+var_F0], rax
//   0x1E103F call    sub_312C40
//   0x1E1044 lea     rsi, [r15+10h]
//   0x1E1048 mov     rdi, r12
//   0x1E104B call    sub_312C40
//   0x1E1050 movsxd  rdi, dword ptr [rsp+0F8h+var_A8+4]
//   0x1E1055 mov     rcx, [r15]
//   0x1E1058 movsxd  r14, dword ptr [rsp+0F8h+var_C8+4]
//   0x1E105D mov     rax, [rbp+0]
//   0x1E1061 lea     r8, [rdi+rcx]
//   0x1E1065 mov     rdx, r14
//   0x1E1068 mov     [rsp+0F8h+var_D8], r8
//   0x1E106D add     r14, rax
//   0x1E1070 cmp     rax, rcx
//   0x1E1073 jge     loc_1E11C0
//   0x1E1079 cmp     r14, r8
//   0x1E107C jnz     loc_1E0EB0
//   0x1E1082 mov     rsi, cs:qword_424018
//   0x1E1089 pxor    xmm0, xmm0
//   0x1E108D cmp     [rsp+0F8h+var_CA], 0
//   0x1E1092 mov     [rsp+0F8h+var_70], 0
//   0x1E109E movups  [rsp+0F8h+var_88+8], xmm0
//   0x1E10A3 mov     qword ptr [rsp+0F8h+var_88], rsi
//   0x1E10A8 jnz     loc_1E1438
//   0x1E10AE mov     edx, ecx
//   0x1E10B0 lea     rbp, [rsp+0F8h+var_88]
//   0x1E10B5 mov     rdi, [rsp+0F8h+var_F0]
//   0x1E10BA sub     edx, eax
//   0x1E10BC mov     rsi, rbp
//   0x1E10BF call    sub_314D00
//   0x1E10C4 test    al, al
//   0x1E10C6 jz      loc_1E1456
//   0x1E10CC cmp     dword ptr [rsp+0F8h+var_C8], 1
//   0x1E10D1 jnz     loc_1E1685
//   0x1E10D7 movdqa  xmm2, xmmword ptr [rbp+0]
//   0x1E10DC movdqa  xmm1, [rsp+0F8h+var_C8]
//   0x1E10E2 mov     rdi, rbp
//   0x1E10E5 movdqa  xmm0, [rsp+0F8h+var_B8]
//   0x1E10EB movaps  [rsp+0F8h+var_C8], xmm2
//   0x1E10F0 movdqa  xmm2, xmmword ptr [rbp+10h]
//   0x1E10F5 movaps  xmmword ptr [rbp+0], xmm1
//   0x1E10F9 movaps  xmmword ptr [rbp+10h], xmm0
//   0x1E10FD movaps  [rsp+0F8h+var_68], xmm1
//   0x1E1105 movaps  [rsp+0F8h+var_58], xmm0
//   0x1E110D movaps  [rsp+0F8h+var_B8], xmm2
//   0x1E1112 call    sub_312B80
//   0x1E1117 mov     rdi, [rsp+0F8h+var_F0]
//   0x1E111C mov     rsi, r12
//   0x1E111F call    sub_312DC0
//   0x1E1124 test    eax, eax
//   0x1E1126 jnz     loc_1E1270
//   0x1E112C mov     rax, [rbx]
//   0x1E112F test    al, 2
//   0x1E1131 jnz     short loc_1E1150
//   0x1E1133 mov     rdx, [rbx+10h]
//   0x1E1137 test    byte ptr [rdx], 2
//   0x1E113A jnz     loc_1E1468
//   0x1E1140 mov     rbx, rdx
//   0x1E1143 mov     rdx, [rdx+8]
//   0x1E1147 test    byte ptr [rdx], 2
//   0x1E114A jz      short loc_1E1140
//   0x1E114C nop     dword ptr [rax+00h]
//   0x1E1150 mov     rcx, [rsp+0F8h+var_E8]
//   0x1E1155 mov     rax, [rcx]
//   0x1E1158 test    al, 2
//   0x1E115A jnz     short loc_1E1190
//   0x1E115C mov     rdx, [rcx+10h]
//   0x1E1160 test    byte ptr [rdx], 2
//   0x1E1163 jnz     loc_1E14A8
//   0x1E1169 mov     rax, [rdx+8]
//   0x1E116D test    byte ptr [rax], 2
//   0x1E1170 jnz     short loc_1E117E
//   0x1E1172 mov     rdx, rax
//   0x1E1175 mov     rax, [rdx+8]
//   0x1E1179 test    byte ptr [rax], 2
//   0x1E117C jz      short loc_1E1172
//   0x1E117E mov     [rsp+0F8h+var_E8], rdx
//   0x1E1183 nop     word ptr [rax+rax+00000000h]
//   0x1E118E xchg    ax, ax
//   0x1E1190 mov     rdi, r12
//   0x1E1193 call    sub_312B80
//   0x1E1198 mov     rdi, [rsp+0F8h+var_F0]
//   0x1E119D call    sub_312B80
//   0x1E11A2 cmp     [r13+8], rbx
//   0x1E11A6 jz      loc_1E167D
//   0x1E11AC mov     rax, [rsp+0F8h+var_E0]
//   0x1E11B1 mov     rdx, [rax+8]
//   0x1E11B5 jmp     loc_1E0FD0
//   0x1E11BA align 20h
//   0x1E11C0 cmp     rcx, [rbp+0]
//   0x1E11C4 jge     loc_1E1117
//   0x1E11CA mov     rdx, [rsp+0F8h+var_D8]
//   0x1E11CF cmp     r14, rdx
//   0x1E11D2 jnz     loc_1E0EB0
//   0x1E11D8 mov     rdx, cs:qword_424018
//   0x1E11DF pxor    xmm0, xmm0
//   0x1E11E3 cmp     [rsp+0F8h+var_CA], 0
//   0x1E11E8 mov     [rsp+0F8h+var_70], 0
//   0x1E11F4 movups  [rsp+0F8h+var_88+8], xmm0
//   0x1E11F9 mov     qword ptr [rsp+0F8h+var_88], rdx
//   0x1E11FE jnz     loc_1E14E8
//   0x1E1204 mov     edx, eax
//   0x1E1206 lea     rbp, [rsp+0F8h+var_88]
//   0x1E120B mov     rdi, r12
//   0x1E120E sub     edx, ecx
//   0x1E1210 mov     rsi, rbp
//   0x1E1213 call    sub_314D00
//   0x1E1218 test    al, al
//   0x1E121A jz      loc_1E15B0
//   0x1E1220 cmp     dword ptr [rsp+0F8h+var_A8], 1
//   0x1E1225 jnz     loc_1E15B0
//   0x1E122B movdqa  xmm2, xmmword ptr [rbp+0]
//   0x1E1230 movdqa  xmm1, [rsp+0F8h+var_A8]
//   0x1E1236 mov     rdi, rbp
//   0x1E1239 movdqa  xmm0, [rsp+0F8h+var_98]
//   0x1E123F movaps  [rsp+0F8h+var_A8], xmm2
//   0x1E1244 movdqa  xmm2, xmmword ptr [rbp+10h]
//   0x1E1249 movaps  xmmword ptr [rbp+0], xmm1
//   0x1E124D movaps  xmmword ptr [rbp+10h], xmm0
//   0x1E1251 movaps  [rsp+0F8h+var_68], xmm1
//   0x1E1259 movaps  [rsp+0F8h+var_58], xmm0
//   0x1E1261 movaps  [rsp+0F8h+var_98], xmm2
//   0x1E1266 call    sub_312B80
//   0x1E126B jmp     loc_1E1117
//   0x1E1270 mov     rax, [rsp+0F8h+var_D8]
//   0x1E1275 cmp     r14, rax
//   0x1E1278 jge     loc_1E0EB0
//   0x1E127E mov     rax, [rbx]
//   0x1E1281 test    al, 2
//   0x1E1283 jnz     loc_1E0D90
//   0x1E1289 mov     rdx, [rbx+10h]
//   0x1E128D test    byte ptr [rdx], 2
//   0x1E1290 jnz     loc_1E0D70
//   0x1E1296 mov     rbx, rdx
//   0x1E1299 mov     rdx, [rdx+8]
//   0x1E129D test    byte ptr [rdx], 2
//   0x1E12A0 jnz     loc_1E0D90
//   0x1E12A6 jmp     short loc_1E1296
//   0x1E12A8 align 10h
//   0x1E12B0 mov     eax, dword ptr [rsp+0F8h+var_A8+4]
//   0x1E12B4 lea     rbp, [rsp+0F8h+var_88]
//   0x1E12B9 mov     rdi, r12
//   0x1E12BC mov     rsi, rbp
//   0x1E12BF sub     eax, edx
//   0x1E12C1 mov     edx, eax
//   0x1E12C3 call    sub_314D00
//   0x1E12C8 test    al, al
//   0x1E12CA jz      loc_1E1428
//   0x1E12D0 movdqa  xmm2, [rsp+0F8h+var_88]
//   0x1E12D6 movdqa  xmm1, xmmword ptr [r12]
//   0x1E12DC movdqa  xmm0, xmmword ptr [r12+10h]
//   0x1E12E3 movaps  xmmword ptr [r12], xmm2
//   0x1E12E8 movdqa  xmm2, xmmword ptr [rsp+80h]
//   0x1E12F1 movaps  [rsp+0F8h+var_68], xmm1
//   0x1E12F9 movaps  [rsp+0F8h+var_58], xmm0
//   0x1E1301 movaps  xmmword ptr [r12+10h], xmm2
//   0x1E1307 movaps  [rsp+0F8h+var_88], xmm1
//   0x1E130C movaps  xmmword ptr [rsp+80h], xmm0
//   0x1E1314 jmp     loc_1E0E1B
//   0x1E1319 align 20h
//   0x1E1320 cmp     [rax+10h], rbx
//   0x1E1324 jnz     loc_1E0D80
//   0x1E132A and     rdx, 0FFFFFFFFFFFFFFFCh
//   0x1E132E mov     rbx, rdx
//   0x1E1331 mov     rdx, [rdx]
//   0x1E1334 test    dl, 2
//   0x1E1337 jnz     loc_1E0D90
//   0x1E133D mov     rcx, rax
//   0x1E1340 mov     rax, rbx
//   0x1E1343 mov     rbx, rcx
//   0x1E1346 cmp     [rax+10h], rbx
//   0x1E134A jz      short loc_1E132A
//   0x1E134C jmp     loc_1E0D80
//   0x1E1351 align 8
//   0x1E1358 mov     rdi, [rsp+0F8h+var_E8]
//   0x1E135D movzx   eax, byte ptr [rbp+8]
//   0x1E1361 movzx   ecx, byte ptr [rdi+20h]
//   0x1E1365 lea     r15, [rdi+18h]
//   0x1E1369 cmp     al, cl
//   0x1E136B jb      short loc_1E1383
//   0x1E136D cmp     cl, al
//   0x1E136F jb      loc_1E0FF2
//   0x1E1375 mov     rax, [rdi+18h]
//   0x1E1379 cmp     [rbp+0], rax
//   0x1E137D jg      loc_1E0FF2
//   0x1E1383 movsxd  rax, dword ptr [rbp+14h]
//   0x1E1387 add     rax, [rbp+0]
//   0x1E138B movzx   ecx, byte ptr [r15+8]
//   0x1E1390 cmp     [rbp+8], cl
//   0x1E1393 jnz     short loc_1E13F0
//   0x1E1395 cmp     [r15], rax
//   0x1E1398 jge     short loc_1E13F0
//   0x1E139A movsxd  rcx, dword ptr [r15+14h]
//   0x1E139E add     rcx, [r15]
//   0x1E13A1 cmp     rcx, rax
//   0x1E13A4 jg      loc_1E0ED0
//   0x1E13AA mov     rdi, [rsp+0F8h+var_E8]
//   0x1E13AF mov     rcx, [rdi]
//   0x1E13B2 test    cl, 2
//   0x1E13B5 jnz     loc_1E1610
//   0x1E13BB mov     rsi, [rdi+10h]
//   0x1E13BF test    byte ptr [rsi], 2
//   0x1E13C2 jnz     loc_1E1639
//   0x1E13C8 mov     [rsp+0F8h+var_E8], rsi
//   0x1E13CD mov     rsi, [rsi+8]
//   0x1E13D1 test    byte ptr [rsi], 2
//   0x1E13D4 jz      short loc_1E13C8
//   0x1E13D6 mov     rcx, [rsp+0F8h+var_E8]
//   0x1E13DB cmp     rdx, rcx
//   0x1E13DE jnz     loc_1E16AB
//   0x1E13E4 nop     word ptr [rax+rax+00000000h]
//   0x1E13EF nop
//   0x1E13F0 mov     rax, [rbx]
//   0x1E13F3 test    al, 2
//   0x1E13F5 jnz     loc_1E11A2
//   0x1E13FB mov     rdx, [rbx+10h]
//   0x1E13FF test    byte ptr [rdx], 2
//   0x1E1402 jnz     loc_1E15D0
//   0x1E1408 mov     rax, [rdx+8]
//   0x1E140C test    byte ptr [rax], 2
//   0x1E140F jnz     short loc_1E141D
//   0x1E1411 mov     rdx, rax
//   0x1E1414 mov     rax, [rdx+8]
//   0x1E1418 test    byte ptr [rax], 2
//   0x1E141B jz      short loc_1E1411
//   0x1E141D mov     rbx, rdx
//   0x1E1420 jmp     loc_1E11A2
//   0x1E1425 align 8
//   0x1E1428 mov     rdi, rbp
//   0x1E142B call    sub_312B80
//   0x1E1430 jmp     loc_1E0EB0
//   0x1E1435 align 8
//   0x1E1438 add     edx, eax
//   0x1E143A lea     rbp, [rsp+0F8h+var_88]
//   0x1E143F mov     rdi, [rsp+0F8h+var_F0]
//   0x1E1444 sub     edx, ecx
//   0x1E1446 mov     rsi, rbp
//   0x1E1449 call    sub_314D00
//   0x1E144E test    al, al
//   0x1E1450 jnz     loc_1E1550
//   0x1E1456 mov     rdi, rbp
//   0x1E1459 call    sub_312B80
//   0x1E145E jmp     loc_1E0EB0
//   0x1E1463 align 8
//   0x1E1468 and     rax, 0FFFFFFFFFFFFFFFCh
//   0x1E146C mov     rdx, [rax]
//   0x1E146F test    dl, 2
//   0x1E1472 jz      short loc_1E1483
//   0x1E1474 mov     rbx, rax
//   0x1E1477 jmp     loc_1E1150
//   0x1E147C align 20h
//   0x1E1480 mov     rax, rcx
//   0x1E1483 cmp     [rax+10h], rbx
//   0x1E1487 jnz     short loc_1E1474
//   0x1E1489 mov     rcx, rdx
//   0x1E148C mov     rbx, rax
//   0x1E148F and     rcx, 0FFFFFFFFFFFFFFFCh
//   0x1E1493 mov     rdx, [rcx]
//   0x1E1496 test    dl, 2
//   0x1E1499 jz      short loc_1E1480
//   0x1E149B mov     rbx, rcx
//   0x1E149E jmp     loc_1E1150
//   0x1E14A3 align 8
//   0x1E14A8 and     rax, 0FFFFFFFFFFFFFFFCh
//   0x1E14AC mov     rdx, [rax]
//   0x1E14AF test    dl, 2
//   0x1E14B2 jnz     loc_1E15A0
//   0x1E14B8 mov     rcx, [rsp+0F8h+var_E8]
//   0x1E14BD cmp     [rax+10h], rcx
//   0x1E14C1 jnz     loc_1E15A0
//   0x1E14C7 mov     rcx, rdx
//   0x1E14CA and     rcx, 0FFFFFFFFFFFFFFFCh
//   0x1E14CE mov     rdx, [rcx]
//   0x1E14D1 test    dl, 2
//   0x1E14D4 jz      loc_1E15C0
//   0x1E14DA mov     [rsp+0F8h+var_E8], rcx
//   0x1E14DF jmp     loc_1E1190
//   0x1E14E4 align 8
//   0x1E14E8 lea     edx, [rdi+rcx]
//   0x1E14EB lea     rbp, [rsp+0F8h+var_88]
//   0x1E14F0 mov     rdi, r12
//   0x1E14F3 sub     edx, eax
//   0x1E14F5 mov     rsi, rbp
//   0x1E14F8 call    sub_314D00
//   0x1E14FD test    al, al
//   0x1E14FF jz      loc_1E15B0
//   0x1E1505 movdqa  xmm2, [rsp+0F8h+var_88]
//   0x1E150B movdqa  xmm1, [rsp+0F8h+var_A8]
//   0x1E1511 movdqa  xmm0, [rsp+0F8h+var_98]
//   0x1E1517 movaps  [rsp+0F8h+var_A8], xmm2
//   0x1E151C movdqa  xmm2, xmmword ptr [rsp+80h]
//   0x1E1525 movaps  [rsp+0F8h+var_68], xmm1
//   0x1E152D movaps  [rsp+0F8h+var_58], xmm0
//   0x1E1535 movaps  [rsp+0F8h+var_98], xmm2
//   0x1E153A movaps  [rsp+0F8h+var_88], xmm1
//   0x1E153F movaps  xmmword ptr [rsp+80h], xmm0
//   0x1E1547 jmp     loc_1E1220
//   0x1E154C align 10h
//   0x1E1550 movdqa  xmm2, [rsp+0F8h+var_88]
//   0x1E1556 movdqa  xmm1, [rsp+0F8h+var_C8]
//   0x1E155C movdqa  xmm0, [rsp+0F8h+var_B8]
//   0x1E1562 movaps  [rsp+0F8h+var_C8], xmm2
//   0x1E1567 movdqa  xmm2, xmmword ptr [rsp+80h]
//   0x1E1570 movaps  [rsp+0F8h+var_68], xmm1
//   0x1E1578 movaps  [rsp+0F8h+var_58], xmm0
//   0x1E1580 movaps  [rsp+0F8h+var_B8], xmm2
//   0x1E1585 movaps  [rsp+0F8h+var_88], xmm1
//   0x1E158A movaps  xmmword ptr [rsp+80h], xmm0
//   0x1E1592 jmp     loc_1E10CC
//   0x1E1597 align 20h
//   0x1E15A0 mov     [rsp+0F8h+var_E8], rax
//   0x1E15A5 jmp     loc_1E1190
//   0x1E15AA align 10h
//   0x1E15B0 mov     rdi, rbp
//   0x1E15B3 call    sub_312B80
//   0x1E15B8 jmp     loc_1E0EB0
//   0x1E15BD align 20h
//   0x1E15C0 mov     rsi, rax
//   0x1E15C3 mov     rax, rcx
//   0x1E15C6 mov     rcx, rsi
//   0x1E15C9 jmp     loc_1E14BD
//   0x1E15CE align 10h
//   0x1E15D0 and     rax, 0FFFFFFFFFFFFFFFCh
//   0x1E15D4 mov     rdx, [rax]
//   0x1E15D7 test    dl, 2
//   0x1E15DA jz      short loc_1E15E7
//   0x1E15DC mov     rbx, rax
//   0x1E15DF jmp     loc_1E11A2
//   0x1E15E4 mov     rax, rcx
//   0x1E15E7 cmp     [rax+10h], rbx
//   0x1E15EB jnz     short loc_1E15DC
//   0x1E15ED mov     rcx, rdx
//   0x1E15F0 mov     rbx, rax
//   0x1E15F3 and     rcx, 0FFFFFFFFFFFFFFFCh
//   0x1E15F7 mov     rdx, [rcx]
//   0x1E15FA test    dl, 2
//   0x1E15FD jz      short loc_1E15E4
//   0x1E15FF mov     rbx, rcx
//   0x1E1602 jmp     loc_1E11A2
//   0x1E1607 align 10h
//   0x1E1610 movzx   ecx, byte ptr [rbp+8]
//   0x1E1614 cmp     [r15+8], cl
//   0x1E1618 jz      loc_1E1395
//   0x1E161E jmp     loc_1E13F0
//   0x1E1623 mov     rax, [rsp+0F8h+var_E0]
//   0x1E1628 mov     rcx, [rsp+0F8h+var_E8]
//   0x1E162D cmp     [rax+8], rcx
//   0x1E1631 setz    al
//   0x1E1634 jmp     loc_1E0ED2
//   0x1E1639 and     rcx, 0FFFFFFFFFFFFFFFCh
//   0x1E163D mov     rsi, [rcx]
//   0x1E1640 test    sil, 2
//   0x1E1644 jz      short loc_1E1653
//   0x1E1646 mov     [rsp+0F8h+var_E8], rcx
//   0x1E164B jmp     loc_1E13D6
//   0x1E1650 mov     rcx, rdi
//   0x1E1653 mov     rdi, [rsp+0F8h+var_E8]
//   0x1E1658 cmp     [rcx+10h], rdi
//   0x1E165C jnz     short loc_1E1646
//   0x1E165E mov     rdi, rsi
//   0x1E1661 mov     [rsp+0F8h+var_E8], rcx
//   0x1E1666 and     rdi, 0FFFFFFFFFFFFFFFCh
//   0x1E166A mov     rsi, [rdi]
//   0x1E166D test    sil, 2
//   0x1E1671 jz      short loc_1E1650
//   0x1E1673 mov     [rsp+0F8h+var_E8], rdi
//   0x1E1678 jmp     loc_1E13D6
//   0x1E167D mov     rax, rbx
//   0x1E1680 jmp     loc_1E0D25
//   0x1E1685 mov     rdi, rbp
//   0x1E1688 call    sub_312B80
//   0x1E168D mov     rdi, r12
//   0x1E1690 call    sub_312B80
//   0x1E1695 mov     rdi, [rsp+0F8h+var_F0]
//   0x1E169A call    sub_312B80
//   0x1E169F mov     rax, rbx
//   0x1E16A2 mov     rbx, [r13+8]
//   0x1E16A6 jmp     loc_1E0D25
//   0x1E16AB lea     r15, [rcx+18h]
//   0x1E16AF jmp     loc_1E138B
//   0x1E16B4 call    ___stack_chk_fail
//   0x1E16B9 mov     rcx, [r13+8]
//   0x1E16BD mov     rax, rbx
//   0x1E16C0 jmp     loc_1E0F1E
//   0x1E16C5 mov     rbx, rax
//   0x1E16C8 jmp     loc_4252C
//   0x1E16CD mov     rbx, rax
//   0x1E16D0 jmp     loc_42534
//   0x1E16D5 mov     rbx, rax
//   0x1E16D8 jmp     loc_42561
//   0x1E16DD mov     rbx, rax
//   0x1E16E0 jmp     loc_4253C
//   0x1E16E5 mov     rbx, rax
//   0x1E16E8 jmp     loc_4256B
// ============================================================

void sub_1E0CA0(/* signature unknown */)
{
    // see disassembly above
}

