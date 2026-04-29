// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x1E0960
// Name:           sub_1E0960
// Function size:  3320 bytes (788 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x1E0960 push    r15
//   0x1E0962 push    r14
//   0x1E0964 push    r13
//   0x1E0966 push    r12
//   0x1E0968 push    rbp
//   0x1E0969 mov     rbp, rsi
//   0x1E096C push    rbx
//   0x1E096D mov     rbx, rdi
//   0x1E0970 sub     rsp, 0B8h
//   0x1E0977 mov     rax, [rdx]
//   0x1E097A movdqu  xmm3, xmmword ptr [rdx]
//   0x1E097E mov     rsi, fs:28h
//   0x1E0987 mov     [rsp+0E8h+var_40], rsi
//   0x1E098F mov     rsi, rcx
//   0x1E0992 lea     r13, [rsp+0E8h+var_A8]
//   0x1E0997 mov     r15, [rbp+0]
//   0x1E099B movzx   r14d, byte ptr [rdx+8]
//   0x1E09A0 mov     rdi, r13
//   0x1E09A3 mov     [rsp+0E8h+var_E0], rax
//   0x1E09A8 movaps  [rsp+0E8h+var_B8], xmm3
//   0x1E09AD call    sub_30DB40
//   0x1E09B2 movsxd  r12, dword ptr [rsp+0E8h+var_A8+4]
//   0x1E09B7 mov     rdi, [rsp+0E8h+var_E0]
//   0x1E09BC mov     byte ptr [rsp+0E8h+var_D8], 0
//   0x1E09C1 mov     rax, r12
//   0x1E09C4 add     r12, rdi
//   0x1E09C7 cmp     r14b, 5
//   0x1E09CB jnz     short loc_1E09E7
//   0x1E09CD mov     rdx, [rbx]
//   0x1E09D0 mov     rdx, [rdx+5E0h]
//   0x1E09D7 mov     rdx, [rdx+60h]
//   0x1E09DB movzx   esi, byte ptr [rdx+91h]
//   0x1E09E2 mov     byte ptr [rsp+0E8h+var_D8], sil
//   0x1E09E7 cmp     r15, [rbx+8]
//   0x1E09EB jz      loc_1E0B9E
//   0x1E09F1 lea     rcx, [r15+18h]
//   0x1E09F5 cmp     [r15+20h], r14b
//   0x1E09F9 jnz     loc_1E0B9E
//   0x1E09FF cmp     [r15+18h], r12
//   0x1E0A03 jge     loc_1E0B9E
//   0x1E0A09 movsxd  rdi, dword ptr [rcx+14h]
//   0x1E0A0D mov     rsi, [r15+18h]
//   0x1E0A11 mov     r9, [rsp+0E8h+var_E0]
//   0x1E0A16 mov     [rsp+0E8h+var_C0], rdi
//   0x1E0A1B mov     rdx, rdi
//   0x1E0A1E add     rdi, rsi
//   0x1E0A21 cmp     rsi, r9
//   0x1E0A24 jl      loc_1E1068
//   0x1E0A2A jg      loc_1E10F8
//   0x1E0A30 cmp     edx, eax
//   0x1E0A32 jg      loc_1E11A6
//   0x1E0A38 jge     loc_1E1012
//   0x1E0A3E mov     rax, cs:qword_3FDBA0
//   0x1E0A45 pxor    xmm0, xmm0
//   0x1E0A49 cmp     byte ptr [rsp+0E8h+var_D8], 0
//   0x1E0A4E mov     [rsp+0E8h+var_70], 0
//   0x1E0A57 mov     [rsp+0E8h+var_D0], rcx
//   0x1E0A5C mov     qword ptr [rsp+0E8h+var_88], rax
//   0x1E0A61 movups  [rsp+0E8h+var_88+8], xmm0
//   0x1E0A66 jnz     loc_1E0BB0
//   0x1E0A6C lea     rax, [rsp+0E8h+var_88]
//   0x1E0A71 mov     rdi, r13
//   0x1E0A74 mov     rsi, rax
//   0x1E0A77 mov     [rsp+0E8h+var_C8], rax
//   0x1E0A7C call    sub_30FC00
//   0x1E0A81 test    al, al
//   0x1E0A83 mov     rcx, [rsp+0E8h+var_D0]
//   0x1E0A88 jz      loc_1E0BD2
//   0x1E0A8E lea     rdi, [rcx+10h]
//   0x1E0A92 mov     rsi, r13
//   0x1E0A95 mov     [rsp+0E8h+var_D0], rcx
//   0x1E0A9A call    sub_30FB00
//   0x1E0A9F mov     rax, [r15]
//   0x1E0AA2 mov     rcx, [rsp+0E8h+var_D0]
//   0x1E0AA7 mov     rdx, rax
//   0x1E0AAA and     edx, 2
//   0x1E0AAD cmp     dword ptr [rcx+10h], 1
//   0x1E0AB1 jnz     loc_1E0C18
//   0x1E0AB7 lea     rdi, [rbx+8]
//   0x1E0ABB mov     rcx, r15
//   0x1E0ABE cmp     [rbp+0], r15
//   0x1E0AC2 jz      loc_1E0E50
//   0x1E0AC8 test    rdx, rdx
//   0x1E0ACB jz      loc_1E0E00
//   0x1E0AD1 mov     rsi, r15
//   0x1E0AD4 mov     [rsp+0E8h+var_D0], rcx
//   0x1E0AD9 call    sub_1DF190
//   0x1E0ADE mov     r15, [rsp+0E8h+var_D0]
//   0x1E0AE3 cmp     dword ptr [rsp+0E8h+var_88], 1
//   0x1E0AE8 jnz     loc_1E0D70
//   0x1E0AEE mov     rdx, [rbx+8]
//   0x1E0AF2 lea     rax, [rbx+8]
//   0x1E0AF6 mov     [rsp+0E8h+var_D8], rax
//   0x1E0AFB cmp     r15, rdx
//   0x1E0AFE jz      loc_1E0B94
//   0x1E0B04 lea     rcx, [r15+18h]
//   0x1E0B08 cmp     [r15+20h], r14b
//   0x1E0B0C jnz     loc_1E0DD8
//   0x1E0B12 movsxd  rax, dword ptr [rcx+14h]
//   0x1E0B16 add     rax, [r15+18h]
//   0x1E0B1A cmp     rax, r12
//   0x1E0B1D jg      loc_1E0DD8
//   0x1E0B23 mov     rax, [r15]
//   0x1E0B26 mov     rsi, rax
//   0x1E0B29 and     esi, 2
//   0x1E0B2C cmp     dword ptr [rcx+10h], 8
//   0x1E0B30 jz      loc_1E0C80
//   0x1E0B36 mov     rdx, r15
//   0x1E0B39 cmp     r15, [rbp+0]
//   0x1E0B3D jz      loc_1E0C50
//   0x1E0B43 test    rsi, rsi
//   0x1E0B46 jnz     short loc_1E0B70
//   0x1E0B48 mov     rcx, [r15+10h]
//   0x1E0B4C test    byte ptr [rcx], 2
//   0x1E0B4F jz      loc_1E0CB0
//   0x1E0B55 and     rax, 0FFFFFFFFFFFFFFFCh
//   0x1E0B59 mov     rdx, rax
//   0x1E0B5C mov     rax, [rax]
//   0x1E0B5F test    al, 2
//   0x1E0B61 jz      loc_1E0E20
//   0x1E0B67 nop     word ptr [rax+rax+00000000h]
//   0x1E0B70 mov     rdi, [rsp+0E8h+var_D8]
//   0x1E0B75 mov     rsi, r15
//   0x1E0B78 mov     [rsp+0E8h+var_E0], rdx
//   0x1E0B7D call    sub_1DF190
//   0x1E0B82 mov     r15, [rsp+0E8h+var_E0]
//   0x1E0B87 mov     rdx, [rbx+8]
//   0x1E0B8B cmp     rdx, r15
//   0x1E0B8E jnz     loc_1E0B04
//   0x1E0B94 mov     rdi, [rsp+0E8h+var_C8]
//   0x1E0B99 call    sub_30DA80
//   0x1E0B9E mov     [rbp+0], r15
//   0x1E0BA2 mov     ebx, 1
//   0x1E0BA7 jmp     short loc_1E0BDE
//   0x1E0BA9 align 10h
//   0x1E0BB0 mov     eax, dword ptr [rsp+0E8h+var_A8+4]
//   0x1E0BB4 lea     rsi, [rsp+0E8h+var_88]
//   0x1E0BB9 mov     rdi, r13
//   0x1E0BBC mov     [rsp+0E8h+var_C8], rsi
//   0x1E0BC1 sub     eax, edx
//   0x1E0BC3 mov     edx, eax
//   0x1E0BC5 call    sub_30FC00
//   0x1E0BCA test    al, al
//   0x1E0BCC jnz     loc_1E0D20
//   0x1E0BD2 mov     rdi, [rsp+0E8h+var_C8]
//   0x1E0BD7 call    sub_30DA80
//   0x1E0BDC xor     ebx, ebx
//   0x1E0BDE mov     rdi, r13
//   0x1E0BE1 call    sub_30DA80
//   0x1E0BE6 mov     rax, [rsp+0E8h+var_40]
//   0x1E0BEE sub     rax, fs:28h
//   0x1E0BF7 jnz     loc_1E162B
//   0x1E0BFD add     rsp, 0B8h
//   0x1E0C04 mov     eax, ebx
//   0x1E0C06 pop     rbx
//   0x1E0C07 pop     rbp
//   0x1E0C08 pop     r12
//   0x1E0C0A pop     r13
//   0x1E0C0C pop     r14
//   0x1E0C0E pop     r15
//   0x1E0C10 retn
//   0x1E0C11 align 8
//   0x1E0C18 test    rdx, rdx
//   0x1E0C1B jnz     loc_1E0AE3
//   0x1E0C21 mov     rdx, [r15+10h]
//   0x1E0C25 test    byte ptr [rdx], 2
//   0x1E0C28 jz      loc_1E0EF0
//   0x1E0C2E and     rax, 0FFFFFFFFFFFFFFFCh
//   0x1E0C32 mov     rdx, [rax]
//   0x1E0C35 test    dl, 2
//   0x1E0C38 jz      loc_1E0F43
//   0x1E0C3E mov     r15, rax
//   0x1E0C41 jmp     loc_1E0AE3
//   0x1E0C46 align 10h
//   0x1E0C50 test    rsi, rsi
//   0x1E0C53 jz      loc_1E0CD8
//   0x1E0C59 mov     rdi, [rsp+0E8h+var_D8]
//   0x1E0C5E mov     rsi, r15
//   0x1E0C61 mov     [rsp+0E8h+var_E0], rdx
//   0x1E0C66 call    sub_1DF190
//   0x1E0C6B mov     rdx, [rsp+0E8h+var_E0]
//   0x1E0C70 mov     [rbp+0], rdx
//   0x1E0C74 mov     r15, rdx
//   0x1E0C77 mov     rdx, [rbx+8]
//   0x1E0C7B jmp     loc_1E0B8B
//   0x1E0C80 test    rsi, rsi
//   0x1E0C83 jnz     loc_1E0B8B
//   0x1E0C89 mov     rcx, [r15+10h]
//   0x1E0C8D test    byte ptr [rcx], 2
//   0x1E0C90 jz      loc_1E0ED0
//   0x1E0C96 and     rax, 0FFFFFFFFFFFFFFFCh
//   0x1E0C9A mov     rcx, [rax]
//   0x1E0C9D test    cl, 2
//   0x1E0CA0 jz      loc_1E0F08
//   0x1E0CA6 mov     r15, rax
//   0x1E0CA9 jmp     loc_1E0B8B
//   0x1E0CAE align 10h
//   0x1E0CB0 mov     rdx, rcx
//   0x1E0CB3 mov     rcx, [rcx+8]
//   0x1E0CB7 test    byte ptr [rcx], 2
//   0x1E0CBA jnz     loc_1E0B70
//   0x1E0CC0 mov     rdx, rcx
//   0x1E0CC3 mov     rcx, [rcx+8]
//   0x1E0CC7 test    byte ptr [rcx], 2
//   0x1E0CCA jnz     loc_1E0B70
//   0x1E0CD0 jmp     short loc_1E0CB0
//   0x1E0CD2 align 8
//   0x1E0CD8 mov     rcx, [r15+10h]
//   0x1E0CDC test    byte ptr [rcx], 2
//   0x1E0CDF jz      loc_1E0EB0
//   0x1E0CE5 and     rax, 0FFFFFFFFFFFFFFFCh
//   0x1E0CE9 mov     rdx, rax
//   0x1E0CEC mov     rax, [rax]
//   0x1E0CEF test    al, 2
//   0x1E0CF1 jnz     loc_1E0C59
//   0x1E0CF7 mov     rsi, r15
//   0x1E0CFA cmp     [rdx+10h], rsi
//   0x1E0CFE jnz     loc_1E0C59
//   0x1E0D04 and     rax, 0FFFFFFFFFFFFFFFCh
//   0x1E0D08 mov     rsi, rdx
//   0x1E0D0B mov     rcx, rax
//   0x1E0D0E mov     rax, [rax]
//   0x1E0D11 mov     rdx, rcx
//   0x1E0D14 test    al, 2
//   0x1E0D16 jz      short loc_1E0CFA
//   0x1E0D18 jmp     loc_1E0C59
//   0x1E0D1D align 20h
//   0x1E0D20 movdqa  xmm2, [rsp+0E8h+var_88]
//   0x1E0D26 movdqa  xmm1, xmmword ptr [r13+0]
//   0x1E0D2C movdqa  xmm0, xmmword ptr [r13+10h]
//   0x1E0D32 mov     rcx, [rsp+0E8h+var_D0]
//   0x1E0D37 movaps  xmmword ptr [r13+0], xmm2
//   0x1E0D3C movdqa  xmm2, xmmword ptr [rsp+70h]
//   0x1E0D42 movaps  [rsp+0E8h+var_68], xmm1
//   0x1E0D4A movaps  [rsp+0E8h+var_58], xmm0
//   0x1E0D52 movaps  xmmword ptr [r13+10h], xmm2
//   0x1E0D57 movaps  [rsp+0E8h+var_88], xmm1
//   0x1E0D5C movaps  xmmword ptr [rsp+70h], xmm0
//   0x1E0D61 jmp     loc_1E0A8E
//   0x1E0D66 align 10h
//   0x1E0D70 mov     rdi, [rsp+0E8h+var_C0]
//   0x1E0D75 add     [rsp+0E8h+var_E0], rdi
//   0x1E0D7A mov     rdi, [rsp+0E8h+var_C8]
//   0x1E0D7F movdqa  xmm1, xmmword ptr [r13+0]
//   0x1E0D85 movdqa  xmm0, xmmword ptr [r13+10h]
//   0x1E0D8B movdqa  xmm2, xmmword ptr [rdi]
//   0x1E0D8F movaps  xmmword ptr [rdi], xmm1
//   0x1E0D92 movaps  [rsp+0E8h+var_68], xmm1
//   0x1E0D9A movaps  xmmword ptr [r13+0], xmm2
//   0x1E0D9F movdqa  xmm2, xmmword ptr [rdi+10h]
//   0x1E0DA4 mov     eax, dword ptr [rsp+0E8h+var_A8+4]
//   0x1E0DA8 movaps  xmmword ptr [rdi+10h], xmm0
//   0x1E0DAC mov     dword ptr [rsp+0E8h+var_D0], eax
//   0x1E0DB0 movaps  [rsp+0E8h+var_58], xmm0
//   0x1E0DB8 movaps  xmmword ptr [r13+10h], xmm2
//   0x1E0DBD call    sub_30DA80
//   0x1E0DC2 cmp     r15, [rbx+8]
//   0x1E0DC6 mov     eax, dword ptr [rsp+0E8h+var_D0]
//   0x1E0DCA jnz     loc_1E09F1
//   0x1E0DD0 jmp     loc_1E0B9E
//   0x1E0DD5 align 8
//   0x1E0DD8 cmp     rdx, r15
//   0x1E0DDB jz      loc_1E0B94
//   0x1E0DE1 cmp     [rcx+8], r14b
//   0x1E0DE5 jnz     loc_1E0B94
//   0x1E0DEB cmp     [r15+18h], r12
//   0x1E0DEF jge     loc_1E0B94
//   0x1E0DF5 jmp     loc_1E0BD2
//   0x1E0DFA align 20h
//   0x1E0E00 mov     rdx, [r15+10h]
//   0x1E0E04 test    byte ptr [rdx], 2
//   0x1E0E07 jnz     loc_1E0F70
//   0x1E0E0D mov     rcx, rdx
//   0x1E0E10 mov     rdx, [rdx+8]
//   0x1E0E14 test    byte ptr [rdx], 2
//   0x1E0E17 jnz     loc_1E0AD1
//   0x1E0E1D jmp     short loc_1E0E0D
//   0x1E0E1F align 20h
//   0x1E0E20 mov     rsi, r15
//   0x1E0E23 cmp     [rdx+10h], rsi
//   0x1E0E27 jnz     loc_1E0B70
//   0x1E0E2D and     rax, 0FFFFFFFFFFFFFFFCh
//   0x1E0E31 mov     rsi, rdx
//   0x1E0E34 mov     rcx, rax
//   0x1E0E37 mov     rax, [rax]
//   0x1E0E3A mov     rdx, rcx
//   0x1E0E3D test    al, 2
//   0x1E0E3F jz      short loc_1E0E23
//   0x1E0E41 jmp     loc_1E0B70
//   0x1E0E46 align 10h
//   0x1E0E50 test    rdx, rdx
//   0x1E0E53 jnz     short loc_1E0E90
//   0x1E0E55 mov     rdx, [r15+10h]
//   0x1E0E59 test    byte ptr [rdx], 2
//   0x1E0E5C jz      loc_1E0FB0
//   0x1E0E62 and     rax, 0FFFFFFFFFFFFFFFCh
//   0x1E0E66 mov     rsi, r15
//   0x1E0E69 mov     rcx, rax
//   0x1E0E6C mov     rax, [rax]
//   0x1E0E6F test    al, 2
//   0x1E0E71 jnz     short loc_1E0E90
//   0x1E0E73 cmp     [rcx+10h], rsi
//   0x1E0E77 jnz     short loc_1E0E90
//   0x1E0E79 and     rax, 0FFFFFFFFFFFFFFFCh
//   0x1E0E7D mov     rdx, rax
//   0x1E0E80 mov     rax, [rax]
//   0x1E0E83 test    al, 2
//   0x1E0E85 jz      loc_1E12AD
//   0x1E0E8B mov     rcx, rdx
//   0x1E0E8E xchg    ax, ax
//   0x1E0E90 mov     rsi, r15
//   0x1E0E93 mov     [rsp+0E8h+var_D0], rcx
//   0x1E0E98 call    sub_1DF190
//   0x1E0E9D mov     rcx, [rsp+0E8h+var_D0]
//   0x1E0EA2 mov     [rbp+0], rcx
//   0x1E0EA6 mov     r15, rcx
//   0x1E0EA9 jmp     loc_1E0AE3
//   0x1E0EAE align 10h
//   0x1E0EB0 mov     rdx, rcx
//   0x1E0EB3 mov     rcx, [rcx+8]
//   0x1E0EB7 test    byte ptr [rcx], 2
//   0x1E0EBA jnz     loc_1E0C59
//   0x1E0EC0 jmp     short loc_1E0EB0
//   0x1E0EC2 align 10h
//   0x1E0ED0 mov     r15, rcx
//   0x1E0ED3 mov     rcx, [rcx+8]
//   0x1E0ED7 test    byte ptr [rcx], 2
//   0x1E0EDA jnz     loc_1E0B8B
//   0x1E0EE0 jmp     short loc_1E0ED0
//   0x1E0EE2 align 10h
//   0x1E0EF0 mov     r15, rdx
//   0x1E0EF3 mov     rdx, [rdx+8]
//   0x1E0EF7 test    byte ptr [rdx], 2
//   0x1E0EFA jnz     loc_1E0AE3
//   0x1E0F00 jmp     short loc_1E0EF0
//   0x1E0F02 align 8
//   0x1E0F08 cmp     r15, [rax+10h]
//   0x1E0F0C jnz     loc_1E0CA6
//   0x1E0F12 and     rcx, 0FFFFFFFFFFFFFFFCh
//   0x1E0F16 mov     r15, rcx
//   0x1E0F19 mov     rcx, [rcx]
//   0x1E0F1C test    cl, 2
//   0x1E0F1F jnz     loc_1E0B8B
//   0x1E0F25 mov     rsi, rax
//   0x1E0F28 mov     rax, r15
//   0x1E0F2B mov     r15, rsi
//   0x1E0F2E cmp     r15, [rax+10h]
//   0x1E0F32 jz      short loc_1E0F12
//   0x1E0F34 jmp     loc_1E0CA6
//   0x1E0F39 align 20h
//   0x1E0F40 mov     rax, rcx
//   0x1E0F43 cmp     [rax+10h], r15
//   0x1E0F47 jnz     loc_1E0C3E
//   0x1E0F4D mov     rcx, rdx
//   0x1E0F50 mov     r15, rax
//   0x1E0F53 and     rcx, 0FFFFFFFFFFFFFFFCh
//   0x1E0F57 mov     rdx, [rcx]
//   0x1E0F5A test    dl, 2
//   0x1E0F5D jz      short loc_1E0F40
//   0x1E0F5F mov     r15, rcx
//   0x1E0F62 jmp     loc_1E0AE3
//   0x1E0F67 align 10h
//   0x1E0F70 and     rax, 0FFFFFFFFFFFFFFFCh
//   0x1E0F74 mov     rcx, rax
//   0x1E0F77 mov     rax, [rax]
//   0x1E0F7A test    al, 2
//   0x1E0F7C jnz     loc_1E0AD1
//   0x1E0F82 mov     rsi, r15
//   0x1E0F85 cmp     [rcx+10h], rsi
//   0x1E0F89 jnz     loc_1E0AD1
//   0x1E0F8F and     rax, 0FFFFFFFFFFFFFFFCh
//   0x1E0F93 mov     rsi, rcx
//   0x1E0F96 mov     rdx, rax
//   0x1E0F99 mov     rax, [rax]
//   0x1E0F9C mov     rcx, rdx
//   0x1E0F9F test    al, 2
//   0x1E0FA1 jz      short loc_1E0F85
//   0x1E0FA3 jmp     loc_1E0AD1
//   0x1E0FA8 align 10h
//   0x1E0FB0 mov     rcx, rdx
//   0x1E0FB3 mov     rdx, [rdx+8]
//   0x1E0FB7 test    byte ptr [rdx], 2
//   0x1E0FBA jnz     loc_1E0E90
//   0x1E0FC0 jmp     short loc_1E0FB0
//   0x1E0FC2 movdqa  xmm2, [rsp+0E8h+var_88]
//   0x1E0FC8 movdqa  xmm1, [rsp+0E8h+var_A8]
//   0x1E0FCE mov     [rsp+0E8h+var_E0], rcx
//   0x1E0FD3 movdqa  xmm0, [rsp+0E8h+var_98]
//   0x1E0FD9 mov     rdi, [rsp+0E8h+var_C8]
//   0x1E0FDE movaps  [rsp+0E8h+var_A8], xmm2
//   0x1E0FE3 movdqa  xmm2, xmmword ptr [rsp+70h]
//   0x1E0FE9 movaps  [rsp+0E8h+var_68], xmm1
//   0x1E0FF1 movaps  [rsp+0E8h+var_58], xmm0
//   0x1E0FF9 movaps  [rsp+0E8h+var_98], xmm2
//   0x1E0FFE movaps  [rsp+0E8h+var_88], xmm1
//   0x1E1003 movaps  xmmword ptr [rsp+70h], xmm0
//   0x1E1008 call    sub_30DA80
//   0x1E100D mov     rcx, [rsp+0E8h+var_E0]
//   0x1E1012 lea     rdi, [r15+28h]
//   0x1E1016 mov     rsi, r13
//   0x1E1019 mov     [rsp+0E8h+var_E0], rcx
//   0x1E101E call    sub_30FB00
//   0x1E1023 mov     rax, [r15]
//   0x1E1026 mov     rcx, [rsp+0E8h+var_E0]
//   0x1E102B mov     rdx, rax
//   0x1E102E and     edx, 2
//   0x1E1031 cmp     dword ptr [rcx+10h], 1
//   0x1E1035 jz      loc_1E12B8
//   0x1E103B test    rdx, rdx
//   0x1E103E jnz     loc_1E0B9E
//   0x1E1044 mov     rdx, [r15+10h]
//   0x1E1048 test    byte ptr [rdx], 2
//   0x1E104B jnz     loc_1E1365
//   0x1E1051 mov     r15, rdx
//   0x1E1054 mov     rdx, [rdx+8]
//   0x1E1058 test    byte ptr [rdx], 2
//   0x1E105B jnz     loc_1E0B9E
//   0x1E1061 jmp     short loc_1E1051
//   0x1E1063 align 8
//   0x1E1068 cmp     r12, rdi
//   0x1E106B jnz     loc_1E0BDC
//   0x1E1071 mov     rax, cs:qword_3FDBA0
//   0x1E1078 pxor    xmm0, xmm0
//   0x1E107C cmp     byte ptr [rsp+0E8h+var_D8], 0
//   0x1E1081 mov     [rsp+0E8h+var_70], 0
//   0x1E108A movups  [rsp+0E8h+var_88+8], xmm0
//   0x1E108F lea     r12, [r15+28h]
//   0x1E1093 mov     qword ptr [rsp+0E8h+var_88], rax
//   0x1E1098 jnz     loc_1E1459
//   0x1E109E mov     edx, dword ptr [rsp+0E8h+var_E0]
//   0x1E10A2 lea     rax, [rsp+0E8h+var_88]
//   0x1E10A7 mov     rdi, r12
//   0x1E10AA mov     [rsp+0E8h+var_C8], rax
//   0x1E10AF sub     edx, esi
//   0x1E10B1 mov     rsi, rax
//   0x1E10B4 call    sub_30FC00
//   0x1E10B9 test    al, al
//   0x1E10BB jz      loc_1E14CF
//   0x1E10C1 mov     rax, [r15]
//   0x1E10C4 lea     r14, [rbx+8]
//   0x1E10C8 mov     r12, r15
//   0x1E10CB test    al, 2
//   0x1E10CD jnz     loc_1E13A0
//   0x1E10D3 mov     r12, [r15+10h]
//   0x1E10D7 test    byte ptr [r12], 2
//   0x1E10DC jnz     loc_1E1575
//   0x1E10E2 mov     rax, [r12+8]
//   0x1E10E7 test    byte ptr [rax], 2
//   0x1E10EA jnz     loc_1E13A0
//   0x1E10F0 mov     r12, rax
//   0x1E10F3 jmp     short loc_1E10E2
//   0x1E10F5 align 8
//   0x1E10F8 cmp     r12, rdi
//   0x1E10FB jnz     loc_1E0BDC
//   0x1E1101 mov     rax, cs:qword_3FDBA0
//   0x1E1108 pxor    xmm0, xmm0
//   0x1E110C cmp     byte ptr [rsp+0E8h+var_D8], 0
//   0x1E1111 mov     [rsp+0E8h+var_70], 0
//   0x1E111A mov     [rsp+0E8h+var_D8], rcx
//   0x1E111F mov     qword ptr [rsp+0E8h+var_88], rax
//   0x1E1124 movups  [rsp+0E8h+var_88+8], xmm0
//   0x1E1129 jnz     loc_1E13EC
//   0x1E112F mov     eax, dword ptr [rsp+0E8h+var_E0]
//   0x1E1133 mov     edx, esi
//   0x1E1135 mov     rdi, r13
//   0x1E1138 sub     edx, eax
//   0x1E113A lea     rax, [rsp+0E8h+var_88]
//   0x1E113F mov     rsi, rax
//   0x1E1142 mov     [rsp+0E8h+var_C8], rax
//   0x1E1147 call    sub_30FC00
//   0x1E114C test    al, al
//   0x1E114E mov     rcx, [rsp+0E8h+var_D8]
//   0x1E1153 jz      loc_1E154C
//   0x1E1159 cmp     dword ptr [rsp+0E8h+var_88], 1
//   0x1E115E jnz     loc_1E0FC2
//   0x1E1164 mov     rdx, [r15]
//   0x1E1167 lea     rdi, [rbx+8]
//   0x1E116B mov     r12, r15
//   0x1E116E test    dl, 2
//   0x1E1171 jnz     short loc_1E118C
//   0x1E1173 mov     rax, [r15+10h]
//   0x1E1177 test    byte ptr [rax], 2
//   0x1E117A jnz     loc_1E15B2
//   0x1E1180 mov     r12, rax
//   0x1E1183 mov     rax, [rax+8]
//   0x1E1187 test    byte ptr [rax], 2
//   0x1E118A jz      short loc_1E1180
//   0x1E118C mov     rsi, r15
//   0x1E118F call    sub_1DF190
//   0x1E1194 mov     rdi, [rsp+0E8h+var_C8]
//   0x1E1199 mov     r15, r12
//   0x1E119C call    sub_30DA80
//   0x1E11A1 jmp     loc_1E0B9E
//   0x1E11A6 cmp     dword ptr [rcx+10h], 8
//   0x1E11AA jz      loc_1E0B9E
//   0x1E11B0 mov     rdx, cs:qword_3FDBA0
//   0x1E11B7 pxor    xmm0, xmm0
//   0x1E11BB cmp     byte ptr [rsp+0E8h+var_D8], 0
//   0x1E11C0 mov     [rsp+0E8h+var_70], 0
//   0x1E11C9 movups  [rsp+0E8h+var_88+8], xmm0
//   0x1E11CE lea     r14, [r15+28h]
//   0x1E11D2 mov     qword ptr [rsp+0E8h+var_88], rdx
//   0x1E11D7 jnz     loc_1E12FA
//   0x1E11DD lea     rsi, [rsp+0E8h+var_88]
//   0x1E11E2 mov     edx, eax
//   0x1E11E4 mov     rdi, r14
//   0x1E11E7 mov     [rsp+0E8h+var_E0], rcx
//   0x1E11EC mov     [rsp+0E8h+var_C8], rsi
//   0x1E11F1 call    sub_30FC00
//   0x1E11F6 test    al, al
//   0x1E11F8 mov     rcx, [rsp+0E8h+var_E0]
//   0x1E11FD jz      loc_1E14C0
//   0x1E1203 lea     rdi, [rcx+10h]
//   0x1E1207 mov     rsi, r13
//   0x1E120A mov     [rsp+0E8h+var_E0], rcx
//   0x1E120F call    sub_30FB00
//   0x1E1214 mov     rax, [r15]
//   0x1E1217 mov     rcx, [rsp+0E8h+var_E0]
//   0x1E121C mov     rdx, rax
//   0x1E121F and     edx, 2
//   0x1E1222 cmp     dword ptr [rcx+10h], 1
//   0x1E1226 jz      loc_1E14DE
//   0x1E122C test    rdx, rdx
//   0x1E122F jnz     short loc_1E126A
//   0x1E1231 mov     rdx, [r15+10h]
//   0x1E1235 test    byte ptr [rdx], 2
//   0x1E1238 jnz     short loc_1E125B
//   0x1E123A mov     rax, [rdx+8]
//   0x1E123E test    byte ptr [rax], 2
//   0x1E1241 jnz     loc_1E1623
//   0x1E1247 mov     rdx, rax
//   0x1E124A jmp     short loc_1E123A
//   0x1E124C mov     rcx, r15
//   0x1E124F mov     r15, rax
//   0x1E1252 cmp     rcx, [rax+10h]
//   0x1E1256 jnz     short loc_1E126A
//   0x1E1258 mov     rax, rdx
//   0x1E125B and     rax, 0FFFFFFFFFFFFFFFCh
//   0x1E125F mov     rdx, [rax]
//   0x1E1262 test    dl, 2
//   0x1E1265 jz      short loc_1E124C
//   0x1E1267 mov     r15, rax
//   0x1E126A cmp     dword ptr [rsp+0E8h+var_88], 1
//   0x1E126F jz      short loc_1E129E
//   0x1E1271 mov     rdx, qword ptr [rsp+0E8h+var_B8+8]
//   0x1E1276 mov     qword ptr [rsp+0E8h+var_B8], r12
//   0x1E127B lea     rdi, [rbx+8]
//   0x1E127F mov     rsi, r15
//   0x1E1282 mov     r8, [rsp+0E8h+var_C8]
//   0x1E1287 mov     qword ptr [rsp+0E8h+var_B8+8], rdx
//   0x1E128C mov     rdx, qword ptr [rsp+0E8h+var_B8]
//   0x1E1291 mov     rcx, qword ptr [rsp+0E8h+var_B8+8]
//   0x1E1296 call    sub_1DF9A0
//   0x1E129B mov     r15, rax
//   0x1E129E mov     rdi, [rsp+0E8h+var_C8]
//   0x1E12A3 call    sub_30DA80
//   0x1E12A8 jmp     loc_1E0B9E
//   0x1E12AD mov     rsi, rcx
//   0x1E12B0 mov     rcx, rdx
//   0x1E12B3 jmp     loc_1E0E73
//   0x1E12B8 lea     rdi, [rbx+8]
//   0x1E12BC mov     r12, r15
//   0x1E12BF test    rdx, rdx
//   0x1E12C2 jnz     short loc_1E12EA
//   0x1E12C4 mov     r12, [r15+10h]
//   0x1E12C8 test    byte ptr [r12], 2
//   0x1E12CD jnz     loc_1E1513
//   0x1E12D3 mov     rax, [r12+8]
//   0x1E12D8 test    byte ptr [rax], 2
//   0x1E12DB jnz     short loc_1E12EA
//   0x1E12DD mov     r12, rax
//   0x1E12E0 mov     rax, [r12+8]
//   0x1E12E5 test    byte ptr [rax], 2
//   0x1E12E8 jz      short loc_1E12DD
//   0x1E12EA mov     rsi, r15
//   0x1E12ED call    sub_1DF190
//   0x1E12F2 mov     r15, r12
//   0x1E12F5 jmp     loc_1E0B9E
//   0x1E12FA mov     edx, [rcx+14h]
//   0x1E12FD mov     rdi, r14
//   0x1E1300 mov     [rsp+0E8h+var_E0], rcx
//   0x1E1305 sub     edx, eax
//   0x1E1307 lea     rax, [rsp+0E8h+var_88]
//   0x1E130C mov     rsi, rax
//   0x1E130F mov     [rsp+0E8h+var_C8], rax
//   0x1E1314 call    sub_30FC00
//   0x1E1319 test    al, al
//   0x1E131B mov     rcx, [rsp+0E8h+var_E0]
//   0x1E1320 jz      loc_1E14C0
//   0x1E1326 movdqa  xmm2, [rsp+0E8h+var_88]
//   0x1E132C movdqu  xmm1, xmmword ptr [r14]
//   0x1E1331 movdqu  xmm0, xmmword ptr [r14+10h]
//   0x1E1337 movups  xmmword ptr [r14], xmm2
//   0x1E133B movdqa  xmm2, xmmword ptr [rsp+70h]
//   0x1E1341 movaps  [rsp+0E8h+var_68], xmm1
//   0x1E1349 movups  xmmword ptr [r14+10h], xmm2
//   0x1E134E movaps  [rsp+0E8h+var_58], xmm0
//   0x1E1356 movaps  [rsp+0E8h+var_88], xmm1
//   0x1E135B movaps  xmmword ptr [rsp+70h], xmm0
//   0x1E1360 jmp     loc_1E1203
//   0x1E1365 and     rax, 0FFFFFFFFFFFFFFFCh
//   0x1E1369 mov     rdx, [rax]
//   0x1E136C test    dl, 2
//   0x1E136F jz      short loc_1E1379
//   0x1E1371 mov     r15, rax
//   0x1E1374 jmp     loc_1E0B9E
//   0x1E1379 cmp     [rax+10h], r15
//   0x1E137D jnz     short loc_1E1371
//   0x1E137F mov     rcx, rdx
//   0x1E1382 mov     r15, rax
//   0x1E1385 and     rcx, 0FFFFFFFFFFFFFFFCh
//   0x1E1389 mov     rdx, [rcx]
//   0x1E138C test    dl, 2
//   0x1E138F jnz     loc_1E156D
//   0x1E1395 mov     rax, rcx
//   0x1E1398 cmp     [rax+10h], r15
//   0x1E139C jz      short loc_1E137F
//   0x1E139E jmp     short loc_1E1371
//   0x1E13A0 mov     rsi, r15
//   0x1E13A3 mov     rdi, r14
//   0x1E13A6 call    sub_1DF190
//   0x1E13AB cmp     dword ptr [rsp+0E8h+var_88], 1
//   0x1E13B0 jz      loc_1E155B
//   0x1E13B6 mov     rdx, qword ptr [rsp+0E8h+var_B8+8]
//   0x1E13BB mov     rax, [rsp+0E8h+var_E0]
//   0x1E13C0 mov     rsi, r12
//   0x1E13C3 mov     rdi, r14
//   0x1E13C6 mov     r8, [rsp+0E8h+var_C8]
//   0x1E13CB mov     rcx, rdx
//   0x1E13CE mov     rdx, rax
//   0x1E13D1 call    sub_1DF9A0
//   0x1E13D6 mov     rdi, [rsp+0E8h+var_C8]
//   0x1E13DB mov     r15, rax
//   0x1E13DE call    sub_30DA80
//   0x1E13E3 lea     rcx, [r15+18h]
//   0x1E13E7 jmp     loc_1E1012
//   0x1E13EC lea     rax, [rsp+0E8h+var_88]
//   0x1E13F1 mov     edx, dword ptr [rsp+0E8h+var_E0]
//   0x1E13F5 add     edx, dword ptr [rsp+0E8h+var_A8+4]
//   0x1E13F9 mov     rdi, r13
//   0x1E13FC sub     edx, esi
//   0x1E13FE mov     rsi, rax
//   0x1E1401 mov     [rsp+0E8h+var_C8], rax
//   0x1E1406 call    sub_30FC00
//   0x1E140B test    al, al
//   0x1E140D mov     rcx, [rsp+0E8h+var_D8]
//   0x1E1412 jz      loc_1E154C
//   0x1E1418 movdqa  xmm2, [rsp+0E8h+var_88]
//   0x1E141E movdqa  xmm1, [rsp+0E8h+var_A8]
//   0x1E1424 movdqa  xmm0, [rsp+0E8h+var_98]
//   0x1E142A movaps  [rsp+0E8h+var_A8], xmm2
//   0x1E142F movdqa  xmm2, xmmword ptr [rsp+70h]
//   0x1E1435 movaps  [rsp+0E8h+var_68], xmm1
//   0x1E143D movaps  [rsp+0E8h+var_58], xmm0
//   0x1E1445 movaps  [rsp+0E8h+var_98], xmm2
//   0x1E144A movaps  [rsp+0E8h+var_88], xmm1
//   0x1E144F movaps  xmmword ptr [rsp+70h], xmm0
//   0x1E1454 jmp     loc_1E1159
//   0x1E1459 mov     eax, dword ptr [rsp+0E8h+var_E0]
//   0x1E145D mov     edx, [rcx+14h]
//   0x1E1460 mov     rdi, r12
//   0x1E1463 sub     edx, eax
//   0x1E1465 lea     rax, [rsp+0E8h+var_88]
//   0x1E146A add     edx, esi
//   0x1E146C mov     rsi, rax
//   0x1E146F mov     [rsp+0E8h+var_C8], rax
//   0x1E1474 call    sub_30FC00
//   0x1E1479 test    al, al
//   0x1E147B jz      short loc_1E14CF
//   0x1E147D movdqa  xmm2, [rsp+0E8h+var_88]
//   0x1E1483 movdqu  xmm1, xmmword ptr [r12]
//   0x1E1489 movdqu  xmm0, xmmword ptr [r12+10h]
//   0x1E1490 movups  xmmword ptr [r12], xmm2
//   0x1E1495 movdqa  xmm2, xmmword ptr [rsp+70h]
//   0x1E149B movaps  [rsp+0E8h+var_68], xmm1
//   0x1E14A3 movups  xmmword ptr [r12+10h], xmm2
//   0x1E14A9 movaps  [rsp+0E8h+var_58], xmm0
//   0x1E14B1 movaps  [rsp+0E8h+var_88], xmm1
//   0x1E14B6 movaps  xmmword ptr [rsp+70h], xmm0
//   0x1E14BB jmp     loc_1E10C1
//   0x1E14C0 mov     rdi, [rsp+0E8h+var_C8]
//   0x1E14C5 call    sub_30DA80
//   0x1E14CA jmp     loc_1E0BDC
//   0x1E14CF mov     rdi, [rsp+0E8h+var_C8]
//   0x1E14D4 call    sub_30DA80
//   0x1E14D9 jmp     loc_1E0BDC
//   0x1E14DE lea     rdi, [rbx+8]
//   0x1E14E2 mov     r14, r15
//   0x1E14E5 test    rdx, rdx
//   0x1E14E8 jnz     short loc_1E1503
//   0x1E14EA mov     rdx, [r15+10h]
//   0x1E14EE test    byte ptr [rdx], 2
//   0x1E14F1 jnz     loc_1E15EB
//   0x1E14F7 mov     r14, rdx
//   0x1E14FA mov     rdx, [rdx+8]
//   0x1E14FE test    byte ptr [rdx], 2
//   0x1E1501 jz      short loc_1E14F7
//   0x1E1503 mov     rsi, r15
//   0x1E1506 call    sub_1DF190
//   0x1E150B mov     r15, r14
//   0x1E150E jmp     loc_1E126A
//   0x1E1513 and     rax, 0FFFFFFFFFFFFFFFCh
//   0x1E1517 mov     r12, rax
//   0x1E151A mov     rax, [rax]
//   0x1E151D test    al, 2
//   0x1E151F jnz     loc_1E12EA
//   0x1E1525 mov     rcx, r15
//   0x1E1528 cmp     [r12+10h], rcx
//   0x1E152D jnz     loc_1E12EA
//   0x1E1533 and     rax, 0FFFFFFFFFFFFFFFCh
//   0x1E1537 mov     rcx, r12
//   0x1E153A mov     rdx, rax
//   0x1E153D mov     rax, [rax]
//   0x1E1540 mov     r12, rdx
//   0x1E1543 test    al, 2
//   0x1E1545 jz      short loc_1E1528
//   0x1E1547 jmp     loc_1E12EA
//   0x1E154C mov     rdi, [rsp+0E8h+var_C8]
//   0x1E1551 call    sub_30DA80
//   0x1E1556 jmp     loc_1E0BDC
//   0x1E155B mov     rdi, [rsp+0E8h+var_C8]
//   0x1E1560 mov     r15, r12
//   0x1E1563 call    sub_30DA80
//   0x1E1568 jmp     loc_1E0B9E
//   0x1E156D mov     r15, rcx
//   0x1E1570 jmp     loc_1E0B9E
//   0x1E1575 and     rax, 0FFFFFFFFFFFFFFFCh
//   0x1E1579 mov     r12, rax
//   0x1E157C mov     rax, [rax]
//   0x1E157F test    al, 2
//   0x1E1581 jnz     loc_1E13A0
//   0x1E1587 mov     rcx, r15
//   0x1E158A mov     rdx, r12
//   0x1E158D cmp     [r12+10h], rcx
//   0x1E1592 jnz     loc_1E13A0
//   0x1E1598 and     rax, 0FFFFFFFFFFFFFFFCh
//   0x1E159C mov     r12, rax
//   0x1E159F mov     rax, [rax]
//   0x1E15A2 test    al, 2
//   0x1E15A4 jnz     loc_1E13A0
//   0x1E15AA mov     rcx, rdx
//   0x1E15AD mov     rdx, r12
//   0x1E15B0 jmp     short loc_1E158D
//   0x1E15B2 and     rdx, 0FFFFFFFFFFFFFFFCh
//   0x1E15B6 mov     rax, [rdx]
//   0x1E15B9 mov     r12, rdx
//   0x1E15BC test    al, 2
//   0x1E15BE jnz     loc_1E118C
//   0x1E15C4 mov     rcx, r15
//   0x1E15C7 cmp     [r12+10h], rcx
//   0x1E15CC jnz     loc_1E118C
//   0x1E15D2 and     rax, 0FFFFFFFFFFFFFFFCh
//   0x1E15D6 mov     rcx, r12
//   0x1E15D9 mov     rdx, rax
//   0x1E15DC mov     rax, [rax]
//   0x1E15DF mov     r12, rdx
//   0x1E15E2 test    al, 2
//   0x1E15E4 jz      short loc_1E15C7
//   0x1E15E6 jmp     loc_1E118C
//   0x1E15EB and     rax, 0FFFFFFFFFFFFFFFCh
//   0x1E15EF mov     r14, rax
//   0x1E15F2 mov     rax, [rax]
//   0x1E15F5 test    al, 2
//   0x1E15F7 jnz     loc_1E1503
//   0x1E15FD mov     rcx, r15
//   0x1E1600 cmp     [r14+10h], rcx
//   0x1E1604 jnz     loc_1E1503
//   0x1E160A and     rax, 0FFFFFFFFFFFFFFFCh
//   0x1E160E mov     rcx, r14
//   0x1E1611 mov     rdx, rax
//   0x1E1614 mov     rax, [rax]
//   0x1E1617 mov     r14, rdx
//   0x1E161A test    al, 2
//   0x1E161C jz      short loc_1E1600
//   0x1E161E jmp     loc_1E1503
//   0x1E1623 mov     r15, rdx
//   0x1E1626 jmp     loc_1E126A
//   0x1E162B call    ___stack_chk_fail
//   0x1E1630 mov     rbx, rax
//   0x1E1633 jmp     loc_4176C
//   0x1E1638 mov     rbx, rax
//   0x1E163B jmp     loc_417AA
//   0x1E1640 mov     rbx, rax
//   0x1E1643 jmp     loc_41776
//   0x1E1648 mov     rbx, rax
//   0x1E164B jmp     loc_417B6
//   0x1E1650 mov     rbx, rax
//   0x1E1653 jmp     loc_41799
// ============================================================

void sub_1E0960(/* signature unknown */)
{
    // see disassembly above
}

