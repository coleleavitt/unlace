// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x3BE460
// Name:           sub_3BE460
// Function size:  680 bytes (158 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x3BE460 push    r14; int
//   0x3BE462 xor     edx, edx
//   0x3BE464 push    r13; int
//   0x3BE466 push    r12; int
//   0x3BE468 push    rbp; int
//   0x3BE469 push    rbx; int
//   0x3BE46A mov     rbx, rdi
//   0x3BE46D sub     rsp, 30h
//   0x3BE471 mov     rbp, fs:28h
//   0x3BE47A mov     qword ptr [rsp+58h+var_30], rbp; int
//   0x3BE47F mov     rbp, rsi
//   0x3BE482 call    sub_3BDAC0
//   0x3BE487 mov     rax, [rbx+408h]
//   0x3BE48E cmp     rax, 0FFFFFFFFFFFFFFFEh
//   0x3BE492 jz      short loc_3BE49D
//   0x3BE494 cmp     rbp, [rbx+400h]
//   0x3BE49B jz      short loc_3BE4C0
//   0x3BE49D mov     rax, qword ptr [rsp+58h+var_30]
//   0x3BE4A2 sub     rax, fs:28h
//   0x3BE4AB jnz     loc_3BE6FE
//   0x3BE4B1 add     rsp, 30h
//   0x3BE4B5 pop     rbx
//   0x3BE4B6 pop     rbp
//   0x3BE4B7 pop     r12
//   0x3BE4B9 pop     r13
//   0x3BE4BB pop     r14
//   0x3BE4BD retn
//   0x3BE4BE align 20h
//   0x3BE4C0 cmp     rax, 0FFFFFFFFFFFFFFFFh
//   0x3BE4C4 jz      loc_3BE5A0
//   0x3BE4CA test    rax, rax
//   0x3BE4CD jz      short loc_3BE49D
//   0x3BE4CF mov     eax, [rax]
//   0x3BE4D1 test    ah, 1
//   0x3BE4D4 jz      short loc_3BE49D
//   0x3BE4D6 mov     r13, [rbx+3F8h]
//   0x3BE4DD mov     rsi, rbp
//   0x3BE4E0 mov     rdi, r13
//   0x3BE4E3 call    sub_8B8E80
//   0x3BE4E8 mov     r14, rax
//   0x3BE4EB test    rax, rax
//   0x3BE4EE jz      loc_3BE5E0
//   0x3BE4F4 mov     rdi, [r13+0]
//   0x3BE4F8 mov     ecx, [rdi+8]
//   0x3BE4FB sar     rax, cl
//   0x3BE4FE mov     esi, eax
//   0x3BE500 cmp     eax, [r13+48h]
//   0x3BE504 jnz     loc_3BE5C0
//   0x3BE50A mov     rax, [r13+50h]
//   0x3BE50E mov     byte ptr [rax-2], 1
//   0x3BE512 mov     rax, [r13+0]
//   0x3BE516 mov     byte ptr [r13+64h], 1
//   0x3BE51B mov     r12, [rax]
//   0x3BE51E sub     r12, 1
//   0x3BE522 and     r12, r14
//   0x3BE525 and     r12, 0FFFFFFFFFFFFFFFCh
//   0x3BE529 add     r12, [r13+50h]
//   0x3BE52D cmp     [rbx+408h], r12
//   0x3BE534 jnz     loc_3BE5EE
//   0x3BE53A test    r12, r12
//   0x3BE53D jz      loc_3BE49D
//   0x3BE543 mov     esi, [r12]
//   0x3BE547 mov     edx, esi
//   0x3BE549 mov     rdi, rbp
//   0x3BE54C and     edx, 0FFFFFE00h
//   0x3BE552 mov     [r12], edx
//   0x3BE556 call    sub_3BB8A0
//   0x3BE55B cmp     qword ptr [rbx+408h], 0FFFFFFFFFFFFFFFFh
//   0x3BE563 lea     rdx, [rbp+1]
//   0x3BE567 jz      loc_3BE620
//   0x3BE56D mov     rax, qword ptr [rsp+58h+var_30]
//   0x3BE572 sub     rax, fs:28h
//   0x3BE57B jnz     loc_3BE6FE
//   0x3BE581 mov     rdi, [rbx]
//   0x3BE584 add     rsp, 30h
//   0x3BE588 mov     rsi, rbp
//   0x3BE58B pop     rbx
//   0x3BE58C pop     rbp
//   0x3BE58D pop     r12
//   0x3BE58F pop     r13
//   0x3BE591 pop     r14
//   0x3BE593 jmp     sub_359AE0
//   0x3BE598 align 20h
//   0x3BE5A0 mov     r12, [rbx+3E8h]
//   0x3BE5A7 mov     esi, [r12+30h]
//   0x3BE5AC add     r12, 30h ; '0'
//   0x3BE5B0 test    esi, 100h
//   0x3BE5B6 jnz     short loc_3BE547
//   0x3BE5B8 jmp     loc_3BE49D
//   0x3BE5BD align 20h
//   0x3BE5C0 mov     [r13+48h], eax
//   0x3BE5C4 mov     edx, 1
//   0x3BE5C9 call    sub_8BCA60
//   0x3BE5CE mov     [r13+50h], rax
//   0x3BE5D2 jmp     loc_3BE50E
//   0x3BE5D7 align 20h
//   0x3BE5E0 cmp     qword ptr [rbx+408h], 0
//   0x3BE5E8 jz      loc_3BE49D
//   0x3BE5EE mov     rax, cs:under_debugger_ptr
//   0x3BE5F5 cmp     byte ptr [rax], 0
//   0x3BE5F8 jnz     loc_3BE703
//   0x3BE5FE mov     rax, qword ptr [rsp+58h+var_30]
//   0x3BE603 sub     rax, fs:28h
//   0x3BE60C jnz     loc_3BE6FE
//   0x3BE612 mov     edi, 34h ; '4'
//   0x3BE617 call    _interr
//   0x3BE61C align 20h
//   0x3BE620 mov     r12d, [r12]
//   0x3BE624 mov     eax, r12d
//   0x3BE627 and     eax, 1FFh
//   0x3BE62C cmp     eax, 100h
//   0x3BE631 jz      short loc_3BE6B1
//   0x3BE633 test    r12d, r12d
//   0x3BE636 jnz     short loc_3BE660
//   0x3BE638 mov     rdi, rbx
//   0x3BE63B mov     qword ptr [rsp+58h+var_50], rdx
//   0x3BE640 call    sub_3BE3F0
//   0x3BE645 mov     rdx, qword ptr [rsp+58h+var_50]
//   0x3BE64A cmp     qword ptr [rbx+490h], 0
//   0x3BE652 jnz     short loc_3BE672
//   0x3BE654 mov     byte ptr [rbx+4B0h], 1
//   0x3BE65B jmp     loc_3BE56D
//   0x3BE660 and     r12d, 0FFFFFh
//   0x3BE667 cmp     r12d, 200h
//   0x3BE66E jnz     short loc_3BE64A
//   0x3BE670 jmp     short loc_3BE638
//   0x3BE672 lea     r12, [rbx+488h]
//   0x3BE679 mov     rsi, rbp
//   0x3BE67C mov     qword ptr [rsp+58h+var_50], rdx; int
//   0x3BE681 mov     rdi, r12
//   0x3BE684 call    _rangeset_t_find_range
//   0x3BE689 mov     rdx, qword ptr [rsp+58h+var_50]; int
//   0x3BE68E test    rax, rax
//   0x3BE691 jz      short loc_3BE654
//   0x3BE693 lea     rsi, [rsp+58h+var_48]; int
//   0x3BE698 mov     rdi, r12; int
//   0x3BE69B mov     qword ptr [rsp+58h+var_40], rdx; int
//   0x3BE6A0 mov     qword ptr [rsp+58h+var_48], rbp; int
//   0x3BE6A5 call    _rangeset_t_sub
//   0x3BE6AA mov     rdx, qword ptr [rsp+58h+var_50]
//   0x3BE6AF jmp     short loc_3BE654
//   0x3BE6B1 cmp     qword ptr [rbx+490h], 0
//   0x3BE6B9 jnz     short loc_3BE6D0
//   0x3BE6BB and     r12d, 0FFFFFh
//   0x3BE6C2 cmp     r12d, 200h
//   0x3BE6C9 jnz     short loc_3BE654
//   0x3BE6CB jmp     loc_3BE638
//   0x3BE6D0 lea     rdi, [rbx+488h]
//   0x3BE6D7 mov     rsi, rbp
//   0x3BE6DA mov     qword ptr [rsp+58h+var_50], rdx
//   0x3BE6DF call    _rangeset_t_find_range
//   0x3BE6E4 mov     rdx, qword ptr [rsp+58h+var_50]
//   0x3BE6E9 test    rax, rax
//   0x3BE6EC jz      loc_3BE660
//   0x3BE6F2 and     r12d, 0FFFFFEFFh
//   0x3BE6F9 jmp     loc_3BE633
//   0x3BE6FE call    ___stack_chk_fail
//   0x3BE703 jmp     loc_2B3B0C
// ============================================================

void sub_3BE460(/* signature unknown */)
{
    // see disassembly above
}

