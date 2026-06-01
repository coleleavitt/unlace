// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x167810
// Name:           sub_167810
// Function size:  428 bytes (109 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x167810 push    r15
//   0x167812 mov     r15d, 0FFFFFFFFh
//   0x167818 push    r14
//   0x16781A push    r13
//   0x16781C push    r12
//   0x16781E mov     r12, rsi
//   0x167821 push    rbp
//   0x167822 mov     rbp, rdi
//   0x167825 push    rbx
//   0x167826 xor     ebx, ebx
//   0x167828 sub     rsp, 68h
//   0x16782C mov     rax, [rdi+1E0h]
//   0x167833 mov     r13, fs:28h
//   0x16783C mov     [rsp+98h+var_40], r13
//   0x167841 mov     r13d, edx
//   0x167844 mov     rax, [rax+70h]
//   0x167848 mov     [rsp+98h+var_90], rax
//   0x16784D mov     eax, r13d
//   0x167850 and     eax, 4
//   0x167853 mov     [rsp+98h+var_94], eax
//   0x167857 jmp     loc_1678F9
//   0x16785C align 20h
//   0x167860 test    r15d, r15d
//   0x167863 jz      loc_167940
//   0x167869 sub     rsp, 8
//   0x16786D mov     rcx, r12
//   0x167870 mov     rdx, rbp
//   0x167873 xor     r8d, r8d
//   0x167876 mov     [rsp+0A0h+var_80], 0FFFFFFFFFFFFFFFFh
//   0x16787F mov     rdi, r12
//   0x167882 push    r13
//   0x167884 mov     rsi, [rsp+0A8h+var_90]
//   0x167889 lea     r9, [rsp+0A8h+var_80]
//   0x16788E call    sub_15BC70
//   0x167893 mov     r15d, eax
//   0x167896 mov     rax, [rsp+0A8h+var_80]
//   0x16789B pop     rdx
//   0x16789C pop     rcx
//   0x16789D cmp     rax, 0FFFFFFFFFFFFFFFFh
//   0x1678A1 jz      short loc_1678EA
//   0x1678A3 mov     rdx, [rbp+40h]
//   0x1678A7 lea     rsi, [rsp+98h+var_78]
//   0x1678AC mov     rdi, r12
//   0x1678AF mov     [rsp+98h+var_68], rbp
//   0x1678B4 lea     rcx, off_4DDD50
//   0x1678BB mov     [rsp+98h+var_60], r12
//   0x1678C0 mov     [rsp+98h+var_70], rdx
//   0x1678C5 mov     [rsp+98h+var_58], 0
//   0x1678CE mov     [rsp+98h+var_78], rcx
//   0x1678D3 mov     [rsp+98h+var_50], rax
//   0x1678D8 mov     [rsp+98h+var_48], 0
//   0x1678E0 call    sub_11F760
//   0x1678E5 add     r14d, [rsp+98h+var_48]
//   0x1678EA mov     eax, r14d
//   0x1678ED or      eax, r15d
//   0x1678F0 jz      short loc_167940
//   0x1678F2 lea     r10d, [r14+r15]
//   0x1678F6 add     ebx, r10d
//   0x1678F9 mov     rsi, r12
//   0x1678FC mov     edx, r13d
//   0x1678FF mov     rdi, rbp
//   0x167902 xor     r14d, r14d
//   0x167905 call    sub_159FC0
//   0x16790A mov     esi, [rsp+98h+var_94]
//   0x16790E movzx   eax, al
//   0x167911 add     ebx, eax
//   0x167913 test    esi, esi
//   0x167915 jz      loc_167860
//   0x16791B mov     rsi, r12
//   0x16791E mov     rdi, rbp
//   0x167921 call    sub_B36D0
//   0x167926 movzx   r14d, al
//   0x16792A or      r15d, r14d
//   0x16792D test    r15d, r15d
//   0x167930 jnz     loc_167869
//   0x167936 nop     word ptr [rax+rax+00000000h]
//   0x167940 mov     rax, [rbp+1E0h]
//   0x167947 mov     r14, [rax+428h]
//   0x16794E mov     rax, [rax+430h]
//   0x167955 shl     rax, 3
//   0x167959 jz      short loc_167996
//   0x16795B nop     dword ptr [rax+rax+00h]
//   0x167960 mov     rdi, [r14]
//   0x167963 mov     rdx, r12
//   0x167966 mov     ecx, r13d
//   0x167969 mov     rsi, rbp
//   0x16796C add     r14, 8
//   0x167970 mov     rax, [rdi]
//   0x167973 call    qword ptr [rax+10h]
//   0x167976 add     ebx, eax
//   0x167978 mov     rax, [rbp+1E0h]
//   0x16797F mov     rdx, [rax+430h]
//   0x167986 mov     rax, [rax+428h]
//   0x16798D lea     rax, [rax+rdx*8]
//   0x167991 cmp     r14, rax
//   0x167994 jnz     short loc_167960
//   0x167996 mov     rax, [rsp+98h+var_40]
//   0x16799B sub     rax, fs:28h
//   0x1679A4 jnz     short loc_1679B7
//   0x1679A6 add     rsp, 68h
//   0x1679AA mov     eax, ebx
//   0x1679AC pop     rbx
//   0x1679AD pop     rbp
//   0x1679AE pop     r12
//   0x1679B0 pop     r13
//   0x1679B2 pop     r14
//   0x1679B4 pop     r15
//   0x1679B6 retn
//   0x1679B7 call    ___stack_chk_fail
// ============================================================

void sub_167810(/* signature unknown */)
{
    // see disassembly above
}

