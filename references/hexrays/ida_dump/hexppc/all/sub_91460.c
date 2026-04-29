// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x91460
// Name:           sub_91460
// Function size:  1074 bytes (245 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x91460 push    rbp
//   0x91461 mov     rbp, rsp
//   0x91464 push    r15
//   0x91466 mov     r15, rdi
//   0x91469 push    r14
//   0x9146B mov     r14, rdx
//   0x9146E push    r13
//   0x91470 push    r12
//   0x91472 mov     r12, rsi
//   0x91475 push    rbx
//   0x91476 mov     ebx, 1
//   0x9147B sub     rsp, 0B8h
//   0x91482 mov     [rbp+var_B8], rsi
//   0x91489 mov     [rbp+var_C8], rcx
//   0x91490 mov     [rbp+var_D0], r8
//   0x91497 mov     r8, fs:28h
//   0x914A0 mov     [rbp+var_38], r8
//   0x914A4 xor     r8d, r8d
//   0x914A7 call    sub_90A70
//   0x914AC mov     [rbp+var_BC], eax
//   0x914B2 test    eax, eax
//   0x914B4 jz      short loc_914E0
//   0x914B6 mov     rax, [rbp+var_38]
//   0x914BA sub     rax, fs:28h
//   0x914C3 jnz     loc_91863
//   0x914C9 lea     rsp, [rbp-28h]
//   0x914CD mov     eax, ebx
//   0x914CF pop     rbx
//   0x914D0 pop     r12
//   0x914D2 pop     r13
//   0x914D4 pop     r14
//   0x914D6 pop     r15
//   0x914D8 pop     rbp
//   0x914D9 retn
//   0x914DA align 20h
//   0x914E0 lea     rax, [rbp+var_60]
//   0x914E4 pxor    xmm0, xmm0
//   0x914E8 xor     ecx, ecx
//   0x914EA mov     rdx, r14
//   0x914ED mov     rsi, r15
//   0x914F0 mov     rdi, rax
//   0x914F3 mov     [rbp+var_D8], rax
//   0x914FA mov     rbx, rax
//   0x914FD mov     [rbp+var_A0], 0
//   0x91508 movups  [rbp+var_98], xmm0
//   0x9150F call    sub_120C40
//   0x91514 mov     eax, [r15+48h]
//   0x91518 sub     rsp, 8
//   0x9151C mov     r8, r14
//   0x9151F mov     rcx, r12
//   0x91522 lea     r9, [rbp+var_A0]
//   0x91529 mov     rdx, r14
//   0x9152C mov     rsi, rbx
//   0x9152F mov     rdi, r15
//   0x91532 push    rax
//   0x91533 call    sub_173E70
//   0x91538 pop     rcx
//   0x91539 mov     ebx, eax
//   0x9153B pop     rsi
//   0x9153C test    al, al
//   0x9153E jz      loc_91660
//   0x91544 cmp     qword ptr [rbp+var_98], 0
//   0x9154C jz      loc_91800
//   0x91552 pxor    xmm0, xmm0
//   0x91556 mov     [rbp+var_80], 0
//   0x9155E xor     r12d, r12d
//   0x91561 xor     eax, eax
//   0x91563 movups  [rbp+var_78], xmm0
//   0x91567 jmp     short loc_915A5
//   0x91569 align 10h
//   0x91570 mov     [rsi+rax*8], rbx
//   0x91574 mov     rdx, r14
//   0x91577 mov     rsi, r13
//   0x9157A mov     rdi, r15
//   0x9157D add     qword ptr [rbp+var_78], 1
//   0x91582 call    sub_173D10
//   0x91587 mov     ebx, eax
//   0x91589 test    al, al
//   0x9158B jz      loc_91811
//   0x91591 add     r12d, 1
//   0x91595 movsxd  rax, r12d
//   0x91598 cmp     rax, qword ptr [rbp+var_98]
//   0x9159F jnb     loc_916A8
//   0x915A5 mov     rdx, [rbp+var_A0]
//   0x915AC mov     edi, 50h ; 'P'
//   0x915B1 mov     r13, [rdx+rax*8]
//   0x915B5 call    j__qalloc_or_throw
//   0x915BA pxor    xmm0, xmm0
//   0x915BE mov     rbx, rax
//   0x915C1 mov     rsi, r13
//   0x915C4 movups  xmmword ptr [rax+8], xmm0
//   0x915C8 mov     rdi, rbx
//   0x915CB mov     rax, 0FFFFFFFF00000000h
//   0x915D5 mov     [rbx+20h], rax
//   0x915D9 mov     qword ptr [rbx+28h], 0
//   0x915E1 mov     [rbx+30h], rax
//   0x915E5 mov     qword ptr [rbx+38h], 0
//   0x915ED mov     [rbx+40h], rax
//   0x915F1 mov     qword ptr [rbx+48h], 0
//   0x915F9 call    sub_121960
//   0x915FE mov     rax, qword ptr [rbp+var_78]
//   0x91602 mov     rcx, qword ptr [rbp+var_78+8]
//   0x91606 mov     [rbp+var_A8], rbx
//   0x9160D mov     rsi, [rbp+var_80]
//   0x91611 lea     rdi, [rax+1]
//   0x91615 cmp     rcx, rdi
//   0x91618 jnb     loc_91570
//   0x9161E lea     rax, [rbp+var_80]
//   0x91622 mov     rdx, rdi
//   0x91625 mov     ecx, 8
//   0x9162A mov     rdi, rax
//   0x9162D call    _qvector_reserve
//   0x91632 mov     [rbp+var_80], rax
//   0x91636 mov     rsi, rax
//   0x91639 mov     rax, qword ptr [rbp+var_78]
//   0x9163D jmp     loc_91570
//   0x91642 align 8
//   0x91648 xor     ebx, ebx
//   0x9164A mov     rdi, [rbp+var_80]
//   0x9164E test    rdi, rdi
//   0x91651 jz      short loc_91660
//   0x91653 mov     qword ptr [rbp+var_78], 0
//   0x9165B call    _qfree
//   0x91660 mov     rdi, [rbp+var_50]
//   0x91664 test    rdi, rdi
//   0x91667 jz      short loc_91676
//   0x91669 mov     [rbp+var_48], 0
//   0x91671 call    _qfree
//   0x91676 mov     rdi, [rbp+var_60]
//   0x9167A call    _qfree
//   0x9167F mov     rdi, [rbp+var_A0]
//   0x91686 test    rdi, rdi
//   0x91689 jz      loc_914B6
//   0x9168F mov     qword ptr [rbp+var_98], 0
//   0x9169A call    _qfree
//   0x9169F jmp     loc_914B6
//   0x916A4 align 8
//   0x916A8 mov     rcx, [rbp+var_C8]
//   0x916AF xor     r8d, r8d
//   0x916B2 mov     rdx, r14
//   0x916B5 mov     rdi, r15
//   0x916B8 mov     rsi, [rbp+var_B8]
//   0x916BF call    sub_90A70
//   0x916C4 cmp     qword ptr [rbp+var_98], 0
//   0x916CC mov     r12d, eax
//   0x916CF jz      loc_91807
//   0x916D5 mov     dword ptr [rbp+var_B8], 0
//   0x916DF xor     r13d, r13d
//   0x916E2 nop     word ptr [rax+rax+00000000h]
//   0x916ED nop     dword ptr [rax]
//   0x916F0 mov     rax, [rbp+var_80]
//   0x916F4 mov     rsi, [rax+r13*8]
//   0x916F8 mov     rax, [rbp+var_A0]
//   0x916FF mov     rdi, [rax+r13*8]
//   0x91703 call    sub_121960
//   0x91708 mov     rax, [rbp+var_80]
//   0x9170C mov     r13, [rax+r13*8]
//   0x91710 test    r13, r13
//   0x91713 jz      short loc_91738
//   0x91715 lea     rdi, [r13+40h]
//   0x91719 call    sub_119360
//   0x9171E lea     rdi, [r13+30h]
//   0x91722 call    sub_119360
//   0x91727 lea     rdi, [r13+20h]
//   0x9172B call    sub_119360
//   0x91730 mov     rdi, r13
//   0x91733 call    j__qfree
//   0x91738 add     dword ptr [rbp+var_B8], 1
//   0x9173F mov     rax, qword ptr [rbp+var_98]
//   0x91746 movsxd  r13, dword ptr [rbp+var_B8]
//   0x9174D cmp     r13, rax
//   0x91750 jb      short loc_916F0
//   0x91752 test    r12d, r12d
//   0x91755 jz      loc_91648
//   0x9175B test    rax, rax
//   0x9175E jz      loc_9164A
//   0x91764 cmp     [rbp+var_D0], 0
//   0x9176C jz      short loc_917A8
//   0x9176E mov     rax, [rbp+var_D0]
//   0x91775 lea     r12, [rax+40h]
//   0x91779 lea     rax, [r14+40h]
//   0x9177D mov     rsi, r12
//   0x91780 mov     rdi, rax
//   0x91783 mov     r13, rax
//   0x91786 call    sub_118FD0
//   0x9178B cmp     qword ptr [rbp+var_98], 0
//   0x91793 jnz     short loc_917A8
//   0x91795 mov     rsi, r12
//   0x91798 mov     rdi, r13
//   0x9179B call    sub_118FD0
//   0x917A0 jmp     loc_9164A
//   0x917A5 align 8
//   0x917A8 xor     eax, eax
//   0x917AA nop     word ptr [rax+rax+00h]
//   0x917B0 mov     rdx, [rbp+var_A0]
//   0x917B7 mov     rdi, r15
//   0x917BA mov     rsi, [rdx+rax*8]
//   0x917BE mov     rdx, r14
//   0x917C1 call    sub_173D10
//   0x917C6 test    al, al
//   0x917C8 jz      short loc_9183A
//   0x917CA add     [rbp+var_BC], 1
//   0x917D1 movsxd  rax, [rbp+var_BC]
//   0x917D8 cmp     rax, qword ptr [rbp+var_98]
//   0x917DF jb      short loc_917B0
//   0x917E1 mov     rax, [rbp+var_D0]
//   0x917E8 test    rax, rax
//   0x917EB jz      loc_9164A
//   0x917F1 lea     r12, [rax+40h]
//   0x917F5 lea     rax, [r14+40h]
//   0x917F9 mov     r13, rax
//   0x917FC jmp     short loc_91795
//   0x917FE align 20h
//   0x91800 xor     ebx, ebx
//   0x91802 jmp     loc_91660
//   0x91807 test    eax, eax
//   0x91809 setnz   bl
//   0x9180C jmp     loc_9164A
//   0x91811 mov     rax, cs:under_debugger_ptr
//   0x91818 cmp     byte ptr [rax], 0
//   0x9181B jnz     loc_2E246
//   0x91821 mov     rax, [rbp+var_38]
//   0x91825 sub     rax, fs:28h
//   0x9182E jnz     short loc_91868
//   0x91830 mov     edi, 0C351h
//   0x91835 call    sub_37EEE0
//   0x9183A mov     rax, cs:under_debugger_ptr
//   0x91841 cmp     byte ptr [rax], 0
//   0x91844 jnz     loc_2E246
//   0x9184A mov     rax, [rbp+var_38]
//   0x9184E sub     rax, fs:28h
//   0x91857 jnz     short loc_9186D
//   0x91859 mov     edi, 0C352h
//   0x9185E call    sub_37EEE0
//   0x91863 call    ___stack_chk_fail
//   0x91868 call    ___stack_chk_fail
//   0x9186D call    ___stack_chk_fail
//   0x91872 mov     r15, rax
//   0x91875 jmp     loc_2E248
//   0x9187A mov     rbx, rax
//   0x9187D jmp     loc_2E28E
//   0x91882 mov     rbx, rax
//   0x91885 jmp     loc_2E282
//   0x9188A mov     rbx, rax
//   0x9188D jmp     loc_2E26E
// ============================================================

void sub_91460(/* signature unknown */)
{
    // see disassembly above
}

