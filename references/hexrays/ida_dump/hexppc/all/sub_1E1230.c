// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x1E1230
// Name:           sub_1E1230
// Function size:  1690 bytes (407 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x1E1230 push    r15
//   0x1E1232 mov     r10, rsi
//   0x1E1235 push    r14
//   0x1E1237 mov     r14, r8
//   0x1E123A push    r13
//   0x1E123C push    r12
//   0x1E123E push    rbp
//   0x1E123F mov     rbp, rcx
//   0x1E1242 push    rbx
//   0x1E1243 mov     rbx, rdx
//   0x1E1246 movsxd  rdx, r9d
//   0x1E1249 lea     r13, [rbx+18h]
//   0x1E124D mov     r9, rbx
//   0x1E1250 sub     rsp, 0B8h
//   0x1E1257 movdqu  xmm3, xmmword ptr [rbx+18h]
//   0x1E125C mov     r8, [rbx+18h]
//   0x1E1260 movzx   ecx, byte ptr [r13+8]
//   0x1E1265 movzx   eax, byte ptr [rbp+8]
//   0x1E1269 mov     [rsp+0E8h+var_D8], rdi
//   0x1E126E mov     esi, [r13+14h]
//   0x1E1272 movsxd  rdi, dword ptr [r14+4]
//   0x1E1276 add     r8, rdx
//   0x1E1279 mov     r12, fs:28h
//   0x1E1282 mov     [rsp+0E8h+var_40], r12
//   0x1E128A mov     r12, rdx
//   0x1E128D movaps  [rsp+0E8h+var_E8], xmm3
//   0x1E1291 cmp     al, cl
//   0x1E1293 jz      loc_1E1390
//   0x1E1299 cmp     al, [r13+8]
//   0x1E129D jz      short loc_1E12D0
//   0x1E129F xor     ebp, ebp
//   0x1E12A1 mov     rax, [rsp+0E8h+var_40]
//   0x1E12A9 sub     rax, fs:28h
//   0x1E12B2 jnz     loc_1E18B5
//   0x1E12B8 add     rsp, 0B8h
//   0x1E12BF mov     eax, ebp
//   0x1E12C1 pop     rbx
//   0x1E12C2 pop     rbp
//   0x1E12C3 pop     r12
//   0x1E12C5 pop     r13
//   0x1E12C7 pop     r14
//   0x1E12C9 pop     r15
//   0x1E12CB retn
//   0x1E12CC align 10h
//   0x1E12D0 mov     rcx, [rbp+0]
//   0x1E12D4 mov     rax, [rbx+18h]
//   0x1E12D8 mov     [rsp+0E8h+var_C0], r10
//   0x1E12DD mov     [rsp+0E8h+var_C8], r9
//   0x1E12E2 mov     [rsp+0E8h+var_D0], r8
//   0x1E12E7 cmp     rcx, rax
//   0x1E12EA jl      short loc_1E129F
//   0x1E12EC add     rdi, rcx
//   0x1E12EF add     rdx, rax
//   0x1E12F2 cmp     rdi, rdx
//   0x1E12F5 jg      short loc_1E129F
//   0x1E12F7 lea     rax, [r13+10h]
//   0x1E12FB lea     r15, [rsp+0E8h+var_A8]
//   0x1E1300 mov     rsi, rax
//   0x1E1303 mov     rdi, r15
//   0x1E1306 mov     [rsp+0E8h+var_B8], rax
//   0x1E130B call    sub_30EAC0
//   0x1E1310 mov     rax, cs:qword_411530
//   0x1E1317 pxor    xmm0, xmm0
//   0x1E131B cmp     byte ptr [r13+8], 5
//   0x1E1320 mov     r8, [rsp+0E8h+var_D0]
//   0x1E1325 mov     r9, [rsp+0E8h+var_C8]
//   0x1E132A movups  [rsp+0E8h+var_88+8], xmm0
//   0x1E132F mov     qword ptr [rsp+0E8h+var_88], rax
//   0x1E1334 mov     r10, [rsp+0E8h+var_C0]
//   0x1E1339 mov     [rsp+0E8h+var_70], 0
//   0x1E1342 jz      loc_1E16F0
//   0x1E1348 lea     rax, [rsp+0E8h+var_88]
//   0x1E134D mov     edx, r12d
//   0x1E1350 mov     rdi, r15
//   0x1E1353 mov     [rsp+0E8h+var_B0], r10
//   0x1E1358 mov     rsi, rax
//   0x1E135B mov     [rsp+0E8h+var_C0], r9
//   0x1E1360 mov     [rsp+0E8h+var_C8], r8
//   0x1E1365 mov     [rsp+0E8h+var_D0], rax
//   0x1E136A call    sub_310B80
//   0x1E136F test    al, al
//   0x1E1371 jnz     loc_1E1568
//   0x1E1377 xor     ebp, ebp
//   0x1E1379 mov     rdi, [rsp+0E8h+var_D0]
//   0x1E137E call    sub_30EA00
//   0x1E1383 mov     rdi, r15
//   0x1E1386 call    sub_30EA00
//   0x1E138B jmp     loc_1E12A1
//   0x1E1390 mov     r11, [rbp+0]
//   0x1E1394 mov     byte ptr [rsp+0E8h+var_D0], cl
//   0x1E1398 cmp     r8, r11
//   0x1E139B jg      loc_1E1299
//   0x1E13A1 sub     esi, r12d
//   0x1E13A4 movsxd  r15, edi
//   0x1E13A7 movsxd  rsi, esi
//   0x1E13AA add     r15, r11
//   0x1E13AD add     rsi, r8
//   0x1E13B0 cmp     rsi, r15
//   0x1E13B3 jl      loc_1E1299
//   0x1E13B9 lea     r15, [rsp+0E8h+var_A8]
//   0x1E13BE lea     rsi, [rbx+28h]
//   0x1E13C2 mov     [rsp+0E8h+var_B8], r10
//   0x1E13C7 mov     rdi, r15
//   0x1E13CA mov     [rsp+0E8h+var_C8], r8
//   0x1E13CF mov     [rsp+0E8h+var_C0], rbx
//   0x1E13D4 call    sub_30EAC0
//   0x1E13D9 mov     rax, cs:qword_411530
//   0x1E13E0 pxor    xmm0, xmm0
//   0x1E13E4 cmp     byte ptr [r13+8], 5
//   0x1E13E9 mov     r8, [rsp+0E8h+var_C8]
//   0x1E13EE mov     r9, [rsp+0E8h+var_C0]
//   0x1E13F3 movups  [rsp+0E8h+var_88+8], xmm0
//   0x1E13F8 mov     r10, [rsp+0E8h+var_B8]
//   0x1E13FD movzx   ecx, byte ptr [rsp+0E8h+var_D0]
//   0x1E1402 mov     qword ptr [rsp+0E8h+var_88], rax
//   0x1E1407 mov     [rsp+0E8h+var_70], 0
//   0x1E1410 jz      loc_1E1650
//   0x1E1416 lea     rax, [rsp+0E8h+var_88]
//   0x1E141B mov     edx, r12d
//   0x1E141E mov     rdi, r15
//   0x1E1421 mov     [rsp+0E8h+var_B0], r10
//   0x1E1426 mov     rsi, rax
//   0x1E1429 mov     byte ptr [rsp+0E8h+var_B8], cl
//   0x1E142D mov     [rsp+0E8h+var_C0], r9
//   0x1E1432 mov     [rsp+0E8h+var_C8], r8
//   0x1E1437 mov     [rsp+0E8h+var_D0], rax
//   0x1E143C call    sub_310B80
//   0x1E1441 test    al, al
//   0x1E1443 jnz     short loc_1E1460
//   0x1E1445 xor     ebp, ebp
//   0x1E1447 mov     rdi, [rsp+0E8h+var_D0]
//   0x1E144C call    sub_30EA00
//   0x1E1451 mov     rdi, r15
//   0x1E1454 call    sub_30EA00
//   0x1E1459 jmp     loc_1E12A1
//   0x1E145E align 20h
//   0x1E1460 mov     r8, [rsp+0E8h+var_C8]
//   0x1E1465 mov     r9, [rsp+0E8h+var_C0]
//   0x1E146A movzx   ecx, byte ptr [rsp+0E8h+var_B8]
//   0x1E146F mov     r10, [rsp+0E8h+var_B0]
//   0x1E1474 mov     rsi, [rbp+0]
//   0x1E1478 cmp     r8, rsi
//   0x1E147B jg      short loc_1E1445
//   0x1E147D movsxd  rdx, dword ptr [rsp+0E8h+var_88+4]
//   0x1E1482 movsxd  rax, dword ptr [r14+4]
//   0x1E1486 add     rdx, r8
//   0x1E1489 add     rax, rsi
//   0x1E148C cmp     rdx, rax
//   0x1E148F jl      short loc_1E1445
//   0x1E1491 cmp     cl, 5
//   0x1E1494 jz      loc_1E17CD
//   0x1E149A mov     edx, esi
//   0x1E149C sub     edx, r8d
//   0x1E149F mov     rdi, [rsp+0E8h+var_D0]
//   0x1E14A4 mov     rsi, r14
//   0x1E14A7 mov     [rsp+0E8h+var_C0], r9
//   0x1E14AC mov     [rsp+0E8h+var_C8], r8
//   0x1E14B1 call    sub_30FEA0
//   0x1E14B6 mov     ebp, eax
//   0x1E14B8 test    al, al
//   0x1E14BA jz      short loc_1E1445
//   0x1E14BC cmp     dword ptr [rsp+0E8h+var_A8], 1
//   0x1E14C1 mov     r8, [rsp+0E8h+var_C8]
//   0x1E14C6 mov     r9, [rsp+0E8h+var_C0]
//   0x1E14CB jz      loc_1E1784
//   0x1E14D1 lea     rdi, [r13+10h]
//   0x1E14D5 mov     rsi, r15
//   0x1E14D8 mov     [rsp+0E8h+var_C0], r9
//   0x1E14DD mov     [rsp+0E8h+var_C8], r8
//   0x1E14E2 call    sub_30EC10
//   0x1E14E7 mov     rax, [rbx]
//   0x1E14EA mov     rdi, [rsp+0E8h+var_D8]
//   0x1E14EF mov     r8, [rsp+0E8h+var_C8]
//   0x1E14F4 mov     r9, [rsp+0E8h+var_C0]
//   0x1E14F9 test    al, 2
//   0x1E14FB lea     r12, [rdi+8]
//   0x1E14FF jnz     short loc_1E1530
//   0x1E1501 mov     rdx, [rbx+10h]
//   0x1E1505 test    byte ptr [rdx], 2
//   0x1E1508 jnz     loc_1E1834
//   0x1E150E mov     r9, rdx
//   0x1E1511 mov     rdx, [rdx+8]
//   0x1E1515 test    byte ptr [rdx], 2
//   0x1E1518 jz      short loc_1E150E
//   0x1E151A mov     rax, [rsp+0E8h+var_D8]
//   0x1E151F lea     r12, [rax+8]
//   0x1E1523 nop     word ptr [rax+rax+00000000h]
//   0x1E152E xchg    ax, ax
//   0x1E1530 mov     rdx, qword ptr [rsp+0E8h+var_E8+8]
//   0x1E1535 mov     qword ptr [rsp+0E8h+var_E8], r8
//   0x1E1539 mov     rsi, r9
//   0x1E153C mov     rdi, r12
//   0x1E153F mov     rax, qword ptr [rsp+0E8h+var_E8]
//   0x1E1543 mov     r8, [rsp+0E8h+var_D0]
//   0x1E1548 mov     qword ptr [rsp+0E8h+var_E8+8], rdx
//   0x1E154D mov     rdx, qword ptr [rsp+0E8h+var_E8+8]
//   0x1E1552 mov     rcx, rdx
//   0x1E1555 mov     rdx, rax
//   0x1E1558 call    sub_1E0920
//   0x1E155D jmp     loc_1E1447
//   0x1E1562 align 8
//   0x1E1568 mov     r8, [rsp+0E8h+var_C8]
//   0x1E156D mov     r9, [rsp+0E8h+var_C0]
//   0x1E1572 mov     r10, [rsp+0E8h+var_B0]
//   0x1E1577 mov     rcx, [rbp+0]
//   0x1E157B mov     rax, [rbx+18h]
//   0x1E157F cmp     rcx, rax
//   0x1E1582 jl      loc_1E1377
//   0x1E1588 movsxd  rdx, dword ptr [rsp+0E8h+var_A8+4]
//   0x1E158D movsxd  rsi, dword ptr [r14+4]
//   0x1E1591 add     rdx, rax
//   0x1E1594 add     rsi, rcx
//   0x1E1597 cmp     rdx, rsi
//   0x1E159A jl      loc_1E1377
//   0x1E15A0 cmp     byte ptr [r13+8], 5
//   0x1E15A5 jz      loc_1E17E5
//   0x1E15AB mov     edx, ecx
//   0x1E15AD sub     edx, eax
//   0x1E15AF mov     rsi, r14
//   0x1E15B2 mov     rdi, r15
//   0x1E15B5 mov     [rsp+0E8h+var_C0], r9
//   0x1E15BA mov     [rsp+0E8h+var_C8], r8
//   0x1E15BF call    sub_30FEA0
//   0x1E15C4 mov     ebp, eax
//   0x1E15C6 test    al, al
//   0x1E15C8 jz      loc_1E1377
//   0x1E15CE mov     rdi, [rsp+0E8h+var_B8]
//   0x1E15D3 mov     rsi, r15
//   0x1E15D6 call    sub_30EC10
//   0x1E15DB mov     rax, [rbx]
//   0x1E15DE mov     r8, [rsp+0E8h+var_C8]
//   0x1E15E3 mov     r9, [rsp+0E8h+var_C0]
//   0x1E15E8 test    al, 2
//   0x1E15EA jnz     short loc_1E1610
//   0x1E15EC mov     rdx, [rbx+10h]
//   0x1E15F0 test    byte ptr [rdx], 2
//   0x1E15F3 jnz     loc_1E17FD
//   0x1E15F9 mov     r9, rdx
//   0x1E15FC mov     rdx, [rdx+8]
//   0x1E1600 test    byte ptr [rdx], 2
//   0x1E1603 jz      short loc_1E15F9
//   0x1E1605 nop     word ptr [rax+rax+00000000h]
//   0x1E1610 cmp     dword ptr [rsp+0E8h+var_88], 1
//   0x1E1615 jz      loc_1E1379
//   0x1E161B mov     rdx, qword ptr [rsp+0E8h+var_E8+8]
//   0x1E1620 mov     rdi, [rsp+0E8h+var_D8]
//   0x1E1625 mov     qword ptr [rsp+0E8h+var_E8], r8
//   0x1E1629 mov     rsi, r9
//   0x1E162C mov     r8, [rsp+0E8h+var_D0]
//   0x1E1631 mov     qword ptr [rsp+0E8h+var_E8+8], rdx
//   0x1E1636 mov     rdx, qword ptr [rsp+0E8h+var_E8]
//   0x1E163A add     rdi, 8
//   0x1E163E mov     rcx, qword ptr [rsp+0E8h+var_E8+8]
//   0x1E1643 call    sub_1E0920
//   0x1E1648 jmp     loc_1E1379
//   0x1E164D align 10h
//   0x1E1650 mov     rax, [r10+60h]
//   0x1E1654 cmp     byte ptr [rax+91h], 0
//   0x1E165B jz      loc_1E1416
//   0x1E1661 mov     edx, dword ptr [rsp+0E8h+var_A8+4]
//   0x1E1665 lea     rax, [rsp+0E8h+var_88]
//   0x1E166A mov     rdi, r15
//   0x1E166D mov     byte ptr [rsp+0E8h+var_B8], cl
//   0x1E1671 mov     rsi, rax
//   0x1E1674 mov     [rsp+0E8h+var_B0], r10
//   0x1E1679 sub     edx, r12d
//   0x1E167C mov     [rsp+0E8h+var_C0], r9
//   0x1E1681 mov     [rsp+0E8h+var_C8], r8
//   0x1E1686 mov     [rsp+0E8h+var_D0], rax
//   0x1E168B call    sub_310B80
//   0x1E1690 test    al, al
//   0x1E1692 mov     r8, [rsp+0E8h+var_C8]
//   0x1E1697 mov     r9, [rsp+0E8h+var_C0]
//   0x1E169C movzx   ecx, byte ptr [rsp+0E8h+var_B8]
//   0x1E16A1 mov     r10, [rsp+0E8h+var_B0]
//   0x1E16A6 jz      loc_1E1445
//   0x1E16AC movdqa  xmm2, [rsp+0E8h+var_88]
//   0x1E16B2 movdqa  xmm1, [rsp+0E8h+var_A8]
//   0x1E16B8 movdqa  xmm0, [rsp+0E8h+var_98]
//   0x1E16BE movaps  [rsp+0E8h+var_A8], xmm2
//   0x1E16C3 movdqa  xmm2, xmmword ptr [rsp+70h]
//   0x1E16C9 movaps  [rsp+0E8h+var_68], xmm1
//   0x1E16D1 movaps  [rsp+0E8h+var_58], xmm0
//   0x1E16D9 movaps  [rsp+0E8h+var_98], xmm2
//   0x1E16DE movaps  [rsp+0E8h+var_88], xmm1
//   0x1E16E3 movaps  xmmword ptr [rsp+70h], xmm0
//   0x1E16E8 jmp     loc_1E1474
//   0x1E16ED align 10h
//   0x1E16F0 mov     rax, [r10+60h]
//   0x1E16F4 cmp     byte ptr [rax+91h], 0
//   0x1E16FB jz      loc_1E1348
//   0x1E1701 mov     edx, dword ptr [rsp+0E8h+var_A8+4]
//   0x1E1705 lea     rax, [rsp+0E8h+var_88]
//   0x1E170A mov     rdi, r15
//   0x1E170D mov     [rsp+0E8h+var_B0], r10
//   0x1E1712 mov     rsi, rax
//   0x1E1715 mov     [rsp+0E8h+var_C0], r9
//   0x1E171A sub     edx, r12d
//   0x1E171D mov     [rsp+0E8h+var_C8], r8
//   0x1E1722 mov     [rsp+0E8h+var_D0], rax
//   0x1E1727 call    sub_310B80
//   0x1E172C test    al, al
//   0x1E172E mov     r8, [rsp+0E8h+var_C8]
//   0x1E1733 mov     r9, [rsp+0E8h+var_C0]
//   0x1E1738 mov     r10, [rsp+0E8h+var_B0]
//   0x1E173D jz      loc_1E1377
//   0x1E1743 movdqa  xmm2, [rsp+0E8h+var_88]
//   0x1E1749 movdqa  xmm1, [rsp+0E8h+var_A8]
//   0x1E174F movdqa  xmm0, [rsp+0E8h+var_98]
//   0x1E1755 movaps  [rsp+0E8h+var_A8], xmm2
//   0x1E175A movdqa  xmm2, xmmword ptr [rsp+70h]
//   0x1E1760 movaps  [rsp+0E8h+var_68], xmm1
//   0x1E1768 movaps  [rsp+0E8h+var_58], xmm0
//   0x1E1770 movaps  [rsp+0E8h+var_98], xmm2
//   0x1E1775 movaps  [rsp+0E8h+var_88], xmm1
//   0x1E177A movaps  xmmword ptr [rsp+70h], xmm0
//   0x1E177F jmp     loc_1E1577
//   0x1E1784 mov     r12, [rsp+0E8h+var_D8]
//   0x1E1789 mov     rax, [rbx]
//   0x1E178C mov     r13, rbx
//   0x1E178F add     r12, 8
//   0x1E1793 test    al, 2
//   0x1E1795 jnz     short loc_1E17B0
//   0x1E1797 mov     rdx, [rbx+10h]
//   0x1E179B test    byte ptr [rdx], 2
//   0x1E179E jnz     loc_1E1878
//   0x1E17A4 mov     r13, rdx
//   0x1E17A7 mov     rdx, [rdx+8]
//   0x1E17AB test    byte ptr [rdx], 2
//   0x1E17AE jz      short loc_1E17A4
//   0x1E17B0 mov     rsi, rbx
//   0x1E17B3 mov     rdi, r12
//   0x1E17B6 mov     [rsp+0E8h+var_D8], r8
//   0x1E17BB call    sub_1E0110
//   0x1E17C0 mov     r8, [rsp+0E8h+var_D8]
//   0x1E17C5 mov     r9, r13
//   0x1E17C8 jmp     loc_1E1530
//   0x1E17CD mov     rcx, [r10+60h]
//   0x1E17D1 sub     edx, eax
//   0x1E17D3 cmp     byte ptr [rcx+91h], 0
//   0x1E17DA jnz     loc_1E149F
//   0x1E17E0 jmp     loc_1E149A
//   0x1E17E5 mov     rdi, [r10+60h]
//   0x1E17E9 sub     edx, esi
//   0x1E17EB cmp     byte ptr [rdi+91h], 0
//   0x1E17F2 jnz     loc_1E15AF
//   0x1E17F8 jmp     loc_1E15AB
//   0x1E17FD and     rax, 0FFFFFFFFFFFFFFFCh
//   0x1E1801 mov     rdx, [rax]
//   0x1E1804 test    dl, 2
//   0x1E1807 jz      short loc_1E1814
//   0x1E1809 mov     r9, rax
//   0x1E180C jmp     loc_1E1610
//   0x1E1811 mov     rax, rcx
//   0x1E1814 cmp     r9, [rax+10h]
//   0x1E1818 jnz     short loc_1E1809
//   0x1E181A mov     rcx, rdx
//   0x1E181D mov     r9, rax
//   0x1E1820 and     rcx, 0FFFFFFFFFFFFFFFCh
//   0x1E1824 mov     rdx, [rcx]
//   0x1E1827 test    dl, 2
//   0x1E182A jz      short loc_1E1811
//   0x1E182C mov     r9, rcx
//   0x1E182F jmp     loc_1E1610
//   0x1E1834 and     rax, 0FFFFFFFFFFFFFFFCh
//   0x1E1838 mov     rdx, [rax]
//   0x1E183B test    dl, 2
//   0x1E183E jz      short loc_1E1848
//   0x1E1840 mov     r9, rax
//   0x1E1843 jmp     loc_1E1530
//   0x1E1848 cmp     r9, [rax+10h]
//   0x1E184C jnz     short loc_1E1870
//   0x1E184E and     rdx, 0FFFFFFFFFFFFFFFCh
//   0x1E1852 mov     r9, rdx
//   0x1E1855 mov     rdx, [rdx]
//   0x1E1858 test    dl, 2
//   0x1E185B jnz     loc_1E151A
//   0x1E1861 mov     rcx, rax
//   0x1E1864 mov     rax, r9
//   0x1E1867 mov     r9, rcx
//   0x1E186A cmp     r9, [rax+10h]
//   0x1E186E jz      short loc_1E184E
//   0x1E1870 mov     r9, rax
//   0x1E1873 jmp     loc_1E151A
//   0x1E1878 and     rax, 0FFFFFFFFFFFFFFFCh
//   0x1E187C mov     rcx, rbx
//   0x1E187F mov     r13, rax
//   0x1E1882 mov     rax, [rax]
//   0x1E1885 test    al, 2
//   0x1E1887 jnz     loc_1E17B0
//   0x1E188D cmp     [r13+10h], rcx
//   0x1E1891 jnz     loc_1E17B0
//   0x1E1897 and     rax, 0FFFFFFFFFFFFFFFCh
//   0x1E189B mov     rdx, rax
//   0x1E189E mov     rax, [rax]
//   0x1E18A1 test    al, 2
//   0x1E18A3 jz      short loc_1E18AD
//   0x1E18A5 mov     r13, rdx
//   0x1E18A8 jmp     loc_1E17B0
//   0x1E18AD mov     rcx, r13
//   0x1E18B0 mov     r13, rdx
//   0x1E18B3 jmp     short loc_1E188D
//   0x1E18B5 call    ___stack_chk_fail
//   0x1E18BA mov     rbx, rax
//   0x1E18BD jmp     loc_4176C
//   0x1E18C2 mov     rbx, rax
//   0x1E18C5 jmp     loc_41799
// ============================================================

void sub_1E1230(/* signature unknown */)
{
    // see disassembly above
}

