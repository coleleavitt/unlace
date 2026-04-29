// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x1E5920
// Name:           sub_1E5920
// Function size:  3320 bytes (788 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x1E5920 push    r15
//   0x1E5922 push    r14
//   0x1E5924 push    r13
//   0x1E5926 push    r12
//   0x1E5928 push    rbp
//   0x1E5929 mov     rbp, rsi
//   0x1E592C push    rbx
//   0x1E592D mov     rbx, rdi
//   0x1E5930 sub     rsp, 0B8h
//   0x1E5937 mov     rax, [rdx]
//   0x1E593A movdqu  xmm3, xmmword ptr [rdx]
//   0x1E593E mov     rsi, fs:28h
//   0x1E5947 mov     [rsp+0E8h+var_40], rsi
//   0x1E594F mov     rsi, rcx
//   0x1E5952 lea     r13, [rsp+0E8h+var_A8]
//   0x1E5957 mov     r15, [rbp+0]
//   0x1E595B movzx   r14d, byte ptr [rdx+8]
//   0x1E5960 mov     rdi, r13
//   0x1E5963 mov     [rsp+0E8h+var_E0], rax
//   0x1E5968 movaps  [rsp+0E8h+var_B8], xmm3
//   0x1E596D call    sub_313000
//   0x1E5972 movsxd  r12, dword ptr [rsp+0E8h+var_A8+4]
//   0x1E5977 mov     rdi, [rsp+0E8h+var_E0]
//   0x1E597C mov     byte ptr [rsp+0E8h+var_D8], 0
//   0x1E5981 mov     rax, r12
//   0x1E5984 add     r12, rdi
//   0x1E5987 cmp     r14b, 5
//   0x1E598B jnz     short loc_1E59A7
//   0x1E598D mov     rdx, [rbx]
//   0x1E5990 mov     rdx, [rdx+5E0h]
//   0x1E5997 mov     rdx, [rdx+60h]
//   0x1E599B movzx   esi, byte ptr [rdx+91h]
//   0x1E59A2 mov     byte ptr [rsp+0E8h+var_D8], sil
//   0x1E59A7 cmp     r15, [rbx+8]
//   0x1E59AB jz      loc_1E5B5E
//   0x1E59B1 lea     rcx, [r15+18h]
//   0x1E59B5 cmp     [r15+20h], r14b
//   0x1E59B9 jnz     loc_1E5B5E
//   0x1E59BF cmp     [r15+18h], r12
//   0x1E59C3 jge     loc_1E5B5E
//   0x1E59C9 movsxd  rdi, dword ptr [rcx+14h]
//   0x1E59CD mov     rsi, [r15+18h]
//   0x1E59D1 mov     r9, [rsp+0E8h+var_E0]
//   0x1E59D6 mov     [rsp+0E8h+var_C0], rdi
//   0x1E59DB mov     rdx, rdi
//   0x1E59DE add     rdi, rsi
//   0x1E59E1 cmp     rsi, r9
//   0x1E59E4 jl      loc_1E6028
//   0x1E59EA jg      loc_1E60B8
//   0x1E59F0 cmp     edx, eax
//   0x1E59F2 jg      loc_1E6166
//   0x1E59F8 jge     loc_1E5FD2
//   0x1E59FE mov     rax, cs:qword_41F238
//   0x1E5A05 pxor    xmm0, xmm0
//   0x1E5A09 cmp     byte ptr [rsp+0E8h+var_D8], 0
//   0x1E5A0E mov     [rsp+0E8h+var_70], 0
//   0x1E5A17 mov     [rsp+0E8h+var_D0], rcx
//   0x1E5A1C mov     qword ptr [rsp+0E8h+var_88], rax
//   0x1E5A21 movups  [rsp+0E8h+var_88+8], xmm0
//   0x1E5A26 jnz     loc_1E5B70
//   0x1E5A2C lea     rax, [rsp+0E8h+var_88]
//   0x1E5A31 mov     rdi, r13
//   0x1E5A34 mov     rsi, rax
//   0x1E5A37 mov     [rsp+0E8h+var_C8], rax
//   0x1E5A3C call    sub_3150C0
//   0x1E5A41 test    al, al
//   0x1E5A43 mov     rcx, [rsp+0E8h+var_D0]
//   0x1E5A48 jz      loc_1E5B92
//   0x1E5A4E lea     rdi, [rcx+10h]
//   0x1E5A52 mov     rsi, r13
//   0x1E5A55 mov     [rsp+0E8h+var_D0], rcx
//   0x1E5A5A call    sub_314FC0
//   0x1E5A5F mov     rax, [r15]
//   0x1E5A62 mov     rcx, [rsp+0E8h+var_D0]
//   0x1E5A67 mov     rdx, rax
//   0x1E5A6A and     edx, 2
//   0x1E5A6D cmp     dword ptr [rcx+10h], 1
//   0x1E5A71 jnz     loc_1E5BD8
//   0x1E5A77 lea     rdi, [rbx+8]
//   0x1E5A7B mov     rcx, r15
//   0x1E5A7E cmp     [rbp+0], r15
//   0x1E5A82 jz      loc_1E5E10
//   0x1E5A88 test    rdx, rdx
//   0x1E5A8B jz      loc_1E5DC0
//   0x1E5A91 mov     rsi, r15
//   0x1E5A94 mov     [rsp+0E8h+var_D0], rcx
//   0x1E5A99 call    sub_1E4150
//   0x1E5A9E mov     r15, [rsp+0E8h+var_D0]
//   0x1E5AA3 cmp     dword ptr [rsp+0E8h+var_88], 1
//   0x1E5AA8 jnz     loc_1E5D30
//   0x1E5AAE mov     rdx, [rbx+8]
//   0x1E5AB2 lea     rax, [rbx+8]
//   0x1E5AB6 mov     [rsp+0E8h+var_D8], rax
//   0x1E5ABB cmp     r15, rdx
//   0x1E5ABE jz      loc_1E5B54
//   0x1E5AC4 lea     rcx, [r15+18h]
//   0x1E5AC8 cmp     [r15+20h], r14b
//   0x1E5ACC jnz     loc_1E5D98
//   0x1E5AD2 movsxd  rax, dword ptr [rcx+14h]
//   0x1E5AD6 add     rax, [r15+18h]
//   0x1E5ADA cmp     rax, r12
//   0x1E5ADD jg      loc_1E5D98
//   0x1E5AE3 mov     rax, [r15]
//   0x1E5AE6 mov     rsi, rax
//   0x1E5AE9 and     esi, 2
//   0x1E5AEC cmp     dword ptr [rcx+10h], 8
//   0x1E5AF0 jz      loc_1E5C40
//   0x1E5AF6 mov     rdx, r15
//   0x1E5AF9 cmp     r15, [rbp+0]
//   0x1E5AFD jz      loc_1E5C10
//   0x1E5B03 test    rsi, rsi
//   0x1E5B06 jnz     short loc_1E5B30
//   0x1E5B08 mov     rcx, [r15+10h]
//   0x1E5B0C test    byte ptr [rcx], 2
//   0x1E5B0F jz      loc_1E5C70
//   0x1E5B15 and     rax, 0FFFFFFFFFFFFFFFCh
//   0x1E5B19 mov     rdx, rax
//   0x1E5B1C mov     rax, [rax]
//   0x1E5B1F test    al, 2
//   0x1E5B21 jz      loc_1E5DE0
//   0x1E5B27 nop     word ptr [rax+rax+00000000h]
//   0x1E5B30 mov     rdi, [rsp+0E8h+var_D8]
//   0x1E5B35 mov     rsi, r15
//   0x1E5B38 mov     [rsp+0E8h+var_E0], rdx
//   0x1E5B3D call    sub_1E4150
//   0x1E5B42 mov     r15, [rsp+0E8h+var_E0]
//   0x1E5B47 mov     rdx, [rbx+8]
//   0x1E5B4B cmp     rdx, r15
//   0x1E5B4E jnz     loc_1E5AC4
//   0x1E5B54 mov     rdi, [rsp+0E8h+var_C8]
//   0x1E5B59 call    sub_312F40
//   0x1E5B5E mov     [rbp+0], r15
//   0x1E5B62 mov     ebx, 1
//   0x1E5B67 jmp     short loc_1E5B9E
//   0x1E5B69 align 10h
//   0x1E5B70 mov     eax, dword ptr [rsp+0E8h+var_A8+4]
//   0x1E5B74 lea     rsi, [rsp+0E8h+var_88]
//   0x1E5B79 mov     rdi, r13
//   0x1E5B7C mov     [rsp+0E8h+var_C8], rsi
//   0x1E5B81 sub     eax, edx
//   0x1E5B83 mov     edx, eax
//   0x1E5B85 call    sub_3150C0
//   0x1E5B8A test    al, al
//   0x1E5B8C jnz     loc_1E5CE0
//   0x1E5B92 mov     rdi, [rsp+0E8h+var_C8]
//   0x1E5B97 call    sub_312F40
//   0x1E5B9C xor     ebx, ebx
//   0x1E5B9E mov     rdi, r13
//   0x1E5BA1 call    sub_312F40
//   0x1E5BA6 mov     rax, [rsp+0E8h+var_40]
//   0x1E5BAE sub     rax, fs:28h
//   0x1E5BB7 jnz     loc_1E65EB
//   0x1E5BBD add     rsp, 0B8h
//   0x1E5BC4 mov     eax, ebx
//   0x1E5BC6 pop     rbx
//   0x1E5BC7 pop     rbp
//   0x1E5BC8 pop     r12
//   0x1E5BCA pop     r13
//   0x1E5BCC pop     r14
//   0x1E5BCE pop     r15
//   0x1E5BD0 retn
//   0x1E5BD1 align 8
//   0x1E5BD8 test    rdx, rdx
//   0x1E5BDB jnz     loc_1E5AA3
//   0x1E5BE1 mov     rdx, [r15+10h]
//   0x1E5BE5 test    byte ptr [rdx], 2
//   0x1E5BE8 jz      loc_1E5EB0
//   0x1E5BEE and     rax, 0FFFFFFFFFFFFFFFCh
//   0x1E5BF2 mov     rdx, [rax]
//   0x1E5BF5 test    dl, 2
//   0x1E5BF8 jz      loc_1E5F03
//   0x1E5BFE mov     r15, rax
//   0x1E5C01 jmp     loc_1E5AA3
//   0x1E5C06 align 10h
//   0x1E5C10 test    rsi, rsi
//   0x1E5C13 jz      loc_1E5C98
//   0x1E5C19 mov     rdi, [rsp+0E8h+var_D8]
//   0x1E5C1E mov     rsi, r15
//   0x1E5C21 mov     [rsp+0E8h+var_E0], rdx
//   0x1E5C26 call    sub_1E4150
//   0x1E5C2B mov     rdx, [rsp+0E8h+var_E0]
//   0x1E5C30 mov     [rbp+0], rdx
//   0x1E5C34 mov     r15, rdx
//   0x1E5C37 mov     rdx, [rbx+8]
//   0x1E5C3B jmp     loc_1E5B4B
//   0x1E5C40 test    rsi, rsi
//   0x1E5C43 jnz     loc_1E5B4B
//   0x1E5C49 mov     rcx, [r15+10h]
//   0x1E5C4D test    byte ptr [rcx], 2
//   0x1E5C50 jz      loc_1E5E90
//   0x1E5C56 and     rax, 0FFFFFFFFFFFFFFFCh
//   0x1E5C5A mov     rcx, [rax]
//   0x1E5C5D test    cl, 2
//   0x1E5C60 jz      loc_1E5EC8
//   0x1E5C66 mov     r15, rax
//   0x1E5C69 jmp     loc_1E5B4B
//   0x1E5C6E align 10h
//   0x1E5C70 mov     rdx, rcx
//   0x1E5C73 mov     rcx, [rcx+8]
//   0x1E5C77 test    byte ptr [rcx], 2
//   0x1E5C7A jnz     loc_1E5B30
//   0x1E5C80 mov     rdx, rcx
//   0x1E5C83 mov     rcx, [rcx+8]
//   0x1E5C87 test    byte ptr [rcx], 2
//   0x1E5C8A jnz     loc_1E5B30
//   0x1E5C90 jmp     short loc_1E5C70
//   0x1E5C92 align 8
//   0x1E5C98 mov     rcx, [r15+10h]
//   0x1E5C9C test    byte ptr [rcx], 2
//   0x1E5C9F jz      loc_1E5E70
//   0x1E5CA5 and     rax, 0FFFFFFFFFFFFFFFCh
//   0x1E5CA9 mov     rdx, rax
//   0x1E5CAC mov     rax, [rax]
//   0x1E5CAF test    al, 2
//   0x1E5CB1 jnz     loc_1E5C19
//   0x1E5CB7 mov     rsi, r15
//   0x1E5CBA cmp     [rdx+10h], rsi
//   0x1E5CBE jnz     loc_1E5C19
//   0x1E5CC4 and     rax, 0FFFFFFFFFFFFFFFCh
//   0x1E5CC8 mov     rsi, rdx
//   0x1E5CCB mov     rcx, rax
//   0x1E5CCE mov     rax, [rax]
//   0x1E5CD1 mov     rdx, rcx
//   0x1E5CD4 test    al, 2
//   0x1E5CD6 jz      short loc_1E5CBA
//   0x1E5CD8 jmp     loc_1E5C19
//   0x1E5CDD align 20h
//   0x1E5CE0 movdqa  xmm2, [rsp+0E8h+var_88]
//   0x1E5CE6 movdqa  xmm1, xmmword ptr [r13+0]
//   0x1E5CEC movdqa  xmm0, xmmword ptr [r13+10h]
//   0x1E5CF2 mov     rcx, [rsp+0E8h+var_D0]
//   0x1E5CF7 movaps  xmmword ptr [r13+0], xmm2
//   0x1E5CFC movdqa  xmm2, xmmword ptr [rsp+70h]
//   0x1E5D02 movaps  [rsp+0E8h+var_68], xmm1
//   0x1E5D0A movaps  [rsp+0E8h+var_58], xmm0
//   0x1E5D12 movaps  xmmword ptr [r13+10h], xmm2
//   0x1E5D17 movaps  [rsp+0E8h+var_88], xmm1
//   0x1E5D1C movaps  xmmword ptr [rsp+70h], xmm0
//   0x1E5D21 jmp     loc_1E5A4E
//   0x1E5D26 align 10h
//   0x1E5D30 mov     rdi, [rsp+0E8h+var_C0]
//   0x1E5D35 add     [rsp+0E8h+var_E0], rdi
//   0x1E5D3A mov     rdi, [rsp+0E8h+var_C8]
//   0x1E5D3F movdqa  xmm1, xmmword ptr [r13+0]
//   0x1E5D45 movdqa  xmm0, xmmword ptr [r13+10h]
//   0x1E5D4B movdqa  xmm2, xmmword ptr [rdi]
//   0x1E5D4F movaps  xmmword ptr [rdi], xmm1
//   0x1E5D52 movaps  [rsp+0E8h+var_68], xmm1
//   0x1E5D5A movaps  xmmword ptr [r13+0], xmm2
//   0x1E5D5F movdqa  xmm2, xmmword ptr [rdi+10h]
//   0x1E5D64 mov     eax, dword ptr [rsp+0E8h+var_A8+4]
//   0x1E5D68 movaps  xmmword ptr [rdi+10h], xmm0
//   0x1E5D6C mov     dword ptr [rsp+0E8h+var_D0], eax
//   0x1E5D70 movaps  [rsp+0E8h+var_58], xmm0
//   0x1E5D78 movaps  xmmword ptr [r13+10h], xmm2
//   0x1E5D7D call    sub_312F40
//   0x1E5D82 cmp     r15, [rbx+8]
//   0x1E5D86 mov     eax, dword ptr [rsp+0E8h+var_D0]
//   0x1E5D8A jnz     loc_1E59B1
//   0x1E5D90 jmp     loc_1E5B5E
//   0x1E5D95 align 8
//   0x1E5D98 cmp     rdx, r15
//   0x1E5D9B jz      loc_1E5B54
//   0x1E5DA1 cmp     [rcx+8], r14b
//   0x1E5DA5 jnz     loc_1E5B54
//   0x1E5DAB cmp     [r15+18h], r12
//   0x1E5DAF jge     loc_1E5B54
//   0x1E5DB5 jmp     loc_1E5B92
//   0x1E5DBA align 20h
//   0x1E5DC0 mov     rdx, [r15+10h]
//   0x1E5DC4 test    byte ptr [rdx], 2
//   0x1E5DC7 jnz     loc_1E5F30
//   0x1E5DCD mov     rcx, rdx
//   0x1E5DD0 mov     rdx, [rdx+8]
//   0x1E5DD4 test    byte ptr [rdx], 2
//   0x1E5DD7 jnz     loc_1E5A91
//   0x1E5DDD jmp     short loc_1E5DCD
//   0x1E5DDF align 20h
//   0x1E5DE0 mov     rsi, r15
//   0x1E5DE3 cmp     [rdx+10h], rsi
//   0x1E5DE7 jnz     loc_1E5B30
//   0x1E5DED and     rax, 0FFFFFFFFFFFFFFFCh
//   0x1E5DF1 mov     rsi, rdx
//   0x1E5DF4 mov     rcx, rax
//   0x1E5DF7 mov     rax, [rax]
//   0x1E5DFA mov     rdx, rcx
//   0x1E5DFD test    al, 2
//   0x1E5DFF jz      short loc_1E5DE3
//   0x1E5E01 jmp     loc_1E5B30
//   0x1E5E06 align 10h
//   0x1E5E10 test    rdx, rdx
//   0x1E5E13 jnz     short loc_1E5E50
//   0x1E5E15 mov     rdx, [r15+10h]
//   0x1E5E19 test    byte ptr [rdx], 2
//   0x1E5E1C jz      loc_1E5F70
//   0x1E5E22 and     rax, 0FFFFFFFFFFFFFFFCh
//   0x1E5E26 mov     rsi, r15
//   0x1E5E29 mov     rcx, rax
//   0x1E5E2C mov     rax, [rax]
//   0x1E5E2F test    al, 2
//   0x1E5E31 jnz     short loc_1E5E50
//   0x1E5E33 cmp     [rcx+10h], rsi
//   0x1E5E37 jnz     short loc_1E5E50
//   0x1E5E39 and     rax, 0FFFFFFFFFFFFFFFCh
//   0x1E5E3D mov     rdx, rax
//   0x1E5E40 mov     rax, [rax]
//   0x1E5E43 test    al, 2
//   0x1E5E45 jz      loc_1E626D
//   0x1E5E4B mov     rcx, rdx
//   0x1E5E4E xchg    ax, ax
//   0x1E5E50 mov     rsi, r15
//   0x1E5E53 mov     [rsp+0E8h+var_D0], rcx
//   0x1E5E58 call    sub_1E4150
//   0x1E5E5D mov     rcx, [rsp+0E8h+var_D0]
//   0x1E5E62 mov     [rbp+0], rcx
//   0x1E5E66 mov     r15, rcx
//   0x1E5E69 jmp     loc_1E5AA3
//   0x1E5E6E align 10h
//   0x1E5E70 mov     rdx, rcx
//   0x1E5E73 mov     rcx, [rcx+8]
//   0x1E5E77 test    byte ptr [rcx], 2
//   0x1E5E7A jnz     loc_1E5C19
//   0x1E5E80 jmp     short loc_1E5E70
//   0x1E5E82 align 10h
//   0x1E5E90 mov     r15, rcx
//   0x1E5E93 mov     rcx, [rcx+8]
//   0x1E5E97 test    byte ptr [rcx], 2
//   0x1E5E9A jnz     loc_1E5B4B
//   0x1E5EA0 jmp     short loc_1E5E90
//   0x1E5EA2 align 10h
//   0x1E5EB0 mov     r15, rdx
//   0x1E5EB3 mov     rdx, [rdx+8]
//   0x1E5EB7 test    byte ptr [rdx], 2
//   0x1E5EBA jnz     loc_1E5AA3
//   0x1E5EC0 jmp     short loc_1E5EB0
//   0x1E5EC2 align 8
//   0x1E5EC8 cmp     r15, [rax+10h]
//   0x1E5ECC jnz     loc_1E5C66
//   0x1E5ED2 and     rcx, 0FFFFFFFFFFFFFFFCh
//   0x1E5ED6 mov     r15, rcx
//   0x1E5ED9 mov     rcx, [rcx]
//   0x1E5EDC test    cl, 2
//   0x1E5EDF jnz     loc_1E5B4B
//   0x1E5EE5 mov     rsi, rax
//   0x1E5EE8 mov     rax, r15
//   0x1E5EEB mov     r15, rsi
//   0x1E5EEE cmp     r15, [rax+10h]
//   0x1E5EF2 jz      short loc_1E5ED2
//   0x1E5EF4 jmp     loc_1E5C66
//   0x1E5EF9 align 20h
//   0x1E5F00 mov     rax, rcx
//   0x1E5F03 cmp     [rax+10h], r15
//   0x1E5F07 jnz     loc_1E5BFE
//   0x1E5F0D mov     rcx, rdx
//   0x1E5F10 mov     r15, rax
//   0x1E5F13 and     rcx, 0FFFFFFFFFFFFFFFCh
//   0x1E5F17 mov     rdx, [rcx]
//   0x1E5F1A test    dl, 2
//   0x1E5F1D jz      short loc_1E5F00
//   0x1E5F1F mov     r15, rcx
//   0x1E5F22 jmp     loc_1E5AA3
//   0x1E5F27 align 10h
//   0x1E5F30 and     rax, 0FFFFFFFFFFFFFFFCh
//   0x1E5F34 mov     rcx, rax
//   0x1E5F37 mov     rax, [rax]
//   0x1E5F3A test    al, 2
//   0x1E5F3C jnz     loc_1E5A91
//   0x1E5F42 mov     rsi, r15
//   0x1E5F45 cmp     [rcx+10h], rsi
//   0x1E5F49 jnz     loc_1E5A91
//   0x1E5F4F and     rax, 0FFFFFFFFFFFFFFFCh
//   0x1E5F53 mov     rsi, rcx
//   0x1E5F56 mov     rdx, rax
//   0x1E5F59 mov     rax, [rax]
//   0x1E5F5C mov     rcx, rdx
//   0x1E5F5F test    al, 2
//   0x1E5F61 jz      short loc_1E5F45
//   0x1E5F63 jmp     loc_1E5A91
//   0x1E5F68 align 10h
//   0x1E5F70 mov     rcx, rdx
//   0x1E5F73 mov     rdx, [rdx+8]
//   0x1E5F77 test    byte ptr [rdx], 2
//   0x1E5F7A jnz     loc_1E5E50
//   0x1E5F80 jmp     short loc_1E5F70
//   0x1E5F82 movdqa  xmm2, [rsp+0E8h+var_88]
//   0x1E5F88 movdqa  xmm1, [rsp+0E8h+var_A8]
//   0x1E5F8E mov     [rsp+0E8h+var_E0], rcx
//   0x1E5F93 movdqa  xmm0, [rsp+0E8h+var_98]
//   0x1E5F99 mov     rdi, [rsp+0E8h+var_C8]
//   0x1E5F9E movaps  [rsp+0E8h+var_A8], xmm2
//   0x1E5FA3 movdqa  xmm2, xmmword ptr [rsp+70h]
//   0x1E5FA9 movaps  [rsp+0E8h+var_68], xmm1
//   0x1E5FB1 movaps  [rsp+0E8h+var_58], xmm0
//   0x1E5FB9 movaps  [rsp+0E8h+var_98], xmm2
//   0x1E5FBE movaps  [rsp+0E8h+var_88], xmm1
//   0x1E5FC3 movaps  xmmword ptr [rsp+70h], xmm0
//   0x1E5FC8 call    sub_312F40
//   0x1E5FCD mov     rcx, [rsp+0E8h+var_E0]
//   0x1E5FD2 lea     rdi, [r15+28h]
//   0x1E5FD6 mov     rsi, r13
//   0x1E5FD9 mov     [rsp+0E8h+var_E0], rcx
//   0x1E5FDE call    sub_314FC0
//   0x1E5FE3 mov     rax, [r15]
//   0x1E5FE6 mov     rcx, [rsp+0E8h+var_E0]
//   0x1E5FEB mov     rdx, rax
//   0x1E5FEE and     edx, 2
//   0x1E5FF1 cmp     dword ptr [rcx+10h], 1
//   0x1E5FF5 jz      loc_1E6278
//   0x1E5FFB test    rdx, rdx
//   0x1E5FFE jnz     loc_1E5B5E
//   0x1E6004 mov     rdx, [r15+10h]
//   0x1E6008 test    byte ptr [rdx], 2
//   0x1E600B jnz     loc_1E6325
//   0x1E6011 mov     r15, rdx
//   0x1E6014 mov     rdx, [rdx+8]
//   0x1E6018 test    byte ptr [rdx], 2
//   0x1E601B jnz     loc_1E5B5E
//   0x1E6021 jmp     short loc_1E6011
//   0x1E6023 align 8
//   0x1E6028 cmp     r12, rdi
//   0x1E602B jnz     loc_1E5B9C
//   0x1E6031 mov     rax, cs:qword_41F238
//   0x1E6038 pxor    xmm0, xmm0
//   0x1E603C cmp     byte ptr [rsp+0E8h+var_D8], 0
//   0x1E6041 mov     [rsp+0E8h+var_70], 0
//   0x1E604A movups  [rsp+0E8h+var_88+8], xmm0
//   0x1E604F lea     r12, [r15+28h]
//   0x1E6053 mov     qword ptr [rsp+0E8h+var_88], rax
//   0x1E6058 jnz     loc_1E6419
//   0x1E605E mov     edx, dword ptr [rsp+0E8h+var_E0]
//   0x1E6062 lea     rax, [rsp+0E8h+var_88]
//   0x1E6067 mov     rdi, r12
//   0x1E606A mov     [rsp+0E8h+var_C8], rax
//   0x1E606F sub     edx, esi
//   0x1E6071 mov     rsi, rax
//   0x1E6074 call    sub_3150C0
//   0x1E6079 test    al, al
//   0x1E607B jz      loc_1E648F
//   0x1E6081 mov     rax, [r15]
//   0x1E6084 lea     r14, [rbx+8]
//   0x1E6088 mov     r12, r15
//   0x1E608B test    al, 2
//   0x1E608D jnz     loc_1E6360
//   0x1E6093 mov     r12, [r15+10h]
//   0x1E6097 test    byte ptr [r12], 2
//   0x1E609C jnz     loc_1E6535
//   0x1E60A2 mov     rax, [r12+8]
//   0x1E60A7 test    byte ptr [rax], 2
//   0x1E60AA jnz     loc_1E6360
//   0x1E60B0 mov     r12, rax
//   0x1E60B3 jmp     short loc_1E60A2
//   0x1E60B5 align 8
//   0x1E60B8 cmp     r12, rdi
//   0x1E60BB jnz     loc_1E5B9C
//   0x1E60C1 mov     rax, cs:qword_41F238
//   0x1E60C8 pxor    xmm0, xmm0
//   0x1E60CC cmp     byte ptr [rsp+0E8h+var_D8], 0
//   0x1E60D1 mov     [rsp+0E8h+var_70], 0
//   0x1E60DA mov     [rsp+0E8h+var_D8], rcx
//   0x1E60DF mov     qword ptr [rsp+0E8h+var_88], rax
//   0x1E60E4 movups  [rsp+0E8h+var_88+8], xmm0
//   0x1E60E9 jnz     loc_1E63AC
//   0x1E60EF mov     eax, dword ptr [rsp+0E8h+var_E0]
//   0x1E60F3 mov     edx, esi
//   0x1E60F5 mov     rdi, r13
//   0x1E60F8 sub     edx, eax
//   0x1E60FA lea     rax, [rsp+0E8h+var_88]
//   0x1E60FF mov     rsi, rax
//   0x1E6102 mov     [rsp+0E8h+var_C8], rax
//   0x1E6107 call    sub_3150C0
//   0x1E610C test    al, al
//   0x1E610E mov     rcx, [rsp+0E8h+var_D8]
//   0x1E6113 jz      loc_1E650C
//   0x1E6119 cmp     dword ptr [rsp+0E8h+var_88], 1
//   0x1E611E jnz     loc_1E5F82
//   0x1E6124 mov     rdx, [r15]
//   0x1E6127 lea     rdi, [rbx+8]
//   0x1E612B mov     r12, r15
//   0x1E612E test    dl, 2
//   0x1E6131 jnz     short loc_1E614C
//   0x1E6133 mov     rax, [r15+10h]
//   0x1E6137 test    byte ptr [rax], 2
//   0x1E613A jnz     loc_1E6572
//   0x1E6140 mov     r12, rax
//   0x1E6143 mov     rax, [rax+8]
//   0x1E6147 test    byte ptr [rax], 2
//   0x1E614A jz      short loc_1E6140
//   0x1E614C mov     rsi, r15
//   0x1E614F call    sub_1E4150
//   0x1E6154 mov     rdi, [rsp+0E8h+var_C8]
//   0x1E6159 mov     r15, r12
//   0x1E615C call    sub_312F40
//   0x1E6161 jmp     loc_1E5B5E
//   0x1E6166 cmp     dword ptr [rcx+10h], 8
//   0x1E616A jz      loc_1E5B5E
//   0x1E6170 mov     rdx, cs:qword_41F238
//   0x1E6177 pxor    xmm0, xmm0
//   0x1E617B cmp     byte ptr [rsp+0E8h+var_D8], 0
//   0x1E6180 mov     [rsp+0E8h+var_70], 0
//   0x1E6189 movups  [rsp+0E8h+var_88+8], xmm0
//   0x1E618E lea     r14, [r15+28h]
//   0x1E6192 mov     qword ptr [rsp+0E8h+var_88], rdx
//   0x1E6197 jnz     loc_1E62BA
//   0x1E619D lea     rsi, [rsp+0E8h+var_88]
//   0x1E61A2 mov     edx, eax
//   0x1E61A4 mov     rdi, r14
//   0x1E61A7 mov     [rsp+0E8h+var_E0], rcx
//   0x1E61AC mov     [rsp+0E8h+var_C8], rsi
//   0x1E61B1 call    sub_3150C0
//   0x1E61B6 test    al, al
//   0x1E61B8 mov     rcx, [rsp+0E8h+var_E0]
//   0x1E61BD jz      loc_1E6480
//   0x1E61C3 lea     rdi, [rcx+10h]
//   0x1E61C7 mov     rsi, r13
//   0x1E61CA mov     [rsp+0E8h+var_E0], rcx
//   0x1E61CF call    sub_314FC0
//   0x1E61D4 mov     rax, [r15]
//   0x1E61D7 mov     rcx, [rsp+0E8h+var_E0]
//   0x1E61DC mov     rdx, rax
//   0x1E61DF and     edx, 2
//   0x1E61E2 cmp     dword ptr [rcx+10h], 1
//   0x1E61E6 jz      loc_1E649E
//   0x1E61EC test    rdx, rdx
//   0x1E61EF jnz     short loc_1E622A
//   0x1E61F1 mov     rdx, [r15+10h]
//   0x1E61F5 test    byte ptr [rdx], 2
//   0x1E61F8 jnz     short loc_1E621B
//   0x1E61FA mov     rax, [rdx+8]
//   0x1E61FE test    byte ptr [rax], 2
//   0x1E6201 jnz     loc_1E65E3
//   0x1E6207 mov     rdx, rax
//   0x1E620A jmp     short loc_1E61FA
//   0x1E620C mov     rcx, r15
//   0x1E620F mov     r15, rax
//   0x1E6212 cmp     rcx, [rax+10h]
//   0x1E6216 jnz     short loc_1E622A
//   0x1E6218 mov     rax, rdx
//   0x1E621B and     rax, 0FFFFFFFFFFFFFFFCh
//   0x1E621F mov     rdx, [rax]
//   0x1E6222 test    dl, 2
//   0x1E6225 jz      short loc_1E620C
//   0x1E6227 mov     r15, rax
//   0x1E622A cmp     dword ptr [rsp+0E8h+var_88], 1
//   0x1E622F jz      short loc_1E625E
//   0x1E6231 mov     rdx, qword ptr [rsp+0E8h+var_B8+8]
//   0x1E6236 mov     qword ptr [rsp+0E8h+var_B8], r12
//   0x1E623B lea     rdi, [rbx+8]
//   0x1E623F mov     rsi, r15
//   0x1E6242 mov     r8, [rsp+0E8h+var_C8]
//   0x1E6247 mov     qword ptr [rsp+0E8h+var_B8+8], rdx
//   0x1E624C mov     rdx, qword ptr [rsp+0E8h+var_B8]
//   0x1E6251 mov     rcx, qword ptr [rsp+0E8h+var_B8+8]
//   0x1E6256 call    sub_1E4960
//   0x1E625B mov     r15, rax
//   0x1E625E mov     rdi, [rsp+0E8h+var_C8]
//   0x1E6263 call    sub_312F40
//   0x1E6268 jmp     loc_1E5B5E
//   0x1E626D mov     rsi, rcx
//   0x1E6270 mov     rcx, rdx
//   0x1E6273 jmp     loc_1E5E33
//   0x1E6278 lea     rdi, [rbx+8]
//   0x1E627C mov     r12, r15
//   0x1E627F test    rdx, rdx
//   0x1E6282 jnz     short loc_1E62AA
//   0x1E6284 mov     r12, [r15+10h]
//   0x1E6288 test    byte ptr [r12], 2
//   0x1E628D jnz     loc_1E64D3
//   0x1E6293 mov     rax, [r12+8]
//   0x1E6298 test    byte ptr [rax], 2
//   0x1E629B jnz     short loc_1E62AA
//   0x1E629D mov     r12, rax
//   0x1E62A0 mov     rax, [r12+8]
//   0x1E62A5 test    byte ptr [rax], 2
//   0x1E62A8 jz      short loc_1E629D
//   0x1E62AA mov     rsi, r15
//   0x1E62AD call    sub_1E4150
//   0x1E62B2 mov     r15, r12
//   0x1E62B5 jmp     loc_1E5B5E
//   0x1E62BA mov     edx, [rcx+14h]
//   0x1E62BD mov     rdi, r14
//   0x1E62C0 mov     [rsp+0E8h+var_E0], rcx
//   0x1E62C5 sub     edx, eax
//   0x1E62C7 lea     rax, [rsp+0E8h+var_88]
//   0x1E62CC mov     rsi, rax
//   0x1E62CF mov     [rsp+0E8h+var_C8], rax
//   0x1E62D4 call    sub_3150C0
//   0x1E62D9 test    al, al
//   0x1E62DB mov     rcx, [rsp+0E8h+var_E0]
//   0x1E62E0 jz      loc_1E6480
//   0x1E62E6 movdqa  xmm2, [rsp+0E8h+var_88]
//   0x1E62EC movdqu  xmm1, xmmword ptr [r14]
//   0x1E62F1 movdqu  xmm0, xmmword ptr [r14+10h]
//   0x1E62F7 movups  xmmword ptr [r14], xmm2
//   0x1E62FB movdqa  xmm2, xmmword ptr [rsp+70h]
//   0x1E6301 movaps  [rsp+0E8h+var_68], xmm1
//   0x1E6309 movups  xmmword ptr [r14+10h], xmm2
//   0x1E630E movaps  [rsp+0E8h+var_58], xmm0
//   0x1E6316 movaps  [rsp+0E8h+var_88], xmm1
//   0x1E631B movaps  xmmword ptr [rsp+70h], xmm0
//   0x1E6320 jmp     loc_1E61C3
//   0x1E6325 and     rax, 0FFFFFFFFFFFFFFFCh
//   0x1E6329 mov     rdx, [rax]
//   0x1E632C test    dl, 2
//   0x1E632F jz      short loc_1E6339
//   0x1E6331 mov     r15, rax
//   0x1E6334 jmp     loc_1E5B5E
//   0x1E6339 cmp     [rax+10h], r15
//   0x1E633D jnz     short loc_1E6331
//   0x1E633F mov     rcx, rdx
//   0x1E6342 mov     r15, rax
//   0x1E6345 and     rcx, 0FFFFFFFFFFFFFFFCh
//   0x1E6349 mov     rdx, [rcx]
//   0x1E634C test    dl, 2
//   0x1E634F jnz     loc_1E652D
//   0x1E6355 mov     rax, rcx
//   0x1E6358 cmp     [rax+10h], r15
//   0x1E635C jz      short loc_1E633F
//   0x1E635E jmp     short loc_1E6331
//   0x1E6360 mov     rsi, r15
//   0x1E6363 mov     rdi, r14
//   0x1E6366 call    sub_1E4150
//   0x1E636B cmp     dword ptr [rsp+0E8h+var_88], 1
//   0x1E6370 jz      loc_1E651B
//   0x1E6376 mov     rdx, qword ptr [rsp+0E8h+var_B8+8]
//   0x1E637B mov     rax, [rsp+0E8h+var_E0]
//   0x1E6380 mov     rsi, r12
//   0x1E6383 mov     rdi, r14
//   0x1E6386 mov     r8, [rsp+0E8h+var_C8]
//   0x1E638B mov     rcx, rdx
//   0x1E638E mov     rdx, rax
//   0x1E6391 call    sub_1E4960
//   0x1E6396 mov     rdi, [rsp+0E8h+var_C8]
//   0x1E639B mov     r15, rax
//   0x1E639E call    sub_312F40
//   0x1E63A3 lea     rcx, [r15+18h]
//   0x1E63A7 jmp     loc_1E5FD2
//   0x1E63AC lea     rax, [rsp+0E8h+var_88]
//   0x1E63B1 mov     edx, dword ptr [rsp+0E8h+var_E0]
//   0x1E63B5 add     edx, dword ptr [rsp+0E8h+var_A8+4]
//   0x1E63B9 mov     rdi, r13
//   0x1E63BC sub     edx, esi
//   0x1E63BE mov     rsi, rax
//   0x1E63C1 mov     [rsp+0E8h+var_C8], rax
//   0x1E63C6 call    sub_3150C0
//   0x1E63CB test    al, al
//   0x1E63CD mov     rcx, [rsp+0E8h+var_D8]
//   0x1E63D2 jz      loc_1E650C
//   0x1E63D8 movdqa  xmm2, [rsp+0E8h+var_88]
//   0x1E63DE movdqa  xmm1, [rsp+0E8h+var_A8]
//   0x1E63E4 movdqa  xmm0, [rsp+0E8h+var_98]
//   0x1E63EA movaps  [rsp+0E8h+var_A8], xmm2
//   0x1E63EF movdqa  xmm2, xmmword ptr [rsp+70h]
//   0x1E63F5 movaps  [rsp+0E8h+var_68], xmm1
//   0x1E63FD movaps  [rsp+0E8h+var_58], xmm0
//   0x1E6405 movaps  [rsp+0E8h+var_98], xmm2
//   0x1E640A movaps  [rsp+0E8h+var_88], xmm1
//   0x1E640F movaps  xmmword ptr [rsp+70h], xmm0
//   0x1E6414 jmp     loc_1E6119
//   0x1E6419 mov     eax, dword ptr [rsp+0E8h+var_E0]
//   0x1E641D mov     edx, [rcx+14h]
//   0x1E6420 mov     rdi, r12
//   0x1E6423 sub     edx, eax
//   0x1E6425 lea     rax, [rsp+0E8h+var_88]
//   0x1E642A add     edx, esi
//   0x1E642C mov     rsi, rax
//   0x1E642F mov     [rsp+0E8h+var_C8], rax
//   0x1E6434 call    sub_3150C0
//   0x1E6439 test    al, al
//   0x1E643B jz      short loc_1E648F
//   0x1E643D movdqa  xmm2, [rsp+0E8h+var_88]
//   0x1E6443 movdqu  xmm1, xmmword ptr [r12]
//   0x1E6449 movdqu  xmm0, xmmword ptr [r12+10h]
//   0x1E6450 movups  xmmword ptr [r12], xmm2
//   0x1E6455 movdqa  xmm2, xmmword ptr [rsp+70h]
//   0x1E645B movaps  [rsp+0E8h+var_68], xmm1
//   0x1E6463 movups  xmmword ptr [r12+10h], xmm2
//   0x1E6469 movaps  [rsp+0E8h+var_58], xmm0
//   0x1E6471 movaps  [rsp+0E8h+var_88], xmm1
//   0x1E6476 movaps  xmmword ptr [rsp+70h], xmm0
//   0x1E647B jmp     loc_1E6081
//   0x1E6480 mov     rdi, [rsp+0E8h+var_C8]
//   0x1E6485 call    sub_312F40
//   0x1E648A jmp     loc_1E5B9C
//   0x1E648F mov     rdi, [rsp+0E8h+var_C8]
//   0x1E6494 call    sub_312F40
//   0x1E6499 jmp     loc_1E5B9C
//   0x1E649E lea     rdi, [rbx+8]
//   0x1E64A2 mov     r14, r15
//   0x1E64A5 test    rdx, rdx
//   0x1E64A8 jnz     short loc_1E64C3
//   0x1E64AA mov     rdx, [r15+10h]
//   0x1E64AE test    byte ptr [rdx], 2
//   0x1E64B1 jnz     loc_1E65AB
//   0x1E64B7 mov     r14, rdx
//   0x1E64BA mov     rdx, [rdx+8]
//   0x1E64BE test    byte ptr [rdx], 2
//   0x1E64C1 jz      short loc_1E64B7
//   0x1E64C3 mov     rsi, r15
//   0x1E64C6 call    sub_1E4150
//   0x1E64CB mov     r15, r14
//   0x1E64CE jmp     loc_1E622A
//   0x1E64D3 and     rax, 0FFFFFFFFFFFFFFFCh
//   0x1E64D7 mov     r12, rax
//   0x1E64DA mov     rax, [rax]
//   0x1E64DD test    al, 2
//   0x1E64DF jnz     loc_1E62AA
//   0x1E64E5 mov     rcx, r15
//   0x1E64E8 cmp     [r12+10h], rcx
//   0x1E64ED jnz     loc_1E62AA
//   0x1E64F3 and     rax, 0FFFFFFFFFFFFFFFCh
//   0x1E64F7 mov     rcx, r12
//   0x1E64FA mov     rdx, rax
//   0x1E64FD mov     rax, [rax]
//   0x1E6500 mov     r12, rdx
//   0x1E6503 test    al, 2
//   0x1E6505 jz      short loc_1E64E8
//   0x1E6507 jmp     loc_1E62AA
//   0x1E650C mov     rdi, [rsp+0E8h+var_C8]
//   0x1E6511 call    sub_312F40
//   0x1E6516 jmp     loc_1E5B9C
//   0x1E651B mov     rdi, [rsp+0E8h+var_C8]
//   0x1E6520 mov     r15, r12
//   0x1E6523 call    sub_312F40
//   0x1E6528 jmp     loc_1E5B5E
//   0x1E652D mov     r15, rcx
//   0x1E6530 jmp     loc_1E5B5E
//   0x1E6535 and     rax, 0FFFFFFFFFFFFFFFCh
//   0x1E6539 mov     r12, rax
//   0x1E653C mov     rax, [rax]
//   0x1E653F test    al, 2
//   0x1E6541 jnz     loc_1E6360
//   0x1E6547 mov     rcx, r15
//   0x1E654A mov     rdx, r12
//   0x1E654D cmp     [r12+10h], rcx
//   0x1E6552 jnz     loc_1E6360
//   0x1E6558 and     rax, 0FFFFFFFFFFFFFFFCh
//   0x1E655C mov     r12, rax
//   0x1E655F mov     rax, [rax]
//   0x1E6562 test    al, 2
//   0x1E6564 jnz     loc_1E6360
//   0x1E656A mov     rcx, rdx
//   0x1E656D mov     rdx, r12
//   0x1E6570 jmp     short loc_1E654D
//   0x1E6572 and     rdx, 0FFFFFFFFFFFFFFFCh
//   0x1E6576 mov     rax, [rdx]
//   0x1E6579 mov     r12, rdx
//   0x1E657C test    al, 2
//   0x1E657E jnz     loc_1E614C
//   0x1E6584 mov     rcx, r15
//   0x1E6587 cmp     [r12+10h], rcx
//   0x1E658C jnz     loc_1E614C
//   0x1E6592 and     rax, 0FFFFFFFFFFFFFFFCh
//   0x1E6596 mov     rcx, r12
//   0x1E6599 mov     rdx, rax
//   0x1E659C mov     rax, [rax]
//   0x1E659F mov     r12, rdx
//   0x1E65A2 test    al, 2
//   0x1E65A4 jz      short loc_1E6587
//   0x1E65A6 jmp     loc_1E614C
//   0x1E65AB and     rax, 0FFFFFFFFFFFFFFFCh
//   0x1E65AF mov     r14, rax
//   0x1E65B2 mov     rax, [rax]
//   0x1E65B5 test    al, 2
//   0x1E65B7 jnz     loc_1E64C3
//   0x1E65BD mov     rcx, r15
//   0x1E65C0 cmp     [r14+10h], rcx
//   0x1E65C4 jnz     loc_1E64C3
//   0x1E65CA and     rax, 0FFFFFFFFFFFFFFFCh
//   0x1E65CE mov     rcx, r14
//   0x1E65D1 mov     rdx, rax
//   0x1E65D4 mov     rax, [rax]
//   0x1E65D7 mov     r14, rdx
//   0x1E65DA test    al, 2
//   0x1E65DC jz      short loc_1E65C0
//   0x1E65DE jmp     loc_1E64C3
//   0x1E65E3 mov     r15, rdx
//   0x1E65E6 jmp     loc_1E622A
//   0x1E65EB call    ___stack_chk_fail
//   0x1E65F0 mov     rbx, rax
//   0x1E65F3 jmp     loc_44908
//   0x1E65F8 mov     rbx, rax
//   0x1E65FB jmp     loc_44946
//   0x1E6600 mov     rbx, rax
//   0x1E6603 jmp     loc_44912
//   0x1E6608 mov     rbx, rax
//   0x1E660B jmp     loc_44952
//   0x1E6610 mov     rbx, rax
//   0x1E6613 jmp     loc_44935
// ============================================================

void sub_1E5920(/* signature unknown */)
{
    // see disassembly above
}

