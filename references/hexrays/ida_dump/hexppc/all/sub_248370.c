// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x248370
// Name:           sub_248370
// Function size:  451 bytes (114 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x248370 push    rbp
//   0x248371 mov     rbp, rsp
//   0x248374 push    r15
//   0x248376 push    r14
//   0x248378 push    r13
//   0x24837A mov     r13d, edx
//   0x24837D push    r12
//   0x24837F mov     r12, rdi
//   0x248382 push    rbx
//   0x248383 mov     rbx, rcx
//   0x248386 sub     rsp, 28h
//   0x24838A mov     [rbp+var_48], rsi
//   0x24838E cmp     byte ptr [rsi+30h], 0
//   0x248392 mov     r14, fs:28h
//   0x24839B mov     [rbp+var_38], r14
//   0x24839F mov     r14d, r8d
//   0x2483A2 jz      short loc_248410
//   0x2483A4 lea     r15, [rbp+var_40]
//   0x2483A8 xor     r9d, r9d
//   0x2483AB xor     edx, edx
//   0x2483AD mov     [rbp+var_40], 0
//   0x2483B5 mov     r8, r15
//   0x2483B8 call    sub_247720
//   0x2483BD mov     rdi, r15
//   0x2483C0 mov     rbx, rax
//   0x2483C3 call    _clear_tinfo_t
//   0x2483C8 mov     rsi, [r12+148h]
//   0x2483D0 mov     edx, r13d
//   0x2483D3 mov     rdi, rbx
//   0x2483D6 call    sub_245920
//   0x2483DB test    r14b, r14b
//   0x2483DE jnz     loc_2484D0
//   0x2483E4 mov     rax, [rbp+var_38]
//   0x2483E8 sub     rax, fs:28h
//   0x2483F1 jnz     loc_248516
//   0x2483F7 lea     rsp, [rbp-28h]
//   0x2483FB mov     rax, rbx
//   0x2483FE pop     rbx
//   0x2483FF pop     r12
//   0x248401 pop     r13
//   0x248403 pop     r14
//   0x248405 pop     r15
//   0x248407 pop     rbp
//   0x248408 retn
//   0x248409 align 10h
//   0x248410 mov     rax, [rbp+var_48]
//   0x248414 xor     r9d, r9d
//   0x248417 mov     r8, rcx
//   0x24841A mov     rsi, [rax+18h]
//   0x24841E lea     rdx, [rax+20h]
//   0x248422 call    sub_245E70
//   0x248427 mov     esi, 3
//   0x24842C mov     rdi, [rax+30h]
//   0x248430 mov     r15, rax
//   0x248433 call    _get_tinfo_property
//   0x248438 cmp     eax, 1
//   0x24843B jnz     short loc_2484B8
//   0x24843D mov     edi, 40h ; '@'
//   0x248442 call    j__qalloc_or_throw
//   0x248447 sub     rsp, 8
//   0x24844B xor     r8d, r8d
//   0x24844E xor     edx, edx
//   0x248450 mov     rdi, [r12+148h]
//   0x248458 push    0
//   0x24845A mov     r9d, 1
//   0x248460 xor     esi, esi
//   0x248462 mov     rcx, 0FFFFFFFFFFFFFFFFh
//   0x248469 mov     rbx, rax
//   0x24846C call    sub_23D2D0
//   0x248471 pop     rdx
//   0x248472 pop     rcx
//   0x248473 mov     [rbx+20h], rax
//   0x248477 mov     rax, [rbp+var_48]
//   0x24847B mov     qword ptr [rbx], 0FFFFFFFFFFFFFFFFh
//   0x248482 mov     [rbx+8], r13d
//   0x248486 mov     qword ptr [rbx+0Ch], 0FFFFFFFFFFFFFFFFh
//   0x24848E mov     [rbx+18h], r15
//   0x248492 mov     qword ptr [rbx+28h], 0
//   0x24849A mov     qword ptr [rbx+30h], 0
//   0x2484A2 mov     dword ptr [rbx+38h], 0
//   0x2484A9 mov     rax, [rax+18h]
//   0x2484AD mov     [rbx], rax
//   0x2484B0 jmp     loc_2483C8
//   0x2484B5 align 8
//   0x2484B8 mov     rdi, r15
//   0x2484BB mov     rsi, rbx
//   0x2484BE call    sub_2411F0
//   0x2484C3 mov     r15, rax
//   0x2484C6 jmp     loc_24843D
//   0x2484CB align 10h
//   0x2484D0 mov     r14, [rbp+var_48]
//   0x2484D4 mov     rax, [r12+148h]
//   0x2484DC lea     r15, [rbp+var_40]
//   0x2484E0 mov     rdi, r15
//   0x2484E3 mov     edx, [r14+44h]
//   0x2484E7 mov     rsi, [rax+70h]
//   0x2484EB call    sub_327F40
//   0x2484F0 mov     rsi, [r14+18h]
//   0x2484F4 lea     rdx, [r14+40h]
//   0x2484F8 mov     r8, rbx
//   0x2484FB mov     rcx, r15
//   0x2484FE mov     rdi, r12
//   0x248501 call    sub_246DD0
//   0x248506 mov     rdi, r15
//   0x248509 mov     rbx, rax
//   0x24850C call    _clear_tinfo_t
//   0x248511 jmp     loc_2483E4
//   0x248516 call    ___stack_chk_fail
//   0x24851B mov     rbx, rax
//   0x24851E jmp     loc_46CF6
//   0x248523 mov     r15, rax
//   0x248526 jmp     loc_46D15
//   0x24852B mov     rbx, rax
//   0x24852E jmp     loc_46D34
// ============================================================

void sub_248370(/* signature unknown */)
{
    // see disassembly above
}

