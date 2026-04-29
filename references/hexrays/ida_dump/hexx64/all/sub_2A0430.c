// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x2A0430
// Name:           sub_2A0430
// Function size:  1018 bytes (233 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x2A0430 push    r13
//   0x2A0432 push    r12
//   0x2A0434 push    rbp
//   0x2A0435 push    rbx
//   0x2A0436 sub     rsp, 68h
//   0x2A043A mov     eax, [rdi]
//   0x2A043C mov     rbx, fs:28h
//   0x2A0445 mov     [rsp+88h+var_30], rbx
//   0x2A044A mov     rbx, rdi
//   0x2A044D mov     [rsp+88h+var_70], 0
//   0x2A0456 cmp     eax, 1
//   0x2A0459 jz      loc_2A04F0
//   0x2A045F cmp     eax, 6
//   0x2A0462 jnz     short loc_2A04E0
//   0x2A0464 mov     rax, [rbx+8]
//   0x2A0468 mov     rbp, rsi
//   0x2A046B mov     esi, 2
//   0x2A0470 lea     r12, [rsp+88h+var_70]
//   0x2A0475 mov     rdi, [rax+30h]
//   0x2A0479 call    _get_tinfo_property
//   0x2A047E and     eax, 0Fh
//   0x2A0481 cmp     al, 0Ah
//   0x2A0483 jz      loc_2A0590
//   0x2A0489 xor     ebx, ebx
//   0x2A048B mov     rdi, r12
//   0x2A048E call    _clear_tinfo_t
//   0x2A0493 mov     rax, [rsp+88h+var_30]
//   0x2A0498 sub     rax, fs:28h
//   0x2A04A1 jnz     loc_2A07B1
//   0x2A04A7 add     rsp, 68h
//   0x2A04AB mov     eax, ebx
//   0x2A04AD pop     rbx
//   0x2A04AE pop     rbp
//   0x2A04AF pop     r12
//   0x2A04B1 pop     r13
//   0x2A04B3 retn
//   0x2A04B4 align 8
//   0x2A04B8 lea     rsi, aGccVaList+4; s2
//   0x2A04BF mov     rdi, r12; s1
//   0x2A04C2 call    _strcmp
//   0x2A04C7 test    r12, r12
//   0x2A04CA jnz     loc_2A0793
//   0x2A04D0 test    eax, eax
//   0x2A04D2 jnz     loc_2A0749
//   0x2A04D8 nop     dword ptr [rax+rax+00000000h]
//   0x2A04E0 lea     r12, [rsp+88h+var_70]
//   0x2A04E5 jmp     short loc_2A0489
//   0x2A04E7 align 10h
//   0x2A04F0 mov     rdi, [rbx+8]
//   0x2A04F4 mov     esi, 2
//   0x2A04F9 lea     r12, [rsp+88h+var_70]
//   0x2A04FE call    _get_tinfo_property
//   0x2A0503 and     eax, 0Fh
//   0x2A0506 cmp     al, 0Ah
//   0x2A0508 jnz     loc_2A0489
//   0x2A050E mov     rdi, [rbx+8]
//   0x2A0512 pxor    xmm0, xmm0
//   0x2A0516 lea     rbp, [rsp+88h+s1]
//   0x2A051B mov     [rsp+88h+s1], 0
//   0x2A0524 movups  [rsp+88h+var_60], xmm0
//   0x2A0529 test    edi, 100h
//   0x2A052F jnz     loc_2A06F8
//   0x2A0535 mov     [rsp+88h+s1], 0
//   0x2A053E mov     esi, 0Ah
//   0x2A0543 call    _get_tinfo_property
//   0x2A0548 lea     r12, [rsp+88h+var_70]
//   0x2A054D mov     rsi, rbp
//   0x2A0550 mov     [rsp+88h+s1], rax
//   0x2A0555 mov     rdi, r12
//   0x2A0558 call    _copy_tinfo_t
//   0x2A055D mov     rdi, rbp
//   0x2A0560 call    _clear_tinfo_t
//   0x2A0565 mov     rdi, r12
//   0x2A0568 call    sub_32DA30
//   0x2A056D test    al, al
//   0x2A056F jnz     loc_2A0489
//   0x2A0575 mov     rax, [rbx+8]
//   0x2A0579 mov     rdx, [rsp+88h+var_70]
//   0x2A057E mov     [rsp+88h+var_70], rax
//   0x2A0583 mov     [rbx+8], rdx
//   0x2A0587 jmp     loc_2A0670
//   0x2A058C align 10h
//   0x2A0590 mov     rsi, [rbx+8]
//   0x2A0594 pxor    xmm0, xmm0
//   0x2A0598 mov     [rsp+88h+s1], 0
//   0x2A05A1 movups  [rsp+88h+var_60], xmm0
//   0x2A05A6 mov     rax, [rsi+30h]
//   0x2A05AA test    ah, 1
//   0x2A05AD jnz     loc_2A0690
//   0x2A05B3 cmp     dword ptr [rsi+8], 34h ; '4'
//   0x2A05B7 jz      loc_2A0680
//   0x2A05BD lea     rdi, [rbp+10h]
//   0x2A05C1 lea     r12, [rsp+88h+var_70]
//   0x2A05C6 call    sub_256D70
//   0x2A05CB test    rax, rax
//   0x2A05CE jz      loc_2A07B6
//   0x2A05D4 cmp     dword ptr [rax+8], 33h ; '3'
//   0x2A05D8 jz      loc_2A0684
//   0x2A05DE mov     rax, [rbx+8]
//   0x2A05E2 mov     esi, 0Ah
//   0x2A05E7 mov     [rsp+88h+s1], 0
//   0x2A05F0 mov     rdi, [rax+30h]
//   0x2A05F4 call    _get_tinfo_property
//   0x2A05F9 lea     rbp, [rsp+88h+s1]
//   0x2A05FE lea     r12, [rsp+88h+var_70]
//   0x2A0603 mov     [rsp+88h+s1], rax
//   0x2A0608 mov     rsi, rbp
//   0x2A060B mov     rdi, r12
//   0x2A060E call    _copy_tinfo_t
//   0x2A0613 mov     rdi, rbp
//   0x2A0616 call    _clear_tinfo_t
//   0x2A061B mov     rdi, r12
//   0x2A061E call    sub_32DA30
//   0x2A0623 test    al, al
//   0x2A0625 jnz     loc_2A0489
//   0x2A062B mov     eax, [rbx+4]
//   0x2A062E lea     rdi, [rsp+88h+var_40]
//   0x2A0633 mov     rsi, r12
//   0x2A0636 mov     [rsp+88h+var_48], 1
//   0x2A063E mov     [rsp+88h+var_40], 0
//   0x2A0647 and     eax, 4
//   0x2A064A mov     [rsp+88h+var_44], eax
//   0x2A064E call    _copy_tinfo_t
//   0x2A0653 lea     rbp, [rsp+88h+var_48]
//   0x2A0658 mov     rdi, rbx
//   0x2A065B mov     rsi, rbp
//   0x2A065E call    sub_29F770
//   0x2A0663 mov     rdi, rbp
//   0x2A0666 call    sub_29EC30
//   0x2A066B nop     dword ptr [rax+rax+00h]
//   0x2A0670 mov     ebx, 1
//   0x2A0675 jmp     loc_2A048B
//   0x2A067A align 20h
//   0x2A0680 mov     rax, [rsi+18h]
//   0x2A0684 mov     [rbx+8], rax
//   0x2A0688 lea     r12, [rsp+88h+var_70]
//   0x2A068D jmp     short loc_2A0670
//   0x2A068F align 10h
//   0x2A0690 lea     rdi, [rsp+88h+s1]
//   0x2A0695 xor     edx, edx
//   0x2A0697 mov     rsi, rax
//   0x2A069A call    _get_tinfo_pdata
//   0x2A069F mov     r12, [rsp+88h+s1]
//   0x2A06A4 test    rax, rax
//   0x2A06A7 jnz     short loc_2A06D0
//   0x2A06A9 test    r12, r12
//   0x2A06AC jz      short loc_2A06E9
//   0x2A06AE mov     qword ptr [rsp+88h+var_60], 0
//   0x2A06B7 mov     rdi, r12
//   0x2A06BA call    _qfree
//   0x2A06BF mov     rsi, [rbx+8]
//   0x2A06C3 jmp     loc_2A05B3
//   0x2A06C8 align 10h
//   0x2A06D0 cmp     qword ptr [rsp+88h+var_60], 0
//   0x2A06D6 jnz     loc_2A0758
//   0x2A06DC test    r12, r12
//   0x2A06DF jz      short loc_2A06E9
//   0x2A06E1 mov     rdi, r12
//   0x2A06E4 call    _qfree
//   0x2A06E9 mov     rsi, [rbx+8]
//   0x2A06ED jmp     loc_2A05B3
//   0x2A06F2 align 8
//   0x2A06F8 mov     rsi, rdi
//   0x2A06FB xor     edx, edx
//   0x2A06FD mov     rdi, rbp
//   0x2A0700 call    _get_tinfo_pdata
//   0x2A0705 mov     r12, [rsp+88h+s1]
//   0x2A070A test    rax, rax
//   0x2A070D jnz     short loc_2A0730
//   0x2A070F test    r12, r12
//   0x2A0712 jz      short loc_2A0749
//   0x2A0714 mov     qword ptr [rsp+88h+var_60], 0
//   0x2A071D mov     rdi, r12
//   0x2A0720 call    _qfree
//   0x2A0725 mov     rdi, [rbx+8]
//   0x2A0729 jmp     loc_2A0535
//   0x2A072E align 10h
//   0x2A0730 cmp     qword ptr [rsp+88h+var_60], 0
//   0x2A0736 jnz     loc_2A04B8
//   0x2A073C test    r12, r12
//   0x2A073F jz      short loc_2A0749
//   0x2A0741 mov     rdi, r12
//   0x2A0744 call    _qfree
//   0x2A0749 mov     rdi, [rbx+8]
//   0x2A074D jmp     loc_2A0535
//   0x2A0752 align 8
//   0x2A0758 lea     rsi, aGccVaList+4; s2
//   0x2A075F mov     rdi, r12; s1
//   0x2A0762 call    _strcmp
//   0x2A0767 mov     r13d, eax
//   0x2A076A test    r12, r12
//   0x2A076D jnz     short loc_2A0780
//   0x2A076F test    r13d, r13d
//   0x2A0772 jz      loc_2A04E0
//   0x2A0778 jmp     loc_2A06E9
//   0x2A077D align 20h
//   0x2A0780 mov     qword ptr [rsp+88h+var_60], 0
//   0x2A0789 mov     rdi, r12
//   0x2A078C call    _qfree
//   0x2A0791 jmp     short loc_2A076F
//   0x2A0793 mov     rdi, r12
//   0x2A0796 mov     [rsp+88h+var_7C], eax
//   0x2A079A mov     qword ptr [rsp+88h+var_60], 0
//   0x2A07A3 call    _qfree
//   0x2A07A8 mov     eax, [rsp+88h+var_7C]
//   0x2A07AC jmp     loc_2A04D0
//   0x2A07B1 call    ___stack_chk_fail
//   0x2A07B6 mov     rax, cs:under_debugger_ptr
//   0x2A07BD cmp     byte ptr [rax], 0
//   0x2A07C0 jnz     loc_4E35C
//   0x2A07C6 mov     rax, [rsp+88h+var_30]
//   0x2A07CB sub     rax, fs:28h
//   0x2A07D4 jnz     short loc_2A07E5
//   0x2A07D6 mov     edi, 0C528h
//   0x2A07DB lea     r12, [rsp+88h+var_70]
//   0x2A07E0 call    sub_383060
//   0x2A07E5 call    ___stack_chk_fail
//   0x2A07EA mov     rbx, rax
//   0x2A07ED jmp     loc_4E36D
//   0x2A07F2 mov     rbx, rax
//   0x2A07F5 jmp     loc_4E38D
//   0x2A07FA mov     rbx, rax
//   0x2A07FD jmp     loc_4E39C
//   0x2A0802 mov     rbx, rax
//   0x2A0805 jmp     loc_4E35E
//   0x2A080A mov     rbx, rax
//   0x2A080D jmp     loc_4E3A6
//   0x2A0812 mov     rbx, rax
//   0x2A0815 jmp     loc_4E3BE
//   0x2A081A mov     rbx, rax
//   0x2A081D jmp     loc_4E3C8
//   0x2A0822 mov     rbx, rax
//   0x2A0825 jmp     loc_4E3E0
// ============================================================

void sub_2A0430(/* signature unknown */)
{
    // see disassembly above
}

