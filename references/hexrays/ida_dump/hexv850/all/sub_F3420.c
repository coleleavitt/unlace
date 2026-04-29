// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0xF3420
// Name:           sub_F3420
// Function size:  114 bytes (39 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0xF3420 push    r13
//   0xF3422 mov     r13, rdi
//   0xF3425 push    r12
//   0xF3427 mov     r12, rsi
//   0xF342A push    rbp
//   0xF342B xor     ebp, ebp
//   0xF342D push    rbx
//   0xF342E xor     ebx, ebx
//   0xF3430 sub     rsp, 8
//   0xF3434 mov     eax, [rdi+40h]
//   0xF3437 test    eax, eax
//   0xF3439 jg      short loc_F3448
//   0xF343B jmp     short loc_F346B
//   0xF343D align 20h
//   0xF3440 add     rbx, 1
//   0xF3444 cmp     ebx, eax
//   0xF3446 jnb     short loc_F3478
//   0xF3448 mov     rax, [r13+210h]
//   0xF344F mov     rsi, r12
//   0xF3452 mov     rdi, [rax+rbx*8]
//   0xF3456 call    sub_16A540
//   0xF345B lea     edx, [rbx+1]
//   0xF345E movzx   eax, al
//   0xF3461 add     ebp, eax
//   0xF3463 mov     eax, [r13+40h]
//   0xF3467 cmp     eax, edx
//   0xF3469 jg      short loc_F3440
//   0xF346B add     rsp, 8
//   0xF346F mov     eax, ebp
//   0xF3471 pop     rbx
//   0xF3472 pop     rbp
//   0xF3473 pop     r12
//   0xF3475 pop     r13
//   0xF3477 retn
//   0xF3478 mov     rax, cs:under_debugger_ptr
//   0xF347F cmp     byte ptr [rax], 0
//   0xF3482 jnz     loc_34112
//   0xF3488 mov     edi, 0CDEFh
//   0xF348D call    sub_37CFE0
// ============================================================

void sub_F3420(/* signature unknown */)
{
    // see disassembly above
}

