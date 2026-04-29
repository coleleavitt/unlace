// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x2892D0
// Name:           sub_2892D0
// Function size:  959 bytes (280 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x2892D0 push    r12
//   0x2892D2 push    rbp
//   0x2892D3 mov     rbp, rsi
//   0x2892D6 push    rbx
//   0x2892D7 cmp     dword ptr [rsi+0Ch], 0FFFFFFFFh
//   0x2892DB mov     rbx, rdi
//   0x2892DE jnz     short loc_289320
//   0x2892E0 lea     r12, jpt_2892F9
//   0x2892E7 mov     eax, [rbp+8]
//   0x2892EA sub     eax, 46h ; 'F'; switch 11 cases
//   0x2892ED cmp     eax, 0Ah
//   0x2892F0 ja      short def_2892F9; jumptable 00000000002892F9 default case, cases 77-79
//   0x2892F2 movsxd  rax, ds:(jpt_2892F9 - 408A58h)[r12+rax*4]
//   0x2892F6 add     rax, r12
//   0x2892F9 jmp     rax; switch jump
//   0x2892FB align 20h
//   0x289300 mov     rsi, rbp; jumptable 00000000002892F9 case 80
//   0x289303 mov     rdi, rbx
//   0x289306 call    sub_286670
//   0x28930B test    al, al
//   0x28930D jz      short def_2892F9; jumptable 00000000002892F9 default case, cases 77-79
//   0x28930F add     dword ptr [rbx+54h], 1
//   0x289313 pop     rbx; jumptable 00000000002892F9 default case, cases 77-79
//   0x289314 xor     eax, eax
//   0x289316 pop     rbp
//   0x289317 pop     r12
//   0x289319 retn
//   0x28931A align 20h
//   0x289320 call    sub_2862D0
//   0x289325 test    al, al
//   0x289327 jz      short loc_2892E0
//   0x289329 add     dword ptr [rbx+54h], 1
//   0x28932D jmp     short loc_2892E0
//   0x28932F align 10h
//   0x289330 mov     rsi, rbp; jumptable 00000000002892F9 case 70
//   0x289333 mov     rdi, rbx
//   0x289336 call    sub_286670
//   0x28933B test    al, al
//   0x28933D jz      short loc_289343
//   0x28933F add     dword ptr [rbx+54h], 1
//   0x289343 mov     rsi, rbp
//   0x289346 mov     rdi, rbx
//   0x289349 call    sub_286120
//   0x28934E pop     rbx
//   0x28934F pop     rbp
//   0x289350 movzx   eax, al
//   0x289353 pop     r12
//   0x289355 retn
//   0x289356 align 20h
//   0x289360 mov     rsi, rbp; jumptable 00000000002892F9 case 71
//   0x289363 mov     rdi, rbx
//   0x289366 call    sub_283EE0
//   0x28936B add     [rbx+50h], eax
//   0x28936E jmp     short def_2892F9; jumptable 00000000002892F9 default case, cases 77-79
//   0x289370 mov     rsi, rbp; jumptable 00000000002892F9 case 72
//   0x289373 mov     rdi, rbx
//   0x289376 call    sub_284620
//   0x28937B test    al, al
//   0x28937D jnz     short loc_2893A0
//   0x28937F mov     rsi, rbp
//   0x289382 mov     rdi, rbx
//   0x289385 call    sub_285AE0
//   0x28938A test    al, al
//   0x28938C jz      loc_289618
//   0x289392 nop     word ptr [rax+rax+00000000h]
//   0x28939D nop     dword ptr [rax]
//   0x2893A0 add     dword ptr [rbx+50h], 1
//   0x2893A4 jmp     loc_2892E7
//   0x2893A9 align 10h
//   0x2893B0 mov     rsi, rbp; jumptable 00000000002892F9 case 73
//   0x2893B3 mov     rdi, rbx
//   0x2893B6 call    sub_2838C0
//   0x2893BB test    al, al
//   0x2893BD jz      short loc_2893C3
//   0x2893BF add     dword ptr [rbx+50h], 1
//   0x2893C3 mov     rsi, rbp
//   0x2893C6 mov     rdi, rbx
//   0x2893C9 call    sub_288EA0
//   0x2893CE test    al, al
//   0x2893D0 jz      short loc_2893D6
//   0x2893D2 add     dword ptr [rbx+50h], 1
//   0x2893D6 mov     rsi, rbp
//   0x2893D9 mov     rdi, rbx
//   0x2893DC call    sub_283930
//   0x2893E1 test    al, al
//   0x2893E3 jz      short loc_2893E9
//   0x2893E5 add     dword ptr [rbx+50h], 1
//   0x2893E9 mov     rsi, rbp
//   0x2893EC mov     rdi, rbx
//   0x2893EF call    sub_2814A0
//   0x2893F4 test    al, al
//   0x2893F6 jz      short loc_2893FC
//   0x2893F8 add     dword ptr [rbx+50h], 1
//   0x2893FC mov     rsi, rbp
//   0x2893FF mov     rdi, rbx
//   0x289402 call    sub_2930A0
//   0x289407 test    al, al
//   0x289409 jz      loc_289578
//   0x28940F add     dword ptr [rbx+54h], 1
//   0x289413 jmp     loc_2892E7
//   0x289418 align 20h
//   0x289420 mov     rsi, rbp; jumptable 00000000002892F9 case 75
//   0x289423 mov     rdi, rbx
//   0x289426 call    sub_2925F0
//   0x28942B test    al, al
//   0x28942D jz      short loc_289433
//   0x28942F add     dword ptr [rbx+50h], 1
//   0x289433 mov     rsi, rbp
//   0x289436 mov     rdi, rbx
//   0x289439 call    sub_292390
//   0x28943E test    al, al
//   0x289440 jz      short loc_289446
//   0x289442 add     dword ptr [rbx+50h], 1
//   0x289446 mov     rsi, rbp
//   0x289449 mov     rdi, rbx
//   0x28944C call    sub_291FA0
//   0x289451 test    al, al
//   0x289453 jz      short loc_289459
//   0x289455 add     dword ptr [rbx+50h], 1
//   0x289459 mov     rsi, rbp
//   0x28945C mov     rdi, rbx
//   0x28945F call    sub_2921F0
//   0x289464 test    al, al
//   0x289466 jz      short loc_28946C
//   0x289468 add     dword ptr [rbx+54h], 1
//   0x28946C mov     rsi, rbp
//   0x28946F mov     rdi, rbx
//   0x289472 call    sub_292810
//   0x289477 test    al, al
//   0x289479 jz      short loc_28947F
//   0x28947B add     dword ptr [rbx+50h], 1
//   0x28947F mov     rsi, rbp
//   0x289482 mov     rdi, rbx
//   0x289485 call    sub_291A90
//   0x28948A test    al, al
//   0x28948C jz      def_2892F9; jumptable 00000000002892F9 default case, cases 77-79
//   0x289492 jmp     loc_28930F
//   0x289497 align 20h
//   0x2894A0 mov     rsi, rbp; jumptable 00000000002892F9 case 74
//   0x2894A3 mov     rdi, rbx
//   0x2894A6 call    sub_2925F0
//   0x2894AB test    al, al
//   0x2894AD jz      short loc_2894B3
//   0x2894AF add     dword ptr [rbx+50h], 1
//   0x2894B3 mov     rsi, rbp
//   0x2894B6 mov     rdi, rbx
//   0x2894B9 call    sub_292390
//   0x2894BE test    al, al
//   0x2894C0 jz      short loc_2894C6
//   0x2894C2 add     dword ptr [rbx+50h], 1
//   0x2894C6 mov     rsi, rbp
//   0x2894C9 mov     rdi, rbx
//   0x2894CC call    sub_292810
//   0x2894D1 test    al, al
//   0x2894D3 jz      def_2892F9; jumptable 00000000002892F9 default case, cases 77-79
//   0x2894D9 add     dword ptr [rbx+50h], 1
//   0x2894DD jmp     def_2892F9; jumptable 00000000002892F9 default case, cases 77-79
//   0x2894E2 align 8
//   0x2894E8 mov     rsi, rbp; jumptable 00000000002892F9 case 76
//   0x2894EB mov     rdi, rbx
//   0x2894EE call    sub_292390
//   0x2894F3 test    al, al
//   0x2894F5 jz      short loc_2894FB
//   0x2894F7 add     dword ptr [rbx+50h], 1
//   0x2894FB mov     rsi, rbp
//   0x2894FE mov     rdi, rbx
//   0x289501 call    sub_292BB0
//   0x289506 test    al, al
//   0x289508 jz      short loc_28950E
//   0x28950A add     dword ptr [rbx+50h], 1
//   0x28950E mov     rsi, rbp
//   0x289511 mov     rdi, rbx
//   0x289514 call    sub_292D60
//   0x289519 test    al, al
//   0x28951B jz      short loc_289521
//   0x28951D add     dword ptr [rbx+50h], 1
//   0x289521 mov     rsi, rbp
//   0x289524 mov     rdi, rbx
//   0x289527 call    sub_292DB0
//   0x28952C test    al, al
//   0x28952E jz      short loc_289534
//   0x289530 add     dword ptr [rbx+50h], 1
//   0x289534 mov     rsi, rbp
//   0x289537 mov     rdi, rbx
//   0x28953A call    sub_292E10
//   0x28953F test    al, al
//   0x289541 jz      short loc_289547
//   0x289543 add     dword ptr [rbx+50h], 1
//   0x289547 mov     rsi, rbp
//   0x28954A mov     rdi, rbx
//   0x28954D call    sub_292F90
//   0x289552 test    al, al
//   0x289554 jz      short loc_28955A
//   0x289556 add     dword ptr [rbx+50h], 1
//   0x28955A mov     rsi, rbp
//   0x28955D mov     rdi, rbx
//   0x289560 call    sub_293580
//   0x289565 test    al, al
//   0x289567 jz      def_2892F9; jumptable 00000000002892F9 default case, cases 77-79
//   0x28956D jmp     loc_28930F
//   0x289572 align 8
//   0x289578 mov     rsi, rbp
//   0x28957B mov     rdi, rbx
//   0x28957E call    sub_281910
//   0x289583 test    al, al
//   0x289585 jz      short loc_28958B
//   0x289587 add     dword ptr [rbx+50h], 1
//   0x28958B mov     rsi, rbp
//   0x28958E mov     rdi, rbx
//   0x289591 call    sub_2820E0
//   0x289596 test    al, al
//   0x289598 jnz     loc_2893A0
//   0x28959E mov     rsi, rbp
//   0x2895A1 mov     rdi, rbx
//   0x2895A4 call    sub_2826D0
//   0x2895A9 test    al, al
//   0x2895AB jnz     loc_2893A0
//   0x2895B1 mov     rsi, rbp
//   0x2895B4 mov     rdi, rbx
//   0x2895B7 call    sub_284C00
//   0x2895BC test    al, al
//   0x2895BE jnz     loc_2893A0
//   0x2895C4 mov     rsi, rbp
//   0x2895C7 mov     rdi, rbx
//   0x2895CA call    sub_281610
//   0x2895CF test    al, al
//   0x2895D1 jz      short loc_2895D7
//   0x2895D3 add     dword ptr [rbx+50h], 1
//   0x2895D7 mov     rsi, rbp
//   0x2895DA mov     rdi, rbx
//   0x2895DD call    sub_283C60
//   0x2895E2 test    al, al
//   0x2895E4 jz      short loc_2895EA
//   0x2895E6 add     dword ptr [rbx+50h], 1
//   0x2895EA mov     rsi, rbp
//   0x2895ED mov     rdi, rbx
//   0x2895F0 call    sub_281B70
//   0x2895F5 test    al, al
//   0x2895F7 jz      short loc_2895FD
//   0x2895F9 add     dword ptr [rbx+50h], 1
//   0x2895FD mov     rsi, rbp
//   0x289600 mov     rdi, rbx
//   0x289603 call    sub_283D40
//   0x289608 test    al, al
//   0x28960A jz      def_2892F9; jumptable 00000000002892F9 default case, cases 77-79
//   0x289610 jmp     loc_2894D9
//   0x289615 align 8
//   0x289618 mov     rsi, rbp
//   0x28961B mov     rdi, rbx
//   0x28961E call    sub_285140
//   0x289623 test    al, al
//   0x289625 jnz     loc_2893A0
//   0x28962B mov     rsi, rbp
//   0x28962E mov     rdi, rbx
//   0x289631 call    sub_284760
//   0x289636 test    al, al
//   0x289638 jnz     loc_2893A0
//   0x28963E mov     rsi, rbp
//   0x289641 mov     rdi, rbx
//   0x289644 call    sub_284CB0
//   0x289649 test    al, al
//   0x28964B jz      short loc_289651
//   0x28964D add     dword ptr [rbx+50h], 1
//   0x289651 mov     rsi, rbp
//   0x289654 mov     rdi, rbx
//   0x289657 call    sub_288B10
//   0x28965C test    al, al
//   0x28965E jz      short loc_289664
//   0x289660 add     dword ptr [rbx+50h], 1
//   0x289664 mov     rsi, rbp
//   0x289667 mov     rdi, rbx
//   0x28966A call    sub_2868C0
//   0x28966F test    al, al
//   0x289671 jnz     loc_2893A0
//   0x289677 mov     rsi, rbp
//   0x28967A mov     rdi, rbx
//   0x28967D call    sub_287110
//   0x289682 test    al, al
//   0x289684 jnz     loc_2893A0
//   0x28968A jmp     def_2892F9; jumptable 00000000002892F9 default case, cases 77-79
// ============================================================

void sub_2892D0(/* signature unknown */)
{
    // see disassembly above
}

