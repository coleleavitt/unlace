// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x1E18E0
// Name:           sub_1E18E0
// Function size:  3320 bytes (788 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x1E18E0 push    r15
//   0x1E18E2 push    r14
//   0x1E18E4 push    r13
//   0x1E18E6 push    r12
//   0x1E18E8 push    rbp
//   0x1E18E9 mov     rbp, rsi
//   0x1E18EC push    rbx
//   0x1E18ED mov     rbx, rdi
//   0x1E18F0 sub     rsp, 0B8h
//   0x1E18F7 mov     rax, [rdx]
//   0x1E18FA movdqu  xmm3, xmmword ptr [rdx]
//   0x1E18FE mov     rsi, fs:28h
//   0x1E1907 mov     [rsp+0E8h+var_40], rsi
//   0x1E190F mov     rsi, rcx
//   0x1E1912 lea     r13, [rsp+0E8h+var_A8]
//   0x1E1917 mov     r15, [rbp+0]
//   0x1E191B movzx   r14d, byte ptr [rdx+8]
//   0x1E1920 mov     rdi, r13
//   0x1E1923 mov     [rsp+0E8h+var_E0], rax
//   0x1E1928 movaps  [rsp+0E8h+var_B8], xmm3
//   0x1E192D call    sub_30EAC0
//   0x1E1932 movsxd  r12, dword ptr [rsp+0E8h+var_A8+4]
//   0x1E1937 mov     rdi, [rsp+0E8h+var_E0]
//   0x1E193C mov     byte ptr [rsp+0E8h+var_D8], 0
//   0x1E1941 mov     rax, r12
//   0x1E1944 add     r12, rdi
//   0x1E1947 cmp     r14b, 5
//   0x1E194B jnz     short loc_1E1967
//   0x1E194D mov     rdx, [rbx]
//   0x1E1950 mov     rdx, [rdx+5E0h]
//   0x1E1957 mov     rdx, [rdx+60h]
//   0x1E195B movzx   esi, byte ptr [rdx+91h]
//   0x1E1962 mov     byte ptr [rsp+0E8h+var_D8], sil
//   0x1E1967 cmp     r15, [rbx+8]
//   0x1E196B jz      loc_1E1B1E
//   0x1E1971 lea     rcx, [r15+18h]
//   0x1E1975 cmp     [r15+20h], r14b
//   0x1E1979 jnz     loc_1E1B1E
//   0x1E197F cmp     [r15+18h], r12
//   0x1E1983 jge     loc_1E1B1E
//   0x1E1989 movsxd  rdi, dword ptr [rcx+14h]
//   0x1E198D mov     rsi, [r15+18h]
//   0x1E1991 mov     r9, [rsp+0E8h+var_E0]
//   0x1E1996 mov     [rsp+0E8h+var_C0], rdi
//   0x1E199B mov     rdx, rdi
//   0x1E199E add     rdi, rsi
//   0x1E19A1 cmp     rsi, r9
//   0x1E19A4 jl      loc_1E1FE8
//   0x1E19AA jg      loc_1E2078
//   0x1E19B0 cmp     edx, eax
//   0x1E19B2 jg      loc_1E2126
//   0x1E19B8 jge     loc_1E1F92
//   0x1E19BE mov     rax, cs:qword_411530
//   0x1E19C5 pxor    xmm0, xmm0
//   0x1E19C9 cmp     byte ptr [rsp+0E8h+var_D8], 0
//   0x1E19CE mov     [rsp+0E8h+var_70], 0
//   0x1E19D7 mov     [rsp+0E8h+var_D0], rcx
//   0x1E19DC mov     qword ptr [rsp+0E8h+var_88], rax
//   0x1E19E1 movups  [rsp+0E8h+var_88+8], xmm0
//   0x1E19E6 jnz     loc_1E1B30
//   0x1E19EC lea     rax, [rsp+0E8h+var_88]
//   0x1E19F1 mov     rdi, r13
//   0x1E19F4 mov     rsi, rax
//   0x1E19F7 mov     [rsp+0E8h+var_C8], rax
//   0x1E19FC call    sub_310B80
//   0x1E1A01 test    al, al
//   0x1E1A03 mov     rcx, [rsp+0E8h+var_D0]
//   0x1E1A08 jz      loc_1E1B52
//   0x1E1A0E lea     rdi, [rcx+10h]
//   0x1E1A12 mov     rsi, r13
//   0x1E1A15 mov     [rsp+0E8h+var_D0], rcx
//   0x1E1A1A call    sub_310A80
//   0x1E1A1F mov     rax, [r15]
//   0x1E1A22 mov     rcx, [rsp+0E8h+var_D0]
//   0x1E1A27 mov     rdx, rax
//   0x1E1A2A and     edx, 2
//   0x1E1A2D cmp     dword ptr [rcx+10h], 1
//   0x1E1A31 jnz     loc_1E1B98
//   0x1E1A37 lea     rdi, [rbx+8]
//   0x1E1A3B mov     rcx, r15
//   0x1E1A3E cmp     [rbp+0], r15
//   0x1E1A42 jz      loc_1E1DD0
//   0x1E1A48 test    rdx, rdx
//   0x1E1A4B jz      loc_1E1D80
//   0x1E1A51 mov     rsi, r15
//   0x1E1A54 mov     [rsp+0E8h+var_D0], rcx
//   0x1E1A59 call    sub_1E0110
//   0x1E1A5E mov     r15, [rsp+0E8h+var_D0]
//   0x1E1A63 cmp     dword ptr [rsp+0E8h+var_88], 1
//   0x1E1A68 jnz     loc_1E1CF0
//   0x1E1A6E mov     rdx, [rbx+8]
//   0x1E1A72 lea     rax, [rbx+8]
//   0x1E1A76 mov     [rsp+0E8h+var_D8], rax
//   0x1E1A7B cmp     r15, rdx
//   0x1E1A7E jz      loc_1E1B14
//   0x1E1A84 lea     rcx, [r15+18h]
//   0x1E1A88 cmp     [r15+20h], r14b
//   0x1E1A8C jnz     loc_1E1D58
//   0x1E1A92 movsxd  rax, dword ptr [rcx+14h]
//   0x1E1A96 add     rax, [r15+18h]
//   0x1E1A9A cmp     rax, r12
//   0x1E1A9D jg      loc_1E1D58
//   0x1E1AA3 mov     rax, [r15]
//   0x1E1AA6 mov     rsi, rax
//   0x1E1AA9 and     esi, 2
//   0x1E1AAC cmp     dword ptr [rcx+10h], 8
//   0x1E1AB0 jz      loc_1E1C00
//   0x1E1AB6 mov     rdx, r15
//   0x1E1AB9 cmp     r15, [rbp+0]
//   0x1E1ABD jz      loc_1E1BD0
//   0x1E1AC3 test    rsi, rsi
//   0x1E1AC6 jnz     short loc_1E1AF0
//   0x1E1AC8 mov     rcx, [r15+10h]
//   0x1E1ACC test    byte ptr [rcx], 2
//   0x1E1ACF jz      loc_1E1C30
//   0x1E1AD5 and     rax, 0FFFFFFFFFFFFFFFCh
//   0x1E1AD9 mov     rdx, rax
//   0x1E1ADC mov     rax, [rax]
//   0x1E1ADF test    al, 2
//   0x1E1AE1 jz      loc_1E1DA0
//   0x1E1AE7 nop     word ptr [rax+rax+00000000h]
//   0x1E1AF0 mov     rdi, [rsp+0E8h+var_D8]
//   0x1E1AF5 mov     rsi, r15
//   0x1E1AF8 mov     [rsp+0E8h+var_E0], rdx
//   0x1E1AFD call    sub_1E0110
//   0x1E1B02 mov     r15, [rsp+0E8h+var_E0]
//   0x1E1B07 mov     rdx, [rbx+8]
//   0x1E1B0B cmp     rdx, r15
//   0x1E1B0E jnz     loc_1E1A84
//   0x1E1B14 mov     rdi, [rsp+0E8h+var_C8]
//   0x1E1B19 call    sub_30EA00
//   0x1E1B1E mov     [rbp+0], r15
//   0x1E1B22 mov     ebx, 1
//   0x1E1B27 jmp     short loc_1E1B5E
//   0x1E1B29 align 10h
//   0x1E1B30 mov     eax, dword ptr [rsp+0E8h+var_A8+4]
//   0x1E1B34 lea     rsi, [rsp+0E8h+var_88]
//   0x1E1B39 mov     rdi, r13
//   0x1E1B3C mov     [rsp+0E8h+var_C8], rsi
//   0x1E1B41 sub     eax, edx
//   0x1E1B43 mov     edx, eax
//   0x1E1B45 call    sub_310B80
//   0x1E1B4A test    al, al
//   0x1E1B4C jnz     loc_1E1CA0
//   0x1E1B52 mov     rdi, [rsp+0E8h+var_C8]
//   0x1E1B57 call    sub_30EA00
//   0x1E1B5C xor     ebx, ebx
//   0x1E1B5E mov     rdi, r13
//   0x1E1B61 call    sub_30EA00
//   0x1E1B66 mov     rax, [rsp+0E8h+var_40]
//   0x1E1B6E sub     rax, fs:28h
//   0x1E1B77 jnz     loc_1E25AB
//   0x1E1B7D add     rsp, 0B8h
//   0x1E1B84 mov     eax, ebx
//   0x1E1B86 pop     rbx
//   0x1E1B87 pop     rbp
//   0x1E1B88 pop     r12
//   0x1E1B8A pop     r13
//   0x1E1B8C pop     r14
//   0x1E1B8E pop     r15
//   0x1E1B90 retn
//   0x1E1B91 align 8
//   0x1E1B98 test    rdx, rdx
//   0x1E1B9B jnz     loc_1E1A63
//   0x1E1BA1 mov     rdx, [r15+10h]
//   0x1E1BA5 test    byte ptr [rdx], 2
//   0x1E1BA8 jz      loc_1E1E70
//   0x1E1BAE and     rax, 0FFFFFFFFFFFFFFFCh
//   0x1E1BB2 mov     rdx, [rax]
//   0x1E1BB5 test    dl, 2
//   0x1E1BB8 jz      loc_1E1EC3
//   0x1E1BBE mov     r15, rax
//   0x1E1BC1 jmp     loc_1E1A63
//   0x1E1BC6 align 10h
//   0x1E1BD0 test    rsi, rsi
//   0x1E1BD3 jz      loc_1E1C58
//   0x1E1BD9 mov     rdi, [rsp+0E8h+var_D8]
//   0x1E1BDE mov     rsi, r15
//   0x1E1BE1 mov     [rsp+0E8h+var_E0], rdx
//   0x1E1BE6 call    sub_1E0110
//   0x1E1BEB mov     rdx, [rsp+0E8h+var_E0]
//   0x1E1BF0 mov     [rbp+0], rdx
//   0x1E1BF4 mov     r15, rdx
//   0x1E1BF7 mov     rdx, [rbx+8]
//   0x1E1BFB jmp     loc_1E1B0B
//   0x1E1C00 test    rsi, rsi
//   0x1E1C03 jnz     loc_1E1B0B
//   0x1E1C09 mov     rcx, [r15+10h]
//   0x1E1C0D test    byte ptr [rcx], 2
//   0x1E1C10 jz      loc_1E1E50
//   0x1E1C16 and     rax, 0FFFFFFFFFFFFFFFCh
//   0x1E1C1A mov     rcx, [rax]
//   0x1E1C1D test    cl, 2
//   0x1E1C20 jz      loc_1E1E88
//   0x1E1C26 mov     r15, rax
//   0x1E1C29 jmp     loc_1E1B0B
//   0x1E1C2E align 10h
//   0x1E1C30 mov     rdx, rcx
//   0x1E1C33 mov     rcx, [rcx+8]
//   0x1E1C37 test    byte ptr [rcx], 2
//   0x1E1C3A jnz     loc_1E1AF0
//   0x1E1C40 mov     rdx, rcx
//   0x1E1C43 mov     rcx, [rcx+8]
//   0x1E1C47 test    byte ptr [rcx], 2
//   0x1E1C4A jnz     loc_1E1AF0
//   0x1E1C50 jmp     short loc_1E1C30
//   0x1E1C52 align 8
//   0x1E1C58 mov     rcx, [r15+10h]
//   0x1E1C5C test    byte ptr [rcx], 2
//   0x1E1C5F jz      loc_1E1E30
//   0x1E1C65 and     rax, 0FFFFFFFFFFFFFFFCh
//   0x1E1C69 mov     rdx, rax
//   0x1E1C6C mov     rax, [rax]
//   0x1E1C6F test    al, 2
//   0x1E1C71 jnz     loc_1E1BD9
//   0x1E1C77 mov     rsi, r15
//   0x1E1C7A cmp     [rdx+10h], rsi
//   0x1E1C7E jnz     loc_1E1BD9
//   0x1E1C84 and     rax, 0FFFFFFFFFFFFFFFCh
//   0x1E1C88 mov     rsi, rdx
//   0x1E1C8B mov     rcx, rax
//   0x1E1C8E mov     rax, [rax]
//   0x1E1C91 mov     rdx, rcx
//   0x1E1C94 test    al, 2
//   0x1E1C96 jz      short loc_1E1C7A
//   0x1E1C98 jmp     loc_1E1BD9
//   0x1E1C9D align 20h
//   0x1E1CA0 movdqa  xmm2, [rsp+0E8h+var_88]
//   0x1E1CA6 movdqa  xmm1, xmmword ptr [r13+0]
//   0x1E1CAC movdqa  xmm0, xmmword ptr [r13+10h]
//   0x1E1CB2 mov     rcx, [rsp+0E8h+var_D0]
//   0x1E1CB7 movaps  xmmword ptr [r13+0], xmm2
//   0x1E1CBC movdqa  xmm2, xmmword ptr [rsp+70h]
//   0x1E1CC2 movaps  [rsp+0E8h+var_68], xmm1
//   0x1E1CCA movaps  [rsp+0E8h+var_58], xmm0
//   0x1E1CD2 movaps  xmmword ptr [r13+10h], xmm2
//   0x1E1CD7 movaps  [rsp+0E8h+var_88], xmm1
//   0x1E1CDC movaps  xmmword ptr [rsp+70h], xmm0
//   0x1E1CE1 jmp     loc_1E1A0E
//   0x1E1CE6 align 10h
//   0x1E1CF0 mov     rdi, [rsp+0E8h+var_C0]
//   0x1E1CF5 add     [rsp+0E8h+var_E0], rdi
//   0x1E1CFA mov     rdi, [rsp+0E8h+var_C8]
//   0x1E1CFF movdqa  xmm1, xmmword ptr [r13+0]
//   0x1E1D05 movdqa  xmm0, xmmword ptr [r13+10h]
//   0x1E1D0B movdqa  xmm2, xmmword ptr [rdi]
//   0x1E1D0F movaps  xmmword ptr [rdi], xmm1
//   0x1E1D12 movaps  [rsp+0E8h+var_68], xmm1
//   0x1E1D1A movaps  xmmword ptr [r13+0], xmm2
//   0x1E1D1F movdqa  xmm2, xmmword ptr [rdi+10h]
//   0x1E1D24 mov     eax, dword ptr [rsp+0E8h+var_A8+4]
//   0x1E1D28 movaps  xmmword ptr [rdi+10h], xmm0
//   0x1E1D2C mov     dword ptr [rsp+0E8h+var_D0], eax
//   0x1E1D30 movaps  [rsp+0E8h+var_58], xmm0
//   0x1E1D38 movaps  xmmword ptr [r13+10h], xmm2
//   0x1E1D3D call    sub_30EA00
//   0x1E1D42 cmp     r15, [rbx+8]
//   0x1E1D46 mov     eax, dword ptr [rsp+0E8h+var_D0]
//   0x1E1D4A jnz     loc_1E1971
//   0x1E1D50 jmp     loc_1E1B1E
//   0x1E1D55 align 8
//   0x1E1D58 cmp     rdx, r15
//   0x1E1D5B jz      loc_1E1B14
//   0x1E1D61 cmp     [rcx+8], r14b
//   0x1E1D65 jnz     loc_1E1B14
//   0x1E1D6B cmp     [r15+18h], r12
//   0x1E1D6F jge     loc_1E1B14
//   0x1E1D75 jmp     loc_1E1B52
//   0x1E1D7A align 20h
//   0x1E1D80 mov     rdx, [r15+10h]
//   0x1E1D84 test    byte ptr [rdx], 2
//   0x1E1D87 jnz     loc_1E1EF0
//   0x1E1D8D mov     rcx, rdx
//   0x1E1D90 mov     rdx, [rdx+8]
//   0x1E1D94 test    byte ptr [rdx], 2
//   0x1E1D97 jnz     loc_1E1A51
//   0x1E1D9D jmp     short loc_1E1D8D
//   0x1E1D9F align 20h
//   0x1E1DA0 mov     rsi, r15
//   0x1E1DA3 cmp     [rdx+10h], rsi
//   0x1E1DA7 jnz     loc_1E1AF0
//   0x1E1DAD and     rax, 0FFFFFFFFFFFFFFFCh
//   0x1E1DB1 mov     rsi, rdx
//   0x1E1DB4 mov     rcx, rax
//   0x1E1DB7 mov     rax, [rax]
//   0x1E1DBA mov     rdx, rcx
//   0x1E1DBD test    al, 2
//   0x1E1DBF jz      short loc_1E1DA3
//   0x1E1DC1 jmp     loc_1E1AF0
//   0x1E1DC6 align 10h
//   0x1E1DD0 test    rdx, rdx
//   0x1E1DD3 jnz     short loc_1E1E10
//   0x1E1DD5 mov     rdx, [r15+10h]
//   0x1E1DD9 test    byte ptr [rdx], 2
//   0x1E1DDC jz      loc_1E1F30
//   0x1E1DE2 and     rax, 0FFFFFFFFFFFFFFFCh
//   0x1E1DE6 mov     rsi, r15
//   0x1E1DE9 mov     rcx, rax
//   0x1E1DEC mov     rax, [rax]
//   0x1E1DEF test    al, 2
//   0x1E1DF1 jnz     short loc_1E1E10
//   0x1E1DF3 cmp     [rcx+10h], rsi
//   0x1E1DF7 jnz     short loc_1E1E10
//   0x1E1DF9 and     rax, 0FFFFFFFFFFFFFFFCh
//   0x1E1DFD mov     rdx, rax
//   0x1E1E00 mov     rax, [rax]
//   0x1E1E03 test    al, 2
//   0x1E1E05 jz      loc_1E222D
//   0x1E1E0B mov     rcx, rdx
//   0x1E1E0E xchg    ax, ax
//   0x1E1E10 mov     rsi, r15
//   0x1E1E13 mov     [rsp+0E8h+var_D0], rcx
//   0x1E1E18 call    sub_1E0110
//   0x1E1E1D mov     rcx, [rsp+0E8h+var_D0]
//   0x1E1E22 mov     [rbp+0], rcx
//   0x1E1E26 mov     r15, rcx
//   0x1E1E29 jmp     loc_1E1A63
//   0x1E1E2E align 10h
//   0x1E1E30 mov     rdx, rcx
//   0x1E1E33 mov     rcx, [rcx+8]
//   0x1E1E37 test    byte ptr [rcx], 2
//   0x1E1E3A jnz     loc_1E1BD9
//   0x1E1E40 jmp     short loc_1E1E30
//   0x1E1E42 align 10h
//   0x1E1E50 mov     r15, rcx
//   0x1E1E53 mov     rcx, [rcx+8]
//   0x1E1E57 test    byte ptr [rcx], 2
//   0x1E1E5A jnz     loc_1E1B0B
//   0x1E1E60 jmp     short loc_1E1E50
//   0x1E1E62 align 10h
//   0x1E1E70 mov     r15, rdx
//   0x1E1E73 mov     rdx, [rdx+8]
//   0x1E1E77 test    byte ptr [rdx], 2
//   0x1E1E7A jnz     loc_1E1A63
//   0x1E1E80 jmp     short loc_1E1E70
//   0x1E1E82 align 8
//   0x1E1E88 cmp     r15, [rax+10h]
//   0x1E1E8C jnz     loc_1E1C26
//   0x1E1E92 and     rcx, 0FFFFFFFFFFFFFFFCh
//   0x1E1E96 mov     r15, rcx
//   0x1E1E99 mov     rcx, [rcx]
//   0x1E1E9C test    cl, 2
//   0x1E1E9F jnz     loc_1E1B0B
//   0x1E1EA5 mov     rsi, rax
//   0x1E1EA8 mov     rax, r15
//   0x1E1EAB mov     r15, rsi
//   0x1E1EAE cmp     r15, [rax+10h]
//   0x1E1EB2 jz      short loc_1E1E92
//   0x1E1EB4 jmp     loc_1E1C26
//   0x1E1EB9 align 20h
//   0x1E1EC0 mov     rax, rcx
//   0x1E1EC3 cmp     [rax+10h], r15
//   0x1E1EC7 jnz     loc_1E1BBE
//   0x1E1ECD mov     rcx, rdx
//   0x1E1ED0 mov     r15, rax
//   0x1E1ED3 and     rcx, 0FFFFFFFFFFFFFFFCh
//   0x1E1ED7 mov     rdx, [rcx]
//   0x1E1EDA test    dl, 2
//   0x1E1EDD jz      short loc_1E1EC0
//   0x1E1EDF mov     r15, rcx
//   0x1E1EE2 jmp     loc_1E1A63
//   0x1E1EE7 align 10h
//   0x1E1EF0 and     rax, 0FFFFFFFFFFFFFFFCh
//   0x1E1EF4 mov     rcx, rax
//   0x1E1EF7 mov     rax, [rax]
//   0x1E1EFA test    al, 2
//   0x1E1EFC jnz     loc_1E1A51
//   0x1E1F02 mov     rsi, r15
//   0x1E1F05 cmp     [rcx+10h], rsi
//   0x1E1F09 jnz     loc_1E1A51
//   0x1E1F0F and     rax, 0FFFFFFFFFFFFFFFCh
//   0x1E1F13 mov     rsi, rcx
//   0x1E1F16 mov     rdx, rax
//   0x1E1F19 mov     rax, [rax]
//   0x1E1F1C mov     rcx, rdx
//   0x1E1F1F test    al, 2
//   0x1E1F21 jz      short loc_1E1F05
//   0x1E1F23 jmp     loc_1E1A51
//   0x1E1F28 align 10h
//   0x1E1F30 mov     rcx, rdx
//   0x1E1F33 mov     rdx, [rdx+8]
//   0x1E1F37 test    byte ptr [rdx], 2
//   0x1E1F3A jnz     loc_1E1E10
//   0x1E1F40 jmp     short loc_1E1F30
//   0x1E1F42 movdqa  xmm2, [rsp+0E8h+var_88]
//   0x1E1F48 movdqa  xmm1, [rsp+0E8h+var_A8]
//   0x1E1F4E mov     [rsp+0E8h+var_E0], rcx
//   0x1E1F53 movdqa  xmm0, [rsp+0E8h+var_98]
//   0x1E1F59 mov     rdi, [rsp+0E8h+var_C8]
//   0x1E1F5E movaps  [rsp+0E8h+var_A8], xmm2
//   0x1E1F63 movdqa  xmm2, xmmword ptr [rsp+70h]
//   0x1E1F69 movaps  [rsp+0E8h+var_68], xmm1
//   0x1E1F71 movaps  [rsp+0E8h+var_58], xmm0
//   0x1E1F79 movaps  [rsp+0E8h+var_98], xmm2
//   0x1E1F7E movaps  [rsp+0E8h+var_88], xmm1
//   0x1E1F83 movaps  xmmword ptr [rsp+70h], xmm0
//   0x1E1F88 call    sub_30EA00
//   0x1E1F8D mov     rcx, [rsp+0E8h+var_E0]
//   0x1E1F92 lea     rdi, [r15+28h]
//   0x1E1F96 mov     rsi, r13
//   0x1E1F99 mov     [rsp+0E8h+var_E0], rcx
//   0x1E1F9E call    sub_310A80
//   0x1E1FA3 mov     rax, [r15]
//   0x1E1FA6 mov     rcx, [rsp+0E8h+var_E0]
//   0x1E1FAB mov     rdx, rax
//   0x1E1FAE and     edx, 2
//   0x1E1FB1 cmp     dword ptr [rcx+10h], 1
//   0x1E1FB5 jz      loc_1E2238
//   0x1E1FBB test    rdx, rdx
//   0x1E1FBE jnz     loc_1E1B1E
//   0x1E1FC4 mov     rdx, [r15+10h]
//   0x1E1FC8 test    byte ptr [rdx], 2
//   0x1E1FCB jnz     loc_1E22E5
//   0x1E1FD1 mov     r15, rdx
//   0x1E1FD4 mov     rdx, [rdx+8]
//   0x1E1FD8 test    byte ptr [rdx], 2
//   0x1E1FDB jnz     loc_1E1B1E
//   0x1E1FE1 jmp     short loc_1E1FD1
//   0x1E1FE3 align 8
//   0x1E1FE8 cmp     r12, rdi
//   0x1E1FEB jnz     loc_1E1B5C
//   0x1E1FF1 mov     rax, cs:qword_411530
//   0x1E1FF8 pxor    xmm0, xmm0
//   0x1E1FFC cmp     byte ptr [rsp+0E8h+var_D8], 0
//   0x1E2001 mov     [rsp+0E8h+var_70], 0
//   0x1E200A movups  [rsp+0E8h+var_88+8], xmm0
//   0x1E200F lea     r12, [r15+28h]
//   0x1E2013 mov     qword ptr [rsp+0E8h+var_88], rax
//   0x1E2018 jnz     loc_1E23D9
//   0x1E201E mov     edx, dword ptr [rsp+0E8h+var_E0]
//   0x1E2022 lea     rax, [rsp+0E8h+var_88]
//   0x1E2027 mov     rdi, r12
//   0x1E202A mov     [rsp+0E8h+var_C8], rax
//   0x1E202F sub     edx, esi
//   0x1E2031 mov     rsi, rax
//   0x1E2034 call    sub_310B80
//   0x1E2039 test    al, al
//   0x1E203B jz      loc_1E244F
//   0x1E2041 mov     rax, [r15]
//   0x1E2044 lea     r14, [rbx+8]
//   0x1E2048 mov     r12, r15
//   0x1E204B test    al, 2
//   0x1E204D jnz     loc_1E2320
//   0x1E2053 mov     r12, [r15+10h]
//   0x1E2057 test    byte ptr [r12], 2
//   0x1E205C jnz     loc_1E24F5
//   0x1E2062 mov     rax, [r12+8]
//   0x1E2067 test    byte ptr [rax], 2
//   0x1E206A jnz     loc_1E2320
//   0x1E2070 mov     r12, rax
//   0x1E2073 jmp     short loc_1E2062
//   0x1E2075 align 8
//   0x1E2078 cmp     r12, rdi
//   0x1E207B jnz     loc_1E1B5C
//   0x1E2081 mov     rax, cs:qword_411530
//   0x1E2088 pxor    xmm0, xmm0
//   0x1E208C cmp     byte ptr [rsp+0E8h+var_D8], 0
//   0x1E2091 mov     [rsp+0E8h+var_70], 0
//   0x1E209A mov     [rsp+0E8h+var_D8], rcx
//   0x1E209F mov     qword ptr [rsp+0E8h+var_88], rax
//   0x1E20A4 movups  [rsp+0E8h+var_88+8], xmm0
//   0x1E20A9 jnz     loc_1E236C
//   0x1E20AF mov     eax, dword ptr [rsp+0E8h+var_E0]
//   0x1E20B3 mov     edx, esi
//   0x1E20B5 mov     rdi, r13
//   0x1E20B8 sub     edx, eax
//   0x1E20BA lea     rax, [rsp+0E8h+var_88]
//   0x1E20BF mov     rsi, rax
//   0x1E20C2 mov     [rsp+0E8h+var_C8], rax
//   0x1E20C7 call    sub_310B80
//   0x1E20CC test    al, al
//   0x1E20CE mov     rcx, [rsp+0E8h+var_D8]
//   0x1E20D3 jz      loc_1E24CC
//   0x1E20D9 cmp     dword ptr [rsp+0E8h+var_88], 1
//   0x1E20DE jnz     loc_1E1F42
//   0x1E20E4 mov     rdx, [r15]
//   0x1E20E7 lea     rdi, [rbx+8]
//   0x1E20EB mov     r12, r15
//   0x1E20EE test    dl, 2
//   0x1E20F1 jnz     short loc_1E210C
//   0x1E20F3 mov     rax, [r15+10h]
//   0x1E20F7 test    byte ptr [rax], 2
//   0x1E20FA jnz     loc_1E2532
//   0x1E2100 mov     r12, rax
//   0x1E2103 mov     rax, [rax+8]
//   0x1E2107 test    byte ptr [rax], 2
//   0x1E210A jz      short loc_1E2100
//   0x1E210C mov     rsi, r15
//   0x1E210F call    sub_1E0110
//   0x1E2114 mov     rdi, [rsp+0E8h+var_C8]
//   0x1E2119 mov     r15, r12
//   0x1E211C call    sub_30EA00
//   0x1E2121 jmp     loc_1E1B1E
//   0x1E2126 cmp     dword ptr [rcx+10h], 8
//   0x1E212A jz      loc_1E1B1E
//   0x1E2130 mov     rdx, cs:qword_411530
//   0x1E2137 pxor    xmm0, xmm0
//   0x1E213B cmp     byte ptr [rsp+0E8h+var_D8], 0
//   0x1E2140 mov     [rsp+0E8h+var_70], 0
//   0x1E2149 movups  [rsp+0E8h+var_88+8], xmm0
//   0x1E214E lea     r14, [r15+28h]
//   0x1E2152 mov     qword ptr [rsp+0E8h+var_88], rdx
//   0x1E2157 jnz     loc_1E227A
//   0x1E215D lea     rsi, [rsp+0E8h+var_88]
//   0x1E2162 mov     edx, eax
//   0x1E2164 mov     rdi, r14
//   0x1E2167 mov     [rsp+0E8h+var_E0], rcx
//   0x1E216C mov     [rsp+0E8h+var_C8], rsi
//   0x1E2171 call    sub_310B80
//   0x1E2176 test    al, al
//   0x1E2178 mov     rcx, [rsp+0E8h+var_E0]
//   0x1E217D jz      loc_1E2440
//   0x1E2183 lea     rdi, [rcx+10h]
//   0x1E2187 mov     rsi, r13
//   0x1E218A mov     [rsp+0E8h+var_E0], rcx
//   0x1E218F call    sub_310A80
//   0x1E2194 mov     rax, [r15]
//   0x1E2197 mov     rcx, [rsp+0E8h+var_E0]
//   0x1E219C mov     rdx, rax
//   0x1E219F and     edx, 2
//   0x1E21A2 cmp     dword ptr [rcx+10h], 1
//   0x1E21A6 jz      loc_1E245E
//   0x1E21AC test    rdx, rdx
//   0x1E21AF jnz     short loc_1E21EA
//   0x1E21B1 mov     rdx, [r15+10h]
//   0x1E21B5 test    byte ptr [rdx], 2
//   0x1E21B8 jnz     short loc_1E21DB
//   0x1E21BA mov     rax, [rdx+8]
//   0x1E21BE test    byte ptr [rax], 2
//   0x1E21C1 jnz     loc_1E25A3
//   0x1E21C7 mov     rdx, rax
//   0x1E21CA jmp     short loc_1E21BA
//   0x1E21CC mov     rcx, r15
//   0x1E21CF mov     r15, rax
//   0x1E21D2 cmp     rcx, [rax+10h]
//   0x1E21D6 jnz     short loc_1E21EA
//   0x1E21D8 mov     rax, rdx
//   0x1E21DB and     rax, 0FFFFFFFFFFFFFFFCh
//   0x1E21DF mov     rdx, [rax]
//   0x1E21E2 test    dl, 2
//   0x1E21E5 jz      short loc_1E21CC
//   0x1E21E7 mov     r15, rax
//   0x1E21EA cmp     dword ptr [rsp+0E8h+var_88], 1
//   0x1E21EF jz      short loc_1E221E
//   0x1E21F1 mov     rdx, qword ptr [rsp+0E8h+var_B8+8]
//   0x1E21F6 mov     qword ptr [rsp+0E8h+var_B8], r12
//   0x1E21FB lea     rdi, [rbx+8]
//   0x1E21FF mov     rsi, r15
//   0x1E2202 mov     r8, [rsp+0E8h+var_C8]
//   0x1E2207 mov     qword ptr [rsp+0E8h+var_B8+8], rdx
//   0x1E220C mov     rdx, qword ptr [rsp+0E8h+var_B8]
//   0x1E2211 mov     rcx, qword ptr [rsp+0E8h+var_B8+8]
//   0x1E2216 call    sub_1E0920
//   0x1E221B mov     r15, rax
//   0x1E221E mov     rdi, [rsp+0E8h+var_C8]
//   0x1E2223 call    sub_30EA00
//   0x1E2228 jmp     loc_1E1B1E
//   0x1E222D mov     rsi, rcx
//   0x1E2230 mov     rcx, rdx
//   0x1E2233 jmp     loc_1E1DF3
//   0x1E2238 lea     rdi, [rbx+8]
//   0x1E223C mov     r12, r15
//   0x1E223F test    rdx, rdx
//   0x1E2242 jnz     short loc_1E226A
//   0x1E2244 mov     r12, [r15+10h]
//   0x1E2248 test    byte ptr [r12], 2
//   0x1E224D jnz     loc_1E2493
//   0x1E2253 mov     rax, [r12+8]
//   0x1E2258 test    byte ptr [rax], 2
//   0x1E225B jnz     short loc_1E226A
//   0x1E225D mov     r12, rax
//   0x1E2260 mov     rax, [r12+8]
//   0x1E2265 test    byte ptr [rax], 2
//   0x1E2268 jz      short loc_1E225D
//   0x1E226A mov     rsi, r15
//   0x1E226D call    sub_1E0110
//   0x1E2272 mov     r15, r12
//   0x1E2275 jmp     loc_1E1B1E
//   0x1E227A mov     edx, [rcx+14h]
//   0x1E227D mov     rdi, r14
//   0x1E2280 mov     [rsp+0E8h+var_E0], rcx
//   0x1E2285 sub     edx, eax
//   0x1E2287 lea     rax, [rsp+0E8h+var_88]
//   0x1E228C mov     rsi, rax
//   0x1E228F mov     [rsp+0E8h+var_C8], rax
//   0x1E2294 call    sub_310B80
//   0x1E2299 test    al, al
//   0x1E229B mov     rcx, [rsp+0E8h+var_E0]
//   0x1E22A0 jz      loc_1E2440
//   0x1E22A6 movdqa  xmm2, [rsp+0E8h+var_88]
//   0x1E22AC movdqu  xmm1, xmmword ptr [r14]
//   0x1E22B1 movdqu  xmm0, xmmword ptr [r14+10h]
//   0x1E22B7 movups  xmmword ptr [r14], xmm2
//   0x1E22BB movdqa  xmm2, xmmword ptr [rsp+70h]
//   0x1E22C1 movaps  [rsp+0E8h+var_68], xmm1
//   0x1E22C9 movups  xmmword ptr [r14+10h], xmm2
//   0x1E22CE movaps  [rsp+0E8h+var_58], xmm0
//   0x1E22D6 movaps  [rsp+0E8h+var_88], xmm1
//   0x1E22DB movaps  xmmword ptr [rsp+70h], xmm0
//   0x1E22E0 jmp     loc_1E2183
//   0x1E22E5 and     rax, 0FFFFFFFFFFFFFFFCh
//   0x1E22E9 mov     rdx, [rax]
//   0x1E22EC test    dl, 2
//   0x1E22EF jz      short loc_1E22F9
//   0x1E22F1 mov     r15, rax
//   0x1E22F4 jmp     loc_1E1B1E
//   0x1E22F9 cmp     [rax+10h], r15
//   0x1E22FD jnz     short loc_1E22F1
//   0x1E22FF mov     rcx, rdx
//   0x1E2302 mov     r15, rax
//   0x1E2305 and     rcx, 0FFFFFFFFFFFFFFFCh
//   0x1E2309 mov     rdx, [rcx]
//   0x1E230C test    dl, 2
//   0x1E230F jnz     loc_1E24ED
//   0x1E2315 mov     rax, rcx
//   0x1E2318 cmp     [rax+10h], r15
//   0x1E231C jz      short loc_1E22FF
//   0x1E231E jmp     short loc_1E22F1
//   0x1E2320 mov     rsi, r15
//   0x1E2323 mov     rdi, r14
//   0x1E2326 call    sub_1E0110
//   0x1E232B cmp     dword ptr [rsp+0E8h+var_88], 1
//   0x1E2330 jz      loc_1E24DB
//   0x1E2336 mov     rdx, qword ptr [rsp+0E8h+var_B8+8]
//   0x1E233B mov     rax, [rsp+0E8h+var_E0]
//   0x1E2340 mov     rsi, r12
//   0x1E2343 mov     rdi, r14
//   0x1E2346 mov     r8, [rsp+0E8h+var_C8]
//   0x1E234B mov     rcx, rdx
//   0x1E234E mov     rdx, rax
//   0x1E2351 call    sub_1E0920
//   0x1E2356 mov     rdi, [rsp+0E8h+var_C8]
//   0x1E235B mov     r15, rax
//   0x1E235E call    sub_30EA00
//   0x1E2363 lea     rcx, [r15+18h]
//   0x1E2367 jmp     loc_1E1F92
//   0x1E236C lea     rax, [rsp+0E8h+var_88]
//   0x1E2371 mov     edx, dword ptr [rsp+0E8h+var_E0]
//   0x1E2375 add     edx, dword ptr [rsp+0E8h+var_A8+4]
//   0x1E2379 mov     rdi, r13
//   0x1E237C sub     edx, esi
//   0x1E237E mov     rsi, rax
//   0x1E2381 mov     [rsp+0E8h+var_C8], rax
//   0x1E2386 call    sub_310B80
//   0x1E238B test    al, al
//   0x1E238D mov     rcx, [rsp+0E8h+var_D8]
//   0x1E2392 jz      loc_1E24CC
//   0x1E2398 movdqa  xmm2, [rsp+0E8h+var_88]
//   0x1E239E movdqa  xmm1, [rsp+0E8h+var_A8]
//   0x1E23A4 movdqa  xmm0, [rsp+0E8h+var_98]
//   0x1E23AA movaps  [rsp+0E8h+var_A8], xmm2
//   0x1E23AF movdqa  xmm2, xmmword ptr [rsp+70h]
//   0x1E23B5 movaps  [rsp+0E8h+var_68], xmm1
//   0x1E23BD movaps  [rsp+0E8h+var_58], xmm0
//   0x1E23C5 movaps  [rsp+0E8h+var_98], xmm2
//   0x1E23CA movaps  [rsp+0E8h+var_88], xmm1
//   0x1E23CF movaps  xmmword ptr [rsp+70h], xmm0
//   0x1E23D4 jmp     loc_1E20D9
//   0x1E23D9 mov     eax, dword ptr [rsp+0E8h+var_E0]
//   0x1E23DD mov     edx, [rcx+14h]
//   0x1E23E0 mov     rdi, r12
//   0x1E23E3 sub     edx, eax
//   0x1E23E5 lea     rax, [rsp+0E8h+var_88]
//   0x1E23EA add     edx, esi
//   0x1E23EC mov     rsi, rax
//   0x1E23EF mov     [rsp+0E8h+var_C8], rax
//   0x1E23F4 call    sub_310B80
//   0x1E23F9 test    al, al
//   0x1E23FB jz      short loc_1E244F
//   0x1E23FD movdqa  xmm2, [rsp+0E8h+var_88]
//   0x1E2403 movdqu  xmm1, xmmword ptr [r12]
//   0x1E2409 movdqu  xmm0, xmmword ptr [r12+10h]
//   0x1E2410 movups  xmmword ptr [r12], xmm2
//   0x1E2415 movdqa  xmm2, xmmword ptr [rsp+70h]
//   0x1E241B movaps  [rsp+0E8h+var_68], xmm1
//   0x1E2423 movups  xmmword ptr [r12+10h], xmm2
//   0x1E2429 movaps  [rsp+0E8h+var_58], xmm0
//   0x1E2431 movaps  [rsp+0E8h+var_88], xmm1
//   0x1E2436 movaps  xmmword ptr [rsp+70h], xmm0
//   0x1E243B jmp     loc_1E2041
//   0x1E2440 mov     rdi, [rsp+0E8h+var_C8]
//   0x1E2445 call    sub_30EA00
//   0x1E244A jmp     loc_1E1B5C
//   0x1E244F mov     rdi, [rsp+0E8h+var_C8]
//   0x1E2454 call    sub_30EA00
//   0x1E2459 jmp     loc_1E1B5C
//   0x1E245E lea     rdi, [rbx+8]
//   0x1E2462 mov     r14, r15
//   0x1E2465 test    rdx, rdx
//   0x1E2468 jnz     short loc_1E2483
//   0x1E246A mov     rdx, [r15+10h]
//   0x1E246E test    byte ptr [rdx], 2
//   0x1E2471 jnz     loc_1E256B
//   0x1E2477 mov     r14, rdx
//   0x1E247A mov     rdx, [rdx+8]
//   0x1E247E test    byte ptr [rdx], 2
//   0x1E2481 jz      short loc_1E2477
//   0x1E2483 mov     rsi, r15
//   0x1E2486 call    sub_1E0110
//   0x1E248B mov     r15, r14
//   0x1E248E jmp     loc_1E21EA
//   0x1E2493 and     rax, 0FFFFFFFFFFFFFFFCh
//   0x1E2497 mov     r12, rax
//   0x1E249A mov     rax, [rax]
//   0x1E249D test    al, 2
//   0x1E249F jnz     loc_1E226A
//   0x1E24A5 mov     rcx, r15
//   0x1E24A8 cmp     [r12+10h], rcx
//   0x1E24AD jnz     loc_1E226A
//   0x1E24B3 and     rax, 0FFFFFFFFFFFFFFFCh
//   0x1E24B7 mov     rcx, r12
//   0x1E24BA mov     rdx, rax
//   0x1E24BD mov     rax, [rax]
//   0x1E24C0 mov     r12, rdx
//   0x1E24C3 test    al, 2
//   0x1E24C5 jz      short loc_1E24A8
//   0x1E24C7 jmp     loc_1E226A
//   0x1E24CC mov     rdi, [rsp+0E8h+var_C8]
//   0x1E24D1 call    sub_30EA00
//   0x1E24D6 jmp     loc_1E1B5C
//   0x1E24DB mov     rdi, [rsp+0E8h+var_C8]
//   0x1E24E0 mov     r15, r12
//   0x1E24E3 call    sub_30EA00
//   0x1E24E8 jmp     loc_1E1B1E
//   0x1E24ED mov     r15, rcx
//   0x1E24F0 jmp     loc_1E1B1E
//   0x1E24F5 and     rax, 0FFFFFFFFFFFFFFFCh
//   0x1E24F9 mov     r12, rax
//   0x1E24FC mov     rax, [rax]
//   0x1E24FF test    al, 2
//   0x1E2501 jnz     loc_1E2320
//   0x1E2507 mov     rcx, r15
//   0x1E250A mov     rdx, r12
//   0x1E250D cmp     [r12+10h], rcx
//   0x1E2512 jnz     loc_1E2320
//   0x1E2518 and     rax, 0FFFFFFFFFFFFFFFCh
//   0x1E251C mov     r12, rax
//   0x1E251F mov     rax, [rax]
//   0x1E2522 test    al, 2
//   0x1E2524 jnz     loc_1E2320
//   0x1E252A mov     rcx, rdx
//   0x1E252D mov     rdx, r12
//   0x1E2530 jmp     short loc_1E250D
//   0x1E2532 and     rdx, 0FFFFFFFFFFFFFFFCh
//   0x1E2536 mov     rax, [rdx]
//   0x1E2539 mov     r12, rdx
//   0x1E253C test    al, 2
//   0x1E253E jnz     loc_1E210C
//   0x1E2544 mov     rcx, r15
//   0x1E2547 cmp     [r12+10h], rcx
//   0x1E254C jnz     loc_1E210C
//   0x1E2552 and     rax, 0FFFFFFFFFFFFFFFCh
//   0x1E2556 mov     rcx, r12
//   0x1E2559 mov     rdx, rax
//   0x1E255C mov     rax, [rax]
//   0x1E255F mov     r12, rdx
//   0x1E2562 test    al, 2
//   0x1E2564 jz      short loc_1E2547
//   0x1E2566 jmp     loc_1E210C
//   0x1E256B and     rax, 0FFFFFFFFFFFFFFFCh
//   0x1E256F mov     r14, rax
//   0x1E2572 mov     rax, [rax]
//   0x1E2575 test    al, 2
//   0x1E2577 jnz     loc_1E2483
//   0x1E257D mov     rcx, r15
//   0x1E2580 cmp     [r14+10h], rcx
//   0x1E2584 jnz     loc_1E2483
//   0x1E258A and     rax, 0FFFFFFFFFFFFFFFCh
//   0x1E258E mov     rcx, r14
//   0x1E2591 mov     rdx, rax
//   0x1E2594 mov     rax, [rax]
//   0x1E2597 mov     r14, rdx
//   0x1E259A test    al, 2
//   0x1E259C jz      short loc_1E2580
//   0x1E259E jmp     loc_1E2483
//   0x1E25A3 mov     r15, rdx
//   0x1E25A6 jmp     loc_1E21EA
//   0x1E25AB call    ___stack_chk_fail
//   0x1E25B0 mov     rbx, rax
//   0x1E25B3 jmp     loc_417D0
//   0x1E25B8 mov     rbx, rax
//   0x1E25BB jmp     loc_4180E
//   0x1E25C0 mov     rbx, rax
//   0x1E25C3 jmp     loc_417DA
//   0x1E25C8 mov     rbx, rax
//   0x1E25CB jmp     loc_4181A
//   0x1E25D0 mov     rbx, rax
//   0x1E25D3 jmp     loc_417FD
// ============================================================

void sub_1E18E0(/* signature unknown */)
{
    // see disassembly above
}

