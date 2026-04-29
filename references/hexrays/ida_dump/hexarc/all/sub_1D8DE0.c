// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x1D8DE0
// Name:           sub_1D8DE0
// Function size:  2376 bytes (529 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x1D8DE0 push    r15
//   0x1D8DE2 push    r14
//   0x1D8DE4 push    r13
//   0x1D8DE6 push    r12
//   0x1D8DE8 push    rbp
//   0x1D8DE9 push    rbx
//   0x1D8DEA sub     rsp, 0C8h
//   0x1D8DF1 mov     r13, fs:28h
//   0x1D8DFA mov     [rsp+0F8h+var_40], r13
//   0x1D8E02 mov     r13, rdi
//   0x1D8E05 movzx   r14d, byte ptr [r13+18h]
//   0x1D8E0A test    r14b, r14b
//   0x1D8E0D jnz     short loc_1D8E60
//   0x1D8E0F mov     r9, rdx
//   0x1D8E12 movzx   edx, byte ptr [rdx+8]
//   0x1D8E16 mov     r12, rsi
//   0x1D8E19 mov     edi, ecx
//   0x1D8E1B cmp     dl, 5
//   0x1D8E1E jz      loc_1D9028
//   0x1D8E24 mov     rsi, [r13+8]
//   0x1D8E28 test    rsi, rsi
//   0x1D8E2B jz      short loc_1D8E60
//   0x1D8E2D mov     rax, [rsi]
//   0x1D8E30 mov     r11, [r9]
//   0x1D8E33 and     rax, 0FFFFFFFFFFFFFFFCh
//   0x1D8E37 jz      loc_1D90B0
//   0x1D8E3D mov     r15, rsi
//   0x1D8E40 test    byte ptr [rax], 2
//   0x1D8E43 jz      short loc_1D8E90
//   0x1D8E45 cmp     qword ptr [r13+10h], 0
//   0x1D8E4A mov     r15, rsi
//   0x1D8E4D jnz     loc_1D9048
//   0x1D8E53 nop     word ptr [rax+rax+00000000h]
//   0x1D8E5E xchg    ax, ax
//   0x1D8E60 xor     eax, eax
//   0x1D8E62 mov     rdx, [rsp+0F8h+var_40]
//   0x1D8E6A sub     rdx, fs:28h
//   0x1D8E73 jnz     loc_1D96F3
//   0x1D8E79 add     rsp, 0C8h
//   0x1D8E80 pop     rbx
//   0x1D8E81 pop     rbp
//   0x1D8E82 pop     r12
//   0x1D8E84 pop     r13
//   0x1D8E86 pop     r14
//   0x1D8E88 pop     r15
//   0x1D8E8A retn
//   0x1D8E8B align 10h
//   0x1D8E90 movzx   ebx, byte ptr [rax+20h]
//   0x1D8E94 cmp     bl, dl
//   0x1D8E96 jb      loc_1D9060
//   0x1D8E9C cmp     dl, bl
//   0x1D8E9E jb      short loc_1D8EAA
//   0x1D8EA0 cmp     r11, [rax+18h]
//   0x1D8EA4 jg      loc_1D9060
//   0x1D8EAA mov     r15, rax
//   0x1D8EAD mov     rax, [rax+8]
//   0x1D8EB1 test    byte ptr [rax], 2
//   0x1D8EB4 jz      short loc_1D8E90
//   0x1D8EB6 cmp     r15, rsi
//   0x1D8EB9 jz      short loc_1D8E45
//   0x1D8EBB lea     rcx, [r15+18h]
//   0x1D8EBF cmp     dl, [r15+20h]
//   0x1D8EC3 jnb     loc_1D90A0
//   0x1D8EC9 cmp     qword ptr [r13+10h], 0
//   0x1D8ECE jnz     loc_1D9048
//   0x1D8ED4 mov     rax, [r15]
//   0x1D8ED7 test    al, 2
//   0x1D8ED9 jz      loc_1D9070
//   0x1D8EDF mov     r15, [r15+10h]
//   0x1D8EE3 lea     rcx, [r15+18h]
//   0x1D8EE7 cmp     [r15+20h], dl
//   0x1D8EEB jnz     loc_1D8E60
//   0x1D8EF1 movsxd  rax, dword ptr [rcx+14h]
//   0x1D8EF5 add     rax, [r15+18h]
//   0x1D8EF9 cmp     r11, rax
//   0x1D8EFC jge     loc_1D8E60
//   0x1D8F02 movsxd  rbx, dword ptr [r12+4]
//   0x1D8F07 movsxd  rbp, dword ptr [rcx+14h]
//   0x1D8F0B mov     [rsp+0F8h+var_E8], rcx
//   0x1D8F10 mov     [rsp+0F8h+var_F0], r9
//   0x1D8F15 add     rbp, [r15+18h]
//   0x1D8F19 lea     rax, [rbx+r11]
//   0x1D8F1D mov     [rsp+0F8h+var_D4], ebx
//   0x1D8F21 mov     [rsp+0F8h+var_F8], rax
//   0x1D8F25 test    dil, dil
//   0x1D8F28 jz      loc_1D90E0
//   0x1D8F2E cmp     [r15+18h], r11
//   0x1D8F32 jnz     loc_1D8E60
//   0x1D8F38 cmp     rax, rbp
//   0x1D8F3B jnz     loc_1D8E60
//   0x1D8F41 lea     rsi, [r15+28h]
//   0x1D8F45 mov     rdi, r12
//   0x1D8F48 call    sub_30BA10
//   0x1D8F4D mov     r9, [rsp+0F8h+var_F0]
//   0x1D8F52 mov     rcx, [rsp+0F8h+var_E8]
//   0x1D8F57 mov     rax, [r9]
//   0x1D8F5A cmp     rax, [r15+18h]
//   0x1D8F5E jle     loc_1D9340
//   0x1D8F64 mov     rdx, cs:qword_3F9A58
//   0x1D8F6B pxor    xmm0, xmm0
//   0x1D8F6F mov     [rsp+0F8h+var_E8], r9
//   0x1D8F74 mov     [rsp+0F8h+var_70], 0
//   0x1D8F80 mov     qword ptr [rsp+0F8h+var_88], rdx
//   0x1D8F85 movups  [rsp+0F8h+var_88+8], xmm0
//   0x1D8F8A mov     rsi, [rcx]
//   0x1D8F8D test    r14b, r14b
//   0x1D8F90 jnz     loc_1D95B0
//   0x1D8F96 mov     edx, eax
//   0x1D8F98 lea     rax, [rsp+0F8h+var_88]
//   0x1D8F9D mov     rdi, r12
//   0x1D8FA0 sub     edx, esi
//   0x1D8FA2 mov     rsi, rax
//   0x1D8FA5 mov     [rsp+0F8h+var_F0], rax
//   0x1D8FAA call    sub_30D980
//   0x1D8FAF test    al, al
//   0x1D8FB1 mov     r9, [rsp+0F8h+var_E8]
//   0x1D8FB6 jz      loc_1D95A0
//   0x1D8FBC cmp     dword ptr [rsp+0F8h+var_88], 1
//   0x1D8FC1 mov     [rsp+0F8h+var_E8], r9
//   0x1D8FC6 jz      loc_1D95A0
//   0x1D8FCC movdqa  xmm2, [rsp+0F8h+var_88]
//   0x1D8FD2 movdqu  xmm1, xmmword ptr [r12]
//   0x1D8FD8 movdqu  xmm0, xmmword ptr [r12+10h]
//   0x1D8FDF mov     rdi, [rsp+0F8h+var_F0]
//   0x1D8FE4 movups  xmmword ptr [r12], xmm2
//   0x1D8FE9 movdqa  xmm2, xmmword ptr [rsp+80h]
//   0x1D8FF2 movaps  [rsp+0F8h+var_68], xmm1
//   0x1D8FFA movups  xmmword ptr [r12+10h], xmm2
//   0x1D9000 movaps  [rsp+0F8h+var_58], xmm0
//   0x1D9008 movaps  [rsp+0F8h+var_88], xmm1
//   0x1D900D movaps  xmmword ptr [rsp+80h], xmm0
//   0x1D9015 call    sub_30B800
//   0x1D901A mov     r9, [rsp+0F8h+var_E8]
//   0x1D901F jmp     loc_1D9103
//   0x1D9024 align 8
//   0x1D9028 mov     rax, [r13+0]
//   0x1D902C mov     rax, [rax+5E0h]
//   0x1D9033 mov     rax, [rax+60h]
//   0x1D9037 movzx   r14d, byte ptr [rax+91h]
//   0x1D903F jmp     loc_1D8E24
//   0x1D9044 align 8
//   0x1D9048 cmp     [rsi+8], r15
//   0x1D904C jz      loc_1D8E60
//   0x1D9052 mov     rax, [r15]
//   0x1D9055 test    al, 2
//   0x1D9057 jz      short loc_1D9070
//   0x1D9059 jmp     loc_1D8EDF
//   0x1D905E align 20h
//   0x1D9060 mov     rax, [rax+10h]
//   0x1D9064 jmp     loc_1D8EB1
//   0x1D9069 align 10h
//   0x1D9070 mov     rsi, [r15+8]
//   0x1D9074 test    byte ptr [rsi], 2
//   0x1D9077 jz      loc_1D9390
//   0x1D907D and     rax, 0FFFFFFFFFFFFFFFCh
//   0x1D9081 mov     rsi, [rax]
//   0x1D9084 test    sil, 2
//   0x1D9088 jz      loc_1D9410
//   0x1D908E mov     r15, rax
//   0x1D9091 jmp     loc_1D8EE3
//   0x1D9096 align 20h
//   0x1D90A0 cmp     r11, [r15+18h]
//   0x1D90A4 jl      loc_1D8EC9
//   0x1D90AA jmp     loc_1D8F02
//   0x1D90AF align 10h
//   0x1D90B0 xor     r15d, r15d
//   0x1D90B3 cmp     dl, byte ptr ds:qword_20
//   0x1D90BA jb      loc_1D8EC9
//   0x1D90C0 mov     ecx, 18h
//   0x1D90C5 cmp     r11, ds:qword_18
//   0x1D90CD jge     loc_1D8F02
//   0x1D90D3 jmp     loc_1D8EC9
//   0x1D90D8 align 20h
//   0x1D90E0 lea     rsi, [r15+28h]
//   0x1D90E4 mov     rdi, r12
//   0x1D90E7 call    sub_30BA10
//   0x1D90EC mov     r9, [rsp+0F8h+var_F0]
//   0x1D90F1 mov     rcx, [rsp+0F8h+var_E8]
//   0x1D90F6 mov     rax, [r9]
//   0x1D90F9 cmp     [r15+18h], rax
//   0x1D90FD jl      loc_1D8F64
//   0x1D9103 cmp     [rsp+0F8h+var_F8], rbp
//   0x1D9107 jle     loc_1D92D2
//   0x1D910D mov     rax, [r15]
//   0x1D9110 mov     rsi, [r13+8]
//   0x1D9114 mov     rbx, r15
//   0x1D9117 test    al, 2
//   0x1D9119 jnz     short loc_1D9140
//   0x1D911B mov     rdx, [r15+10h]
//   0x1D911F test    byte ptr [rdx], 2
//   0x1D9122 jnz     loc_1D9350
//   0x1D9128 mov     rbx, rdx
//   0x1D912B mov     rdx, [rdx+8]
//   0x1D912F test    byte ptr [rdx], 2
//   0x1D9132 jz      short loc_1D9128
//   0x1D9134 nop     word ptr [rax+rax+00000000h]
//   0x1D913F nop
//   0x1D9140 cmp     rsi, rbx
//   0x1D9143 jz      loc_1D92C0
//   0x1D9149 lea     rcx, [rbx+18h]
//   0x1D914D movzx   edi, byte ptr [r15+20h]
//   0x1D9152 mov     [rsp+0F8h+var_E8], rcx
//   0x1D9157 cmp     [rbx+20h], dil
//   0x1D915B jnz     loc_1D92C0
//   0x1D9161 mov     rdi, [rsp+0F8h+var_F8]
//   0x1D9165 cmp     [rbx+18h], rdi
//   0x1D9169 jge     loc_1D92C0
//   0x1D916F mov     rbp, [rbx+18h]
//   0x1D9173 movsxd  rax, dword ptr [r15+2Ch]
//   0x1D9177 add     rax, [r15+18h]
//   0x1D917B cmp     rbp, rax
//   0x1D917E jnz     loc_1D92C0
//   0x1D9184 add     ebp, [rbx+2Ch]
//   0x1D9187 movsxd  rbp, ebp
//   0x1D918A cmp     rbp, rdi
//   0x1D918D jle     loc_1D9260
//   0x1D9193 lea     r15, [rsp+0F8h+var_C8]
//   0x1D9198 lea     rsi, [rbx+28h]
//   0x1D919C mov     [rsp+0F8h+var_F0], r9
//   0x1D91A1 mov     rdi, r15
//   0x1D91A4 call    sub_30B8C0
//   0x1D91A9 mov     rax, cs:qword_3F9A58
//   0x1D91B0 pxor    xmm0, xmm0
//   0x1D91B4 test    r14b, r14b
//   0x1D91B7 mov     [rsp+0F8h+var_90], 0
//   0x1D91C0 mov     r9, [rsp+0F8h+var_F0]
//   0x1D91C5 mov     qword ptr [rsp+0F8h+var_A8], rax
//   0x1D91CA mov     rax, [rsp+0F8h+var_E8]
//   0x1D91CF movups  [rsp+0F8h+var_A8+8], xmm0
//   0x1D91D4 mov     rax, [rax]
//   0x1D91D7 jnz     loc_1D93A8
//   0x1D91DD mov     edx, dword ptr [rsp+0F8h+var_F8]
//   0x1D91E0 lea     rcx, [rsp+0F8h+var_A8]
//   0x1D91E5 mov     rdi, r15
//   0x1D91E8 mov     rsi, rcx
//   0x1D91EB mov     [rsp+0F8h+var_E0], rcx
//   0x1D91F0 sub     edx, eax
//   0x1D91F2 call    sub_30D980
//   0x1D91F7 test    al, al
//   0x1D91F9 mov     r9, [rsp+0F8h+var_F0]
//   0x1D91FE jz      short loc_1D9222
//   0x1D9200 mov     rsi, r15
//   0x1D9203 mov     rdi, r12
//   0x1D9206 mov     [rsp+0F8h+var_F0], r9
//   0x1D920B call    sub_30C8C0
//   0x1D9210 test    al, al
//   0x1D9212 mov     r9, [rsp+0F8h+var_F0]
//   0x1D9217 jnz     loc_1D9550
//   0x1D921D mov     [rsp+0F8h+var_F0], r9
//   0x1D9222 mov     rdi, [rsp+0F8h+var_E0]
//   0x1D9227 call    sub_30B800
//   0x1D922C mov     rdi, r15
//   0x1D922F call    sub_30B800
//   0x1D9234 mov     rsi, [rsp+0F8h+var_E8]
//   0x1D9239 mov     r9, [rsp+0F8h+var_F0]
//   0x1D923E add     rsi, 10h
//   0x1D9242 mov     rdi, r12
//   0x1D9245 mov     [rsp+0F8h+var_F0], r9
//   0x1D924A call    sub_30C8C0
//   0x1D924F mov     r9, [rsp+0F8h+var_F0]
//   0x1D9254 test    al, al
//   0x1D9256 jz      short loc_1D92AF
//   0x1D9258 mov     r15, rbx
//   0x1D925B jmp     loc_1D910D
//   0x1D9260 lea     rsi, [rbx+28h]
//   0x1D9264 test    r14b, r14b
//   0x1D9267 jz      short loc_1D9242
//   0x1D9269 lea     rax, [rsp+0F8h+var_88]
//   0x1D926E mov     [rsp+0F8h+var_F0], rax
//   0x1D9273 mov     r15, [rsp+0F8h+var_F0]
//   0x1D9278 mov     [rsp+0F8h+var_E8], r9
//   0x1D927D mov     rdi, r15
//   0x1D9280 call    sub_30B8C0
//   0x1D9285 mov     rsi, r12
//   0x1D9288 mov     rdi, r15
//   0x1D928B call    sub_30C8C0
//   0x1D9290 test    al, al
//   0x1D9292 mov     r9, [rsp+0F8h+var_E8]
//   0x1D9297 jnz     loc_1D9448
//   0x1D929D mov     rdi, r15
//   0x1D92A0 mov     [rsp+0F8h+var_F0], r9
//   0x1D92A5 call    sub_30B800
//   0x1D92AA mov     r9, [rsp+0F8h+var_F0]
//   0x1D92AF mov     rax, [rsp+0F8h+var_F8]
//   0x1D92B3 cmp     rbp, rax
//   0x1D92B6 jge     loc_1D969D
//   0x1D92BC nop     dword ptr [rax+00h]
//   0x1D92C0 movsxd  rbp, dword ptr [r12+4]
//   0x1D92C5 add     rbp, [r9]
//   0x1D92C8 cmp     [rsp+0F8h+var_F8], rbp
//   0x1D92CC jg      loc_1D8E60
//   0x1D92D2 mov     rax, [rsp+0F8h+var_F8]
//   0x1D92D6 cmp     rbp, rax
//   0x1D92D9 jle     short loc_1D9340
//   0x1D92DB mov     rax, cs:qword_3F9A58
//   0x1D92E2 pxor    xmm0, xmm0
//   0x1D92E6 mov     [rsp+0F8h+var_70], 0
//   0x1D92F2 movups  [rsp+0F8h+var_88+8], xmm0
//   0x1D92F7 mov     qword ptr [rsp+0F8h+var_88], rax
//   0x1D92FC test    r14b, r14b
//   0x1D92FF jnz     loc_1D9630
//   0x1D9305 lea     rax, [rsp+0F8h+var_88]
//   0x1D930A mov     edx, [rsp+0F8h+var_D4]
//   0x1D930E mov     rdi, r12
//   0x1D9311 mov     rsi, rax
//   0x1D9314 mov     [rsp+0F8h+var_F0], rax
//   0x1D9319 call    sub_30D980
//   0x1D931E test    al, al
//   0x1D9320 jz      loc_1D9620
//   0x1D9326 cmp     dword ptr [r12], 1
//   0x1D932B jz      loc_1D9620
//   0x1D9331 mov     rdi, [rsp+0F8h+var_F0]
//   0x1D9336 call    sub_30B800
//   0x1D933B nop     dword ptr [rax+rax+00h]
//   0x1D9340 mov     eax, 1
//   0x1D9345 jmp     loc_1D8E62
//   0x1D934A align 10h
//   0x1D9350 and     rax, 0FFFFFFFFFFFFFFFCh
//   0x1D9354 mov     rbx, rax
//   0x1D9357 mov     rax, [rax]
//   0x1D935A test    al, 2
//   0x1D935C jnz     loc_1D9140
//   0x1D9362 mov     rdi, r15
//   0x1D9365 cmp     rdi, [rbx+10h]
//   0x1D9369 jnz     loc_1D9140
//   0x1D936F and     rax, 0FFFFFFFFFFFFFFFCh
//   0x1D9373 mov     rdi, rbx
//   0x1D9376 mov     rdx, rax
//   0x1D9379 mov     rax, [rax]
//   0x1D937C mov     rbx, rdx
//   0x1D937F test    al, 2
//   0x1D9381 jz      short loc_1D9365
//   0x1D9383 jmp     loc_1D9140
//   0x1D9388 align 10h
//   0x1D9390 mov     r15, rsi
//   0x1D9393 mov     rsi, [rsi+10h]
//   0x1D9397 test    byte ptr [rsi], 2
//   0x1D939A jnz     loc_1D8EE3
//   0x1D93A0 jmp     short loc_1D9390
//   0x1D93A2 align 8
//   0x1D93A8 mov     edx, dword ptr [rsp+0F8h+var_C8+4]
//   0x1D93AC mov     ecx, dword ptr [rsp+0F8h+var_F8]
//   0x1D93AF mov     rdi, r15
//   0x1D93B2 mov     [rsp+0F8h+var_F0], r9
//   0x1D93B7 sub     edx, ecx
//   0x1D93B9 add     edx, eax
//   0x1D93BB lea     rax, [rsp+0F8h+var_A8]
//   0x1D93C0 mov     rsi, rax
//   0x1D93C3 mov     [rsp+0F8h+var_E0], rax
//   0x1D93C8 call    sub_30D980
//   0x1D93CD mov     r9, [rsp+0F8h+var_F0]
//   0x1D93D2 test    al, al
//   0x1D93D4 mov     [rsp+0F8h+var_D0], r9
//   0x1D93D9 jnz     loc_1D94A0
//   0x1D93DF mov     rdi, [rsp+0F8h+var_E0]
//   0x1D93E4 call    sub_30B800
//   0x1D93E9 mov     rdi, r15
//   0x1D93EC call    sub_30B800
//   0x1D93F1 mov     rsi, [rsp+0F8h+var_E8]
//   0x1D93F6 lea     rax, [rsp+0F8h+var_88]
//   0x1D93FB mov     r9, [rsp+0F8h+var_D0]
//   0x1D9400 mov     [rsp+0F8h+var_F0], rax
//   0x1D9405 add     rsi, 10h
//   0x1D9409 jmp     loc_1D9273
//   0x1D940E align 10h
//   0x1D9410 cmp     [rax+8], r15
//   0x1D9414 jnz     loc_1D908E
//   0x1D941A and     rsi, 0FFFFFFFFFFFFFFFCh
//   0x1D941E mov     r15, rsi
//   0x1D9421 mov     rsi, [rsi]
//   0x1D9424 test    sil, 2
//   0x1D9428 jnz     loc_1D8EE3
//   0x1D942E mov     rbx, rax
//   0x1D9431 mov     rax, r15
//   0x1D9434 mov     r15, rbx
//   0x1D9437 cmp     [rax+8], r15
//   0x1D943B jz      short loc_1D941A
//   0x1D943D jmp     loc_1D908E
//   0x1D9442 align 8
//   0x1D9448 mov     rax, [rsp+0F8h+var_F0]
//   0x1D944D movdqu  xmm1, xmmword ptr [r12]
//   0x1D9453 mov     [rsp+0F8h+var_E8], r9
//   0x1D9458 movdqu  xmm0, xmmword ptr [r12+10h]
//   0x1D945F movdqa  xmm2, xmmword ptr [rax]
//   0x1D9463 mov     rdi, rax
//   0x1D9466 movaps  xmmword ptr [rax], xmm1
//   0x1D9469 movaps  [rsp+0F8h+var_68], xmm1
//   0x1D9471 movups  xmmword ptr [r12], xmm2
//   0x1D9476 movdqa  xmm2, xmmword ptr [rax+10h]
//   0x1D947B movaps  xmmword ptr [rax+10h], xmm0
//   0x1D947F movups  xmmword ptr [r12+10h], xmm2
//   0x1D9485 movaps  [rsp+0F8h+var_58], xmm0
//   0x1D948D call    sub_30B800
//   0x1D9492 mov     r9, [rsp+0F8h+var_E8]
//   0x1D9497 jmp     loc_1D9258
//   0x1D949C align 20h
//   0x1D94A0 movdqa  xmm2, [rsp+0F8h+var_A8]
//   0x1D94A6 movdqa  xmm1, [rsp+0F8h+var_C8]
//   0x1D94AC lea     rax, [rsp+0F8h+var_88]
//   0x1D94B1 mov     rsi, r15
//   0x1D94B4 movdqa  xmm0, [rsp+0F8h+var_B8]
//   0x1D94BA mov     rdi, rax
//   0x1D94BD mov     [rsp+0F8h+var_F0], rax
//   0x1D94C2 movaps  [rsp+0F8h+var_C8], xmm2
//   0x1D94C7 movdqa  xmm2, xmmword ptr [rsp+60h]
//   0x1D94CD movaps  [rsp+0F8h+var_68], xmm1
//   0x1D94D5 movaps  [rsp+0F8h+var_58], xmm0
//   0x1D94DD movaps  [rsp+0F8h+var_B8], xmm2
//   0x1D94E2 movaps  [rsp+0F8h+var_A8], xmm1
//   0x1D94E7 movaps  xmmword ptr [rsp+60h], xmm0
//   0x1D94EC call    sub_30B8C0
//   0x1D94F1 mov     rdi, [rsp+0F8h+var_F0]
//   0x1D94F6 mov     rsi, r12
//   0x1D94F9 call    sub_30C8C0
//   0x1D94FE test    al, al
//   0x1D9500 jz      short loc_1D9570
//   0x1D9502 movdqa  xmm2, [rsp+0F8h+var_88]
//   0x1D9508 movdqu  xmm1, xmmword ptr [r12]
//   0x1D950E movdqu  xmm0, xmmword ptr [r12+10h]
//   0x1D9515 mov     rdi, [rsp+0F8h+var_F0]
//   0x1D951A movups  xmmword ptr [r12], xmm2
//   0x1D951F movdqa  xmm2, xmmword ptr [rsp+80h]
//   0x1D9528 movaps  [rsp+0F8h+var_68], xmm1
//   0x1D9530 movups  xmmword ptr [r12+10h], xmm2
//   0x1D9536 movaps  [rsp+0F8h+var_58], xmm0
//   0x1D953E movaps  [rsp+0F8h+var_88], xmm1
//   0x1D9543 movaps  xmmword ptr [rsp+80h], xmm0
//   0x1D954B call    sub_30B800
//   0x1D9550 mov     rdi, [rsp+0F8h+var_E0]
//   0x1D9555 call    sub_30B800
//   0x1D955A mov     rdi, r15
//   0x1D955D call    sub_30B800
//   0x1D9562 jmp     loc_1D9340
//   0x1D9567 align 10h
//   0x1D9570 mov     rdi, [rsp+0F8h+var_F0]
//   0x1D9575 call    sub_30B800
//   0x1D957A mov     rdi, [rsp+0F8h+var_E0]
//   0x1D957F call    sub_30B800
//   0x1D9584 mov     rdi, r15
//   0x1D9587 call    sub_30B800
//   0x1D958C mov     rsi, [rsp+0F8h+var_E8]
//   0x1D9591 mov     r9, [rsp+0F8h+var_D0]
//   0x1D9596 add     rsi, 10h
//   0x1D959A jmp     loc_1D9273
//   0x1D959F align 20h
//   0x1D95A0 mov     rdi, [rsp+0F8h+var_F0]
//   0x1D95A5 call    sub_30B800
//   0x1D95AA jmp     loc_1D8E60
//   0x1D95AF align 10h
//   0x1D95B0 mov     edx, esi
//   0x1D95B2 mov     rdi, r12
//   0x1D95B5 sub     edx, eax
//   0x1D95B7 lea     rax, [rsp+0F8h+var_88]
//   0x1D95BC add     edx, [r12+4]
//   0x1D95C1 mov     rsi, rax
//   0x1D95C4 mov     [rsp+0F8h+var_F0], rax
//   0x1D95C9 call    sub_30D980
//   0x1D95CE test    al, al
//   0x1D95D0 jz      short loc_1D95A0
//   0x1D95D2 movdqa  xmm2, [rsp+0F8h+var_88]
//   0x1D95D8 movdqu  xmm1, xmmword ptr [r12]
//   0x1D95DE movdqu  xmm0, xmmword ptr [r12+10h]
//   0x1D95E5 mov     r9, [rsp+0F8h+var_E8]
//   0x1D95EA movups  xmmword ptr [r12], xmm2
//   0x1D95EF movdqa  xmm2, xmmword ptr [rsp+80h]
//   0x1D95F8 movaps  [rsp+0F8h+var_68], xmm1
//   0x1D9600 movaps  [rsp+0F8h+var_58], xmm0
//   0x1D9608 movups  xmmword ptr [r12+10h], xmm2
//   0x1D960E movaps  [rsp+0F8h+var_88], xmm1
//   0x1D9613 movaps  xmmword ptr [rsp+80h], xmm0
//   0x1D961B jmp     loc_1D8FBC
//   0x1D9620 mov     rdi, [rsp+0F8h+var_F0]
//   0x1D9625 call    sub_30B800
//   0x1D962A jmp     loc_1D8E60
//   0x1D962F align 10h
//   0x1D9630 mov     eax, [rsp+0F8h+var_D4]
//   0x1D9634 mov     edx, [r12+4]
//   0x1D9639 mov     rdi, r12
//   0x1D963C sub     edx, eax
//   0x1D963E lea     rax, [rsp+0F8h+var_88]
//   0x1D9643 mov     rsi, rax
//   0x1D9646 mov     [rsp+0F8h+var_F0], rax
//   0x1D964B call    sub_30D980
//   0x1D9650 test    al, al
//   0x1D9652 jz      short loc_1D9620
//   0x1D9654 movdqa  xmm2, [rsp+0F8h+var_88]
//   0x1D965A movdqu  xmm1, xmmword ptr [r12]
//   0x1D9660 movdqu  xmm0, xmmword ptr [r12+10h]
//   0x1D9667 movups  xmmword ptr [r12], xmm2
//   0x1D966C movdqa  xmm2, xmmword ptr [rsp+80h]
//   0x1D9675 movaps  [rsp+0F8h+var_68], xmm1
//   0x1D967D movaps  [rsp+0F8h+var_58], xmm0
//   0x1D9685 movups  xmmword ptr [r12+10h], xmm2
//   0x1D968B movaps  [rsp+0F8h+var_88], xmm1
//   0x1D9690 movaps  xmmword ptr [rsp+80h], xmm0
//   0x1D9698 jmp     loc_1D9326
//   0x1D969D xor     eax, eax
//   0x1D969F pxor    xmm0, xmm0
//   0x1D96A3 xor     edx, edx
//   0x1D96A5 mov     rdi, r12
//   0x1D96A8 mov     dword ptr [rsp+0F8h+var_88], eax
//   0x1D96AC mov     eax, [rsp+0F8h+var_D4]
//   0x1D96B0 mov     [rsp+0F8h+var_70], rdx
//   0x1D96B8 mov     dword ptr [rsp+0F8h+var_88+4], eax
//   0x1D96BC lea     rax, [rsp+0F8h+var_88]
//   0x1D96C1 mov     rsi, rax
//   0x1D96C4 mov     [rsp+0F8h+var_F0], rax
//   0x1D96C9 mov     rbx, rax
//   0x1D96CC movups  [rsp+0F8h+var_88+8], xmm0
//   0x1D96D1 call    sub_30BA10
//   0x1D96D6 mov     rdi, rbx
//   0x1D96D9 call    sub_30B800
//   0x1D96DE mov     rdi, r12
//   0x1D96E1 call    sub_30B800
//   0x1D96E6 mov     dword ptr [r12], 8
//   0x1D96EE jmp     loc_1D9340
//   0x1D96F3 call    ___stack_chk_fail
//   0x1D96F8 mov     rbx, rax
//   0x1D96FB jmp     loc_40190
//   0x1D9700 mov     rbx, rax
//   0x1D9703 jmp     loc_401B5
//   0x1D9708 mov     rbx, rax
//   0x1D970B jmp     loc_401EE
//   0x1D9710 mov     rbx, rax
//   0x1D9713 jmp     loc_4021B
//   0x1D9718 mov     rbx, rax
//   0x1D971B jmp     loc_401E4
//   0x1D9720 mov     rbx, rax
//   0x1D9723 jmp     loc_40245
// ============================================================

void sub_1D8DE0(/* signature unknown */)
{
    // see disassembly above
}

