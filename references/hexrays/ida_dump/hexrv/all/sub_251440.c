// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x251440
// Name:           sub_251440
// Function size:  511 bytes (114 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x251440 push    r15
//   0x251442 mov     esi, 1
//   0x251447 push    r14
//   0x251449 push    r13
//   0x25144B push    r12
//   0x25144D push    rbp
//   0x25144E push    rbx
//   0x25144F sub     rsp, 98h
//   0x251456 mov     r14, fs:28h
//   0x25145F mov     [rsp+0C8h+var_40], r14
//   0x251467 mov     r14, rdi
//   0x25146A call    sub_27F090
//   0x25146F mov     rdi, r14
//   0x251472 call    sub_27FE90
//   0x251477 mov     rdi, r14
//   0x25147A call    sub_26BC60
//   0x25147F mov     ebx, eax
//   0x251481 test    al, al
//   0x251483 jnz     short loc_2514B0
//   0x251485 mov     rax, [rsp+0C8h+var_40]
//   0x25148D sub     rax, fs:28h
//   0x251496 jnz     loc_25162A
//   0x25149C add     rsp, 98h
//   0x2514A3 mov     eax, ebx
//   0x2514A5 pop     rbx
//   0x2514A6 pop     rbp
//   0x2514A7 pop     r12
//   0x2514A9 pop     r13
//   0x2514AB pop     r14
//   0x2514AD pop     r15
//   0x2514AF retn
//   0x2514B0 xor     esi, esi
//   0x2514B2 mov     rdi, r14
//   0x2514B5 lea     rbp, [r14+10h]
//   0x2514B9 mov     r12, rsp
//   0x2514BC call    sub_2801F0
//   0x2514C1 xor     esi, esi
//   0x2514C3 mov     rdi, r14
//   0x2514C6 lea     r13, off_4B2598
//   0x2514CD call    sub_27F090
//   0x2514D2 pxor    xmm0, xmm0
//   0x2514D6 xor     edx, edx
//   0x2514D8 mov     rsi, rbp
//   0x2514DB mov     rdi, rsp
//   0x2514DE mov     [rsp+0C8h+var_C8], r13
//   0x2514E2 mov     [rsp+0C8h+var_C0], 0
//   0x2514EA mov     [rsp+0C8h+var_B8], 0
//   0x2514F3 mov     [rsp+0C8h+var_A0], 0
//   0x2514FC movups  [rsp+0C8h+var_B0], xmm0
//   0x251501 movaps  [rsp+0C8h+var_98], xmm0
//   0x251506 call    sub_250E80
//   0x25150B mov     rdi, r14
//   0x25150E call    sub_251370
//   0x251513 mov     rdx, [r14+8]
//   0x251517 mov     rax, [rdx+1B0h]
//   0x25151E mov     rdx, [rdx+1B8h]
//   0x251525 lea     rcx, [rdx+rdx*2]
//   0x251529 lea     rdx, [rdx+rcx*4]
//   0x25152D shl     rdx, 3
//   0x251531 jz      short loc_25156B
//   0x251533 nop     word ptr [rax+rax+00000000h]
//   0x25153E xchg    ax, ax
//   0x251540 and     dword ptr [rax+18h], 0FFFFFFFEh
//   0x251544 mov     rcx, [r14+8]
//   0x251548 add     rax, 68h ; 'h'
//   0x25154C mov     rdx, [rcx+1B8h]
//   0x251553 lea     rsi, [rdx+rdx*2]
//   0x251557 lea     rsi, [rdx+rsi*4]
//   0x25155B mov     rdx, [rcx+1B0h]
//   0x251562 lea     rdx, [rdx+rsi*8]
//   0x251566 cmp     rax, rdx
//   0x251569 jnz     short loc_251540
//   0x25156B lea     r14, [rsp+0C8h+var_88]
//   0x251570 pxor    xmm0, xmm0
//   0x251574 xor     edx, edx
//   0x251576 mov     rsi, rbp
//   0x251579 lea     r15, off_4B25D8
//   0x251580 mov     rdi, r14
//   0x251583 mov     [rsp+0C8h+var_80], 0
//   0x25158B mov     [rsp+0C8h+var_78], 0
//   0x251594 mov     [rsp+0C8h+var_60], 0
//   0x25159D mov     [rsp+0C8h+var_88], r15
//   0x2515A2 movups  [rsp+0C8h+var_70], xmm0
//   0x2515A7 movaps  [rsp+0C8h+var_58], xmm0
//   0x2515AC call    sub_250E80
//   0x2515B1 mov     rdi, [rsp+0C8h+var_60]
//   0x2515B6 lea     rbp, off_4AE778
//   0x2515BD mov     [rsp+0C8h+var_88], rbp
//   0x2515C2 test    rdi, rdi
//   0x2515C5 jz      short loc_2515D5
//   0x2515C7 mov     qword ptr [rsp+0C8h+var_58], 0
//   0x2515D0 call    _qfree
//   0x2515D5 mov     rdi, [rsp+0C8h+var_78]
//   0x2515DA test    rdi, rdi
//   0x2515DD jz      short loc_2515ED
//   0x2515DF mov     qword ptr [rsp+0C8h+var_70], 0
//   0x2515E8 call    _qfree
//   0x2515ED mov     rdi, [rsp+0C8h+var_A0]
//   0x2515F2 mov     [rsp+0C8h+var_C8], rbp
//   0x2515F6 test    rdi, rdi
//   0x2515F9 jz      short loc_251609
//   0x2515FB mov     qword ptr [rsp+0C8h+var_98], 0
//   0x251604 call    _qfree
//   0x251609 mov     rdi, [rsp+0C8h+var_B8]
//   0x25160E test    rdi, rdi
//   0x251611 jz      loc_251485
//   0x251617 mov     qword ptr [rsp+0C8h+var_B0], 0
//   0x251620 call    _qfree
//   0x251625 jmp     loc_251485
//   0x25162A call    ___stack_chk_fail
//   0x25162F mov     rbx, rax
//   0x251632 jmp     loc_47665
//   0x251637 mov     rbx, rax
//   0x25163A jmp     loc_47658
// ============================================================

void sub_251440(/* signature unknown */)
{
    // see disassembly above
}

