// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x6883F0
// Name:           sub_6883F0
// Function size:  456 bytes (98 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x6883F0 push    r13
//   0x6883F2 push    r12
//   0x6883F4 push    rbp
//   0x6883F5 mov     rbp, rdi
//   0x6883F8 push    rbx
//   0x6883F9 mov     rbx, rsi
//   0x6883FC sub     rsp, 0A8h
//   0x688403 mov     rax, [rdi+10h]
//   0x688407 mov     r12, fs:28h
//   0x688410 mov     [rsp+0C8h+var_30], r12
//   0x688418 mov     r12, rdx
//   0x68841B test    byte ptr [rax+0Ch], 8
//   0x68841F jnz     loc_688590
//   0x688425 mov     rdx, r12
//   0x688428 mov     rsi, rbx
//   0x68842B lea     rdi, aMainFunctionAt; "main() function at %a, named \"%s\"\n"
//   0x688432 xor     eax, eax
//   0x688434 call    sub_368890
//   0x688439 mov     ecx, 1800h
//   0x68843E mov     rdx, r12; src
//   0x688441 mov     rsi, rbx; int
//   0x688444 lea     r12, [rbx+1]
//   0x688448 mov     rdi, rbp; int
//   0x68844B call    sub_4D7EC0
//   0x688450 mov     rdi, rbx
//   0x688453 mov     edx, 14h
//   0x688458 mov     rsi, r12
//   0x68845B call    _auto_mark_range
//   0x688460 mov     rdi, rbx
//   0x688463 mov     edx, 1Eh
//   0x688468 mov     rsi, r12
//   0x68846B call    _auto_mark_range
//   0x688470 mov     rdi, [rbp+0]
//   0x688474 mov     rdx, rbx
//   0x688477 mov     esi, 12h
//   0x68847C call    sub_632610
//   0x688481 mov     rdi, [rbp+0]
//   0x688485 mov     esi, 12h
//   0x68848A call    sub_631AD0
//   0x68848F mov     rdi, rbp
//   0x688492 mov     rsi, rax
//   0x688495 mov     rbx, rax
//   0x688498 call    sub_5CAA10
//   0x68849D test    rax, rax
//   0x6884A0 jz      short loc_6884A7
//   0x6884A2 cmp     rbx, [rax]
//   0x6884A5 jnz     short loc_6884E0
//   0x6884A7 mov     rax, [rsp+0C8h+var_30]
//   0x6884AF sub     rax, fs:28h
//   0x6884B8 jnz     loc_6885B3
//   0x6884BE add     rsp, 0A8h
//   0x6884C5 mov     rsi, rbx
//   0x6884C8 mov     edi, 5
//   0x6884CD xor     eax, eax
//   0x6884CF pop     rbx
//   0x6884D0 pop     rbp
//   0x6884D1 pop     r12
//   0x6884D3 pop     r13
//   0x6884D5 jmp     sub_39ADA0
//   0x6884DA align 20h
//   0x6884E0 mov     rdi, rbp; int
//   0x6884E3 mov     rsi, rbx
//   0x6884E6 call    sub_5D4180
//   0x6884EB xor     eax, eax
//   0x6884ED pxor    xmm0, xmm0
//   0x6884F1 mov     rdi, rsp
//   0x6884F4 mov     [rsp+0C8h+var_A0], ax
//   0x6884F9 mov     rax, cs:qword_23ACBC0
//   0x688500 mov     [rsp+0C8h+var_C8], rbx
//   0x688504 mov     [rsp+0C8h+var_C0], 0FFFFFFFFFFFFFFFFh
//   0x68850D mov     [rsp+0C8h+var_B8], 200h
//   0x688516 mov     [rsp+0C8h+var_B0], 0FFFFFFFFFFFFFFFFh
//   0x68851F mov     [rsp+0C8h+var_A8], 0
//   0x688528 mov     [rsp+0C8h+var_88], rax
//   0x68852D mov     [rsp+0C8h+var_80], 0
//   0x688536 mov     [rsp+0C8h+var_78], 0
//   0x68853E mov     [rsp+0C8h+var_70], 0
//   0x688547 mov     [rsp+0C8h+var_68], 0
//   0x68854F mov     [rsp+0C8h+var_60], 0
//   0x688558 mov     [rsp+0C8h+var_58], 0
//   0x688560 mov     [rsp+0C8h+var_50], 0
//   0x688569 mov     [rsp+0C8h+var_48], 0
//   0x688574 mov     [rsp+0C8h+var_40], 0
//   0x688580 movaps  [rsp+0C8h+var_98], xmm0
//   0x688585 call    _add_func_ex
//   0x68858A jmp     loc_6884A7
//   0x68858F align 10h
//   0x688590 mov     r13, rsi
//   0x688593 mov     edx, esi
//   0x688595 mov     edi, 57h ; 'W'
//   0x68859A xor     eax, eax
//   0x68859C and     r13, 0FFFFFFFFFFFFFFFEh
//   0x6885A0 and     edx, 1
//   0x6885A3 mov     rsi, r13
//   0x6885A6 mov     rbx, r13
//   0x6885A9 call    sub_3792E0
//   0x6885AE jmp     loc_688425
//   0x6885B3 call    ___stack_chk_fail
// ============================================================

void sub_6883F0(/* signature unknown */)
{
    // see disassembly above
}

