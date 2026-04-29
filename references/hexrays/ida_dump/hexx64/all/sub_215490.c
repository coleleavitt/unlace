// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x215490
// Name:           sub_215490
// Function size:  858 bytes (206 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x215490 push    r15
//   0x215492 push    r14
//   0x215494 push    r13
//   0x215496 push    r12
//   0x215498 push    rbp
//   0x215499 push    rbx
//   0x21549A sub     rsp, 78h
//   0x21549E mov     rax, fs:28h
//   0x2154A7 mov     [rsp+0A8h+var_40], rax
//   0x2154AC xor     eax, eax
//   0x2154AE cmp     byte ptr [rsi], 9
//   0x2154B1 jz      short loc_2154E0
//   0x2154B3 mov     rax, [rsp+0A8h+var_40]
//   0x2154B8 sub     rax, fs:28h
//   0x2154C1 jnz     loc_215630
//   0x2154C7 add     rsp, 78h
//   0x2154CB xor     eax, eax
//   0x2154CD pop     rbx
//   0x2154CE pop     rbp
//   0x2154CF pop     r12
//   0x2154D1 pop     r13
//   0x2154D3 pop     r14
//   0x2154D5 pop     r15
//   0x2154D7 retn
//   0x2154D8 align 20h
//   0x2154E0 mov     rax, [rsi+8]
//   0x2154E4 mov     r12, rdi
//   0x2154E7 mov     rbx, rsi
//   0x2154EA movsxd  rbp, dword ptr [rax+10h]
//   0x2154EE shl     rbp, 5
//   0x2154F2 add     rbp, [rdi+60h]
//   0x2154F6 mov     rax, [rbp+8]
//   0x2154FA test    cl, cl
//   0x2154FC jnz     short loc_215518
//   0x2154FE add     qword ptr [rbp+10h], 1
//   0x215503 test    rax, rax
//   0x215506 jz      short loc_215528
//   0x215508 test    byte ptr [rbx+1], 10h
//   0x21550C jz      short loc_2154B3
//   0x21550E mov     byte ptr [rbp+18h], 1
//   0x215512 jmp     short loc_2154B3
//   0x215514 align 8
//   0x215518 add     rax, 1
//   0x21551C mov     [rbp+8], rax
//   0x215520 jmp     short loc_215508
//   0x215522 align 8
//   0x215528 mov     rdx, [rsi+8]
//   0x21552C mov     rcx, [rdx]
//   0x21552F movsxd  rax, dword ptr [rdx+10h]
//   0x215533 cmp     [rcx+1B8h], rax
//   0x21553A jb      loc_21576B
//   0x215540 lea     rsi, [rax+rax*2]
//   0x215544 lea     rsi, [rax+rsi*4]
//   0x215548 mov     rax, [rcx+1B0h]
//   0x21554F lea     r13, [rax+rsi*8]
//   0x215553 mov     eax, [r13+18h]
//   0x215557 test    ah, 1
//   0x21555A jz      short loc_215508
//   0x21555C cmp     qword ptr [rdx+8], 0
//   0x215561 jnz     short loc_215508
//   0x215563 mov     edx, [r13+58h]
//   0x215567 cmp     edx, [rbx+4]
//   0x21556A jnz     short loc_215508
//   0x21556C test    eax, 2080h
//   0x215571 jnz     short loc_215508
//   0x215573 mov     rax, [rdi+20h]
//   0x215577 mov     ecx, [rax]
//   0x215579 cmp     ecx, 4
//   0x21557C jz      short loc_21558F
//   0x21557E cmp     ecx, 43h ; 'C'
//   0x215581 jnz     short loc_215508
//   0x215583 mov     edi, [rax+44h]
//   0x215586 cmp     [rax+24h], edi
//   0x215589 jnz     loc_215508
//   0x21558F lea     rcx, [rax+20h]
//   0x215593 cmp     rbx, rcx
//   0x215596 jnz     loc_215508
//   0x21559C cmp     byte ptr [rax+40h], 9
//   0x2155A0 jnz     loc_215508
//   0x2155A6 mov     rax, [rax+48h]
//   0x2155AA cmp     qword ptr [rax+8], 0
//   0x2155AF jnz     loc_215508
//   0x2155B5 test    byte ptr [rbx+1], 10h
//   0x2155B9 jnz     loc_21550E
//   0x2155BF movsxd  r9, dword ptr [rax+10h]
//   0x2155C3 mov     r8, [r12+8]
//   0x2155C8 imul    rcx, r9, 68h ; 'h'
//   0x2155CC add     rcx, [r8+1B0h]
//   0x2155D3 mov     [rsp+0A8h+var_9C], r9d
//   0x2155D8 mov     r14, rcx
//   0x2155DB cmp     edx, [rcx+58h]
//   0x2155DE jnz     loc_2154B3
//   0x2155E4 mov     rax, [r8+4E8h]
//   0x2155EB mov     r15, rax
//   0x2155EE jmp     short loc_21561E
//   0x2155F0 mov     rsi, r14
//   0x2155F3 mov     rdi, r15
//   0x2155F6 mov     [rsp+0A8h+var_90], r9
//   0x2155FB mov     [rsp+0A8h+var_98], r8
//   0x215600 call    sub_3307E0
//   0x215605 mov     r9, [rsp+0A8h+var_90]
//   0x21560A test    eax, eax
//   0x21560C jz      short loc_215635
//   0x21560E mov     r8, [rsp+0A8h+var_98]
//   0x215613 add     r15, 60h ; '`'
//   0x215617 mov     rax, [r8+4E8h]
//   0x21561E imul    rdx, [r8+4F0h], 60h ; '`'
//   0x215626 add     rax, rdx
//   0x215629 cmp     r15, rax
//   0x21562C jnz     short loc_2155F0
//   0x21562E jmp     short loc_215645
//   0x215630 call    ___stack_chk_fail
//   0x215635 test    r15, r15
//   0x215638 jz      short loc_215645
//   0x21563A test    byte ptr [r15+58h], 8
//   0x21563F jnz     loc_215508
//   0x215645 test    word ptr [r14+18h], 180h
//   0x21564C jnz     loc_215508
//   0x215652 mov     rax, [r12+60h]
//   0x215657 shl     r9, 5
//   0x21565B mov     r15, r9
//   0x21565E cmp     qword ptr [rax+r9+8], 0
//   0x215664 jnz     loc_215508
//   0x21566A mov     edx, [r13+58h]
//   0x21566E mov     rsi, [r12+8]
//   0x215673 mov     rdi, r13
//   0x215676 call    sub_1C27D0
//   0x21567B test    al, al
//   0x21567D jnz     loc_215508
//   0x215683 mov     edx, [r14+58h]
//   0x215687 mov     rsi, [r12+8]
//   0x21568C mov     rdi, r14
//   0x21568F call    sub_1C27D0
//   0x215694 test    al, al
//   0x215696 jnz     loc_215508
//   0x21569C cmp     qword ptr [r12+38h], 0
//   0x2156A2 jz      loc_2157C4
//   0x2156A8 mov     rax, [r12+10h]
//   0x2156AD movsxd  rdx, dword ptr [rax+48h]
//   0x2156B1 mov     rax, [r12+30h]
//   0x2156B6 movsxd  rax, dword ptr [rax+rdx*4]
//   0x2156BA cmp     eax, 0FFFFFFFFh
//   0x2156BD jz      loc_215758
//   0x2156C3 imul    rax, 18h
//   0x2156C7 add     rax, [r12+48h]
//   0x2156CC lea     rcx, off_4DF748
//   0x2156D3 mov     r13, [rax]
//   0x2156D6 mov     rax, [rax+8]
//   0x2156DA lea     r8, [r13+rax*4+0]
//   0x2156DF jmp     short loc_215753
//   0x2156E1 xor     edi, edi
//   0x2156E3 mov     eax, [r13+0]
//   0x2156E7 mov     rsi, [r12+20h]
//   0x2156EC mov     [rsp+0A8h+var_60], 0
//   0x2156F1 mov     [rsp+0A8h+var_80], rdi
//   0x2156F6 mov     rdx, [r12+8]
//   0x2156FB mov     [rsp+0A8h+var_78], rdi
//   0x215700 mov     [rsp+0A8h+var_70], rdi
//   0x215705 mov     [rsp+0A8h+var_68], rdi
//   0x21570A mov     edi, [rsp+0A8h+var_9C]
//   0x21570E mov     [rsp+0A8h+var_88], rcx
//   0x215713 mov     [rsp+0A8h+var_58], rsi
//   0x215718 mov     [rsp+0A8h+var_50], edi
//   0x21571C cmp     eax, [rdx+40h]
//   0x21571F jnb     short loc_215795
//   0x215721 mov     rdx, [rdx+210h]
//   0x215728 lea     rsi, [rsp+0A8h+var_88]
//   0x21572D mov     [rsp+0A8h+var_98], r8
//   0x215732 add     r13, 4
//   0x215736 mov     rdi, [rdx+rax*8]
//   0x21573A call    sub_11F5B0
//   0x21573F mov     r8, [rsp+0A8h+var_98]
//   0x215744 lea     rcx, off_4DF748
//   0x21574B test    eax, eax
//   0x21574D jnz     loc_215508
//   0x215753 cmp     r13, r8
//   0x215756 jnz     short loc_2156E1
//   0x215758 mov     rdx, [r12+20h]
//   0x21575D mov     rax, [r12+60h]
//   0x215762 mov     [rax+r15], rdx
//   0x215766 jmp     loc_215508
//   0x21576B mov     rax, cs:under_debugger_ptr
//   0x215772 cmp     byte ptr [rax], 0
//   0x215775 jnz     loc_4559A
//   0x21577B mov     rax, [rsp+0A8h+var_40]
//   0x215780 sub     rax, fs:28h
//   0x215789 jnz     short loc_2157BF
//   0x21578B mov     edi, 0C83Ah
//   0x215790 call    sub_383060
//   0x215795 mov     rax, cs:under_debugger_ptr
//   0x21579C cmp     byte ptr [rax], 0
//   0x21579F jnz     loc_4559A
//   0x2157A5 mov     rax, [rsp+0A8h+var_40]
//   0x2157AA sub     rax, fs:28h
//   0x2157B3 jnz     short loc_2157E5
//   0x2157B5 mov     edi, 0CDEFh
//   0x2157BA call    sub_383060
//   0x2157BF call    ___stack_chk_fail
//   0x2157C4 mov     rdi, [r12+8]
//   0x2157C9 call    sub_670E0
//   0x2157CE lea     rdx, [r12+48h]
//   0x2157D3 lea     rsi, [r12+30h]
//   0x2157D8 mov     rdi, rax
//   0x2157DB call    sub_3105C0
//   0x2157E0 jmp     loc_2156A8
//   0x2157E5 call    ___stack_chk_fail
// ============================================================

void sub_215490(/* signature unknown */)
{
    // see disassembly above
}

