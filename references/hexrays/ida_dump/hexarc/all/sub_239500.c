// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x239500
// Name:           sub_239500
// Function size:  413 bytes (107 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x239500 push    r15
//   0x239502 push    r14
//   0x239504 push    r13
//   0x239506 mov     r13, rsi
//   0x239509 push    r12
//   0x23950B mov     r12, rdx
//   0x23950E push    rbp
//   0x23950F mov     ebp, ecx
//   0x239511 push    rbx
//   0x239512 mov     edx, ebp
//   0x239514 mov     rbx, rdi
//   0x239517 sub     rsp, 48h
//   0x23951B mov     rcx, [rsi]
//   0x23951E mov     [rsp+78h+var_6C], r8d
//   0x239523 lea     r14, [rsp+78h+var_50]
//   0x239528 mov     r8, r14
//   0x23952B mov     rax, fs:28h
//   0x239534 mov     [rsp+78h+var_40], rax
//   0x239539 xor     eax, eax
//   0x23953B lea     rax, [rsi+8]
//   0x23953F mov     rsi, r12
//   0x239542 mov     [rsp+78h+var_50], 0
//   0x23954B mov     rdi, rax
//   0x23954E mov     [rsp+78h+var_68], rax
//   0x239553 call    sub_250920
//   0x239558 mov     r15d, eax
//   0x23955B test    eax, eax
//   0x23955D jz      loc_2395E0
//   0x239563 or      byte ptr [r13+0Dh], 20h
//   0x239568 mov     rdi, [rsp+78h+var_50]
//   0x23956D mov     esi, 3
//   0x239572 call    _get_tinfo_property
//   0x239577 xor     edx, edx
//   0x239579 mov     rdi, [r13+0]
//   0x23957D cmp     eax, 1
//   0x239580 mov     esi, ebp
//   0x239582 setz    dl
//   0x239585 call    sub_323690
//   0x23958A mov     [r13+0], rax
//   0x23958E mov     rdx, rax
//   0x239591 movzx   eax, byte ptr [r13+0Dh]
//   0x239596 test    al, 18h
//   0x239598 jnz     loc_239628
//   0x23959E cmp     r15d, 2
//   0x2395A2 jz      short loc_2395C0
//   0x2395A4 mov     qword ptr [rbx], 0
//   0x2395AB mov     rsi, r14
//   0x2395AE mov     rdi, rbx
//   0x2395B1 call    _copy_tinfo_t
//   0x2395B6 jmp     short loc_2395F8
//   0x2395B8 align 20h
//   0x2395C0 mov     rsi, r14
//   0x2395C3 mov     rdi, r13
//   0x2395C6 mov     [rsp+78h+var_60], rdx
//   0x2395CB call    sub_24E6B0
//   0x2395D0 mov     rdx, [rsp+78h+var_60]
//   0x2395D5 cmp     rdx, rax
//   0x2395D8 jz      short loc_239638
//   0x2395DA nop     word ptr [rax+rax+00h]
//   0x2395E0 and     byte ptr [r13+0Dh], 0DFh
//   0x2395E5 mov     ecx, [rsp+78h+var_6C]
//   0x2395E9 mov     edx, ebp
//   0x2395EB mov     rdi, rbx
//   0x2395EE mov     rsi, [r12+70h]
//   0x2395F3 call    sub_324F00
//   0x2395F8 mov     rdi, r14
//   0x2395FB call    _clear_tinfo_t
//   0x239600 mov     rax, [rsp+78h+var_40]
//   0x239605 sub     rax, fs:28h
//   0x23960E jnz     short loc_239688
//   0x239610 add     rsp, 48h
//   0x239614 mov     rax, rbx
//   0x239617 pop     rbx
//   0x239618 pop     rbp
//   0x239619 pop     r12
//   0x23961B pop     r13
//   0x23961D pop     r14
//   0x23961F pop     r15
//   0x239621 retn
//   0x239622 align 8
//   0x239628 test    al, 6
//   0x23962A jnz     loc_23959E
//   0x239630 jmp     loc_2395A4
//   0x239635 align 8
//   0x239638 lea     r15, [rsp+78h+var_48]
//   0x23963D xor     ecx, ecx
//   0x23963F xor     esi, esi
//   0x239641 mov     rdi, r13
//   0x239644 mov     [rsp+78h+var_48], 0
//   0x23964D mov     rdx, r15
//   0x239650 call    sub_25E720
//   0x239655 mov     rdi, r15
//   0x239658 mov     byte ptr [rsp+78h+var_60], al
//   0x23965C call    _clear_tinfo_t
//   0x239661 movzx   eax, byte ptr [rsp+78h+var_60]
//   0x239666 test    al, al
//   0x239668 jz      loc_2395E0
//   0x23966E mov     rsi, [r13+28h]
//   0x239672 mov     rdi, [rsp+78h+var_68]
//   0x239677 and     rsi, 0FFFFFFFFFFFDFFFFh
//   0x23967E call    sub_322900
//   0x239683 jmp     loc_2395A4
//   0x239688 call    ___stack_chk_fail
//   0x23968D mov     rbx, rax
//   0x239690 jmp     loc_44B8E
//   0x239695 mov     rbx, rax
//   0x239698 jmp     loc_44B86
// ============================================================

void sub_239500(/* signature unknown */)
{
    // see disassembly above
}

