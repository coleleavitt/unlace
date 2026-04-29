// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x14470
// Name:           sub_14470
// Function size:  622 bytes (153 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x14470 push    r15
//   0x14472 pxor    xmm0, xmm0
//   0x14476 push    r14
//   0x14478 push    r13
//   0x1447A push    r12
//   0x1447C lea     r12, [rdi+1F0h]
//   0x14483 push    rbp
//   0x14484 push    rbx
//   0x14485 sub     rsp, 78h
//   0x14489 mov     r15, [rdi+1F8h]
//   0x14490 mov     [rsp+0A8h+var_A8], rdi
//   0x14494 mov     rbp, fs:28h
//   0x1449D mov     [rsp+0A8h+var_40], rbp
//   0x144A2 mov     rbp, rsi
//   0x144A5 movaps  [rsp+0A8h+var_58], xmm0
//   0x144AA movaps  [rsp+0A8h+var_98], xmm0
//   0x144AF movaps  [rsp+0A8h+var_78], xmm0
//   0x144B4 movaps  [rsp+0A8h+var_68], xmm0
//   0x144B9 movdqa  xmm0, cs:xmmword_216F0
//   0x144C1 mov     dword ptr [rsp+0A8h+var_58], 0Ch
//   0x144C9 mov     [rsp+0A8h+var_A0], r12
//   0x144CE movaps  [rsp+0A8h+var_88], xmm0
//   0x144D3 test    r15, r15
//   0x144D6 jz      loc_145D0
//   0x144DC mov     r13, [rbp+8]
//   0x144E0 lea     r14, s1
//   0x144E7 jmp     short loc_14522
//   0x144E9 align 10h
//   0x144F0 mov     rsi, [rbp+0]; s2
//   0x144F4 mov     rbx, r15
//   0x144F7 mov     rdi, r14
//   0x144FA test    rax, rax
//   0x144FD jz      short loc_14506
//   0x144FF mov     rdi, [r15+20h]; s1
//   0x14503 mov     rbx, r15
//   0x14506 call    _strcmp
//   0x1450B mov     rcx, [r15+10h]
//   0x1450F mov     r15, [r15+18h]
//   0x14513 test    eax, eax
//   0x14515 js      short loc_1451D
//   0x14517 mov     r12, rbx
//   0x1451A mov     r15, rcx
//   0x1451D test    r15, r15
//   0x14520 jz      short loc_14553
//   0x14522 mov     rax, [r15+28h]
//   0x14526 test    r13, r13
//   0x14529 jnz     short loc_144F0
//   0x1452B test    rax, rax
//   0x1452E jnz     short loc_14548
//   0x14530 mov     rcx, [r15+10h]
//   0x14534 test    rcx, rcx
//   0x14537 jz      short loc_14550
//   0x14539 mov     rax, [rcx+28h]
//   0x1453D mov     r12, r15
//   0x14540 mov     r15, rcx
//   0x14543 test    rax, rax
//   0x14546 jz      short loc_14530
//   0x14548 mov     rsi, r14
//   0x1454B jmp     short loc_144FF
//   0x1454D align 10h
//   0x14550 mov     r12, r15
//   0x14553 cmp     [rsp+0A8h+var_A0], r12
//   0x14558 jz      short loc_145D5
//   0x1455A cmp     qword ptr [r12+28h], 0
//   0x14560 jz      loc_14690
//   0x14566 mov     rsi, [r12+20h]; s2
//   0x1456B lea     rdi, s1
//   0x14572 test    r13, r13
//   0x14575 jz      short loc_1457B
//   0x14577 mov     rdi, [rbp+0]; s1
//   0x1457B call    _strcmp
//   0x14580 test    eax, eax
//   0x14582 js      short loc_145D5
//   0x14584 lea     rdi, [rsp+0A8h+var_88+8]
//   0x14589 lea     rbx, [r12+38h]
//   0x1458E call    _clear_tinfo_t
//   0x14593 cmp     dword ptr [r12+7Ch], 2
//   0x14599 jz      loc_146C0
//   0x1459F nop
//   0x145A0 mov     rax, [rsp+0A8h+var_40]
//   0x145A5 sub     rax, fs:28h
//   0x145AE jnz     loc_146D1
//   0x145B4 add     rsp, 78h
//   0x145B8 mov     rax, rbx
//   0x145BB pop     rbx
//   0x145BC pop     rbp
//   0x145BD pop     r12
//   0x145BF pop     r13
//   0x145C1 pop     r14
//   0x145C3 pop     r15
//   0x145C5 retn
//   0x145C6 align 10h
//   0x145D0 mov     r12, [rsp+0A8h+var_A0]
//   0x145D5 mov     rax, [rsp+0A8h+var_A8]
//   0x145D9 lea     rcx, [rsp+0A8h+var_98]
//   0x145DE mov     rdx, rbp
//   0x145E1 mov     rsi, r12
//   0x145E4 lea     rdi, [rax+1E8h]
//   0x145EB call    sub_14260
//   0x145F0 mov     rdi, qword ptr [rsp+0A8h+var_78]
//   0x145F5 mov     r12, rax
//   0x145F8 test    rdi, rdi
//   0x145FB jz      loc_146A8
//   0x14601 mov     qword ptr [rsp+0A8h+var_78+8], 0
//   0x1460A lea     rbx, [r12+38h]
//   0x1460F call    _qfree
//   0x14614 lea     rdi, [rsp+0A8h+var_88+8]
//   0x14619 call    _clear_tinfo_t
//   0x1461E mov     r14, [rsp+0A8h+var_A8]
//   0x14622 mov     rdx, rbp
//   0x14625 mov     rsi, rbx
//   0x14628 mov     rdi, r14
//   0x1462B call    sub_161A0
//   0x14630 test    al, al
//   0x14632 jnz     loc_145A0
//   0x14638 mov     rdx, rbp
//   0x1463B mov     rsi, rbx
//   0x1463E mov     rdi, r14
//   0x14641 call    sub_16DC0
//   0x14646 test    al, al
//   0x14648 jnz     loc_145A0
//   0x1464E mov     rdx, rbp
//   0x14651 mov     rsi, rbx
//   0x14654 mov     rdi, r14
//   0x14657 call    sub_FDC0
//   0x1465C test    al, al
//   0x1465E jnz     loc_145A0
//   0x14664 mov     rdx, rbp
//   0x14667 mov     rsi, rbx
//   0x1466A mov     rdi, r14
//   0x1466D call    sub_B140
//   0x14672 test    al, al
//   0x14674 jnz     loc_145A0
//   0x1467A mov     dword ptr [r12+7Ch], 4
//   0x14683 jmp     loc_145A0
//   0x14688 align 10h
//   0x14690 lea     rsi, s1
//   0x14697 test    r13, r13
//   0x1469A jnz     loc_14577
//   0x146A0 jmp     loc_14584
//   0x146A5 align 8
//   0x146A8 lea     rdi, [rsp+0A8h+var_88+8]
//   0x146AD lea     rbx, [r12+38h]
//   0x146B2 call    _clear_tinfo_t
//   0x146B7 jmp     loc_1461E
//   0x146BC align 20h
//   0x146C0 mov     rdi, [rsp+0A8h+var_A8]
//   0x146C4 mov     rsi, rbx
//   0x146C7 call    sub_181C0
//   0x146CC jmp     loc_145A0
//   0x146D1 call    ___stack_chk_fail
//   0x146D6 mov     rbx, rax
//   0x146D9 jmp     loc_5980
// ============================================================

void sub_14470(/* signature unknown */)
{
    // see disassembly above
}

