// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x2523C0
// Name:           sub_2523C0
// Function size:  511 bytes (114 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x2523C0 push    r15
//   0x2523C2 mov     esi, 1
//   0x2523C7 push    r14
//   0x2523C9 push    r13
//   0x2523CB push    r12
//   0x2523CD push    rbp
//   0x2523CE push    rbx
//   0x2523CF sub     rsp, 98h
//   0x2523D6 mov     r14, fs:28h
//   0x2523DF mov     [rsp+0C8h+var_40], r14
//   0x2523E7 mov     r14, rdi
//   0x2523EA call    sub_280010
//   0x2523EF mov     rdi, r14
//   0x2523F2 call    sub_280E10
//   0x2523F7 mov     rdi, r14
//   0x2523FA call    sub_26CBE0
//   0x2523FF mov     ebx, eax
//   0x252401 test    al, al
//   0x252403 jnz     short loc_252430
//   0x252405 mov     rax, [rsp+0C8h+var_40]
//   0x25240D sub     rax, fs:28h
//   0x252416 jnz     loc_2525AA
//   0x25241C add     rsp, 98h
//   0x252423 mov     eax, ebx
//   0x252425 pop     rbx
//   0x252426 pop     rbp
//   0x252427 pop     r12
//   0x252429 pop     r13
//   0x25242B pop     r14
//   0x25242D pop     r15
//   0x25242F retn
//   0x252430 xor     esi, esi
//   0x252432 mov     rdi, r14
//   0x252435 lea     rbp, [r14+10h]
//   0x252439 mov     r12, rsp
//   0x25243C call    sub_281170
//   0x252441 xor     esi, esi
//   0x252443 mov     rdi, r14
//   0x252446 lea     r13, off_4CCC78
//   0x25244D call    sub_280010
//   0x252452 pxor    xmm0, xmm0
//   0x252456 xor     edx, edx
//   0x252458 mov     rsi, rbp
//   0x25245B mov     rdi, rsp
//   0x25245E mov     [rsp+0C8h+var_C8], r13
//   0x252462 mov     [rsp+0C8h+var_C0], 0
//   0x25246A mov     [rsp+0C8h+var_B8], 0
//   0x252473 mov     [rsp+0C8h+var_A0], 0
//   0x25247C movups  [rsp+0C8h+var_B0], xmm0
//   0x252481 movaps  [rsp+0C8h+var_98], xmm0
//   0x252486 call    sub_251E00
//   0x25248B mov     rdi, r14
//   0x25248E call    sub_2522F0
//   0x252493 mov     rdx, [r14+8]
//   0x252497 mov     rax, [rdx+1B0h]
//   0x25249E mov     rdx, [rdx+1B8h]
//   0x2524A5 lea     rcx, [rdx+rdx*2]
//   0x2524A9 lea     rdx, [rdx+rcx*4]
//   0x2524AD shl     rdx, 3
//   0x2524B1 jz      short loc_2524EB
//   0x2524B3 nop     word ptr [rax+rax+00000000h]
//   0x2524BE xchg    ax, ax
//   0x2524C0 and     dword ptr [rax+18h], 0FFFFFFFEh
//   0x2524C4 mov     rcx, [r14+8]
//   0x2524C8 add     rax, 68h ; 'h'
//   0x2524CC mov     rdx, [rcx+1B8h]
//   0x2524D3 lea     rsi, [rdx+rdx*2]
//   0x2524D7 lea     rsi, [rdx+rsi*4]
//   0x2524DB mov     rdx, [rcx+1B0h]
//   0x2524E2 lea     rdx, [rdx+rsi*8]
//   0x2524E6 cmp     rax, rdx
//   0x2524E9 jnz     short loc_2524C0
//   0x2524EB lea     r14, [rsp+0C8h+var_88]
//   0x2524F0 pxor    xmm0, xmm0
//   0x2524F4 xor     edx, edx
//   0x2524F6 mov     rsi, rbp
//   0x2524F9 lea     r15, off_4CCCB8
//   0x252500 mov     rdi, r14
//   0x252503 mov     [rsp+0C8h+var_80], 0
//   0x25250B mov     [rsp+0C8h+var_78], 0
//   0x252514 mov     [rsp+0C8h+var_60], 0
//   0x25251D mov     [rsp+0C8h+var_88], r15
//   0x252522 movups  [rsp+0C8h+var_70], xmm0
//   0x252527 movaps  [rsp+0C8h+var_58], xmm0
//   0x25252C call    sub_251E00
//   0x252531 mov     rdi, [rsp+0C8h+var_60]
//   0x252536 lea     rbp, off_4C8E58
//   0x25253D mov     [rsp+0C8h+var_88], rbp
//   0x252542 test    rdi, rdi
//   0x252545 jz      short loc_252555
//   0x252547 mov     qword ptr [rsp+0C8h+var_58], 0
//   0x252550 call    _qfree
//   0x252555 mov     rdi, [rsp+0C8h+var_78]
//   0x25255A test    rdi, rdi
//   0x25255D jz      short loc_25256D
//   0x25255F mov     qword ptr [rsp+0C8h+var_70], 0
//   0x252568 call    _qfree
//   0x25256D mov     rdi, [rsp+0C8h+var_A0]
//   0x252572 mov     [rsp+0C8h+var_C8], rbp
//   0x252576 test    rdi, rdi
//   0x252579 jz      short loc_252589
//   0x25257B mov     qword ptr [rsp+0C8h+var_98], 0
//   0x252584 call    _qfree
//   0x252589 mov     rdi, [rsp+0C8h+var_B8]
//   0x25258E test    rdi, rdi
//   0x252591 jz      loc_252405
//   0x252597 mov     qword ptr [rsp+0C8h+var_B0], 0
//   0x2525A0 call    _qfree
//   0x2525A5 jmp     loc_252405
//   0x2525AA call    ___stack_chk_fail
//   0x2525AF mov     rbx, rax
//   0x2525B2 jmp     loc_476C9
//   0x2525B7 mov     rbx, rax
//   0x2525BA jmp     loc_476BC
// ============================================================

void sub_2523C0(/* signature unknown */)
{
    // see disassembly above
}

