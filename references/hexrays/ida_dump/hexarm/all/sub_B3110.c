// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0xB3110
// Name:           sub_B3110
// Function size:  6837 bytes (1539 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0xB3110 push    rbp
//   0xB3111 mov     rbp, rsp
//   0xB3114 push    r15
//   0xB3116 push    r14
//   0xB3118 push    r13
//   0xB311A push    r12
//   0xB311C push    rbx
//   0xB311D sub     rsp, 138h
//   0xB3124 mov     rax, fs:28h
//   0xB312D mov     [rbp+var_38], rax
//   0xB3131 xor     eax, eax
//   0xB3133 test    rsi, rsi
//   0xB3136 jz      short loc_B3144
//   0xB3138 mov     r15, rsi
//   0xB313B test    dword ptr [rsi+4], 40010h
//   0xB3142 jz      short loc_B3178
//   0xB3144 mov     byte ptr [rbp+var_138], 0
//   0xB314B mov     rax, [rbp+var_38]
//   0xB314F sub     rax, fs:28h
//   0xB3158 jnz     loc_B46E0
//   0xB315E movzx   eax, byte ptr [rbp+var_138]
//   0xB3165 lea     rsp, [rbp-28h]
//   0xB3169 pop     rbx
//   0xB316A pop     r12
//   0xB316C pop     r13
//   0xB316E pop     r14
//   0xB3170 pop     r15
//   0xB3172 pop     rbp
//   0xB3173 retn
//   0xB3174 align 8
//   0xB3178 test    byte ptr [rsi+41h], 2
//   0xB317C jnz     short loc_B3144
//   0xB317E mov     rbx, rdi
//   0xB3181 mov     rdi, [rdi+40h]
//   0xB3185 call    sub_A2090
//   0xB318A mov     byte ptr [rbp+var_138], al
//   0xB3190 test    al, al
//   0xB3192 jnz     short loc_B3144
//   0xB3194 mov     rdi, [rbx+1E0h]
//   0xB319B mov     rcx, r15
//   0xB319E mov     rdx, rbx
//   0xB31A1 mov     esi, 0Ch
//   0xB31A6 call    sub_33E5A0
//   0xB31AB test    eax, eax
//   0xB31AD jnz     loc_B35B0
//   0xB31B3 mov     rax, [rbx+1E0h]
//   0xB31BA pxor    xmm0, xmm0
//   0xB31BE cmp     dword ptr [r15], 3Ch; switch 61 cases
//   0xB31C2 mov     [rbp+var_120], 0
//   0xB31CD mov     [rbp+var_118], 0
//   0xB31D8 mov     [rbp+var_110], 0
//   0xB31E3 mov     r13, [rax+70h]
//   0xB31E7 mov     [rbp+var_F0], 0
//   0xB31F2 mov     [rbp+var_E8], 0
//   0xB31FD mov     [rbp+var_E0], 0
//   0xB3208 movups  [rbp+var_108], xmm0
//   0xB320F movups  [rbp+var_D8], xmm0
//   0xB3216 ja      def_B322D; jumptable 00000000000B322D default case, cases 0,3,6-8,15-18,20-22,25-28,31-33,36-38,41,43,44,47-49,52,53,57,58
//   0xB321C mov     eax, [r15]
//   0xB321F lea     rdx, jpt_B322D
//   0xB3226 movsxd  rax, ds:(jpt_B322D - 41FF8Ch)[rdx+rax*4]
//   0xB322A add     rax, rdx
//   0xB322D jmp     rax; switch jump
//   0xB322F lea     r14, [rbp+var_60]; jumptable 00000000000B322D case 60
//   0xB3233 xor     ecx, ecx
//   0xB3235 mov     rdx, r15
//   0xB3238 mov     rsi, rbx
//   0xB323B mov     rdi, r14
//   0xB323E call    sub_1240C0
//   0xB3243 lea     rdi, [rbp+var_120]
//   0xB324A mov     rsi, r14
//   0xB324D call    sub_642D0
//   0xB3252 mov     rdi, [rbp+var_110]
//   0xB3259 pxor    xmm0, xmm0
//   0xB325D mov     r12, [rbp+var_50]
//   0xB3261 mov     [rbp+var_50], 0
//   0xB3269 movdqu  xmm1, [rbp+var_48]
//   0xB326E movups  [rbp+var_48], xmm0
//   0xB3272 test    rdi, rdi
//   0xB3275 jz      loc_B3E41
//   0xB327B movaps  [rbp+var_150], xmm1
//   0xB3282 mov     qword ptr [rbp+var_108], 0
//   0xB328D call    _qfree
//   0xB3292 mov     rdi, [rbp+var_50]
//   0xB3296 movdqa  xmm1, [rbp+var_150]
//   0xB329E mov     [rbp+var_110], r12
//   0xB32A5 movups  [rbp+var_108], xmm1
//   0xB32AC test    rdi, rdi
//   0xB32AF jz      short loc_B32BE
//   0xB32B1 mov     qword ptr [rbp+var_48], 0
//   0xB32B9 call    _qfree
//   0xB32BE mov     rdi, [rbp+var_60]
//   0xB32C2 call    _qfree
//   0xB32C7 xor     ecx, ecx
//   0xB32C9 mov     rdx, r15
//   0xB32CC mov     rsi, rbx
//   0xB32CF mov     rdi, r14
//   0xB32D2 call    sub_127460
//   0xB32D7 lea     rdi, [rbp+var_F0]
//   0xB32DE mov     rsi, r14
//   0xB32E1 call    sub_642D0
//   0xB32E6 mov     rdi, [rbp+var_E0]
//   0xB32ED pxor    xmm0, xmm0
//   0xB32F1 mov     r12, [rbp+var_50]
//   0xB32F5 mov     [rbp+var_50], 0
//   0xB32FD movdqu  xmm1, [rbp+var_48]
//   0xB3302 movups  [rbp+var_48], xmm0
//   0xB3306 test    rdi, rdi
//   0xB3309 jz      loc_B3E54
//   0xB330F movaps  [rbp+var_150], xmm1
//   0xB3316 mov     qword ptr [rbp+var_D8], 0
//   0xB3321 call    _qfree
//   0xB3326 mov     rdi, [rbp+var_50]
//   0xB332A movdqa  xmm1, [rbp+var_150]
//   0xB3332 mov     [rbp+var_E0], r12
//   0xB3339 movups  [rbp+var_D8], xmm1
//   0xB3340 test    rdi, rdi
//   0xB3343 jz      short loc_B3352
//   0xB3345 mov     qword ptr [rbp+var_48], 0
//   0xB334D call    _qfree
//   0xB3352 mov     rdi, [rbp+var_60]
//   0xB3356 call    _qfree
//   0xB335B mov     r12, [r15+10h]
//   0xB335F test    r12, r12
//   0xB3362 jz      def_B322D; jumptable 00000000000B322D default case, cases 0,3,6-8,15-18,20-22,25-28,31-33,36-38,41,43,44,47-49,52,53,57,58
//   0xB3368 lea     rax, [rbp+var_90]
//   0xB336F mov     qword ptr [rbp+var_150], rax
//   0xB3376 nop     word ptr [rax+rax+00000000h]
//   0xB3380 mov     eax, [r12]
//   0xB3384 lea     edx, [rax-38h]
//   0xB3387 cmp     edx, 1
//   0xB338A jbe     def_B322D; jumptable 00000000000B322D default case, cases 0,3,6-8,15-18,20-22,25-28,31-33,36-38,41,43,44,47-49,52,53,57,58
//   0xB3390 cmp     eax, 3Bh ; ';'
//   0xB3393 jnz     loc_B34E3
//   0xB3399 mov     eax, [r15+44h]
//   0xB339D cmp     [r12+24h], eax
//   0xB33A2 jnz     def_B322D; jumptable 00000000000B322D default case, cases 0,3,6-8,15-18,20-22,25-28,31-33,36-38,41,43,44,47-49,52,53,57,58
//   0xB33A8 mov     rsi, [r12+18h]
//   0xB33AD mov     rdi, [rbx+40h]
//   0xB33B1 call    sub_1CF5F0
//   0xB33B6 mov     rsi, [r15+18h]
//   0xB33BA mov     rdi, [rbx+40h]
//   0xB33BE mov     [rbp+var_140], rax
//   0xB33C5 call    sub_1CF5F0
//   0xB33CA mov     rcx, rax
//   0xB33CD movsxd  rdx, dword ptr [r15+44h]
//   0xB33D1 mov     rax, [rbp+var_140]
//   0xB33D8 mov     [rbp+var_140], rcx
//   0xB33DF sub     rax, rdx
//   0xB33E2 cmp     rax, rcx
//   0xB33E5 jnz     def_B322D; jumptable 00000000000B322D default case, cases 0,3,6-8,15-18,20-22,25-28,31-33,36-38,41,43,44,47-49,52,53,57,58
//   0xB33EB mov     edx, [r13+54h]
//   0xB33EF mov     esi, [r13+3Ch]
//   0xB33F3 mov     [rbp+var_90], 0
//   0xB33FE mov     rdi, qword ptr [rbp+var_150]
//   0xB3405 mov     [rbp+var_88], 0
//   0xB3410 call    sub_63880
//   0xB3415 mov     rax, [rbx+40h]
//   0xB3419 pxor    xmm0, xmm0
//   0xB341D mov     [rbp+var_80], 0
//   0xB3425 movups  [rbp+var_78], xmm0
//   0xB3429 mov     rcx, [rbp+var_140]
//   0xB3430 movsxd  rdx, dword ptr [r13+50h]
//   0xB3434 add     rcx, [rax+5A0h]
//   0xB343B mov     rdi, qword ptr [rbp+var_150]
//   0xB3442 mov     rsi, rcx
//   0xB3445 call    sub_122560
//   0xB344A mov     rdx, [r12+8]
//   0xB344F xor     r8d, r8d
//   0xB3452 mov     rcx, r15
//   0xB3455 mov     rdi, rbx
//   0xB3458 mov     rsi, qword ptr [rbp+var_150]
//   0xB345F call    sub_A97D0
//   0xB3464 test    rax, rax
//   0xB3467 jnz     loc_B4650
//   0xB346D mov     ecx, 1
//   0xB3472 mov     rdx, r12
//   0xB3475 mov     rsi, rbx
//   0xB3478 mov     rdi, r14
//   0xB347B call    sub_1240C0
//   0xB3480 mov     rdx, [r12+8]
//   0xB3485 mov     rcx, r15
//   0xB3488 mov     rsi, r14
//   0xB348B mov     rdi, rbx
//   0xB348E mov     r8d, 1
//   0xB3494 call    sub_A94E0
//   0xB3499 test    rax, rax
//   0xB349C jz      loc_B45AA
//   0xB34A2 mov     rdi, [rbp+var_50]
//   0xB34A6 test    rdi, rdi
//   0xB34A9 jz      short loc_B34B8
//   0xB34AB mov     qword ptr [rbp+var_48], 0
//   0xB34B3 call    _qfree
//   0xB34B8 mov     rdi, [rbp+var_60]
//   0xB34BC call    _qfree
//   0xB34C1 mov     rdi, [rbp+var_80]
//   0xB34C5 test    rdi, rdi
//   0xB34C8 jz      short loc_B34D7
//   0xB34CA mov     qword ptr [rbp+var_78], 0
//   0xB34D2 call    _qfree
//   0xB34D7 mov     rdi, [rbp+var_90]
//   0xB34DE call    _qfree
//   0xB34E3 xor     ecx, ecx
//   0xB34E5 mov     rdx, r12
//   0xB34E8 mov     rsi, rbx
//   0xB34EB mov     rdi, r14
//   0xB34EE call    sub_127460
//   0xB34F3 lea     rsi, [rbp+var_120]
//   0xB34FA mov     rdi, r14
//   0xB34FD call    sub_64180
//   0xB3502 test    al, al
//   0xB3504 jz      loc_B3DD0
//   0xB350A mov     rdi, [rbp+var_50]
//   0xB350E test    rdi, rdi
//   0xB3511 jz      short loc_B3520
//   0xB3513 mov     qword ptr [rbp+var_48], 0
//   0xB351B call    _qfree
//   0xB3520 mov     rdi, [rbp+var_60]
//   0xB3524 call    _qfree
//   0xB3529 nop     dword ptr [rax+00000000h]
//   0xB3530 mov     rsi, r15; jumptable 00000000000B322D default case, cases 0,3,6-8,15-18,20-22,25-28,31-33,36-38,41,43,44,47-49,52,53,57,58
//   0xB3533 mov     rdi, rbx
//   0xB3536 call    sub_ABC40
//   0xB353B test    al, al
//   0xB353D jnz     loc_B3DC0
//   0xB3543 mov     rsi, r15
//   0xB3546 mov     rdi, rbx
//   0xB3549 call    sub_18A470
//   0xB354E test    al, al
//   0xB3550 jnz     loc_B3E20
//   0xB3556 mov     rdi, [rbp+var_E0]
//   0xB355D test    rdi, rdi
//   0xB3560 jz      short loc_B3572
//   0xB3562 mov     qword ptr [rbp+var_D8], 0
//   0xB356D call    _qfree
//   0xB3572 mov     rdi, [rbp+var_F0]
//   0xB3579 call    _qfree
//   0xB357E mov     rdi, [rbp+var_110]
//   0xB3585 test    rdi, rdi
//   0xB3588 jz      short loc_B359A
//   0xB358A mov     qword ptr [rbp+var_108], 0
//   0xB3595 call    _qfree
//   0xB359A mov     rdi, [rbp+var_120]
//   0xB35A1 call    _qfree
//   0xB35A6 jmp     loc_B314B
//   0xB35AB align 10h
//   0xB35B0 cmp     eax, 0FFFFFFFFh
//   0xB35B3 setnz   byte ptr [rbp+var_138]
//   0xB35BA jmp     loc_B314B
//   0xB35BF align 20h
//   0xB35C0 mov     rsi, r15; jumptable 00000000000B322D cases 29,30,34,35,39,40,45,46,50,51
//   0xB35C3 mov     rdi, rbx
//   0xB35C6 call    sub_97CC0
//   0xB35CB test    al, al
//   0xB35CD jz      def_B322D; jumptable 00000000000B322D default case, cases 0,3,6-8,15-18,20-22,25-28,31-33,36-38,41,43,44,47-49,52,53,57,58
//   0xB35D3 mov     r14d, 2Fh ; '/'
//   0xB35D9 nop     dword ptr [rax+00000000h]
//   0xB35E0 mov     rdi, r15
//   0xB35E3 call    sub_1B5580
//   0xB35E8 mov     rcx, rax
//   0xB35EB mov     edx, r14d
//   0xB35EE lea     rsi, aCmbDS; "cmb%d: %s"
//   0xB35F5 mov     rdi, rbx
//   0xB35F8 xor     eax, eax
//   0xB35FA call    sub_A1F60
//   0xB35FF mov     byte ptr [rbp+var_138], 1
//   0xB3606 jmp     loc_B3556
//   0xB360B align 10h
//   0xB3610 mov     rsi, r15; jumptable 00000000000B322D case 19
//   0xB3613 mov     rdi, rbx
//   0xB3616 call    sub_9AF40
//   0xB361B test    al, al
//   0xB361D jnz     loc_B3E36
//   0xB3623 mov     rsi, r15
//   0xB3626 mov     rdi, rbx
//   0xB3629 call    sub_96330
//   0xB362E test    al, al
//   0xB3630 jnz     loc_B3E67
//   0xB3636 mov     rsi, r15
//   0xB3639 mov     rdi, rbx
//   0xB363C call    sub_97F80
//   0xB3641 test    al, al
//   0xB3643 jnz     loc_B42D6
//   0xB3649 mov     rsi, r15
//   0xB364C mov     rdi, rbx
//   0xB364F call    sub_971B0
//   0xB3654 test    al, al
//   0xB3656 jz      def_B322D; jumptable 00000000000B322D default case, cases 0,3,6-8,15-18,20-22,25-28,31-33,36-38,41,43,44,47-49,52,53,57,58
//   0xB365C mov     r14d, 39h ; '9'
//   0xB3662 jmp     loc_B35E0
//   0xB3667 pxor    xmm0, xmm0; jumptable 00000000000B322D case 4
//   0xB366B lea     rdx, [r15+40h]
//   0xB366F mov     ecx, 1
//   0xB3674 mov     rdi, rbx
//   0xB3677 lea     r14, [rbp+var_C0]
//   0xB367E movups  [rbp+var_78], xmm0
//   0xB3682 lea     r12, [rbp+var_90]
//   0xB3689 mov     rsi, r14
//   0xB368C mov     [rbp+var_C0], 0
//   0xB3697 mov     [rbp+var_B8], 0
//   0xB36A2 mov     [rbp+var_B0], 0
//   0xB36AD mov     [rbp+var_90], 0
//   0xB36B8 mov     [rbp+var_88], 0
//   0xB36C3 mov     [rbp+var_80], 0
//   0xB36CB mov     [rbp+var_140], rdx
//   0xB36D2 mov     qword ptr [rbp+var_150], r14
//   0xB36D9 movups  [rbp+var_A8], xmm0
//   0xB36E0 call    sub_127A20
//   0xB36E5 sub     rsp, 8
//   0xB36E9 mov     rdx, [r15+10h]
//   0xB36ED mov     r9d, 80h
//   0xB36F3 xor     ecx, ecx
//   0xB36F5 push    101h
//   0xB36FA mov     r8, r12
//   0xB36FD mov     rsi, r14
//   0xB3700 mov     rdi, rbx
//   0xB3703 call    sub_128B90
//   0xB3708 mov     r11, rax
//   0xB370B pop     r14
//   0xB370D pop     rax
//   0xB370E test    r11, r11
//   0xB3711 jz      short loc_B3755
//   0xB3713 movzx   eax, byte ptr [r15+40h]
//   0xB3718 cmp     [r11+40h], al
//   0xB371C jz      loc_B42B0
//   0xB3722 cmp     dword ptr [r15+44h], 4
//   0xB3727 jg      short loc_B3755
//   0xB3729 mov     eax, [r11]
//   0xB372C sub     eax, 8
//   0xB372F cmp     eax, 1
//   0xB3732 jbe     loc_B448E
//   0xB3738 mov     rcx, qword ptr [rbp+var_150]
//   0xB373F mov     rdx, r15
//   0xB3742 mov     rsi, r11
//   0xB3745 mov     rdi, rbx
//   0xB3748 call    sub_ADE90
//   0xB374D test    al, al
//   0xB374F jnz     loc_B4675
//   0xB3755 mov     rdi, [rbp+var_80]
//   0xB3759 test    rdi, rdi
//   0xB375C jz      short loc_B376B
//   0xB375E mov     qword ptr [rbp+var_78], 0
//   0xB3766 call    _qfree
//   0xB376B mov     rdi, [rbp+var_90]
//   0xB3772 call    _qfree
//   0xB3777 mov     rdi, [rbp+var_B0]
//   0xB377E test    rdi, rdi
//   0xB3781 jz      short loc_B3793
//   0xB3783 mov     qword ptr [rbp+var_A8], 0
//   0xB378E call    _qfree
//   0xB3793 mov     rdi, [rbp+var_C0]
//   0xB379A call    _qfree
//   0xB379F mov     rsi, r15
//   0xB37A2 mov     rdi, rbx
//   0xB37A5 call    sub_1869D0
//   0xB37AA test    al, al
//   0xB37AC jnz     loc_B38A3
//   0xB37B2 cmp     dword ptr [r15+44h], 2; jumptable 00000000000B322D case 9
//   0xB37B7 jg      def_B322D; jumptable 00000000000B322D default case, cases 0,3,6-8,15-18,20-22,25-28,31-33,36-38,41,43,44,47-49,52,53,57,58
//   0xB37BD lea     r14, [rbp+var_60]
//   0xB37C1 lea     rdi, [r15+20h]
//   0xB37C5 xor     edx, edx
//   0xB37C7 mov     rsi, r14
//   0xB37CA call    sub_11F7C0
//   0xB37CF test    al, al
//   0xB37D1 jz      short loc_B37DE
//   0xB37D3 cmp     [rbp+var_60], 0
//   0xB37D8 jz      def_B322D; jumptable 00000000000B322D default case, cases 0,3,6-8,15-18,20-22,25-28,31-33,36-38,41,43,44,47-49,52,53,57,58
//   0xB37DE lea     rax, [r15+40h]
//   0xB37E2 lea     r12, [rbp+var_90]
//   0xB37E9 mov     rsi, rax
//   0xB37EC mov     rdi, r12
//   0xB37EF mov     qword ptr [rbp+var_150], rax
//   0xB37F6 call    sub_123480
//   0xB37FB sub     rsp, 8
//   0xB37FF xor     r9d, r9d
//   0xB3802 mov     rcx, r12
//   0xB3805 mov     rdx, r15
//   0xB3808 push    0
//   0xB380A mov     eax, dword ptr [rbp+var_90+4]
//   0xB3810 mov     rsi, rbx
//   0xB3813 mov     rdi, r13
//   0xB3816 lea     r8d, [rax+rax]
//   0xB381A call    sub_131170
//   0xB381F pop     rsi
//   0xB3820 pop     rdi
//   0xB3821 test    al, al
//   0xB3823 jz      loc_B469F
//   0xB3829 lea     rsi, [rbp+var_F0]
//   0xB3830 mov     ecx, 1
//   0xB3835 mov     rdx, r12
//   0xB3838 mov     rdi, rbx
//   0xB383B call    sub_127A20
//   0xB3840 sub     rsp, 8
//   0xB3844 mov     rdx, [r15+10h]
//   0xB3848 xor     r9d, r9d
//   0xB384B xor     r8d, r8d
//   0xB384E push    101h
//   0xB3853 lea     rsi, [rbp+var_F0]
//   0xB385A xor     ecx, ecx
//   0xB385C mov     rdi, rbx
//   0xB385F call    sub_128B90
//   0xB3864 mov     [rbp+var_140], rax
//   0xB386B pop     rdx
//   0xB386C pop     rcx
//   0xB386D test    rax, rax
//   0xB3870 jz      short loc_B387B
//   0xB3872 cmp     dword ptr [rax], 4
//   0xB3875 jz      loc_B480B
//   0xB387B mov     rdi, r12
//   0xB387E call    sub_11C7E0
//   0xB3883 jmp     def_B322D; jumptable 00000000000B322D default case, cases 0,3,6-8,15-18,20-22,25-28,31-33,36-38,41,43,44,47-49,52,53,57,58
//   0xB3888 align 10h
//   0xB3890 mov     rsi, r15; jumptable 00000000000B322D case 2
//   0xB3893 mov     rdi, rbx
//   0xB3896 call    sub_1869D0
//   0xB389B test    al, al
//   0xB389D jz      def_B322D; jumptable 00000000000B322D default case, cases 0,3,6-8,15-18,20-22,25-28,31-33,36-38,41,43,44,47-49,52,53,57,58
//   0xB38A3 mov     r14d, 21h ; '!'
//   0xB38A9 jmp     loc_B35E0
//   0xB38AE mov     rsi, r15; jumptable 00000000000B322D case 14
//   0xB38B1 mov     rdi, rbx
//   0xB38B4 call    sub_96EC0
//   0xB38B9 test    al, al
//   0xB38BB jz      def_B322D; jumptable 00000000000B322D default case, cases 0,3,6-8,15-18,20-22,25-28,31-33,36-38,41,43,44,47-49,52,53,57,58
//   0xB38C1 mov     r14d, 2Ah ; '*'
//   0xB38C7 jmp     loc_B35E0
//   0xB38CC mov     rsi, r15; jumptable 00000000000B322D case 13
//   0xB38CF mov     rdi, rbx
//   0xB38D2 call    sub_9C420
//   0xB38D7 test    al, al
//   0xB38D9 jnz     loc_B3E2B
//   0xB38DF mov     rsi, r15
//   0xB38E2 mov     rdi, rbx
//   0xB38E5 call    sub_99680
//   0xB38EA test    al, al
//   0xB38EC jnz     loc_B3AAE
//   0xB38F2 mov     rsi, r15
//   0xB38F5 mov     rdi, rbx
//   0xB38F8 call    sub_9E7B0
//   0xB38FD test    al, al
//   0xB38FF jnz     loc_B4589
//   0xB3905 mov     rsi, r15
//   0xB3908 mov     rdi, rbx
//   0xB390B call    sub_96CA0
//   0xB3910 test    al, al
//   0xB3912 jz      def_B322D; jumptable 00000000000B322D default case, cases 0,3,6-8,15-18,20-22,25-28,31-33,36-38,41,43,44,47-49,52,53,57,58
//   0xB3918 mov     r14d, 38h ; '8'
//   0xB391E jmp     loc_B35E0
//   0xB3923 align 8
//   0xB3928 cmp     byte ptr [r15+20h], 1; jumptable 00000000000B322D case 12
//   0xB392D jz      loc_B3F16
//   0xB3933 mov     rsi, r15
//   0xB3936 mov     rdi, rbx
//   0xB3939 call    sub_9C420
//   0xB393E test    al, al
//   0xB3940 jnz     loc_B3E2B
//   0xB3946 mov     rsi, r15
//   0xB3949 mov     rdi, rbx
//   0xB394C call    sub_9D910
//   0xB3951 test    al, al
//   0xB3953 jnz     loc_B42E1
//   0xB3959 mov     rsi, r15
//   0xB395C mov     rdi, rbx
//   0xB395F call    sub_98E50
//   0xB3964 test    al, al
//   0xB3966 jnz     loc_B457E
//   0xB396C mov     rsi, r15
//   0xB396F mov     rdi, rbx
//   0xB3972 call    sub_9EDB0
//   0xB3977 test    al, al
//   0xB3979 jnz     loc_B459F
//   0xB397F mov     rsi, r15
//   0xB3982 mov     rdi, rbx
//   0xB3985 call    sub_9C560
//   0xB398A test    al, al
//   0xB398C jnz     loc_B4694
//   0xB3992 mov     rsi, r15
//   0xB3995 mov     rdi, rbx
//   0xB3998 call    sub_95BC0
//   0xB399D test    al, al
//   0xB399F jnz     loc_B46D5
//   0xB39A5 mov     rsi, r15
//   0xB39A8 mov     rdi, rbx
//   0xB39AB call    sub_95F90
//   0xB39B0 test    al, al
//   0xB39B2 jz      def_B322D; jumptable 00000000000B322D default case, cases 0,3,6-8,15-18,20-22,25-28,31-33,36-38,41,43,44,47-49,52,53,57,58
//   0xB39B8 mov     r14d, 2Dh ; '-'
//   0xB39BE jmp     loc_B35E0
//   0xB39C3 align 8
//   0xB39C8 mov     rsi, r15; jumptable 00000000000B322D case 24
//   0xB39CB mov     rdi, rbx
//   0xB39CE call    sub_9E440
//   0xB39D3 test    al, al
//   0xB39D5 jnz     loc_B3EEA
//   0xB39DB mov     rsi, r15
//   0xB39DE mov     rdi, rbx
//   0xB39E1 call    sub_98120
//   0xB39E6 test    al, al
//   0xB39E8 jz      def_B322D; jumptable 00000000000B322D default case, cases 0,3,6-8,15-18,20-22,25-28,31-33,36-38,41,43,44,47-49,52,53,57,58
//   0xB39EE mov     r14d, 34h ; '4'
//   0xB39F4 jmp     loc_B35E0
//   0xB39F9 mov     rsi, r15; jumptable 00000000000B322D case 23
//   0xB39FC mov     rdi, rbx
//   0xB39FF call    sub_96640
//   0xB3A04 test    al, al
//   0xB3A06 jz      loc_B3610; jumptable 00000000000B322D case 19
//   0xB3A0C mov     r14d, 29h ; ')'
//   0xB3A12 jmp     loc_B35E0
//   0xB3A17 mov     rsi, r15; jumptable 00000000000B322D case 11
//   0xB3A1A mov     rdi, rbx
//   0xB3A1D call    sub_9F800
//   0xB3A22 test    al, al
//   0xB3A24 jnz     loc_B3F0B
//   0xB3A2A mov     rsi, r15
//   0xB3A2D mov     rdi, rbx
//   0xB3A30 call    sub_9C9F0
//   0xB3A35 test    al, al
//   0xB3A37 jnz     loc_B42F7
//   0xB3A3D mov     rsi, r15
//   0xB3A40 mov     rdi, rbx
//   0xB3A43 call    sub_9B340
//   0xB3A48 test    al, al
//   0xB3A4A jnz     loc_B4568
//   0xB3A50 mov     rsi, r15
//   0xB3A53 mov     rdi, rbx
//   0xB3A56 call    sub_9CD10
//   0xB3A5B test    al, al
//   0xB3A5D jnz     loc_B4594
//   0xB3A63 mov     rsi, r15
//   0xB3A66 mov     rdi, rbx
//   0xB3A69 call    sub_A0050
//   0xB3A6E test    al, al
//   0xB3A70 jz      def_B322D; jumptable 00000000000B322D default case, cases 0,3,6-8,15-18,20-22,25-28,31-33,36-38,41,43,44,47-49,52,53,57,58
//   0xB3A76 mov     r14d, 36h ; '6'
//   0xB3A7C jmp     loc_B35E0
//   0xB3A81 align 8
//   0xB3A88 mov     rsi, r15; jumptable 00000000000B322D case 5
//   0xB3A8B mov     rdi, rbx
//   0xB3A8E call    sub_9E7B0
//   0xB3A93 test    al, al
//   0xB3A95 jnz     loc_B4589
//   0xB3A9B mov     rsi, r15
//   0xB3A9E mov     rdi, rbx
//   0xB3AA1 call    sub_99680
//   0xB3AA6 test    al, al
//   0xB3AA8 jz      def_B322D; jumptable 00000000000B322D default case, cases 0,3,6-8,15-18,20-22,25-28,31-33,36-38,41,43,44,47-49,52,53,57,58
//   0xB3AAE mov     r14d, 12h
//   0xB3AB4 jmp     loc_B35E0
//   0xB3AB9 cmp     byte ptr [r15+30h], 1; jumptable 00000000000B322D case 1
//   0xB3ABE jz      loc_B4080
//   0xB3AC4 mov     rsi, r15
//   0xB3AC7 mov     rdi, rbx
//   0xB3ACA call    sub_9A530
//   0xB3ACF test    al, al
//   0xB3AD1 jnz     loc_B3EF5
//   0xB3AD7 mov     rsi, r15
//   0xB3ADA mov     rdi, rbx
//   0xB3ADD call    sub_18A740
//   0xB3AE2 test    al, al
//   0xB3AE4 jz      loc_B3890; jumptable 00000000000B322D case 2
//   0xB3AEA mov     r14d, 3Bh ; ';'
//   0xB3AF0 jmp     loc_B35E0
//   0xB3AF5 mov     rsi, r15; jumptable 00000000000B322D case 10
//   0xB3AF8 mov     rdi, rbx
//   0xB3AFB call    sub_9ABA0
//   0xB3B00 test    al, al
//   0xB3B02 jnz     loc_B3F00
//   0xB3B08 mov     rsi, r15
//   0xB3B0B mov     rdi, rbx
//   0xB3B0E call    sub_9FCF0
//   0xB3B13 test    al, al
//   0xB3B15 jnz     loc_B42EC
//   0xB3B1B mov     rsi, r15
//   0xB3B1E mov     rdi, rbx
//   0xB3B21 call    sub_9AD00
//   0xB3B26 test    al, al
//   0xB3B28 jnz     loc_B4573
//   0xB3B2E mov     rsi, r15
//   0xB3B31 mov     rdi, rbx
//   0xB3B34 call    sub_98480
//   0xB3B39 test    al, al
//   0xB3B3B jz      def_B322D; jumptable 00000000000B322D default case, cases 0,3,6-8,15-18,20-22,25-28,31-33,36-38,41,43,44,47-49,52,53,57,58
//   0xB3B41 mov     r14d, 37h ; '7'
//   0xB3B47 jmp     loc_B35E0
//   0xB3B4C align 10h
//   0xB3B50 cmp     byte ptr [r15+40h], 8; jumptable 00000000000B322D case 56
//   0xB3B55 jnz     def_B322D; jumptable 00000000000B322D default case, cases 0,3,6-8,15-18,20-22,25-28,31-33,36-38,41,43,44,47-49,52,53,57,58
//   0xB3B5B mov     rax, [r15+48h]
//   0xB3B5F mov     eax, [rax+11Ch]
//   0xB3B65 cmp     eax, 5
//   0xB3B68 jz      loc_B3E72
//   0xB3B6E cmp     eax, 22h ; '"'
//   0xB3B71 jz      loc_B3E72
//   0xB3B77 mov     edx, eax
//   0xB3B79 and     edx, 0FFFFFFDFh
//   0xB3B7C cmp     edx, 2
//   0xB3B7F jz      loc_B3EB4
//   0xB3B85 cmp     eax, 2
//   0xB3B88 jnz     def_B322D; jumptable 00000000000B322D default case, cases 0,3,6-8,15-18,20-22,25-28,31-33,36-38,41,43,44,47-49,52,53,57,58
//   0xB3B8E mov     rsi, r15
//   0xB3B91 mov     rdi, rbx
//   0xB3B94 call    sub_189D00
//   0xB3B99 test    al, al
//   0xB3B9B jz      def_B322D; jumptable 00000000000B322D default case, cases 0,3,6-8,15-18,20-22,25-28,31-33,36-38,41,43,44,47-49,52,53,57,58
//   0xB3BA1 mov     r14d, 1Ch
//   0xB3BA7 jmp     loc_B35E0
//   0xB3BAC align 10h
//   0xB3BB0 cmp     byte ptr [r15+20h], 6; jumptable 00000000000B322D case 55
//   0xB3BB5 jnz     def_B322D; jumptable 00000000000B322D default case, cases 0,3,6-8,15-18,20-22,25-28,31-33,36-38,41,43,44,47-49,52,53,57,58
//   0xB3BBB mov     rax, [rbx+40h]
//   0xB3BBF mov     rsi, [r15+28h]
//   0xB3BC3 cmp     [rax+28h], rsi
//   0xB3BC7 jz      short loc_B3BDA
//   0xB3BC9 lea     rdi, [rax+8]
//   0xB3BCD call    sub_332C60
//   0xB3BD2 test    al, al
//   0xB3BD4 jnz     def_B322D; jumptable 00000000000B322D default case, cases 0,3,6-8,15-18,20-22,25-28,31-33,36-38,41,43,44,47-49,52,53,57,58
//   0xB3BDA mov     esi, [r13+3Ch]
//   0xB3BDE mov     r9d, 1
//   0xB3BE4 xor     r8d, r8d
//   0xB3BE7 xor     ecx, ecx
//   0xB3BE9 mov     rdx, r15
//   0xB3BEC mov     rdi, rbx
//   0xB3BEF call    sub_1245A0
//   0xB3BF4 mov     r12, rax
//   0xB3BF7 test    rax, rax
//   0xB3BFA jz      def_B322D; jumptable 00000000000B322D default case, cases 0,3,6-8,15-18,20-22,25-28,31-33,36-38,41,43,44,47-49,52,53,57,58
//   0xB3C00 cmp     dword ptr [rax], 3Bh ; ';'
//   0xB3C03 jnz     def_B322D; jumptable 00000000000B322D default case, cases 0,3,6-8,15-18,20-22,25-28,31-33,36-38,41,43,44,47-49,52,53,57,58
//   0xB3C09 mov     eax, [r13+54h]
//   0xB3C0D cmp     [r12+24h], eax
//   0xB3C12 jnz     def_B322D; jumptable 00000000000B322D default case, cases 0,3,6-8,15-18,20-22,25-28,31-33,36-38,41,43,44,47-49,52,53,57,58
//   0xB3C18 mov     rsi, [r15+18h]
//   0xB3C1C mov     rdi, [rbx+40h]
//   0xB3C20 lea     r14, [r12+20h]
//   0xB3C25 call    sub_A2020
//   0xB3C2A mov     rsi, rax
//   0xB3C2D xor     edx, edx
//   0xB3C2F mov     rdi, r14
//   0xB3C32 call    sub_A1D90
//   0xB3C37 test    al, al
//   0xB3C39 jz      def_B322D; jumptable 00000000000B322D default case, cases 0,3,6-8,15-18,20-22,25-28,31-33,36-38,41,43,44,47-49,52,53,57,58
//   0xB3C3F mov     rdi, [r15+28h]
//   0xB3C43 call    _get_func
//   0xB3C48 test    rax, rax
//   0xB3C4B jz      short loc_B3C83
//   0xB3C4D test    byte ptr [rax+10h], 2
//   0xB3C51 jz      short loc_B3C83
//   0xB3C53 mov     esi, [r13+3Ch]
//   0xB3C57 mov     r9d, 1
//   0xB3C5D xor     r8d, r8d
//   0xB3C60 xor     ecx, ecx
//   0xB3C62 mov     rdx, r12
//   0xB3C65 mov     rdi, rbx
//   0xB3C68 call    sub_1245A0
//   0xB3C6D mov     rsi, rax
//   0xB3C70 mov     rdi, r13
//   0xB3C73 mov     r14, rax
//   0xB3C76 call    sub_A2060
//   0xB3C7B test    al, al
//   0xB3C7D jnz     loc_B4A74
//   0xB3C83 mov     rdi, r12
//   0xB3C86 call    sub_11CFE0
//   0xB3C8B mov     eax, [rbx+18h]
//   0xB3C8E mov     r14d, 4
//   0xB3C94 and     ah, 0FDh
//   0xB3C97 or      al, 80h
//   0xB3C99 mov     [rbx+18h], eax
//   0xB3C9C mov     dword ptr [r15], 38h ; '8'
//   0xB3CA3 jmp     loc_B35E0
//   0xB3CA8 align 10h
//   0xB3CB0 cmp     byte ptr [r15+20h], 1; jumptable 00000000000B322D case 59
//   0xB3CB5 jnz     def_B322D; jumptable 00000000000B322D default case, cases 0,3,6-8,15-18,20-22,25-28,31-33,36-38,41,43,44,47-49,52,53,57,58
//   0xB3CBB mov     rdi, [r15+10h]
//   0xB3CBF call    sub_122470
//   0xB3CC4 mov     r12, rax
//   0xB3CC7 test    rax, rax
//   0xB3CCA jz      def_B322D; jumptable 00000000000B322D default case, cases 0,3,6-8,15-18,20-22,25-28,31-33,36-38,41,43,44,47-49,52,53,57,58
//   0xB3CD0 cmp     dword ptr [rax], 4
//   0xB3CD3 jnz     def_B322D; jumptable 00000000000B322D default case, cases 0,3,6-8,15-18,20-22,25-28,31-33,36-38,41,43,44,47-49,52,53,57,58
//   0xB3CD9 movzx   eax, byte ptr [rax+20h]
//   0xB3CDD cmp     al, 2
//   0xB3CDF jz      short loc_B3CF8
//   0xB3CE1 sub     al, 1
//   0xB3CE3 jnz     def_B322D; jumptable 00000000000B322D default case, cases 0,3,6-8,15-18,20-22,25-28,31-33,36-38,41,43,44,47-49,52,53,57,58
//   0xB3CE9 mov     rax, [r15+18h]
//   0xB3CED cmp     [r12+18h], rax
//   0xB3CF2 jnz     def_B322D; jumptable 00000000000B322D default case, cases 0,3,6-8,15-18,20-22,25-28,31-33,36-38,41,43,44,47-49,52,53,57,58
//   0xB3CF8 lea     r13, [r15+20h]
//   0xB3CFC lea     rdi, [r12+40h]
//   0xB3D01 xor     edx, edx
//   0xB3D03 mov     rsi, r13
//   0xB3D06 call    sub_1255A0
//   0xB3D0B test    al, al
//   0xB3D0D jz      def_B322D; jumptable 00000000000B322D default case, cases 0,3,6-8,15-18,20-22,25-28,31-33,36-38,41,43,44,47-49,52,53,57,58
//   0xB3D13 lea     rsi, [r12+20h]
//   0xB3D18 mov     rdi, r13
//   0xB3D1B call    sub_124BC0
//   0xB3D20 mov     r14d, 9
//   0xB3D26 jmp     loc_B35E0
//   0xB3D2B align 10h
//   0xB3D30 mov     r12d, [r15+44h]; jumptable 00000000000B322D case 54
//   0xB3D34 mov     esi, [r13+3Ch]
//   0xB3D38 mov     r10, r15
//   0xB3D3B xor     r14d, r14d
//   0xB3D3E mov     r9d, 1
//   0xB3D44 xor     r8d, r8d
//   0xB3D47 xor     ecx, ecx
//   0xB3D49 mov     rdx, r10
//   0xB3D4C mov     rdi, rbx
//   0xB3D4F call    sub_1245A0
//   0xB3D54 mov     r10, rax
//   0xB3D57 test    rax, rax
//   0xB3D5A jz      def_B322D; jumptable 00000000000B322D default case, cases 0,3,6-8,15-18,20-22,25-28,31-33,36-38,41,43,44,47-49,52,53,57,58
//   0xB3D60 mov     eax, [rax]
//   0xB3D62 cmp     eax, 3Bh ; ';'
//   0xB3D65 jz      loc_B4302
//   0xB3D6B ja      loc_B4190
//   0xB3D71 cmp     eax, 0Ch
//   0xB3D74 jz      loc_B4440
//   0xB3D7A cmp     eax, 0Dh
//   0xB3D7D jnz     def_B322D; jumptable 00000000000B322D default case, cases 0,3,6-8,15-18,20-22,25-28,31-33,36-38,41,43,44,47-49,52,53,57,58
//   0xB3D83 cmp     byte ptr [r10+20h], 1
//   0xB3D88 jnz     def_B322D; jumptable 00000000000B322D default case, cases 0,3,6-8,15-18,20-22,25-28,31-33,36-38,41,43,44,47-49,52,53,57,58
//   0xB3D8E mov     esi, [r13+3Ch]
//   0xB3D92 cmp     esi, [r10+28h]
//   0xB3D96 jnz     def_B322D; jumptable 00000000000B322D default case, cases 0,3,6-8,15-18,20-22,25-28,31-33,36-38,41,43,44,47-49,52,53,57,58
//   0xB3D9C jmp     short loc_B3D3E
//   0xB3D9E align 20h
//   0xB3DA0 mov     rsi, r15; jumptable 00000000000B322D case 42
//   0xB3DA3 mov     rdi, rbx
//   0xB3DA6 call    sub_B22B0
//   0xB3DAB test    al, al
//   0xB3DAD jz      def_B322D; jumptable 00000000000B322D default case, cases 0,3,6-8,15-18,20-22,25-28,31-33,36-38,41,43,44,47-49,52,53,57,58
//   0xB3DB3 mov     r14d, 23h ; '#'
//   0xB3DB9 jmp     loc_B35E0
//   0xB3DBE align 20h
//   0xB3DC0 mov     r14d, 1Ah
//   0xB3DC6 jmp     loc_B35E0
//   0xB3DCB align 10h
//   0xB3DD0 lea     rsi, [rbp+var_110]
//   0xB3DD7 lea     rdi, [rbp+var_50]
//   0xB3DDB call    sub_318830
//   0xB3DE0 mov     rdi, [rbp+var_50]
//   0xB3DE4 test    al, al
//   0xB3DE6 jnz     loc_B350E
//   0xB3DEC test    rdi, rdi
//   0xB3DEF jz      short loc_B3DFE
//   0xB3DF1 mov     qword ptr [rbp+var_48], 0
//   0xB3DF9 call    _qfree
//   0xB3DFE mov     rdi, [rbp+var_60]
//   0xB3E02 call    _qfree
//   0xB3E07 mov     r12, [r12+10h]
//   0xB3E0C test    r12, r12
//   0xB3E0F jnz     loc_B3380
//   0xB3E15 jmp     def_B322D; jumptable 00000000000B322D default case, cases 0,3,6-8,15-18,20-22,25-28,31-33,36-38,41,43,44,47-49,52,53,57,58
//   0xB3E1A align 20h
//   0xB3E20 mov     r14d, 35h ; '5'
//   0xB3E26 jmp     loc_B35E0
//   0xB3E2B mov     r14d, 32h ; '2'
//   0xB3E31 jmp     loc_B35E0
//   0xB3E36 mov     r14d, 15h
//   0xB3E3C jmp     loc_B35E0
//   0xB3E41 mov     [rbp+var_110], r12
//   0xB3E48 movups  [rbp+var_108], xmm1
//   0xB3E4F jmp     loc_B32BE
//   0xB3E54 mov     [rbp+var_E0], r12
//   0xB3E5B movups  [rbp+var_D8], xmm1
//   0xB3E62 jmp     loc_B3352
//   0xB3E67 mov     r14d, 27h ; '''
//   0xB3E6D jmp     loc_B35E0
//   0xB3E72 mov     rdi, [r15+8]
//   0xB3E76 call    sub_1223E0
//   0xB3E7B test    rax, rax
//   0xB3E7E jz      short loc_B3E96
//   0xB3E80 mov     rdx, rax
//   0xB3E83 mov     rsi, r15
//   0xB3E86 mov     rdi, rbx
//   0xB3E89 call    sub_1893C0
//   0xB3E8E test    al, al
//   0xB3E90 jnz     loc_B46E5
//   0xB3E96 cmp     byte ptr [r15+40h], 8
//   0xB3E9B jnz     def_B322D; jumptable 00000000000B322D default case, cases 0,3,6-8,15-18,20-22,25-28,31-33,36-38,41,43,44,47-49,52,53,57,58
//   0xB3EA1 mov     rax, [r15+48h]
//   0xB3EA5 mov     eax, [rax+11Ch]
//   0xB3EAB cmp     eax, 5
//   0xB3EAE jnz     loc_B3B77
//   0xB3EB4 mov     rsi, r15
//   0xB3EB7 mov     rdi, rbx
//   0xB3EBA call    sub_1869D0
//   0xB3EBF test    al, al
//   0xB3EC1 jnz     loc_B38A3
//   0xB3EC7 cmp     byte ptr [r15+40h], 8
//   0xB3ECC jnz     def_B322D; jumptable 00000000000B322D default case, cases 0,3,6-8,15-18,20-22,25-28,31-33,36-38,41,43,44,47-49,52,53,57,58
//   0xB3ED2 mov     rax, [r15+48h]
//   0xB3ED6 mov     eax, [rax+11Ch]
//   0xB3EDC cmp     eax, 5
//   0xB3EDF jz      loc_B3B8E
//   0xB3EE5 jmp     loc_B3B85
//   0xB3EEA mov     r14d, 1Fh
//   0xB3EF0 jmp     loc_B35E0
//   0xB3EF5 mov     r14d, 25h ; '%'
//   0xB3EFB jmp     loc_B35E0
//   0xB3F00 mov     r14d, 14h
//   0xB3F06 jmp     loc_B35E0
//   0xB3F0B mov     r14d, 13h
//   0xB3F11 jmp     loc_B35E0
//   0xB3F16 mov     eax, [r15+28h]
//   0xB3F1A cmp     [r13+3Ch], eax
//   0xB3F1E jnz     loc_B3933
//   0xB3F24 lea     rax, [r15+40h]
//   0xB3F28 lea     r14, [r15+20h]
//   0xB3F2C xor     edx, edx
//   0xB3F2E mov     rsi, rax
//   0xB3F31 mov     rdi, r14
//   0xB3F34 mov     qword ptr [rbp+var_150], rax
//   0xB3F3B call    sub_1255A0
//   0xB3F40 test    al, al
//   0xB3F42 jz      loc_B3933
//   0xB3F48 cmp     byte ptr [r15+30h], 2
//   0xB3F4D jnz     loc_B3933
//   0xB3F53 lea     rdx, [rbp+var_F0]
//   0xB3F5A xor     r8d, r8d
//   0xB3F5D mov     rcx, r15
//   0xB3F60 mov     rdi, rbx
//   0xB3F63 lea     rsi, [rbp+var_120]
//   0xB3F6A call    sub_129580
//   0xB3F6F mov     r12, rax
//   0xB3F72 test    rax, rax
//   0xB3F75 jz      loc_B3933
//   0xB3F7B lea     rax, [r15+30h]
//   0xB3F7F movsxd  rsi, dword ptr [r12+44h]
//   0xB3F84 mov     edx, 1
//   0xB3F89 mov     rdi, rax
//   0xB3F8C mov     [rbp+var_140], rax
//   0xB3F93 call    sub_A1D90
//   0xB3F98 test    al, al
//   0xB3F9A jz      loc_B3933
//   0xB3FA0 mov     eax, [r12]
//   0xB3FA4 cmp     eax, 2
//   0xB3FA7 jz      loc_B4B2A
//   0xB3FAD cmp     eax, 4
//   0xB3FB0 jnz     loc_B3933
//   0xB3FB6 cmp     byte ptr [r12+20h], 4
//   0xB3FBC jnz     loc_B3933
//   0xB3FC2 mov     rax, [r12+28h]
//   0xB3FC7 cmp     dword ptr [rax], 2
//   0xB3FCA jnz     loc_B3933
//   0xB3FD0 cmp     byte ptr [rax+20h], 1
//   0xB3FD4 jnz     loc_B3933
//   0xB3FDA mov     ecx, [rax+28h]
//   0xB3FDD cmp     [r13+38h], ecx
//   0xB3FE1 jnz     loc_B3933
//   0xB3FE7 cmp     byte ptr [rax+30h], 1
//   0xB3FEB jnz     loc_B3933
//   0xB3FF1 mov     eax, [rax+38h]
//   0xB3FF4 cmp     [r13+3Ch], eax
//   0xB3FF8 jnz     loc_B3933
//   0xB3FFE lea     rdx, [rbp+var_F0]
//   0xB4005 mov     r8, r15
//   0xB4008 mov     rcx, r12
//   0xB400B mov     rdi, rbx
//   0xB400E lea     rsi, [rbp+var_120]
//   0xB4015 call    sub_AFD10
//   0xB401A test    al, al
//   0xB401C jz      loc_B3933
//   0xB4022 mov     dword ptr [r15], 3Ch ; '<'
//   0xB4029 mov     rax, [r15+18h]
//   0xB402D lea     rsi, [r12+40h]
//   0xB4032 mov     rdx, [r12+18h]
//   0xB4037 mov     rdi, qword ptr [rbp+var_150]
//   0xB403E mov     [r15+18h], rdx
//   0xB4042 mov     [r12+18h], rax
//   0xB4047 call    sub_11C450
//   0xB404C mov     rdi, r14
//   0xB404F call    sub_11C7E0
//   0xB4054 mov     rdi, [rbp+var_140]
//   0xB405B call    sub_11C7E0
//   0xB4060 mov     rdi, r12
//   0xB4063 call    sub_11CFE0
//   0xB4068 mov     eax, [rbx+18h]
//   0xB406B mov     r14d, 2
//   0xB4071 and     ah, 0FDh
//   0xB4074 or      al, 90h
//   0xB4076 mov     [rbx+18h], eax
//   0xB4079 jmp     loc_B35E0
//   0xB407E align 20h
//   0xB4080 mov     eax, [r15+38h]
//   0xB4084 cmp     [r13+38h], eax
//   0xB4088 jnz     loc_B3AC4
//   0xB408E cmp     byte ptr [r15+40h], 1
//   0xB4093 jnz     loc_B3AC4
//   0xB4099 mov     eax, [r15+48h]
//   0xB409D cmp     [r13+3Ch], eax
//   0xB40A1 jnz     loc_B3AC4
//   0xB40A7 lea     rdx, [rbp+var_F0]
//   0xB40AE xor     r8d, r8d
//   0xB40B1 mov     rcx, r15
//   0xB40B4 mov     rdi, rbx
//   0xB40B7 lea     rsi, [rbp+var_120]
//   0xB40BE call    sub_128D60
//   0xB40C3 mov     r12, rax
//   0xB40C6 test    rax, rax
//   0xB40C9 jz      loc_B3AC4
//   0xB40CF mov     rax, [r15+18h]
//   0xB40D3 cmp     [r12+18h], rax
//   0xB40D8 jnz     loc_B3AC4
//   0xB40DE cmp     dword ptr [r12], 0Dh
//   0xB40E3 jnz     loc_B3AC4
//   0xB40E9 cmp     byte ptr [r12+20h], 1
//   0xB40EF jnz     loc_B3AC4
//   0xB40F5 mov     eax, [r12+28h]
//   0xB40FA cmp     [r13+3Ch], eax
//   0xB40FE jnz     loc_B3AC4
//   0xB4104 lea     rsi, [r12+40h]
//   0xB4109 lea     rdi, [r12+20h]
//   0xB410E xor     edx, edx
//   0xB4110 call    sub_1255A0
//   0xB4115 test    al, al
//   0xB4117 jz      loc_B3AC4
//   0xB411D movsxd  rsi, dword ptr [r15+24h]
//   0xB4121 lea     rdi, [r12+30h]
//   0xB4126 mov     edx, 1
//   0xB412B call    sub_A1D90
//   0xB4130 test    al, al
//   0xB4132 jz      loc_B3AC4
//   0xB4138 lea     rdx, [rbp+var_F0]
//   0xB413F mov     r8, r15
//   0xB4142 mov     rcx, r12
//   0xB4145 mov     rdi, rbx
//   0xB4148 lea     rsi, [rbp+var_120]
//   0xB414F call    sub_AFD10
//   0xB4154 test    al, al
//   0xB4156 jz      loc_B3AC4
//   0xB415C mov     rdi, r12
//   0xB415F call    sub_11CFE0
//   0xB4164 mov     dword ptr [r15], 3Bh ; ';'
//   0xB416B lea     rdi, [r15+30h]
//   0xB416F call    sub_11C7E0
//   0xB4174 lea     rdi, [r15+40h]
//   0xB4178 call    sub_11C7E0
//   0xB417D or      dword ptr [rbx+18h], 10h
//   0xB4181 mov     r14d, 1
//   0xB4187 jmp     loc_B35E0
//   0xB418C align 10h
//   0xB4190 cmp     eax, 3Ch ; '<'
//   0xB4193 jnz     def_B322D; jumptable 00000000000B322D default case, cases 0,3,6-8,15-18,20-22,25-28,31-33,36-38,41,43,44,47-49,52,53,57,58
//   0xB4199 cmp     byte ptr [r15+40h], 1
//   0xB419E jz      loc_B46AC
//   0xB41A4 cmp     byte ptr [r15+30h], 1
//   0xB41A9 jnz     def_B322D; jumptable 00000000000B322D default case, cases 0,3,6-8,15-18,20-22,25-28,31-33,36-38,41,43,44,47-49,52,53,57,58
//   0xB41AF cmp     byte ptr [r10+40h], 1
//   0xB41B4 jnz     def_B322D; jumptable 00000000000B322D default case, cases 0,3,6-8,15-18,20-22,25-28,31-33,36-38,41,43,44,47-49,52,53,57,58
//   0xB41BA mov     eax, [r15+38h]
//   0xB41BE cmp     [r10+48h], eax
//   0xB41C2 jnz     def_B322D; jumptable 00000000000B322D default case, cases 0,3,6-8,15-18,20-22,25-28,31-33,36-38,41,43,44,47-49,52,53,57,58
//   0xB41C8 cmp     r12d, [r10+44h]
//   0xB41CC jnz     def_B322D; jumptable 00000000000B322D default case, cases 0,3,6-8,15-18,20-22,25-28,31-33,36-38,41,43,44,47-49,52,53,57,58
//   0xB41D2 mov     esi, [r13+3Ch]
//   0xB41D6 mov     r9d, 1
//   0xB41DC xor     r8d, r8d
//   0xB41DF xor     ecx, ecx
//   0xB41E1 mov     rdx, r10
//   0xB41E4 mov     rdi, rbx
//   0xB41E7 mov     qword ptr [rbp+var_150], r10
//   0xB41EE call    sub_1245A0
//   0xB41F3 mov     rdi, rax
//   0xB41F6 test    rax, rax
//   0xB41F9 jz      def_B322D; jumptable 00000000000B322D default case, cases 0,3,6-8,15-18,20-22,25-28,31-33,36-38,41,43,44,47-49,52,53,57,58
//   0xB41FF cmp     byte ptr [r15+40h], 1
//   0xB4204 mov     r10, qword ptr [rbp+var_150]
//   0xB420B jnz     def_B322D; jumptable 00000000000B322D default case, cases 0,3,6-8,15-18,20-22,25-28,31-33,36-38,41,43,44,47-49,52,53,57,58
//   0xB4211 cmp     byte ptr [rax+40h], 1
//   0xB4215 jnz     def_B322D; jumptable 00000000000B322D default case, cases 0,3,6-8,15-18,20-22,25-28,31-33,36-38,41,43,44,47-49,52,53,57,58
//   0xB421B mov     eax, [rax+48h]
//   0xB421E cmp     [r15+48h], eax
//   0xB4222 jnz     def_B322D; jumptable 00000000000B322D default case, cases 0,3,6-8,15-18,20-22,25-28,31-33,36-38,41,43,44,47-49,52,53,57,58
//   0xB4228 cmp     r12d, [rdi+44h]
//   0xB422C jnz     def_B322D; jumptable 00000000000B322D default case, cases 0,3,6-8,15-18,20-22,25-28,31-33,36-38,41,43,44,47-49,52,53,57,58
//   0xB4232 mov     [rbp+var_138], r10
//   0xB4239 call    sub_11CFE0
//   0xB423E mov     eax, [rbx+18h]
//   0xB4241 mov     r10, [rbp+var_138]
//   0xB4248 and     ah, 0FDh
//   0xB424B or      al, 80h
//   0xB424D mov     [rbx+18h], eax
//   0xB4250 mov     rdi, r10
//   0xB4253 call    sub_11CFE0
//   0xB4258 mov     eax, [rbx+18h]
//   0xB425B mov     rsi, r15
//   0xB425E mov     rdi, rbx
//   0xB4261 and     ah, 0FDh
//   0xB4264 or      al, 80h
//   0xB4266 mov     [rbx+18h], eax
//   0xB4269 call    sub_330CB0
//   0xB426E test    r14, r14
//   0xB4271 jz      short loc_B4286
//   0xB4273 mov     rdi, r14
//   0xB4276 call    sub_11CFE0
//   0xB427B mov     eax, [rbx+18h]
//   0xB427E and     ah, 0FDh
//   0xB4281 or      al, 80h
//   0xB4283 mov     [rbx+18h], eax
//   0xB4286 mov     rdi, r15
//   0xB4289 call    sub_1B5580
//   0xB428E mov     rcx, rax
//   0xB4291 mov     edx, 5
//   0xB4296 mov     rdi, rbx
//   0xB4299 xor     eax, eax
//   0xB429B lea     rsi, aCmbDS; "cmb%d: %s"
//   0xB42A2 call    sub_A1F60
//   0xB42A7 jmp     loc_B35FF
//   0xB42AC align 10h
//   0xB42B0 cmp     dword ptr [r11], 4
//   0xB42B4 jnz     loc_B3722
//   0xB42BA mov     eax, [r15+44h]
//   0xB42BE cmp     [r11+44h], eax
//   0xB42C2 jg      loc_B46F0
//   0xB42C8 cmp     eax, 4
//   0xB42CB jle     loc_B3738
//   0xB42D1 jmp     loc_B3755
//   0xB42D6 mov     r14d, 31h ; '1'
//   0xB42DC jmp     loc_B35E0
//   0xB42E1 mov     r14d, 10h
//   0xB42E7 jmp     loc_B35E0
//   0xB42EC mov     r14d, 19h
//   0xB42F2 jmp     loc_B35E0
//   0xB42F7 mov     r14d, 16h
//   0xB42FD jmp     loc_B35E0
//   0xB4302 mov     eax, [r13+54h]
//   0xB4306 cmp     [r10+24h], eax
//   0xB430A jnz     def_B322D; jumptable 00000000000B322D default case, cases 0,3,6-8,15-18,20-22,25-28,31-33,36-38,41,43,44,47-49,52,53,57,58
//   0xB4310 mov     rsi, [r15+18h]
//   0xB4314 mov     rdi, [rbx+40h]
//   0xB4318 mov     qword ptr [rbp+var_150], r10
//   0xB431F lea     r12, [r10+20h]
//   0xB4323 call    sub_A2020
//   0xB4328 mov     rsi, rax
//   0xB432B xor     edx, edx
//   0xB432D mov     rdi, r12
//   0xB4330 call    sub_A1D90
//   0xB4335 test    al, al
//   0xB4337 mov     r10, qword ptr [rbp+var_150]
//   0xB433E jz      def_B322D; jumptable 00000000000B322D default case, cases 0,3,6-8,15-18,20-22,25-28,31-33,36-38,41,43,44,47-49,52,53,57,58
//   0xB4344 mov     esi, [r13+3Ch]
//   0xB4348 mov     r9d, 1
//   0xB434E xor     r8d, r8d
//   0xB4351 xor     ecx, ecx
//   0xB4353 mov     rdx, r10
//   0xB4356 mov     rdi, rbx
//   0xB4359 mov     [rbp+var_138], r10
//   0xB4360 call    sub_1245A0
//   0xB4365 mov     rsi, rax
//   0xB4368 mov     rdi, r13
//   0xB436B mov     r14, rax
//   0xB436E call    sub_A2060
//   0xB4373 mov     r10, [rbp+var_138]
//   0xB437A test    al, al
//   0xB437C jz      short loc_B43BF
//   0xB437E mov     rdi, r14
//   0xB4381 call    sub_11CFE0
//   0xB4386 mov     eax, [rbx+18h]
//   0xB4389 mov     rdi, [rbx+40h]
//   0xB438D and     ah, 0FDh
//   0xB4390 or      al, 80h
//   0xB4392 mov     [rbx+18h], eax
//   0xB4395 mov     rsi, [r14+18h]
//   0xB4399 call    sub_1CF5F0
//   0xB439E mov     rsi, [r15+18h]
//   0xB43A2 mov     rdi, [rbx+40h]
//   0xB43A6 mov     r14, rax
//   0xB43A9 call    sub_1CF5F0
//   0xB43AE cmp     r14, rax
//   0xB43B1 mov     r10, [rbp+var_138]
//   0xB43B8 jz      short loc_B43BF
//   0xB43BA or      dword ptr [r15+4], 20h
//   0xB43BF mov     rdi, r10
//   0xB43C2 call    sub_11CFE0
//   0xB43C7 mov     eax, [rbx+18h]
//   0xB43CA lea     r12, [r15+30h]
//   0xB43CE lea     rdi, [r15+20h]
//   0xB43D2 mov     rsi, r12
//   0xB43D5 and     ah, 0FDh
//   0xB43D8 or      al, 80h
//   0xB43DA mov     [rbx+18h], eax
//   0xB43DD mov     dword ptr [r15], 39h ; '9'
//   0xB43E4 call    sub_124BC0
//   0xB43E9 lea     rax, [r15+40h]
//   0xB43ED mov     rdi, r12
//   0xB43F0 mov     rsi, rax
//   0xB43F3 mov     r14, rax
//   0xB43F6 call    sub_124BC0
//   0xB43FB mov     rdi, r14
//   0xB43FE call    sub_11C7E0
//   0xB4403 mov     rdi, r15
//   0xB4406 call    sub_1B5580
//   0xB440B mov     rcx, rax
//   0xB440E mov     edx, 6
//   0xB4413 mov     rdi, rbx
//   0xB4416 xor     eax, eax
//   0xB4418 lea     rsi, aCmbDS; "cmb%d: %s"
//   0xB441F call    sub_A1F60
//   0xB4424 mov     edx, 6
//   0xB4429 mov     rsi, r15
//   0xB442C mov     rdi, rbx
//   0xB442F call    sub_167250
//   0xB4434 jmp     loc_B35FF
//   0xB4439 align 20h
//   0xB4440 cmp     byte ptr [r10+20h], 1
//   0xB4445 jnz     def_B322D; jumptable 00000000000B322D default case, cases 0,3,6-8,15-18,20-22,25-28,31-33,36-38,41,43,44,47-49,52,53,57,58
//   0xB444B mov     eax, [r10+28h]
//   0xB444F cmp     [r13+3Ch], eax
//   0xB4453 jnz     def_B322D; jumptable 00000000000B322D default case, cases 0,3,6-8,15-18,20-22,25-28,31-33,36-38,41,43,44,47-49,52,53,57,58
//   0xB4459 lea     rsi, [r10+40h]
//   0xB445D lea     rdi, [r10+20h]
//   0xB4461 xor     edx, edx
//   0xB4463 mov     qword ptr [rbp+var_150], r10
//   0xB446A call    sub_1255A0
//   0xB446F test    al, al
//   0xB4471 mov     r10, qword ptr [rbp+var_150]
//   0xB4478 jz      short loc_B4485
//   0xB447A cmp     byte ptr [r10+30h], 2
//   0xB447F jz      loc_B497E
//   0xB4485 mov     esi, [r13+3Ch]
//   0xB4489 jmp     loc_B3D3E
//   0xB448E lea     rsi, [r15+20h]
//   0xB4492 lea     rdi, [r11+20h]
//   0xB4496 xor     edx, edx
//   0xB4498 mov     [rbp+var_158], r11
//   0xB449F call    sub_1255A0
//   0xB44A4 test    al, al
//   0xB44A6 mov     r11, [rbp+var_158]
//   0xB44AD jz      loc_B3738
//   0xB44B3 cmp     byte ptr [r15+20h], 4
//   0xB44B8 jz      loc_B4955
//   0xB44BE mov     rdi, [rbp+var_140]
//   0xB44C5 lea     rdx, [r11+40h]
//   0xB44C9 mov     rsi, r13
//   0xB44CC mov     [rbp+var_158], r11
//   0xB44D3 call    sub_126E60
//   0xB44D8 test    al, al
//   0xB44DA mov     r11, [rbp+var_158]
//   0xB44E1 jz      loc_B3738
//   0xB44E7 mov     eax, [r15+44h]
//   0xB44EB cmp     [r11+44h], eax
//   0xB44EF jl      loc_B3738
//   0xB44F5 lea     r14, [rbp+var_60]
//   0xB44F9 mov     ecx, 1
//   0xB44FE mov     rdx, r11
//   0xB4501 mov     rsi, rbx
//   0xB4504 mov     rdi, r14
//   0xB4507 mov     [rbp+var_140], r11
//   0xB450E call    sub_1240C0
//   0xB4513 mov     r11, [rbp+var_140]
//   0xB451A mov     rsi, qword ptr [rbp+var_150]
//   0xB4521 mov     rcx, r15
//   0xB4524 mov     rdi, rbx
//   0xB4527 mov     r8d, 1
//   0xB452D mov     rdx, [r11+8]
//   0xB4531 call    sub_A94E0
//   0xB4536 test    rax, rax
//   0xB4539 mov     r11, [rbp+var_140]
//   0xB4540 jz      loc_B4A1F
//   0xB4546 mov     rdi, r14
//   0xB4549 mov     [rbp+var_140], r11
//   0xB4550 call    sub_93580
//   0xB4555 mov     r11, [rbp+var_140]
//   0xB455C jmp     loc_B3738
//   0xB4561 align 8
//   0xB4568 mov     r14d, 20h ; ' '
//   0xB456E jmp     loc_B35E0
//   0xB4573 mov     r14d, 2Bh ; '+'
//   0xB4579 jmp     loc_B35E0
//   0xB457E mov     r14d, 28h ; '('
//   0xB4584 jmp     loc_B35E0
//   0xB4589 mov     r14d, 18h
//   0xB458F jmp     loc_B35E0
//   0xB4594 mov     r14d, 33h ; '3'
//   0xB459A jmp     loc_B35E0
//   0xB459F mov     r14d, 11h
//   0xB45A5 jmp     loc_B35E0
//   0xB45AA mov     dword ptr [r15], 4
//   0xB45B1 lea     rsi, [r12+20h]
//   0xB45B6 lea     rdi, [r15+20h]
//   0xB45BA call    sub_124BC0
//   0xB45BF cmp     byte ptr [r15+20h], 1
//   0xB45C4 jz      loc_B47EF
//   0xB45CA mov     rdi, r12
//   0xB45CD call    sub_11CFE0
//   0xB45D2 mov     eax, [rbx+18h]
//   0xB45D5 mov     rdi, r15
//   0xB45D8 and     ah, 0FDh
//   0xB45DB or      al, 80h
//   0xB45DD mov     [rbx+18h], eax
//   0xB45E0 call    sub_1B5580
//   0xB45E5 mov     rcx, rax
//   0xB45E8 mov     edx, 3
//   0xB45ED mov     rdi, rbx
//   0xB45F0 xor     eax, eax
//   0xB45F2 lea     rsi, aCmbDS; "cmb%d: %s"
//   0xB45F9 call    sub_A1F60
//   0xB45FE mov     edx, 6
//   0xB4603 mov     rsi, r15
//   0xB4606 mov     rdi, rbx
//   0xB4609 call    sub_167250
//   0xB460E mov     rdi, [rbp+var_50]
//   0xB4612 test    rdi, rdi
//   0xB4615 jz      short loc_B4622
//   0xB4617 xor     eax, eax
//   0xB4619 mov     qword ptr [rbp+var_48], rax
//   0xB461D call    _qfree
//   0xB4622 mov     rdi, [rbp+var_60]
//   0xB4626 call    _qfree
//   0xB462B mov     rdi, [rbp+var_80]
//   0xB462F test    rdi, rdi
//   0xB4632 jz      short loc_B463F
//   0xB4634 xor     eax, eax
//   0xB4636 mov     qword ptr [rbp+var_78], rax
//   0xB463A call    _qfree
//   0xB463F mov     rdi, [rbp+var_90]
//   0xB4646 call    _qfree
//   0xB464B jmp     loc_B35FF
//   0xB4650 mov     rdi, [rbp+var_80]
//   0xB4654 test    rdi, rdi
//   0xB4657 jz      short loc_B4664
//   0xB4659 xor     eax, eax
//   0xB465B mov     qword ptr [rbp+var_78], rax
//   0xB465F call    _qfree
//   0xB4664 mov     rdi, [rbp+var_90]
//   0xB466B call    _qfree
//   0xB4670 jmp     def_B322D; jumptable 00000000000B322D default case, cases 0,3,6-8,15-18,20-22,25-28,31-33,36-38,41,43,44,47-49,52,53,57,58
//   0xB4675 mov     r14d, 2Ch ; ','
//   0xB467B mov     rdi, r12
//   0xB467E call    sub_93580
//   0xB4683 mov     rdi, qword ptr [rbp+var_150]
//   0xB468A call    sub_93580
//   0xB468F jmp     loc_B35E0
//   0xB4694 mov     r14d, 17h
//   0xB469A jmp     loc_B35E0
//   0xB469F mov     rdi, r12
//   0xB46A2 call    sub_11C7E0
//   0xB46A7 jmp     loc_B3556
//   0xB46AC cmp     byte ptr [r10+40h], 1
//   0xB46B1 jnz     def_B322D; jumptable 00000000000B322D default case, cases 0,3,6-8,15-18,20-22,25-28,31-33,36-38,41,43,44,47-49,52,53,57,58
//   0xB46B7 mov     eax, [r10+48h]
//   0xB46BB cmp     [r15+48h], eax
//   0xB46BF jz      loc_B48C0
//   0xB46C5 cmp     byte ptr [r15+30h], 1
//   0xB46CA jnz     def_B322D; jumptable 00000000000B322D default case, cases 0,3,6-8,15-18,20-22,25-28,31-33,36-38,41,43,44,47-49,52,53,57,58
//   0xB46D0 jmp     loc_B41BA
//   0xB46D5 mov     r14d, 1Eh
//   0xB46DB jmp     loc_B35E0
//   0xB46E0 call    ___stack_chk_fail
//   0xB46E5 mov     r14d, 1Bh
//   0xB46EB jmp     loc_B35E0
//   0xB46F0 mov     rsi, qword ptr [rbp+var_150]
//   0xB46F7 mov     rdi, r12
//   0xB46FA mov     [rbp+var_158], r11
//   0xB4701 call    sub_A1D50
//   0xB4706 test    al, al
//   0xB4708 mov     r11, [rbp+var_158]
//   0xB470F jz      loc_B3722
//   0xB4715 mov     rax, [rbx+1E0h]
//   0xB471C xor     edx, edx
//   0xB471E mov     rdi, r15
//   0xB4721 mov     rsi, [rax+70h]
//   0xB4725 call    sub_11FFE0
//   0xB472A test    al, al
//   0xB472C mov     r11, [rbp+var_158]
//   0xB4733 jnz     loc_B3722
//   0xB4739 mov     rdx, [r11+8]
//   0xB473D mov     r8d, 1
//   0xB4743 mov     rcx, r15
//   0xB4746 mov     rdi, rbx
//   0xB4749 mov     rsi, qword ptr [rbp+var_150]
//   0xB4750 call    sub_A94E0
//   0xB4755 test    rax, rax
//   0xB4758 mov     r11, [rbp+var_158]
//   0xB475F jnz     loc_B3722
//   0xB4765 mov     rax, [rbx+1E0h]
//   0xB476C mov     r9, r15
//   0xB476F mov     rcx, r11
//   0xB4772 mov     rdx, rbx
//   0xB4775 lea     rsi, [rbp+var_128]
//   0xB477C lea     r8, [r11+40h]
//   0xB4780 mov     rdi, [rax+70h]
//   0xB4784 push    r10
//   0xB4786 push    [rbp+var_140]
//   0xB478C call    sub_12F9B0
//   0xB4791 test    al, al
//   0xB4793 pop     r8
//   0xB4795 mov     r11, [rbp+var_158]
//   0xB479C pop     r9
//   0xB479E jz      loc_B3722
//   0xB47A4 lea     r14, [rbp+var_60]
//   0xB47A8 lea     rsi, [r11+20h]
//   0xB47AC mov     rdi, r14
//   0xB47AF call    sub_123480
//   0xB47B4 mov     rax, [rbp+var_128]
//   0xB47BB mov     r11, [rbp+var_158]
//   0xB47C2 test    rax, rax
//   0xB47C5 js      short loc_B47D4
//   0xB47C7 movsxd  rdx, dword ptr [rbp+var_60+4]
//   0xB47CB cmp     rax, rdx
//   0xB47CE jl      loc_B4990
//   0xB47D4 mov     rdi, r14
//   0xB47D7 mov     [rbp+var_158], r11
//   0xB47DE call    sub_11C7E0
//   0xB47E3 mov     r11, [rbp+var_158]
//   0xB47EA jmp     loc_B3722
//   0xB47EF mov     eax, [r15+28h]
//   0xB47F3 cmp     [r13+3Ch], eax
//   0xB47F7 jnz     loc_B45CA
//   0xB47FD mov     rax, [r12+18h]
//   0xB4802 mov     [r15+18h], rax
//   0xB4806 jmp     loc_B45CA
//   0xB480B lea     rdi, [rax+20h]
//   0xB480F xor     edx, edx
//   0xB4811 xor     esi, esi
//   0xB4813 call    sub_A1D90
//   0xB4818 test    al, al
//   0xB481A jz      loc_B387B
//   0xB4820 mov     eax, [r15+4]
//   0xB4824 mov     rcx, [rbp+var_140]
//   0xB482B sar     eax, 8
//   0xB482E mov     edx, [rcx+44h]
//   0xB4831 and     eax, 7
//   0xB4834 jz      short loc_B4848
//   0xB4836 lea     ecx, [rax-1]
//   0xB4839 mov     eax, 1
//   0xB483E shl     eax, cl
//   0xB4840 cmp     eax, edx
//   0xB4842 jl      loc_B387B
//   0xB4848 cmp     [r15+44h], edx
//   0xB484C jge     loc_B387B
//   0xB4852 xor     eax, eax
//   0xB4854 pxor    xmm0, xmm0
//   0xB4858 xor     ecx, ecx
//   0xB485A mov     rsi, r14
//   0xB485D mov     [rbp+var_60], rax
//   0xB4861 mov     rdi, rbx
//   0xB4864 mov     [rbp+var_58], rax
//   0xB4868 mov     [rbp+var_50], rax
//   0xB486C mov     rax, [rbp+var_140]
//   0xB4873 movups  [rbp+var_48], xmm0
//   0xB4877 add     rax, 40h ; '@'
//   0xB487B mov     rdx, rax
//   0xB487E mov     [rbp+var_158], rax
//   0xB4885 call    sub_127A20
//   0xB488A mov     rcx, [r15+8]
//   0xB488E mov     r8d, 1
//   0xB4894 mov     rsi, r14
//   0xB4897 mov     rdi, rbx
//   0xB489A mov     rax, [rbp+var_140]
//   0xB48A1 mov     rdx, [rax+8]
//   0xB48A5 call    sub_A97D0
//   0xB48AA test    rax, rax
//   0xB48AD jz      loc_B4AB7
//   0xB48B3 mov     rdi, r14
//   0xB48B6 call    sub_93580
//   0xB48BB jmp     loc_B387B
//   0xB48C0 cmp     r12d, [r10+44h]
//   0xB48C4 jnz     loc_B46C5
//   0xB48CA mov     rsi, [r15+18h]
//   0xB48CE mov     rdi, [rbx+40h]
//   0xB48D2 lea     rax, [r15+30h]
//   0xB48D6 mov     qword ptr [rbp+var_150], r10
//   0xB48DD mov     [rbp+var_140], rax
//   0xB48E4 call    sub_3312A0
//   0xB48E9 mov     rdi, rax
//   0xB48EC call    _getseg
//   0xB48F1 mov     rsi, [rax+30h]
//   0xB48F5 xor     edx, edx
//   0xB48F7 lea     rdi, [r15+30h]
//   0xB48FB call    sub_A1D90
//   0xB4900 test    al, al
//   0xB4902 mov     r10, qword ptr [rbp+var_150]
//   0xB4909 jnz     short loc_B4924
//   0xB490B cmp     byte ptr [r15+30h], 1
//   0xB4910 jnz     def_B322D; jumptable 00000000000B322D default case, cases 0,3,6-8,15-18,20-22,25-28,31-33,36-38,41,43,44,47-49,52,53,57,58
//   0xB4916 mov     eax, [r15+38h]
//   0xB491A cmp     [r13+40h], eax
//   0xB491E jnz     loc_B41AF
//   0xB4924 mov     rdx, [r15+10h]
//   0xB4928 mov     esi, [r15+48h]
//   0xB492C xor     r8d, r8d
//   0xB492F xor     ecx, ecx
//   0xB4931 mov     rdi, rbx
//   0xB4934 mov     qword ptr [rbp+var_150], r10
//   0xB493B call    sub_128A50
//   0xB4940 mov     r10, qword ptr [rbp+var_150]
//   0xB4947 cmp     r10, rax
//   0xB494A jnz     loc_B41A4
//   0xB4950 jmp     loc_B4250
//   0xB4955 mov     rdi, [r15+28h]
//   0xB4959 xor     edx, edx
//   0xB495B mov     rsi, r13
//   0xB495E mov     [rbp+var_158], r11
//   0xB4965 call    sub_11FFE0
//   0xB496A test    al, al
//   0xB496C mov     r11, [rbp+var_158]
//   0xB4973 jnz     loc_B3738
//   0xB4979 jmp     loc_B44BE
//   0xB497E cmp     [r10+24h], r12d
//   0xB4982 jnz     loc_B4485
//   0xB4988 mov     r14, r10
//   0xB498B jmp     loc_B4485
//   0xB4990 mov     rdx, [rbx+1E0h]
//   0xB4997 mov     rdi, r14
//   0xB499A mov     [rbp+var_158], r11
//   0xB49A1 mov     rsi, [rdx+70h]
//   0xB49A5 mov     edx, eax
//   0xB49A7 call    sub_126950
//   0xB49AC test    al, al
//   0xB49AE mov     r11, [rbp+var_158]
//   0xB49B5 jz      loc_B47D4
//   0xB49BB lea     rsi, [r15+20h]
//   0xB49BF xor     edx, edx
//   0xB49C1 mov     rdi, r14
//   0xB49C4 call    sub_1255A0
//   0xB49C9 test    al, al
//   0xB49CB mov     r11, [rbp+var_158]
//   0xB49D2 jz      loc_B47D4
//   0xB49D8 mov     rdx, [r11+8]
//   0xB49DC mov     rcx, r15
//   0xB49DF mov     rsi, r14
//   0xB49E2 mov     rdi, rbx
//   0xB49E5 call    sub_A96F0
//   0xB49EA test    al, al
//   0xB49EC mov     r11, [rbp+var_158]
//   0xB49F3 jnz     loc_B47D4
//   0xB49F9 mov     rdi, r15
//   0xB49FC call    sub_11CFE0
//   0xB4A01 mov     eax, [rbx+18h]
//   0xB4A04 mov     rdi, r14
//   0xB4A07 mov     r14d, 6
//   0xB4A0D and     ah, 0FDh
//   0xB4A10 or      al, 80h
//   0xB4A12 mov     [rbx+18h], eax
//   0xB4A15 call    sub_11C7E0
//   0xB4A1A jmp     loc_B467B
//   0xB4A1F mov     rdx, [r11+8]
//   0xB4A23 mov     r8d, 1
//   0xB4A29 mov     rcx, r15
//   0xB4A2C mov     rsi, r14
//   0xB4A2F mov     rdi, rbx
//   0xB4A32 mov     [rbp+var_140], r11
//   0xB4A39 call    sub_A94E0
//   0xB4A3E test    rax, rax
//   0xB4A41 mov     r11, [rbp+var_140]
//   0xB4A48 jnz     loc_B4546
//   0xB4A4E mov     rdi, r15
//   0xB4A51 call    sub_11CFE0
//   0xB4A56 mov     eax, [rbx+18h]
//   0xB4A59 mov     rdi, r14
//   0xB4A5C mov     r14d, 8
//   0xB4A62 and     ah, 0FDh
//   0xB4A65 or      al, 80h
//   0xB4A67 mov     [rbx+18h], eax
//   0xB4A6A call    sub_93580
//   0xB4A6F jmp     loc_B467B
//   0xB4A74 mov     rdi, r14
//   0xB4A77 call    sub_11CFE0
//   0xB4A7C mov     eax, [rbx+18h]
//   0xB4A7F mov     rdi, [rbx+40h]
//   0xB4A83 and     ah, 0FDh
//   0xB4A86 or      al, 80h
//   0xB4A88 mov     [rbx+18h], eax
//   0xB4A8B mov     rsi, [r14+18h]
//   0xB4A8F call    sub_1CF5F0
//   0xB4A94 mov     rsi, [r15+18h]
//   0xB4A98 mov     rdi, [rbx+40h]
//   0xB4A9C mov     r14, rax
//   0xB4A9F call    sub_1CF5F0
//   0xB4AA4 cmp     r14, rax
//   0xB4AA7 jz      loc_B3C83
//   0xB4AAD or      dword ptr [r15+4], 20h
//   0xB4AB2 jmp     loc_B3C83
//   0xB4AB7 mov     rdx, [rbp+var_158]
//   0xB4ABE mov     rdi, qword ptr [rbp+var_150]
//   0xB4AC5 mov     rsi, r13
//   0xB4AC8 call    sub_126E60
//   0xB4ACD test    al, al
//   0xB4ACF jz      loc_B48B3
//   0xB4AD5 mov     rsi, [rbp+var_158]
//   0xB4ADC mov     rdi, qword ptr [rbp+var_150]
//   0xB4AE3 call    sub_124BC0
//   0xB4AE8 mov     rax, [rbp+var_140]
//   0xB4AEF mov     dword ptr [r15], 9
//   0xB4AF6 test    byte ptr [rax+4], 80h
//   0xB4AFA jnz     short loc_B4B0F
//   0xB4AFC mov     rdi, rax
//   0xB4AFF call    sub_11CFE0
//   0xB4B04 mov     eax, [rbx+18h]
//   0xB4B07 and     ah, 0FDh
//   0xB4B0A or      al, 80h
//   0xB4B0C mov     [rbx+18h], eax
//   0xB4B0F mov     rdi, r14
//   0xB4B12 mov     r14d, 7
//   0xB4B18 call    sub_93580
//   0xB4B1D mov     rdi, r12
//   0xB4B20 call    sub_11C7E0
//   0xB4B25 jmp     loc_B35E0
//   0xB4B2A cmp     byte ptr [r12+20h], 1
//   0xB4B30 jnz     loc_B3933
//   0xB4B36 mov     eax, [r12+28h]
//   0xB4B3B cmp     [r13+38h], eax
//   0xB4B3F jnz     loc_B3933
//   0xB4B45 cmp     byte ptr [r12+30h], 1
//   0xB4B4B jnz     loc_B3933
//   0xB4B51 mov     eax, [r12+38h]
//   0xB4B56 cmp     [r13+3Ch], eax
//   0xB4B5A jnz     loc_B3933
//   0xB4B60 jmp     loc_B3FFE
//   0xB4B65 mov     rbx, rax
//   0xB4B68 jmp     loc_3351A
//   0xB4B6D mov     rbx, rax
//   0xB4B70 jmp     loc_33551
//   0xB4B75 mov     rbx, rax
//   0xB4B78 jmp     loc_33560
//   0xB4B7D mov     rbx, rax
//   0xB4B80 jmp     loc_3356A
//   0xB4B85 mov     rbx, rax
//   0xB4B88 jmp     loc_33578
//   0xB4B8D mov     rbx, rax
//   0xB4B90 jmp     loc_3358A
//   0xB4B95 mov     rbx, rax
//   0xB4B98 jmp     loc_335B3
//   0xB4B9D mov     rbx, rax
//   0xB4BA0 jmp     loc_33592
//   0xB4BA5 mov     rbx, rax
//   0xB4BA8 jmp     loc_335C4
//   0xB4BAD mov     rbx, rax
//   0xB4BB0 jmp     loc_33580
//   0xB4BB5 mov     rbx, rax
//   0xB4BB8 jmp     loc_335AB
//   0xB4BBD mov     rbx, rax
//   0xB4BC0 jmp     loc_33522
// ============================================================

void sub_B3110(/* signature unknown */)
{
    // see disassembly above
}

