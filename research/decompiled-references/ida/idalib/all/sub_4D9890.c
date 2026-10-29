// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x4D9890
// Name:           sub_4D9890
// Function size:  495 bytes (130 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x4D9890 push    r14
//   0x4D9892 push    r13
//   0x4D9894 mov     r13, rsi
//   0x4D9897 push    r12; __int64
//   0x4D9899 mov     r12, rdi
//   0x4D989C push    rbp; int
//   0x4D989D mov     rbp, rdx
//   0x4D98A0 push    rbx; int
//   0x4D98A1 add     rsp, 0FFFFFFFFFFFFFF80h
//   0x4D98A5 mov     qword ptr [rsp+0A8h+var_A0], rdx; int
//   0x4D98AA mov     rsi, fs:28h
//   0x4D98B3 mov     [rsp+0A8h+var_30], rsi; __int64
//   0x4D98B8 mov     rsi, rdx
//   0x4D98BB call    sub_3BD540
//   0x4D98C0 test    al, al
//   0x4D98C2 jnz     short loc_4D98F0
//   0x4D98C4 xor     ebx, ebx
//   0x4D98C6 mov     rax, [rsp+0A8h+var_30]
//   0x4D98CB sub     rax, fs:28h
//   0x4D98D4 jnz     loc_4D9A22
//   0x4D98DA sub     rsp, 0FFFFFFFFFFFFFF80h
//   0x4D98DE mov     eax, ebx
//   0x4D98E0 pop     rbx
//   0x4D98E1 pop     rbp
//   0x4D98E2 pop     r12
//   0x4D98E4 pop     r13
//   0x4D98E6 pop     r14
//   0x4D98E8 retn
//   0x4D98E9 align 10h
//   0x4D98F0 mov     edx, 4
//   0x4D98F5 mov     rsi, rbp
//   0x4D98F8 mov     rdi, r12
//   0x4D98FB mov     ebx, eax
//   0x4D98FD call    sub_3BE900
//   0x4D9902 mov     rdx, rax
//   0x4D9905 and     edx, 600h
//   0x4D990B cmp     rdx, 200h
//   0x4D9912 jz      short loc_4D98C4
//   0x4D9914 and     eax, 0C000h
//   0x4D9919 mov     r14, rax
//   0x4D991C cmp     rax, 8000h
//   0x4D9922 jz      short loc_4D98C6
//   0x4D9924 mov     rdi, rbp
//   0x4D9927 call    _ea2node
//   0x4D992C xor     esi, esi
//   0x4D992E mov     rdi, rax
//   0x4D9931 call    _netnode_get_name
//   0x4D9936 test    rax, rax
//   0x4D9939 jg      short loc_4D98C6
//   0x4D993B xor     ecx, ecx
//   0x4D993D xor     esi, esi
//   0x4D993F lea     rdx, [rsp+0A8h+var_A0]
//   0x4D9944 mov     rdi, r12
//   0x4D9947 call    sub_4CF380
//   0x4D994C test    rax, rax
//   0x4D994F jg      loc_4D98C6
//   0x4D9955 mov     rbp, qword ptr [rsp+0A8h+var_A0]
//   0x4D995A mov     rdi, rbp
//   0x4D995D call    _get_aflags
//   0x4D9962 test    ah, 40h
//   0x4D9965 jnz     short loc_4D9990
//   0x4D9967 test    r14, r14
//   0x4D996A jnz     loc_4D98C6
//   0x4D9970 mov     rsi, rbp
//   0x4D9973 mov     rdi, r12
//   0x4D9976 mov     edx, 8000h
//   0x4D997B call    sub_3CFE00
//   0x4D9980 mov     rsi, rbp
//   0x4D9983 mov     rdi, r12
//   0x4D9986 call    sub_4CB130
//   0x4D998B jmp     loc_4D98C6
//   0x4D9990 mov     rsi, rbp
//   0x4D9993 mov     rdi, r12
//   0x4D9996 call    sub_5CAA10
//   0x4D999B mov     rdx, r13
//   0x4D999E mov     rdi, r12
//   0x4D99A1 mov     rsi, rax
//   0x4D99A4 call    sub_5C9B30
//   0x4D99A9 test    eax, eax
//   0x4D99AB jns     short loc_4D9967
//   0x4D99AD pxor    xmm0, xmm0
//   0x4D99B1 lea     rdi, [rsp+0A8h+src]
//   0x4D99B6 xor     ecx, ecx
//   0x4D99B8 mov     edx, 40h ; '@'
//   0x4D99BD mov     rsi, rbp
//   0x4D99C0 movups  xmmword ptr [rsp+0A8h+var_90], xmm0; int
//   0x4D99C5 mov     [rsp+0A8h+src], 0; int
//   0x4D99CE call    _get_ea_name
//   0x4D99D3 mov     ecx, 300h
//   0x4D99D8 lea     rdx, byte_22F0C30; src
//   0x4D99DF mov     rsi, rbp; int
//   0x4D99E2 mov     rdi, r12; int
//   0x4D99E5 call    sub_4D7EC0
//   0x4D99EA mov     rdx, [rsp+0A8h+src]; src
//   0x4D99EF mov     ecx, 100h
//   0x4D99F4 mov     rsi, rbp; int
//   0x4D99F7 mov     rdi, r12; int
//   0x4D99FA call    sub_4D7EC0
//   0x4D99FF test    al, al
//   0x4D9A01 jz      short loc_4D9A27
//   0x4D9A03 mov     rdi, [rsp+0A8h+src]; ptr
//   0x4D9A08 test    rdi, rdi
//   0x4D9A0B jz      loc_4D9967
//   0x4D9A11 xor     edx, edx
//   0x4D9A13 mov     qword ptr [rsp+0A8h+var_90], rdx
//   0x4D9A18 call    _qfree
//   0x4D9A1D jmp     loc_4D9967
//   0x4D9A22 call    ___stack_chk_fail
//   0x4D9A27 mov     rdx, [rsp+0A8h+src]; src
//   0x4D9A2C mov     ecx, 300h
//   0x4D9A31 mov     rsi, rbp; int
//   0x4D9A34 mov     rdi, r12; int
//   0x4D9A37 call    sub_4D7EC0
//   0x4D9A3C lea     r13, [rsp+0A8h+var_78]
//   0x4D9A41 mov     rcx, rbp
//   0x4D9A44 mov     esi, 40h ; '@'
//   0x4D9A49 xor     eax, eax
//   0x4D9A4B lea     rdx, aGlbA; "glb_%a"
//   0x4D9A52 mov     rdi, r13
//   0x4D9A55 call    _qsnprintf
//   0x4D9A5A mov     ecx, 100h
//   0x4D9A5F mov     rdx, r13; src
//   0x4D9A62 mov     rsi, rbp; int
//   0x4D9A65 mov     rdi, r12; int
//   0x4D9A68 call    sub_4D7EC0
//   0x4D9A6D jmp     short loc_4D9A03
//   0x4D9A6F mov     rbx, rax
//   0x4D9A72 jmp     loc_2BE556
//   0x4D9A77 mov     rbx, rax
//   0x4D9A7A jmp     loc_2BE584
// ============================================================

void sub_4D9890(/* signature unknown */)
{
    // see disassembly above
}

