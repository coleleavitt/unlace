// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x1E1060
// Name:           sub_1E1060
// Function size:  2637 bytes (598 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x1E1060 push    r15
//   0x1E1062 push    r14
//   0x1E1064 push    r13
//   0x1E1066 push    r12
//   0x1E1068 push    rbp
//   0x1E1069 push    rbx
//   0x1E106A sub     rsp, 0C8h
//   0x1E1071 mov     [rsp+0F8h+var_E0], rsi
//   0x1E1076 mov     rax, fs:28h
//   0x1E107F mov     [rsp+0F8h+var_40], rax
//   0x1E1087 xor     eax, eax
//   0x1E1089 movzx   eax, byte ptr [rdi+18h]
//   0x1E108D cmp     al, [rsi+18h]
//   0x1E1090 jnz     loc_1E1290
//   0x1E1096 test    al, al
//   0x1E1098 jnz     loc_1E1292
//   0x1E109E mov     rax, [rdi+8]
//   0x1E10A2 mov     r13, rdi
//   0x1E10A5 mov     rdi, [rsi+8]
//   0x1E10A9 mov     rcx, rax
//   0x1E10AC mov     [rsp+0F8h+var_E8], rdi
//   0x1E10B1 mov     rdx, rdi
//   0x1E10B4 test    rax, rax
//   0x1E10B7 jz      loc_1E12F0
//   0x1E10BD cmp     qword ptr [r13+10h], 0
//   0x1E10C2 jnz     loc_1E12C0
//   0x1E10C8 mov     rcx, [rsp+0F8h+var_E8]
//   0x1E10CD mov     rbx, rax
//   0x1E10D0 test    rcx, rcx
//   0x1E10D3 jz      short loc_1E10E5
//   0x1E10D5 mov     rdx, [rsp+0F8h+var_E0]
//   0x1E10DA cmp     qword ptr [rdx+10h], 0
//   0x1E10DF jnz     loc_1E1310
//   0x1E10E5 lea     rcx, [rax+18h]
//   0x1E10E9 cmp     rax, rbx
//   0x1E10EC jz      loc_1E19E3
//   0x1E10F2 cmp     dword ptr [rcx+10h], 8
//   0x1E10F6 jnz     loc_1E1290
//   0x1E10FC mov     rdx, [rax]
//   0x1E10FF test    dl, 2
//   0x1E1102 jnz     short loc_1E10E9
//   0x1E1104 mov     rcx, [rax+10h]
//   0x1E1108 test    byte ptr [rcx], 2
//   0x1E110B jz      loc_1E1320
//   0x1E1111 and     rdx, 0FFFFFFFFFFFFFFFCh
//   0x1E1115 mov     rcx, [rdx]
//   0x1E1118 test    cl, 2
//   0x1E111B jz      loc_1E1343
//   0x1E1121 mov     rax, rdx
//   0x1E1124 jmp     short loc_1E10E5
//   0x1E1126 align 10h
//   0x1E1130 and     rax, 0FFFFFFFFFFFFFFFCh
//   0x1E1134 mov     rdx, [rax]
//   0x1E1137 test    dl, 2
//   0x1E113A jz      loc_1E16E0
//   0x1E1140 mov     rbx, rax
//   0x1E1143 nop     word ptr [rax+rax+00000000h]
//   0x1E114E xchg    ax, ax
//   0x1E1150 cmp     [r13+8], rbx
//   0x1E1154 jz      loc_1E1270
//   0x1E115A movzx   eax, [rsp+0F8h+var_C9]
//   0x1E115F lea     r15, [rbx+18h]
//   0x1E1163 cmp     [rbx+20h], al
//   0x1E1166 jnz     loc_1E1270
//   0x1E116C cmp     [rbx+18h], r14
//   0x1E1170 jnz     loc_1E1270
//   0x1E1176 cmp     dword ptr [r15+10h], 8
//   0x1E117B jz      loc_1E1270
//   0x1E1181 movsxd  rax, dword ptr [r15+14h]
//   0x1E1185 add     r14, rax
//   0x1E1188 cmp     [rsp+0F8h+var_D8], r14
//   0x1E118D jl      loc_1E1270
//   0x1E1193 mov     rax, cs:qword_41F238
//   0x1E119A pxor    xmm0, xmm0
//   0x1E119E cmp     [rsp+0F8h+var_CA], 0
//   0x1E11A3 mov     [rsp+0F8h+var_70], 0
//   0x1E11AF mov     edx, dword ptr [rsp+0F8h+var_C8+4]
//   0x1E11B3 movups  [rsp+0F8h+var_88+8], xmm0
//   0x1E11B8 mov     qword ptr [rsp+0F8h+var_88], rax
//   0x1E11BD jnz     loc_1E1670
//   0x1E11C3 lea     rbp, [rsp+0F8h+var_88]
//   0x1E11C8 mov     rdi, r12
//   0x1E11CB mov     rsi, rbp
//   0x1E11CE call    sub_3150C0
//   0x1E11D3 test    al, al
//   0x1E11D5 jz      loc_1E17E8
//   0x1E11DB mov     rdi, [rsp+0F8h+var_F0]
//   0x1E11E0 mov     rsi, r12
//   0x1E11E3 call    sub_313180
//   0x1E11E8 test    eax, eax
//   0x1E11EA jnz     loc_1E17E8
//   0x1E11F0 mov     rdi, [rsp+0F8h+var_F0]
//   0x1E11F5 lea     rsi, [r15+10h]
//   0x1E11F9 call    sub_313150
//   0x1E11FE movdqa  xmm2, xmmword ptr [rbp+0]
//   0x1E1203 movdqa  xmm1, xmmword ptr [r12]
//   0x1E1209 mov     rdi, rbp
//   0x1E120C movdqa  xmm0, xmmword ptr [r12+10h]
//   0x1E1213 movaps  xmmword ptr [r12], xmm2
//   0x1E1218 movdqa  xmm2, xmmword ptr [rbp+10h]
//   0x1E121D movaps  xmmword ptr [rbp+0], xmm1
//   0x1E1221 movaps  xmmword ptr [rbp+10h], xmm0
//   0x1E1225 movaps  [rsp+0F8h+var_68], xmm1
//   0x1E122D movaps  [rsp+0F8h+var_58], xmm0
//   0x1E1235 movaps  xmmword ptr [r12+10h], xmm2
//   0x1E123B call    sub_312F40
//   0x1E1240 mov     eax, dword ptr [rsp+0F8h+var_C8+4]
//   0x1E1244 cmp     dword ptr [rsp+0F8h+var_A8+4], eax
//   0x1E1248 jg      loc_1E163E
//   0x1E124E mov     rdi, [rsp+0F8h+var_F0]
//   0x1E1253 mov     rsi, r12
//   0x1E1256 call    sub_313180
//   0x1E125B test    eax, eax
//   0x1E125D jz      loc_1E14EC
//   0x1E1263 nop     word ptr [rax+rax+00000000h]
//   0x1E126E xchg    ax, ax
//   0x1E1270 mov     rdi, r12
//   0x1E1273 call    sub_312F40
//   0x1E1278 mov     rdi, [rsp+0F8h+var_F0]
//   0x1E127D call    sub_312F40
//   0x1E1282 nop     word ptr [rax+rax+00000000h]
//   0x1E128D nop     dword ptr [rax]
//   0x1E1290 xor     eax, eax
//   0x1E1292 mov     rdx, [rsp+0F8h+var_40]
//   0x1E129A sub     rdx, fs:28h
//   0x1E12A3 jnz     loc_1E1A74
//   0x1E12A9 add     rsp, 0C8h
//   0x1E12B0 pop     rbx
//   0x1E12B1 pop     rbp
//   0x1E12B2 pop     r12
//   0x1E12B4 pop     r13
//   0x1E12B6 pop     r14
//   0x1E12B8 pop     r15
//   0x1E12BA retn
//   0x1E12BB align 20h
//   0x1E12C0 mov     rbx, [rax+8]
//   0x1E12C4 test    rdi, rdi
//   0x1E12C7 jnz     loc_1E1370
//   0x1E12CD cmp     rcx, rbx
//   0x1E12D0 jz      loc_1E10E5
//   0x1E12D6 mov     [rsp+0F8h+var_E8], rdx
//   0x1E12DB mov     rax, rbx
//   0x1E12DE mov     rbx, rcx
//   0x1E12E1 jmp     loc_1E10E5
//   0x1E12E6 align 10h
//   0x1E12F0 mov     rcx, [rsp+0F8h+var_E8]
//   0x1E12F5 xor     ebx, ebx
//   0x1E12F7 test    rcx, rcx
//   0x1E12FA jz      loc_1E10E5
//   0x1E1300 mov     rdi, [rsp+0F8h+var_E0]
//   0x1E1305 cmp     qword ptr [rdi+10h], 0
//   0x1E130A jz      loc_1E10E5
//   0x1E1310 mov     rcx, [rcx+8]
//   0x1E1314 mov     [rsp+0F8h+var_E8], rcx
//   0x1E1319 jmp     loc_1E10E5
//   0x1E131E align 20h
//   0x1E1320 mov     rax, rcx
//   0x1E1323 mov     rcx, [rcx+8]
//   0x1E1327 test    byte ptr [rcx], 2
//   0x1E132A jnz     loc_1E10E5
//   0x1E1330 jmp     short loc_1E1320
//   0x1E1332 align 20h
//   0x1E1340 mov     rdx, rsi
//   0x1E1343 cmp     rax, [rdx+10h]
//   0x1E1347 jnz     loc_1E1121
//   0x1E134D and     rcx, 0FFFFFFFFFFFFFFFCh
//   0x1E1351 mov     rax, rdx
//   0x1E1354 mov     rsi, rcx
//   0x1E1357 mov     rcx, [rcx]
//   0x1E135A test    cl, 2
//   0x1E135D jz      short loc_1E1340
//   0x1E135F mov     rax, rsi
//   0x1E1362 jmp     loc_1E10E5
//   0x1E1367 align 10h
//   0x1E1370 cmp     qword ptr [rsi+10h], 0
//   0x1E1375 jz      loc_1E12CD
//   0x1E137B mov     rcx, [rdx+8]
//   0x1E137F mov     [rsp+0F8h+var_E8], rcx
//   0x1E1384 cmp     rax, rbx
//   0x1E1387 jz      loc_1E10E5
//   0x1E138D nop     dword ptr [rax]
//   0x1E1390 cmp     [rsp+0F8h+var_E8], rdx
//   0x1E1395 jz      loc_1E1A79
//   0x1E139B cmp     dword ptr [rbx+28h], 8
//   0x1E139F lea     rbp, [rbx+18h]
//   0x1E13A3 jz      loc_1E1718
//   0x1E13A9 mov     rax, [rsp+0F8h+var_E8]
//   0x1E13AE lea     r15, [rax+18h]
//   0x1E13B2 movzx   eax, byte ptr [rbp+8]
//   0x1E13B6 mov     [rsp+0F8h+var_C9], al
//   0x1E13BA cmp     al, [r15+8]
//   0x1E13BE jnz     loc_1E1290
//   0x1E13C4 cmp     byte ptr [rbp+8], 5
//   0x1E13C8 mov     [rsp+0F8h+var_CA], 0
//   0x1E13CD jnz     short loc_1E13E9
//   0x1E13CF mov     rax, [r13+0]
//   0x1E13D3 mov     rax, [rax+5E0h]
//   0x1E13DA mov     rax, [rax+60h]
//   0x1E13DE movzx   eax, byte ptr [rax+91h]
//   0x1E13E5 mov     [rsp+0F8h+var_CA], al
//   0x1E13E9 lea     rax, [rsp+0F8h+var_C8]
//   0x1E13EE lea     rsi, [rbp+10h]
//   0x1E13F2 mov     rdi, rax
//   0x1E13F5 lea     r12, [rsp+0F8h+var_A8]
//   0x1E13FA mov     [rsp+0F8h+var_F0], rax
//   0x1E13FF call    sub_313000
//   0x1E1404 lea     rsi, [r15+10h]
//   0x1E1408 mov     rdi, r12
//   0x1E140B call    sub_313000
//   0x1E1410 movsxd  rdi, dword ptr [rsp+0F8h+var_A8+4]
//   0x1E1415 mov     rcx, [r15]
//   0x1E1418 movsxd  r14, dword ptr [rsp+0F8h+var_C8+4]
//   0x1E141D mov     rax, [rbp+0]
//   0x1E1421 lea     r8, [rdi+rcx]
//   0x1E1425 mov     rdx, r14
//   0x1E1428 mov     [rsp+0F8h+var_D8], r8
//   0x1E142D add     r14, rax
//   0x1E1430 cmp     rax, rcx
//   0x1E1433 jge     loc_1E1580
//   0x1E1439 cmp     r14, r8
//   0x1E143C jnz     loc_1E1270
//   0x1E1442 mov     rsi, cs:qword_41F238
//   0x1E1449 pxor    xmm0, xmm0
//   0x1E144D cmp     [rsp+0F8h+var_CA], 0
//   0x1E1452 mov     [rsp+0F8h+var_70], 0
//   0x1E145E movups  [rsp+0F8h+var_88+8], xmm0
//   0x1E1463 mov     qword ptr [rsp+0F8h+var_88], rsi
//   0x1E1468 jnz     loc_1E17F8
//   0x1E146E mov     edx, ecx
//   0x1E1470 lea     rbp, [rsp+0F8h+var_88]
//   0x1E1475 mov     rdi, [rsp+0F8h+var_F0]
//   0x1E147A sub     edx, eax
//   0x1E147C mov     rsi, rbp
//   0x1E147F call    sub_3150C0
//   0x1E1484 test    al, al
//   0x1E1486 jz      loc_1E1816
//   0x1E148C cmp     dword ptr [rsp+0F8h+var_C8], 1
//   0x1E1491 jnz     loc_1E1A45
//   0x1E1497 movdqa  xmm2, xmmword ptr [rbp+0]
//   0x1E149C movdqa  xmm1, [rsp+0F8h+var_C8]
//   0x1E14A2 mov     rdi, rbp
//   0x1E14A5 movdqa  xmm0, [rsp+0F8h+var_B8]
//   0x1E14AB movaps  [rsp+0F8h+var_C8], xmm2
//   0x1E14B0 movdqa  xmm2, xmmword ptr [rbp+10h]
//   0x1E14B5 movaps  xmmword ptr [rbp+0], xmm1
//   0x1E14B9 movaps  xmmword ptr [rbp+10h], xmm0
//   0x1E14BD movaps  [rsp+0F8h+var_68], xmm1
//   0x1E14C5 movaps  [rsp+0F8h+var_58], xmm0
//   0x1E14CD movaps  [rsp+0F8h+var_B8], xmm2
//   0x1E14D2 call    sub_312F40
//   0x1E14D7 mov     rdi, [rsp+0F8h+var_F0]
//   0x1E14DC mov     rsi, r12
//   0x1E14DF call    sub_313180
//   0x1E14E4 test    eax, eax
//   0x1E14E6 jnz     loc_1E1630
//   0x1E14EC mov     rax, [rbx]
//   0x1E14EF test    al, 2
//   0x1E14F1 jnz     short loc_1E1510
//   0x1E14F3 mov     rdx, [rbx+10h]
//   0x1E14F7 test    byte ptr [rdx], 2
//   0x1E14FA jnz     loc_1E1828
//   0x1E1500 mov     rbx, rdx
//   0x1E1503 mov     rdx, [rdx+8]
//   0x1E1507 test    byte ptr [rdx], 2
//   0x1E150A jz      short loc_1E1500
//   0x1E150C nop     dword ptr [rax+00h]
//   0x1E1510 mov     rcx, [rsp+0F8h+var_E8]
//   0x1E1515 mov     rax, [rcx]
//   0x1E1518 test    al, 2
//   0x1E151A jnz     short loc_1E1550
//   0x1E151C mov     rdx, [rcx+10h]
//   0x1E1520 test    byte ptr [rdx], 2
//   0x1E1523 jnz     loc_1E1868
//   0x1E1529 mov     rax, [rdx+8]
//   0x1E152D test    byte ptr [rax], 2
//   0x1E1530 jnz     short loc_1E153E
//   0x1E1532 mov     rdx, rax
//   0x1E1535 mov     rax, [rdx+8]
//   0x1E1539 test    byte ptr [rax], 2
//   0x1E153C jz      short loc_1E1532
//   0x1E153E mov     [rsp+0F8h+var_E8], rdx
//   0x1E1543 nop     word ptr [rax+rax+00000000h]
//   0x1E154E xchg    ax, ax
//   0x1E1550 mov     rdi, r12
//   0x1E1553 call    sub_312F40
//   0x1E1558 mov     rdi, [rsp+0F8h+var_F0]
//   0x1E155D call    sub_312F40
//   0x1E1562 cmp     [r13+8], rbx
//   0x1E1566 jz      loc_1E1A3D
//   0x1E156C mov     rax, [rsp+0F8h+var_E0]
//   0x1E1571 mov     rdx, [rax+8]
//   0x1E1575 jmp     loc_1E1390
//   0x1E157A align 20h
//   0x1E1580 cmp     rcx, [rbp+0]
//   0x1E1584 jge     loc_1E14D7
//   0x1E158A mov     rdx, [rsp+0F8h+var_D8]
//   0x1E158F cmp     r14, rdx
//   0x1E1592 jnz     loc_1E1270
//   0x1E1598 mov     rdx, cs:qword_41F238
//   0x1E159F pxor    xmm0, xmm0
//   0x1E15A3 cmp     [rsp+0F8h+var_CA], 0
//   0x1E15A8 mov     [rsp+0F8h+var_70], 0
//   0x1E15B4 movups  [rsp+0F8h+var_88+8], xmm0
//   0x1E15B9 mov     qword ptr [rsp+0F8h+var_88], rdx
//   0x1E15BE jnz     loc_1E18A8
//   0x1E15C4 mov     edx, eax
//   0x1E15C6 lea     rbp, [rsp+0F8h+var_88]
//   0x1E15CB mov     rdi, r12
//   0x1E15CE sub     edx, ecx
//   0x1E15D0 mov     rsi, rbp
//   0x1E15D3 call    sub_3150C0
//   0x1E15D8 test    al, al
//   0x1E15DA jz      loc_1E1970
//   0x1E15E0 cmp     dword ptr [rsp+0F8h+var_A8], 1
//   0x1E15E5 jnz     loc_1E1970
//   0x1E15EB movdqa  xmm2, xmmword ptr [rbp+0]
//   0x1E15F0 movdqa  xmm1, [rsp+0F8h+var_A8]
//   0x1E15F6 mov     rdi, rbp
//   0x1E15F9 movdqa  xmm0, [rsp+0F8h+var_98]
//   0x1E15FF movaps  [rsp+0F8h+var_A8], xmm2
//   0x1E1604 movdqa  xmm2, xmmword ptr [rbp+10h]
//   0x1E1609 movaps  xmmword ptr [rbp+0], xmm1
//   0x1E160D movaps  xmmword ptr [rbp+10h], xmm0
//   0x1E1611 movaps  [rsp+0F8h+var_68], xmm1
//   0x1E1619 movaps  [rsp+0F8h+var_58], xmm0
//   0x1E1621 movaps  [rsp+0F8h+var_98], xmm2
//   0x1E1626 call    sub_312F40
//   0x1E162B jmp     loc_1E14D7
//   0x1E1630 mov     rax, [rsp+0F8h+var_D8]
//   0x1E1635 cmp     r14, rax
//   0x1E1638 jge     loc_1E1270
//   0x1E163E mov     rax, [rbx]
//   0x1E1641 test    al, 2
//   0x1E1643 jnz     loc_1E1150
//   0x1E1649 mov     rdx, [rbx+10h]
//   0x1E164D test    byte ptr [rdx], 2
//   0x1E1650 jnz     loc_1E1130
//   0x1E1656 mov     rbx, rdx
//   0x1E1659 mov     rdx, [rdx+8]
//   0x1E165D test    byte ptr [rdx], 2
//   0x1E1660 jnz     loc_1E1150
//   0x1E1666 jmp     short loc_1E1656
//   0x1E1668 align 10h
//   0x1E1670 mov     eax, dword ptr [rsp+0F8h+var_A8+4]
//   0x1E1674 lea     rbp, [rsp+0F8h+var_88]
//   0x1E1679 mov     rdi, r12
//   0x1E167C mov     rsi, rbp
//   0x1E167F sub     eax, edx
//   0x1E1681 mov     edx, eax
//   0x1E1683 call    sub_3150C0
//   0x1E1688 test    al, al
//   0x1E168A jz      loc_1E17E8
//   0x1E1690 movdqa  xmm2, [rsp+0F8h+var_88]
//   0x1E1696 movdqa  xmm1, xmmword ptr [r12]
//   0x1E169C movdqa  xmm0, xmmword ptr [r12+10h]
//   0x1E16A3 movaps  xmmword ptr [r12], xmm2
//   0x1E16A8 movdqa  xmm2, xmmword ptr [rsp+80h]
//   0x1E16B1 movaps  [rsp+0F8h+var_68], xmm1
//   0x1E16B9 movaps  [rsp+0F8h+var_58], xmm0
//   0x1E16C1 movaps  xmmword ptr [r12+10h], xmm2
//   0x1E16C7 movaps  [rsp+0F8h+var_88], xmm1
//   0x1E16CC movaps  xmmword ptr [rsp+80h], xmm0
//   0x1E16D4 jmp     loc_1E11DB
//   0x1E16D9 align 20h
//   0x1E16E0 cmp     [rax+10h], rbx
//   0x1E16E4 jnz     loc_1E1140
//   0x1E16EA and     rdx, 0FFFFFFFFFFFFFFFCh
//   0x1E16EE mov     rbx, rdx
//   0x1E16F1 mov     rdx, [rdx]
//   0x1E16F4 test    dl, 2
//   0x1E16F7 jnz     loc_1E1150
//   0x1E16FD mov     rcx, rax
//   0x1E1700 mov     rax, rbx
//   0x1E1703 mov     rbx, rcx
//   0x1E1706 cmp     [rax+10h], rbx
//   0x1E170A jz      short loc_1E16EA
//   0x1E170C jmp     loc_1E1140
//   0x1E1711 align 8
//   0x1E1718 mov     rdi, [rsp+0F8h+var_E8]
//   0x1E171D movzx   eax, byte ptr [rbp+8]
//   0x1E1721 movzx   ecx, byte ptr [rdi+20h]
//   0x1E1725 lea     r15, [rdi+18h]
//   0x1E1729 cmp     al, cl
//   0x1E172B jb      short loc_1E1743
//   0x1E172D cmp     cl, al
//   0x1E172F jb      loc_1E13B2
//   0x1E1735 mov     rax, [rdi+18h]
//   0x1E1739 cmp     [rbp+0], rax
//   0x1E173D jg      loc_1E13B2
//   0x1E1743 movsxd  rax, dword ptr [rbp+14h]
//   0x1E1747 add     rax, [rbp+0]
//   0x1E174B movzx   ecx, byte ptr [r15+8]
//   0x1E1750 cmp     [rbp+8], cl
//   0x1E1753 jnz     short loc_1E17B0
//   0x1E1755 cmp     [r15], rax
//   0x1E1758 jge     short loc_1E17B0
//   0x1E175A movsxd  rcx, dword ptr [r15+14h]
//   0x1E175E add     rcx, [r15]
//   0x1E1761 cmp     rcx, rax
//   0x1E1764 jg      loc_1E1290
//   0x1E176A mov     rdi, [rsp+0F8h+var_E8]
//   0x1E176F mov     rcx, [rdi]
//   0x1E1772 test    cl, 2
//   0x1E1775 jnz     loc_1E19D0
//   0x1E177B mov     rsi, [rdi+10h]
//   0x1E177F test    byte ptr [rsi], 2
//   0x1E1782 jnz     loc_1E19F9
//   0x1E1788 mov     [rsp+0F8h+var_E8], rsi
//   0x1E178D mov     rsi, [rsi+8]
//   0x1E1791 test    byte ptr [rsi], 2
//   0x1E1794 jz      short loc_1E1788
//   0x1E1796 mov     rcx, [rsp+0F8h+var_E8]
//   0x1E179B cmp     rdx, rcx
//   0x1E179E jnz     loc_1E1A6B
//   0x1E17A4 nop     word ptr [rax+rax+00000000h]
//   0x1E17AF nop
//   0x1E17B0 mov     rax, [rbx]
//   0x1E17B3 test    al, 2
//   0x1E17B5 jnz     loc_1E1562
//   0x1E17BB mov     rdx, [rbx+10h]
//   0x1E17BF test    byte ptr [rdx], 2
//   0x1E17C2 jnz     loc_1E1990
//   0x1E17C8 mov     rax, [rdx+8]
//   0x1E17CC test    byte ptr [rax], 2
//   0x1E17CF jnz     short loc_1E17DD
//   0x1E17D1 mov     rdx, rax
//   0x1E17D4 mov     rax, [rdx+8]
//   0x1E17D8 test    byte ptr [rax], 2
//   0x1E17DB jz      short loc_1E17D1
//   0x1E17DD mov     rbx, rdx
//   0x1E17E0 jmp     loc_1E1562
//   0x1E17E5 align 8
//   0x1E17E8 mov     rdi, rbp
//   0x1E17EB call    sub_312F40
//   0x1E17F0 jmp     loc_1E1270
//   0x1E17F5 align 8
//   0x1E17F8 add     edx, eax
//   0x1E17FA lea     rbp, [rsp+0F8h+var_88]
//   0x1E17FF mov     rdi, [rsp+0F8h+var_F0]
//   0x1E1804 sub     edx, ecx
//   0x1E1806 mov     rsi, rbp
//   0x1E1809 call    sub_3150C0
//   0x1E180E test    al, al
//   0x1E1810 jnz     loc_1E1910
//   0x1E1816 mov     rdi, rbp
//   0x1E1819 call    sub_312F40
//   0x1E181E jmp     loc_1E1270
//   0x1E1823 align 8
//   0x1E1828 and     rax, 0FFFFFFFFFFFFFFFCh
//   0x1E182C mov     rdx, [rax]
//   0x1E182F test    dl, 2
//   0x1E1832 jz      short loc_1E1843
//   0x1E1834 mov     rbx, rax
//   0x1E1837 jmp     loc_1E1510
//   0x1E183C align 20h
//   0x1E1840 mov     rax, rcx
//   0x1E1843 cmp     [rax+10h], rbx
//   0x1E1847 jnz     short loc_1E1834
//   0x1E1849 mov     rcx, rdx
//   0x1E184C mov     rbx, rax
//   0x1E184F and     rcx, 0FFFFFFFFFFFFFFFCh
//   0x1E1853 mov     rdx, [rcx]
//   0x1E1856 test    dl, 2
//   0x1E1859 jz      short loc_1E1840
//   0x1E185B mov     rbx, rcx
//   0x1E185E jmp     loc_1E1510
//   0x1E1863 align 8
//   0x1E1868 and     rax, 0FFFFFFFFFFFFFFFCh
//   0x1E186C mov     rdx, [rax]
//   0x1E186F test    dl, 2
//   0x1E1872 jnz     loc_1E1960
//   0x1E1878 mov     rcx, [rsp+0F8h+var_E8]
//   0x1E187D cmp     [rax+10h], rcx
//   0x1E1881 jnz     loc_1E1960
//   0x1E1887 mov     rcx, rdx
//   0x1E188A and     rcx, 0FFFFFFFFFFFFFFFCh
//   0x1E188E mov     rdx, [rcx]
//   0x1E1891 test    dl, 2
//   0x1E1894 jz      loc_1E1980
//   0x1E189A mov     [rsp+0F8h+var_E8], rcx
//   0x1E189F jmp     loc_1E1550
//   0x1E18A4 align 8
//   0x1E18A8 lea     edx, [rdi+rcx]
//   0x1E18AB lea     rbp, [rsp+0F8h+var_88]
//   0x1E18B0 mov     rdi, r12
//   0x1E18B3 sub     edx, eax
//   0x1E18B5 mov     rsi, rbp
//   0x1E18B8 call    sub_3150C0
//   0x1E18BD test    al, al
//   0x1E18BF jz      loc_1E1970
//   0x1E18C5 movdqa  xmm2, [rsp+0F8h+var_88]
//   0x1E18CB movdqa  xmm1, [rsp+0F8h+var_A8]
//   0x1E18D1 movdqa  xmm0, [rsp+0F8h+var_98]
//   0x1E18D7 movaps  [rsp+0F8h+var_A8], xmm2
//   0x1E18DC movdqa  xmm2, xmmword ptr [rsp+80h]
//   0x1E18E5 movaps  [rsp+0F8h+var_68], xmm1
//   0x1E18ED movaps  [rsp+0F8h+var_58], xmm0
//   0x1E18F5 movaps  [rsp+0F8h+var_98], xmm2
//   0x1E18FA movaps  [rsp+0F8h+var_88], xmm1
//   0x1E18FF movaps  xmmword ptr [rsp+80h], xmm0
//   0x1E1907 jmp     loc_1E15E0
//   0x1E190C align 10h
//   0x1E1910 movdqa  xmm2, [rsp+0F8h+var_88]
//   0x1E1916 movdqa  xmm1, [rsp+0F8h+var_C8]
//   0x1E191C movdqa  xmm0, [rsp+0F8h+var_B8]
//   0x1E1922 movaps  [rsp+0F8h+var_C8], xmm2
//   0x1E1927 movdqa  xmm2, xmmword ptr [rsp+80h]
//   0x1E1930 movaps  [rsp+0F8h+var_68], xmm1
//   0x1E1938 movaps  [rsp+0F8h+var_58], xmm0
//   0x1E1940 movaps  [rsp+0F8h+var_B8], xmm2
//   0x1E1945 movaps  [rsp+0F8h+var_88], xmm1
//   0x1E194A movaps  xmmword ptr [rsp+80h], xmm0
//   0x1E1952 jmp     loc_1E148C
//   0x1E1957 align 20h
//   0x1E1960 mov     [rsp+0F8h+var_E8], rax
//   0x1E1965 jmp     loc_1E1550
//   0x1E196A align 10h
//   0x1E1970 mov     rdi, rbp
//   0x1E1973 call    sub_312F40
//   0x1E1978 jmp     loc_1E1270
//   0x1E197D align 20h
//   0x1E1980 mov     rsi, rax
//   0x1E1983 mov     rax, rcx
//   0x1E1986 mov     rcx, rsi
//   0x1E1989 jmp     loc_1E187D
//   0x1E198E align 10h
//   0x1E1990 and     rax, 0FFFFFFFFFFFFFFFCh
//   0x1E1994 mov     rdx, [rax]
//   0x1E1997 test    dl, 2
//   0x1E199A jz      short loc_1E19A7
//   0x1E199C mov     rbx, rax
//   0x1E199F jmp     loc_1E1562
//   0x1E19A4 mov     rax, rcx
//   0x1E19A7 cmp     [rax+10h], rbx
//   0x1E19AB jnz     short loc_1E199C
//   0x1E19AD mov     rcx, rdx
//   0x1E19B0 mov     rbx, rax
//   0x1E19B3 and     rcx, 0FFFFFFFFFFFFFFFCh
//   0x1E19B7 mov     rdx, [rcx]
//   0x1E19BA test    dl, 2
//   0x1E19BD jz      short loc_1E19A4
//   0x1E19BF mov     rbx, rcx
//   0x1E19C2 jmp     loc_1E1562
//   0x1E19C7 align 10h
//   0x1E19D0 movzx   ecx, byte ptr [rbp+8]
//   0x1E19D4 cmp     [r15+8], cl
//   0x1E19D8 jz      loc_1E1755
//   0x1E19DE jmp     loc_1E17B0
//   0x1E19E3 mov     rax, [rsp+0F8h+var_E0]
//   0x1E19E8 mov     rcx, [rsp+0F8h+var_E8]
//   0x1E19ED cmp     [rax+8], rcx
//   0x1E19F1 setz    al
//   0x1E19F4 jmp     loc_1E1292
//   0x1E19F9 and     rcx, 0FFFFFFFFFFFFFFFCh
//   0x1E19FD mov     rsi, [rcx]
//   0x1E1A00 test    sil, 2
//   0x1E1A04 jz      short loc_1E1A13
//   0x1E1A06 mov     [rsp+0F8h+var_E8], rcx
//   0x1E1A0B jmp     loc_1E1796
//   0x1E1A10 mov     rcx, rdi
//   0x1E1A13 mov     rdi, [rsp+0F8h+var_E8]
//   0x1E1A18 cmp     [rcx+10h], rdi
//   0x1E1A1C jnz     short loc_1E1A06
//   0x1E1A1E mov     rdi, rsi
//   0x1E1A21 mov     [rsp+0F8h+var_E8], rcx
//   0x1E1A26 and     rdi, 0FFFFFFFFFFFFFFFCh
//   0x1E1A2A mov     rsi, [rdi]
//   0x1E1A2D test    sil, 2
//   0x1E1A31 jz      short loc_1E1A10
//   0x1E1A33 mov     [rsp+0F8h+var_E8], rdi
//   0x1E1A38 jmp     loc_1E1796
//   0x1E1A3D mov     rax, rbx
//   0x1E1A40 jmp     loc_1E10E5
//   0x1E1A45 mov     rdi, rbp
//   0x1E1A48 call    sub_312F40
//   0x1E1A4D mov     rdi, r12
//   0x1E1A50 call    sub_312F40
//   0x1E1A55 mov     rdi, [rsp+0F8h+var_F0]
//   0x1E1A5A call    sub_312F40
//   0x1E1A5F mov     rax, rbx
//   0x1E1A62 mov     rbx, [r13+8]
//   0x1E1A66 jmp     loc_1E10E5
//   0x1E1A6B lea     r15, [rcx+18h]
//   0x1E1A6F jmp     loc_1E174B
//   0x1E1A74 call    ___stack_chk_fail
//   0x1E1A79 mov     rcx, [r13+8]
//   0x1E1A7D mov     rax, rbx
//   0x1E1A80 jmp     loc_1E12DE
//   0x1E1A85 mov     rbx, rax
//   0x1E1A88 jmp     loc_444E0
//   0x1E1A8D mov     rbx, rax
//   0x1E1A90 jmp     loc_444E8
//   0x1E1A95 mov     rbx, rax
//   0x1E1A98 jmp     loc_44515
//   0x1E1A9D mov     rbx, rax
//   0x1E1AA0 jmp     loc_444F0
//   0x1E1AA5 mov     rbx, rax
//   0x1E1AA8 jmp     loc_4451F
// ============================================================

void sub_1E1060(/* signature unknown */)
{
    // see disassembly above
}

