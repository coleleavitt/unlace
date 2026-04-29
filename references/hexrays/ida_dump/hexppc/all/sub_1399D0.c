// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x1399D0
// Name:           sub_1399D0
// Function size:  562 bytes (132 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x1399D0 push    r15
//   0x1399D2 push    r14
//   0x1399D4 push    r13
//   0x1399D6 push    r12
//   0x1399D8 push    rbp
//   0x1399D9 mov     rbp, rsi
//   0x1399DC push    rbx
//   0x1399DD mov     rbx, rdi
//   0x1399E0 sub     rsp, 98h
//   0x1399E7 mov     rax, [rdi+5D8h]
//   0x1399EE mov     r12, fs:28h
//   0x1399F7 mov     [rsp+0C8h+var_40], r12
//   0x1399FF mov     r12d, edx
//   0x139A02 mov     [rax+540h], rdi
//   0x139A09 mov     rax, [rdi+5D8h]
//   0x139A10 mov     qword ptr [rax+548h], 0
//   0x139A1B call    sub_1AB2C0
//   0x139A20 mov     rsi, rbp
//   0x139A23 mov     edx, r12d
//   0x139A26 mov     rdi, rbx
//   0x139A29 call    sub_36EF80
//   0x139A2E mov     ebp, eax
//   0x139A30 test    eax, eax
//   0x139A32 jz      short loc_139A60
//   0x139A34 mov     rax, [rsp+0C8h+var_40]
//   0x139A3C sub     rax, fs:28h
//   0x139A45 jnz     loc_139BF5
//   0x139A4B add     rsp, 98h
//   0x139A52 mov     eax, ebp
//   0x139A54 pop     rbx
//   0x139A55 pop     rbp
//   0x139A56 pop     r12
//   0x139A58 pop     r13
//   0x139A5A pop     r14
//   0x139A5C pop     r15
//   0x139A5E retn
//   0x139A5F align 20h
//   0x139A60 lea     r15, [rsp+0C8h+var_B8]
//   0x139A65 lea     r14, [rsp+0C8h+var_A8]
//   0x139A6A mov     ecx, r12d
//   0x139A6D mov     rdi, rbx
//   0x139A70 pxor    xmm0, xmm0
//   0x139A74 mov     rdx, r15
//   0x139A77 mov     rsi, r14
//   0x139A7A mov     [rsp+0C8h+var_A0], 0
//   0x139A7F lea     r13, off_4CAB38
//   0x139A86 movups  [rsp+0C8h+var_90], xmm0
//   0x139A8B mov     [rsp+0C8h+var_A8], r13
//   0x139A90 mov     [rsp+0C8h+var_98], 0
//   0x139A99 mov     [rsp+0C8h+var_70], 0
//   0x139AA2 mov     [rsp+0C8h+var_60], 0
//   0x139AAB mov     [rsp+0C8h+var_48], 0
//   0x139AB6 mov     [rsp+0C8h+var_68], 40h ; '@'
//   0x139ABE mov     [rsp+0C8h+var_B8], 0
//   0x139AC7 mov     [rsp+0C8h+var_B0], 0
//   0x139AD0 movups  [rsp+0C8h+var_80], xmm0
//   0x139AD5 movaps  [rsp+0C8h+var_58], xmm0
//   0x139ADA call    sub_1D2500
//   0x139ADF mov     ebp, eax
//   0x139AE1 test    eax, eax
//   0x139AE3 jz      loc_139B88
//   0x139AE9 mov     rdi, [rsp+0C8h+var_B8]
//   0x139AEE call    _qfree
//   0x139AF3 mov     rdi, [rsp+0C8h+var_60]
//   0x139AF8 mov     [rsp+0C8h+var_A8], r13
//   0x139AFD test    rdi, rdi
//   0x139B00 jz      short loc_139B63
//   0x139B02 mov     r13, qword ptr [rsp+0C8h+var_58]
//   0x139B07 test    r13, r13
//   0x139B0A jz      short loc_139B55
//   0x139B0C xor     r12d, r12d
//   0x139B0F nop
//   0x139B10 mov     rax, r12
//   0x139B13 shl     rax, 6
//   0x139B17 lea     rbx, [rdi+rax]
//   0x139B1B mov     rdi, [rbx+28h]
//   0x139B1F test    rdi, rdi
//   0x139B22 jz      short loc_139B31
//   0x139B24 mov     qword ptr [rbx+30h], 0
//   0x139B2C call    _qfree
//   0x139B31 mov     rdi, [rbx+10h]
//   0x139B35 test    rdi, rdi
//   0x139B38 jz      short loc_139B47
//   0x139B3A mov     qword ptr [rbx+18h], 0
//   0x139B42 call    _qfree
//   0x139B47 add     r12, 1
//   0x139B4B mov     rdi, [rsp+0C8h+var_60]
//   0x139B50 cmp     r13, r12
//   0x139B53 jnz     short loc_139B10
//   0x139B55 mov     qword ptr [rsp+0C8h+var_58], 0
//   0x139B5E call    _qfree
//   0x139B63 mov     rdi, [rsp+0C8h+var_98]
//   0x139B68 test    rdi, rdi
//   0x139B6B jz      loc_139A34
//   0x139B71 mov     qword ptr [rsp+0C8h+var_90], 0
//   0x139B7A call    _qfree
//   0x139B7F jmp     loc_139A34
//   0x139B84 align 8
//   0x139B88 mov     rdx, r15
//   0x139B8B mov     rsi, r14
//   0x139B8E mov     rdi, rbx
//   0x139B91 call    sub_37D080
//   0x139B96 mov     ebp, eax
//   0x139B98 test    eax, eax
//   0x139B9A jnz     loc_139AE9
//   0x139BA0 mov     rdi, [rbx+5E0h]
//   0x139BA7 mov     rsi, rbx
//   0x139BAA mov     rax, [rdi]
//   0x139BAD call    qword ptr [rax+10h]
//   0x139BB0 mov     rsi, rax
//   0x139BB3 mov     r8d, r12d
//   0x139BB6 mov     rcx, r15
//   0x139BB9 mov     rdx, r14
//   0x139BBC mov     rdi, rbx
//   0x139BBF mov     [rsp+0C8h+var_C0], rax
//   0x139BC4 call    sub_1DB540
//   0x139BC9 mov     rsi, [rsp+0C8h+var_C0]
//   0x139BCE mov     ebp, eax
//   0x139BD0 test    rsi, rsi
//   0x139BD3 jz      short loc_139BDE
//   0x139BD5 mov     rax, [rsi]
//   0x139BD8 mov     rdi, rsi
//   0x139BDB call    qword ptr [rax+8]
//   0x139BDE test    ebp, ebp
//   0x139BE0 jnz     loc_139AE9
//   0x139BE6 mov     rdi, rbx
//   0x139BE9 call    sub_1348A0
//   0x139BEE mov     ebp, eax
//   0x139BF0 jmp     loc_139AE9
//   0x139BF5 call    ___stack_chk_fail
//   0x139BFA mov     rbx, rax
//   0x139BFD jmp     loc_38392
// ============================================================

void sub_1399D0(/* signature unknown */)
{
    // see disassembly above
}

