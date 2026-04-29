// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x202E0
// Name:           sub_202E0
// Function size:  5366 bytes (1376 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x202E0 push    r12
//   0x202E2 push    rbp
//   0x202E3 push    rbx
//   0x202E4 mov     rbx, rdi
//   0x202E7 sub     rsp, 10h
//   0x202EB mov     rax, fs:28h
//   0x202F4 mov     [rsp+28h+var_20], rax
//   0x202F9 mov     rax, rdx
//   0x202FC cmp     rsi, 64h ; 'd'
//   0x20300 jg      short loc_20370
//   0x20302 test    rsi, rsi
//   0x20305 js      short def_2031B; jumptable 000000000002031B default case, cases 2,3,6,7,9,12-16,20-31,33,37-39,41,42,44,45,47-54,56-58,61,62,64,66-79,83-85,87-93,97,99
//   0x20307 cmp     rsi, 64h; switch 101 cases
//   0x2030B ja      short def_2031B; jumptable 000000000002031B default case, cases 2,3,6,7,9,12-16,20-31,33,37-39,41,42,44,45,47-54,56-58,61,62,64,66-79,83-85,87-93,97,99
//   0x2030D lea     rcx, jpt_2031B
//   0x20314 movsxd  rdx, ds:(jpt_2031B - 2B1D0h)[rcx+rsi*4]
//   0x20318 add     rdx, rcx
//   0x2031B jmp     rdx; switch jump
//   0x2031D xor     edx, edx; jumptable 000000000002031B case 86
//   0x2031F mov     rsi, 0FFFFFFFFFFFFFFFFh
//   0x20326 mov     rdi, 0FFFFFFFFFFFFFFFFh
//   0x2032D call    _invalidate_regfinder_cache
//   0x20332 mov     rdi, rbx; jumptable 000000000002031B case 5
//   0x20335 xor     esi, esi
//   0x20337 call    sub_1FCD0
//   0x2033C mov     rdi, rbx
//   0x2033F call    sub_1FC40
//   0x20344 nop     word ptr [rax+rax+00000000h]
//   0x2034F nop
//   0x20350 xor     eax, eax; jumptable 000000000002031B default case, cases 2,3,6,7,9,12-16,20-31,33,37-39,41,42,44,45,47-54,56-58,61,62,64,66-79,83-85,87-93,97,99
//   0x20352 mov     rdx, [rsp+28h+var_20]
//   0x20357 sub     rdx, fs:28h
//   0x20360 jnz     loc_2164E
//   0x20366 add     rsp, 10h
//   0x2036A pop     rbx
//   0x2036B pop     rbp
//   0x2036C pop     r12
//   0x2036E retn
//   0x2036F align 10h
//   0x20370 cmp     rsi, 7E4h
//   0x20377 jg      short loc_203A0
//   0x20379 cmp     rsi, 7D3h
//   0x20380 jle     short def_2031B; jumptable 000000000002031B default case, cases 2,3,6,7,9,12-16,20-31,33,37-39,41,42,44,45,47-54,56-58,61,62,64,66-79,83-85,87-93,97,99
//   0x20382 sub     rsi, 7D4h; switch 17 cases
//   0x20389 cmp     rsi, 10h
//   0x2038D ja      short def_2031B; jumptable 000000000002031B default case, cases 2,3,6,7,9,12-16,20-31,33,37-39,41,42,44,45,47-54,56-58,61,62,64,66-79,83-85,87-93,97,99
//   0x2038F lea     rcx, jpt_2039D
//   0x20396 movsxd  rdx, ds:(jpt_2039D - 2B364h)[rcx+rsi*4]
//   0x2039A add     rdx, rcx
//   0x2039D jmp     rdx; switch jump
//   0x2039F align 20h
//   0x203A0 lea     rdx, [rsi-0BB8h]
//   0x203A7 cmp     rdx, 6
//   0x203AB ja      short def_2031B; jumptable 000000000002031B default case, cases 2,3,6,7,9,12-16,20-31,33,37-39,41,42,44,45,47-54,56-58,61,62,64,66-79,83-85,87-93,97,99
//   0x203AD sub     rsi, 0BB9h; switch 6 cases
//   0x203B4 cmp     rsi, 5
//   0x203B8 ja      def_203D1; jumptable 00000000000203D1 default case
//   0x203BE lea     rcx, jpt_203D1
//   0x203C5 movsxd  rdx, ds:(jpt_203D1 - 2B3A8h)[rcx+rsi*4]
//   0x203C9 add     rdx, rcx
//   0x203CC mov     ecx, [rax]
//   0x203CE cmp     ecx, 2Fh ; '/'
//   0x203D1 jmp     rdx; switch jump
//   0x203D3 align 8
//   0x203D8 ja      loc_21210; jumptable 00000000000203D1 case 3004
//   0x203DE mov     rdx, [rax+10h]
//   0x203E2 lea     esi, [rcx+8]
//   0x203E5 mov     edi, ecx
//   0x203E7 mov     [rax], esi
//   0x203E9 mov     r8, [rdx+rdi]
//   0x203ED cmp     esi, 2Fh ; '/'
//   0x203F0 ja      loc_217C4
//   0x203F6 add     ecx, 10h
//   0x203F9 add     rdx, rsi
//   0x203FC mov     [rax], ecx
//   0x203FE mov     rdi, [rdx]
//   0x20401 mov     rsi, rbx
//   0x20404 mov     rdx, r8
//   0x20407 call    sub_22CA0
//   0x2040C nop     dword ptr [rax+00h]
//   0x20410 mov     eax, 1
//   0x20415 jmp     loc_20352
//   0x2041A align 20h
//   0x20420 ja      loc_211F0; jumptable 00000000000203D1 case 3003
//   0x20426 mov     rdx, [rax+10h]
//   0x2042A lea     esi, [rcx+8]
//   0x2042D mov     edi, ecx
//   0x2042F mov     [rax], esi
//   0x20431 mov     rdi, [rdx+rdi]
//   0x20435 cmp     esi, 2Fh ; '/'
//   0x20438 ja      loc_217BB
//   0x2043E add     ecx, 10h
//   0x20441 add     rdx, rsi
//   0x20444 mov     [rax], ecx
//   0x20446 mov     rdx, [rdx]
//   0x20449 mov     rsi, rbx
//   0x2044C call    sub_22D30
//   0x20451 movzx   eax, al
//   0x20454 jmp     loc_20352
//   0x20459 align 20h
//   0x20460 ja      loc_212C0; jumptable 00000000000203D1 case 3002
//   0x20466 mov     rdx, [rax+10h]
//   0x2046A lea     esi, [rcx+8]
//   0x2046D mov     edi, ecx
//   0x2046F mov     [rax], esi
//   0x20471 mov     rbp, [rdx+rdi]
//   0x20475 cmp     esi, 2Fh ; '/'
//   0x20478 ja      loc_216BF
//   0x2047E add     ecx, 10h
//   0x20481 add     rdx, rsi
//   0x20484 mov     [rax], ecx
//   0x20486 mov     rsi, [rdx]
//   0x20489 mov     rdi, rbx
//   0x2048C call    sub_13FC0
//   0x20491 mov     [rbp+0], al
//   0x20494 jmp     loc_20410
//   0x20499 align 20h
//   0x204A0 ja      loc_212A0; jumptable 00000000000203D1 case 3001
//   0x204A6 mov     rdx, [rax+10h]
//   0x204AA lea     esi, [rcx+8]
//   0x204AD mov     edi, ecx
//   0x204AF mov     [rax], esi
//   0x204B1 mov     r9, [rdx+rdi]
//   0x204B5 cmp     esi, 2Fh ; '/'
//   0x204B8 ja      loc_216B6
//   0x204BE add     ecx, 10h
//   0x204C1 add     rdx, rsi
//   0x204C4 mov     [rax], ecx
//   0x204C6 mov     rdi, [rdx]
//   0x204C9 cmp     rdi, 0FFFFFFFFFFFFFFFFh
//   0x204CD jz      loc_21589
//   0x204D3 mov     r8d, 1
//   0x204D9 mov     ecx, 3
//   0x204DE mov     rdx, r9
//   0x204E1 mov     esi, 64h ; 'd'
//   0x204E6 call    _split_sreg_range
//   0x204EB jmp     loc_20410
//   0x204F0 ja      loc_211C0; jumptable 00000000000203D1 case 3005
//   0x204F6 mov     rdx, [rax+10h]
//   0x204FA lea     edi, [rcx+8]
//   0x204FD mov     esi, ecx
//   0x204FF mov     [rax], edi
//   0x20501 mov     r8, [rdx+rsi]
//   0x20505 cmp     edi, 2Fh ; '/'
//   0x20508 ja      loc_217B2
//   0x2050E lea     esi, [rcx+10h]
//   0x20511 mov     [rax], esi
//   0x20513 mov     r9, [rdx+rdi]
//   0x20517 cmp     esi, 2Fh ; '/'
//   0x2051A ja      loc_21680
//   0x20520 add     ecx, 18h
//   0x20523 add     rdx, rsi
//   0x20526 mov     [rax], ecx
//   0x20528 mov     rdi, [rdx]
//   0x2052B mov     rsi, r8
//   0x2052E mov     rdx, r9
//   0x20531 call    sub_22950
//   0x20536 jmp     loc_20410
//   0x2053B align 20h
//   0x20540 ja      loc_21230; jumptable 00000000000203D1 case 3006
//   0x20546 mov     rdx, [rax+10h]
//   0x2054A lea     edi, [rcx+8]
//   0x2054D mov     esi, ecx
//   0x2054F mov     [rax], edi
//   0x20551 mov     r8, [rdx+rsi]
//   0x20555 cmp     edi, 2Fh ; '/'
//   0x20558 ja      loc_217CD
//   0x2055E lea     esi, [rcx+10h]
//   0x20561 mov     [rax], esi
//   0x20563 mov     rdi, [rdx+rdi]
//   0x20567 cmp     esi, 2Fh ; '/'
//   0x2056A ja      loc_2178E
//   0x20570 add     ecx, 18h
//   0x20573 add     rdx, rsi
//   0x20576 mov     [rax], ecx
//   0x20578 mov     rdx, [rdx]
//   0x2057B mov     rsi, rdi
//   0x2057E mov     rdi, r8
//   0x20581 call    sub_22B00
//   0x20586 movzx   eax, al
//   0x20589 jmp     loc_20352
//   0x2058E align 10h
//   0x20590 mov     ecx, [rax]; jumptable 000000000002039D case 2020
//   0x20592 cmp     ecx, 2Fh ; '/'
//   0x20595 ja      loc_21338
//   0x2059B mov     rdx, [rax+10h]
//   0x2059F lea     esi, [rcx+8]
//   0x205A2 mov     edi, ecx
//   0x205A4 mov     [rax], esi
//   0x205A6 mov     rdi, [rdx+rdi]
//   0x205AA cmp     esi, 2Fh ; '/'
//   0x205AD ja      loc_216C8
//   0x205B3 add     ecx, 10h
//   0x205B6 add     rdx, rsi
//   0x205B9 mov     [rax], ecx
//   0x205BB mov     eax, [rdx]
//   0x205BD cmp     eax, 0B0h
//   0x205C2 jz      short loc_205CF
//   0x205C4 cmp     eax, 100h
//   0x205C9 jnz     def_2031B; jumptable 000000000002031B default case, cases 2,3,6,7,9,12-16,20-31,33,37-39,41,42,44,45,47-54,56-58,61,62,64,66-79,83-85,87-93,97,99
//   0x205CF mov     eax, [rbx+78h]
//   0x205D2 lea     rdx, off_34160; "ilp32"
//   0x205D9 shl     rax, 4
//   0x205DD movzx   eax, byte ptr [rdx+rax+8]
//   0x205E2 mov     [rdi+8], rax
//   0x205E6 jmp     loc_20410
//   0x205EB align 10h
//   0x205F0 mov     ecx, [rax]; jumptable 000000000002039D case 2015
//   0x205F2 cmp     ecx, 2Fh ; '/'
//   0x205F5 ja      loc_212E0
//   0x205FB mov     rdx, [rax+10h]
//   0x205FF lea     edi, [rcx+8]
//   0x20602 mov     esi, ecx
//   0x20604 mov     [rax], edi
//   0x20606 mov     rbp, [rdx+rsi]
//   0x2060A cmp     edi, 2Fh ; '/'
//   0x2060D ja      loc_2165C
//   0x20613 lea     esi, [rcx+10h]
//   0x20616 mov     [rax], esi
//   0x20618 mov     rdi, [rdx+rdi]
//   0x2061C cmp     esi, 2Fh ; '/'
//   0x2061F ja      loc_216D1
//   0x20625 add     ecx, 18h
//   0x20628 add     rdx, rsi
//   0x2062B mov     [rax], ecx
//   0x2062D mov     rdx, [rdx]
//   0x20630 mov     rsi, rdi
//   0x20633 mov     rdi, rbx
//   0x20636 call    sub_18F80
//   0x2063B mov     [rbp+0], eax
//   0x2063E jmp     loc_20410
//   0x20643 align 8
//   0x20648 mov     ecx, [rax]; jumptable 000000000002039D case 2012
//   0x2064A cmp     ecx, 2Fh ; '/'
//   0x2064D ja      loc_21358
//   0x20653 mov     rdx, [rax+10h]
//   0x20657 lea     esi, [rcx+8]
//   0x2065A mov     edi, ecx
//   0x2065C mov     [rax], esi
//   0x2065E mov     rdi, [rdx+rdi]
//   0x20662 cmp     esi, 2Fh ; '/'
//   0x20665 ja      loc_2166E
//   0x2066B add     ecx, 10h
//   0x2066E add     rdx, rsi
//   0x20671 mov     [rax], ecx
//   0x20673 mov     rdx, [rdx]
//   0x20676 mov     rsi, rdi
//   0x20679 mov     rdi, rbx
//   0x2067C call    sub_1CB80
//   0x20681 jmp     loc_20410
//   0x20686 align 10h
//   0x20690 mov     ecx, [rax]; jumptable 000000000002039D case 2010
//   0x20692 cmp     ecx, 2Fh ; '/'
//   0x20695 ja      loc_21310
//   0x2069B mov     rdx, [rax+10h]
//   0x2069F lea     esi, [rcx+8]
//   0x206A2 mov     edi, ecx
//   0x206A4 mov     [rax], esi
//   0x206A6 mov     rdi, [rdx+rdi]
//   0x206AA cmp     esi, 2Fh ; '/'
//   0x206AD ja      loc_21665
//   0x206B3 lea     esi, [rcx+10h]
//   0x206B6 mov     [rax], esi
//   0x206B8 cmp     esi, 2Fh ; '/'
//   0x206BB ja      loc_2174F
//   0x206C1 lea     esi, [rcx+18h]
//   0x206C4 mov     [rax], esi
//   0x206C6 cmp     esi, 2Fh ; '/'
//   0x206C9 ja      loc_21746
//   0x206CF add     ecx, 20h ; ' '
//   0x206D2 add     rdx, rsi
//   0x206D5 mov     [rax], ecx
//   0x206D7 mov     edx, [rdx]
//   0x206D9 mov     rsi, rdi
//   0x206DC mov     rdi, rbx
//   0x206DF call    sub_1D3E0
//   0x206E4 test    al, al
//   0x206E6 jnz     loc_20410
//   0x206EC mov     rax, 0FFFFFFFFFFFFFFFFh
//   0x206F3 jmp     loc_20352
//   0x206F8 align 20h
//   0x20700 mov     edx, [rax]; jumptable 000000000002039D case 2009
//   0x20702 cmp     edx, 2Fh ; '/'
//   0x20705 ja      loc_21260
//   0x2070B mov     ecx, edx
//   0x2070D add     edx, 8
//   0x20710 add     rcx, [rax+10h]
//   0x20714 mov     [rax], edx
//   0x20716 mov     rsi, [rcx]
//   0x20719 xor     edx, edx
//   0x2071B mov     rdi, rbx
//   0x2071E call    sub_1D3E0
//   0x20723 test    al, al
//   0x20725 jnz     loc_20410
//   0x2072B jmp     short loc_206EC
//   0x2072D align 10h
//   0x20730 mov     ecx, [rax]; jumptable 000000000002039D case 2016
//   0x20732 cmp     ecx, 2Fh ; '/'
//   0x20735 ja      loc_21160
//   0x2073B mov     rdx, [rax+10h]
//   0x2073F lea     edi, [rcx+8]
//   0x20742 mov     esi, ecx
//   0x20744 mov     [rax], edi
//   0x20746 mov     r8, [rdx+rsi]
//   0x2074A cmp     edi, 2Fh ; '/'
//   0x2074D ja      loc_21773
//   0x20753 lea     esi, [rcx+10h]
//   0x20756 mov     [rax], esi
//   0x20758 mov     rdi, [rdx+rdi]
//   0x2075C cmp     esi, 2Fh ; '/'
//   0x2075F ja      loc_217A0
//   0x20765 add     ecx, 18h
//   0x20768 add     rdx, rsi
//   0x2076B mov     [rax], ecx
//   0x2076D mov     rcx, [rdx]
//   0x20770 mov     rsi, r8
//   0x20773 mov     rdx, rdi
//   0x20776 mov     rdi, rbx
//   0x20779 call    sub_18740
//   0x2077E jmp     loc_20410
//   0x20783 align 8
//   0x20788 mov     ecx, [rax]; jumptable 000000000002039D case 2008
//   0x2078A cmp     ecx, 2Fh ; '/'
//   0x2078D ja      loc_21278
//   0x20793 mov     rdx, [rax+10h]
//   0x20797 lea     edi, [rcx+8]
//   0x2079A mov     esi, ecx
//   0x2079C mov     [rax], edi
//   0x2079E mov     r8, [rdx+rsi]
//   0x207A2 cmp     edi, 2Fh ; '/'
//   0x207A5 ja      loc_21797
//   0x207AB lea     esi, [rcx+10h]
//   0x207AE mov     [rax], esi
//   0x207B0 mov     rdi, [rdx+rdi]
//   0x207B4 cmp     esi, 2Fh ; '/'
//   0x207B7 ja      loc_217A9
//   0x207BD add     ecx, 18h
//   0x207C0 add     rdx, rsi
//   0x207C3 mov     [rax], ecx
//   0x207C5 movzx   ecx, byte ptr [rdx]
//   0x207C8 mov     rsi, r8
//   0x207CB mov     rdx, rdi
//   0x207CE mov     rdi, rbx
//   0x207D1 call    sub_1D0E0
//   0x207D6 test    al, al
//   0x207D8 jnz     loc_20410
//   0x207DE jmp     loc_206EC
//   0x207E3 align 8
//   0x207E8 mov     ecx, [rax]; jumptable 000000000002039D case 2004
//   0x207EA cmp     ecx, 2Fh ; '/'
//   0x207ED ja      loc_21540
//   0x207F3 mov     rdx, [rax+10h]
//   0x207F7 lea     esi, [rcx+8]
//   0x207FA mov     edi, ecx
//   0x207FC mov     [rax], esi
//   0x207FE mov     rdi, [rdx+rdi]
//   0x20802 cmp     esi, 2Fh ; '/'
//   0x20805 ja      loc_21719
//   0x2080B add     ecx, 10h
//   0x2080E add     rdx, rsi
//   0x20811 mov     [rax], ecx
//   0x20813 mov     edx, [rdx]
//   0x20815 mov     rsi, rdi
//   0x20818 mov     rdi, rbx
//   0x2081B call    sub_18340
//   0x20820 movzx   eax, al
//   0x20823 jmp     loc_20352
//   0x20828 mov     ecx, [rax]; jumptable 000000000002031B case 8
//   0x2082A cmp     ecx, 2Fh ; '/'
//   0x2082D ja      loc_21428
//   0x20833 mov     rdx, [rax+10h]
//   0x20837 lea     edi, [rcx+8]
//   0x2083A mov     esi, ecx
//   0x2083C mov     [rax], edi
//   0x2083E mov     r9, [rdx+rsi]
//   0x20842 cmp     edi, 2Fh ; '/'
//   0x20845 ja      loc_216E3
//   0x2084B lea     esi, [rcx+10h]
//   0x2084E mov     [rax], esi
//   0x20850 mov     r10d, [rdx+rdi]
//   0x20854 cmp     esi, 2Fh ; '/'
//   0x20857 ja      loc_216F5
//   0x2085D lea     edi, [rcx+18h]
//   0x20860 mov     [rax], edi
//   0x20862 mov     r11, [rdx+rsi]
//   0x20866 cmp     edi, 2Fh ; '/'
//   0x20869 ja      loc_216EC
//   0x2086F lea     esi, [rcx+20h]
//   0x20872 mov     [rax], esi
//   0x20874 mov     rbp, [rdx+rdi]
//   0x20878 cmp     esi, 2Fh ; '/'
//   0x2087B ja      loc_21653
//   0x20881 add     ecx, 28h ; '('
//   0x20884 add     rdx, rsi
//   0x20887 mov     [rax], ecx
//   0x20889 mov     esi, [rdx]
//   0x2088B xor     r8d, r8d
//   0x2088E mov     rcx, r11
//   0x20891 mov     edx, r10d
//   0x20894 mov     rdi, rbx
//   0x20897 test    esi, esi
//   0x20899 mov     rsi, r9
//   0x2089C setnz   r8b
//   0x208A0 call    sub_20000
//   0x208A5 test    rax, rax
//   0x208A8 jz      loc_20410
//   0x208AE test    rbp, rbp
//   0x208B1 jz      loc_206EC
//   0x208B7 mov     [rbp+0], rax
//   0x208BB jmp     loc_206EC
//   0x208C0 mov     edx, [rax]; jumptable 000000000002031B case 43
//   0x208C2 cmp     edx, 2Fh ; '/'
//   0x208C5 ja      loc_21120
//   0x208CB mov     ecx, edx
//   0x208CD add     edx, 8
//   0x208D0 add     rcx, [rax+10h]
//   0x208D4 mov     [rax], edx
//   0x208D6 mov     rsi, [rcx]
//   0x208D9 mov     rdi, rbx
//   0x208DC call    sub_1A900
//   0x208E1 cdqe
//   0x208E3 jmp     loc_20352
//   0x208E8 mov     edx, [rax]; jumptable 000000000002031B case 59
//   0x208EA cmp     edx, 2Fh ; '/'
//   0x208ED ja      loc_21190
//   0x208F3 mov     ecx, edx
//   0x208F5 add     edx, 8
//   0x208F8 add     rcx, [rax+10h]
//   0x208FC mov     [rax], edx
//   0x208FE mov     rsi, [rcx]
//   0x20901 xor     edx, edx
//   0x20903 mov     rdi, rbx
//   0x20906 call    sub_24480
//   0x2090B jmp     loc_20410
//   0x20910 mov     ecx, [rax]; jumptable 000000000002031B case 63
//   0x20912 cmp     ecx, 2Fh ; '/'
//   0x20915 ja      loc_21138
//   0x2091B mov     rdx, [rax+10h]
//   0x2091F lea     edi, [rcx+8]
//   0x20922 mov     esi, ecx
//   0x20924 mov     [rax], edi
//   0x20926 mov     r8, [rdx+rsi]
//   0x2092A cmp     edi, 2Fh ; '/'
//   0x2092D ja      loc_2176A
//   0x20933 lea     esi, [rcx+10h]
//   0x20936 mov     [rax], esi
//   0x20938 mov     rdi, [rdx+rdi]
//   0x2093C cmp     esi, 2Fh ; '/'
//   0x2093F ja      loc_21761
//   0x20945 add     ecx, 18h
//   0x20948 add     rdx, rsi
//   0x2094B mov     [rax], ecx
//   0x2094D mov     edx, [rdx]
//   0x2094F mov     rsi, r8
//   0x20952 call    _invalidate_regfinder_cache
//   0x20957 jmp     def_2031B; jumptable 000000000002031B default case, cases 2,3,6,7,9,12-16,20-31,33,37-39,41,42,44,45,47-54,56-58,61,62,64,66-79,83-85,87-93,97,99
//   0x2095C mov     edx, [rax]; jumptable 000000000002031B case 60
//   0x2095E cmp     edx, 2Fh ; '/'
//   0x20961 ja      loc_211A8
//   0x20967 mov     ecx, edx
//   0x20969 add     edx, 8
//   0x2096C add     rcx, [rax+10h]
//   0x20970 mov     [rax], edx
//   0x20972 mov     rax, [rcx]
//   0x20975 mov     dword ptr [rax], 0
//   0x2097B jmp     loc_20410
//   0x20980 mov     ecx, [rax]; jumptable 000000000002031B case 65
//   0x20982 cmp     ecx, 2Fh ; '/'
//   0x20985 ja      loc_21520
//   0x2098B mov     rdx, [rax+10h]
//   0x2098F lea     esi, [rcx+8]
//   0x20992 mov     edi, ecx
//   0x20994 mov     [rax], esi
//   0x20996 mov     r8, [rdx+rdi]
//   0x2099A cmp     esi, 2Fh ; '/'
//   0x2099D ja      loc_21710
//   0x209A3 add     ecx, 10h
//   0x209A6 add     rdx, rsi
//   0x209A9 mov     [rax], ecx
//   0x209AB mov     rdi, [rdx]
//   0x209AE mov     rsi, r8
//   0x209B1 xor     edx, edx
//   0x209B3 call    _invalidate_regfinder_cache
//   0x209B8 jmp     def_2031B; jumptable 000000000002031B default case, cases 2,3,6,7,9,12-16,20-31,33,37-39,41,42,44,45,47-54,56-58,61,62,64,66-79,83-85,87-93,97,99
//   0x209BD mov     ecx, [rax]; jumptable 000000000002031B case 100
//   0x209BF cmp     ecx, 2Fh ; '/'
//   0x209C2 ja      loc_210D0
//   0x209C8 mov     rdx, [rax+10h]
//   0x209CC lea     esi, [rcx+8]
//   0x209CF mov     edi, ecx
//   0x209D1 mov     [rax], esi
//   0x209D3 mov     rdi, [rdx+rdi]
//   0x209D7 cmp     esi, 2Fh ; '/'
//   0x209DA ja      loc_2169B
//   0x209E0 add     ecx, 10h
//   0x209E3 add     rdx, rsi
//   0x209E6 mov     [rax], ecx
//   0x209E8 mov     rdx, [rdx]
//   0x209EB movzx   eax, word ptr [rdx+18h]
//   0x209EF cmp     ax, 13h
//   0x209F3 jz      loc_215B3
//   0x209F9 cmp     ax, 7Ah ; 'z'
//   0x209FD jnz     def_2031B; jumptable 000000000002031B default case, cases 2,3,6,7,9,12-16,20-31,33,37-39,41,42,44,45,47-54,56-58,61,62,64,66-79,83-85,87-93,97,99
//   0x20A03 cmp     byte ptr [rdx+51h], 5
//   0x20A07 jnz     def_2031B; jumptable 000000000002031B default case, cases 2,3,6,7,9,12-16,20-31,33,37-39,41,42,44,45,47-54,56-58,61,62,64,66-79,83-85,87-93,97,99
//   0x20A0D mov     dword ptr [rdi], 1
//   0x20A13 mov     eax, 2
//   0x20A18 jmp     loc_20352
//   0x20A1D align 20h
//   0x20A20 mov     edx, [rax]; jumptable 000000000002031B case 17
//   0x20A22 cmp     edx, 2Fh ; '/'
//   0x20A25 ja      loc_213D8
//   0x20A2B mov     ecx, edx
//   0x20A2D add     edx, 8
//   0x20A30 add     rcx, [rax+10h]
//   0x20A34 mov     [rax], edx
//   0x20A36 mov     rdi, [rcx]
//   0x20A39 call    sub_1EB80
//   0x20A3E jmp     loc_20410
//   0x20A43 mov     edx, [rax]; jumptable 000000000002031B case 80
//   0x20A45 cmp     edx, 2Fh ; '/'
//   0x20A48 ja      loc_21488
//   0x20A4E mov     ecx, edx
//   0x20A50 add     edx, 8
//   0x20A53 add     rcx, [rax+10h]
//   0x20A57 mov     [rax], edx
//   0x20A59 mov     rdi, [rcx]
//   0x20A5C call    _get_func
//   0x20A61 test    rax, rax
//   0x20A64 jz      loc_20410
//   0x20A6A mov     edx, 1
//   0x20A6F mov     rsi, rax
//   0x20A72 mov     rdi, rbx
//   0x20A75 call    sub_24480
//   0x20A7A jmp     loc_20410
//   0x20A7F mov     ecx, [rax]; jumptable 000000000002031B case 40
//   0x20A81 cmp     ecx, 2Fh ; '/'
//   0x20A84 ja      loc_21468
//   0x20A8A mov     rdx, [rax+10h]
//   0x20A8E lea     esi, [rcx+8]
//   0x20A91 mov     edi, ecx
//   0x20A93 mov     [rax], esi
//   0x20A95 mov     rdi, [rdx+rdi]
//   0x20A99 cmp     esi, 2Fh ; '/'
//   0x20A9C ja      loc_21722
//   0x20AA2 add     ecx, 10h
//   0x20AA5 add     rdx, rsi
//   0x20AA8 mov     [rax], ecx
//   0x20AAA mov     rdx, [rdx]
//   0x20AAD mov     rsi, rdi
//   0x20AB0 mov     rdi, rbx
//   0x20AB3 call    sub_1A8A0
//   0x20AB8 test    al, al
//   0x20ABA jnz     loc_20410
//   0x20AC0 jmp     loc_206EC
//   0x20AC5 align 8
//   0x20AC8 mov     ecx, [rax]; jumptable 000000000002031B case 46
//   0x20ACA cmp     ecx, 2Fh ; '/'
//   0x20ACD ja      loc_210F0
//   0x20AD3 mov     rdx, [rax+10h]
//   0x20AD7 lea     edi, [rcx+8]
//   0x20ADA mov     esi, ecx
//   0x20ADC mov     [rax], edi
//   0x20ADE mov     rbp, [rdx+rsi]
//   0x20AE2 cmp     edi, 2Fh ; '/'
//   0x20AE5 ja      loc_21758
//   0x20AEB lea     esi, [rcx+10h]
//   0x20AEE mov     [rax], esi
//   0x20AF0 mov     rdi, [rdx+rdi]
//   0x20AF4 cmp     esi, 2Fh ; '/'
//   0x20AF7 ja      loc_216FE
//   0x20AFD add     ecx, 18h
//   0x20B00 add     rdx, rsi
//   0x20B03 mov     [rax], ecx
//   0x20B05 mov     rdx, [rdx]
//   0x20B08 mov     rsi, rdi
//   0x20B0B mov     rdi, rbx
//   0x20B0E call    sub_16300
//   0x20B13 mov     [rbp+0], eax
//   0x20B16 jmp     loc_20410
//   0x20B1B mov     ecx, [rax]; jumptable 000000000002031B case 55
//   0x20B1D cmp     ecx, 2Fh ; '/'
//   0x20B20 ja      loc_214D0
//   0x20B26 mov     rdx, [rax+10h]
//   0x20B2A lea     esi, [rcx+8]
//   0x20B2D mov     edi, ecx
//   0x20B2F mov     [rax], esi
//   0x20B31 mov     rdi, [rdx+rdi]
//   0x20B35 cmp     esi, 2Fh ; '/'
//   0x20B38 ja      loc_2173D
//   0x20B3E add     ecx, 10h
//   0x20B41 add     rdx, rsi
//   0x20B44 mov     [rax], ecx
//   0x20B46 mov     rsi, [rdx]
//   0x20B49 call    sub_179C0
//   0x20B4E movzx   eax, al
//   0x20B51 jmp     loc_20352
//   0x20B56 mov     ecx, [rax]; jumptable 000000000002031B case 32
//   0x20B58 cmp     ecx, 2Fh ; '/'
//   0x20B5B ja      loc_210B0
//   0x20B61 mov     rdx, [rax+10h]
//   0x20B65 lea     esi, [rcx+8]
//   0x20B68 mov     edi, ecx
//   0x20B6A mov     [rax], esi
//   0x20B6C mov     rdi, [rdx+rdi]
//   0x20B70 cmp     esi, 2Fh ; '/'
//   0x20B73 ja      loc_21692
//   0x20B79 add     ecx, 10h
//   0x20B7C add     rdx, rsi
//   0x20B7F mov     [rax], ecx
//   0x20B81 mov     edx, [rdx]
//   0x20B83 mov     rsi, rdi
//   0x20B86 mov     rdi, rbx
//   0x20B89 call    sub_1A8D0
//   0x20B8E cmp     eax, 1
//   0x20B91 jz      loc_20410
//   0x20B97 jmp     loc_206EC
//   0x20B9C align 20h
//   0x20BA0 mov     edx, [rax]; jumptable 000000000002031B case 34
//   0x20BA2 cmp     edx, 2Fh ; '/'
//   0x20BA5 ja      loc_213A8
//   0x20BAB mov     ecx, edx
//   0x20BAD add     edx, 8
//   0x20BB0 add     rcx, [rax+10h]
//   0x20BB4 mov     [rax], edx
//   0x20BB6 mov     rdx, [rcx]
//   0x20BB9 movzx   eax, word ptr [rdx+18h]
//   0x20BBD sub     eax, 3
//   0x20BC0 cmp     ax, 1
//   0x20BC4 ja      def_2031B; jumptable 000000000002031B default case, cases 2,3,6,7,9,12-16,20-31,33,37-39,41,42,44,45,47-54,56-58,61,62,64,66-79,83-85,87-93,97,99
//   0x20BCA cmp     byte ptr [rdx+29h], 1
//   0x20BCE jnz     def_2031B; jumptable 000000000002031B default case, cases 2,3,6,7,9,12-16,20-31,33,37-39,41,42,44,45,47-54,56-58,61,62,64,66-79,83-85,87-93,97,99
//   0x20BD4 cmp     word ptr [rdx+2Eh], 1
//   0x20BD9 sbb     rax, rax
//   0x20BDC jmp     loc_20352
//   0x20BE1 mov     edx, [rax]; jumptable 000000000002031B case 94
//   0x20BE3 cmp     edx, 2Fh ; '/'
//   0x20BE6 ja      loc_21560
//   0x20BEC mov     ecx, edx
//   0x20BEE add     edx, 8
//   0x20BF1 add     rcx, [rax+10h]
//   0x20BF5 mov     [rax], edx
//   0x20BF7 mov     rdi, [rcx]
//   0x20BFA call    sub_27370
//   0x20BFF jmp     def_2031B; jumptable 000000000002031B default case, cases 2,3,6,7,9,12-16,20-31,33,37-39,41,42,44,45,47-54,56-58,61,62,64,66-79,83-85,87-93,97,99
//   0x20C04 mov     edx, [rax]; jumptable 000000000002031B case 10
//   0x20C06 cmp     edx, 2Fh ; '/'
//   0x20C09 ja      loc_21378
//   0x20C0F mov     ecx, edx
//   0x20C11 add     edx, 8
//   0x20C14 add     rcx, [rax+10h]
//   0x20C18 mov     [rax], edx
//   0x20C1A mov     rsi, [rcx]
//   0x20C1D mov     rdi, rbx
//   0x20C20 call    sub_13F80
//   0x20C25 cdqe
//   0x20C27 jmp     loc_20352
//   0x20C2C mov     ecx, [rax]; jumptable 000000000002031B case 82
//   0x20C2E cmp     ecx, 2Fh ; '/'
//   0x20C31 ja      loc_214A0
//   0x20C37 mov     rdx, [rax+10h]
//   0x20C3B lea     edi, [rcx+8]
//   0x20C3E mov     esi, ecx
//   0x20C40 mov     [rax], edi
//   0x20C42 mov     r8, [rdx+rsi]
//   0x20C46 cmp     edi, 2Fh ; '/'
//   0x20C49 ja      loc_21734
//   0x20C4F lea     esi, [rcx+10h]
//   0x20C52 mov     [rax], esi
//   0x20C54 mov     rdi, [rdx+rdi]
//   0x20C58 cmp     esi, 2Fh ; '/'
//   0x20C5B ja      loc_2172B
//   0x20C61 add     ecx, 18h
//   0x20C64 add     rdx, rsi
//   0x20C67 mov     [rax], ecx
//   0x20C69 mov     rdx, [rdx]
//   0x20C6C mov     rsi, rdi
//   0x20C6F mov     rdi, r8
//   0x20C72 call    sub_14C40
//   0x20C77 movzx   eax, al
//   0x20C7A jmp     loc_20352
//   0x20C7F mov     edx, [rax]; jumptable 000000000002031B case 18
//   0x20C81 cmp     edx, 2Fh ; '/'
//   0x20C84 ja      loc_21390
//   0x20C8A mov     ecx, edx
//   0x20C8C add     edx, 8
//   0x20C8F add     rcx, [rax+10h]
//   0x20C93 mov     [rax], edx
//   0x20C95 mov     rdi, [rcx]
//   0x20C98 call    sub_1E120
//   0x20C9D jmp     loc_20410
//   0x20CA2 mov     esi, [rax]; jumptable 000000000002031B case 96
//   0x20CA4 cmp     esi, 2Fh ; '/'
//   0x20CA7 ja      loc_21048
//   0x20CAD mov     rdx, [rax+10h]
//   0x20CB1 lea     ecx, [rsi+8]
//   0x20CB4 mov     edi, esi
//   0x20CB6 mov     [rax], ecx
//   0x20CB8 mov     r11, [rdx+rdi]
//   0x20CBC cmp     ecx, 2Fh ; '/'
//   0x20CBF ja      loc_21677
//   0x20CC5 lea     edi, [rsi+10h]
//   0x20CC8 mov     [rax], edi
//   0x20CCA mov     ecx, [rdx+rcx]
//   0x20CCD cmp     edi, 2Fh ; '/'
//   0x20CD0 ja      loc_216AD
//   0x20CD6 lea     r9d, [rsi+18h]
//   0x20CDA mov     [rax], r9d
//   0x20CDD mov     r8, [rdx+rdi]
//   0x20CE1 cmp     r9d, 2Fh ; '/'
//   0x20CE5 ja      loc_216A4
//   0x20CEB lea     edi, [rsi+20h]
//   0x20CEE mov     [rax], edi
//   0x20CF0 mov     r9, [rdx+r9]
//   0x20CF4 cmp     edi, 2Fh ; '/'
//   0x20CF7 ja      loc_21785
//   0x20CFD lea     r10d, [rsi+28h]
//   0x20D01 mov     [rax], r10d
//   0x20D04 mov     edi, [rdx+rdi]
//   0x20D07 cmp     r10d, 2Fh ; '/'
//   0x20D0B ja      loc_2177C
//   0x20D11 add     esi, 30h ; '0'
//   0x20D14 add     rdx, r10
//   0x20D17 mov     [rax], esi
//   0x20D19 sub     rsp, 8
//   0x20D1D movsxd  rax, edi
//   0x20D20 mov     rsi, [rdx]
//   0x20D23 movzx   ecx, cl
//   0x20D26 push    rax
//   0x20D27 mov     rdx, r11
//   0x20D2A mov     rdi, rbx
//   0x20D2D call    sub_B6F0
//   0x20D32 pop     rdx
//   0x20D33 pop     rcx
//   0x20D34 cdqe
//   0x20D36 jmp     loc_20352
//   0x20D3B mov     edx, [rax]; jumptable 000000000002031B case 4
//   0x20D3D cmp     edx, 2Fh ; '/'
//   0x20D40 ja      loc_21510
//   0x20D46 add     edx, 8
//   0x20D49 mov     [rax], edx
//   0x20D4B mov     edi, 5
//   0x20D50 mov     rbp, [rbx+10h]
//   0x20D54 call    _getinf
//   0x20D59 mov     r12d, eax
//   0x20D5C cmp     eax, 2
//   0x20D5F jz      loc_215CD
//   0x20D65 mov     esi, 1
//   0x20D6A mov     rdi, rbx
//   0x20D6D call    sub_1FCD0
//   0x20D72 mov     rdi, rbx
//   0x20D75 call    sub_1FAE0
//   0x20D7A mov     esi, 4
//   0x20D7F mov     edi, 0Bh
//   0x20D84 call    _getinf_flag
//   0x20D89 mov     edx, eax
//   0x20D8B movzx   eax, word ptr [rbx+1D4h]
//   0x20D92 test    dl, dl
//   0x20D94 jz      short loc_20DA0
//   0x20D96 or      eax, 2
//   0x20D99 mov     [rbx+1D4h], ax
//   0x20DA0 test    al, 1
//   0x20DA2 mov     rdx, [rbx+10h]
//   0x20DA6 lea     rcx, off_342E0; "x0"
//   0x20DAD lea     rax, off_34620; "zero"
//   0x20DB4 cmovz   rax, rcx
//   0x20DB8 mov     r8d, 41h ; 'A'
//   0x20DBE mov     ecx, 8
//   0x20DC3 mov     rsi, 0FFFFFFFFFFFFFFFFh
//   0x20DCA mov     [rdx+38h], rax
//   0x20DCE movzx   eax, word ptr [rbx+1D4h]
//   0x20DD5 mov     rdx, rsp
//   0x20DD8 mov     rdi, [rbx+98h]
//   0x20DDF mov     [rsp+28h+var_28], rax
//   0x20DE3 call    _netnode_supset
//   0x20DE8 mov     rdi, [rbx+98h]
//   0x20DEF mov     ecx, 8
//   0x20DF4 mov     rdx, rsp
//   0x20DF7 mov     r8d, 41h ; 'A'
//   0x20DFD mov     rsi, 0FFFFFFFFFFFFFFFEh
//   0x20E04 mov     [rsp+28h+var_28], 1
//   0x20E0C call    _netnode_supset
//   0x20E11 jmp     def_2031B; jumptable 000000000002031B default case, cases 2,3,6,7,9,12-16,20-31,33,37-39,41,42,44,45,47-54,56-58,61,62,64,66-79,83-85,87-93,97,99
//   0x20E16 mov     rdx, cs:LPH_ptr; jumptable 000000000002031B case 0
//   0x20E1D lea     rsi, [rdi+80h]
//   0x20E24 xor     ecx, ecx
//   0x20E26 mov     edi, 3
//   0x20E2B call    _hook_event_listener
//   0x20E30 lea     rdi, [rbx+98h]
//   0x20E37 xor     edx, edx
//   0x20E39 mov     ecx, 1
//   0x20E3E lea     rsi, aRiscv; "$ riscv"
//   0x20E45 call    _netnode_check
//   0x20E4A xor     ecx, ecx
//   0x20E4C lea     rdx, aRiscvCfg; "riscv.cfg"
//   0x20E53 xor     esi, esi
//   0x20E55 lea     rdi, [rbx+1D8h]
//   0x20E5C call    _read_ioports
//   0x20E61 mov     rdi, rbx
//   0x20E64 call    sub_1F8C0
//   0x20E69 mov     rdi, rbx
//   0x20E6C call    sub_261B0
//   0x20E71 mov     [rbx+1F0h], rax
//   0x20E78 jmp     def_2031B; jumptable 000000000002031B default case, cases 2,3,6,7,9,12-16,20-31,33,37-39,41,42,44,45,47-54,56-58,61,62,64,66-79,83-85,87-93,97,99
//   0x20E7D mov     edx, [rax]; jumptable 000000000002031B case 11
//   0x20E7F cmp     edx, 2Fh ; '/'
//   0x20E82 ja      loc_213F0
//   0x20E88 mov     ecx, edx
//   0x20E8A add     edx, 8
//   0x20E8D add     rcx, [rax+10h]
//   0x20E91 mov     [rax], edx
//   0x20E93 mov     rsi, [rcx]
//   0x20E96 mov     rdi, rbx
//   0x20E99 call    sub_17170
//   0x20E9E test    eax, eax
//   0x20EA0 jnz     loc_20410
//   0x20EA6 jmp     loc_206EC
//   0x20EAB align 10h
//   0x20EB0 mov     ecx, [rax]; jumptable 000000000002031B case 81
//   0x20EB2 cmp     ecx, 2Fh ; '/'
//   0x20EB5 ja      loc_214F0
//   0x20EBB mov     rdx, [rax+10h]
//   0x20EBF lea     esi, [rcx+8]
//   0x20EC2 mov     edi, ecx
//   0x20EC4 mov     [rax], esi
//   0x20EC6 mov     rbp, [rdx+rdi]
//   0x20ECA cmp     esi, 2Fh ; '/'
//   0x20ECD ja      loc_21707
//   0x20ED3 add     ecx, 10h
//   0x20ED6 add     rdx, rsi
//   0x20ED9 mov     [rax], ecx
//   0x20EDB mov     rsi, [rdx]
//   0x20EDE mov     rdi, rbx
//   0x20EE1 call    sub_16730
//   0x20EE6 mov     [rbp+0], rax
//   0x20EEA jmp     loc_20410
//   0x20EEF mov     edx, [rax]; jumptable 000000000002031B case 35
//   0x20EF1 cmp     edx, 2Fh ; '/'
//   0x20EF4 ja      loc_21578
//   0x20EFA mov     ecx, edx
//   0x20EFC add     edx, 8
//   0x20EFF add     rcx, [rax+10h]
//   0x20F03 mov     [rax], edx
//   0x20F05 mov     rdi, [rcx]
//   0x20F08 call    sub_16100
//   0x20F0D test    al, al
//   0x20F0F jnz     loc_20410
//   0x20F15 jmp     loc_206EC
//   0x20F1A align 20h
//   0x20F20 mov     edx, [rax]; jumptable 000000000002031B case 36
//   0x20F22 cmp     edx, 2Fh ; '/'
//   0x20F25 ja      loc_213C0
//   0x20F2B mov     ecx, edx
//   0x20F2D add     edx, 8
//   0x20F30 add     rcx, [rax+10h]
//   0x20F34 mov     [rax], edx
//   0x20F36 mov     rdi, [rcx]
//   0x20F39 call    sub_17800
//   0x20F3E cdqe
//   0x20F40 jmp     loc_20352
//   0x20F45 lea     rdi, [rdi+98h]; jumptable 000000000002031B case 95
//   0x20F4C mov     ecx, 1
//   0x20F51 xor     edx, edx
//   0x20F53 lea     rsi, aRiscv; "$ riscv"
//   0x20F5A call    _netnode_check
//   0x20F5F jmp     def_2031B; jumptable 000000000002031B default case, cases 2,3,6,7,9,12-16,20-31,33,37-39,41,42,44,45,47-54,56-58,61,62,64,66-79,83-85,87-93,97,99
//   0x20F64 call    sub_1F9B0; jumptable 000000000002031B case 1
//   0x20F69 lea     rsi, [rbx+80h]
//   0x20F70 mov     edi, 3
//   0x20F75 call    _unhook_event_listener
//   0x20F7A mov     edi, cs:dword_35604
//   0x20F80 call    _clr_module_data
//   0x20F85 mov     rdi, [rbx+1F0h]
//   0x20F8C call    sub_262C0
//   0x20F91 jmp     def_2031B; jumptable 000000000002031B default case, cases 2,3,6,7,9,12-16,20-31,33,37-39,41,42,44,45,47-54,56-58,61,62,64,66-79,83-85,87-93,97,99
//   0x20F96 mov     ecx, [rax]; jumptable 000000000002031B case 19
//   0x20F98 cmp     ecx, 2Fh ; '/'
//   0x20F9B ja      loc_21408
//   0x20FA1 mov     rdx, [rax+10h]
//   0x20FA5 lea     esi, [rcx+8]
//   0x20FA8 mov     edi, ecx
//   0x20FAA mov     [rax], esi
//   0x20FAC mov     rdi, [rdx+rdi]
//   0x20FB0 cmp     esi, 2Fh ; '/'
//   0x20FB3 ja      loc_216DA
//   0x20FB9 add     ecx, 10h
//   0x20FBC add     rdx, rsi
//   0x20FBF mov     [rax], ecx
//   0x20FC1 mov     rsi, [rdx]
//   0x20FC4 call    sub_1E700
//   0x20FC9 test    al, al
//   0x20FCB jnz     loc_20410
//   0x20FD1 jmp     loc_206EC
//   0x20FD6 align 20h
//   0x20FE0 mov     rax, [rdi+1F0h]; jumptable 000000000002031B case 98
//   0x20FE7 jmp     loc_20352
//   0x20FEC align 10h
//   0x20FF0 mov     ecx, [rax]; jumptable 00000000000203D1 default case
//   0x20FF2 cmp     ecx, 2Fh ; '/'
//   0x20FF5 ja      loc_21090
//   0x20FFB mov     rdx, [rax+10h]
//   0x20FFF lea     esi, [rcx+8]
//   0x21002 mov     edi, ecx
//   0x21004 mov     [rax], esi
//   0x21006 mov     rbp, [rdx+rdi]
//   0x2100A cmp     esi, 2Fh ; '/'
//   0x2100D ja      loc_21689
//   0x21013 add     ecx, 10h
//   0x21016 add     rdx, rsi
//   0x21019 mov     [rax], ecx
//   0x2101B mov     rbx, [rdx]
//   0x2101E cmp     rbx, 0FFFFFFFFFFFFFFFFh
//   0x21022 jz      loc_2159D
//   0x21028 mov     rdi, rbx
//   0x2102B mov     esi, 64h ; 'd'
//   0x21030 call    _get_sreg
//   0x21035 mov     rbx, rax
//   0x21038 mov     [rbp+0], rbx
//   0x2103C jmp     loc_20410
//   0x21041 align 8
//   0x21048 mov     rcx, [rax+8]
//   0x2104C lea     rdx, [rcx+8]
//   0x21050 mov     [rax+8], rdx
//   0x21054 mov     r11, [rcx]
//   0x21057 lea     rsi, [rdx+8]
//   0x2105B mov     [rax+8], rsi
//   0x2105F mov     ecx, [rdx]
//   0x21061 lea     rdx, [rsi+8]
//   0x21065 mov     [rax+8], rdx
//   0x21069 mov     r8, [rsi]
//   0x2106C lea     rsi, [rdx+8]
//   0x21070 mov     [rax+8], rsi
//   0x21074 mov     r9, [rdx]
//   0x21077 lea     rdx, [rsi+8]
//   0x2107B mov     [rax+8], rdx
//   0x2107F mov     edi, [rsi]
//   0x21081 lea     rsi, [rdx+8]
//   0x21085 mov     [rax+8], rsi
//   0x21089 jmp     loc_20D19
//   0x2108E align 10h
//   0x21090 mov     rcx, [rax+8]
//   0x21094 lea     rdx, [rcx+8]
//   0x21098 mov     [rax+8], rdx
//   0x2109C mov     rbp, [rcx]
//   0x2109F lea     rcx, [rdx+8]
//   0x210A3 mov     [rax+8], rcx
//   0x210A7 jmp     loc_2101B
//   0x210AC align 10h
//   0x210B0 mov     rcx, [rax+8]
//   0x210B4 lea     rdx, [rcx+8]
//   0x210B8 mov     [rax+8], rdx
//   0x210BC mov     rdi, [rcx]
//   0x210BF lea     rcx, [rdx+8]
//   0x210C3 mov     [rax+8], rcx
//   0x210C7 jmp     loc_20B81
//   0x210CC align 10h
//   0x210D0 mov     rcx, [rax+8]
//   0x210D4 lea     rdx, [rcx+8]
//   0x210D8 mov     [rax+8], rdx
//   0x210DC mov     rdi, [rcx]
//   0x210DF lea     rcx, [rdx+8]
//   0x210E3 mov     [rax+8], rcx
//   0x210E7 jmp     loc_209E8
//   0x210EC align 10h
//   0x210F0 mov     rdx, [rax+8]
//   0x210F4 lea     rcx, [rdx+8]
//   0x210F8 mov     [rax+8], rcx
//   0x210FC mov     rbp, [rdx]
//   0x210FF lea     rdx, [rcx+8]
//   0x21103 mov     [rax+8], rdx
//   0x21107 mov     rdi, [rcx]
//   0x2110A lea     rcx, [rdx+8]
//   0x2110E mov     [rax+8], rcx
//   0x21112 jmp     loc_20B05
//   0x21117 align 20h
//   0x21120 mov     rcx, [rax+8]
//   0x21124 lea     rdx, [rcx+8]
//   0x21128 mov     [rax+8], rdx
//   0x2112C jmp     loc_208D6
//   0x21131 align 8
//   0x21138 mov     rdx, [rax+8]
//   0x2113C lea     rcx, [rdx+8]
//   0x21140 mov     [rax+8], rcx
//   0x21144 mov     r8, [rdx]
//   0x21147 lea     rdx, [rcx+8]
//   0x2114B mov     [rax+8], rdx
//   0x2114F mov     rdi, [rcx]
//   0x21152 lea     rcx, [rdx+8]
//   0x21156 mov     [rax+8], rcx
//   0x2115A jmp     loc_2094D
//   0x2115F align 20h
//   0x21160 mov     rdx, [rax+8]
//   0x21164 lea     rcx, [rdx+8]
//   0x21168 mov     [rax+8], rcx
//   0x2116C mov     r8, [rdx]
//   0x2116F lea     rdx, [rcx+8]
//   0x21173 mov     [rax+8], rdx
//   0x21177 mov     rdi, [rcx]
//   0x2117A lea     rcx, [rdx+8]
//   0x2117E mov     [rax+8], rcx
//   0x21182 jmp     loc_2076D
//   0x21187 align 10h
//   0x21190 mov     rcx, [rax+8]
//   0x21194 lea     rdx, [rcx+8]
//   0x21198 mov     [rax+8], rdx
//   0x2119C jmp     loc_208FE
//   0x211A1 align 8
//   0x211A8 mov     rcx, [rax+8]
//   0x211AC lea     rdx, [rcx+8]
//   0x211B0 mov     [rax+8], rdx
//   0x211B4 jmp     loc_20972
//   0x211B9 align 20h
//   0x211C0 mov     rdx, [rax+8]
//   0x211C4 lea     rcx, [rdx+8]
//   0x211C8 mov     [rax+8], rcx
//   0x211CC mov     r8, [rdx]
//   0x211CF lea     rdx, [rcx+8]
//   0x211D3 mov     [rax+8], rdx
//   0x211D7 mov     r9, [rcx]
//   0x211DA lea     rcx, [rdx+8]
//   0x211DE mov     [rax+8], rcx
//   0x211E2 jmp     loc_20528
//   0x211E7 align 10h
//   0x211F0 mov     rcx, [rax+8]
//   0x211F4 lea     rdx, [rcx+8]
//   0x211F8 mov     [rax+8], rdx
//   0x211FC mov     rdi, [rcx]
//   0x211FF lea     rcx, [rdx+8]
//   0x21203 mov     [rax+8], rcx
//   0x21207 jmp     loc_20446
//   0x2120C align 10h
//   0x21210 mov     rcx, [rax+8]
//   0x21214 lea     rdx, [rcx+8]
//   0x21218 mov     [rax+8], rdx
//   0x2121C mov     r8, [rcx]
//   0x2121F lea     rcx, [rdx+8]
//   0x21223 mov     [rax+8], rcx
//   0x21227 jmp     loc_203FE
//   0x2122C align 10h
//   0x21230 mov     rdx, [rax+8]
//   0x21234 lea     rcx, [rdx+8]
//   0x21238 mov     [rax+8], rcx
//   0x2123C mov     r8, [rdx]
//   0x2123F lea     rdx, [rcx+8]
//   0x21243 mov     [rax+8], rdx
//   0x21247 mov     rdi, [rcx]
//   0x2124A lea     rcx, [rdx+8]
//   0x2124E mov     [rax+8], rcx
//   0x21252 jmp     loc_20578
//   0x21257 align 20h
//   0x21260 mov     rcx, [rax+8]
//   0x21264 lea     rdx, [rcx+8]
//   0x21268 mov     [rax+8], rdx
//   0x2126C jmp     loc_20716
//   0x21271 align 8
//   0x21278 mov     rdx, [rax+8]
//   0x2127C lea     rcx, [rdx+8]
//   0x21280 mov     [rax+8], rcx
//   0x21284 mov     r8, [rdx]
//   0x21287 lea     rdx, [rcx+8]
//   0x2128B mov     [rax+8], rdx
//   0x2128F mov     rdi, [rcx]
//   0x21292 lea     rcx, [rdx+8]
//   0x21296 mov     [rax+8], rcx
//   0x2129A jmp     loc_207C5
//   0x2129F align 20h
//   0x212A0 mov     rcx, [rax+8]
//   0x212A4 lea     rdx, [rcx+8]
//   0x212A8 mov     [rax+8], rdx
//   0x212AC mov     r9, [rcx]
//   0x212AF lea     rcx, [rdx+8]
//   0x212B3 mov     [rax+8], rcx
//   0x212B7 jmp     loc_204C6
//   0x212BC align 20h
//   0x212C0 mov     rcx, [rax+8]
//   0x212C4 lea     rdx, [rcx+8]
//   0x212C8 mov     [rax+8], rdx
//   0x212CC mov     rbp, [rcx]
//   0x212CF lea     rcx, [rdx+8]
//   0x212D3 mov     [rax+8], rcx
//   0x212D7 jmp     loc_20486
//   0x212DC align 20h
//   0x212E0 mov     rdx, [rax+8]
//   0x212E4 lea     rcx, [rdx+8]
//   0x212E8 mov     [rax+8], rcx
//   0x212EC mov     rbp, [rdx]
//   0x212EF lea     rdx, [rcx+8]
//   0x212F3 mov     [rax+8], rdx
//   0x212F7 mov     rdi, [rcx]
//   0x212FA lea     rcx, [rdx+8]
//   0x212FE mov     [rax+8], rcx
//   0x21302 jmp     loc_2062D
//   0x21307 align 10h
//   0x21310 mov     rcx, [rax+8]
//   0x21314 lea     rdx, [rcx+8]
//   0x21318 mov     [rax+8], rdx
//   0x2131C mov     rdi, [rcx]
//   0x2131F add     rdx, 8
//   0x21323 add     rdx, 8
//   0x21327 lea     rcx, [rdx+8]
//   0x2132B mov     [rax+8], rcx
//   0x2132F jmp     loc_206D7
//   0x21334 align 8
//   0x21338 mov     rcx, [rax+8]
//   0x2133C lea     rdx, [rcx+8]
//   0x21340 mov     [rax+8], rdx
//   0x21344 mov     rdi, [rcx]
//   0x21347 lea     rcx, [rdx+8]
//   0x2134B mov     [rax+8], rcx
//   0x2134F jmp     loc_205BB
//   0x21354 align 8
//   0x21358 mov     rcx, [rax+8]
//   0x2135C lea     rdx, [rcx+8]
//   0x21360 mov     [rax+8], rdx
//   0x21364 mov     rdi, [rcx]
//   0x21367 lea     rcx, [rdx+8]
//   0x2136B mov     [rax+8], rcx
//   0x2136F jmp     loc_20673
//   0x21374 align 8
//   0x21378 mov     rcx, [rax+8]
//   0x2137C lea     rdx, [rcx+8]
//   0x21380 mov     [rax+8], rdx
//   0x21384 jmp     loc_20C1A
//   0x21389 align 10h
//   0x21390 mov     rcx, [rax+8]
//   0x21394 lea     rdx, [rcx+8]
//   0x21398 mov     [rax+8], rdx
//   0x2139C jmp     loc_20C95
//   0x213A1 align 8
//   0x213A8 mov     rcx, [rax+8]
//   0x213AC lea     rdx, [rcx+8]
//   0x213B0 mov     [rax+8], rdx
//   0x213B4 jmp     loc_20BB6
//   0x213B9 align 20h
//   0x213C0 mov     rcx, [rax+8]
//   0x213C4 lea     rdx, [rcx+8]
//   0x213C8 mov     [rax+8], rdx
//   0x213CC jmp     loc_20F36
//   0x213D1 align 8
//   0x213D8 mov     rcx, [rax+8]
//   0x213DC lea     rdx, [rcx+8]
//   0x213E0 mov     [rax+8], rdx
//   0x213E4 jmp     loc_20A36
//   0x213E9 align 10h
//   0x213F0 mov     rcx, [rax+8]
//   0x213F4 lea     rdx, [rcx+8]
//   0x213F8 mov     [rax+8], rdx
//   0x213FC jmp     loc_20E93
//   0x21401 align 8
//   0x21408 mov     rcx, [rax+8]
//   0x2140C lea     rdx, [rcx+8]
//   0x21410 mov     [rax+8], rdx
//   0x21414 mov     rdi, [rcx]
//   0x21417 lea     rcx, [rdx+8]
//   0x2141B mov     [rax+8], rcx
//   0x2141F jmp     loc_20FC1
//   0x21424 align 8
//   0x21428 mov     rdx, [rax+8]
//   0x2142C lea     rcx, [rdx+8]
//   0x21430 mov     [rax+8], rcx
//   0x21434 mov     r9, [rdx]
//   0x21437 lea     rdx, [rcx+8]
//   0x2143B mov     [rax+8], rdx
//   0x2143F mov     r10d, [rcx]
//   0x21442 lea     rcx, [rdx+8]
//   0x21446 mov     [rax+8], rcx
//   0x2144A mov     r11, [rdx]
//   0x2144D lea     rdx, [rcx+8]
//   0x21451 mov     [rax+8], rdx
//   0x21455 mov     rbp, [rcx]
//   0x21458 lea     rcx, [rdx+8]
//   0x2145C mov     [rax+8], rcx
//   0x21460 jmp     loc_20889
//   0x21465 align 8
//   0x21468 mov     rcx, [rax+8]
//   0x2146C lea     rdx, [rcx+8]
//   0x21470 mov     [rax+8], rdx
//   0x21474 mov     rdi, [rcx]
//   0x21477 lea     rcx, [rdx+8]
//   0x2147B mov     [rax+8], rcx
//   0x2147F jmp     loc_20AAA
//   0x21484 align 8
//   0x21488 mov     rcx, [rax+8]
//   0x2148C lea     rdx, [rcx+8]
//   0x21490 mov     [rax+8], rdx
//   0x21494 jmp     loc_20A59
//   0x21499 align 20h
//   0x214A0 mov     rdx, [rax+8]
//   0x214A4 lea     rcx, [rdx+8]
//   0x214A8 mov     [rax+8], rcx
//   0x214AC mov     r8, [rdx]
//   0x214AF lea     rdx, [rcx+8]
//   0x214B3 mov     [rax+8], rdx
//   0x214B7 mov     rdi, [rcx]
//   0x214BA lea     rcx, [rdx+8]
//   0x214BE mov     [rax+8], rcx
//   0x214C2 jmp     loc_20C69
//   0x214C7 align 10h
//   0x214D0 mov     rcx, [rax+8]
//   0x214D4 lea     rdx, [rcx+8]
//   0x214D8 mov     [rax+8], rdx
//   0x214DC mov     rdi, [rcx]
//   0x214DF lea     rcx, [rdx+8]
//   0x214E3 mov     [rax+8], rcx
//   0x214E7 jmp     loc_20B46
//   0x214EC align 10h
//   0x214F0 mov     rcx, [rax+8]
//   0x214F4 lea     rdx, [rcx+8]
//   0x214F8 mov     [rax+8], rdx
//   0x214FC mov     rbp, [rcx]
//   0x214FF lea     rcx, [rdx+8]
//   0x21503 mov     [rax+8], rcx
//   0x21507 jmp     loc_20EDB
//   0x2150C align 10h
//   0x21510 add     qword ptr [rax+8], 8
//   0x21515 jmp     loc_20D4B
//   0x2151A align 20h
//   0x21520 mov     rcx, [rax+8]
//   0x21524 lea     rdx, [rcx+8]
//   0x21528 mov     [rax+8], rdx
//   0x2152C mov     r8, [rcx]
//   0x2152F lea     rcx, [rdx+8]
//   0x21533 mov     [rax+8], rcx
//   0x21537 jmp     loc_209AB
//   0x2153C align 20h
//   0x21540 mov     rcx, [rax+8]
//   0x21544 lea     rdx, [rcx+8]
//   0x21548 mov     [rax+8], rdx
//   0x2154C mov     rdi, [rcx]
//   0x2154F lea     rcx, [rdx+8]
//   0x21553 mov     [rax+8], rcx
//   0x21557 jmp     loc_20813
//   0x2155C align 20h
//   0x21560 mov     rcx, [rax+8]
//   0x21564 lea     rdx, [rcx+8]
//   0x21568 mov     [rax+8], rdx
//   0x2156C jmp     loc_20BF7
//   0x21571 align 8
//   0x21578 mov     rcx, [rax+8]
//   0x2157C lea     rdx, [rcx+8]
//   0x21580 mov     [rax+8], rdx
//   0x21584 jmp     loc_20F05
//   0x21589 mov     rdx, r9
//   0x2158C mov     esi, 64h ; 'd'
//   0x21591 xor     edi, edi
//   0x21593 call    _set_default_sreg_value
//   0x21598 jmp     loc_20410
//   0x2159D call    _get_first_seg
//   0x215A2 test    rax, rax
//   0x215A5 jz      loc_21038
//   0x215AB mov     rbx, [rax]
//   0x215AE jmp     loc_21028
//   0x215B3 cmp     byte ptr [rdx+79h], 5
//   0x215B7 jnz     def_2031B; jumptable 000000000002031B default case, cases 2,3,6,7,9,12-16,20-31,33,37-39,41,42,44,45,47-54,56-58,61,62,64,66-79,83-85,87-93,97,99
//   0x215BD xor     r8d, r8d
//   0x215C0 mov     eax, 3
//   0x215C5 mov     [rdi], r8d
//   0x215C8 jmp     loc_20352
//   0x215CD call    _get_last_seg
//   0x215D2 test    rax, rax
//   0x215D5 jz      loc_20D65
//   0x215DB test    byte ptr [rbp+9], 20h
//   0x215DF jz      loc_20D65
//   0x215E5 lea     rsi, aHidecancelTheL; "HIDECANCEL\nThe loaded binary file can "...
//   0x215EC mov     edi, 1
//   0x215F1 xor     eax, eax
//   0x215F3 call    sub_1F550
//   0x215F8 mov     esi, 4
//   0x215FD mov     edi, 3
//   0x21602 cmp     eax, 1
//   0x21605 mov     eax, 1
//   0x2160A cmovnz  r12, rax
//   0x2160E xor     edx, edx
//   0x21610 cmp     r12d, 2
//   0x21614 setz    dl
//   0x21617 call    _setinf_flag
//   0x2161C call    _get_first_seg
//   0x21621 mov     rbp, rax
//   0x21624 test    rax, rax
//   0x21627 jz      loc_20D65
//   0x2162D mov     rdi, rbp
//   0x21630 mov     rsi, r12
//   0x21633 call    _set_segm_addressing
//   0x21638 mov     rdi, [rbp+0]
//   0x2163C call    _get_next_seg
//   0x21641 mov     rbp, rax
//   0x21644 test    rax, rax
//   0x21647 jnz     short loc_2162D
//   0x21649 jmp     loc_20D65
//   0x2164E call    ___stack_chk_fail
//   0x21653 mov     rdx, [rax+8]
//   0x21657 jmp     loc_21458
//   0x2165C mov     rcx, [rax+8]
//   0x21660 jmp     loc_212EF
//   0x21665 mov     rdx, [rax+8]
//   0x21669 jmp     loc_2131F
//   0x2166E mov     rdx, [rax+8]
//   0x21672 jmp     loc_21367
//   0x21677 mov     rdx, [rax+8]
//   0x2167B jmp     loc_21057
//   0x21680 mov     rdx, [rax+8]
//   0x21684 jmp     loc_211DA
//   0x21689 mov     rdx, [rax+8]
//   0x2168D jmp     loc_2109F
//   0x21692 mov     rdx, [rax+8]
//   0x21696 jmp     loc_210BF
//   0x2169B mov     rdx, [rax+8]
//   0x2169F jmp     loc_210DF
//   0x216A4 mov     rdx, [rax+8]
//   0x216A8 jmp     loc_2106C
//   0x216AD mov     rsi, [rax+8]
//   0x216B1 jmp     loc_21061
//   0x216B6 mov     rdx, [rax+8]
//   0x216BA jmp     loc_212AF
//   0x216BF mov     rdx, [rax+8]
//   0x216C3 jmp     loc_212CF
//   0x216C8 mov     rdx, [rax+8]
//   0x216CC jmp     loc_21347
//   0x216D1 mov     rdx, [rax+8]
//   0x216D5 jmp     loc_212FA
//   0x216DA mov     rdx, [rax+8]
//   0x216DE jmp     loc_21417
//   0x216E3 mov     rcx, [rax+8]
//   0x216E7 jmp     loc_21437
//   0x216EC mov     rcx, [rax+8]
//   0x216F0 jmp     loc_2144D
//   0x216F5 mov     rdx, [rax+8]
//   0x216F9 jmp     loc_21442
//   0x216FE mov     rdx, [rax+8]
//   0x21702 jmp     loc_2110A
//   0x21707 mov     rdx, [rax+8]
//   0x2170B jmp     loc_214FF
//   0x21710 mov     rdx, [rax+8]
//   0x21714 jmp     loc_2152F
//   0x21719 mov     rdx, [rax+8]
//   0x2171D jmp     loc_2154F
//   0x21722 mov     rdx, [rax+8]
//   0x21726 jmp     loc_21477
//   0x2172B mov     rdx, [rax+8]
//   0x2172F jmp     loc_214BA
//   0x21734 mov     rcx, [rax+8]
//   0x21738 jmp     loc_214AF
//   0x2173D mov     rdx, [rax+8]
//   0x21741 jmp     loc_214DF
//   0x21746 mov     rdx, [rax+8]
//   0x2174A jmp     loc_21327
//   0x2174F mov     rdx, [rax+8]
//   0x21753 jmp     loc_21323
//   0x21758 mov     rcx, [rax+8]
//   0x2175C jmp     loc_210FF
//   0x21761 mov     rdx, [rax+8]
//   0x21765 jmp     loc_21152
//   0x2176A mov     rcx, [rax+8]
//   0x2176E jmp     loc_21147
//   0x21773 mov     rcx, [rax+8]
//   0x21777 jmp     loc_2116F
//   0x2177C mov     rdx, [rax+8]
//   0x21780 jmp     loc_21081
//   0x21785 mov     rsi, [rax+8]
//   0x21789 jmp     loc_21077
//   0x2178E mov     rdx, [rax+8]
//   0x21792 jmp     loc_2124A
//   0x21797 mov     rcx, [rax+8]
//   0x2179B jmp     loc_21287
//   0x217A0 mov     rdx, [rax+8]
//   0x217A4 jmp     loc_2117A
//   0x217A9 mov     rdx, [rax+8]
//   0x217AD jmp     loc_21292
//   0x217B2 mov     rcx, [rax+8]
//   0x217B6 jmp     loc_211CF
//   0x217BB mov     rdx, [rax+8]
//   0x217BF jmp     loc_211FF
//   0x217C4 mov     rdx, [rax+8]
//   0x217C8 jmp     loc_2121F
//   0x217CD mov     rcx, [rax+8]
//   0x217D1 jmp     loc_2123F
// ============================================================

void sub_202E0(/* signature unknown */)
{
    // see disassembly above
}

