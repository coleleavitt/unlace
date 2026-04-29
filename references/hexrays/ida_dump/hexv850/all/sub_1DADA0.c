// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x1DADA0
// Name:           sub_1DADA0
// Function size:  2376 bytes (529 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x1DADA0 push    r15
//   0x1DADA2 push    r14
//   0x1DADA4 push    r13
//   0x1DADA6 push    r12
//   0x1DADA8 push    rbp
//   0x1DADA9 push    rbx
//   0x1DADAA sub     rsp, 0C8h
//   0x1DADB1 mov     r13, fs:28h
//   0x1DADBA mov     [rsp+0F8h+var_40], r13
//   0x1DADC2 mov     r13, rdi
//   0x1DADC5 movzx   r14d, byte ptr [r13+18h]
//   0x1DADCA test    r14b, r14b
//   0x1DADCD jnz     short loc_1DAE20
//   0x1DADCF mov     r9, rdx
//   0x1DADD2 movzx   edx, byte ptr [rdx+8]
//   0x1DADD6 mov     r12, rsi
//   0x1DADD9 mov     edi, ecx
//   0x1DADDB cmp     dl, 5
//   0x1DADDE jz      loc_1DAFE8
//   0x1DADE4 mov     rsi, [r13+8]
//   0x1DADE8 test    rsi, rsi
//   0x1DADEB jz      short loc_1DAE20
//   0x1DADED mov     rax, [rsi]
//   0x1DADF0 mov     r11, [r9]
//   0x1DADF3 and     rax, 0FFFFFFFFFFFFFFFCh
//   0x1DADF7 jz      loc_1DB070
//   0x1DADFD mov     r15, rsi
//   0x1DAE00 test    byte ptr [rax], 2
//   0x1DAE03 jz      short loc_1DAE50
//   0x1DAE05 cmp     qword ptr [r13+10h], 0
//   0x1DAE0A mov     r15, rsi
//   0x1DAE0D jnz     loc_1DB008
//   0x1DAE13 nop     word ptr [rax+rax+00000000h]
//   0x1DAE1E xchg    ax, ax
//   0x1DAE20 xor     eax, eax
//   0x1DAE22 mov     rdx, [rsp+0F8h+var_40]
//   0x1DAE2A sub     rdx, fs:28h
//   0x1DAE33 jnz     loc_1DB6B3
//   0x1DAE39 add     rsp, 0C8h
//   0x1DAE40 pop     rbx
//   0x1DAE41 pop     rbp
//   0x1DAE42 pop     r12
//   0x1DAE44 pop     r13
//   0x1DAE46 pop     r14
//   0x1DAE48 pop     r15
//   0x1DAE4A retn
//   0x1DAE4B align 10h
//   0x1DAE50 movzx   ebx, byte ptr [rax+20h]
//   0x1DAE54 cmp     bl, dl
//   0x1DAE56 jb      loc_1DB020
//   0x1DAE5C cmp     dl, bl
//   0x1DAE5E jb      short loc_1DAE6A
//   0x1DAE60 cmp     r11, [rax+18h]
//   0x1DAE64 jg      loc_1DB020
//   0x1DAE6A mov     r15, rax
//   0x1DAE6D mov     rax, [rax+8]
//   0x1DAE71 test    byte ptr [rax], 2
//   0x1DAE74 jz      short loc_1DAE50
//   0x1DAE76 cmp     r15, rsi
//   0x1DAE79 jz      short loc_1DAE05
//   0x1DAE7B lea     rcx, [r15+18h]
//   0x1DAE7F cmp     dl, [r15+20h]
//   0x1DAE83 jnb     loc_1DB060
//   0x1DAE89 cmp     qword ptr [r13+10h], 0
//   0x1DAE8E jnz     loc_1DB008
//   0x1DAE94 mov     rax, [r15]
//   0x1DAE97 test    al, 2
//   0x1DAE99 jz      loc_1DB030
//   0x1DAE9F mov     r15, [r15+10h]
//   0x1DAEA3 lea     rcx, [r15+18h]
//   0x1DAEA7 cmp     [r15+20h], dl
//   0x1DAEAB jnz     loc_1DAE20
//   0x1DAEB1 movsxd  rax, dword ptr [rcx+14h]
//   0x1DAEB5 add     rax, [r15+18h]
//   0x1DAEB9 cmp     r11, rax
//   0x1DAEBC jge     loc_1DAE20
//   0x1DAEC2 movsxd  rbx, dword ptr [r12+4]
//   0x1DAEC7 movsxd  rbp, dword ptr [rcx+14h]
//   0x1DAECB mov     [rsp+0F8h+var_E8], rcx
//   0x1DAED0 mov     [rsp+0F8h+var_F0], r9
//   0x1DAED5 add     rbp, [r15+18h]
//   0x1DAED9 lea     rax, [rbx+r11]
//   0x1DAEDD mov     [rsp+0F8h+var_D4], ebx
//   0x1DAEE1 mov     [rsp+0F8h+var_F8], rax
//   0x1DAEE5 test    dil, dil
//   0x1DAEE8 jz      loc_1DB0A0
//   0x1DAEEE cmp     [r15+18h], r11
//   0x1DAEF2 jnz     loc_1DAE20
//   0x1DAEF8 cmp     rax, rbp
//   0x1DAEFB jnz     loc_1DAE20
//   0x1DAF01 lea     rsi, [r15+28h]
//   0x1DAF05 mov     rdi, r12
//   0x1DAF08 call    sub_30D4D0
//   0x1DAF0D mov     r9, [rsp+0F8h+var_F0]
//   0x1DAF12 mov     rcx, [rsp+0F8h+var_E8]
//   0x1DAF17 mov     rax, [r9]
//   0x1DAF1A cmp     rax, [r15+18h]
//   0x1DAF1E jle     loc_1DB300
//   0x1DAF24 mov     rdx, cs:qword_3FFAC0
//   0x1DAF2B pxor    xmm0, xmm0
//   0x1DAF2F mov     [rsp+0F8h+var_E8], r9
//   0x1DAF34 mov     [rsp+0F8h+var_70], 0
//   0x1DAF40 mov     qword ptr [rsp+0F8h+var_88], rdx
//   0x1DAF45 movups  [rsp+0F8h+var_88+8], xmm0
//   0x1DAF4A mov     rsi, [rcx]
//   0x1DAF4D test    r14b, r14b
//   0x1DAF50 jnz     loc_1DB570
//   0x1DAF56 mov     edx, eax
//   0x1DAF58 lea     rax, [rsp+0F8h+var_88]
//   0x1DAF5D mov     rdi, r12
//   0x1DAF60 sub     edx, esi
//   0x1DAF62 mov     rsi, rax
//   0x1DAF65 mov     [rsp+0F8h+var_F0], rax
//   0x1DAF6A call    sub_30F440
//   0x1DAF6F test    al, al
//   0x1DAF71 mov     r9, [rsp+0F8h+var_E8]
//   0x1DAF76 jz      loc_1DB560
//   0x1DAF7C cmp     dword ptr [rsp+0F8h+var_88], 1
//   0x1DAF81 mov     [rsp+0F8h+var_E8], r9
//   0x1DAF86 jz      loc_1DB560
//   0x1DAF8C movdqa  xmm2, [rsp+0F8h+var_88]
//   0x1DAF92 movdqu  xmm1, xmmword ptr [r12]
//   0x1DAF98 movdqu  xmm0, xmmword ptr [r12+10h]
//   0x1DAF9F mov     rdi, [rsp+0F8h+var_F0]
//   0x1DAFA4 movups  xmmword ptr [r12], xmm2
//   0x1DAFA9 movdqa  xmm2, xmmword ptr [rsp+80h]
//   0x1DAFB2 movaps  [rsp+0F8h+var_68], xmm1
//   0x1DAFBA movups  xmmword ptr [r12+10h], xmm2
//   0x1DAFC0 movaps  [rsp+0F8h+var_58], xmm0
//   0x1DAFC8 movaps  [rsp+0F8h+var_88], xmm1
//   0x1DAFCD movaps  xmmword ptr [rsp+80h], xmm0
//   0x1DAFD5 call    sub_30D2C0
//   0x1DAFDA mov     r9, [rsp+0F8h+var_E8]
//   0x1DAFDF jmp     loc_1DB0C3
//   0x1DAFE4 align 8
//   0x1DAFE8 mov     rax, [r13+0]
//   0x1DAFEC mov     rax, [rax+5E0h]
//   0x1DAFF3 mov     rax, [rax+60h]
//   0x1DAFF7 movzx   r14d, byte ptr [rax+91h]
//   0x1DAFFF jmp     loc_1DADE4
//   0x1DB004 align 8
//   0x1DB008 cmp     [rsi+8], r15
//   0x1DB00C jz      loc_1DAE20
//   0x1DB012 mov     rax, [r15]
//   0x1DB015 test    al, 2
//   0x1DB017 jz      short loc_1DB030
//   0x1DB019 jmp     loc_1DAE9F
//   0x1DB01E align 20h
//   0x1DB020 mov     rax, [rax+10h]
//   0x1DB024 jmp     loc_1DAE71
//   0x1DB029 align 10h
//   0x1DB030 mov     rsi, [r15+8]
//   0x1DB034 test    byte ptr [rsi], 2
//   0x1DB037 jz      loc_1DB350
//   0x1DB03D and     rax, 0FFFFFFFFFFFFFFFCh
//   0x1DB041 mov     rsi, [rax]
//   0x1DB044 test    sil, 2
//   0x1DB048 jz      loc_1DB3D0
//   0x1DB04E mov     r15, rax
//   0x1DB051 jmp     loc_1DAEA3
//   0x1DB056 align 20h
//   0x1DB060 cmp     r11, [r15+18h]
//   0x1DB064 jl      loc_1DAE89
//   0x1DB06A jmp     loc_1DAEC2
//   0x1DB06F align 10h
//   0x1DB070 xor     r15d, r15d
//   0x1DB073 cmp     dl, byte ptr ds:qword_20
//   0x1DB07A jb      loc_1DAE89
//   0x1DB080 mov     ecx, 18h
//   0x1DB085 cmp     r11, ds:qword_18
//   0x1DB08D jge     loc_1DAEC2
//   0x1DB093 jmp     loc_1DAE89
//   0x1DB098 align 20h
//   0x1DB0A0 lea     rsi, [r15+28h]
//   0x1DB0A4 mov     rdi, r12
//   0x1DB0A7 call    sub_30D4D0
//   0x1DB0AC mov     r9, [rsp+0F8h+var_F0]
//   0x1DB0B1 mov     rcx, [rsp+0F8h+var_E8]
//   0x1DB0B6 mov     rax, [r9]
//   0x1DB0B9 cmp     [r15+18h], rax
//   0x1DB0BD jl      loc_1DAF24
//   0x1DB0C3 cmp     [rsp+0F8h+var_F8], rbp
//   0x1DB0C7 jle     loc_1DB292
//   0x1DB0CD mov     rax, [r15]
//   0x1DB0D0 mov     rsi, [r13+8]
//   0x1DB0D4 mov     rbx, r15
//   0x1DB0D7 test    al, 2
//   0x1DB0D9 jnz     short loc_1DB100
//   0x1DB0DB mov     rdx, [r15+10h]
//   0x1DB0DF test    byte ptr [rdx], 2
//   0x1DB0E2 jnz     loc_1DB310
//   0x1DB0E8 mov     rbx, rdx
//   0x1DB0EB mov     rdx, [rdx+8]
//   0x1DB0EF test    byte ptr [rdx], 2
//   0x1DB0F2 jz      short loc_1DB0E8
//   0x1DB0F4 nop     word ptr [rax+rax+00000000h]
//   0x1DB0FF nop
//   0x1DB100 cmp     rsi, rbx
//   0x1DB103 jz      loc_1DB280
//   0x1DB109 lea     rcx, [rbx+18h]
//   0x1DB10D movzx   edi, byte ptr [r15+20h]
//   0x1DB112 mov     [rsp+0F8h+var_E8], rcx
//   0x1DB117 cmp     [rbx+20h], dil
//   0x1DB11B jnz     loc_1DB280
//   0x1DB121 mov     rdi, [rsp+0F8h+var_F8]
//   0x1DB125 cmp     [rbx+18h], rdi
//   0x1DB129 jge     loc_1DB280
//   0x1DB12F mov     rbp, [rbx+18h]
//   0x1DB133 movsxd  rax, dword ptr [r15+2Ch]
//   0x1DB137 add     rax, [r15+18h]
//   0x1DB13B cmp     rbp, rax
//   0x1DB13E jnz     loc_1DB280
//   0x1DB144 add     ebp, [rbx+2Ch]
//   0x1DB147 movsxd  rbp, ebp
//   0x1DB14A cmp     rbp, rdi
//   0x1DB14D jle     loc_1DB220
//   0x1DB153 lea     r15, [rsp+0F8h+var_C8]
//   0x1DB158 lea     rsi, [rbx+28h]
//   0x1DB15C mov     [rsp+0F8h+var_F0], r9
//   0x1DB161 mov     rdi, r15
//   0x1DB164 call    sub_30D380
//   0x1DB169 mov     rax, cs:qword_3FFAC0
//   0x1DB170 pxor    xmm0, xmm0
//   0x1DB174 test    r14b, r14b
//   0x1DB177 mov     [rsp+0F8h+var_90], 0
//   0x1DB180 mov     r9, [rsp+0F8h+var_F0]
//   0x1DB185 mov     qword ptr [rsp+0F8h+var_A8], rax
//   0x1DB18A mov     rax, [rsp+0F8h+var_E8]
//   0x1DB18F movups  [rsp+0F8h+var_A8+8], xmm0
//   0x1DB194 mov     rax, [rax]
//   0x1DB197 jnz     loc_1DB368
//   0x1DB19D mov     edx, dword ptr [rsp+0F8h+var_F8]
//   0x1DB1A0 lea     rcx, [rsp+0F8h+var_A8]
//   0x1DB1A5 mov     rdi, r15
//   0x1DB1A8 mov     rsi, rcx
//   0x1DB1AB mov     [rsp+0F8h+var_E0], rcx
//   0x1DB1B0 sub     edx, eax
//   0x1DB1B2 call    sub_30F440
//   0x1DB1B7 test    al, al
//   0x1DB1B9 mov     r9, [rsp+0F8h+var_F0]
//   0x1DB1BE jz      short loc_1DB1E2
//   0x1DB1C0 mov     rsi, r15
//   0x1DB1C3 mov     rdi, r12
//   0x1DB1C6 mov     [rsp+0F8h+var_F0], r9
//   0x1DB1CB call    sub_30E380
//   0x1DB1D0 test    al, al
//   0x1DB1D2 mov     r9, [rsp+0F8h+var_F0]
//   0x1DB1D7 jnz     loc_1DB510
//   0x1DB1DD mov     [rsp+0F8h+var_F0], r9
//   0x1DB1E2 mov     rdi, [rsp+0F8h+var_E0]
//   0x1DB1E7 call    sub_30D2C0
//   0x1DB1EC mov     rdi, r15
//   0x1DB1EF call    sub_30D2C0
//   0x1DB1F4 mov     rsi, [rsp+0F8h+var_E8]
//   0x1DB1F9 mov     r9, [rsp+0F8h+var_F0]
//   0x1DB1FE add     rsi, 10h
//   0x1DB202 mov     rdi, r12
//   0x1DB205 mov     [rsp+0F8h+var_F0], r9
//   0x1DB20A call    sub_30E380
//   0x1DB20F mov     r9, [rsp+0F8h+var_F0]
//   0x1DB214 test    al, al
//   0x1DB216 jz      short loc_1DB26F
//   0x1DB218 mov     r15, rbx
//   0x1DB21B jmp     loc_1DB0CD
//   0x1DB220 lea     rsi, [rbx+28h]
//   0x1DB224 test    r14b, r14b
//   0x1DB227 jz      short loc_1DB202
//   0x1DB229 lea     rax, [rsp+0F8h+var_88]
//   0x1DB22E mov     [rsp+0F8h+var_F0], rax
//   0x1DB233 mov     r15, [rsp+0F8h+var_F0]
//   0x1DB238 mov     [rsp+0F8h+var_E8], r9
//   0x1DB23D mov     rdi, r15
//   0x1DB240 call    sub_30D380
//   0x1DB245 mov     rsi, r12
//   0x1DB248 mov     rdi, r15
//   0x1DB24B call    sub_30E380
//   0x1DB250 test    al, al
//   0x1DB252 mov     r9, [rsp+0F8h+var_E8]
//   0x1DB257 jnz     loc_1DB408
//   0x1DB25D mov     rdi, r15
//   0x1DB260 mov     [rsp+0F8h+var_F0], r9
//   0x1DB265 call    sub_30D2C0
//   0x1DB26A mov     r9, [rsp+0F8h+var_F0]
//   0x1DB26F mov     rax, [rsp+0F8h+var_F8]
//   0x1DB273 cmp     rbp, rax
//   0x1DB276 jge     loc_1DB65D
//   0x1DB27C nop     dword ptr [rax+00h]
//   0x1DB280 movsxd  rbp, dword ptr [r12+4]
//   0x1DB285 add     rbp, [r9]
//   0x1DB288 cmp     [rsp+0F8h+var_F8], rbp
//   0x1DB28C jg      loc_1DAE20
//   0x1DB292 mov     rax, [rsp+0F8h+var_F8]
//   0x1DB296 cmp     rbp, rax
//   0x1DB299 jle     short loc_1DB300
//   0x1DB29B mov     rax, cs:qword_3FFAC0
//   0x1DB2A2 pxor    xmm0, xmm0
//   0x1DB2A6 mov     [rsp+0F8h+var_70], 0
//   0x1DB2B2 movups  [rsp+0F8h+var_88+8], xmm0
//   0x1DB2B7 mov     qword ptr [rsp+0F8h+var_88], rax
//   0x1DB2BC test    r14b, r14b
//   0x1DB2BF jnz     loc_1DB5F0
//   0x1DB2C5 lea     rax, [rsp+0F8h+var_88]
//   0x1DB2CA mov     edx, [rsp+0F8h+var_D4]
//   0x1DB2CE mov     rdi, r12
//   0x1DB2D1 mov     rsi, rax
//   0x1DB2D4 mov     [rsp+0F8h+var_F0], rax
//   0x1DB2D9 call    sub_30F440
//   0x1DB2DE test    al, al
//   0x1DB2E0 jz      loc_1DB5E0
//   0x1DB2E6 cmp     dword ptr [r12], 1
//   0x1DB2EB jz      loc_1DB5E0
//   0x1DB2F1 mov     rdi, [rsp+0F8h+var_F0]
//   0x1DB2F6 call    sub_30D2C0
//   0x1DB2FB nop     dword ptr [rax+rax+00h]
//   0x1DB300 mov     eax, 1
//   0x1DB305 jmp     loc_1DAE22
//   0x1DB30A align 10h
//   0x1DB310 and     rax, 0FFFFFFFFFFFFFFFCh
//   0x1DB314 mov     rbx, rax
//   0x1DB317 mov     rax, [rax]
//   0x1DB31A test    al, 2
//   0x1DB31C jnz     loc_1DB100
//   0x1DB322 mov     rdi, r15
//   0x1DB325 cmp     rdi, [rbx+10h]
//   0x1DB329 jnz     loc_1DB100
//   0x1DB32F and     rax, 0FFFFFFFFFFFFFFFCh
//   0x1DB333 mov     rdi, rbx
//   0x1DB336 mov     rdx, rax
//   0x1DB339 mov     rax, [rax]
//   0x1DB33C mov     rbx, rdx
//   0x1DB33F test    al, 2
//   0x1DB341 jz      short loc_1DB325
//   0x1DB343 jmp     loc_1DB100
//   0x1DB348 align 10h
//   0x1DB350 mov     r15, rsi
//   0x1DB353 mov     rsi, [rsi+10h]
//   0x1DB357 test    byte ptr [rsi], 2
//   0x1DB35A jnz     loc_1DAEA3
//   0x1DB360 jmp     short loc_1DB350
//   0x1DB362 align 8
//   0x1DB368 mov     edx, dword ptr [rsp+0F8h+var_C8+4]
//   0x1DB36C mov     ecx, dword ptr [rsp+0F8h+var_F8]
//   0x1DB36F mov     rdi, r15
//   0x1DB372 mov     [rsp+0F8h+var_F0], r9
//   0x1DB377 sub     edx, ecx
//   0x1DB379 add     edx, eax
//   0x1DB37B lea     rax, [rsp+0F8h+var_A8]
//   0x1DB380 mov     rsi, rax
//   0x1DB383 mov     [rsp+0F8h+var_E0], rax
//   0x1DB388 call    sub_30F440
//   0x1DB38D mov     r9, [rsp+0F8h+var_F0]
//   0x1DB392 test    al, al
//   0x1DB394 mov     [rsp+0F8h+var_D0], r9
//   0x1DB399 jnz     loc_1DB460
//   0x1DB39F mov     rdi, [rsp+0F8h+var_E0]
//   0x1DB3A4 call    sub_30D2C0
//   0x1DB3A9 mov     rdi, r15
//   0x1DB3AC call    sub_30D2C0
//   0x1DB3B1 mov     rsi, [rsp+0F8h+var_E8]
//   0x1DB3B6 lea     rax, [rsp+0F8h+var_88]
//   0x1DB3BB mov     r9, [rsp+0F8h+var_D0]
//   0x1DB3C0 mov     [rsp+0F8h+var_F0], rax
//   0x1DB3C5 add     rsi, 10h
//   0x1DB3C9 jmp     loc_1DB233
//   0x1DB3CE align 10h
//   0x1DB3D0 cmp     [rax+8], r15
//   0x1DB3D4 jnz     loc_1DB04E
//   0x1DB3DA and     rsi, 0FFFFFFFFFFFFFFFCh
//   0x1DB3DE mov     r15, rsi
//   0x1DB3E1 mov     rsi, [rsi]
//   0x1DB3E4 test    sil, 2
//   0x1DB3E8 jnz     loc_1DAEA3
//   0x1DB3EE mov     rbx, rax
//   0x1DB3F1 mov     rax, r15
//   0x1DB3F4 mov     r15, rbx
//   0x1DB3F7 cmp     [rax+8], r15
//   0x1DB3FB jz      short loc_1DB3DA
//   0x1DB3FD jmp     loc_1DB04E
//   0x1DB402 align 8
//   0x1DB408 mov     rax, [rsp+0F8h+var_F0]
//   0x1DB40D movdqu  xmm1, xmmword ptr [r12]
//   0x1DB413 mov     [rsp+0F8h+var_E8], r9
//   0x1DB418 movdqu  xmm0, xmmword ptr [r12+10h]
//   0x1DB41F movdqa  xmm2, xmmword ptr [rax]
//   0x1DB423 mov     rdi, rax
//   0x1DB426 movaps  xmmword ptr [rax], xmm1
//   0x1DB429 movaps  [rsp+0F8h+var_68], xmm1
//   0x1DB431 movups  xmmword ptr [r12], xmm2
//   0x1DB436 movdqa  xmm2, xmmword ptr [rax+10h]
//   0x1DB43B movaps  xmmword ptr [rax+10h], xmm0
//   0x1DB43F movups  xmmword ptr [r12+10h], xmm2
//   0x1DB445 movaps  [rsp+0F8h+var_58], xmm0
//   0x1DB44D call    sub_30D2C0
//   0x1DB452 mov     r9, [rsp+0F8h+var_E8]
//   0x1DB457 jmp     loc_1DB218
//   0x1DB45C align 20h
//   0x1DB460 movdqa  xmm2, [rsp+0F8h+var_A8]
//   0x1DB466 movdqa  xmm1, [rsp+0F8h+var_C8]
//   0x1DB46C lea     rax, [rsp+0F8h+var_88]
//   0x1DB471 mov     rsi, r15
//   0x1DB474 movdqa  xmm0, [rsp+0F8h+var_B8]
//   0x1DB47A mov     rdi, rax
//   0x1DB47D mov     [rsp+0F8h+var_F0], rax
//   0x1DB482 movaps  [rsp+0F8h+var_C8], xmm2
//   0x1DB487 movdqa  xmm2, xmmword ptr [rsp+60h]
//   0x1DB48D movaps  [rsp+0F8h+var_68], xmm1
//   0x1DB495 movaps  [rsp+0F8h+var_58], xmm0
//   0x1DB49D movaps  [rsp+0F8h+var_B8], xmm2
//   0x1DB4A2 movaps  [rsp+0F8h+var_A8], xmm1
//   0x1DB4A7 movaps  xmmword ptr [rsp+60h], xmm0
//   0x1DB4AC call    sub_30D380
//   0x1DB4B1 mov     rdi, [rsp+0F8h+var_F0]
//   0x1DB4B6 mov     rsi, r12
//   0x1DB4B9 call    sub_30E380
//   0x1DB4BE test    al, al
//   0x1DB4C0 jz      short loc_1DB530
//   0x1DB4C2 movdqa  xmm2, [rsp+0F8h+var_88]
//   0x1DB4C8 movdqu  xmm1, xmmword ptr [r12]
//   0x1DB4CE movdqu  xmm0, xmmword ptr [r12+10h]
//   0x1DB4D5 mov     rdi, [rsp+0F8h+var_F0]
//   0x1DB4DA movups  xmmword ptr [r12], xmm2
//   0x1DB4DF movdqa  xmm2, xmmword ptr [rsp+80h]
//   0x1DB4E8 movaps  [rsp+0F8h+var_68], xmm1
//   0x1DB4F0 movups  xmmword ptr [r12+10h], xmm2
//   0x1DB4F6 movaps  [rsp+0F8h+var_58], xmm0
//   0x1DB4FE movaps  [rsp+0F8h+var_88], xmm1
//   0x1DB503 movaps  xmmword ptr [rsp+80h], xmm0
//   0x1DB50B call    sub_30D2C0
//   0x1DB510 mov     rdi, [rsp+0F8h+var_E0]
//   0x1DB515 call    sub_30D2C0
//   0x1DB51A mov     rdi, r15
//   0x1DB51D call    sub_30D2C0
//   0x1DB522 jmp     loc_1DB300
//   0x1DB527 align 10h
//   0x1DB530 mov     rdi, [rsp+0F8h+var_F0]
//   0x1DB535 call    sub_30D2C0
//   0x1DB53A mov     rdi, [rsp+0F8h+var_E0]
//   0x1DB53F call    sub_30D2C0
//   0x1DB544 mov     rdi, r15
//   0x1DB547 call    sub_30D2C0
//   0x1DB54C mov     rsi, [rsp+0F8h+var_E8]
//   0x1DB551 mov     r9, [rsp+0F8h+var_D0]
//   0x1DB556 add     rsi, 10h
//   0x1DB55A jmp     loc_1DB233
//   0x1DB55F align 20h
//   0x1DB560 mov     rdi, [rsp+0F8h+var_F0]
//   0x1DB565 call    sub_30D2C0
//   0x1DB56A jmp     loc_1DAE20
//   0x1DB56F align 10h
//   0x1DB570 mov     edx, esi
//   0x1DB572 mov     rdi, r12
//   0x1DB575 sub     edx, eax
//   0x1DB577 lea     rax, [rsp+0F8h+var_88]
//   0x1DB57C add     edx, [r12+4]
//   0x1DB581 mov     rsi, rax
//   0x1DB584 mov     [rsp+0F8h+var_F0], rax
//   0x1DB589 call    sub_30F440
//   0x1DB58E test    al, al
//   0x1DB590 jz      short loc_1DB560
//   0x1DB592 movdqa  xmm2, [rsp+0F8h+var_88]
//   0x1DB598 movdqu  xmm1, xmmword ptr [r12]
//   0x1DB59E movdqu  xmm0, xmmword ptr [r12+10h]
//   0x1DB5A5 mov     r9, [rsp+0F8h+var_E8]
//   0x1DB5AA movups  xmmword ptr [r12], xmm2
//   0x1DB5AF movdqa  xmm2, xmmword ptr [rsp+80h]
//   0x1DB5B8 movaps  [rsp+0F8h+var_68], xmm1
//   0x1DB5C0 movaps  [rsp+0F8h+var_58], xmm0
//   0x1DB5C8 movups  xmmword ptr [r12+10h], xmm2
//   0x1DB5CE movaps  [rsp+0F8h+var_88], xmm1
//   0x1DB5D3 movaps  xmmword ptr [rsp+80h], xmm0
//   0x1DB5DB jmp     loc_1DAF7C
//   0x1DB5E0 mov     rdi, [rsp+0F8h+var_F0]
//   0x1DB5E5 call    sub_30D2C0
//   0x1DB5EA jmp     loc_1DAE20
//   0x1DB5EF align 10h
//   0x1DB5F0 mov     eax, [rsp+0F8h+var_D4]
//   0x1DB5F4 mov     edx, [r12+4]
//   0x1DB5F9 mov     rdi, r12
//   0x1DB5FC sub     edx, eax
//   0x1DB5FE lea     rax, [rsp+0F8h+var_88]
//   0x1DB603 mov     rsi, rax
//   0x1DB606 mov     [rsp+0F8h+var_F0], rax
//   0x1DB60B call    sub_30F440
//   0x1DB610 test    al, al
//   0x1DB612 jz      short loc_1DB5E0
//   0x1DB614 movdqa  xmm2, [rsp+0F8h+var_88]
//   0x1DB61A movdqu  xmm1, xmmword ptr [r12]
//   0x1DB620 movdqu  xmm0, xmmword ptr [r12+10h]
//   0x1DB627 movups  xmmword ptr [r12], xmm2
//   0x1DB62C movdqa  xmm2, xmmword ptr [rsp+80h]
//   0x1DB635 movaps  [rsp+0F8h+var_68], xmm1
//   0x1DB63D movaps  [rsp+0F8h+var_58], xmm0
//   0x1DB645 movups  xmmword ptr [r12+10h], xmm2
//   0x1DB64B movaps  [rsp+0F8h+var_88], xmm1
//   0x1DB650 movaps  xmmword ptr [rsp+80h], xmm0
//   0x1DB658 jmp     loc_1DB2E6
//   0x1DB65D xor     eax, eax
//   0x1DB65F pxor    xmm0, xmm0
//   0x1DB663 xor     edx, edx
//   0x1DB665 mov     rdi, r12
//   0x1DB668 mov     dword ptr [rsp+0F8h+var_88], eax
//   0x1DB66C mov     eax, [rsp+0F8h+var_D4]
//   0x1DB670 mov     [rsp+0F8h+var_70], rdx
//   0x1DB678 mov     dword ptr [rsp+0F8h+var_88+4], eax
//   0x1DB67C lea     rax, [rsp+0F8h+var_88]
//   0x1DB681 mov     rsi, rax
//   0x1DB684 mov     [rsp+0F8h+var_F0], rax
//   0x1DB689 mov     rbx, rax
//   0x1DB68C movups  [rsp+0F8h+var_88+8], xmm0
//   0x1DB691 call    sub_30D4D0
//   0x1DB696 mov     rdi, rbx
//   0x1DB699 call    sub_30D2C0
//   0x1DB69E mov     rdi, r12
//   0x1DB6A1 call    sub_30D2C0
//   0x1DB6A6 mov     dword ptr [r12], 8
//   0x1DB6AE jmp     loc_1DB300
//   0x1DB6B3 call    ___stack_chk_fail
//   0x1DB6B8 mov     rbx, rax
//   0x1DB6BB jmp     loc_4120A
//   0x1DB6C0 mov     rbx, rax
//   0x1DB6C3 jmp     loc_4122F
//   0x1DB6C8 mov     rbx, rax
//   0x1DB6CB jmp     loc_41268
//   0x1DB6D0 mov     rbx, rax
//   0x1DB6D3 jmp     loc_41295
//   0x1DB6D8 mov     rbx, rax
//   0x1DB6DB jmp     loc_4125E
//   0x1DB6E0 mov     rbx, rax
//   0x1DB6E3 jmp     loc_412BF
// ============================================================

void sub_1DADA0(/* signature unknown */)
{
    // see disassembly above
}

