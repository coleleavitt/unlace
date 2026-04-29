// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x30F7C0
// Name:           sub_30F7C0
// Function size:  1013 bytes (205 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x30F7C0 push    r14
//   0x30F7C2 push    r13
//   0x30F7C4 push    r12
//   0x30F7C6 push    rbp
//   0x30F7C7 push    rbx
//   0x30F7C8 sub     rsp, 20h
//   0x30F7CC mov     rbp, fs:28h
//   0x30F7D5 mov     [rsp+48h+var_30], rbp
//   0x30F7DA mov     rbp, rdi
//   0x30F7DD mov     rdi, [rdi+20h]
//   0x30F7E1 mov     eax, [rdi]
//   0x30F7E3 cmp     eax, 4
//   0x30F7E6 jz      short loc_30F810
//   0x30F7E8 cmp     eax, 14h
//   0x30F7EB jz      short loc_30F84F
//   0x30F7ED mov     rax, [rsp+48h+var_30]
//   0x30F7F2 sub     rax, fs:28h
//   0x30F7FB jnz     loc_30FB74
//   0x30F801 add     rsp, 20h
//   0x30F805 xor     eax, eax
//   0x30F807 pop     rbx
//   0x30F808 pop     rbp
//   0x30F809 pop     r12
//   0x30F80B pop     r13
//   0x30F80D pop     r14
//   0x30F80F retn
//   0x30F810 add     rdi, 20h ; ' '
//   0x30F814 lea     rsi, [rsp+48h+var_38]
//   0x30F819 xor     edx, edx
//   0x30F81B mov     ebx, [rbp+38h]
//   0x30F81E call    sub_11F7C0
//   0x30F823 mov     rdi, [rbp+20h]
//   0x30F827 test    al, al
//   0x30F829 jz      short loc_30F848
//   0x30F82B cmp     rbx, [rsp+48h+var_38]
//   0x30F830 jnz     short loc_30F848
//   0x30F832 lea     rsi, [rdi+40h]
//   0x30F836 lea     rdi, [rbp+28h]
//   0x30F83A call    sub_124BC0
//   0x30F83F jmp     short loc_30F7ED
//   0x30F841 align 8
//   0x30F848 mov     eax, [rdi]
//   0x30F84A cmp     eax, 14h
//   0x30F84D jnz     short loc_30F7ED
//   0x30F84F mov     rax, [rbp+8]
//   0x30F853 cmp     byte ptr [rdi+20h], 1
//   0x30F857 mov     rbx, [rax+5E0h]
//   0x30F85E jz      loc_30FAE8
//   0x30F864 lea     rsi, [rsp+48h+var_40]
//   0x30F869 call    sub_11C2E0
//   0x30F86E test    rax, rax
//   0x30F871 jz      loc_30F7ED
//   0x30F877 mov     rdx, [rsp+48h+var_40]
//   0x30F87C cmp     byte ptr [rdx], 1
//   0x30F87F jnz     loc_30F7ED
//   0x30F885 mov     ecx, [rdx+8]
//   0x30F888 cmp     [rbx+3Ch], ecx
//   0x30F88B jnz     loc_30F7ED
//   0x30F891 xor     edx, edx
//   0x30F893 lea     rsi, [rsp+48h+var_38]
//   0x30F898 mov     rdi, rax
//   0x30F89B mov     ebx, [rbp+38h]
//   0x30F89E call    sub_11F7C0
//   0x30F8A3 test    al, al
//   0x30F8A5 jz      loc_30F7ED
//   0x30F8AB cmp     rbx, [rsp+48h+var_38]
//   0x30F8B0 jnz     loc_30F7ED
//   0x30F8B6 mov     rax, [rbp+8]
//   0x30F8BA mov     r13, [rax+5D8h]
//   0x30F8C1 mov     rax, [rbp+20h]
//   0x30F8C5 mov     dword ptr [rax], 4
//   0x30F8CB mov     rax, [rbp+20h]
//   0x30F8CF lea     rdi, [rax+30h]
//   0x30F8D3 call    sub_11C7E0
//   0x30F8D8 mov     edi, 50h ; 'P'
//   0x30F8DD call    j__qalloc_or_throw
//   0x30F8E2 mov     r12, rax
//   0x30F8E5 mov     rax, [rbp+20h]
//   0x30F8E9 mov     rdi, r12
//   0x30F8EC lea     r14, [r12+20h]
//   0x30F8F1 mov     rsi, [rax+18h]
//   0x30F8F5 mov     rax, 0FFFFFFFF00000000h
//   0x30F8FF mov     qword ptr [r12+28h], 0
//   0x30F908 mov     [r12+20h], rax
//   0x30F90D mov     [r12+30h], rax
//   0x30F912 mov     qword ptr [r12+38h], 0
//   0x30F91B mov     [r12+40h], rax
//   0x30F920 mov     qword ptr [r12+48h], 0
//   0x30F929 call    sub_330C90
//   0x30F92E mov     rbx, [rbp+20h]
//   0x30F932 lea     rdi, [rbx+20h]
//   0x30F936 call    sub_11C7E0
//   0x30F93B mov     byte ptr [rbx+20h], 4
//   0x30F93F lea     rsi, aGetCurrent; "get_current"
//   0x30F946 mov     rdi, r14
//   0x30F949 mov     [rbx+28h], r12
//   0x30F94D mov     rax, [rbp+20h]
//   0x30F951 mov     edx, [rax+44h]
//   0x30F954 mov     [rax+24h], edx
//   0x30F957 mov     dword ptr [r12], 38h ; '8'
//   0x30F95F call    sub_11CEE0
//   0x30F964 mov     edi, 138h
//   0x30F969 call    j__qalloc_or_throw
//   0x30F96E pxor    xmm0, xmm0
//   0x30F972 mov     qword ptr [rax], 0FFFFFFFFFFFFFFFFh
//   0x30F979 mov     rbx, rax
//   0x30F97C mov     qword ptr [rax+8], 0
//   0x30F984 mov     qword ptr [rax+10h], 0
//   0x30F98C mov     qword ptr [rax+18h], 0
//   0x30F994 mov     qword ptr [rax+30h], 0
//   0x30F99C mov     qword ptr [rax+48h], 0
//   0x30F9A4 mov     qword ptr [rax+50h], 0
//   0x30F9AC mov     qword ptr [rax+58h], 0
//   0x30F9B4 mov     qword ptr [rax+60h], 0
//   0x30F9BC mov     qword ptr [rax+68h], 0
//   0x30F9C4 mov     qword ptr [rax+70h], 0
//   0x30F9CC mov     qword ptr [rax+88h], 0
//   0x30F9D7 mov     qword ptr [rax+90h], 0
//   0x30F9E2 mov     qword ptr [rax+98h], 0
//   0x30F9ED mov     qword ptr [rax+0B0h], 0
//   0x30F9F8 mov     qword ptr [rax+0B8h], 0
//   0x30FA03 mov     qword ptr [rax+0C0h], 0
//   0x30FA0E mov     qword ptr [rax+0D8h], 0
//   0x30FA19 mov     qword ptr [rax+0F0h], 0
//   0x30FA24 mov     qword ptr [rax+0F8h], 0
//   0x30FA2F mov     qword ptr [rax+100h], 0
//   0x30FA3A mov     qword ptr [rax+118h], 0
//   0x30FA45 mov     qword ptr [rax+120h], 0
//   0x30FA50 movups  xmmword ptr [rax+20h], xmm0
//   0x30FA54 movups  xmmword ptr [rax+38h], xmm0
//   0x30FA58 movups  xmmword ptr [rax+78h], xmm0
//   0x30FA5C movups  xmmword ptr [rax+0A0h], xmm0
//   0x30FA63 movups  xmmword ptr [rax+0C8h], xmm0
//   0x30FA6A movups  xmmword ptr [rax+0E0h], xmm0
//   0x30FA71 movups  xmmword ptr [rax+108h], xmm0
//   0x30FA78 movups  xmmword ptr [rax+128h], xmm0
//   0x30FA7F mov     byte ptr [r12+40h], 8
//   0x30FA85 mov     [r12+48h], rax
//   0x30FA8A mov     rax, [rbp+20h]
//   0x30FA8E mov     eax, [rax+44h]
//   0x30FA91 mov     [r12+44h], eax
//   0x30FA96 or      dword ptr [rbx+118h], 15h
//   0x30FA9D cmp     byte ptr [r13+518h], 0
//   0x30FAA5 jz      short loc_30FB18
//   0x30FAA7 add     r13, 518h
//   0x30FAAE mov     rsi, r13
//   0x30FAB1 mov     rdi, rbx
//   0x30FAB4 call    sub_335360
//   0x30FAB9 test    al, al
//   0x30FABB jz      loc_30FB79
//   0x30FAC1 mov     rsi, [rbp+8]
//   0x30FAC5 mov     rdi, rbx
//   0x30FAC8 call    sub_3305B0
//   0x30FACD mov     rdx, [rbp+10h]
//   0x30FAD1 mov     eax, [rdx+18h]
//   0x30FAD4 and     ah, 0FDh
//   0x30FAD7 or      al, 80h
//   0x30FAD9 mov     [rdx+18h], eax
//   0x30FADC jmp     loc_30F7ED
//   0x30FAE1 align 8
//   0x30FAE8 mov     eax, [rdi+28h]
//   0x30FAEB cmp     [rbx+3Ch], eax
//   0x30FAEE jnz     loc_30F864
//   0x30FAF4 add     rdi, 30h ; '0'
//   0x30FAF8 xor     edx, edx
//   0x30FAFA lea     rsi, [rbp+28h]
//   0x30FAFE call    sub_1255A0
//   0x30FB03 test    al, al
//   0x30FB05 jnz     loc_30F8B6
//   0x30FB0B mov     rdi, [rbp+20h]
//   0x30FB0F jmp     loc_30F864
//   0x30FB14 align 8
//   0x30FB18 add     r13, 518h
//   0x30FB1F xor     r9d, r9d
//   0x30FB22 xor     r8d, r8d
//   0x30FB25 xor     ecx, ecx
//   0x30FB27 lea     rax, unk_4289F0
//   0x30FB2E xor     esi, esi
//   0x30FB30 lea     rdx, [rsp+48h+var_38]
//   0x30FB35 mov     rdi, r13
//   0x30FB38 mov     [rsp+48h+var_38], rax
//   0x30FB3D call    _deserialize_tinfo
//   0x30FB42 test    al, al
//   0x30FB44 jnz     loc_30FAAE
//   0x30FB4A mov     rax, cs:under_debugger_ptr
//   0x30FB51 cmp     byte ptr [rax], 0
//   0x30FB54 jnz     loc_5266E
//   0x30FB5A mov     rax, [rsp+48h+var_30]
//   0x30FB5F sub     rax, fs:28h
//   0x30FB68 jnz     short loc_30FBA3
//   0x30FB6A mov     edi, 0C82Bh
//   0x30FB6F call    sub_3835A0
//   0x30FB74 call    ___stack_chk_fail
//   0x30FB79 mov     rax, cs:under_debugger_ptr
//   0x30FB80 cmp     byte ptr [rax], 0
//   0x30FB83 jnz     loc_5266E
//   0x30FB89 mov     rax, [rsp+48h+var_30]
//   0x30FB8E sub     rax, fs:28h
//   0x30FB97 jnz     short loc_30FBA8
//   0x30FB99 mov     edi, 0C552h
//   0x30FB9E call    sub_3835A0
//   0x30FBA3 call    ___stack_chk_fail
//   0x30FBA8 call    ___stack_chk_fail
//   0x30FBAD mov     rbx, rax
//   0x30FBB0 jmp     loc_52670
// ============================================================

void sub_30F7C0(/* signature unknown */)
{
    // see disassembly above
}

