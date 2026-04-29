// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x1D1F80
// Name:           sub_1D1F80
// Function size:  1174 bytes (243 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x1D1F80 push    rbp
//   0x1D1F81 mov     rbp, rsp
//   0x1D1F84 push    r15
//   0x1D1F86 push    r14
//   0x1D1F88 mov     r14, rdi
//   0x1D1F8B push    r13
//   0x1D1F8D mov     r13, r9
//   0x1D1F90 push    r12
//   0x1D1F92 mov     r12d, r8d
//   0x1D1F95 push    rbx
//   0x1D1F96 sub     rsp, 0A8h
//   0x1D1F9D mov     [rbp+var_88], rsi
//   0x1D1FA4 mov     [rbp+var_80], rdx
//   0x1D1FA8 mov     [rbp+var_78], rcx
//   0x1D1FAC mov     rsi, fs:28h
//   0x1D1FB5 mov     [rbp+var_38], rsi
//   0x1D1FB9 mov     rsi, rcx
//   0x1D1FBC call    sub_40EC80
//   0x1D1FC1 test    al, al
//   0x1D1FC3 jnz     short loc_1D1FF0
//   0x1D1FC5 xor     ebx, ebx
//   0x1D1FC7 mov     rax, [rbp+var_38]
//   0x1D1FCB sub     rax, fs:28h
//   0x1D1FD4 jnz     loc_1D23CB
//   0x1D1FDA lea     rsp, [rbp-28h]
//   0x1D1FDE mov     eax, ebx
//   0x1D1FE0 pop     rbx
//   0x1D1FE1 pop     r12
//   0x1D1FE3 pop     r13
//   0x1D1FE5 pop     r14
//   0x1D1FE7 pop     r15
//   0x1D1FE9 pop     rbp
//   0x1D1FEA retn
//   0x1D1FEB align 10h
//   0x1D1FF0 mov     ebx, eax
//   0x1D1FF2 mov     rax, [r14+8]
//   0x1D1FF6 mov     r11, [r14+58h]
//   0x1D1FFA mov     r15, [rax+70h]
//   0x1D1FFE mov     rax, [r14+60h]
//   0x1D2002 lea     rax, [rax+rax*4]
//   0x1D2006 shl     rax, 4
//   0x1D200A add     rax, r11
//   0x1D200D mov     [rbp+var_98], rax
//   0x1D2014 cmp     rax, r11
//   0x1D2017 jz      short loc_1D1FC7
//   0x1D2019 mov     [rbp+var_90], 0
//   0x1D2024 mov     eax, [r11+48h]
//   0x1D2028 test    al, 2
//   0x1D202A jz      loc_1D2110
//   0x1D2030 test    r12b, r12b
//   0x1D2033 jz      loc_1D2302
//   0x1D2039 cmp     byte ptr [r13+0], 0
//   0x1D203E jz      loc_1D23D0
//   0x1D2044 cmp     dword ptr [r11], 3
//   0x1D2048 jnz     loc_1D1FC5
//   0x1D204E mov     rax, [r15]
//   0x1D2051 movzx   esi, word ptr [r11+8]
//   0x1D2056 mov     rdi, r15
//   0x1D2059 mov     [rbp+var_B0], r11
//   0x1D2060 call    qword ptr [rax+0A8h]
//   0x1D2066 movd    xmm0, dword ptr [r15+54h]
//   0x1D206C lea     rdi, [rbp+var_50]
//   0x1D2070 xor     r9d, r9d
//   0x1D2073 mov     edx, eax
//   0x1D2075 mov     rax, [r14]
//   0x1D2078 mov     [rbp+var_A8], rdi
//   0x1D207F mov     r8, rdi
//   0x1D2082 movd    xmm2, edx
//   0x1D2086 mov     rdi, r14
//   0x1D2089 mov     rsi, 200000001h
//   0x1D2093 punpckldq xmm0, xmm2
//   0x1D2097 mov     rax, [rax+40h]
//   0x1D209B mov     [rbp+var_50], 1
//   0x1D20A3 movq    [rbp+var_50+4], xmm0
//   0x1D20A8 mov     edx, [r15+40h]
//   0x1D20AC mov     [rbp+var_60], rsi
//   0x1D20B0 lea     rsi, [rbp+var_60]
//   0x1D20B4 mov     [rbp+var_58], edx
//   0x1D20B7 mov     rcx, rsi
//   0x1D20BA mov     rdx, r13
//   0x1D20BD mov     [rbp+var_A0], rsi
//   0x1D20C4 mov     esi, 1
//   0x1D20C9 call    rax
//   0x1D20CB mov     rdi, [rbp+var_A0]
//   0x1D20D2 call    sub_11C7E0
//   0x1D20D7 mov     rdi, [rbp+var_A8]
//   0x1D20DE call    sub_11C7E0
//   0x1D20E3 mov     r11, [rbp+var_B0]
//   0x1D20EA add     r11, 50h ; 'P'
//   0x1D20EE cmp     [rbp+var_98], r11
//   0x1D20F5 jz      loc_1D1FC7
//   0x1D20FB mov     eax, [r11+48h]
//   0x1D20FF test    al, 2
//   0x1D2101 jnz     loc_1D2039
//   0x1D2107 nop     word ptr [rax+rax+00000000h]
//   0x1D2110 cmp     [rbp+var_90], 0
//   0x1D2118 jz      loc_1D2320
//   0x1D211E cmp     [rbp+var_90], 1
//   0x1D2126 jnz     loc_1D1FC5
//   0x1D212C mov     rdi, [rbp+var_78]
//   0x1D2130 test    byte ptr [rdi+10h], 2Ah
//   0x1D2134 jnz     loc_1D1FC5
//   0x1D213A mov     dword ptr [rbp+var_B0], 1
//   0x1D2144 mov     ecx, [rdi+8]
//   0x1D2147 mov     rdi, [rbp+var_80]
//   0x1D214B lea     edx, [rcx-16h]
//   0x1D214E mov     dword ptr [rbp+var_A0], ecx
//   0x1D2154 mov     [rbp+var_C0], rdi
//   0x1D215B cmp     edx, 2
//   0x1D215E ja      loc_1D2368
//   0x1D2164 test    al, 4
//   0x1D2166 jz      loc_1D2398
//   0x1D216C cmp     dword ptr [r11], 3
//   0x1D2170 jnz     loc_1D1FC5
//   0x1D2176 mov     rax, [r15]
//   0x1D2179 movzx   esi, word ptr [r11+8]
//   0x1D217E mov     [rbp+var_A8], r11
//   0x1D2185 mov     rdi, r15
//   0x1D2188 call    qword ptr [rax+0A8h]
//   0x1D218E mov     edi, 50h ; 'P'
//   0x1D2193 mov     dword ptr [rbp+var_A0], eax
//   0x1D2199 call    j__qalloc_or_throw
//   0x1D219E mov     rsi, [r14+40h]
//   0x1D21A2 mov     rdx, rax
//   0x1D21A5 mov     [rbp+var_B8], rax
//   0x1D21AC mov     rax, 0FFFFFFFF00000000h
//   0x1D21B6 mov     [rdx+20h], rax
//   0x1D21BA mov     rdi, rdx
//   0x1D21BD mov     qword ptr [rdx+28h], 0
//   0x1D21C5 mov     [rdx+30h], rax
//   0x1D21C9 mov     qword ptr [rdx+38h], 0
//   0x1D21D1 mov     [rdx+40h], rax
//   0x1D21D5 mov     qword ptr [rdx+48h], 0
//   0x1D21DD call    sub_330C90
//   0x1D21E2 mov     r11, [rbp+var_A8]
//   0x1D21E9 mov     esi, 2
//   0x1D21EE mov     rdi, [r11+40h]
//   0x1D21F2 mov     [rbp+var_D0], r11
//   0x1D21F9 call    _get_tinfo_property
//   0x1D21FE sub     rsp, 8
//   0x1D2202 lea     rsi, [rbp+var_50]
//   0x1D2206 mov     rdi, 0FFFFFFFF00000000h
//   0x1D2210 mov     [rbp+var_50], rdi
//   0x1D2214 and     eax, 0Fh
//   0x1D2217 mov     r9, rsi
//   0x1D221A lea     rcx, [rbp+var_70]
//   0x1D221E mov     [rbp+var_48], 0
//   0x1D2226 movd    xmm0, dword ptr [r15+54h]
//   0x1D222C cmp     al, 9
//   0x1D222E mov     rdi, 200000001h
//   0x1D2238 movd    xmm1, dword ptr [rbp+var_A0]
//   0x1D2240 mov     [rbp+var_60], 1
//   0x1D2248 setz    al
//   0x1D224B movzx   eax, al
//   0x1D224E mov     [rbp+var_70], rdi
//   0x1D2252 mov     rdi, r14
//   0x1D2255 punpckldq xmm0, xmm1
//   0x1D2259 movq    [rbp+var_60+4], xmm0
//   0x1D225E mov     edx, [r15+40h]
//   0x1D2262 mov     [rbp+var_68], edx
//   0x1D2265 lea     rdx, [rbp+var_60]
//   0x1D2269 push    rax
//   0x1D226A mov     r8, rdx
//   0x1D226D mov     [rbp+var_A8], rsi
//   0x1D2274 mov     rsi, [rbp+var_B8]
//   0x1D227B mov     [rbp+var_A0], rdx
//   0x1D2282 mov     edx, 2
//   0x1D2287 mov     [rbp+var_C8], rcx
//   0x1D228E call    sub_40E3F0
//   0x1D2293 mov     rdi, [rbp+var_C8]
//   0x1D229A pop     rax
//   0x1D229B pop     rdx
//   0x1D229C call    sub_11C7E0
//   0x1D22A1 mov     rdi, [rbp+var_A0]
//   0x1D22A8 call    sub_11C7E0
//   0x1D22AD mov     rdi, [rbp+var_A8]
//   0x1D22B4 call    sub_11C7E0
//   0x1D22B9 mov     rax, [rbp+var_B8]
//   0x1D22C0 mov     edx, dword ptr [rbp+var_B0]
//   0x1D22C6 mov     rdi, [rbp+var_C0]
//   0x1D22CD mov     [rax+44h], edx
//   0x1D22D0 call    sub_11C7E0
//   0x1D22D5 mov     rax, [rbp+var_C0]
//   0x1D22DC mov     rdi, [rbp+var_B8]
//   0x1D22E3 mov     edx, dword ptr [rbp+var_B0]
//   0x1D22E9 mov     r11, [rbp+var_D0]
//   0x1D22F0 mov     byte ptr [rax], 4
//   0x1D22F3 mov     [rax+8], rdi
//   0x1D22F7 mov     [rax+4], edx
//   0x1D22FA add     [rbp+var_90], 1
//   0x1D2302 add     r11, 50h ; 'P'
//   0x1D2306 cmp     [rbp+var_98], r11
//   0x1D230D jnz     loc_1D2024
//   0x1D2313 jmp     loc_1D1FC7
//   0x1D2318 align 20h
//   0x1D2320 mov     rax, [rbp+var_78]
//   0x1D2324 test    byte ptr [rax+10h], 8
//   0x1D2328 jnz     loc_1D1FC5
//   0x1D232E movzx   edi, byte ptr [rax+0Ch]
//   0x1D2332 mov     [rbp+var_A0], r11
//   0x1D2339 call    _get_dtype_size
//   0x1D233E mov     r11, [rbp+var_A0]
//   0x1D2345 mov     rcx, [rbp+var_88]
//   0x1D234C mov     dword ptr [rbp+var_B0], eax
//   0x1D2352 mov     [rbp+var_C0], rcx
//   0x1D2359 mov     eax, [r11+48h]
//   0x1D235D jmp     loc_1D2164
//   0x1D2362 align 8
//   0x1D2368 mov     rax, [rbp+var_78]
//   0x1D236C mov     [rbp+var_A0], r11
//   0x1D2373 movzx   edi, byte ptr [rax+0Ch]
//   0x1D2377 call    _get_dtype_size
//   0x1D237C mov     r11, [rbp+var_A0]
//   0x1D2383 mov     dword ptr [rbp+var_B0], eax
//   0x1D2389 mov     eax, [r11+48h]
//   0x1D238D jmp     loc_1D2164
//   0x1D2392 align 8
//   0x1D2398 mov     ecx, dword ptr [rbp+var_B0]
//   0x1D239E mov     rsi, [rbp+var_C0]
//   0x1D23A5 mov     rdx, r11
//   0x1D23A8 mov     rdi, r15
//   0x1D23AB mov     [rbp+var_A0], r11
//   0x1D23B2 call    sub_1D1C50
//   0x1D23B7 mov     r11, [rbp+var_A0]
//   0x1D23BE test    al, al
//   0x1D23C0 jnz     loc_1D22FA
//   0x1D23C6 jmp     loc_1D1FC5
//   0x1D23CB call    ___stack_chk_fail
//   0x1D23D0 mov     rax, cs:under_debugger_ptr
//   0x1D23D7 cmp     byte ptr [rax], 0
//   0x1D23DA jnz     loc_4390F
//   0x1D23E0 mov     rax, [rbp+var_38]
//   0x1D23E4 sub     rax, fs:28h
//   0x1D23ED jnz     short loc_1D23F9
//   0x1D23EF mov     edi, 0CE3Eh
//   0x1D23F4 call    sub_3835A0
//   0x1D23F9 call    ___stack_chk_fail
//   0x1D23FE mov     rbx, rax
//   0x1D2401 jmp     loc_43911
//   0x1D2406 mov     rbx, rax
//   0x1D2409 jmp     loc_43944
//   0x1D240E mov     rbx, rax
//   0x1D2411 jmp     loc_43985
// ============================================================

void sub_1D1F80(/* signature unknown */)
{
    // see disassembly above
}

