// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x2473F0
// Name:           sub_2473F0
// Function size:  451 bytes (114 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x2473F0 push    rbp
//   0x2473F1 mov     rbp, rsp
//   0x2473F4 push    r15
//   0x2473F6 push    r14
//   0x2473F8 push    r13
//   0x2473FA mov     r13d, edx
//   0x2473FD push    r12
//   0x2473FF mov     r12, rdi
//   0x247402 push    rbx
//   0x247403 mov     rbx, rcx
//   0x247406 sub     rsp, 28h
//   0x24740A mov     [rbp+var_48], rsi
//   0x24740E cmp     byte ptr [rsi+30h], 0
//   0x247412 mov     r14, fs:28h
//   0x24741B mov     [rbp+var_38], r14
//   0x24741F mov     r14d, r8d
//   0x247422 jz      short loc_247490
//   0x247424 lea     r15, [rbp+var_40]
//   0x247428 xor     r9d, r9d
//   0x24742B xor     edx, edx
//   0x24742D mov     [rbp+var_40], 0
//   0x247435 mov     r8, r15
//   0x247438 call    sub_2467A0
//   0x24743D mov     rdi, r15
//   0x247440 mov     rbx, rax
//   0x247443 call    _clear_tinfo_t
//   0x247448 mov     rsi, [r12+148h]
//   0x247450 mov     edx, r13d
//   0x247453 mov     rdi, rbx
//   0x247456 call    sub_2449A0
//   0x24745B test    r14b, r14b
//   0x24745E jnz     loc_247550
//   0x247464 mov     rax, [rbp+var_38]
//   0x247468 sub     rax, fs:28h
//   0x247471 jnz     loc_247596
//   0x247477 lea     rsp, [rbp-28h]
//   0x24747B mov     rax, rbx
//   0x24747E pop     rbx
//   0x24747F pop     r12
//   0x247481 pop     r13
//   0x247483 pop     r14
//   0x247485 pop     r15
//   0x247487 pop     rbp
//   0x247488 retn
//   0x247489 align 10h
//   0x247490 mov     rax, [rbp+var_48]
//   0x247494 xor     r9d, r9d
//   0x247497 mov     r8, rcx
//   0x24749A mov     rsi, [rax+18h]
//   0x24749E lea     rdx, [rax+20h]
//   0x2474A2 call    sub_244EF0
//   0x2474A7 mov     esi, 3
//   0x2474AC mov     rdi, [rax+30h]
//   0x2474B0 mov     r15, rax
//   0x2474B3 call    _get_tinfo_property
//   0x2474B8 cmp     eax, 1
//   0x2474BB jnz     short loc_247538
//   0x2474BD mov     edi, 40h ; '@'
//   0x2474C2 call    j__qalloc_or_throw
//   0x2474C7 sub     rsp, 8
//   0x2474CB xor     r8d, r8d
//   0x2474CE xor     edx, edx
//   0x2474D0 mov     rdi, [r12+148h]
//   0x2474D8 push    0
//   0x2474DA mov     r9d, 1
//   0x2474E0 xor     esi, esi
//   0x2474E2 mov     rcx, 0FFFFFFFFFFFFFFFFh
//   0x2474E9 mov     rbx, rax
//   0x2474EC call    sub_23C350
//   0x2474F1 pop     rdx
//   0x2474F2 pop     rcx
//   0x2474F3 mov     [rbx+20h], rax
//   0x2474F7 mov     rax, [rbp+var_48]
//   0x2474FB mov     qword ptr [rbx], 0FFFFFFFFFFFFFFFFh
//   0x247502 mov     [rbx+8], r13d
//   0x247506 mov     qword ptr [rbx+0Ch], 0FFFFFFFFFFFFFFFFh
//   0x24750E mov     [rbx+18h], r15
//   0x247512 mov     qword ptr [rbx+28h], 0
//   0x24751A mov     qword ptr [rbx+30h], 0
//   0x247522 mov     dword ptr [rbx+38h], 0
//   0x247529 mov     rax, [rax+18h]
//   0x24752D mov     [rbx], rax
//   0x247530 jmp     loc_247448
//   0x247535 align 8
//   0x247538 mov     rdi, r15
//   0x24753B mov     rsi, rbx
//   0x24753E call    sub_240270
//   0x247543 mov     r15, rax
//   0x247546 jmp     loc_2474BD
//   0x24754B align 10h
//   0x247550 mov     r14, [rbp+var_48]
//   0x247554 mov     rax, [r12+148h]
//   0x24755C lea     r15, [rbp+var_40]
//   0x247560 mov     rdi, r15
//   0x247563 mov     edx, [r14+44h]
//   0x247567 mov     rsi, [rax+70h]
//   0x24756B call    sub_326FC0
//   0x247570 mov     rsi, [r14+18h]
//   0x247574 lea     rdx, [r14+40h]
//   0x247578 mov     r8, rbx
//   0x24757B mov     rcx, r15
//   0x24757E mov     rdi, r12
//   0x247581 call    sub_245E50
//   0x247586 mov     rdi, r15
//   0x247589 mov     rbx, rax
//   0x24758C call    _clear_tinfo_t
//   0x247591 jmp     loc_247464
//   0x247596 call    ___stack_chk_fail
//   0x24759B mov     rbx, rax
//   0x24759E jmp     loc_46C92
//   0x2475A3 mov     r15, rax
//   0x2475A6 jmp     loc_46CB1
//   0x2475AB mov     rbx, rax
//   0x2475AE jmp     loc_46CD0
// ============================================================

void sub_2473F0(/* signature unknown */)
{
    // see disassembly above
}

