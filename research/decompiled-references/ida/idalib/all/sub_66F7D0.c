// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x66F7D0
// Name:           sub_66F7D0
// Function size:  437 bytes (114 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x66F7D0 push    r15
//   0x66F7D2 push    r14
//   0x66F7D4 push    r13
//   0x66F7D6 push    r12
//   0x66F7D8 push    rbp
//   0x66F7D9 push    rbx
//   0x66F7DA sub     rsp, 58h
//   0x66F7DE mov     qword ptr [rsp+88h+var_80], rsi
//   0x66F7E3 mov     rax, fs:28h
//   0x66F7EC mov     [rsp+88h+var_40], rax
//   0x66F7F1 mov     rax, [rsi+8]
//   0x66F7F5 test    rax, rax
//   0x66F7F8 jz      loc_66F970
//   0x66F7FE mov     rdx, [rsi]
//   0x66F801 pxor    xmm0, xmm0
//   0x66F805 shl     rax, 4
//   0x66F809 mov     r12, rdi
//   0x66F80C mov     [rsp+88h+var_50], 0
//   0x66F815 lea     r14, [rsp+88h+var_78]
//   0x66F81A mov     [rsp+88h+var_48], 0FFFFFFFFh
//   0x66F822 movups  [rsp+88h+var_60], xmm0
//   0x66F827 mov     r13, [rdx+rax-8]
//   0x66F82C mov     [rsp+88h+ptr], 0
//   0x66F835 mov     rbp, [rdx]
//   0x66F838 mov     rbx, rbp
//   0x66F83B jmp     short loc_66F89B
//   0x66F83D align 20h
//   0x66F840 mov     rdi, [r12]
//   0x66F844 mov     rsi, rbx
//   0x66F847 call    sub_3BD7D0
//   0x66F84C mov     r15, rax
//   0x66F84F cmp     rbx, rbp
//   0x66F852 jnz     short loc_66F871
//   0x66F854 test    rax, rax
//   0x66F857 jz      short loc_66F871
//   0x66F859 mov     rsi, rbx
//   0x66F85C mov     rdi, r12
//   0x66F85F call    sub_3BD700
//   0x66F864 mov     rdx, r15
//   0x66F867 mov     rbp, rax
//   0x66F86A sub     rdx, rbx
//   0x66F86D lea     r15, [rdx+rax]
//   0x66F871 lea     rdx, [rbx+r15]; int
//   0x66F875 lea     rdi, [rsp+88h+ptr]; int
//   0x66F87A mov     rsi, r14; int
//   0x66F87D mov     [rsp+88h+var_78], rbx; int
//   0x66F882 mov     qword ptr [rsp+88h+var_70], rdx; int
//   0x66F887 call    _rangeset_t_add
//   0x66F88C mov     rdi, [r12]
//   0x66F890 mov     rsi, rbx
//   0x66F893 call    sub_3BD630
//   0x66F898 mov     rbx, rax
//   0x66F89B cmp     rbx, r13
//   0x66F89E jb      short loc_66F840
//   0x66F8A0 mov     rsi, qword ptr [rsp+88h+var_80]; int
//   0x66F8A5 lea     rdi, [rsp+88h+ptr]; int
//   0x66F8AA call    _rangeset_t_intersect
//   0x66F8AF mov     r13, qword ptr [rsp+88h+var_60]
//   0x66F8B4 mov     rbp, [rsp+88h+ptr]
//   0x66F8B9 shl     r13, 4
//   0x66F8BD add     r13, rbp
//   0x66F8C0 cmp     r13, rbp
//   0x66F8C3 jz      loc_66F974
//   0x66F8C9 add     r12, 658h
//   0x66F8D0 mov     rbx, [rbp+0]
//   0x66F8D4 cmp     rbx, [rbp+8]
//   0x66F8D8 jb      short loc_66F8EA
//   0x66F8DA jmp     short loc_66F950
//   0x66F8DC align 20h
//   0x66F8E0 mov     rbx, [rax+8]
//   0x66F8E4 cmp     rbx, [rbp+8]
//   0x66F8E8 jnb     short loc_66F950
//   0x66F8EA mov     rsi, rbx
//   0x66F8ED mov     rdi, r12
//   0x66F8F0 call    sub_505D70
//   0x66F8F5 test    rax, rax
//   0x66F8F8 jnz     short loc_66F8E0
//   0x66F8FA mov     rsi, rbx
//   0x66F8FD lea     rdi, aADoesNotBelong; "%a: does not belong to any segment and "...
//   0x66F904 call    sub_368890
//   0x66F909 mov     rbp, [rsp+88h+ptr]
//   0x66F90E mov     ebx, 1
//   0x66F913 test    rbp, rbp
//   0x66F916 jz      short loc_66F929
//   0x66F918 mov     qword ptr [rsp+88h+var_60], 0
//   0x66F921 mov     rdi, rbp; ptr
//   0x66F924 call    _qfree
//   0x66F929 mov     rax, [rsp+88h+var_40]
//   0x66F92E sub     rax, fs:28h
//   0x66F937 jnz     short loc_66F978
//   0x66F939 add     rsp, 58h
//   0x66F93D mov     eax, ebx
//   0x66F93F pop     rbx
//   0x66F940 pop     rbp
//   0x66F941 pop     r12
//   0x66F943 pop     r13
//   0x66F945 pop     r14
//   0x66F947 pop     r15
//   0x66F949 retn
//   0x66F94A align 10h
//   0x66F950 add     rbp, 10h
//   0x66F954 cmp     r13, rbp
//   0x66F957 jnz     loc_66F8D0
//   0x66F95D mov     rbp, [rsp+88h+ptr]
//   0x66F962 xor     ebx, ebx
//   0x66F964 jmp     short loc_66F913
//   0x66F966 align 10h
//   0x66F970 xor     ebx, ebx
//   0x66F972 jmp     short loc_66F929
//   0x66F974 xor     ebx, ebx
//   0x66F976 jmp     short loc_66F913
//   0x66F978 call    ___stack_chk_fail
//   0x66F97D mov     rbx, rax
//   0x66F980 jmp     loc_2D2204
// ============================================================

void sub_66F7D0(/* signature unknown */)
{
    // see disassembly above
}

