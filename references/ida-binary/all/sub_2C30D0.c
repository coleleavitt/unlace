// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x2C30D0
// Name:           sub_2C30D0
// Function size:  703 bytes (159 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x2C30D0 push    r14
//   0x2C30D2 push    r13
//   0x2C30D4 push    r12
//   0x2C30D6 push    rbp
//   0x2C30D7 mov     rbp, rdi
//   0x2C30DA push    rbx
//   0x2C30DB sub     rsp, 10h
//   0x2C30DF mov     r12, fs:28h
//   0x2C30E8 mov     [rsp+38h+var_30], r12
//   0x2C30ED mov     r12d, esi
//   0x2C30F0 call    sub_2B27A0
//   0x2C30F5 mov     rbx, rax
//   0x2C30F8 xor     eax, eax
//   0x2C30FA test    rbx, rbx
//   0x2C30FD jz      loc_2C31B0
//   0x2C3103 mov     rdi, rbp
//   0x2C3106 call    sub_17D870
//   0x2C310B mov     [rsp+38h+var_38], 0
//   0x2C3113 mov     rbp, rax
//   0x2C3116 mov     rax, cs:_ZN2QT16QCoreApplication4selfE_ptr
//   0x2C311D mov     rax, [rax]
//   0x2C3120 mov     r13, [rax+80h]
//   0x2C3127 test    r13, r13
//   0x2C312A jz      loc_2C31D8
//   0x2C3130 mov     rdi, rbp; this
//   0x2C3133 call    __ZNK2QT19QAbstractScrollArea8viewportEv; QT::QAbstractScrollArea::viewport(void)
//   0x2C3138 lea     rsi, [r13+10h]
//   0x2C313C mov     r13, rsp
//   0x2C313F mov     rdi, rax
//   0x2C3142 call    __ZNK2QT7QWidget13mapFromGlobalERKNS_6QPointE; QT::QWidget::mapFromGlobal(QT::QPoint const&)
//   0x2C3147 mov     [rsp+38h+var_38], rax
//   0x2C314B mov     rax, [rbx]
//   0x2C314E lea     rdx, sub_2B2520
//   0x2C3155 mov     rax, [rax+138h]
//   0x2C315C cmp     rax, rdx
//   0x2C315F jnz     loc_2C3350
//   0x2C3165 mov     rax, [rbx+10h]
//   0x2C3169 lea     rdi, [rax+180h]
//   0x2C3170 call    sub_1EA6C0
//   0x2C3175 movsd   xmm0, qword ptr [rax]
//   0x2C3179 cmp     r12d, 1
//   0x2C317D jz      loc_2C3330
//   0x2C3183 cmp     r12d, 2
//   0x2C3187 jz      loc_2C3280
//   0x2C318D mulsd   xmm0, cs:qword_5DBFA8
//   0x2C3195 xor     edx, edx
//   0x2C3197 mov     rsi, r13
//   0x2C319A mov     rdi, rbx
//   0x2C319D call    sub_2C2BB0
//   0x2C31A2 mov     eax, 1
//   0x2C31A7 nop     word ptr [rax+rax+00000000h]
//   0x2C31B0 mov     rdx, [rsp+38h+var_30]
//   0x2C31B5 sub     rdx, fs:28h
//   0x2C31BE jnz     loc_2C338A
//   0x2C31C4 add     rsp, 10h
//   0x2C31C8 pop     rbx
//   0x2C31C9 pop     rbp
//   0x2C31CA pop     r12
//   0x2C31CC pop     r13
//   0x2C31CE pop     r14
//   0x2C31D0 retn
//   0x2C31D1 align 8
//   0x2C31D8 mov     rax, [rbx]
//   0x2C31DB lea     rdx, sub_2B36E0
//   0x2C31E2 mov     rax, [rax+1F8h]
//   0x2C31E9 cmp     rax, rdx
//   0x2C31EC jnz     loc_2C3380
//   0x2C31F2 mov     rax, [rbx+10h]
//   0x2C31F6 lea     rdi, [rax+180h]
//   0x2C31FD call    sub_1EA6A0
//   0x2C3202 mov     rdi, [rbx+10h]
//   0x2C3206 mov     rsi, rbx
//   0x2C3209 mov     r14d, [rax+20h]
//   0x2C320D mov     r13, rax
//   0x2C3210 call    sub_1EB540
//   0x2C3215 cmp     r14d, eax
//   0x2C3218 jnz     loc_2C3318
//   0x2C321E mov     eax, [r13+18h]
//   0x2C3222 test    eax, eax
//   0x2C3224 js      loc_2C32A8
//   0x2C322A xor     esi, esi
//   0x2C322C mov     rdx, rsp
//   0x2C322F mov     rdi, rbx
//   0x2C3232 mov     r13, rsp
//   0x2C3235 call    sub_1761D0
//   0x2C323A lea     rdi, [rbp+180h]
//   0x2C3241 call    sub_1EA6C0
//   0x2C3246 movq    xmm0, [rsp+38h+var_38]
//   0x2C324B movupd  xmm1, xmmword ptr [rax]
//   0x2C324F ucomisd xmm1, cs:dbl_5DC300
//   0x2C3257 movupd  xmm2, xmmword ptr [rax+8]
//   0x2C325C jp      loc_2C3360
//   0x2C3262 jnz     loc_2C3360
//   0x2C3268 cvttpd2dq xmm2, xmm2
//   0x2C326C psubd   xmm0, xmm2
//   0x2C3270 movq    [rsp+38h+var_38], xmm0
//   0x2C3275 jmp     loc_2C314B
//   0x2C327A align 20h
//   0x2C3280 movsd   xmm0, cs:dbl_5DC300
//   0x2C3288 mov     edx, 1
//   0x2C328D mov     rsi, r13
//   0x2C3290 mov     rdi, rbx
//   0x2C3293 call    sub_2C2BB0
//   0x2C3298 mov     eax, 1
//   0x2C329D jmp     loc_2C31B0
//   0x2C32A2 align 8
//   0x2C32A8 mov     rdi, rbp; this
//   0x2C32AB call    __ZNK2QT19QAbstractScrollArea8viewportEv; QT::QAbstractScrollArea::viewport(void)
//   0x2C32B0 mov     rdi, rbp; this
//   0x2C32B3 mov     rax, [rax+20h]
//   0x2C32B7 mov     r13d, [rax+18h]
//   0x2C32BB mov     r14d, [rax+20h]
//   0x2C32BF call    __ZNK2QT19QAbstractScrollArea8viewportEv; QT::QAbstractScrollArea::viewport(void)
//   0x2C32C4 movq    xmm1, qword ptr cs:xmmword_5DCCE0
//   0x2C32CC mov     rax, [rax+20h]
//   0x2C32D0 movd    xmm4, r14d
//   0x2C32D5 movd    xmm5, r13d
//   0x2C32DA mov     r13, rsp
//   0x2C32DD movd    xmm0, dword ptr [rax+1Ch]
//   0x2C32E2 punpckldq xmm0, xmm4
//   0x2C32E6 paddd   xmm0, xmm1
//   0x2C32EA movd    xmm1, dword ptr [rax+14h]
//   0x2C32EF punpckldq xmm1, xmm5
//   0x2C32F3 psubd   xmm0, xmm1
//   0x2C32F7 pxor    xmm1, xmm1
//   0x2C32FB pcmpgtd xmm1, xmm0
//   0x2C32FF psubd   xmm0, xmm1
//   0x2C3303 psrad   xmm0, 1
//   0x2C3308 movq    [rsp+38h+var_38], xmm0
//   0x2C330D jmp     loc_2C314B
//   0x2C3312 align 8
//   0x2C3318 lea     rdi, aCoherencyCheck_11; "Coherency check failed: rinfo.rtype == "...
//   0x2C331F xor     eax, eax
//   0x2C3321 call    sub_169700
//   0x2C3326 jmp     loc_2C321E
//   0x2C332B align 10h
//   0x2C3330 mulsd   xmm0, cs:qword_5DBFB0
//   0x2C3338 xor     edx, edx
//   0x2C333A mov     rsi, r13
//   0x2C333D mov     rdi, rbx
//   0x2C3340 call    sub_2C2BB0
//   0x2C3345 mov     eax, 1
//   0x2C334A jmp     loc_2C31B0
//   0x2C334F align 10h
//   0x2C3350 mov     rdi, rbx
//   0x2C3353 call    rax
//   0x2C3355 jmp     loc_2C3179
//   0x2C335A align 20h
//   0x2C3360 cvtdq2pd xmm0, xmm0
//   0x2C3364 subpd   xmm0, xmm2
//   0x2C3368 unpcklpd xmm1, xmm1
//   0x2C336C mulpd   xmm0, xmm1
//   0x2C3370 cvttpd2dq xmm0, xmm0
//   0x2C3374 jmp     loc_2C3270
//   0x2C3379 align 20h
//   0x2C3380 mov     rdi, rbx
//   0x2C3383 call    rax
//   0x2C3385 jmp     loc_2C3222
//   0x2C338A call    ___stack_chk_fail
// ============================================================

void sub_2C30D0(/* signature unknown */)
{
    // see disassembly above
}

