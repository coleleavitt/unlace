// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x29C7B0
// Name:           sub_29C7B0
// Function size:  1018 bytes (233 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x29C7B0 push    r13
//   0x29C7B2 push    r12
//   0x29C7B4 push    rbp
//   0x29C7B5 push    rbx
//   0x29C7B6 sub     rsp, 68h
//   0x29C7BA mov     eax, [rdi]
//   0x29C7BC mov     rbx, fs:28h
//   0x29C7C5 mov     [rsp+88h+var_30], rbx
//   0x29C7CA mov     rbx, rdi
//   0x29C7CD mov     [rsp+88h+var_70], 0
//   0x29C7D6 cmp     eax, 1
//   0x29C7D9 jz      loc_29C870
//   0x29C7DF cmp     eax, 6
//   0x29C7E2 jnz     short loc_29C860
//   0x29C7E4 mov     rax, [rbx+8]
//   0x29C7E8 mov     rbp, rsi
//   0x29C7EB mov     esi, 2
//   0x29C7F0 lea     r12, [rsp+88h+var_70]
//   0x29C7F5 mov     rdi, [rax+30h]
//   0x29C7F9 call    _get_tinfo_property
//   0x29C7FE and     eax, 0Fh
//   0x29C801 cmp     al, 0Ah
//   0x29C803 jz      loc_29C910
//   0x29C809 xor     ebx, ebx
//   0x29C80B mov     rdi, r12
//   0x29C80E call    _clear_tinfo_t
//   0x29C813 mov     rax, [rsp+88h+var_30]
//   0x29C818 sub     rax, fs:28h
//   0x29C821 jnz     loc_29CB31
//   0x29C827 add     rsp, 68h
//   0x29C82B mov     eax, ebx
//   0x29C82D pop     rbx
//   0x29C82E pop     rbp
//   0x29C82F pop     r12
//   0x29C831 pop     r13
//   0x29C833 retn
//   0x29C834 align 8
//   0x29C838 lea     rsi, aGccVaList+4; s2
//   0x29C83F mov     rdi, r12; s1
//   0x29C842 call    _strcmp
//   0x29C847 test    r12, r12
//   0x29C84A jnz     loc_29CB13
//   0x29C850 test    eax, eax
//   0x29C852 jnz     loc_29CAC9
//   0x29C858 nop     dword ptr [rax+rax+00000000h]
//   0x29C860 lea     r12, [rsp+88h+var_70]
//   0x29C865 jmp     short loc_29C809
//   0x29C867 align 10h
//   0x29C870 mov     rdi, [rbx+8]
//   0x29C874 mov     esi, 2
//   0x29C879 lea     r12, [rsp+88h+var_70]
//   0x29C87E call    _get_tinfo_property
//   0x29C883 and     eax, 0Fh
//   0x29C886 cmp     al, 0Ah
//   0x29C888 jnz     loc_29C809
//   0x29C88E mov     rdi, [rbx+8]
//   0x29C892 pxor    xmm0, xmm0
//   0x29C896 lea     rbp, [rsp+88h+s1]
//   0x29C89B mov     [rsp+88h+s1], 0
//   0x29C8A4 movups  [rsp+88h+var_60], xmm0
//   0x29C8A9 test    edi, 100h
//   0x29C8AF jnz     loc_29CA78
//   0x29C8B5 mov     [rsp+88h+s1], 0
//   0x29C8BE mov     esi, 0Ah
//   0x29C8C3 call    _get_tinfo_property
//   0x29C8C8 lea     r12, [rsp+88h+var_70]
//   0x29C8CD mov     rsi, rbp
//   0x29C8D0 mov     [rsp+88h+s1], rax
//   0x29C8D5 mov     rdi, r12
//   0x29C8D8 call    _copy_tinfo_t
//   0x29C8DD mov     rdi, rbp
//   0x29C8E0 call    _clear_tinfo_t
//   0x29C8E5 mov     rdi, r12
//   0x29C8E8 call    sub_3296F0
//   0x29C8ED test    al, al
//   0x29C8EF jnz     loc_29C809
//   0x29C8F5 mov     rax, [rbx+8]
//   0x29C8F9 mov     rdx, [rsp+88h+var_70]
//   0x29C8FE mov     [rsp+88h+var_70], rax
//   0x29C903 mov     [rbx+8], rdx
//   0x29C907 jmp     loc_29C9F0
//   0x29C90C align 10h
//   0x29C910 mov     rsi, [rbx+8]
//   0x29C914 pxor    xmm0, xmm0
//   0x29C918 mov     [rsp+88h+s1], 0
//   0x29C921 movups  [rsp+88h+var_60], xmm0
//   0x29C926 mov     rax, [rsi+30h]
//   0x29C92A test    ah, 1
//   0x29C92D jnz     loc_29CA10
//   0x29C933 cmp     dword ptr [rsi+8], 34h ; '4'
//   0x29C937 jz      loc_29CA00
//   0x29C93D lea     rdi, [rbp+10h]
//   0x29C941 lea     r12, [rsp+88h+var_70]
//   0x29C946 call    sub_2530F0
//   0x29C94B test    rax, rax
//   0x29C94E jz      loc_29CB36
//   0x29C954 cmp     dword ptr [rax+8], 33h ; '3'
//   0x29C958 jz      loc_29CA04
//   0x29C95E mov     rax, [rbx+8]
//   0x29C962 mov     esi, 0Ah
//   0x29C967 mov     [rsp+88h+s1], 0
//   0x29C970 mov     rdi, [rax+30h]
//   0x29C974 call    _get_tinfo_property
//   0x29C979 lea     rbp, [rsp+88h+s1]
//   0x29C97E lea     r12, [rsp+88h+var_70]
//   0x29C983 mov     [rsp+88h+s1], rax
//   0x29C988 mov     rsi, rbp
//   0x29C98B mov     rdi, r12
//   0x29C98E call    _copy_tinfo_t
//   0x29C993 mov     rdi, rbp
//   0x29C996 call    _clear_tinfo_t
//   0x29C99B mov     rdi, r12
//   0x29C99E call    sub_3296F0
//   0x29C9A3 test    al, al
//   0x29C9A5 jnz     loc_29C809
//   0x29C9AB mov     eax, [rbx+4]
//   0x29C9AE lea     rdi, [rsp+88h+var_40]
//   0x29C9B3 mov     rsi, r12
//   0x29C9B6 mov     [rsp+88h+var_48], 1
//   0x29C9BE mov     [rsp+88h+var_40], 0
//   0x29C9C7 and     eax, 4
//   0x29C9CA mov     [rsp+88h+var_44], eax
//   0x29C9CE call    _copy_tinfo_t
//   0x29C9D3 lea     rbp, [rsp+88h+var_48]
//   0x29C9D8 mov     rdi, rbx
//   0x29C9DB mov     rsi, rbp
//   0x29C9DE call    sub_29BAF0
//   0x29C9E3 mov     rdi, rbp
//   0x29C9E6 call    sub_29AFB0
//   0x29C9EB nop     dword ptr [rax+rax+00h]
//   0x29C9F0 mov     ebx, 1
//   0x29C9F5 jmp     loc_29C80B
//   0x29C9FA align 20h
//   0x29CA00 mov     rax, [rsi+18h]
//   0x29CA04 mov     [rbx+8], rax
//   0x29CA08 lea     r12, [rsp+88h+var_70]
//   0x29CA0D jmp     short loc_29C9F0
//   0x29CA0F align 10h
//   0x29CA10 lea     rdi, [rsp+88h+s1]
//   0x29CA15 xor     edx, edx
//   0x29CA17 mov     rsi, rax
//   0x29CA1A call    _get_tinfo_pdata
//   0x29CA1F mov     r12, [rsp+88h+s1]
//   0x29CA24 test    rax, rax
//   0x29CA27 jnz     short loc_29CA50
//   0x29CA29 test    r12, r12
//   0x29CA2C jz      short loc_29CA69
//   0x29CA2E mov     qword ptr [rsp+88h+var_60], 0
//   0x29CA37 mov     rdi, r12
//   0x29CA3A call    _qfree
//   0x29CA3F mov     rsi, [rbx+8]
//   0x29CA43 jmp     loc_29C933
//   0x29CA48 align 10h
//   0x29CA50 cmp     qword ptr [rsp+88h+var_60], 0
//   0x29CA56 jnz     loc_29CAD8
//   0x29CA5C test    r12, r12
//   0x29CA5F jz      short loc_29CA69
//   0x29CA61 mov     rdi, r12
//   0x29CA64 call    _qfree
//   0x29CA69 mov     rsi, [rbx+8]
//   0x29CA6D jmp     loc_29C933
//   0x29CA72 align 8
//   0x29CA78 mov     rsi, rdi
//   0x29CA7B xor     edx, edx
//   0x29CA7D mov     rdi, rbp
//   0x29CA80 call    _get_tinfo_pdata
//   0x29CA85 mov     r12, [rsp+88h+s1]
//   0x29CA8A test    rax, rax
//   0x29CA8D jnz     short loc_29CAB0
//   0x29CA8F test    r12, r12
//   0x29CA92 jz      short loc_29CAC9
//   0x29CA94 mov     qword ptr [rsp+88h+var_60], 0
//   0x29CA9D mov     rdi, r12
//   0x29CAA0 call    _qfree
//   0x29CAA5 mov     rdi, [rbx+8]
//   0x29CAA9 jmp     loc_29C8B5
//   0x29CAAE align 10h
//   0x29CAB0 cmp     qword ptr [rsp+88h+var_60], 0
//   0x29CAB6 jnz     loc_29C838
//   0x29CABC test    r12, r12
//   0x29CABF jz      short loc_29CAC9
//   0x29CAC1 mov     rdi, r12
//   0x29CAC4 call    _qfree
//   0x29CAC9 mov     rdi, [rbx+8]
//   0x29CACD jmp     loc_29C8B5
//   0x29CAD2 align 8
//   0x29CAD8 lea     rsi, aGccVaList+4; s2
//   0x29CADF mov     rdi, r12; s1
//   0x29CAE2 call    _strcmp
//   0x29CAE7 mov     r13d, eax
//   0x29CAEA test    r12, r12
//   0x29CAED jnz     short loc_29CB00
//   0x29CAEF test    r13d, r13d
//   0x29CAF2 jz      loc_29C860
//   0x29CAF8 jmp     loc_29CA69
//   0x29CAFD align 20h
//   0x29CB00 mov     qword ptr [rsp+88h+var_60], 0
//   0x29CB09 mov     rdi, r12
//   0x29CB0C call    _qfree
//   0x29CB11 jmp     short loc_29CAEF
//   0x29CB13 mov     rdi, r12
//   0x29CB16 mov     [rsp+88h+var_7C], eax
//   0x29CB1A mov     qword ptr [rsp+88h+var_60], 0
//   0x29CB23 call    _qfree
//   0x29CB28 mov     eax, [rsp+88h+var_7C]
//   0x29CB2C jmp     loc_29C850
//   0x29CB31 call    ___stack_chk_fail
//   0x29CB36 mov     rax, cs:under_debugger_ptr
//   0x29CB3D cmp     byte ptr [rax], 0
//   0x29CB40 jnz     loc_4D1D8
//   0x29CB46 mov     rax, [rsp+88h+var_30]
//   0x29CB4B sub     rax, fs:28h
//   0x29CB54 jnz     short loc_29CB65
//   0x29CB56 mov     edi, 0C528h
//   0x29CB5B lea     r12, [rsp+88h+var_70]
//   0x29CB60 call    sub_37EEE0
//   0x29CB65 call    ___stack_chk_fail
//   0x29CB6A mov     rbx, rax
//   0x29CB6D jmp     loc_4D1E9
//   0x29CB72 mov     rbx, rax
//   0x29CB75 jmp     loc_4D209
//   0x29CB7A mov     rbx, rax
//   0x29CB7D jmp     loc_4D218
//   0x29CB82 mov     rbx, rax
//   0x29CB85 jmp     loc_4D1DA
//   0x29CB8A mov     rbx, rax
//   0x29CB8D jmp     loc_4D222
//   0x29CB92 mov     rbx, rax
//   0x29CB95 jmp     loc_4D23A
//   0x29CB9A mov     rbx, rax
//   0x29CB9D jmp     loc_4D244
//   0x29CBA2 mov     rbx, rax
//   0x29CBA5 jmp     loc_4D25C
// ============================================================

void sub_29C7B0(/* signature unknown */)
{
    // see disassembly above
}

