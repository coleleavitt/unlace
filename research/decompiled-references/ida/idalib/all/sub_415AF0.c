// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x415AF0
// Name:           sub_415AF0
// Function size:  831 bytes (207 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x415AF0 push    r15
//   0x415AF2 push    r14
//   0x415AF4 mov     r14, rdx
//   0x415AF7 push    r13
//   0x415AF9 push    r12
//   0x415AFB push    rbp
//   0x415AFC push    rbx
//   0x415AFD sub     rsp, 68h
//   0x415B01 mov     [rsp+98h+var_84], r8d
//   0x415B06 mov     rax, fs:28h
//   0x415B0F mov     [rsp+98h+var_40], rax
//   0x415B14 xor     eax, eax
//   0x415B16 mov     dword ptr [rsi], 0
//   0x415B1C cmp     rdx, [rdi+8]
//   0x415B20 jnb     loc_415DD4
//   0x415B26 lea     rax, ds:0[rdx*8]
//   0x415B2E mov     r12, rdi
//   0x415B31 mov     rbp, rsi
//   0x415B34 mov     rbx, rcx
//   0x415B37 sub     rax, rdx
//   0x415B3A shl     rax, 3
//   0x415B3E mov     [rsp+98h+var_90], rax
//   0x415B43 add     rax, [rdi]
//   0x415B46 lea     rdi, haystack; s1
//   0x415B4D cmp     qword ptr [rax+8], 0
//   0x415B52 jnz     short loc_415B88
//   0x415B54 mov     rsi, rbx; s2
//   0x415B57 call    _strcmp
//   0x415B5C test    eax, eax
//   0x415B5E jnz     short loc_415B97
//   0x415B60 xor     eax, eax
//   0x415B62 mov     rdx, [rsp+98h+var_40]
//   0x415B67 sub     rdx, fs:28h
//   0x415B70 jnz     loc_415E1A
//   0x415B76 add     rsp, 68h
//   0x415B7A pop     rbx
//   0x415B7B pop     rbp
//   0x415B7C pop     r12
//   0x415B7E pop     r13
//   0x415B80 pop     r14
//   0x415B82 pop     r15
//   0x415B84 retn
//   0x415B85 align 8
//   0x415B88 mov     rdi, [rax]; s1
//   0x415B8B mov     rsi, rbx; s2
//   0x415B8E call    _strcmp
//   0x415B93 test    eax, eax
//   0x415B95 jz      short loc_415B60
//   0x415B97 mov     rdi, rbx
//   0x415B9A call    _is_uname
//   0x415B9F test    al, al
//   0x415BA1 jz      loc_415E06
//   0x415BA7 mov     rax, [r12+8]
//   0x415BAC test    rax, rax
//   0x415BAF jz      short loc_415C1C
//   0x415BB1 mov     rcx, [r12]
//   0x415BB5 mov     r13, 0FFFFFFFFFFFFFFC8h
//   0x415BBC mov     [rsp+98h+var_80], rcx
//   0x415BC1 cmp     rax, 0FFFFFFFFFFFFFFFFh
//   0x415BC5 jz      short loc_415BD6
//   0x415BC7 lea     r13, ds:0[rax*8]
//   0x415BCF sub     r13, rax
//   0x415BD2 shl     r13, 3
//   0x415BD6 mov     r15, [rsp+98h+var_80]
//   0x415BDB add     r13, r15
//   0x415BDE cmp     r15, r13
//   0x415BE1 jnz     short loc_415BF1
//   0x415BE3 jmp     short loc_415C1C
//   0x415BE5 align 8
//   0x415BE8 add     r15, 38h ; '8'
//   0x415BEC cmp     r13, r15
//   0x415BEF jz      short loc_415C1C
//   0x415BF1 cmp     qword ptr [r15+8], 0
//   0x415BF6 lea     rdi, haystack
//   0x415BFD jz      short loc_415C02
//   0x415BFF mov     rdi, [r15]; s1
//   0x415C02 mov     rsi, rbx; s2
//   0x415C05 call    _strcmp
//   0x415C0A test    eax, eax
//   0x415C0C jnz     short loc_415BE8
//   0x415C0E mov     rax, [rsp+98h+var_80]
//   0x415C13 cmp     r15, rax
//   0x415C16 jns     loc_415DE8
//   0x415C1C test    byte ptr [rsp+98h+var_84], 20h
//   0x415C21 jnz     short loc_415C36
//   0x415C23 mov     rsi, rbx
//   0x415C26 mov     rdi, r12
//   0x415C29 call    sub_415A10
//   0x415C2E test    eax, eax
//   0x415C30 jnz     loc_415DFC
//   0x415C36 mov     rdx, r14; int
//   0x415C39 mov     rsi, r12; int
//   0x415C3C mov     rdi, rbp; int
//   0x415C3F call    sub_537B70
//   0x415C44 mov     r14, [rsp+98h+var_90]
//   0x415C49 add     r14, [r12]
//   0x415C4D test    rbx, rbx
//   0x415C50 jz      short loc_415C66
//   0x415C52 mov     rdi, rbx; s
//   0x415C55 call    _strlen
//   0x415C5A mov     r13, rax
//   0x415C5D test    rax, rax
//   0x415C60 jnz     loc_415D90
//   0x415C66 mov     qword ptr [r14+8], 0
//   0x415C6E mov     rbx, [rsp+98h+var_90]
//   0x415C73 add     rbx, [r12]
//   0x415C77 xor     r14d, r14d
//   0x415C7A mov     r13, [rbx+8]
//   0x415C7E test    r13, r13
//   0x415C81 jnz     loc_415D10
//   0x415C87 mov     r12, [rbx+20h]
//   0x415C8B xor     r15d, r15d
//   0x415C8E test    r12, r12
//   0x415C91 jnz     loc_415D39
//   0x415C97 mov     rbx, [rbx+30h]
//   0x415C9B mov     rdx, [rbp+98h]
//   0x415CA2 mov     rsi, [rbp+90h]
//   0x415CA9 mov     [rsp+98h+var_48], rbx
//   0x415CAE lea     rax, [rdx+1]
//   0x415CB2 cmp     [rbp+0A0h], rax
//   0x415CB9 jb      loc_415D60
//   0x415CBF lea     rcx, ds:0[rdx*8]
//   0x415CC7 movq    xmm0, r13
//   0x415CCC sub     rcx, rdx
//   0x415CCF punpcklqdq xmm0, xmm0
//   0x415CD3 lea     rax, [rsi+rcx*8]
//   0x415CD7 movups  xmmword ptr [rax+8], xmm0
//   0x415CDB movq    xmm0, r12
//   0x415CE0 punpcklqdq xmm0, xmm0
//   0x415CE4 mov     [rax], r14
//   0x415CE7 mov     [rax+18h], r15
//   0x415CEB mov     [rax+30h], rbx
//   0x415CEF movups  xmmword ptr [rax+20h], xmm0
//   0x415CF3 mov     dword ptr [rbp+0], 8
//   0x415CFA add     qword ptr [rbp+98h], 1
//   0x415D02 jmp     loc_415B60
//   0x415D07 align 10h
//   0x415D10 mov     rdi, r13
//   0x415D13 xor     r15d, r15d
//   0x415D16 call    _qalloc_or_throw
//   0x415D1B mov     rsi, [rbx]; src
//   0x415D1E mov     rdx, r13; n
//   0x415D21 mov     rdi, rax; dest
//   0x415D24 mov     r14, rax
//   0x415D27 call    _memcpy
//   0x415D2C mov     r12, [rbx+20h]
//   0x415D30 test    r12, r12
//   0x415D33 jz      loc_415C97
//   0x415D39 mov     rdi, r12
//   0x415D3C call    _qalloc_or_throw
//   0x415D41 mov     rsi, [rbx+18h]; src
//   0x415D45 mov     rdx, r12; n
//   0x415D48 mov     rdi, rax; dest
//   0x415D4B mov     r15, rax
//   0x415D4E call    _memcpy
//   0x415D53 jmp     loc_415C97
//   0x415D58 align 20h
//   0x415D60 lea     rdi, [rbp+90h]
//   0x415D67 mov     ecx, 38h ; '8'
//   0x415D6C mov     rdx, rax
//   0x415D6F call    _qvector_reserve
//   0x415D74 mov     [rbp+90h], rax
//   0x415D7B mov     rdx, [rbp+98h]
//   0x415D82 mov     rsi, rax
//   0x415D85 jmp     loc_415CBF
//   0x415D8A align 10h
//   0x415D90 mov     rdi, [r14]; dest
//   0x415D93 lea     r15, [rax+1]
//   0x415D97 cmp     [r14+10h], r15
//   0x415D9B jb      short loc_415DB9
//   0x415D9D mov     [r14+8], r15
//   0x415DA1 mov     rdx, r13; n
//   0x415DA4 mov     rsi, rbx; src
//   0x415DA7 call    _memmove
//   0x415DAC mov     rax, [r14]
//   0x415DAF mov     byte ptr [rax+r13], 0
//   0x415DB4 jmp     loc_415C6E
//   0x415DB9 mov     rsi, rdi
//   0x415DBC mov     ecx, 1
//   0x415DC1 mov     rdi, r14
//   0x415DC4 mov     rdx, r15
//   0x415DC7 call    _qvector_reserve
//   0x415DCC mov     [r14], rax
//   0x415DCF mov     rdi, rax
//   0x415DD2 jmp     short loc_415D9D
//   0x415DD4 mov     rsi, rdx
//   0x415DD7 xor     edi, edi
//   0x415DD9 call    _set_error_data
//   0x415DDE mov     eax, 0FFFFFFF9h
//   0x415DE3 jmp     loc_415B62
//   0x415DE8 mov     rsi, rbx
//   0x415DEB xor     edi, edi
//   0x415DED call    _set_error_string
//   0x415DF2 mov     eax, 0FFFFFFEBh
//   0x415DF7 jmp     loc_415B62
//   0x415DFC mov     eax, 0FFFFFFE1h
//   0x415E01 jmp     loc_415B62
//   0x415E06 mov     rsi, rbx
//   0x415E09 xor     edi, edi
//   0x415E0B call    _set_error_string
//   0x415E10 mov     eax, 0FFFFFFFDh
//   0x415E15 jmp     loc_415B62
//   0x415E1A call    ___stack_chk_fail
//   0x415E1F mov     rbx, rax
//   0x415E22 jmp     loc_2B63C4
//   0x415E27 mov     rbx, rax
//   0x415E2A jmp     loc_2B63E9
// ============================================================

void sub_415AF0(/* signature unknown */)
{
    // see disassembly above
}

