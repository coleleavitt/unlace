// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x2808E0
// Name:           sub_2808E0
// Function size:  385 bytes (103 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x2808E0 push    r14
//   0x2808E2 push    r13
//   0x2808E4 push    r12
//   0x2808E6 push    rbp
//   0x2808E7 push    rbx
//   0x2808E8 sub     rsp, 10h
//   0x2808EC test    rcx, rcx
//   0x2808EF mov     rbx, fs:28h
//   0x2808F8 mov     [rsp+38h+var_30], rbx
//   0x2808FD mov     rbx, rcx
//   0x280900 lea     rax, [rsp+38h+var_31]
//   0x280905 cmovz   rbx, rax
//   0x280909 cmp     dword ptr [rsi+8], 33h ; '3'
//   0x28090D jz      short loc_280938
//   0x28090F xor     ebp, ebp
//   0x280911 mov     rax, [rsp+38h+var_30]
//   0x280916 sub     rax, fs:28h
//   0x28091F jnz     loc_280A5C
//   0x280925 add     rsp, 10h
//   0x280929 mov     eax, ebp
//   0x28092B pop     rbx
//   0x28092C pop     rbp
//   0x28092D pop     r12
//   0x28092F pop     r13
//   0x280931 pop     r14
//   0x280933 retn
//   0x280934 align 8
//   0x280938 mov     r12, rsi
//   0x28093B mov     rsi, [rsi+30h]
//   0x28093F mov     rbp, rdx
//   0x280942 mov     r13, rdi
//   0x280945 xor     edx, edx
//   0x280947 xor     edi, edi
//   0x280949 call    _get_tinfo_size
//   0x28094E mov     rsi, [rbp+0]
//   0x280952 xor     edx, edx
//   0x280954 xor     edi, edi
//   0x280956 mov     r14, rax
//   0x280959 call    _get_tinfo_size
//   0x28095E cmp     r14, rax
//   0x280961 jnz     short loc_28090F
//   0x280963 lea     rdi, [r12+30h]
//   0x280968 call    sub_32DD50
//   0x28096D mov     ebp, eax
//   0x28096F test    al, al
//   0x280971 jnz     short loc_28090F
//   0x280973 mov     r12, [r12+18h]
//   0x280978 mov     byte ptr [rbx], 0
//   0x28097B mov     eax, [r12+8]
//   0x280980 cmp     eax, 33h ; '3'
//   0x280983 jnz     short loc_2809BA
//   0x280985 mov     edx, [r13+54h]
//   0x280989 nop     word ptr [rax+rax+00000000h]
//   0x280994 nop     word ptr [rax+rax+00000000h]
//   0x28099F nop
//   0x2809A0 cmp     [r12+28h], edx
//   0x2809A5 jnz     loc_280911
//   0x2809AB mov     r12, [r12+18h]
//   0x2809B0 mov     eax, [r12+8]
//   0x2809B5 cmp     eax, 33h ; '3'
//   0x2809B8 jz      short loc_2809A0
//   0x2809BA cmp     eax, 30h ; '0'
//   0x2809BD jz      short loc_280A28
//   0x2809BF sub     eax, 23h ; '#'
//   0x2809C2 cmp     eax, 1
//   0x2809C5 ja      loc_280911
//   0x2809CB mov     rax, [r12+18h]
//   0x2809D0 mov     esi, 2
//   0x2809D5 mov     rdi, [rax+30h]
//   0x2809D9 call    _get_tinfo_property
//   0x2809DE and     eax, 0Fh
//   0x2809E1 sub     eax, 0Ah
//   0x2809E4 cmp     al, 1
//   0x2809E6 ja      short loc_280A34
//   0x2809E8 mov     rax, [r12+18h]
//   0x2809ED test    rax, rax
//   0x2809F0 jz      loc_280911
//   0x2809F6 cmp     dword ptr [rax+8], 30h ; '0'
//   0x2809FA jnz     loc_280911
//   0x280A00 mov     rsi, [rax+30h]
//   0x280A04 mov     rdi, [r12+30h]
//   0x280A09 xor     edx, edx
//   0x280A0B call    _lexcompare_tinfo
//   0x280A10 test    eax, eax
//   0x280A12 jnz     loc_280911
//   0x280A18 mov     byte ptr [rbx], 1
//   0x280A1B mov     ebp, 1
//   0x280A20 jmp     loc_280911
//   0x280A25 align 8
//   0x280A28 test    r12, r12
//   0x280A2B setnz   bpl
//   0x280A2F jmp     loc_280911
//   0x280A34 mov     rax, [r12+20h]
//   0x280A39 mov     esi, 2
//   0x280A3E mov     rdi, [rax+30h]
//   0x280A42 call    _get_tinfo_property
//   0x280A47 and     eax, 0Fh
//   0x280A4A sub     eax, 0Ah
//   0x280A4D cmp     al, 1
//   0x280A4F ja      loc_280911
//   0x280A55 mov     rax, [r12+20h]
//   0x280A5A jmp     short loc_2809ED
//   0x280A5C call    ___stack_chk_fail
// ============================================================

void sub_2808E0(/* signature unknown */)
{
    // see disassembly above
}

