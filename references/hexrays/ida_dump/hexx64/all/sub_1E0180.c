// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x1E0180
// Name:           sub_1E0180
// Function size:  2376 bytes (529 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x1E0180 push    r15
//   0x1E0182 push    r14
//   0x1E0184 push    r13
//   0x1E0186 push    r12
//   0x1E0188 push    rbp
//   0x1E0189 push    rbx
//   0x1E018A sub     rsp, 0C8h
//   0x1E0191 mov     r13, fs:28h
//   0x1E019A mov     [rsp+0F8h+var_40], r13
//   0x1E01A2 mov     r13, rdi
//   0x1E01A5 movzx   r14d, byte ptr [r13+18h]
//   0x1E01AA test    r14b, r14b
//   0x1E01AD jnz     short loc_1E0200
//   0x1E01AF mov     r9, rdx
//   0x1E01B2 movzx   edx, byte ptr [rdx+8]
//   0x1E01B6 mov     r12, rsi
//   0x1E01B9 mov     edi, ecx
//   0x1E01BB cmp     dl, 5
//   0x1E01BE jz      loc_1E03C8
//   0x1E01C4 mov     rsi, [r13+8]
//   0x1E01C8 test    rsi, rsi
//   0x1E01CB jz      short loc_1E0200
//   0x1E01CD mov     rax, [rsi]
//   0x1E01D0 mov     r11, [r9]
//   0x1E01D3 and     rax, 0FFFFFFFFFFFFFFFCh
//   0x1E01D7 jz      loc_1E0450
//   0x1E01DD mov     r15, rsi
//   0x1E01E0 test    byte ptr [rax], 2
//   0x1E01E3 jz      short loc_1E0230
//   0x1E01E5 cmp     qword ptr [r13+10h], 0
//   0x1E01EA mov     r15, rsi
//   0x1E01ED jnz     loc_1E03E8
//   0x1E01F3 nop     word ptr [rax+rax+00000000h]
//   0x1E01FE xchg    ax, ax
//   0x1E0200 xor     eax, eax
//   0x1E0202 mov     rdx, [rsp+0F8h+var_40]
//   0x1E020A sub     rdx, fs:28h
//   0x1E0213 jnz     loc_1E0A93
//   0x1E0219 add     rsp, 0C8h
//   0x1E0220 pop     rbx
//   0x1E0221 pop     rbp
//   0x1E0222 pop     r12
//   0x1E0224 pop     r13
//   0x1E0226 pop     r14
//   0x1E0228 pop     r15
//   0x1E022A retn
//   0x1E022B align 10h
//   0x1E0230 movzx   ebx, byte ptr [rax+20h]
//   0x1E0234 cmp     bl, dl
//   0x1E0236 jb      loc_1E0400
//   0x1E023C cmp     dl, bl
//   0x1E023E jb      short loc_1E024A
//   0x1E0240 cmp     r11, [rax+18h]
//   0x1E0244 jg      loc_1E0400
//   0x1E024A mov     r15, rax
//   0x1E024D mov     rax, [rax+8]
//   0x1E0251 test    byte ptr [rax], 2
//   0x1E0254 jz      short loc_1E0230
//   0x1E0256 cmp     r15, rsi
//   0x1E0259 jz      short loc_1E01E5
//   0x1E025B lea     rcx, [r15+18h]
//   0x1E025F cmp     dl, [r15+20h]
//   0x1E0263 jnb     loc_1E0440
//   0x1E0269 cmp     qword ptr [r13+10h], 0
//   0x1E026E jnz     loc_1E03E8
//   0x1E0274 mov     rax, [r15]
//   0x1E0277 test    al, 2
//   0x1E0279 jz      loc_1E0410
//   0x1E027F mov     r15, [r15+10h]
//   0x1E0283 lea     rcx, [r15+18h]
//   0x1E0287 cmp     [r15+20h], dl
//   0x1E028B jnz     loc_1E0200
//   0x1E0291 movsxd  rax, dword ptr [rcx+14h]
//   0x1E0295 add     rax, [r15+18h]
//   0x1E0299 cmp     r11, rax
//   0x1E029C jge     loc_1E0200
//   0x1E02A2 movsxd  rbx, dword ptr [r12+4]
//   0x1E02A7 movsxd  rbp, dword ptr [rcx+14h]
//   0x1E02AB mov     [rsp+0F8h+var_E8], rcx
//   0x1E02B0 mov     [rsp+0F8h+var_F0], r9
//   0x1E02B5 add     rbp, [r15+18h]
//   0x1E02B9 lea     rax, [rbx+r11]
//   0x1E02BD mov     [rsp+0F8h+var_D4], ebx
//   0x1E02C1 mov     [rsp+0F8h+var_F8], rax
//   0x1E02C5 test    dil, dil
//   0x1E02C8 jz      loc_1E0480
//   0x1E02CE cmp     [r15+18h], r11
//   0x1E02D2 jnz     loc_1E0200
//   0x1E02D8 cmp     rax, rbp
//   0x1E02DB jnz     loc_1E0200
//   0x1E02E1 lea     rsi, [r15+28h]
//   0x1E02E5 mov     rdi, r12
//   0x1E02E8 call    sub_312D90
//   0x1E02ED mov     r9, [rsp+0F8h+var_F0]
//   0x1E02F2 mov     rcx, [rsp+0F8h+var_E8]
//   0x1E02F7 mov     rax, [r9]
//   0x1E02FA cmp     rax, [r15+18h]
//   0x1E02FE jle     loc_1E06E0
//   0x1E0304 mov     rdx, cs:qword_424018
//   0x1E030B pxor    xmm0, xmm0
//   0x1E030F mov     [rsp+0F8h+var_E8], r9
//   0x1E0314 mov     [rsp+0F8h+var_70], 0
//   0x1E0320 mov     qword ptr [rsp+0F8h+var_88], rdx
//   0x1E0325 movups  [rsp+0F8h+var_88+8], xmm0
//   0x1E032A mov     rsi, [rcx]
//   0x1E032D test    r14b, r14b
//   0x1E0330 jnz     loc_1E0950
//   0x1E0336 mov     edx, eax
//   0x1E0338 lea     rax, [rsp+0F8h+var_88]
//   0x1E033D mov     rdi, r12
//   0x1E0340 sub     edx, esi
//   0x1E0342 mov     rsi, rax
//   0x1E0345 mov     [rsp+0F8h+var_F0], rax
//   0x1E034A call    sub_314D00
//   0x1E034F test    al, al
//   0x1E0351 mov     r9, [rsp+0F8h+var_E8]
//   0x1E0356 jz      loc_1E0940
//   0x1E035C cmp     dword ptr [rsp+0F8h+var_88], 1
//   0x1E0361 mov     [rsp+0F8h+var_E8], r9
//   0x1E0366 jz      loc_1E0940
//   0x1E036C movdqa  xmm2, [rsp+0F8h+var_88]
//   0x1E0372 movdqu  xmm1, xmmword ptr [r12]
//   0x1E0378 movdqu  xmm0, xmmword ptr [r12+10h]
//   0x1E037F mov     rdi, [rsp+0F8h+var_F0]
//   0x1E0384 movups  xmmword ptr [r12], xmm2
//   0x1E0389 movdqa  xmm2, xmmword ptr [rsp+80h]
//   0x1E0392 movaps  [rsp+0F8h+var_68], xmm1
//   0x1E039A movups  xmmword ptr [r12+10h], xmm2
//   0x1E03A0 movaps  [rsp+0F8h+var_58], xmm0
//   0x1E03A8 movaps  [rsp+0F8h+var_88], xmm1
//   0x1E03AD movaps  xmmword ptr [rsp+80h], xmm0
//   0x1E03B5 call    sub_312B80
//   0x1E03BA mov     r9, [rsp+0F8h+var_E8]
//   0x1E03BF jmp     loc_1E04A3
//   0x1E03C4 align 8
//   0x1E03C8 mov     rax, [r13+0]
//   0x1E03CC mov     rax, [rax+5E0h]
//   0x1E03D3 mov     rax, [rax+60h]
//   0x1E03D7 movzx   r14d, byte ptr [rax+91h]
//   0x1E03DF jmp     loc_1E01C4
//   0x1E03E4 align 8
//   0x1E03E8 cmp     [rsi+8], r15
//   0x1E03EC jz      loc_1E0200
//   0x1E03F2 mov     rax, [r15]
//   0x1E03F5 test    al, 2
//   0x1E03F7 jz      short loc_1E0410
//   0x1E03F9 jmp     loc_1E027F
//   0x1E03FE align 20h
//   0x1E0400 mov     rax, [rax+10h]
//   0x1E0404 jmp     loc_1E0251
//   0x1E0409 align 10h
//   0x1E0410 mov     rsi, [r15+8]
//   0x1E0414 test    byte ptr [rsi], 2
//   0x1E0417 jz      loc_1E0730
//   0x1E041D and     rax, 0FFFFFFFFFFFFFFFCh
//   0x1E0421 mov     rsi, [rax]
//   0x1E0424 test    sil, 2
//   0x1E0428 jz      loc_1E07B0
//   0x1E042E mov     r15, rax
//   0x1E0431 jmp     loc_1E0283
//   0x1E0436 align 20h
//   0x1E0440 cmp     r11, [r15+18h]
//   0x1E0444 jl      loc_1E0269
//   0x1E044A jmp     loc_1E02A2
//   0x1E044F align 10h
//   0x1E0450 xor     r15d, r15d
//   0x1E0453 cmp     dl, byte ptr ds:qword_20
//   0x1E045A jb      loc_1E0269
//   0x1E0460 mov     ecx, 18h
//   0x1E0465 cmp     r11, ds:qword_18
//   0x1E046D jge     loc_1E02A2
//   0x1E0473 jmp     loc_1E0269
//   0x1E0478 align 20h
//   0x1E0480 lea     rsi, [r15+28h]
//   0x1E0484 mov     rdi, r12
//   0x1E0487 call    sub_312D90
//   0x1E048C mov     r9, [rsp+0F8h+var_F0]
//   0x1E0491 mov     rcx, [rsp+0F8h+var_E8]
//   0x1E0496 mov     rax, [r9]
//   0x1E0499 cmp     [r15+18h], rax
//   0x1E049D jl      loc_1E0304
//   0x1E04A3 cmp     [rsp+0F8h+var_F8], rbp
//   0x1E04A7 jle     loc_1E0672
//   0x1E04AD mov     rax, [r15]
//   0x1E04B0 mov     rsi, [r13+8]
//   0x1E04B4 mov     rbx, r15
//   0x1E04B7 test    al, 2
//   0x1E04B9 jnz     short loc_1E04E0
//   0x1E04BB mov     rdx, [r15+10h]
//   0x1E04BF test    byte ptr [rdx], 2
//   0x1E04C2 jnz     loc_1E06F0
//   0x1E04C8 mov     rbx, rdx
//   0x1E04CB mov     rdx, [rdx+8]
//   0x1E04CF test    byte ptr [rdx], 2
//   0x1E04D2 jz      short loc_1E04C8
//   0x1E04D4 nop     word ptr [rax+rax+00000000h]
//   0x1E04DF nop
//   0x1E04E0 cmp     rsi, rbx
//   0x1E04E3 jz      loc_1E0660
//   0x1E04E9 lea     rcx, [rbx+18h]
//   0x1E04ED movzx   edi, byte ptr [r15+20h]
//   0x1E04F2 mov     [rsp+0F8h+var_E8], rcx
//   0x1E04F7 cmp     [rbx+20h], dil
//   0x1E04FB jnz     loc_1E0660
//   0x1E0501 mov     rdi, [rsp+0F8h+var_F8]
//   0x1E0505 cmp     [rbx+18h], rdi
//   0x1E0509 jge     loc_1E0660
//   0x1E050F mov     rbp, [rbx+18h]
//   0x1E0513 movsxd  rax, dword ptr [r15+2Ch]
//   0x1E0517 add     rax, [r15+18h]
//   0x1E051B cmp     rbp, rax
//   0x1E051E jnz     loc_1E0660
//   0x1E0524 add     ebp, [rbx+2Ch]
//   0x1E0527 movsxd  rbp, ebp
//   0x1E052A cmp     rbp, rdi
//   0x1E052D jle     loc_1E0600
//   0x1E0533 lea     r15, [rsp+0F8h+var_C8]
//   0x1E0538 lea     rsi, [rbx+28h]
//   0x1E053C mov     [rsp+0F8h+var_F0], r9
//   0x1E0541 mov     rdi, r15
//   0x1E0544 call    sub_312C40
//   0x1E0549 mov     rax, cs:qword_424018
//   0x1E0550 pxor    xmm0, xmm0
//   0x1E0554 test    r14b, r14b
//   0x1E0557 mov     [rsp+0F8h+var_90], 0
//   0x1E0560 mov     r9, [rsp+0F8h+var_F0]
//   0x1E0565 mov     qword ptr [rsp+0F8h+var_A8], rax
//   0x1E056A mov     rax, [rsp+0F8h+var_E8]
//   0x1E056F movups  [rsp+0F8h+var_A8+8], xmm0
//   0x1E0574 mov     rax, [rax]
//   0x1E0577 jnz     loc_1E0748
//   0x1E057D mov     edx, dword ptr [rsp+0F8h+var_F8]
//   0x1E0580 lea     rcx, [rsp+0F8h+var_A8]
//   0x1E0585 mov     rdi, r15
//   0x1E0588 mov     rsi, rcx
//   0x1E058B mov     [rsp+0F8h+var_E0], rcx
//   0x1E0590 sub     edx, eax
//   0x1E0592 call    sub_314D00
//   0x1E0597 test    al, al
//   0x1E0599 mov     r9, [rsp+0F8h+var_F0]
//   0x1E059E jz      short loc_1E05C2
//   0x1E05A0 mov     rsi, r15
//   0x1E05A3 mov     rdi, r12
//   0x1E05A6 mov     [rsp+0F8h+var_F0], r9
//   0x1E05AB call    sub_313C40
//   0x1E05B0 test    al, al
//   0x1E05B2 mov     r9, [rsp+0F8h+var_F0]
//   0x1E05B7 jnz     loc_1E08F0
//   0x1E05BD mov     [rsp+0F8h+var_F0], r9
//   0x1E05C2 mov     rdi, [rsp+0F8h+var_E0]
//   0x1E05C7 call    sub_312B80
//   0x1E05CC mov     rdi, r15
//   0x1E05CF call    sub_312B80
//   0x1E05D4 mov     rsi, [rsp+0F8h+var_E8]
//   0x1E05D9 mov     r9, [rsp+0F8h+var_F0]
//   0x1E05DE add     rsi, 10h
//   0x1E05E2 mov     rdi, r12
//   0x1E05E5 mov     [rsp+0F8h+var_F0], r9
//   0x1E05EA call    sub_313C40
//   0x1E05EF mov     r9, [rsp+0F8h+var_F0]
//   0x1E05F4 test    al, al
//   0x1E05F6 jz      short loc_1E064F
//   0x1E05F8 mov     r15, rbx
//   0x1E05FB jmp     loc_1E04AD
//   0x1E0600 lea     rsi, [rbx+28h]
//   0x1E0604 test    r14b, r14b
//   0x1E0607 jz      short loc_1E05E2
//   0x1E0609 lea     rax, [rsp+0F8h+var_88]
//   0x1E060E mov     [rsp+0F8h+var_F0], rax
//   0x1E0613 mov     r15, [rsp+0F8h+var_F0]
//   0x1E0618 mov     [rsp+0F8h+var_E8], r9
//   0x1E061D mov     rdi, r15
//   0x1E0620 call    sub_312C40
//   0x1E0625 mov     rsi, r12
//   0x1E0628 mov     rdi, r15
//   0x1E062B call    sub_313C40
//   0x1E0630 test    al, al
//   0x1E0632 mov     r9, [rsp+0F8h+var_E8]
//   0x1E0637 jnz     loc_1E07E8
//   0x1E063D mov     rdi, r15
//   0x1E0640 mov     [rsp+0F8h+var_F0], r9
//   0x1E0645 call    sub_312B80
//   0x1E064A mov     r9, [rsp+0F8h+var_F0]
//   0x1E064F mov     rax, [rsp+0F8h+var_F8]
//   0x1E0653 cmp     rbp, rax
//   0x1E0656 jge     loc_1E0A3D
//   0x1E065C nop     dword ptr [rax+00h]
//   0x1E0660 movsxd  rbp, dword ptr [r12+4]
//   0x1E0665 add     rbp, [r9]
//   0x1E0668 cmp     [rsp+0F8h+var_F8], rbp
//   0x1E066C jg      loc_1E0200
//   0x1E0672 mov     rax, [rsp+0F8h+var_F8]
//   0x1E0676 cmp     rbp, rax
//   0x1E0679 jle     short loc_1E06E0
//   0x1E067B mov     rax, cs:qword_424018
//   0x1E0682 pxor    xmm0, xmm0
//   0x1E0686 mov     [rsp+0F8h+var_70], 0
//   0x1E0692 movups  [rsp+0F8h+var_88+8], xmm0
//   0x1E0697 mov     qword ptr [rsp+0F8h+var_88], rax
//   0x1E069C test    r14b, r14b
//   0x1E069F jnz     loc_1E09D0
//   0x1E06A5 lea     rax, [rsp+0F8h+var_88]
//   0x1E06AA mov     edx, [rsp+0F8h+var_D4]
//   0x1E06AE mov     rdi, r12
//   0x1E06B1 mov     rsi, rax
//   0x1E06B4 mov     [rsp+0F8h+var_F0], rax
//   0x1E06B9 call    sub_314D00
//   0x1E06BE test    al, al
//   0x1E06C0 jz      loc_1E09C0
//   0x1E06C6 cmp     dword ptr [r12], 1
//   0x1E06CB jz      loc_1E09C0
//   0x1E06D1 mov     rdi, [rsp+0F8h+var_F0]
//   0x1E06D6 call    sub_312B80
//   0x1E06DB nop     dword ptr [rax+rax+00h]
//   0x1E06E0 mov     eax, 1
//   0x1E06E5 jmp     loc_1E0202
//   0x1E06EA align 10h
//   0x1E06F0 and     rax, 0FFFFFFFFFFFFFFFCh
//   0x1E06F4 mov     rbx, rax
//   0x1E06F7 mov     rax, [rax]
//   0x1E06FA test    al, 2
//   0x1E06FC jnz     loc_1E04E0
//   0x1E0702 mov     rdi, r15
//   0x1E0705 cmp     rdi, [rbx+10h]
//   0x1E0709 jnz     loc_1E04E0
//   0x1E070F and     rax, 0FFFFFFFFFFFFFFFCh
//   0x1E0713 mov     rdi, rbx
//   0x1E0716 mov     rdx, rax
//   0x1E0719 mov     rax, [rax]
//   0x1E071C mov     rbx, rdx
//   0x1E071F test    al, 2
//   0x1E0721 jz      short loc_1E0705
//   0x1E0723 jmp     loc_1E04E0
//   0x1E0728 align 10h
//   0x1E0730 mov     r15, rsi
//   0x1E0733 mov     rsi, [rsi+10h]
//   0x1E0737 test    byte ptr [rsi], 2
//   0x1E073A jnz     loc_1E0283
//   0x1E0740 jmp     short loc_1E0730
//   0x1E0742 align 8
//   0x1E0748 mov     edx, dword ptr [rsp+0F8h+var_C8+4]
//   0x1E074C mov     ecx, dword ptr [rsp+0F8h+var_F8]
//   0x1E074F mov     rdi, r15
//   0x1E0752 mov     [rsp+0F8h+var_F0], r9
//   0x1E0757 sub     edx, ecx
//   0x1E0759 add     edx, eax
//   0x1E075B lea     rax, [rsp+0F8h+var_A8]
//   0x1E0760 mov     rsi, rax
//   0x1E0763 mov     [rsp+0F8h+var_E0], rax
//   0x1E0768 call    sub_314D00
//   0x1E076D mov     r9, [rsp+0F8h+var_F0]
//   0x1E0772 test    al, al
//   0x1E0774 mov     [rsp+0F8h+var_D0], r9
//   0x1E0779 jnz     loc_1E0840
//   0x1E077F mov     rdi, [rsp+0F8h+var_E0]
//   0x1E0784 call    sub_312B80
//   0x1E0789 mov     rdi, r15
//   0x1E078C call    sub_312B80
//   0x1E0791 mov     rsi, [rsp+0F8h+var_E8]
//   0x1E0796 lea     rax, [rsp+0F8h+var_88]
//   0x1E079B mov     r9, [rsp+0F8h+var_D0]
//   0x1E07A0 mov     [rsp+0F8h+var_F0], rax
//   0x1E07A5 add     rsi, 10h
//   0x1E07A9 jmp     loc_1E0613
//   0x1E07AE align 10h
//   0x1E07B0 cmp     [rax+8], r15
//   0x1E07B4 jnz     loc_1E042E
//   0x1E07BA and     rsi, 0FFFFFFFFFFFFFFFCh
//   0x1E07BE mov     r15, rsi
//   0x1E07C1 mov     rsi, [rsi]
//   0x1E07C4 test    sil, 2
//   0x1E07C8 jnz     loc_1E0283
//   0x1E07CE mov     rbx, rax
//   0x1E07D1 mov     rax, r15
//   0x1E07D4 mov     r15, rbx
//   0x1E07D7 cmp     [rax+8], r15
//   0x1E07DB jz      short loc_1E07BA
//   0x1E07DD jmp     loc_1E042E
//   0x1E07E2 align 8
//   0x1E07E8 mov     rax, [rsp+0F8h+var_F0]
//   0x1E07ED movdqu  xmm1, xmmword ptr [r12]
//   0x1E07F3 mov     [rsp+0F8h+var_E8], r9
//   0x1E07F8 movdqu  xmm0, xmmword ptr [r12+10h]
//   0x1E07FF movdqa  xmm2, xmmword ptr [rax]
//   0x1E0803 mov     rdi, rax
//   0x1E0806 movaps  xmmword ptr [rax], xmm1
//   0x1E0809 movaps  [rsp+0F8h+var_68], xmm1
//   0x1E0811 movups  xmmword ptr [r12], xmm2
//   0x1E0816 movdqa  xmm2, xmmword ptr [rax+10h]
//   0x1E081B movaps  xmmword ptr [rax+10h], xmm0
//   0x1E081F movups  xmmword ptr [r12+10h], xmm2
//   0x1E0825 movaps  [rsp+0F8h+var_58], xmm0
//   0x1E082D call    sub_312B80
//   0x1E0832 mov     r9, [rsp+0F8h+var_E8]
//   0x1E0837 jmp     loc_1E05F8
//   0x1E083C align 20h
//   0x1E0840 movdqa  xmm2, [rsp+0F8h+var_A8]
//   0x1E0846 movdqa  xmm1, [rsp+0F8h+var_C8]
//   0x1E084C lea     rax, [rsp+0F8h+var_88]
//   0x1E0851 mov     rsi, r15
//   0x1E0854 movdqa  xmm0, [rsp+0F8h+var_B8]
//   0x1E085A mov     rdi, rax
//   0x1E085D mov     [rsp+0F8h+var_F0], rax
//   0x1E0862 movaps  [rsp+0F8h+var_C8], xmm2
//   0x1E0867 movdqa  xmm2, xmmword ptr [rsp+60h]
//   0x1E086D movaps  [rsp+0F8h+var_68], xmm1
//   0x1E0875 movaps  [rsp+0F8h+var_58], xmm0
//   0x1E087D movaps  [rsp+0F8h+var_B8], xmm2
//   0x1E0882 movaps  [rsp+0F8h+var_A8], xmm1
//   0x1E0887 movaps  xmmword ptr [rsp+60h], xmm0
//   0x1E088C call    sub_312C40
//   0x1E0891 mov     rdi, [rsp+0F8h+var_F0]
//   0x1E0896 mov     rsi, r12
//   0x1E0899 call    sub_313C40
//   0x1E089E test    al, al
//   0x1E08A0 jz      short loc_1E0910
//   0x1E08A2 movdqa  xmm2, [rsp+0F8h+var_88]
//   0x1E08A8 movdqu  xmm1, xmmword ptr [r12]
//   0x1E08AE movdqu  xmm0, xmmword ptr [r12+10h]
//   0x1E08B5 mov     rdi, [rsp+0F8h+var_F0]
//   0x1E08BA movups  xmmword ptr [r12], xmm2
//   0x1E08BF movdqa  xmm2, xmmword ptr [rsp+80h]
//   0x1E08C8 movaps  [rsp+0F8h+var_68], xmm1
//   0x1E08D0 movups  xmmword ptr [r12+10h], xmm2
//   0x1E08D6 movaps  [rsp+0F8h+var_58], xmm0
//   0x1E08DE movaps  [rsp+0F8h+var_88], xmm1
//   0x1E08E3 movaps  xmmword ptr [rsp+80h], xmm0
//   0x1E08EB call    sub_312B80
//   0x1E08F0 mov     rdi, [rsp+0F8h+var_E0]
//   0x1E08F5 call    sub_312B80
//   0x1E08FA mov     rdi, r15
//   0x1E08FD call    sub_312B80
//   0x1E0902 jmp     loc_1E06E0
//   0x1E0907 align 10h
//   0x1E0910 mov     rdi, [rsp+0F8h+var_F0]
//   0x1E0915 call    sub_312B80
//   0x1E091A mov     rdi, [rsp+0F8h+var_E0]
//   0x1E091F call    sub_312B80
//   0x1E0924 mov     rdi, r15
//   0x1E0927 call    sub_312B80
//   0x1E092C mov     rsi, [rsp+0F8h+var_E8]
//   0x1E0931 mov     r9, [rsp+0F8h+var_D0]
//   0x1E0936 add     rsi, 10h
//   0x1E093A jmp     loc_1E0613
//   0x1E093F align 20h
//   0x1E0940 mov     rdi, [rsp+0F8h+var_F0]
//   0x1E0945 call    sub_312B80
//   0x1E094A jmp     loc_1E0200
//   0x1E094F align 10h
//   0x1E0950 mov     edx, esi
//   0x1E0952 mov     rdi, r12
//   0x1E0955 sub     edx, eax
//   0x1E0957 lea     rax, [rsp+0F8h+var_88]
//   0x1E095C add     edx, [r12+4]
//   0x1E0961 mov     rsi, rax
//   0x1E0964 mov     [rsp+0F8h+var_F0], rax
//   0x1E0969 call    sub_314D00
//   0x1E096E test    al, al
//   0x1E0970 jz      short loc_1E0940
//   0x1E0972 movdqa  xmm2, [rsp+0F8h+var_88]
//   0x1E0978 movdqu  xmm1, xmmword ptr [r12]
//   0x1E097E movdqu  xmm0, xmmword ptr [r12+10h]
//   0x1E0985 mov     r9, [rsp+0F8h+var_E8]
//   0x1E098A movups  xmmword ptr [r12], xmm2
//   0x1E098F movdqa  xmm2, xmmword ptr [rsp+80h]
//   0x1E0998 movaps  [rsp+0F8h+var_68], xmm1
//   0x1E09A0 movaps  [rsp+0F8h+var_58], xmm0
//   0x1E09A8 movups  xmmword ptr [r12+10h], xmm2
//   0x1E09AE movaps  [rsp+0F8h+var_88], xmm1
//   0x1E09B3 movaps  xmmword ptr [rsp+80h], xmm0
//   0x1E09BB jmp     loc_1E035C
//   0x1E09C0 mov     rdi, [rsp+0F8h+var_F0]
//   0x1E09C5 call    sub_312B80
//   0x1E09CA jmp     loc_1E0200
//   0x1E09CF align 10h
//   0x1E09D0 mov     eax, [rsp+0F8h+var_D4]
//   0x1E09D4 mov     edx, [r12+4]
//   0x1E09D9 mov     rdi, r12
//   0x1E09DC sub     edx, eax
//   0x1E09DE lea     rax, [rsp+0F8h+var_88]
//   0x1E09E3 mov     rsi, rax
//   0x1E09E6 mov     [rsp+0F8h+var_F0], rax
//   0x1E09EB call    sub_314D00
//   0x1E09F0 test    al, al
//   0x1E09F2 jz      short loc_1E09C0
//   0x1E09F4 movdqa  xmm2, [rsp+0F8h+var_88]
//   0x1E09FA movdqu  xmm1, xmmword ptr [r12]
//   0x1E0A00 movdqu  xmm0, xmmword ptr [r12+10h]
//   0x1E0A07 movups  xmmword ptr [r12], xmm2
//   0x1E0A0C movdqa  xmm2, xmmword ptr [rsp+80h]
//   0x1E0A15 movaps  [rsp+0F8h+var_68], xmm1
//   0x1E0A1D movaps  [rsp+0F8h+var_58], xmm0
//   0x1E0A25 movups  xmmword ptr [r12+10h], xmm2
//   0x1E0A2B movaps  [rsp+0F8h+var_88], xmm1
//   0x1E0A30 movaps  xmmword ptr [rsp+80h], xmm0
//   0x1E0A38 jmp     loc_1E06C6
//   0x1E0A3D xor     eax, eax
//   0x1E0A3F pxor    xmm0, xmm0
//   0x1E0A43 xor     edx, edx
//   0x1E0A45 mov     rdi, r12
//   0x1E0A48 mov     dword ptr [rsp+0F8h+var_88], eax
//   0x1E0A4C mov     eax, [rsp+0F8h+var_D4]
//   0x1E0A50 mov     [rsp+0F8h+var_70], rdx
//   0x1E0A58 mov     dword ptr [rsp+0F8h+var_88+4], eax
//   0x1E0A5C lea     rax, [rsp+0F8h+var_88]
//   0x1E0A61 mov     rsi, rax
//   0x1E0A64 mov     [rsp+0F8h+var_F0], rax
//   0x1E0A69 mov     rbx, rax
//   0x1E0A6C movups  [rsp+0F8h+var_88+8], xmm0
//   0x1E0A71 call    sub_312D90
//   0x1E0A76 mov     rdi, rbx
//   0x1E0A79 call    sub_312B80
//   0x1E0A7E mov     rdi, r12
//   0x1E0A81 call    sub_312B80
//   0x1E0A86 mov     dword ptr [r12], 8
//   0x1E0A8E jmp     loc_1E06E0
//   0x1E0A93 call    ___stack_chk_fail
//   0x1E0A98 mov     rbx, rax
//   0x1E0A9B jmp     loc_42420
//   0x1E0AA0 mov     rbx, rax
//   0x1E0AA3 jmp     loc_42445
//   0x1E0AA8 mov     rbx, rax
//   0x1E0AAB jmp     loc_4247E
//   0x1E0AB0 mov     rbx, rax
//   0x1E0AB3 jmp     loc_424AB
//   0x1E0AB8 mov     rbx, rax
//   0x1E0ABB jmp     loc_42474
//   0x1E0AC0 mov     rbx, rax
//   0x1E0AC3 jmp     loc_424D5
// ============================================================

void sub_1E0180(/* signature unknown */)
{
    // see disassembly above
}

