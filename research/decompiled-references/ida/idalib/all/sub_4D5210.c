// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x4D5210
// Name:           sub_4D5210
// Function size:  1348 bytes (304 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x4D5210 push    r15
//   0x4D5212 pxor    xmm0, xmm0
//   0x4D5216 mov     r15d, r8d
//   0x4D5219 push    r14
//   0x4D521B mov     r14d, r8d
//   0x4D521E push    r13
//   0x4D5220 push    r12
//   0x4D5222 mov     r12, rsi
//   0x4D5225 push    rbp; int
//   0x4D5226 mov     rbp, rcx
//   0x4D5229 push    rbx
//   0x4D522A mov     rbx, rdi
//   0x4D522D sub     rsp, 0A8h
//   0x4D5234 mov     dword ptr [rsp+0D8h+var_C8], r9d
//   0x4D5239 mov     rax, fs:28h
//   0x4D5242 mov     [rsp+0D8h+var_40], rax
//   0x4D524A mov     rax, [rdi]
//   0x4D524D movups  [rsp+0D8h+var_90], xmm0
//   0x4D5252 mov     [rsp+0D8h+var_98], 0
//   0x4D525B mov     r13, [rax+6B8h]
//   0x4D5262 test    rdx, rdx
//   0x4D5265 jz      loc_4D5600
//   0x4D526B mov     rdi, rdx; s
//   0x4D526E mov     [rsp+0D8h+src], rdx
//   0x4D5273 call    _strlen
//   0x4D5278 lea     rdi, [rsp+0D8h+var_98]
//   0x4D527D mov     ecx, 1
//   0x4D5282 xor     esi, esi
//   0x4D5284 lea     rdx, [rax+1]
//   0x4D5288 mov     [rsp+0D8h+n], rax
//   0x4D528D mov     [rsp+0D8h+var_C0], rdi
//   0x4D5292 mov     [rsp+0D8h+var_B8], rdx
//   0x4D5297 call    _qvector_reserve
//   0x4D529C mov     rdx, [rsp+0D8h+var_B8]
//   0x4D52A1 mov     rsi, [rsp+0D8h+src]; src
//   0x4D52A6 mov     rdi, rax; dest
//   0x4D52A9 mov     [rsp+0D8h+var_98], rax
//   0x4D52AE mov     qword ptr [rsp+0D8h+var_90], rdx
//   0x4D52B3 mov     rdx, [rsp+0D8h+n]; n
//   0x4D52B8 call    _memmove
//   0x4D52BD mov     rax, [rsp+0D8h+var_98]
//   0x4D52C2 mov     rcx, [rsp+0D8h+n]
//   0x4D52C7 mov     byte ptr [rax+rcx], 0
//   0x4D52CB cmp     qword ptr [rsp+0D8h+var_90], 1
//   0x4D52D1 jbe     loc_4D5600
//   0x4D52D7 cmp     qword ptr [r13+30h], 0
//   0x4D52DC jnz     loc_4D5530
//   0x4D52E2 mov     rdi, [rsp+0D8h+var_C0]
//   0x4D52E7 call    sub_4CD570
//   0x4D52EC cmp     byte ptr [rsp+0D8h+var_C8], 0
//   0x4D52F1 mov     r13, [rsp+0D8h+var_98]
//   0x4D52F6 jnz     short loc_4D5311
//   0x4D52F8 movzx   ecx, r15b
//   0x4D52FC mov     r8, r13
//   0x4D52FF mov     rdx, rbp
//   0x4D5302 mov     rsi, r12
//   0x4D5305 mov     edi, 34h ; '4'
//   0x4D530A xor     eax, eax
//   0x4D530C call    sub_39ADA0
//   0x4D5311 mov     [rsp+0D8h+ptr], 0
//   0x4D531A pxor    xmm0, xmm0
//   0x4D531E movups  [rsp+0D8h+var_70], xmm0
//   0x4D5323 test    rbp, rbp
//   0x4D5326 jz      loc_4D5630
//   0x4D532C mov     rdi, rbp; s
//   0x4D532F call    _strlen
//   0x4D5334 lea     rdi, [rsp+0D8h+ptr]
//   0x4D5339 mov     ecx, 1
//   0x4D533E xor     esi, esi
//   0x4D5340 lea     rdx, [rax+1]
//   0x4D5344 mov     [rsp+0D8h+n], rax
//   0x4D5349 mov     [rsp+0D8h+var_C8], rdi
//   0x4D534E mov     [rsp+0D8h+var_C0], rdx
//   0x4D5353 call    _qvector_reserve
//   0x4D5358 mov     rdx, [rsp+0D8h+var_C0]
//   0x4D535D mov     rdi, rax; dest
//   0x4D5360 mov     rsi, rbp; src
//   0x4D5363 mov     [rsp+0D8h+ptr], rax
//   0x4D5368 mov     qword ptr [rsp+0D8h+var_70], rdx
//   0x4D536D mov     rdx, [rsp+0D8h+n]; n
//   0x4D5372 call    _memmove
//   0x4D5377 mov     rax, [rsp+0D8h+ptr]
//   0x4D537C mov     rcx, [rsp+0D8h+n]
//   0x4D5381 mov     byte ptr [rax+rcx], 0
//   0x4D5385 mov     rdi, [rsp+0D8h+var_C8]
//   0x4D538A call    sub_4CD570
//   0x4D538F mov     rax, [rbx]
//   0x4D5392 mov     ebp, [rax+58h]
//   0x4D5395 call    _get_dbctx_qty
//   0x4D539A mov     dword ptr [rsp+0D8h+n], 0FFFFFFFFh
//   0x4D53A2 test    rax, rax
//   0x4D53A5 jnz     loc_4D56C8
//   0x4D53AB movsxd  rdi, ebp
//   0x4D53AE call    _switch_dbctx
//   0x4D53B3 lea     rbp, [rsp+0D8h+var_58]
//   0x4D53BB mov     edx, 2
//   0x4D53C0 mov     rsi, r12
//   0x4D53C3 mov     [rsp+0D8h+var_A0], rax
//   0x4D53C8 mov     rdi, rbp
//   0x4D53CB call    _xrefblk_t_first_to
//   0x4D53D0 jmp     short loc_4D53E9
//   0x4D53D2 align 8
//   0x4D53D8 test    r14b, r14b
//   0x4D53DB jz      loc_4D5470
//   0x4D53E1 mov     rdi, rbp
//   0x4D53E4 call    _xrefblk_t_next_to
//   0x4D53E9 test    al, al
//   0x4D53EB jz      loc_4D5498
//   0x4D53F1 cmp     [rsp+0D8h+var_47], 4
//   0x4D53F9 jnz     short loc_4D53D8
//   0x4D53FB cmp     qword ptr [rsp+0D8h+var_90], 1
//   0x4D5401 jbe     short loc_4D53E1
//   0x4D5403 cmp     qword ptr [rsp+0D8h+var_70], 1
//   0x4D5409 jbe     short loc_4D53E1
//   0x4D540B mov     rax, [rsp+0D8h+ptr]
//   0x4D5410 mov     rsi, [rsp+0D8h+var_58]
//   0x4D5418 mov     edx, 4
//   0x4D541D mov     rdi, rbx
//   0x4D5420 mov     [rsp+0D8h+var_C8], rax
//   0x4D5425 call    sub_3BE900
//   0x4D542A mov     r8, rax
//   0x4D542D and     eax, 0F00000h
//   0x4D5432 cmp     rax, offset loc_900000
//   0x4D5438 jz      loc_4D5548
//   0x4D543E and     r8d, 0F000000h
//   0x4D5445 cmp     r8, 9000000h
//   0x4D544C jz      loc_4D5710
//   0x4D5452 mov     rdx, [rsp+0D8h+var_58]
//   0x4D545A mov     rsi, r13
//   0x4D545D mov     edi, 4F2h
//   0x4D5462 xor     eax, eax
//   0x4D5464 call    sub_387D20
//   0x4D5469 jmp     loc_4D53E1
//   0x4D546E align 10h
//   0x4D5470 mov     rsi, [rsp+0D8h+var_58]
//   0x4D5478 mov     rdi, rbx
//   0x4D547B call    sub_5CAA10
//   0x4D5480 mov     rsi, rax
//   0x4D5483 mov     rdx, r13
//   0x4D5486 mov     rdi, rbx; int
//   0x4D5489 call    sub_5D08C0
//   0x4D548E jmp     loc_4D53E1
//   0x4D5493 align 8
//   0x4D5498 test    r15b, r15b
//   0x4D549B jz      loc_4D5640
//   0x4D54A1 mov     rax, [rbx+18h]
//   0x4D54A5 cmp     [rax+10h], r12
//   0x4D54A9 jb      short loc_4D54C4
//   0x4D54AB lea     rax, qword_2CCB548
//   0x4D54B2 mov     rax, [rax]
//   0x4D54B5 test    rax, rax
//   0x4D54B8 jz      short loc_4D54C4
//   0x4D54BA mov     esi, 1
//   0x4D54BF mov     rdi, r12
//   0x4D54C2 call    rax
//   0x4D54C4 mov     eax, dword ptr [rsp+0D8h+n]
//   0x4D54C8 cmp     eax, 0FFFFFFFFh
//   0x4D54CB jnz     loc_4D55D0
//   0x4D54D1 mov     rdi, [rsp+0D8h+ptr]; ptr
//   0x4D54D6 test    rdi, rdi
//   0x4D54D9 jz      short loc_4D54E9
//   0x4D54DB mov     qword ptr [rsp+0D8h+var_70], 0
//   0x4D54E4 call    _qfree
//   0x4D54E9 mov     rdi, [rsp+0D8h+var_98]; ptr
//   0x4D54EE test    rdi, rdi
//   0x4D54F1 jz      short loc_4D5501
//   0x4D54F3 mov     qword ptr [rsp+0D8h+var_90], 0
//   0x4D54FC call    _qfree
//   0x4D5501 mov     rax, [rsp+0D8h+var_40]
//   0x4D5509 sub     rax, fs:28h
//   0x4D5512 jnz     loc_4D571F
//   0x4D5518 add     rsp, 0A8h
//   0x4D551F pop     rbx
//   0x4D5520 pop     rbp
//   0x4D5521 pop     r12
//   0x4D5523 pop     r13
//   0x4D5525 pop     r14
//   0x4D5527 pop     r15
//   0x4D5529 retn
//   0x4D552A align 10h
//   0x4D5530 mov     rsi, [rsp+0D8h+var_C0]
//   0x4D5535 mov     rdi, r13
//   0x4D5538 call    sub_4D50B0
//   0x4D553D jmp     loc_4D52E2
//   0x4D5542 align 8
//   0x4D5548 mov     rcx, [rsp+0D8h+var_C8]
//   0x4D554D mov     rdx, r13
//   0x4D5550 xor     esi, esi
//   0x4D5552 mov     [rsp+0D8h+var_C0], r8
//   0x4D5557 mov     rdi, [rsp+0D8h+var_58]
//   0x4D555F call    sub_59B270
//   0x4D5564 mov     r8, [rsp+0D8h+var_C0]
//   0x4D5569 mov     r9d, eax
//   0x4D556C and     r8d, 0F000000h
//   0x4D5573 test    al, al
//   0x4D5575 jz      loc_4D5445
//   0x4D557B cmp     r8, 9000000h
//   0x4D5582 jnz     loc_4D53E1
//   0x4D5588 nop     dword ptr [rax+rax+00000000h]
//   0x4D5590 mov     rcx, [rsp+0D8h+var_C8]
//   0x4D5595 mov     rdi, [rsp+0D8h+var_58]
//   0x4D559D mov     rdx, r13
//   0x4D55A0 mov     esi, 1
//   0x4D55A5 mov     byte ptr [rsp+0D8h+var_C0], r9b
//   0x4D55AA call    sub_59B270
//   0x4D55AF test    al, al
//   0x4D55B1 jnz     loc_4D53E1
//   0x4D55B7 movzx   r9d, byte ptr [rsp+0D8h+var_C0]
//   0x4D55BD test    r9b, r9b
//   0x4D55C0 jnz     loc_4D53E1
//   0x4D55C6 jmp     loc_4D5452
//   0x4D55CB align 10h
//   0x4D55D0 movsxd  rbx, eax
//   0x4D55D3 call    _get_dbctx_qty
//   0x4D55D8 cmp     rbx, rax
//   0x4D55DB jnb     loc_4D54D1
//   0x4D55E1 call    sub_3FB5F0
//   0x4D55E6 test    al, al
//   0x4D55E8 jz      loc_4D54D1
//   0x4D55EE mov     rdi, rbx
//   0x4D55F1 call    _switch_dbctx
//   0x4D55F6 jmp     loc_4D54D1
//   0x4D55FB align 20h
//   0x4D5600 mov     edx, 4
//   0x4D5605 mov     rsi, r12
//   0x4D5608 mov     rdi, rbx
//   0x4D560B call    sub_3BE900
//   0x4D5610 mov     rcx, rax
//   0x4D5613 lea     rsi, [rsp+0D8h+var_98]
//   0x4D5618 xor     r8d, r8d
//   0x4D561B mov     rdx, r12
//   0x4D561E mov     rdi, rbx
//   0x4D5621 call    sub_4CCE50
//   0x4D5626 jmp     loc_4D52EC
//   0x4D562B align 10h
//   0x4D5630 lea     rax, [rsp+0D8h+ptr]
//   0x4D5635 mov     [rsp+0D8h+var_C8], rax
//   0x4D563A jmp     loc_4D5385
//   0x4D563F align 20h
//   0x4D5640 mov     edx, 4
//   0x4D5645 mov     rsi, r12
//   0x4D5648 mov     rdi, rbp
//   0x4D564B call    _xrefblk_t_first_to
//   0x4D5650 jmp     short loc_4D567E
//   0x4D5652 align 8
//   0x4D5658 mov     rsi, [rsp+0D8h+var_58]
//   0x4D5660 mov     rdi, rbx
//   0x4D5663 call    sub_5CAA10
//   0x4D5668 mov     rsi, rax
//   0x4D566B mov     rdx, r13
//   0x4D566E mov     rdi, rbx; int
//   0x4D5671 call    sub_5D08C0
//   0x4D5676 mov     rdi, rbp
//   0x4D5679 call    _xrefblk_t_next_to
//   0x4D567E test    al, al
//   0x4D5680 jnz     short loc_4D5658
//   0x4D5682 mov     rsi, r12
//   0x4D5685 mov     rdi, rbx
//   0x4D5688 call    sub_5CAA10
//   0x4D568D test    rax, rax
//   0x4D5690 jz      short loc_4D5697
//   0x4D5692 cmp     [rax], r12
//   0x4D5695 jz      short loc_4D56E0
//   0x4D5697 mov     rdi, [rbx]
//   0x4D569A mov     rdx, [rsp+0D8h+ptr]
//   0x4D569F mov     rsi, r12
//   0x4D56A2 call    sub_4CBF70
//   0x4D56A7 test    al, al
//   0x4D56A9 jz      loc_4D54A1
//   0x4D56AF mov     esi, 400000h
//   0x4D56B4 mov     rdi, r12
//   0x4D56B7 call    _set_abits
//   0x4D56BC jmp     loc_4D54A1
//   0x4D56C1 align 8
//   0x4D56C8 call    _get_dbctx_id
//   0x4D56CD mov     dword ptr [rsp+0D8h+n], eax
//   0x4D56D1 jmp     loc_4D53AB
//   0x4D56D6 align 20h
//   0x4D56E0 cmp     qword ptr [rsp+0D8h+var_70], 0
//   0x4D56E6 lea     rcx, haystack
//   0x4D56ED jnz     short loc_4D5718
//   0x4D56EF mov     rdi, [rbx]
//   0x4D56F2 mov     rdx, 0FFFFFFFFFFFFFFFFh
//   0x4D56F9 mov     rsi, rax
//   0x4D56FC call    sub_5CA280
//   0x4D5701 jmp     loc_4D54A1
//   0x4D5706 align 10h
//   0x4D5710 xor     r9d, r9d
//   0x4D5713 jmp     loc_4D5590
//   0x4D5718 mov     rcx, [rsp+0D8h+ptr]
//   0x4D571D jmp     short loc_4D56EF
//   0x4D571F call    ___stack_chk_fail
//   0x4D5724 mov     rbx, rax
//   0x4D5727 jmp     loc_2BE198
//   0x4D572C mov     rbx, rax
//   0x4D572F jmp     loc_2BE1DF
//   0x4D5734 mov     rbx, rax
//   0x4D5737 jmp     loc_2BE186
//   0x4D573C mov     rbx, rax
//   0x4D573F jmp     loc_2BE1AE
//   0x4D5744 mov     rbx, rax
//   0x4D5747 jmp     loc_2BE21A
//   0x4D574C mov     rbx, rax
//   0x4D574F jmp     loc_2BE235
// ============================================================

void sub_4D5210(/* signature unknown */)
{
    // see disassembly above
}

