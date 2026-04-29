// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x287310
// Name:           sub_287310
// Function size:  959 bytes (280 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x287310 push    r12
//   0x287312 push    rbp
//   0x287313 mov     rbp, rsi
//   0x287316 push    rbx
//   0x287317 cmp     dword ptr [rsi+0Ch], 0FFFFFFFFh
//   0x28731B mov     rbx, rdi
//   0x28731E jnz     short loc_287360
//   0x287320 lea     r12, jpt_287339
//   0x287327 mov     eax, [rbp+8]
//   0x28732A sub     eax, 46h ; 'F'; switch 11 cases
//   0x28732D cmp     eax, 0Ah
//   0x287330 ja      short def_287339; jumptable 0000000000287339 default case, cases 77-79
//   0x287332 movsxd  rax, ds:(jpt_287339 - 4029F8h)[r12+rax*4]
//   0x287336 add     rax, r12
//   0x287339 jmp     rax; switch jump
//   0x28733B align 20h
//   0x287340 mov     rsi, rbp; jumptable 0000000000287339 case 80
//   0x287343 mov     rdi, rbx
//   0x287346 call    sub_2846B0
//   0x28734B test    al, al
//   0x28734D jz      short def_287339; jumptable 0000000000287339 default case, cases 77-79
//   0x28734F add     dword ptr [rbx+54h], 1
//   0x287353 pop     rbx; jumptable 0000000000287339 default case, cases 77-79
//   0x287354 xor     eax, eax
//   0x287356 pop     rbp
//   0x287357 pop     r12
//   0x287359 retn
//   0x28735A align 20h
//   0x287360 call    sub_284310
//   0x287365 test    al, al
//   0x287367 jz      short loc_287320
//   0x287369 add     dword ptr [rbx+54h], 1
//   0x28736D jmp     short loc_287320
//   0x28736F align 10h
//   0x287370 mov     rsi, rbp; jumptable 0000000000287339 case 70
//   0x287373 mov     rdi, rbx
//   0x287376 call    sub_2846B0
//   0x28737B test    al, al
//   0x28737D jz      short loc_287383
//   0x28737F add     dword ptr [rbx+54h], 1
//   0x287383 mov     rsi, rbp
//   0x287386 mov     rdi, rbx
//   0x287389 call    sub_284160
//   0x28738E pop     rbx
//   0x28738F pop     rbp
//   0x287390 movzx   eax, al
//   0x287393 pop     r12
//   0x287395 retn
//   0x287396 align 20h
//   0x2873A0 mov     rsi, rbp; jumptable 0000000000287339 case 71
//   0x2873A3 mov     rdi, rbx
//   0x2873A6 call    sub_281F20
//   0x2873AB add     [rbx+50h], eax
//   0x2873AE jmp     short def_287339; jumptable 0000000000287339 default case, cases 77-79
//   0x2873B0 mov     rsi, rbp; jumptable 0000000000287339 case 72
//   0x2873B3 mov     rdi, rbx
//   0x2873B6 call    sub_282660
//   0x2873BB test    al, al
//   0x2873BD jnz     short loc_2873E0
//   0x2873BF mov     rsi, rbp
//   0x2873C2 mov     rdi, rbx
//   0x2873C5 call    sub_283B20
//   0x2873CA test    al, al
//   0x2873CC jz      loc_287658
//   0x2873D2 nop     word ptr [rax+rax+00000000h]
//   0x2873DD nop     dword ptr [rax]
//   0x2873E0 add     dword ptr [rbx+50h], 1
//   0x2873E4 jmp     loc_287327
//   0x2873E9 align 10h
//   0x2873F0 mov     rsi, rbp; jumptable 0000000000287339 case 73
//   0x2873F3 mov     rdi, rbx
//   0x2873F6 call    sub_281900
//   0x2873FB test    al, al
//   0x2873FD jz      short loc_287403
//   0x2873FF add     dword ptr [rbx+50h], 1
//   0x287403 mov     rsi, rbp
//   0x287406 mov     rdi, rbx
//   0x287409 call    sub_286EE0
//   0x28740E test    al, al
//   0x287410 jz      short loc_287416
//   0x287412 add     dword ptr [rbx+50h], 1
//   0x287416 mov     rsi, rbp
//   0x287419 mov     rdi, rbx
//   0x28741C call    sub_281970
//   0x287421 test    al, al
//   0x287423 jz      short loc_287429
//   0x287425 add     dword ptr [rbx+50h], 1
//   0x287429 mov     rsi, rbp
//   0x28742C mov     rdi, rbx
//   0x28742F call    sub_27F4E0
//   0x287434 test    al, al
//   0x287436 jz      short loc_28743C
//   0x287438 add     dword ptr [rbx+50h], 1
//   0x28743C mov     rsi, rbp
//   0x28743F mov     rdi, rbx
//   0x287442 call    sub_2910E0
//   0x287447 test    al, al
//   0x287449 jz      loc_2875B8
//   0x28744F add     dword ptr [rbx+54h], 1
//   0x287453 jmp     loc_287327
//   0x287458 align 20h
//   0x287460 mov     rsi, rbp; jumptable 0000000000287339 case 75
//   0x287463 mov     rdi, rbx
//   0x287466 call    sub_290630
//   0x28746B test    al, al
//   0x28746D jz      short loc_287473
//   0x28746F add     dword ptr [rbx+50h], 1
//   0x287473 mov     rsi, rbp
//   0x287476 mov     rdi, rbx
//   0x287479 call    sub_2903D0
//   0x28747E test    al, al
//   0x287480 jz      short loc_287486
//   0x287482 add     dword ptr [rbx+50h], 1
//   0x287486 mov     rsi, rbp
//   0x287489 mov     rdi, rbx
//   0x28748C call    sub_28FFE0
//   0x287491 test    al, al
//   0x287493 jz      short loc_287499
//   0x287495 add     dword ptr [rbx+50h], 1
//   0x287499 mov     rsi, rbp
//   0x28749C mov     rdi, rbx
//   0x28749F call    sub_290230
//   0x2874A4 test    al, al
//   0x2874A6 jz      short loc_2874AC
//   0x2874A8 add     dword ptr [rbx+54h], 1
//   0x2874AC mov     rsi, rbp
//   0x2874AF mov     rdi, rbx
//   0x2874B2 call    sub_290850
//   0x2874B7 test    al, al
//   0x2874B9 jz      short loc_2874BF
//   0x2874BB add     dword ptr [rbx+50h], 1
//   0x2874BF mov     rsi, rbp
//   0x2874C2 mov     rdi, rbx
//   0x2874C5 call    sub_28FAD0
//   0x2874CA test    al, al
//   0x2874CC jz      def_287339; jumptable 0000000000287339 default case, cases 77-79
//   0x2874D2 jmp     loc_28734F
//   0x2874D7 align 20h
//   0x2874E0 mov     rsi, rbp; jumptable 0000000000287339 case 74
//   0x2874E3 mov     rdi, rbx
//   0x2874E6 call    sub_290630
//   0x2874EB test    al, al
//   0x2874ED jz      short loc_2874F3
//   0x2874EF add     dword ptr [rbx+50h], 1
//   0x2874F3 mov     rsi, rbp
//   0x2874F6 mov     rdi, rbx
//   0x2874F9 call    sub_2903D0
//   0x2874FE test    al, al
//   0x287500 jz      short loc_287506
//   0x287502 add     dword ptr [rbx+50h], 1
//   0x287506 mov     rsi, rbp
//   0x287509 mov     rdi, rbx
//   0x28750C call    sub_290850
//   0x287511 test    al, al
//   0x287513 jz      def_287339; jumptable 0000000000287339 default case, cases 77-79
//   0x287519 add     dword ptr [rbx+50h], 1
//   0x28751D jmp     def_287339; jumptable 0000000000287339 default case, cases 77-79
//   0x287522 align 8
//   0x287528 mov     rsi, rbp; jumptable 0000000000287339 case 76
//   0x28752B mov     rdi, rbx
//   0x28752E call    sub_2903D0
//   0x287533 test    al, al
//   0x287535 jz      short loc_28753B
//   0x287537 add     dword ptr [rbx+50h], 1
//   0x28753B mov     rsi, rbp
//   0x28753E mov     rdi, rbx
//   0x287541 call    sub_290BF0
//   0x287546 test    al, al
//   0x287548 jz      short loc_28754E
//   0x28754A add     dword ptr [rbx+50h], 1
//   0x28754E mov     rsi, rbp
//   0x287551 mov     rdi, rbx
//   0x287554 call    sub_290DA0
//   0x287559 test    al, al
//   0x28755B jz      short loc_287561
//   0x28755D add     dword ptr [rbx+50h], 1
//   0x287561 mov     rsi, rbp
//   0x287564 mov     rdi, rbx
//   0x287567 call    sub_290DF0
//   0x28756C test    al, al
//   0x28756E jz      short loc_287574
//   0x287570 add     dword ptr [rbx+50h], 1
//   0x287574 mov     rsi, rbp
//   0x287577 mov     rdi, rbx
//   0x28757A call    sub_290E50
//   0x28757F test    al, al
//   0x287581 jz      short loc_287587
//   0x287583 add     dword ptr [rbx+50h], 1
//   0x287587 mov     rsi, rbp
//   0x28758A mov     rdi, rbx
//   0x28758D call    sub_290FD0
//   0x287592 test    al, al
//   0x287594 jz      short loc_28759A
//   0x287596 add     dword ptr [rbx+50h], 1
//   0x28759A mov     rsi, rbp
//   0x28759D mov     rdi, rbx
//   0x2875A0 call    sub_2915C0
//   0x2875A5 test    al, al
//   0x2875A7 jz      def_287339; jumptable 0000000000287339 default case, cases 77-79
//   0x2875AD jmp     loc_28734F
//   0x2875B2 align 8
//   0x2875B8 mov     rsi, rbp
//   0x2875BB mov     rdi, rbx
//   0x2875BE call    sub_27F950
//   0x2875C3 test    al, al
//   0x2875C5 jz      short loc_2875CB
//   0x2875C7 add     dword ptr [rbx+50h], 1
//   0x2875CB mov     rsi, rbp
//   0x2875CE mov     rdi, rbx
//   0x2875D1 call    sub_280120
//   0x2875D6 test    al, al
//   0x2875D8 jnz     loc_2873E0
//   0x2875DE mov     rsi, rbp
//   0x2875E1 mov     rdi, rbx
//   0x2875E4 call    sub_280710
//   0x2875E9 test    al, al
//   0x2875EB jnz     loc_2873E0
//   0x2875F1 mov     rsi, rbp
//   0x2875F4 mov     rdi, rbx
//   0x2875F7 call    sub_282C40
//   0x2875FC test    al, al
//   0x2875FE jnz     loc_2873E0
//   0x287604 mov     rsi, rbp
//   0x287607 mov     rdi, rbx
//   0x28760A call    sub_27F650
//   0x28760F test    al, al
//   0x287611 jz      short loc_287617
//   0x287613 add     dword ptr [rbx+50h], 1
//   0x287617 mov     rsi, rbp
//   0x28761A mov     rdi, rbx
//   0x28761D call    sub_281CA0
//   0x287622 test    al, al
//   0x287624 jz      short loc_28762A
//   0x287626 add     dword ptr [rbx+50h], 1
//   0x28762A mov     rsi, rbp
//   0x28762D mov     rdi, rbx
//   0x287630 call    sub_27FBB0
//   0x287635 test    al, al
//   0x287637 jz      short loc_28763D
//   0x287639 add     dword ptr [rbx+50h], 1
//   0x28763D mov     rsi, rbp
//   0x287640 mov     rdi, rbx
//   0x287643 call    sub_281D80
//   0x287648 test    al, al
//   0x28764A jz      def_287339; jumptable 0000000000287339 default case, cases 77-79
//   0x287650 jmp     loc_287519
//   0x287655 align 8
//   0x287658 mov     rsi, rbp
//   0x28765B mov     rdi, rbx
//   0x28765E call    sub_283180
//   0x287663 test    al, al
//   0x287665 jnz     loc_2873E0
//   0x28766B mov     rsi, rbp
//   0x28766E mov     rdi, rbx
//   0x287671 call    sub_2827A0
//   0x287676 test    al, al
//   0x287678 jnz     loc_2873E0
//   0x28767E mov     rsi, rbp
//   0x287681 mov     rdi, rbx
//   0x287684 call    sub_282CF0
//   0x287689 test    al, al
//   0x28768B jz      short loc_287691
//   0x28768D add     dword ptr [rbx+50h], 1
//   0x287691 mov     rsi, rbp
//   0x287694 mov     rdi, rbx
//   0x287697 call    sub_286B50
//   0x28769C test    al, al
//   0x28769E jz      short loc_2876A4
//   0x2876A0 add     dword ptr [rbx+50h], 1
//   0x2876A4 mov     rsi, rbp
//   0x2876A7 mov     rdi, rbx
//   0x2876AA call    sub_284900
//   0x2876AF test    al, al
//   0x2876B1 jnz     loc_2873E0
//   0x2876B7 mov     rsi, rbp
//   0x2876BA mov     rdi, rbx
//   0x2876BD call    sub_285150
//   0x2876C2 test    al, al
//   0x2876C4 jnz     loc_2873E0
//   0x2876CA jmp     def_287339; jumptable 0000000000287339 default case, cases 77-79
// ============================================================

void sub_287310(/* signature unknown */)
{
    // see disassembly above
}

