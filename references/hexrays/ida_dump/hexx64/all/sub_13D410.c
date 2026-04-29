// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x13D410
// Name:           sub_13D410
// Function size:  562 bytes (132 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x13D410 push    r15
//   0x13D412 push    r14
//   0x13D414 push    r13
//   0x13D416 push    r12
//   0x13D418 push    rbp
//   0x13D419 mov     rbp, rsi
//   0x13D41C push    rbx
//   0x13D41D mov     rbx, rdi
//   0x13D420 sub     rsp, 98h
//   0x13D427 mov     rax, [rdi+5D8h]
//   0x13D42E mov     r12, fs:28h
//   0x13D437 mov     [rsp+0C8h+var_40], r12
//   0x13D43F mov     r12d, edx
//   0x13D442 mov     [rax+540h], rdi
//   0x13D449 mov     rax, [rdi+5D8h]
//   0x13D450 mov     qword ptr [rax+548h], 0
//   0x13D45B call    sub_1AED00
//   0x13D460 mov     rsi, rbp
//   0x13D463 mov     edx, r12d
//   0x13D466 mov     rdi, rbx
//   0x13D469 call    sub_373100
//   0x13D46E mov     ebp, eax
//   0x13D470 test    eax, eax
//   0x13D472 jz      short loc_13D4A0
//   0x13D474 mov     rax, [rsp+0C8h+var_40]
//   0x13D47C sub     rax, fs:28h
//   0x13D485 jnz     loc_13D635
//   0x13D48B add     rsp, 98h
//   0x13D492 mov     eax, ebp
//   0x13D494 pop     rbx
//   0x13D495 pop     rbp
//   0x13D496 pop     r12
//   0x13D498 pop     r13
//   0x13D49A pop     r14
//   0x13D49C pop     r15
//   0x13D49E retn
//   0x13D49F align 20h
//   0x13D4A0 lea     r15, [rsp+0C8h+var_B8]
//   0x13D4A5 lea     r14, [rsp+0C8h+var_A8]
//   0x13D4AA mov     ecx, r12d
//   0x13D4AD mov     rdi, rbx
//   0x13D4B0 pxor    xmm0, xmm0
//   0x13D4B4 mov     rdx, r15
//   0x13D4B7 mov     rsi, r14
//   0x13D4BA mov     [rsp+0C8h+var_A0], 0
//   0x13D4BF lea     r13, off_4DD9D8
//   0x13D4C6 movups  [rsp+0C8h+var_90], xmm0
//   0x13D4CB mov     [rsp+0C8h+var_A8], r13
//   0x13D4D0 mov     [rsp+0C8h+var_98], 0
//   0x13D4D9 mov     [rsp+0C8h+var_70], 0
//   0x13D4E2 mov     [rsp+0C8h+var_60], 0
//   0x13D4EB mov     [rsp+0C8h+var_48], 0
//   0x13D4F6 mov     [rsp+0C8h+var_68], 40h ; '@'
//   0x13D4FE mov     [rsp+0C8h+var_B8], 0
//   0x13D507 mov     [rsp+0C8h+var_B0], 0
//   0x13D510 movups  [rsp+0C8h+var_80], xmm0
//   0x13D515 movaps  [rsp+0C8h+var_58], xmm0
//   0x13D51A call    sub_1D60C0
//   0x13D51F mov     ebp, eax
//   0x13D521 test    eax, eax
//   0x13D523 jz      loc_13D5C8
//   0x13D529 mov     rdi, [rsp+0C8h+var_B8]
//   0x13D52E call    _qfree
//   0x13D533 mov     rdi, [rsp+0C8h+var_60]
//   0x13D538 mov     [rsp+0C8h+var_A8], r13
//   0x13D53D test    rdi, rdi
//   0x13D540 jz      short loc_13D5A3
//   0x13D542 mov     r13, qword ptr [rsp+0C8h+var_58]
//   0x13D547 test    r13, r13
//   0x13D54A jz      short loc_13D595
//   0x13D54C xor     r12d, r12d
//   0x13D54F nop
//   0x13D550 mov     rax, r12
//   0x13D553 shl     rax, 6
//   0x13D557 lea     rbx, [rdi+rax]
//   0x13D55B mov     rdi, [rbx+28h]
//   0x13D55F test    rdi, rdi
//   0x13D562 jz      short loc_13D571
//   0x13D564 mov     qword ptr [rbx+30h], 0
//   0x13D56C call    _qfree
//   0x13D571 mov     rdi, [rbx+10h]
//   0x13D575 test    rdi, rdi
//   0x13D578 jz      short loc_13D587
//   0x13D57A mov     qword ptr [rbx+18h], 0
//   0x13D582 call    _qfree
//   0x13D587 add     r12, 1
//   0x13D58B mov     rdi, [rsp+0C8h+var_60]
//   0x13D590 cmp     r13, r12
//   0x13D593 jnz     short loc_13D550
//   0x13D595 mov     qword ptr [rsp+0C8h+var_58], 0
//   0x13D59E call    _qfree
//   0x13D5A3 mov     rdi, [rsp+0C8h+var_98]
//   0x13D5A8 test    rdi, rdi
//   0x13D5AB jz      loc_13D474
//   0x13D5B1 mov     qword ptr [rsp+0C8h+var_90], 0
//   0x13D5BA call    _qfree
//   0x13D5BF jmp     loc_13D474
//   0x13D5C4 align 8
//   0x13D5C8 mov     rdx, r15
//   0x13D5CB mov     rsi, r14
//   0x13D5CE mov     rdi, rbx
//   0x13D5D1 call    sub_381200
//   0x13D5D6 mov     ebp, eax
//   0x13D5D8 test    eax, eax
//   0x13D5DA jnz     loc_13D529
//   0x13D5E0 mov     rdi, [rbx+5E0h]
//   0x13D5E7 mov     rsi, rbx
//   0x13D5EA mov     rax, [rdi]
//   0x13D5ED call    qword ptr [rax+10h]
//   0x13D5F0 mov     rsi, rax
//   0x13D5F3 mov     r8d, r12d
//   0x13D5F6 mov     rcx, r15
//   0x13D5F9 mov     rdx, r14
//   0x13D5FC mov     rdi, rbx
//   0x13D5FF mov     [rsp+0C8h+var_C0], rax
//   0x13D604 call    sub_1DF1C0
//   0x13D609 mov     rsi, [rsp+0C8h+var_C0]
//   0x13D60E mov     ebp, eax
//   0x13D610 test    rsi, rsi
//   0x13D613 jz      short loc_13D61E
//   0x13D615 mov     rax, [rsi]
//   0x13D618 mov     rdi, rsi
//   0x13D61B call    qword ptr [rax+8]
//   0x13D61E test    ebp, ebp
//   0x13D620 jnz     loc_13D529
//   0x13D626 mov     rdi, rbx
//   0x13D629 call    sub_1382E0
//   0x13D62E mov     ebp, eax
//   0x13D630 jmp     loc_13D529
//   0x13D635 call    ___stack_chk_fail
//   0x13D63A mov     rbx, rax
//   0x13D63D jmp     loc_39512
// ============================================================

void sub_13D410(/* signature unknown */)
{
    // see disassembly above
}

