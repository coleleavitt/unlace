// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x846F40
// Name:           sub_846F40
// Function size:  1141 bytes (268 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x846F40 push    r15
//   0x846F42 push    r14
//   0x846F44 push    r13
//   0x846F46 push    r12
//   0x846F48 push    rbp
//   0x846F49 push    rbx
//   0x846F4A sub     rsp, 78h
//   0x846F4E mov     rax, fs:28h
//   0x846F57 mov     [rsp+0A8h+var_40], rax
//   0x846F5C xor     eax, eax
//   0x846F5E test    rcx, rcx
//   0x846F61 jz      short loc_846FE1
//   0x846F63 mov     rbx, rsi
//   0x846F66 mov     rdi, rcx
//   0x846F69 mov     r12d, edx
//   0x846F6C call    sub_3C83A0
//   0x846F71 mov     edx, [rbx]
//   0x846F73 pxor    xmm0, xmm0
//   0x846F77 mov     [rsp+0A8h+ptr], 0
//   0x846F80 mov     r13, rax
//   0x846F83 movups  [rsp+0A8h+var_60], xmm0
//   0x846F88 xor     eax, eax
//   0x846F8A mov     [rsp+0A8h+var_50], edx
//   0x846F8E cmp     edx, 0FFFFFFFFh
//   0x846F91 jnz     loc_847110
//   0x846F97 mov     [rsp+0A8h+var_4C], al
//   0x846F9B mov     esi, [rbx+4]
//   0x846F9E mov     qword ptr [rsp+0A8h+var_60], 0
//   0x846FA7 mov     rax, [rbx+8]
//   0x846FAB add     rsi, rax
//   0x846FAE movq    xmm0, rax
//   0x846FB3 movq    xmm2, rsi
//   0x846FB8 punpcklqdq xmm0, xmm2
//   0x846FBC movaps  [rsp+0A8h+var_98], xmm0
//   0x846FC1 cmp     rax, rsi
//   0x846FC4 jb      short loc_847008
//   0x846FC6 mov     rbp, [rsp+0A8h+ptr]
//   0x846FCB test    rbp, rbp
//   0x846FCE jz      short loc_846FE1
//   0x846FD0 mov     qword ptr [rsp+0A8h+var_60], 0
//   0x846FD9 mov     rdi, rbp; ptr
//   0x846FDC call    _qfree
//   0x846FE1 mov     rax, [rsp+0A8h+var_40]
//   0x846FE6 sub     rax, fs:28h
//   0x846FEF jnz     loc_8473A0
//   0x846FF5 add     rsp, 78h
//   0x846FF9 pop     rbx
//   0x846FFA pop     rbp
//   0x846FFB pop     r12
//   0x846FFD pop     r13
//   0x846FFF pop     r14
//   0x847001 pop     r15
//   0x847003 retn
//   0x847004 align 8
//   0x847008 lea     r14, [rsp+0A8h+var_98]
//   0x84700D mov     rdi, r14
//   0x847010 call    _unpack_dq
//   0x847015 mov     rdi, [rsp+0A8h+ptr]
//   0x84701A mov     r15, rax
//   0x84701D mov     rax, qword ptr [rsp+0A8h+var_60]
//   0x847022 mov     rbp, rdi
//   0x847025 cmp     r15, rax
//   0x847028 jz      short loc_847046
//   0x84702A pxor    xmm0, xmm0
//   0x84702E mov     byte ptr [rsp+0A8h+var_78], 0
//   0x847033 movaps  [rsp+0A8h+var_88], xmm0
//   0x847038 jnb     loc_847120
//   0x84703E mov     qword ptr [rsp+0A8h+var_60], r15
//   0x847043 mov     rax, r15
//   0x847046 lea     rax, [rax+rax*2]
//   0x84704A lea     r15, [rbp+rax*8+0]
//   0x84704F cmp     r15, rbp
//   0x847052 jz      loc_8471A3
//   0x847058 mov     rbx, rbp
//   0x84705B xor     ebp, ebp
//   0x84705D nop     dword ptr [rax]
//   0x847060 mov     rsi, qword ptr [rsp+0A8h+var_98+8]
//   0x847065 mov     rax, qword ptr [rsp+0A8h+var_98]
//   0x84706A xor     edx, edx
//   0x84706C cmp     rax, rsi
//   0x84706F jnb     short loc_847078
//   0x847071 movzx   edx, byte ptr [rax]
//   0x847074 add     rax, 1
//   0x847078 mov     qword ptr [rsp+0A8h+var_98], rax
//   0x84707D mov     rdi, r14
//   0x847080 mov     [rbx+10h], dl
//   0x847083 call    _unpack_dq
//   0x847088 add     rbp, rax
//   0x84708B mov     rdi, r14
//   0x84708E mov     [rbx], rbp
//   0x847091 mov     rsi, qword ptr [rsp+0A8h+var_98+8]
//   0x847096 call    _unpack_dq
//   0x84709B add     rbp, rax
//   0x84709E add     rbx, 18h
//   0x8470A2 mov     [rbx-10h], rbp
//   0x8470A6 cmp     r15, rbx
//   0x8470A9 jnz     short loc_847060
//   0x8470AB mov     rax, qword ptr [rsp+0A8h+var_60]
//   0x8470B0 mov     rdi, [rsp+0A8h+ptr]
//   0x8470B5 lea     rax, [rax+rax*2]
//   0x8470B9 mov     rbx, rdi
//   0x8470BC shl     rax, 3
//   0x8470C0 lea     rbp, [rdi+rax]
//   0x8470C4 test    r12d, r12d
//   0x8470C7 jz      loc_8471B3
//   0x8470CD cmp     rbx, rbp
//   0x8470D0 jnz     short loc_8470F2
//   0x8470D2 jmp     loc_846FCB
//   0x8470D7 align 20h
//   0x8470E0 call    _rangeset_t_add
//   0x8470E5 add     rbx, 18h
//   0x8470E9 cmp     rbx, rbp
//   0x8470EC jz      loc_846FC6
//   0x8470F2 movzx   eax, byte ptr [rbx+10h]
//   0x8470F6 mov     rsi, rbx; int
//   0x8470F9 mov     rdi, r13; int
//   0x8470FC cmp     eax, r12d
//   0x8470FF jnz     short loc_8470E0
//   0x847101 call    _rangeset_t_sub
//   0x847106 jmp     short loc_8470E5
//   0x847108 align 10h
//   0x847110 call    _must_journal
//   0x847115 jmp     loc_846F97
//   0x84711A align 20h
//   0x847120 lea     rdx, [rsp+0A8h+var_88]
//   0x847125 mov     rbx, qword ptr [rsp+0A8h+var_60+8]
//   0x84712A cmp     rdx, rdi
//   0x84712D jb      loc_84724C
//   0x847133 lea     rcx, [rbx+rbx*2]
//   0x847137 lea     rcx, [rdi+rcx*8]
//   0x84713B cmp     rdx, rcx
//   0x84713E jnb     loc_84724C
//   0x847144 cmp     rbx, r15
//   0x847147 jb      loc_847326
//   0x84714D cmp     rax, r15
//   0x847150 jnb     loc_84703E
//   0x847156 lea     rdx, [rax+rax*2]
//   0x84715A pxor    xmm0, xmm0
//   0x84715E shl     rdx, 3
//   0x847162 nop     word ptr [rax+rax+00000000h]
//   0x84716D nop     word ptr [rax+rax+00000000h]
//   0x847178 nop     dword ptr [rax+rax+00000000h]
//   0x847180 lea     rbx, [rbp+rdx+0]
//   0x847185 add     rax, 1
//   0x847189 add     rdx, 18h
//   0x84718D movups  xmmword ptr [rbx], xmm0
//   0x847190 mov     rbp, [rsp+0A8h+ptr]
//   0x847195 mov     byte ptr [rbx+10h], 0
//   0x847199 cmp     r15, rax
//   0x84719C jnz     short loc_847180
//   0x84719E jmp     loc_84703E
//   0x8471A3 test    r12d, r12d
//   0x8471A6 jnz     loc_846FCB
//   0x8471AC mov     rdi, [rsp+0A8h+ptr]
//   0x8471B1 xor     eax, eax
//   0x8471B3 lea     rbp, [rdi+rax]
//   0x8471B7 mov     rbx, rdi
//   0x8471BA cmp     rdi, rbp
//   0x8471BD jz      loc_846FCB
//   0x8471C3 lea     rax, [rbp-18h]
//   0x8471C7 cmp     rdi, rax
//   0x8471CA jnb     loc_8470F2
//   0x8471D0 nop     word ptr [rax+rax+00000000h]
//   0x8471DB nop     word ptr [rax+rax+00000000h]
//   0x8471E6 nop     word ptr [rax+rax+00000000h]
//   0x8471F1 nop     word ptr [rax+rax+00000000h]
//   0x8471FC nop     dword ptr [rax+00h]
//   0x847200 movdqu  xmm1, xmmword ptr [rax]
//   0x847204 movdqu  xmm0, xmmword ptr [rbx]
//   0x847208 sub     rax, 18h
//   0x84720C add     rbx, 18h
//   0x847210 mov     rdx, [rbx-8]
//   0x847214 movups  xmmword ptr [rbx-18h], xmm1
//   0x847218 movzx   ecx, byte ptr [rax+28h]
//   0x84721C mov     [rsp+0A8h+var_78], rdx
//   0x847221 mov     [rbx-8], cl
//   0x847224 movaps  [rsp+0A8h+var_88], xmm0
//   0x847229 movups  xmmword ptr [rax+18h], xmm0
//   0x84722D mov     [rax+28h], dl
//   0x847230 cmp     rbx, rax
//   0x847233 jb      short loc_847200
//   0x847235 mov     rax, qword ptr [rsp+0A8h+var_60]
//   0x84723A mov     rbx, [rsp+0A8h+ptr]
//   0x84723F lea     rax, [rax+rax*2]
//   0x847243 lea     rbp, [rbx+rax*8]
//   0x847247 jmp     loc_8470CD
//   0x84724C cmp     rbx, r15
//   0x84724F jb      short loc_8472A1
//   0x847251 cmp     rax, r15
//   0x847254 jnb     loc_84703E
//   0x84725A lea     rdx, [rax+rax*2]
//   0x84725E movdqa  xmm0, [rsp+0A8h+var_88]
//   0x847264 mov     rcx, [rsp+0A8h+var_78]
//   0x847269 shl     rdx, 3
//   0x84726D nop     word ptr [rax+rax+00000000h]
//   0x847278 nop     dword ptr [rax+rax+00000000h]
//   0x847280 add     rax, 1
//   0x847284 mov     [rbp+rdx+10h], rcx
//   0x847289 movups  xmmword ptr [rbp+rdx+0], xmm0
//   0x84728E add     rdx, 18h
//   0x847292 mov     rbp, [rsp+0A8h+ptr]
//   0x847297 cmp     r15, rax
//   0x84729A jnz     short loc_847280
//   0x84729C jmp     loc_84703E
//   0x8472A1 lea     rdi, [rsp+0A8h+ptr]
//   0x8472A6 mov     ecx, 18h
//   0x8472AB mov     rdx, r15
//   0x8472AE xor     esi, esi
//   0x8472B0 call    _qvector_reserve
//   0x8472B5 mov     rdx, qword ptr [rsp+0A8h+var_60]
//   0x8472BA mov     rsi, qword ptr [rsp+0A8h+var_60+8]
//   0x8472BF mov     rbp, rax
//   0x8472C2 mov     qword ptr [rsp+0A8h+var_60+8], rbx
//   0x8472C7 mov     rdi, [rsp+0A8h+ptr]
//   0x8472CC sub     rdx, 1
//   0x8472D0 js      short loc_847303
//   0x8472D2 nop     word ptr [rax+rax+00000000h]
//   0x8472DD nop     dword ptr [rax]
//   0x8472E0 movdqu  xmm0, xmmword ptr [rdi]
//   0x8472E4 add     rax, 18h
//   0x8472E8 add     rdi, 18h
//   0x8472EC movups  xmmword ptr [rax-18h], xmm0
//   0x8472F0 mov     rcx, [rdi-8]
//   0x8472F4 mov     [rax-8], rcx
//   0x8472F8 sub     rdx, 1
//   0x8472FC jnb     short loc_8472E0
//   0x8472FE mov     rdi, [rsp+0A8h+ptr]; ptr
//   0x847303 mov     [rsp+0A8h+var_A0], rsi
//   0x847308 call    _qfree
//   0x84730D mov     rsi, [rsp+0A8h+var_A0]
//   0x847312 mov     rax, qword ptr [rsp+0A8h+var_60]
//   0x847317 mov     [rsp+0A8h+ptr], rbp
//   0x84731C mov     qword ptr [rsp+0A8h+var_60+8], rsi
//   0x847321 jmp     loc_847251
//   0x847326 lea     rdi, [rsp+0A8h+ptr]
//   0x84732B mov     ecx, 18h
//   0x847330 mov     rdx, r15
//   0x847333 xor     esi, esi
//   0x847335 call    _qvector_reserve
//   0x84733A mov     rdi, [rsp+0A8h+ptr]
//   0x84733F mov     rcx, qword ptr [rsp+0A8h+var_60]
//   0x847344 mov     rbp, rax
//   0x847347 mov     r8, qword ptr [rsp+0A8h+var_60+8]
//   0x84734C mov     qword ptr [rsp+0A8h+var_60+8], rbx
//   0x847351 mov     rdx, rdi
//   0x847354 sub     rcx, 1
//   0x847358 js      short loc_84737D
//   0x84735A movdqu  xmm0, xmmword ptr [rdx]
//   0x84735E add     rax, 18h
//   0x847362 add     rdx, 18h
//   0x847366 movups  xmmword ptr [rax-18h], xmm0
//   0x84736A mov     rsi, [rdx-8]
//   0x84736E mov     [rax-8], rsi
//   0x847372 sub     rcx, 1
//   0x847376 jnb     short loc_84735A
//   0x847378 mov     rdi, [rsp+0A8h+ptr]; ptr
//   0x84737D mov     [rsp+0A8h+var_A0], r8
//   0x847382 call    _qfree
//   0x847387 mov     r8, [rsp+0A8h+var_A0]
//   0x84738C mov     rax, qword ptr [rsp+0A8h+var_60]
//   0x847391 mov     [rsp+0A8h+ptr], rbp
//   0x847396 mov     qword ptr [rsp+0A8h+var_60+8], r8
//   0x84739B jmp     loc_84714D
//   0x8473A0 call    ___stack_chk_fail
//   0x8473A5 mov     rbx, rax
//   0x8473A8 jmp     loc_2E14EA
//   0x8473AD mov     rbx, rax
//   0x8473B0 jmp     loc_2E1518
// ============================================================

void sub_846F40(/* signature unknown */)
{
    // see disassembly above
}

