// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x3BE150
// Name:           get_zero_ranges
// Function size:  412 bytes (97 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x3BE150 push    r15; int
//   0x3BE152 push    r14; int
//   0x3BE154 push    r13; int
//   0x3BE156 xor     r13d, r13d
//   0x3BE159 push    r12; int
//   0x3BE15B push    rbp; int
//   0x3BE15C push    rbx; int
//   0x3BE15D mov     rbx, rdi
//   0x3BE160 sub     rsp, 48h
//   0x3BE164 lea     rax, qword_2CCB598
//   0x3BE16B mov     rbp, fs:28h
//   0x3BE174 mov     qword ptr [rsp+78h+var_40], rbp; int
//   0x3BE179 mov     rbp, rsi
//   0x3BE17C mov     rax, [rax]
//   0x3BE17F mov     r14, [rax+688h]
//   0x3BE186 mov     r12, [r14+490h]
//   0x3BE18D movq    xmm0, r12
//   0x3BE192 punpcklqdq xmm0, xmm0
//   0x3BE196 test    r12, r12
//   0x3BE199 jnz     loc_3BE260
//   0x3BE19F mov     rdi, [rbx]; ptr
//   0x3BE1A2 test    rdi, rdi
//   0x3BE1A5 jz      short loc_3BE1BD
//   0x3BE1A7 mov     qword ptr [rbx+8], 0
//   0x3BE1AF movaps  xmmword ptr [rsp+78h+var_78], xmm0; int
//   0x3BE1B3 call    _qfree
//   0x3BE1B8 movdqa  xmm0, xmmword ptr [rsp+78h+var_78]
//   0x3BE1BD mov     [rbx], r13
//   0x3BE1C0 mov     qword ptr [rbx+18h], 0
//   0x3BE1C8 movups  xmmword ptr [rbx+8], xmm0
//   0x3BE1CC test    rbp, rbp
//   0x3BE1CF jz      short loc_3BE231
//   0x3BE1D1 mov     r12, [rbp+0]
//   0x3BE1D5 mov     r13, [rbp+8]
//   0x3BE1D9 pxor    xmm0, xmm0
//   0x3BE1DD mov     [rsp+78h+ptr], 0; int
//   0x3BE1E6 mov     qword ptr [rsp+78h+var_50], 0; int
//   0x3BE1EF lea     rbp, [rsp+78h+ptr]
//   0x3BE1F4 mov     [rsp+78h+var_48], 0FFFFFFFFh; int
//   0x3BE1FC movups  xmmword ptr [rsp+78h+var_60], xmm0; int
//   0x3BE201 cmp     r12, r13
//   0x3BE204 jb      loc_3BE298
//   0x3BE20A mov     rsi, rbp; int
//   0x3BE20D mov     rdi, rbx; int
//   0x3BE210 call    _rangeset_t_intersect
//   0x3BE215 mov     rdi, [rsp+78h+ptr]; ptr
//   0x3BE21A test    rdi, rdi
//   0x3BE21D jz      short loc_3BE22D
//   0x3BE21F mov     qword ptr [rsp+78h+var_60], 0
//   0x3BE228 call    _qfree
//   0x3BE22D mov     r12, [rbx+8]
//   0x3BE231 test    r12, r12
//   0x3BE234 setnz   al
//   0x3BE237 mov     rdx, qword ptr [rsp+78h+var_40]
//   0x3BE23C sub     rdx, fs:28h
//   0x3BE245 jnz     loc_3BE2D7
//   0x3BE24B add     rsp, 48h
//   0x3BE24F pop     rbx
//   0x3BE250 pop     rbp
//   0x3BE251 pop     r12
//   0x3BE253 pop     r13
//   0x3BE255 pop     r14
//   0x3BE257 pop     r15
//   0x3BE259 retn
//   0x3BE25A align 20h
//   0x3BE260 mov     r15, r12
//   0x3BE263 movaps  xmmword ptr [rsp+78h+var_78], xmm0
//   0x3BE267 shl     r15, 4
//   0x3BE26B mov     rdi, r15
//   0x3BE26E call    _qalloc_or_throw
//   0x3BE273 mov     rsi, [r14+488h]; src
//   0x3BE27A mov     rdx, r15; n
//   0x3BE27D mov     rdi, rax; dest
//   0x3BE280 mov     r13, rax
//   0x3BE283 call    _memcpy
//   0x3BE288 movdqa  xmm0, xmmword ptr [rsp+78h+var_78]
//   0x3BE28D jmp     loc_3BE19F
//   0x3BE292 align 8
//   0x3BE298 mov     ecx, 10h
//   0x3BE29D mov     edx, 1
//   0x3BE2A2 xor     esi, esi
//   0x3BE2A4 mov     rdi, rbp
//   0x3BE2A7 call    _qvector_reserve
//   0x3BE2AC mov     rdx, qword ptr [rsp+78h+var_60]
//   0x3BE2B1 movq    xmm0, r12
//   0x3BE2B6 movq    xmm1, r13
//   0x3BE2BB mov     [rsp+78h+ptr], rax
//   0x3BE2C0 punpcklqdq xmm0, xmm1
//   0x3BE2C4 shl     rdx, 4
//   0x3BE2C8 movups  xmmword ptr [rax+rdx], xmm0
//   0x3BE2CC add     qword ptr [rsp+78h+var_60], 1
//   0x3BE2D2 jmp     loc_3BE20A
//   0x3BE2D7 call    ___stack_chk_fail
//   0x3BE2DC mov     rbx, rax
//   0x3BE2DF jmp     loc_2B3AA5
//   0x3BE2E4 mov     rbx, rax
//   0x3BE2E7 jmp     loc_2B3AD3
// ============================================================

void get_zero_ranges(/* signature unknown */)
{
    // see disassembly above
}

