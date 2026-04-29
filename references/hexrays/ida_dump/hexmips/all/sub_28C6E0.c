// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x28C6E0
// Name:           sub_28C6E0
// Function size:  951 bytes (245 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x28C6E0 push    r15
//   0x28C6E2 push    r14
//   0x28C6E4 push    r13
//   0x28C6E6 push    r12
//   0x28C6E8 push    rbp
//   0x28C6E9 mov     rbp, rdi
//   0x28C6EC push    rbx
//   0x28C6ED sub     rsp, 28h
//   0x28C6F1 mov     rdx, [rdi+18h]
//   0x28C6F5 mov     rax, [rdi+10h]
//   0x28C6F9 mov     rbx, fs:28h
//   0x28C702 mov     [rsp+58h+var_40], rbx
//   0x28C707 mov     rbx, rsi
//   0x28C70A lea     r12, [rsp+58h+var_50]
//   0x28C70F mov     r15, [rax+rdx*8-8]
//   0x28C714 mov     rsi, r12
//   0x28C717 mov     [rsp+58h+var_50], 0
//   0x28C720 mov     rdx, rbx
//   0x28C723 call    sub_280080
//   0x28C728 test    al, al
//   0x28C72A jnz     short loc_28C773
//   0x28C72C cmp     dword ptr [r15+8], 10h
//   0x28C731 jnz     loc_28C900
//   0x28C737 cmp     [r15+18h], rbx
//   0x28C73B jz      loc_28C900
//   0x28C741 mov     rdi, [rbx+30h]
//   0x28C745 mov     esi, 2
//   0x28C74A call    _get_tinfo_property
//   0x28C74F and     eax, 3Fh
//   0x28C752 cmp     al, 1
//   0x28C754 jz      loc_28C900
//   0x28C75A mov     rax, [r15+20h]
//   0x28C75E lea     rsi, [rax+30h]
//   0x28C762 cmp     rax, rbx
//   0x28C765 jz      loc_28CA28
//   0x28C76B mov     rdi, r12
//   0x28C76E call    _copy_tinfo_t
//   0x28C773 mov     rsi, [rbx+30h]
//   0x28C777 xor     edx, edx
//   0x28C779 xor     edi, edi
//   0x28C77B call    _get_tinfo_size
//   0x28C780 mov     rsi, [rsp+58h+var_50]
//   0x28C785 xor     edx, edx
//   0x28C787 xor     edi, edi
//   0x28C789 mov     r13, rax
//   0x28C78C call    _get_tinfo_size
//   0x28C791 cmp     dword ptr [r15+8], 39h ; '9'
//   0x28C796 mov     r14, rax
//   0x28C799 jnz     short loc_28C7F0
//   0x28C79B cmp     rbx, [r15+18h]
//   0x28C79F jz      short loc_28C7F0
//   0x28C7A1 xor     edx, edx
//   0x28C7A3 mov     rsi, rbx
//   0x28C7A6 mov     rdi, r15
//   0x28C7A9 call    sub_27FAE0
//   0x28C7AE movzx   r15d, byte ptr [rax+3Ch]
//   0x28C7B3 test    r15b, r15b
//   0x28C7B6 jz      short loc_28C7F0
//   0x28C7B8 lea     r14, [rbx+30h]
//   0x28C7BC mov     rdx, rbx
//   0x28C7BF mov     rsi, rbx
//   0x28C7C2 mov     rdi, rbp
//   0x28C7C5 mov     rcx, r14
//   0x28C7C8 call    sub_28B6F0
//   0x28C7CD test    al, al
//   0x28C7CF jnz     loc_28C900
//   0x28C7D5 cmp     dword ptr [rbx+8], 30h ; '0'
//   0x28C7D9 jz      loc_28C990
//   0x28C7DF mov     rsi, r12
//   0x28C7E2 mov     rdi, rbx
//   0x28C7E5 call    sub_2405F0
//   0x28C7EA jmp     loc_28C903
//   0x28C7EF align 10h
//   0x28C7F0 mov     rax, [rbp+48h]
//   0x28C7F4 mov     edx, [rbx+8]
//   0x28C7F7 mov     rsi, [rax+70h]
//   0x28C7FB cmp     edx, 33h ; '3'
//   0x28C7FE jnz     loc_28C938
//   0x28C804 mov     ecx, [rsi+54h]
//   0x28C807 mov     rax, rbx
//   0x28C80A jmp     short loc_28C830
//   0x28C80C align 20h
//   0x28C820 mov     rax, [rax+18h]
//   0x28C824 mov     edx, [rax+8]
//   0x28C827 cmp     edx, 33h ; '3'
//   0x28C82A jnz     loc_28C938
//   0x28C830 cmp     [rax+28h], ecx
//   0x28C833 jz      short loc_28C820
//   0x28C835 mov     rdi, [rbp+18h]
//   0x28C839 mov     esi, [rsi+54h]
//   0x28C83C mov     r8, [rbp+10h]
//   0x28C840 mov     eax, edi
//   0x28C842 sub     eax, 1
//   0x28C845 js      loc_28CA74
//   0x28C84B mov     edx, eax
//   0x28C84D lea     rcx, [r8+rdx*8]
//   0x28C851 jmp     short loc_28C869
//   0x28C853 align 8
//   0x28C858 cmp     esi, [rdx+28h]
//   0x28C85B jnz     short loc_28C872
//   0x28C85D sub     eax, 1
//   0x28C860 sub     rcx, 8
//   0x28C864 cmp     eax, 0FFFFFFFFh
//   0x28C867 jz      short loc_28C883
//   0x28C869 mov     rdx, [rcx]
//   0x28C86C cmp     dword ptr [rdx+8], 33h ; '3'
//   0x28C870 jz      short loc_28C858
//   0x28C872 movsxd  rdx, eax
//   0x28C875 mov     rcx, [r8+rdx*8]
//   0x28C879 cmp     dword ptr [rcx+8], 39h ; '9'
//   0x28C87D jz      loc_28CA38
//   0x28C883 cmp     r13d, 0FFFFFFFFh
//   0x28C887 jz      loc_28C970
//   0x28C88D cmp     r14d, 0FFFFFFFFh
//   0x28C891 jz      short loc_28C900
//   0x28C893 mov     rdi, [rbp+48h]
//   0x28C897 lea     rcx, [rbx+30h]
//   0x28C89B mov     rdx, r12
//   0x28C89E mov     rsi, rbx
//   0x28C8A1 call    sub_27C300
//   0x28C8A6 test    al, al
//   0x28C8A8 jz      short loc_28C900
//   0x28C8AA mov     rdi, [rbx+30h]
//   0x28C8AE mov     esi, 2
//   0x28C8B3 call    _get_tinfo_property
//   0x28C8B8 and     eax, 0Fh
//   0x28C8BB cmp     al, 0Ah
//   0x28C8BD jnz     loc_28C950
//   0x28C8C3 cmp     dword ptr [rbx+8], 30h ; '0'
//   0x28C8C7 jz      loc_28C950
//   0x28C8CD mov     rdi, [rsp+58h+var_50]
//   0x28C8D2 mov     esi, 9
//   0x28C8D7 mov     [rsp+58h+var_48], 0
//   0x28C8E0 call    _get_tinfo_property
//   0x28C8E5 mov     [rsp+58h+var_48], rax
//   0x28C8EA test    al, 0Eh
//   0x28C8EC jnz     short loc_28C946
//   0x28C8EE test    al, 30h
//   0x28C8F0 jz      short loc_28C946
//   0x28C8F2 lea     rdi, [rsp+58h+var_48]
//   0x28C8F7 call    _clear_tinfo_t
//   0x28C8FC nop     dword ptr [rax+00h]
//   0x28C900 xor     r15d, r15d
//   0x28C903 mov     rdi, r12
//   0x28C906 call    _clear_tinfo_t
//   0x28C90B mov     rax, [rsp+58h+var_40]
//   0x28C910 sub     rax, fs:28h
//   0x28C919 jnz     loc_28CA82
//   0x28C91F add     rsp, 28h
//   0x28C923 mov     eax, r15d
//   0x28C926 pop     rbx
//   0x28C927 pop     rbp
//   0x28C928 pop     r12
//   0x28C92A pop     r13
//   0x28C92C pop     r14
//   0x28C92E pop     r15
//   0x28C930 retn
//   0x28C931 align 8
//   0x28C938 cmp     edx, 30h ; '0'
//   0x28C93B jz      loc_28C883
//   0x28C941 jmp     loc_28C835
//   0x28C946 lea     rdi, [rsp+58h+var_48]
//   0x28C94B call    _clear_tinfo_t
//   0x28C950 cmp     r13d, r14d
//   0x28C953 jnz     short loc_28C970
//   0x28C955 mov     rdi, r12
//   0x28C958 call    sub_328AF0
//   0x28C95D test    al, al
//   0x28C95F jnz     short loc_28C900
//   0x28C961 nop     word ptr [rax+rax+00000000h]
//   0x28C96C nop     dword ptr [rax+00h]
//   0x28C970 mov     rsi, [rbp+48h]
//   0x28C974 mov     rdx, r12
//   0x28C977 mov     rdi, rbx
//   0x28C97A call    sub_2422C0
//   0x28C97F mov     r15d, eax
//   0x28C982 jmp     loc_28C903
//   0x28C987 align 10h
//   0x28C990 mov     rax, [rbx+18h]
//   0x28C994 xor     edx, edx
//   0x28C996 xor     edi, edi
//   0x28C998 mov     rsi, [rax+30h]
//   0x28C99C call    _get_tinfo_size
//   0x28C9A1 movsxd  r13, r13d
//   0x28C9A4 cmp     r13, rax
//   0x28C9A7 jnz     loc_28C7DF
//   0x28C9AD mov     rax, [rbx+18h]
//   0x28C9B1 mov     esi, 2
//   0x28C9B6 mov     rdi, [rax+30h]
//   0x28C9BA call    _get_tinfo_property
//   0x28C9BF and     eax, 0Fh
//   0x28C9C2 mov     rdi, [rbx+30h]
//   0x28C9C6 mov     esi, 2
//   0x28C9CB cmp     al, 9
//   0x28C9CD setz    bpl
//   0x28C9D1 call    _get_tinfo_property
//   0x28C9D6 and     eax, 0Fh
//   0x28C9D9 cmp     al, 9
//   0x28C9DB setz    al
//   0x28C9DE cmp     bpl, al
//   0x28C9E1 jnz     loc_28C7DF
//   0x28C9E7 mov     rax, [rbx+18h]
//   0x28C9EB mov     esi, 3
//   0x28C9F0 mov     rdi, [rax+30h]
//   0x28C9F4 call    _get_tinfo_property
//   0x28C9F9 mov     rdi, [rbx+30h]
//   0x28C9FD mov     esi, 3
//   0x28CA02 mov     rbp, rax
//   0x28CA05 call    _get_tinfo_property
//   0x28CA0A cmp     ebp, eax
//   0x28CA0C jnz     loc_28C7DF
//   0x28CA12 mov     rsi, r12
//   0x28CA15 mov     rdi, r14
//   0x28CA18 call    _copy_tinfo_t
//   0x28CA1D jmp     loc_28C903
//   0x28CA22 align 8
//   0x28CA28 mov     rax, [r15+28h]
//   0x28CA2C lea     rsi, [rax+30h]
//   0x28CA30 jmp     loc_28C76B
//   0x28CA35 align 8
//   0x28CA38 sub     rdi, 1
//   0x28CA3C mov     rsi, [rcx+18h]
//   0x28CA40 mov     rcx, rbx
//   0x28CA43 cmp     rdx, rdi
//   0x28CA46 jz      short loc_28CA51
//   0x28CA48 add     eax, 1
//   0x28CA4B cdqe
//   0x28CA4D mov     rcx, [r8+rax*8]
//   0x28CA51 cmp     rsi, rcx
//   0x28CA54 jnz     loc_28C883
//   0x28CA5A xor     edx, edx
//   0x28CA5C mov     rsi, r12
//   0x28CA5F mov     rdi, rbx
//   0x28CA62 call    sub_27B960
//   0x28CA67 test    al, al
//   0x28CA69 jnz     loc_28C883
//   0x28CA6F jmp     loc_28C900
//   0x28CA74 cmp     eax, 0FFFFFFFFh
//   0x28CA77 jz      loc_28C883
//   0x28CA7D jmp     loc_28C872
//   0x28CA82 call    ___stack_chk_fail
//   0x28CA87 mov     rbx, rax
//   0x28CA8A jmp     loc_4B858
//   0x28CA8F mov     rbx, rax
//   0x28CA92 jmp     loc_4B862
// ============================================================

void sub_28C6E0(/* signature unknown */)
{
    // see disassembly above
}

