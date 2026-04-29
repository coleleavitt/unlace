// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x62D90
// Name:           sub_62D90
// Function size:  1553 bytes (342 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x62D90 push    r15
//   0x62D92 push    r14
//   0x62D94 push    r13
//   0x62D96 push    r12
//   0x62D98 push    rbp
//   0x62D99 push    rbx
//   0x62D9A mov     rbx, rsi
//   0x62D9D sub     rsp, 28h
//   0x62DA1 mov     [rsp+58h+var_4C], edx
//   0x62DA5 mov     [rsp+58h+var_50], ecx
//   0x62DA9 test    rsi, rsi
//   0x62DAC jz      loc_631B0
//   0x62DB2 cmp     dword ptr [rsi+4Ch], 1
//   0x62DB6 jz      loc_631B0
//   0x62DBC mov     esi, edx
//   0x62DBE xor     edx, edx
//   0x62DC0 mov     r15, rdi
//   0x62DC3 call    sub_62540
//   0x62DC8 mov     rbp, rax
//   0x62DCB mov     eax, [rbx+18h]
//   0x62DCE and     eax, 0FFFF7FFBh
//   0x62DD3 or      ah, 80h
//   0x62DD6 mov     [rbp+18h], eax
//   0x62DD9 mov     rax, [rbx+20h]
//   0x62DDD mov     [rbp+20h], rax
//   0x62DE1 mov     rax, [rbx+28h]
//   0x62DE5 mov     [rbp+28h], rax
//   0x62DE9 mov     eax, [rbx+4Ch]
//   0x62DEC mov     [rbp+4Ch], eax
//   0x62DEF cmp     rbx, rbp
//   0x62DF2 jz      short loc_62E18
//   0x62DF4 mov     r12, [rbx+190h]
//   0x62DFB test    r12, r12
//   0x62DFE jz      short loc_62E0D
//   0x62E00 mov     r13, r12
//   0x62E03 sub     r13, 1
//   0x62E07 jnz     loc_63338
//   0x62E0D mov     qword ptr [rbp+190h], 0
//   0x62E18 lea     rsi, [rbx+50h]
//   0x62E1C lea     rdi, [rbp+50h]
//   0x62E20 xor     r13d, r13d
//   0x62E23 call    sub_5E350
//   0x62E28 mov     rdx, [rbx+68h]
//   0x62E2C movq    xmm0, rdx
//   0x62E31 punpcklqdq xmm0, xmm0
//   0x62E35 test    rdx, rdx
//   0x62E38 jnz     loc_63200
//   0x62E3E mov     rdi, [rbp+60h]
//   0x62E42 test    rdi, rdi
//   0x62E45 jz      short loc_62E5F
//   0x62E47 mov     qword ptr [rbp+68h], 0
//   0x62E4F movaps  [rsp+58h+var_48], xmm0
//   0x62E54 call    _qfree
//   0x62E59 movdqa  xmm0, [rsp+58h+var_48]
//   0x62E5F mov     [rbp+60h], r13
//   0x62E63 lea     rsi, [rbx+78h]
//   0x62E67 lea     rdi, [rbp+78h]
//   0x62E6B xor     r13d, r13d
//   0x62E6E movups  xmmword ptr [rbp+68h], xmm0
//   0x62E72 call    sub_5E350
//   0x62E77 mov     rdx, [rbx+90h]
//   0x62E7E movq    xmm0, rdx
//   0x62E83 punpcklqdq xmm0, xmm0
//   0x62E87 test    rdx, rdx
//   0x62E8A jnz     loc_631C8
//   0x62E90 mov     rdi, [rbp+88h]
//   0x62E97 test    rdi, rdi
//   0x62E9A jz      short loc_62EB7
//   0x62E9C mov     qword ptr [rbp+90h], 0
//   0x62EA7 movaps  [rsp+58h+var_48], xmm0
//   0x62EAC call    _qfree
//   0x62EB1 movdqa  xmm0, [rsp+58h+var_48]
//   0x62EB7 mov     [rbp+88h], r13
//   0x62EBE lea     rsi, [rbx+0A0h]
//   0x62EC5 xor     r13d, r13d
//   0x62EC8 lea     rdi, [rbp+0A0h]
//   0x62ECF movups  xmmword ptr [rbp+90h], xmm0
//   0x62ED6 call    sub_5E350
//   0x62EDB mov     rdx, [rbx+0B8h]
//   0x62EE2 movq    xmm0, rdx
//   0x62EE7 punpcklqdq xmm0, xmm0
//   0x62EEB test    rdx, rdx
//   0x62EEE jnz     loc_632E0
//   0x62EF4 mov     rdi, [rbp+0B0h]
//   0x62EFB test    rdi, rdi
//   0x62EFE jz      short loc_62F1B
//   0x62F00 mov     qword ptr [rbp+0B8h], 0
//   0x62F0B movaps  [rsp+58h+var_48], xmm0
//   0x62F10 call    _qfree
//   0x62F15 movdqa  xmm0, [rsp+58h+var_48]
//   0x62F1B mov     [rbp+0B0h], r13
//   0x62F22 lea     rsi, [rbx+0C8h]
//   0x62F29 xor     r13d, r13d
//   0x62F2C lea     rdi, [rbp+0C8h]
//   0x62F33 movups  xmmword ptr [rbp+0B8h], xmm0
//   0x62F3A call    sub_5E350
//   0x62F3F mov     rdx, [rbx+0E0h]
//   0x62F46 movq    xmm0, rdx
//   0x62F4B punpcklqdq xmm0, xmm0
//   0x62F4F test    rdx, rdx
//   0x62F52 jnz     loc_632A8
//   0x62F58 mov     rdi, [rbp+0D8h]
//   0x62F5F test    rdi, rdi
//   0x62F62 jz      short loc_62F7F
//   0x62F64 mov     qword ptr [rbp+0E0h], 0
//   0x62F6F movaps  [rsp+58h+var_48], xmm0
//   0x62F74 call    _qfree
//   0x62F79 movdqa  xmm0, [rsp+58h+var_48]
//   0x62F7F mov     [rbp+0D8h], r13
//   0x62F86 lea     rsi, [rbx+0F0h]
//   0x62F8D xor     r13d, r13d
//   0x62F90 lea     rdi, [rbp+0F0h]
//   0x62F97 movups  xmmword ptr [rbp+0E0h], xmm0
//   0x62F9E call    sub_5E350
//   0x62FA3 mov     rdx, [rbx+108h]
//   0x62FAA movq    xmm0, rdx
//   0x62FAF punpcklqdq xmm0, xmm0
//   0x62FB3 test    rdx, rdx
//   0x62FB6 jnz     loc_63270
//   0x62FBC mov     rdi, [rbp+100h]
//   0x62FC3 test    rdi, rdi
//   0x62FC6 jz      short loc_62FE3
//   0x62FC8 mov     qword ptr [rbp+108h], 0
//   0x62FD3 movaps  [rsp+58h+var_48], xmm0
//   0x62FD8 call    _qfree
//   0x62FDD movdqa  xmm0, [rsp+58h+var_48]
//   0x62FE3 mov     [rbp+100h], r13
//   0x62FEA lea     rsi, [rbx+118h]
//   0x62FF1 xor     r13d, r13d
//   0x62FF4 lea     rdi, [rbp+118h]
//   0x62FFB movups  xmmword ptr [rbp+108h], xmm0
//   0x63002 call    sub_5E350
//   0x63007 mov     rdx, [rbx+130h]
//   0x6300E movq    xmm0, rdx
//   0x63013 punpcklqdq xmm0, xmm0
//   0x63017 test    rdx, rdx
//   0x6301A jnz     loc_63238
//   0x63020 mov     rdi, [rbp+128h]
//   0x63027 test    rdi, rdi
//   0x6302A jz      short loc_63047
//   0x6302C mov     qword ptr [rbp+130h], 0
//   0x63037 movaps  [rsp+58h+var_48], xmm0
//   0x6303C call    _qfree
//   0x63041 movdqa  xmm0, [rsp+58h+var_48]
//   0x63047 mov     [rbp+128h], r13
//   0x6304E xor     r13d, r13d
//   0x63051 mov     r14, 0FFFFFFFF00000000h
//   0x6305B movups  xmmword ptr [rbp+130h], xmm0
//   0x63062 mov     rax, [rbx+140h]
//   0x63069 mov     [rbp+140h], rax
//   0x63070 mov     rax, [rbx+148h]
//   0x63077 mov     [rbp+148h], rax
//   0x6307E mov     rax, [rbx+150h]
//   0x63085 mov     [rbp+150h], rax
//   0x6308C mov     rax, [rbx+200h]
//   0x63093 mov     [rbp+200h], rax
//   0x6309A mov     rax, [rbx+208h]
//   0x630A1 mov     [rbp+208h], rax
//   0x630A8 mov     rax, [rbx+40h]
//   0x630AC mov     [rbp+1A0h], rax
//   0x630B3 mov     [rbp+1C0h], rax
//   0x630BA and     dword ptr [r15+4], 0FFFFFE77h
//   0x630C2 mov     r12, [rbx+30h]
//   0x630C6 test    r12, r12
//   0x630C9 jz      short loc_6312F
//   0x630CB nop     dword ptr [rax+rax+00h]
//   0x630D0 mov     edi, 50h ; 'P'
//   0x630D5 call    j__qalloc_or_throw
//   0x630DA pxor    xmm0, xmm0
//   0x630DE mov     rsi, r12
//   0x630E1 mov     [rax+20h], r14
//   0x630E5 mov     rdi, rax
//   0x630E8 mov     rbx, rax
//   0x630EB mov     qword ptr [rax+28h], 0
//   0x630F3 mov     [rax+30h], r14
//   0x630F7 mov     qword ptr [rax+38h], 0
//   0x630FF mov     [rax+40h], r14
//   0x63103 mov     qword ptr [rax+48h], 0
//   0x6310B movups  xmmword ptr [rax+8], xmm0
//   0x6310F call    sub_11ECE0
//   0x63114 mov     rdx, r13
//   0x63117 mov     rsi, rbx
//   0x6311A mov     rdi, rbp
//   0x6311D call    sub_9CAA0
//   0x63122 mov     r12, [r12+8]
//   0x63127 mov     r13, rax
//   0x6312A test    r12, r12
//   0x6312D jnz     short loc_630D0
//   0x6312F mov     eax, [rbp+4Ch]
//   0x63132 test    eax, eax
//   0x63134 jz      short loc_63196
//   0x63136 mov     rdi, [rbp+10h]
//   0x6313A mov     edx, [rsp+58h+var_4C]
//   0x6313E mov     rax, [rdi+170h]
//   0x63145 mov     rcx, [rdi+178h]
//   0x6314C add     edx, 1
//   0x6314F lea     rcx, [rax+rcx*4]
//   0x63153 cmp     rax, rcx
//   0x63156 jnz     short loc_63169
//   0x63158 jmp     short loc_63179
//   0x6315A align 20h
//   0x63160 add     rax, 4
//   0x63164 cmp     rcx, rax
//   0x63167 jz      short loc_63179
//   0x63169 cmp     edx, [rax]
//   0x6316B jnz     short loc_63160
//   0x6316D cmp     rcx, rax
//   0x63170 jz      short loc_63179
//   0x63172 xor     esi, esi
//   0x63174 call    sub_1CE0C0
//   0x63179 xor     esi, esi
//   0x6317B mov     rdi, rbp
//   0x6317E call    sub_1CE0C0
//   0x63183 mov     rdi, r15
//   0x63186 call    sub_1CDED0
//   0x6318B test    byte ptr [rsp+58h+var_50], 2
//   0x63190 jnz     loc_63318
//   0x63196 test    byte ptr [rsp+58h+var_50], 1
//   0x6319B jnz     short loc_631B8
//   0x6319D add     rsp, 28h
//   0x631A1 mov     rax, rbp
//   0x631A4 pop     rbx
//   0x631A5 pop     rbp
//   0x631A6 pop     r12
//   0x631A8 pop     r13
//   0x631AA pop     r14
//   0x631AC pop     r15
//   0x631AE retn
//   0x631AF align 10h
//   0x631B0 xor     ebp, ebp
//   0x631B2 jmp     short loc_6319D
//   0x631B4 align 8
//   0x631B8 mov     rdi, r15
//   0x631BB call    sub_189C40
//   0x631C0 jmp     short loc_6319D
//   0x631C2 align 8
//   0x631C8 shl     rdx, 4
//   0x631CC movaps  [rsp+58h+var_48], xmm0
//   0x631D1 mov     rdi, rdx
//   0x631D4 mov     r12, rdx
//   0x631D7 call    _qalloc_or_throw
//   0x631DC mov     rsi, [rbx+88h]; src
//   0x631E3 mov     rdx, r12; n
//   0x631E6 mov     rdi, rax; dest
//   0x631E9 mov     r13, rax
//   0x631EC call    _memcpy
//   0x631F1 movdqa  xmm0, [rsp+58h+var_48]
//   0x631F7 jmp     loc_62E90
//   0x631FC align 20h
//   0x63200 shl     rdx, 4
//   0x63204 movaps  [rsp+58h+var_48], xmm0
//   0x63209 mov     rdi, rdx
//   0x6320C mov     r12, rdx
//   0x6320F call    _qalloc_or_throw
//   0x63214 mov     rsi, [rbx+60h]; src
//   0x63218 mov     rdx, r12; n
//   0x6321B mov     rdi, rax; dest
//   0x6321E mov     r13, rax
//   0x63221 call    _memcpy
//   0x63226 movdqa  xmm0, [rsp+58h+var_48]
//   0x6322C jmp     loc_62E3E
//   0x63231 align 8
//   0x63238 shl     rdx, 4
//   0x6323C movaps  [rsp+58h+var_48], xmm0
//   0x63241 mov     rdi, rdx
//   0x63244 mov     r12, rdx
//   0x63247 call    _qalloc_or_throw
//   0x6324C mov     rsi, [rbx+128h]; src
//   0x63253 mov     rdx, r12; n
//   0x63256 mov     rdi, rax; dest
//   0x63259 mov     r13, rax
//   0x6325C call    _memcpy
//   0x63261 movdqa  xmm0, [rsp+58h+var_48]
//   0x63267 jmp     loc_63020
//   0x6326C align 10h
//   0x63270 shl     rdx, 4
//   0x63274 movaps  [rsp+58h+var_48], xmm0
//   0x63279 mov     rdi, rdx
//   0x6327C mov     r12, rdx
//   0x6327F call    _qalloc_or_throw
//   0x63284 mov     rsi, [rbx+100h]; src
//   0x6328B mov     rdx, r12; n
//   0x6328E mov     rdi, rax; dest
//   0x63291 mov     r13, rax
//   0x63294 call    _memcpy
//   0x63299 movdqa  xmm0, [rsp+58h+var_48]
//   0x6329F jmp     loc_62FBC
//   0x632A4 align 8
//   0x632A8 shl     rdx, 4
//   0x632AC movaps  [rsp+58h+var_48], xmm0
//   0x632B1 mov     rdi, rdx
//   0x632B4 mov     r12, rdx
//   0x632B7 call    _qalloc_or_throw
//   0x632BC mov     rsi, [rbx+0D8h]; src
//   0x632C3 mov     rdx, r12; n
//   0x632C6 mov     rdi, rax; dest
//   0x632C9 mov     r13, rax
//   0x632CC call    _memcpy
//   0x632D1 movdqa  xmm0, [rsp+58h+var_48]
//   0x632D7 jmp     loc_62F58
//   0x632DC align 20h
//   0x632E0 shl     rdx, 4
//   0x632E4 movaps  [rsp+58h+var_48], xmm0
//   0x632E9 mov     rdi, rdx
//   0x632EC mov     r12, rdx
//   0x632EF call    _qalloc_or_throw
//   0x632F4 mov     rsi, [rbx+0B0h]; src
//   0x632FB mov     rdx, r12; n
//   0x632FE mov     rdi, rax; dest
//   0x63301 mov     r13, rax
//   0x63304 call    _memcpy
//   0x63309 movdqa  xmm0, [rsp+58h+var_48]
//   0x6330F jmp     loc_62EF4
//   0x63314 align 8
//   0x63318 cmp     qword ptr [rbp+178h], 1
//   0x63320 jnz     loc_63196
//   0x63326 mov     rdi, rbp
//   0x63329 call    sub_A1C60
//   0x6332E jmp     loc_63196
//   0x63333 align 8
//   0x63338 mov     r14, [rbx+188h]
//   0x6333F mov     rdi, [rbp+188h]; dest
//   0x63346 cmp     [rbp+198h], r12
//   0x6334D jb      short loc_63373
//   0x6334F mov     [rbp+190h], r12
//   0x63356 mov     rdx, r13; n
//   0x63359 mov     rsi, r14; src
//   0x6335C call    _memmove
//   0x63361 mov     rax, [rbp+188h]
//   0x63368 mov     byte ptr [rax+r12-1], 0
//   0x6336E jmp     loc_62E18
//   0x63373 lea     rax, [rbp+188h]
//   0x6337A mov     rsi, rdi
//   0x6337D mov     ecx, 1
//   0x63382 mov     rdx, r12
//   0x63385 mov     rdi, rax
//   0x63388 call    _qvector_reserve
//   0x6338D mov     [rbp+188h], rax
//   0x63394 mov     rdi, rax
//   0x63397 jmp     short loc_6334F
//   0x63399 mov     rbp, rax
//   0x6339C jmp     loc_2B4AC
// ============================================================

void sub_62D90(/* signature unknown */)
{
    // see disassembly above
}

