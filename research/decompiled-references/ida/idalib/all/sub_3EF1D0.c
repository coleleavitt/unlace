// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x3EF1D0
// Name:           sub_3EF1D0
// Function size:  349 bytes (89 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x3EF1D0 push    r13; int
//   0x3EF1D2 pxor    xmm0, xmm0
//   0x3EF1D6 push    r12; int
//   0x3EF1D8 push    rbp; __int64
//   0x3EF1D9 push    rbx; ptr
//   0x3EF1DA sub     rsp, 28h
//   0x3EF1DE mov     rax, fs:28h
//   0x3EF1E7 mov     qword ptr [rsp+48h+var_30], rax; int
//   0x3EF1EC lea     rax, qword_2CCB598
//   0x3EF1F3 mov     rsi, rsp; int
//   0x3EF1F6 movups  xmmword ptr [rsp+48h+var_40], xmm0; int
//   0x3EF1FB mov     [rsp+48h+ptr], 0; int
//   0x3EF203 mov     rax, [rax]
//   0x3EF206 mov     rbx, [rax+688h]
//   0x3EF20D mov     rdi, rbx; int
//   0x3EF210 call    sub_3FE180
//   0x3EF215 mov     rsi, rsp
//   0x3EF218 mov     rdi, rbx
//   0x3EF21B call    sub_3FD660
//   0x3EF220 mov     rdi, [rsp+48h+ptr]
//   0x3EF224 test    rdi, rdi
//   0x3EF227 jz      short loc_3EF294
//   0x3EF229 mov     r12, qword ptr [rsp+48h+var_40]
//   0x3EF22E test    r12, r12
//   0x3EF231 jz      short loc_3EF286
//   0x3EF233 xor     ebp, ebp
//   0x3EF235 nop     word ptr [rax+rax+00000000h]
//   0x3EF240 lea     rax, [rbp+rbp*4+0]
//   0x3EF245 shl     rax, 4
//   0x3EF249 lea     rbx, [rdi+rax]
//   0x3EF24D mov     rdi, [rbx+28h]; ptr
//   0x3EF251 test    rdi, rdi
//   0x3EF254 jz      short loc_3EF263
//   0x3EF256 mov     qword ptr [rbx+30h], 0
//   0x3EF25E call    _qfree
//   0x3EF263 mov     rdi, [rbx+10h]; ptr
//   0x3EF267 test    rdi, rdi
//   0x3EF26A jz      short loc_3EF279
//   0x3EF26C mov     qword ptr [rbx+18h], 0
//   0x3EF274 call    _qfree
//   0x3EF279 add     rbp, 1
//   0x3EF27D mov     rdi, [rsp+48h+ptr]; ptr
//   0x3EF281 cmp     r12, rbp
//   0x3EF284 jnz     short loc_3EF240
//   0x3EF286 mov     qword ptr [rsp+48h+var_40], 0
//   0x3EF28F call    _qfree
//   0x3EF294 mov     rax, qword ptr [rsp+48h+var_30]
//   0x3EF299 sub     rax, fs:28h
//   0x3EF2A2 jnz     short loc_3EF30D
//   0x3EF2A4 add     rsp, 28h
//   0x3EF2A8 mov     eax, 1
//   0x3EF2AD pop     rbx
//   0x3EF2AE pop     rbp
//   0x3EF2AF pop     r12
//   0x3EF2B1 pop     r13
//   0x3EF2B3 retn
//   0x3EF2B4 imul    rax, rbp, 50h ; 'P'
//   0x3EF2B8 lea     rbx, [rdi+rax]
//   0x3EF2BC mov     rdi, [rbx+28h]; ptr
//   0x3EF2C0 test    rdi, rdi
//   0x3EF2C3 jz      short loc_3EF2D0
//   0x3EF2C5 xor     ecx, ecx
//   0x3EF2C7 mov     [rbx+30h], rcx
//   0x3EF2CB call    _qfree
//   0x3EF2D0 mov     rdi, [rbx+10h]; ptr
//   0x3EF2D4 test    rdi, rdi
//   0x3EF2D7 jz      short loc_3EF2E4
//   0x3EF2D9 xor     edx, edx
//   0x3EF2DB mov     [rbx+18h], rdx
//   0x3EF2DF call    _qfree
//   0x3EF2E4 add     rbp, 1
//   0x3EF2E8 mov     rdi, [rsp+48h+ptr]; ptr
//   0x3EF2EC cmp     r13, rbp
//   0x3EF2EF jnz     short loc_3EF2B4
//   0x3EF2F1 xor     eax, eax
//   0x3EF2F3 mov     qword ptr [rsp+48h+var_40], rax
//   0x3EF2F8 call    _qfree
//   0x3EF2FD mov     rax, qword ptr [rsp+48h+var_30]
//   0x3EF302 sub     rax, fs:28h
//   0x3EF30B jz      short loc_3EF325
//   0x3EF30D call    ___stack_chk_fail
//   0x3EF312 mov     r12, rax
//   0x3EF315 cmp     [rsp+48h+ptr], 0
//   0x3EF31A jz      short loc_3EF2FD
//   0x3EF31C mov     r13, qword ptr [rsp+48h+var_40]
//   0x3EF321 xor     ebp, ebp
//   0x3EF323 jmp     short loc_3EF2E8
//   0x3EF325 mov     rdi, r12; struct _Unwind_Exception *
//   0x3EF328 call    __Unwind_Resume
// ============================================================

void sub_3EF1D0(/* signature unknown */)
{
    // see disassembly above
}

