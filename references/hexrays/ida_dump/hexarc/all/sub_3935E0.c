// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x3935E0
// Name:           sub_3935E0
// Function size:  311 bytes (77 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x3935E0 push    rbx
//   0x3935E1 sub     rsp, 10h
//   0x3935E5 mov     eax, [rdi+14h]
//   0x3935E8 mov     rbx, fs:28h
//   0x3935F1 mov     [rsp+18h+var_10], rbx
//   0x3935F6 mov     rbx, rdi
//   0x3935F9 mov     edx, eax
//   0x3935FB and     edx, 0DFFFFFFFh
//   0x393601 mov     [rdi+14h], edx
//   0x393604 test    eax, 0E000000h
//   0x393609 jnz     short loc_393640
//   0x39360B mov     eax, [rbx+10h]
//   0x39360E lea     edx, [rax-1000004h]
//   0x393614 cmp     edx, 1
//   0x393617 jbe     loc_3936E0
//   0x39361D cmp     eax, 1000000h
//   0x393622 jz      short loc_393680
//   0x393624 xor     eax, eax
//   0x393626 mov     rdx, [rsp+18h+var_10]
//   0x39362B sub     rdx, fs:28h
//   0x393634 jnz     loc_393712
//   0x39363A add     rsp, 10h
//   0x39363E pop     rbx
//   0x39363F retn
//   0x393640 cmp     edx, 4000000h
//   0x393646 jnz     short loc_393624
//   0x393648 mov     eax, [rbx+10h]
//   0x39364B lea     edx, [rax-1000004h]
//   0x393651 cmp     edx, 1
//   0x393654 jbe     loc_393700
//   0x39365A cmp     eax, 41h ; 'A'
//   0x39365D jnz     short loc_393624
//   0x39365F mov     r8, cs:callui_ptr
//   0x393666 xor     ecx, ecx
//   0x393668 xor     edx, edx
//   0x39366A mov     edi, 64h ; 'd'
//   0x39366F lea     rsi, aSelectall; "SelectAll"
//   0x393676 xor     eax, eax
//   0x393678 call    qword ptr [r8]
//   0x39367B movzx   eax, al
//   0x39367E jmp     short loc_393626
//   0x393680 mov     rax, [rbx+8]
//   0x393684 mov     rcx, [rax+8]
//   0x393688 test    rcx, rcx
//   0x39368B jz      short loc_393624
//   0x39368D mov     r8, cs:callui_ptr
//   0x393694 xor     edx, edx
//   0x393696 xor     eax, eax
//   0x393698 lea     rsi, [rsp+18h+var_14]
//   0x39369D mov     edi, 7Eh ; '~'
//   0x3936A2 call    qword ptr [r8]
//   0x3936A5 test    al, al
//   0x3936A7 jz      loc_393624
//   0x3936AD mov     eax, [rsp+18h+var_14]
//   0x3936B1 test    eax, eax
//   0x3936B3 jg      loc_393624
//   0x3936B9 mov     rax, [rbx+8]
//   0x3936BD mov     rdx, [rax+80h]
//   0x3936C4 test    byte ptr [rdx+25Dh], 10h
//   0x3936CB jz      short loc_3936ED
//   0x3936CD mov     rdi, [rax+10h]
//   0x3936D1 call    sub_3824E0
//   0x3936D6 jmp     short loc_3936ED
//   0x3936D8 align 20h
//   0x3936E0 mov     rdi, [rbx+8]
//   0x3936E4 xor     edx, edx
//   0x3936E6 xor     esi, esi
//   0x3936E8 call    sub_392EC0
//   0x3936ED mov     eax, 1
//   0x3936F2 jmp     loc_393626
//   0x3936F7 align 20h
//   0x393700 mov     rdi, [rbx+8]
//   0x393704 mov     edx, 8
//   0x393709 xor     esi, esi
//   0x39370B call    sub_392EC0
//   0x393710 jmp     short loc_3936ED
//   0x393712 call    ___stack_chk_fail
// ============================================================

void sub_3935E0(/* signature unknown */)
{
    // see disassembly above
}

