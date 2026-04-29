// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x1E0CE0
// Name:           sub_1E0CE0
// Function size:  3320 bytes (788 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x1E0CE0 push    r15
//   0x1E0CE2 push    r14
//   0x1E0CE4 push    r13
//   0x1E0CE6 push    r12
//   0x1E0CE8 push    rbp
//   0x1E0CE9 mov     rbp, rsi
//   0x1E0CEC push    rbx
//   0x1E0CED mov     rbx, rdi
//   0x1E0CF0 sub     rsp, 0B8h
//   0x1E0CF7 mov     rax, [rdx]
//   0x1E0CFA movdqu  xmm3, xmmword ptr [rdx]
//   0x1E0CFE mov     rsi, fs:28h
//   0x1E0D07 mov     [rsp+0E8h+var_40], rsi
//   0x1E0D0F mov     rsi, rcx
//   0x1E0D12 lea     r13, [rsp+0E8h+var_A8]
//   0x1E0D17 mov     r15, [rbp+0]
//   0x1E0D1B movzx   r14d, byte ptr [rdx+8]
//   0x1E0D20 mov     rdi, r13
//   0x1E0D23 mov     [rsp+0E8h+var_E0], rax
//   0x1E0D28 movaps  [rsp+0E8h+var_B8], xmm3
//   0x1E0D2D call    sub_30DEC0
//   0x1E0D32 movsxd  r12, dword ptr [rsp+0E8h+var_A8+4]
//   0x1E0D37 mov     rdi, [rsp+0E8h+var_E0]
//   0x1E0D3C mov     byte ptr [rsp+0E8h+var_D8], 0
//   0x1E0D41 mov     rax, r12
//   0x1E0D44 add     r12, rdi
//   0x1E0D47 cmp     r14b, 5
//   0x1E0D4B jnz     short loc_1E0D67
//   0x1E0D4D mov     rdx, [rbx]
//   0x1E0D50 mov     rdx, [rdx+5E0h]
//   0x1E0D57 mov     rdx, [rdx+60h]
//   0x1E0D5B movzx   esi, byte ptr [rdx+91h]
//   0x1E0D62 mov     byte ptr [rsp+0E8h+var_D8], sil
//   0x1E0D67 cmp     r15, [rbx+8]
//   0x1E0D6B jz      loc_1E0F1E
//   0x1E0D71 lea     rcx, [r15+18h]
//   0x1E0D75 cmp     [r15+20h], r14b
//   0x1E0D79 jnz     loc_1E0F1E
//   0x1E0D7F cmp     [r15+18h], r12
//   0x1E0D83 jge     loc_1E0F1E
//   0x1E0D89 movsxd  rdi, dword ptr [rcx+14h]
//   0x1E0D8D mov     rsi, [r15+18h]
//   0x1E0D91 mov     r9, [rsp+0E8h+var_E0]
//   0x1E0D96 mov     [rsp+0E8h+var_C0], rdi
//   0x1E0D9B mov     rdx, rdi
//   0x1E0D9E add     rdi, rsi
//   0x1E0DA1 cmp     rsi, r9
//   0x1E0DA4 jl      loc_1E13E8
//   0x1E0DAA jg      loc_1E1478
//   0x1E0DB0 cmp     edx, eax
//   0x1E0DB2 jg      loc_1E1526
//   0x1E0DB8 jge     loc_1E1392
//   0x1E0DBE mov     rax, cs:qword_406B60
//   0x1E0DC5 pxor    xmm0, xmm0
//   0x1E0DC9 cmp     byte ptr [rsp+0E8h+var_D8], 0
//   0x1E0DCE mov     [rsp+0E8h+var_70], 0
//   0x1E0DD7 mov     [rsp+0E8h+var_D0], rcx
//   0x1E0DDC mov     qword ptr [rsp+0E8h+var_88], rax
//   0x1E0DE1 movups  [rsp+0E8h+var_88+8], xmm0
//   0x1E0DE6 jnz     loc_1E0F30
//   0x1E0DEC lea     rax, [rsp+0E8h+var_88]
//   0x1E0DF1 mov     rdi, r13
//   0x1E0DF4 mov     rsi, rax
//   0x1E0DF7 mov     [rsp+0E8h+var_C8], rax
//   0x1E0DFC call    sub_30FF80
//   0x1E0E01 test    al, al
//   0x1E0E03 mov     rcx, [rsp+0E8h+var_D0]
//   0x1E0E08 jz      loc_1E0F52
//   0x1E0E0E lea     rdi, [rcx+10h]
//   0x1E0E12 mov     rsi, r13
//   0x1E0E15 mov     [rsp+0E8h+var_D0], rcx
//   0x1E0E1A call    sub_30FE80
//   0x1E0E1F mov     rax, [r15]
//   0x1E0E22 mov     rcx, [rsp+0E8h+var_D0]
//   0x1E0E27 mov     rdx, rax
//   0x1E0E2A and     edx, 2
//   0x1E0E2D cmp     dword ptr [rcx+10h], 1
//   0x1E0E31 jnz     loc_1E0F98
//   0x1E0E37 lea     rdi, [rbx+8]
//   0x1E0E3B mov     rcx, r15
//   0x1E0E3E cmp     [rbp+0], r15
//   0x1E0E42 jz      loc_1E11D0
//   0x1E0E48 test    rdx, rdx
//   0x1E0E4B jz      loc_1E1180
//   0x1E0E51 mov     rsi, r15
//   0x1E0E54 mov     [rsp+0E8h+var_D0], rcx
//   0x1E0E59 call    sub_1DF510
//   0x1E0E5E mov     r15, [rsp+0E8h+var_D0]
//   0x1E0E63 cmp     dword ptr [rsp+0E8h+var_88], 1
//   0x1E0E68 jnz     loc_1E10F0
//   0x1E0E6E mov     rdx, [rbx+8]
//   0x1E0E72 lea     rax, [rbx+8]
//   0x1E0E76 mov     [rsp+0E8h+var_D8], rax
//   0x1E0E7B cmp     r15, rdx
//   0x1E0E7E jz      loc_1E0F14
//   0x1E0E84 lea     rcx, [r15+18h]
//   0x1E0E88 cmp     [r15+20h], r14b
//   0x1E0E8C jnz     loc_1E1158
//   0x1E0E92 movsxd  rax, dword ptr [rcx+14h]
//   0x1E0E96 add     rax, [r15+18h]
//   0x1E0E9A cmp     rax, r12
//   0x1E0E9D jg      loc_1E1158
//   0x1E0EA3 mov     rax, [r15]
//   0x1E0EA6 mov     rsi, rax
//   0x1E0EA9 and     esi, 2
//   0x1E0EAC cmp     dword ptr [rcx+10h], 8
//   0x1E0EB0 jz      loc_1E1000
//   0x1E0EB6 mov     rdx, r15
//   0x1E0EB9 cmp     r15, [rbp+0]
//   0x1E0EBD jz      loc_1E0FD0
//   0x1E0EC3 test    rsi, rsi
//   0x1E0EC6 jnz     short loc_1E0EF0
//   0x1E0EC8 mov     rcx, [r15+10h]
//   0x1E0ECC test    byte ptr [rcx], 2
//   0x1E0ECF jz      loc_1E1030
//   0x1E0ED5 and     rax, 0FFFFFFFFFFFFFFFCh
//   0x1E0ED9 mov     rdx, rax
//   0x1E0EDC mov     rax, [rax]
//   0x1E0EDF test    al, 2
//   0x1E0EE1 jz      loc_1E11A0
//   0x1E0EE7 nop     word ptr [rax+rax+00000000h]
//   0x1E0EF0 mov     rdi, [rsp+0E8h+var_D8]
//   0x1E0EF5 mov     rsi, r15
//   0x1E0EF8 mov     [rsp+0E8h+var_E0], rdx
//   0x1E0EFD call    sub_1DF510
//   0x1E0F02 mov     r15, [rsp+0E8h+var_E0]
//   0x1E0F07 mov     rdx, [rbx+8]
//   0x1E0F0B cmp     rdx, r15
//   0x1E0F0E jnz     loc_1E0E84
//   0x1E0F14 mov     rdi, [rsp+0E8h+var_C8]
//   0x1E0F19 call    sub_30DE00
//   0x1E0F1E mov     [rbp+0], r15
//   0x1E0F22 mov     ebx, 1
//   0x1E0F27 jmp     short loc_1E0F5E
//   0x1E0F29 align 10h
//   0x1E0F30 mov     eax, dword ptr [rsp+0E8h+var_A8+4]
//   0x1E0F34 lea     rsi, [rsp+0E8h+var_88]
//   0x1E0F39 mov     rdi, r13
//   0x1E0F3C mov     [rsp+0E8h+var_C8], rsi
//   0x1E0F41 sub     eax, edx
//   0x1E0F43 mov     edx, eax
//   0x1E0F45 call    sub_30FF80
//   0x1E0F4A test    al, al
//   0x1E0F4C jnz     loc_1E10A0
//   0x1E0F52 mov     rdi, [rsp+0E8h+var_C8]
//   0x1E0F57 call    sub_30DE00
//   0x1E0F5C xor     ebx, ebx
//   0x1E0F5E mov     rdi, r13
//   0x1E0F61 call    sub_30DE00
//   0x1E0F66 mov     rax, [rsp+0E8h+var_40]
//   0x1E0F6E sub     rax, fs:28h
//   0x1E0F77 jnz     loc_1E19AB
//   0x1E0F7D add     rsp, 0B8h
//   0x1E0F84 mov     eax, ebx
//   0x1E0F86 pop     rbx
//   0x1E0F87 pop     rbp
//   0x1E0F88 pop     r12
//   0x1E0F8A pop     r13
//   0x1E0F8C pop     r14
//   0x1E0F8E pop     r15
//   0x1E0F90 retn
//   0x1E0F91 align 8
//   0x1E0F98 test    rdx, rdx
//   0x1E0F9B jnz     loc_1E0E63
//   0x1E0FA1 mov     rdx, [r15+10h]
//   0x1E0FA5 test    byte ptr [rdx], 2
//   0x1E0FA8 jz      loc_1E1270
//   0x1E0FAE and     rax, 0FFFFFFFFFFFFFFFCh
//   0x1E0FB2 mov     rdx, [rax]
//   0x1E0FB5 test    dl, 2
//   0x1E0FB8 jz      loc_1E12C3
//   0x1E0FBE mov     r15, rax
//   0x1E0FC1 jmp     loc_1E0E63
//   0x1E0FC6 align 10h
//   0x1E0FD0 test    rsi, rsi
//   0x1E0FD3 jz      loc_1E1058
//   0x1E0FD9 mov     rdi, [rsp+0E8h+var_D8]
//   0x1E0FDE mov     rsi, r15
//   0x1E0FE1 mov     [rsp+0E8h+var_E0], rdx
//   0x1E0FE6 call    sub_1DF510
//   0x1E0FEB mov     rdx, [rsp+0E8h+var_E0]
//   0x1E0FF0 mov     [rbp+0], rdx
//   0x1E0FF4 mov     r15, rdx
//   0x1E0FF7 mov     rdx, [rbx+8]
//   0x1E0FFB jmp     loc_1E0F0B
//   0x1E1000 test    rsi, rsi
//   0x1E1003 jnz     loc_1E0F0B
//   0x1E1009 mov     rcx, [r15+10h]
//   0x1E100D test    byte ptr [rcx], 2
//   0x1E1010 jz      loc_1E1250
//   0x1E1016 and     rax, 0FFFFFFFFFFFFFFFCh
//   0x1E101A mov     rcx, [rax]
//   0x1E101D test    cl, 2
//   0x1E1020 jz      loc_1E1288
//   0x1E1026 mov     r15, rax
//   0x1E1029 jmp     loc_1E0F0B
//   0x1E102E align 10h
//   0x1E1030 mov     rdx, rcx
//   0x1E1033 mov     rcx, [rcx+8]
//   0x1E1037 test    byte ptr [rcx], 2
//   0x1E103A jnz     loc_1E0EF0
//   0x1E1040 mov     rdx, rcx
//   0x1E1043 mov     rcx, [rcx+8]
//   0x1E1047 test    byte ptr [rcx], 2
//   0x1E104A jnz     loc_1E0EF0
//   0x1E1050 jmp     short loc_1E1030
//   0x1E1052 align 8
//   0x1E1058 mov     rcx, [r15+10h]
//   0x1E105C test    byte ptr [rcx], 2
//   0x1E105F jz      loc_1E1230
//   0x1E1065 and     rax, 0FFFFFFFFFFFFFFFCh
//   0x1E1069 mov     rdx, rax
//   0x1E106C mov     rax, [rax]
//   0x1E106F test    al, 2
//   0x1E1071 jnz     loc_1E0FD9
//   0x1E1077 mov     rsi, r15
//   0x1E107A cmp     [rdx+10h], rsi
//   0x1E107E jnz     loc_1E0FD9
//   0x1E1084 and     rax, 0FFFFFFFFFFFFFFFCh
//   0x1E1088 mov     rsi, rdx
//   0x1E108B mov     rcx, rax
//   0x1E108E mov     rax, [rax]
//   0x1E1091 mov     rdx, rcx
//   0x1E1094 test    al, 2
//   0x1E1096 jz      short loc_1E107A
//   0x1E1098 jmp     loc_1E0FD9
//   0x1E109D align 20h
//   0x1E10A0 movdqa  xmm2, [rsp+0E8h+var_88]
//   0x1E10A6 movdqa  xmm1, xmmword ptr [r13+0]
//   0x1E10AC movdqa  xmm0, xmmword ptr [r13+10h]
//   0x1E10B2 mov     rcx, [rsp+0E8h+var_D0]
//   0x1E10B7 movaps  xmmword ptr [r13+0], xmm2
//   0x1E10BC movdqa  xmm2, xmmword ptr [rsp+70h]
//   0x1E10C2 movaps  [rsp+0E8h+var_68], xmm1
//   0x1E10CA movaps  [rsp+0E8h+var_58], xmm0
//   0x1E10D2 movaps  xmmword ptr [r13+10h], xmm2
//   0x1E10D7 movaps  [rsp+0E8h+var_88], xmm1
//   0x1E10DC movaps  xmmword ptr [rsp+70h], xmm0
//   0x1E10E1 jmp     loc_1E0E0E
//   0x1E10E6 align 10h
//   0x1E10F0 mov     rdi, [rsp+0E8h+var_C0]
//   0x1E10F5 add     [rsp+0E8h+var_E0], rdi
//   0x1E10FA mov     rdi, [rsp+0E8h+var_C8]
//   0x1E10FF movdqa  xmm1, xmmword ptr [r13+0]
//   0x1E1105 movdqa  xmm0, xmmword ptr [r13+10h]
//   0x1E110B movdqa  xmm2, xmmword ptr [rdi]
//   0x1E110F movaps  xmmword ptr [rdi], xmm1
//   0x1E1112 movaps  [rsp+0E8h+var_68], xmm1
//   0x1E111A movaps  xmmword ptr [r13+0], xmm2
//   0x1E111F movdqa  xmm2, xmmword ptr [rdi+10h]
//   0x1E1124 mov     eax, dword ptr [rsp+0E8h+var_A8+4]
//   0x1E1128 movaps  xmmword ptr [rdi+10h], xmm0
//   0x1E112C mov     dword ptr [rsp+0E8h+var_D0], eax
//   0x1E1130 movaps  [rsp+0E8h+var_58], xmm0
//   0x1E1138 movaps  xmmword ptr [r13+10h], xmm2
//   0x1E113D call    sub_30DE00
//   0x1E1142 cmp     r15, [rbx+8]
//   0x1E1146 mov     eax, dword ptr [rsp+0E8h+var_D0]
//   0x1E114A jnz     loc_1E0D71
//   0x1E1150 jmp     loc_1E0F1E
//   0x1E1155 align 8
//   0x1E1158 cmp     rdx, r15
//   0x1E115B jz      loc_1E0F14
//   0x1E1161 cmp     [rcx+8], r14b
//   0x1E1165 jnz     loc_1E0F14
//   0x1E116B cmp     [r15+18h], r12
//   0x1E116F jge     loc_1E0F14
//   0x1E1175 jmp     loc_1E0F52
//   0x1E117A align 20h
//   0x1E1180 mov     rdx, [r15+10h]
//   0x1E1184 test    byte ptr [rdx], 2
//   0x1E1187 jnz     loc_1E12F0
//   0x1E118D mov     rcx, rdx
//   0x1E1190 mov     rdx, [rdx+8]
//   0x1E1194 test    byte ptr [rdx], 2
//   0x1E1197 jnz     loc_1E0E51
//   0x1E119D jmp     short loc_1E118D
//   0x1E119F align 20h
//   0x1E11A0 mov     rsi, r15
//   0x1E11A3 cmp     [rdx+10h], rsi
//   0x1E11A7 jnz     loc_1E0EF0
//   0x1E11AD and     rax, 0FFFFFFFFFFFFFFFCh
//   0x1E11B1 mov     rsi, rdx
//   0x1E11B4 mov     rcx, rax
//   0x1E11B7 mov     rax, [rax]
//   0x1E11BA mov     rdx, rcx
//   0x1E11BD test    al, 2
//   0x1E11BF jz      short loc_1E11A3
//   0x1E11C1 jmp     loc_1E0EF0
//   0x1E11C6 align 10h
//   0x1E11D0 test    rdx, rdx
//   0x1E11D3 jnz     short loc_1E1210
//   0x1E11D5 mov     rdx, [r15+10h]
//   0x1E11D9 test    byte ptr [rdx], 2
//   0x1E11DC jz      loc_1E1330
//   0x1E11E2 and     rax, 0FFFFFFFFFFFFFFFCh
//   0x1E11E6 mov     rsi, r15
//   0x1E11E9 mov     rcx, rax
//   0x1E11EC mov     rax, [rax]
//   0x1E11EF test    al, 2
//   0x1E11F1 jnz     short loc_1E1210
//   0x1E11F3 cmp     [rcx+10h], rsi
//   0x1E11F7 jnz     short loc_1E1210
//   0x1E11F9 and     rax, 0FFFFFFFFFFFFFFFCh
//   0x1E11FD mov     rdx, rax
//   0x1E1200 mov     rax, [rax]
//   0x1E1203 test    al, 2
//   0x1E1205 jz      loc_1E162D
//   0x1E120B mov     rcx, rdx
//   0x1E120E xchg    ax, ax
//   0x1E1210 mov     rsi, r15
//   0x1E1213 mov     [rsp+0E8h+var_D0], rcx
//   0x1E1218 call    sub_1DF510
//   0x1E121D mov     rcx, [rsp+0E8h+var_D0]
//   0x1E1222 mov     [rbp+0], rcx
//   0x1E1226 mov     r15, rcx
//   0x1E1229 jmp     loc_1E0E63
//   0x1E122E align 10h
//   0x1E1230 mov     rdx, rcx
//   0x1E1233 mov     rcx, [rcx+8]
//   0x1E1237 test    byte ptr [rcx], 2
//   0x1E123A jnz     loc_1E0FD9
//   0x1E1240 jmp     short loc_1E1230
//   0x1E1242 align 10h
//   0x1E1250 mov     r15, rcx
//   0x1E1253 mov     rcx, [rcx+8]
//   0x1E1257 test    byte ptr [rcx], 2
//   0x1E125A jnz     loc_1E0F0B
//   0x1E1260 jmp     short loc_1E1250
//   0x1E1262 align 10h
//   0x1E1270 mov     r15, rdx
//   0x1E1273 mov     rdx, [rdx+8]
//   0x1E1277 test    byte ptr [rdx], 2
//   0x1E127A jnz     loc_1E0E63
//   0x1E1280 jmp     short loc_1E1270
//   0x1E1282 align 8
//   0x1E1288 cmp     r15, [rax+10h]
//   0x1E128C jnz     loc_1E1026
//   0x1E1292 and     rcx, 0FFFFFFFFFFFFFFFCh
//   0x1E1296 mov     r15, rcx
//   0x1E1299 mov     rcx, [rcx]
//   0x1E129C test    cl, 2
//   0x1E129F jnz     loc_1E0F0B
//   0x1E12A5 mov     rsi, rax
//   0x1E12A8 mov     rax, r15
//   0x1E12AB mov     r15, rsi
//   0x1E12AE cmp     r15, [rax+10h]
//   0x1E12B2 jz      short loc_1E1292
//   0x1E12B4 jmp     loc_1E1026
//   0x1E12B9 align 20h
//   0x1E12C0 mov     rax, rcx
//   0x1E12C3 cmp     [rax+10h], r15
//   0x1E12C7 jnz     loc_1E0FBE
//   0x1E12CD mov     rcx, rdx
//   0x1E12D0 mov     r15, rax
//   0x1E12D3 and     rcx, 0FFFFFFFFFFFFFFFCh
//   0x1E12D7 mov     rdx, [rcx]
//   0x1E12DA test    dl, 2
//   0x1E12DD jz      short loc_1E12C0
//   0x1E12DF mov     r15, rcx
//   0x1E12E2 jmp     loc_1E0E63
//   0x1E12E7 align 10h
//   0x1E12F0 and     rax, 0FFFFFFFFFFFFFFFCh
//   0x1E12F4 mov     rcx, rax
//   0x1E12F7 mov     rax, [rax]
//   0x1E12FA test    al, 2
//   0x1E12FC jnz     loc_1E0E51
//   0x1E1302 mov     rsi, r15
//   0x1E1305 cmp     [rcx+10h], rsi
//   0x1E1309 jnz     loc_1E0E51
//   0x1E130F and     rax, 0FFFFFFFFFFFFFFFCh
//   0x1E1313 mov     rsi, rcx
//   0x1E1316 mov     rdx, rax
//   0x1E1319 mov     rax, [rax]
//   0x1E131C mov     rcx, rdx
//   0x1E131F test    al, 2
//   0x1E1321 jz      short loc_1E1305
//   0x1E1323 jmp     loc_1E0E51
//   0x1E1328 align 10h
//   0x1E1330 mov     rcx, rdx
//   0x1E1333 mov     rdx, [rdx+8]
//   0x1E1337 test    byte ptr [rdx], 2
//   0x1E133A jnz     loc_1E1210
//   0x1E1340 jmp     short loc_1E1330
//   0x1E1342 movdqa  xmm2, [rsp+0E8h+var_88]
//   0x1E1348 movdqa  xmm1, [rsp+0E8h+var_A8]
//   0x1E134E mov     [rsp+0E8h+var_E0], rcx
//   0x1E1353 movdqa  xmm0, [rsp+0E8h+var_98]
//   0x1E1359 mov     rdi, [rsp+0E8h+var_C8]
//   0x1E135E movaps  [rsp+0E8h+var_A8], xmm2
//   0x1E1363 movdqa  xmm2, xmmword ptr [rsp+70h]
//   0x1E1369 movaps  [rsp+0E8h+var_68], xmm1
//   0x1E1371 movaps  [rsp+0E8h+var_58], xmm0
//   0x1E1379 movaps  [rsp+0E8h+var_98], xmm2
//   0x1E137E movaps  [rsp+0E8h+var_88], xmm1
//   0x1E1383 movaps  xmmword ptr [rsp+70h], xmm0
//   0x1E1388 call    sub_30DE00
//   0x1E138D mov     rcx, [rsp+0E8h+var_E0]
//   0x1E1392 lea     rdi, [r15+28h]
//   0x1E1396 mov     rsi, r13
//   0x1E1399 mov     [rsp+0E8h+var_E0], rcx
//   0x1E139E call    sub_30FE80
//   0x1E13A3 mov     rax, [r15]
//   0x1E13A6 mov     rcx, [rsp+0E8h+var_E0]
//   0x1E13AB mov     rdx, rax
//   0x1E13AE and     edx, 2
//   0x1E13B1 cmp     dword ptr [rcx+10h], 1
//   0x1E13B5 jz      loc_1E1638
//   0x1E13BB test    rdx, rdx
//   0x1E13BE jnz     loc_1E0F1E
//   0x1E13C4 mov     rdx, [r15+10h]
//   0x1E13C8 test    byte ptr [rdx], 2
//   0x1E13CB jnz     loc_1E16E5
//   0x1E13D1 mov     r15, rdx
//   0x1E13D4 mov     rdx, [rdx+8]
//   0x1E13D8 test    byte ptr [rdx], 2
//   0x1E13DB jnz     loc_1E0F1E
//   0x1E13E1 jmp     short loc_1E13D1
//   0x1E13E3 align 8
//   0x1E13E8 cmp     r12, rdi
//   0x1E13EB jnz     loc_1E0F5C
//   0x1E13F1 mov     rax, cs:qword_406B60
//   0x1E13F8 pxor    xmm0, xmm0
//   0x1E13FC cmp     byte ptr [rsp+0E8h+var_D8], 0
//   0x1E1401 mov     [rsp+0E8h+var_70], 0
//   0x1E140A movups  [rsp+0E8h+var_88+8], xmm0
//   0x1E140F lea     r12, [r15+28h]
//   0x1E1413 mov     qword ptr [rsp+0E8h+var_88], rax
//   0x1E1418 jnz     loc_1E17D9
//   0x1E141E mov     edx, dword ptr [rsp+0E8h+var_E0]
//   0x1E1422 lea     rax, [rsp+0E8h+var_88]
//   0x1E1427 mov     rdi, r12
//   0x1E142A mov     [rsp+0E8h+var_C8], rax
//   0x1E142F sub     edx, esi
//   0x1E1431 mov     rsi, rax
//   0x1E1434 call    sub_30FF80
//   0x1E1439 test    al, al
//   0x1E143B jz      loc_1E184F
//   0x1E1441 mov     rax, [r15]
//   0x1E1444 lea     r14, [rbx+8]
//   0x1E1448 mov     r12, r15
//   0x1E144B test    al, 2
//   0x1E144D jnz     loc_1E1720
//   0x1E1453 mov     r12, [r15+10h]
//   0x1E1457 test    byte ptr [r12], 2
//   0x1E145C jnz     loc_1E18F5
//   0x1E1462 mov     rax, [r12+8]
//   0x1E1467 test    byte ptr [rax], 2
//   0x1E146A jnz     loc_1E1720
//   0x1E1470 mov     r12, rax
//   0x1E1473 jmp     short loc_1E1462
//   0x1E1475 align 8
//   0x1E1478 cmp     r12, rdi
//   0x1E147B jnz     loc_1E0F5C
//   0x1E1481 mov     rax, cs:qword_406B60
//   0x1E1488 pxor    xmm0, xmm0
//   0x1E148C cmp     byte ptr [rsp+0E8h+var_D8], 0
//   0x1E1491 mov     [rsp+0E8h+var_70], 0
//   0x1E149A mov     [rsp+0E8h+var_D8], rcx
//   0x1E149F mov     qword ptr [rsp+0E8h+var_88], rax
//   0x1E14A4 movups  [rsp+0E8h+var_88+8], xmm0
//   0x1E14A9 jnz     loc_1E176C
//   0x1E14AF mov     eax, dword ptr [rsp+0E8h+var_E0]
//   0x1E14B3 mov     edx, esi
//   0x1E14B5 mov     rdi, r13
//   0x1E14B8 sub     edx, eax
//   0x1E14BA lea     rax, [rsp+0E8h+var_88]
//   0x1E14BF mov     rsi, rax
//   0x1E14C2 mov     [rsp+0E8h+var_C8], rax
//   0x1E14C7 call    sub_30FF80
//   0x1E14CC test    al, al
//   0x1E14CE mov     rcx, [rsp+0E8h+var_D8]
//   0x1E14D3 jz      loc_1E18CC
//   0x1E14D9 cmp     dword ptr [rsp+0E8h+var_88], 1
//   0x1E14DE jnz     loc_1E1342
//   0x1E14E4 mov     rdx, [r15]
//   0x1E14E7 lea     rdi, [rbx+8]
//   0x1E14EB mov     r12, r15
//   0x1E14EE test    dl, 2
//   0x1E14F1 jnz     short loc_1E150C
//   0x1E14F3 mov     rax, [r15+10h]
//   0x1E14F7 test    byte ptr [rax], 2
//   0x1E14FA jnz     loc_1E1932
//   0x1E1500 mov     r12, rax
//   0x1E1503 mov     rax, [rax+8]
//   0x1E1507 test    byte ptr [rax], 2
//   0x1E150A jz      short loc_1E1500
//   0x1E150C mov     rsi, r15
//   0x1E150F call    sub_1DF510
//   0x1E1514 mov     rdi, [rsp+0E8h+var_C8]
//   0x1E1519 mov     r15, r12
//   0x1E151C call    sub_30DE00
//   0x1E1521 jmp     loc_1E0F1E
//   0x1E1526 cmp     dword ptr [rcx+10h], 8
//   0x1E152A jz      loc_1E0F1E
//   0x1E1530 mov     rdx, cs:qword_406B60
//   0x1E1537 pxor    xmm0, xmm0
//   0x1E153B cmp     byte ptr [rsp+0E8h+var_D8], 0
//   0x1E1540 mov     [rsp+0E8h+var_70], 0
//   0x1E1549 movups  [rsp+0E8h+var_88+8], xmm0
//   0x1E154E lea     r14, [r15+28h]
//   0x1E1552 mov     qword ptr [rsp+0E8h+var_88], rdx
//   0x1E1557 jnz     loc_1E167A
//   0x1E155D lea     rsi, [rsp+0E8h+var_88]
//   0x1E1562 mov     edx, eax
//   0x1E1564 mov     rdi, r14
//   0x1E1567 mov     [rsp+0E8h+var_E0], rcx
//   0x1E156C mov     [rsp+0E8h+var_C8], rsi
//   0x1E1571 call    sub_30FF80
//   0x1E1576 test    al, al
//   0x1E1578 mov     rcx, [rsp+0E8h+var_E0]
//   0x1E157D jz      loc_1E1840
//   0x1E1583 lea     rdi, [rcx+10h]
//   0x1E1587 mov     rsi, r13
//   0x1E158A mov     [rsp+0E8h+var_E0], rcx
//   0x1E158F call    sub_30FE80
//   0x1E1594 mov     rax, [r15]
//   0x1E1597 mov     rcx, [rsp+0E8h+var_E0]
//   0x1E159C mov     rdx, rax
//   0x1E159F and     edx, 2
//   0x1E15A2 cmp     dword ptr [rcx+10h], 1
//   0x1E15A6 jz      loc_1E185E
//   0x1E15AC test    rdx, rdx
//   0x1E15AF jnz     short loc_1E15EA
//   0x1E15B1 mov     rdx, [r15+10h]
//   0x1E15B5 test    byte ptr [rdx], 2
//   0x1E15B8 jnz     short loc_1E15DB
//   0x1E15BA mov     rax, [rdx+8]
//   0x1E15BE test    byte ptr [rax], 2
//   0x1E15C1 jnz     loc_1E19A3
//   0x1E15C7 mov     rdx, rax
//   0x1E15CA jmp     short loc_1E15BA
//   0x1E15CC mov     rcx, r15
//   0x1E15CF mov     r15, rax
//   0x1E15D2 cmp     rcx, [rax+10h]
//   0x1E15D6 jnz     short loc_1E15EA
//   0x1E15D8 mov     rax, rdx
//   0x1E15DB and     rax, 0FFFFFFFFFFFFFFFCh
//   0x1E15DF mov     rdx, [rax]
//   0x1E15E2 test    dl, 2
//   0x1E15E5 jz      short loc_1E15CC
//   0x1E15E7 mov     r15, rax
//   0x1E15EA cmp     dword ptr [rsp+0E8h+var_88], 1
//   0x1E15EF jz      short loc_1E161E
//   0x1E15F1 mov     rdx, qword ptr [rsp+0E8h+var_B8+8]
//   0x1E15F6 mov     qword ptr [rsp+0E8h+var_B8], r12
//   0x1E15FB lea     rdi, [rbx+8]
//   0x1E15FF mov     rsi, r15
//   0x1E1602 mov     r8, [rsp+0E8h+var_C8]
//   0x1E1607 mov     qword ptr [rsp+0E8h+var_B8+8], rdx
//   0x1E160C mov     rdx, qword ptr [rsp+0E8h+var_B8]
//   0x1E1611 mov     rcx, qword ptr [rsp+0E8h+var_B8+8]
//   0x1E1616 call    sub_1DFD20
//   0x1E161B mov     r15, rax
//   0x1E161E mov     rdi, [rsp+0E8h+var_C8]
//   0x1E1623 call    sub_30DE00
//   0x1E1628 jmp     loc_1E0F1E
//   0x1E162D mov     rsi, rcx
//   0x1E1630 mov     rcx, rdx
//   0x1E1633 jmp     loc_1E11F3
//   0x1E1638 lea     rdi, [rbx+8]
//   0x1E163C mov     r12, r15
//   0x1E163F test    rdx, rdx
//   0x1E1642 jnz     short loc_1E166A
//   0x1E1644 mov     r12, [r15+10h]
//   0x1E1648 test    byte ptr [r12], 2
//   0x1E164D jnz     loc_1E1893
//   0x1E1653 mov     rax, [r12+8]
//   0x1E1658 test    byte ptr [rax], 2
//   0x1E165B jnz     short loc_1E166A
//   0x1E165D mov     r12, rax
//   0x1E1660 mov     rax, [r12+8]
//   0x1E1665 test    byte ptr [rax], 2
//   0x1E1668 jz      short loc_1E165D
//   0x1E166A mov     rsi, r15
//   0x1E166D call    sub_1DF510
//   0x1E1672 mov     r15, r12
//   0x1E1675 jmp     loc_1E0F1E
//   0x1E167A mov     edx, [rcx+14h]
//   0x1E167D mov     rdi, r14
//   0x1E1680 mov     [rsp+0E8h+var_E0], rcx
//   0x1E1685 sub     edx, eax
//   0x1E1687 lea     rax, [rsp+0E8h+var_88]
//   0x1E168C mov     rsi, rax
//   0x1E168F mov     [rsp+0E8h+var_C8], rax
//   0x1E1694 call    sub_30FF80
//   0x1E1699 test    al, al
//   0x1E169B mov     rcx, [rsp+0E8h+var_E0]
//   0x1E16A0 jz      loc_1E1840
//   0x1E16A6 movdqa  xmm2, [rsp+0E8h+var_88]
//   0x1E16AC movdqu  xmm1, xmmword ptr [r14]
//   0x1E16B1 movdqu  xmm0, xmmword ptr [r14+10h]
//   0x1E16B7 movups  xmmword ptr [r14], xmm2
//   0x1E16BB movdqa  xmm2, xmmword ptr [rsp+70h]
//   0x1E16C1 movaps  [rsp+0E8h+var_68], xmm1
//   0x1E16C9 movups  xmmword ptr [r14+10h], xmm2
//   0x1E16CE movaps  [rsp+0E8h+var_58], xmm0
//   0x1E16D6 movaps  [rsp+0E8h+var_88], xmm1
//   0x1E16DB movaps  xmmword ptr [rsp+70h], xmm0
//   0x1E16E0 jmp     loc_1E1583
//   0x1E16E5 and     rax, 0FFFFFFFFFFFFFFFCh
//   0x1E16E9 mov     rdx, [rax]
//   0x1E16EC test    dl, 2
//   0x1E16EF jz      short loc_1E16F9
//   0x1E16F1 mov     r15, rax
//   0x1E16F4 jmp     loc_1E0F1E
//   0x1E16F9 cmp     [rax+10h], r15
//   0x1E16FD jnz     short loc_1E16F1
//   0x1E16FF mov     rcx, rdx
//   0x1E1702 mov     r15, rax
//   0x1E1705 and     rcx, 0FFFFFFFFFFFFFFFCh
//   0x1E1709 mov     rdx, [rcx]
//   0x1E170C test    dl, 2
//   0x1E170F jnz     loc_1E18ED
//   0x1E1715 mov     rax, rcx
//   0x1E1718 cmp     [rax+10h], r15
//   0x1E171C jz      short loc_1E16FF
//   0x1E171E jmp     short loc_1E16F1
//   0x1E1720 mov     rsi, r15
//   0x1E1723 mov     rdi, r14
//   0x1E1726 call    sub_1DF510
//   0x1E172B cmp     dword ptr [rsp+0E8h+var_88], 1
//   0x1E1730 jz      loc_1E18DB
//   0x1E1736 mov     rdx, qword ptr [rsp+0E8h+var_B8+8]
//   0x1E173B mov     rax, [rsp+0E8h+var_E0]
//   0x1E1740 mov     rsi, r12
//   0x1E1743 mov     rdi, r14
//   0x1E1746 mov     r8, [rsp+0E8h+var_C8]
//   0x1E174B mov     rcx, rdx
//   0x1E174E mov     rdx, rax
//   0x1E1751 call    sub_1DFD20
//   0x1E1756 mov     rdi, [rsp+0E8h+var_C8]
//   0x1E175B mov     r15, rax
//   0x1E175E call    sub_30DE00
//   0x1E1763 lea     rcx, [r15+18h]
//   0x1E1767 jmp     loc_1E1392
//   0x1E176C lea     rax, [rsp+0E8h+var_88]
//   0x1E1771 mov     edx, dword ptr [rsp+0E8h+var_E0]
//   0x1E1775 add     edx, dword ptr [rsp+0E8h+var_A8+4]
//   0x1E1779 mov     rdi, r13
//   0x1E177C sub     edx, esi
//   0x1E177E mov     rsi, rax
//   0x1E1781 mov     [rsp+0E8h+var_C8], rax
//   0x1E1786 call    sub_30FF80
//   0x1E178B test    al, al
//   0x1E178D mov     rcx, [rsp+0E8h+var_D8]
//   0x1E1792 jz      loc_1E18CC
//   0x1E1798 movdqa  xmm2, [rsp+0E8h+var_88]
//   0x1E179E movdqa  xmm1, [rsp+0E8h+var_A8]
//   0x1E17A4 movdqa  xmm0, [rsp+0E8h+var_98]
//   0x1E17AA movaps  [rsp+0E8h+var_A8], xmm2
//   0x1E17AF movdqa  xmm2, xmmword ptr [rsp+70h]
//   0x1E17B5 movaps  [rsp+0E8h+var_68], xmm1
//   0x1E17BD movaps  [rsp+0E8h+var_58], xmm0
//   0x1E17C5 movaps  [rsp+0E8h+var_98], xmm2
//   0x1E17CA movaps  [rsp+0E8h+var_88], xmm1
//   0x1E17CF movaps  xmmword ptr [rsp+70h], xmm0
//   0x1E17D4 jmp     loc_1E14D9
//   0x1E17D9 mov     eax, dword ptr [rsp+0E8h+var_E0]
//   0x1E17DD mov     edx, [rcx+14h]
//   0x1E17E0 mov     rdi, r12
//   0x1E17E3 sub     edx, eax
//   0x1E17E5 lea     rax, [rsp+0E8h+var_88]
//   0x1E17EA add     edx, esi
//   0x1E17EC mov     rsi, rax
//   0x1E17EF mov     [rsp+0E8h+var_C8], rax
//   0x1E17F4 call    sub_30FF80
//   0x1E17F9 test    al, al
//   0x1E17FB jz      short loc_1E184F
//   0x1E17FD movdqa  xmm2, [rsp+0E8h+var_88]
//   0x1E1803 movdqu  xmm1, xmmword ptr [r12]
//   0x1E1809 movdqu  xmm0, xmmword ptr [r12+10h]
//   0x1E1810 movups  xmmword ptr [r12], xmm2
//   0x1E1815 movdqa  xmm2, xmmword ptr [rsp+70h]
//   0x1E181B movaps  [rsp+0E8h+var_68], xmm1
//   0x1E1823 movups  xmmword ptr [r12+10h], xmm2
//   0x1E1829 movaps  [rsp+0E8h+var_58], xmm0
//   0x1E1831 movaps  [rsp+0E8h+var_88], xmm1
//   0x1E1836 movaps  xmmword ptr [rsp+70h], xmm0
//   0x1E183B jmp     loc_1E1441
//   0x1E1840 mov     rdi, [rsp+0E8h+var_C8]
//   0x1E1845 call    sub_30DE00
//   0x1E184A jmp     loc_1E0F5C
//   0x1E184F mov     rdi, [rsp+0E8h+var_C8]
//   0x1E1854 call    sub_30DE00
//   0x1E1859 jmp     loc_1E0F5C
//   0x1E185E lea     rdi, [rbx+8]
//   0x1E1862 mov     r14, r15
//   0x1E1865 test    rdx, rdx
//   0x1E1868 jnz     short loc_1E1883
//   0x1E186A mov     rdx, [r15+10h]
//   0x1E186E test    byte ptr [rdx], 2
//   0x1E1871 jnz     loc_1E196B
//   0x1E1877 mov     r14, rdx
//   0x1E187A mov     rdx, [rdx+8]
//   0x1E187E test    byte ptr [rdx], 2
//   0x1E1881 jz      short loc_1E1877
//   0x1E1883 mov     rsi, r15
//   0x1E1886 call    sub_1DF510
//   0x1E188B mov     r15, r14
//   0x1E188E jmp     loc_1E15EA
//   0x1E1893 and     rax, 0FFFFFFFFFFFFFFFCh
//   0x1E1897 mov     r12, rax
//   0x1E189A mov     rax, [rax]
//   0x1E189D test    al, 2
//   0x1E189F jnz     loc_1E166A
//   0x1E18A5 mov     rcx, r15
//   0x1E18A8 cmp     [r12+10h], rcx
//   0x1E18AD jnz     loc_1E166A
//   0x1E18B3 and     rax, 0FFFFFFFFFFFFFFFCh
//   0x1E18B7 mov     rcx, r12
//   0x1E18BA mov     rdx, rax
//   0x1E18BD mov     rax, [rax]
//   0x1E18C0 mov     r12, rdx
//   0x1E18C3 test    al, 2
//   0x1E18C5 jz      short loc_1E18A8
//   0x1E18C7 jmp     loc_1E166A
//   0x1E18CC mov     rdi, [rsp+0E8h+var_C8]
//   0x1E18D1 call    sub_30DE00
//   0x1E18D6 jmp     loc_1E0F5C
//   0x1E18DB mov     rdi, [rsp+0E8h+var_C8]
//   0x1E18E0 mov     r15, r12
//   0x1E18E3 call    sub_30DE00
//   0x1E18E8 jmp     loc_1E0F1E
//   0x1E18ED mov     r15, rcx
//   0x1E18F0 jmp     loc_1E0F1E
//   0x1E18F5 and     rax, 0FFFFFFFFFFFFFFFCh
//   0x1E18F9 mov     r12, rax
//   0x1E18FC mov     rax, [rax]
//   0x1E18FF test    al, 2
//   0x1E1901 jnz     loc_1E1720
//   0x1E1907 mov     rcx, r15
//   0x1E190A mov     rdx, r12
//   0x1E190D cmp     [r12+10h], rcx
//   0x1E1912 jnz     loc_1E1720
//   0x1E1918 and     rax, 0FFFFFFFFFFFFFFFCh
//   0x1E191C mov     r12, rax
//   0x1E191F mov     rax, [rax]
//   0x1E1922 test    al, 2
//   0x1E1924 jnz     loc_1E1720
//   0x1E192A mov     rcx, rdx
//   0x1E192D mov     rdx, r12
//   0x1E1930 jmp     short loc_1E190D
//   0x1E1932 and     rdx, 0FFFFFFFFFFFFFFFCh
//   0x1E1936 mov     rax, [rdx]
//   0x1E1939 mov     r12, rdx
//   0x1E193C test    al, 2
//   0x1E193E jnz     loc_1E150C
//   0x1E1944 mov     rcx, r15
//   0x1E1947 cmp     [r12+10h], rcx
//   0x1E194C jnz     loc_1E150C
//   0x1E1952 and     rax, 0FFFFFFFFFFFFFFFCh
//   0x1E1956 mov     rcx, r12
//   0x1E1959 mov     rdx, rax
//   0x1E195C mov     rax, [rax]
//   0x1E195F mov     r12, rdx
//   0x1E1962 test    al, 2
//   0x1E1964 jz      short loc_1E1947
//   0x1E1966 jmp     loc_1E150C
//   0x1E196B and     rax, 0FFFFFFFFFFFFFFFCh
//   0x1E196F mov     r14, rax
//   0x1E1972 mov     rax, [rax]
//   0x1E1975 test    al, 2
//   0x1E1977 jnz     loc_1E1883
//   0x1E197D mov     rcx, r15
//   0x1E1980 cmp     [r14+10h], rcx
//   0x1E1984 jnz     loc_1E1883
//   0x1E198A and     rax, 0FFFFFFFFFFFFFFFCh
//   0x1E198E mov     rcx, r14
//   0x1E1991 mov     rdx, rax
//   0x1E1994 mov     rax, [rax]
//   0x1E1997 mov     r14, rdx
//   0x1E199A test    al, 2
//   0x1E199C jz      short loc_1E1980
//   0x1E199E jmp     loc_1E1883
//   0x1E19A3 mov     r15, rdx
//   0x1E19A6 jmp     loc_1E15EA
//   0x1E19AB call    ___stack_chk_fail
//   0x1E19B0 mov     rbx, rax
//   0x1E19B3 jmp     loc_4179A
//   0x1E19B8 mov     rbx, rax
//   0x1E19BB jmp     loc_417D8
//   0x1E19C0 mov     rbx, rax
//   0x1E19C3 jmp     loc_417A4
//   0x1E19C8 mov     rbx, rax
//   0x1E19CB jmp     loc_417E4
//   0x1E19D0 mov     rbx, rax
//   0x1E19D3 jmp     loc_417C7
// ============================================================

void sub_1E0CE0(/* signature unknown */)
{
    // see disassembly above
}

