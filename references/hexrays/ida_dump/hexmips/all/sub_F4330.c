// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0xF4330
// Name:           sub_F4330
// Function size:  394 bytes (84 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0xF4330 push    r14
//   0xF4332 lea     rax, off_4BD730
//   0xF4339 push    r13
//   0xF433B push    r12
//   0xF433D push    rbp
//   0xF433E push    rbx
//   0xF433F add     rsp, 0FFFFFFFFFFFFFF80h
//   0xF4343 mov     rbx, fs:28h
//   0xF434C mov     [rsp+0A8h+var_30], rbx
//   0xF4351 mov     rbx, rdi
//   0xF4354 lea     rsi, [rsp+0A8h+var_98]
//   0xF4359 mov     [rsp+0A8h+var_98], rax
//   0xF435E mov     [rsp+0A8h+var_90], 0
//   0xF4367 mov     [rsp+0A8h+var_88], 0
//   0xF4370 mov     [rsp+0A8h+var_80], 0
//   0xF4379 mov     [rsp+0A8h+var_78], 0
//   0xF4382 mov     [rsp+0A8h+var_70], 0FFFFFFFFFFFFFFFFh
//   0xF438B call    sub_11B7E0
//   0xF4390 cmp     [rsp+0A8h+var_70], 0FFFFFFFFFFFFFFFFh
//   0xF4396 jnz     short loc_F43C0
//   0xF4398 mov     rax, [rsp+0A8h+var_30]
//   0xF439D sub     rax, fs:28h
//   0xF43A6 jnz     loc_F44AD
//   0xF43AC sub     rsp, 0FFFFFFFFFFFFFF80h
//   0xF43B0 pop     rbx
//   0xF43B1 pop     rbp
//   0xF43B2 pop     r12
//   0xF43B4 pop     r13
//   0xF43B6 pop     r14
//   0xF43B8 retn
//   0xF43B9 align 20h
//   0xF43C0 mov     rax, [rbx+5E0h]
//   0xF43C7 lea     r12, [rsp+0A8h+var_A0]
//   0xF43CC mov     [rsp+0A8h+var_A0], 0
//   0xF43D5 mov     eax, [rax+50h]
//   0xF43D8 lea     edx, [rax+rax*2]
//   0xF43DB lea     r14d, [rax+rdx*4]
//   0xF43DF mov     eax, 100h
//   0xF43E4 mov     word ptr [rsp+0A8h+var_58], ax
//   0xF43E9 lea     rax, aSjljFunctionCo; "SjLj_Function_Context"
//   0xF43F0 movsxd  rbp, r14d
//   0xF43F3 mov     [rsp+0A8h+var_60], rax
//   0xF43F8 call    _get_idati
//   0xF43FD lea     r13, [rsp+0A8h+var_68]
//   0xF4402 mov     edx, 3Dh ; '='
//   0xF4407 mov     esi, 3Dh ; '='
//   0xF440C mov     rdi, r12
//   0xF440F mov     rcx, r13
//   0xF4412 mov     [rsp+0A8h+var_68], rax
//   0xF4417 call    _create_tinfo
//   0xF441C test    al, al
//   0xF441E jnz     short loc_F4490
//   0xF4420 mov     rax, [rsp+0A8h+var_70]
//   0xF4425 lea     rcx, off_4BD758
//   0xF442C mov     rsi, r13
//   0xF442F mov     rdi, rbx
//   0xF4432 mov     [rsp+0A8h+var_60], 0
//   0xF443B add     rbp, rax
//   0xF443E movq    xmm0, rax
//   0xF4443 mov     [rsp+0A8h+var_58], 0
//   0xF444C movq    xmm1, rbp
//   0xF4451 mov     [rsp+0A8h+var_68], rcx
//   0xF4456 mov     [rsp+0A8h+var_50], 0
//   0xF445F punpcklqdq xmm0, xmm1
//   0xF4463 mov     [rsp+0A8h+var_48], 0
//   0xF446C movups  [rsp+0A8h+var_40], xmm0
//   0xF4471 call    sub_11BA20
//   0xF4476 mov     rdi, rbx
//   0xF4479 call    sub_18C100
//   0xF447E mov     rdi, r12
//   0xF4481 call    _clear_tinfo_t
//   0xF4486 jmp     loc_F4398
//   0xF448B align 10h
//   0xF4490 mov     rsi, [rsp+0A8h+var_A0]
//   0xF4495 xor     edx, edx
//   0xF4497 xor     edi, edi
//   0xF4499 call    _get_tinfo_size
//   0xF449E cmp     r14d, eax
//   0xF44A1 cmovge  eax, r14d
//   0xF44A5 movsxd  rbp, eax
//   0xF44A8 jmp     loc_F4420
//   0xF44AD call    ___stack_chk_fail
//   0xF44B2 mov     rbx, rax
//   0xF44B5 jmp     loc_3422E
// ============================================================

void sub_F4330(/* signature unknown */)
{
    // see disassembly above
}

