// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x507C10
// Name:           sub_507C10
// Function size:  282 bytes (75 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x507C10 push    r15; int
//   0x507C12 push    r14; int
//   0x507C14 push    r13; int
//   0x507C16 push    r12; int
//   0x507C18 push    rbp; int
//   0x507C19 push    rbx; int
//   0x507C1A sub     rsp, 48h
//   0x507C1E mov     r15, [rdi+20h]
//   0x507C22 test    rcx, rcx
//   0x507C25 mov     r13, fs:28h
//   0x507C2E mov     qword ptr [rsp+78h+var_40], r13; int
//   0x507C33 mov     r13, rdx
//   0x507C36 setz    al
//   0x507C39 test    r15, r15
//   0x507C3C setz    dl; int
//   0x507C3F or      al, dl
//   0x507C41 jnz     loc_507CFE
//   0x507C47 pxor    xmm0, xmm0
//   0x507C4B mov     r12, rsi
//   0x507C4E lea     rbp, [rsp+78h+ptr]
//   0x507C53 mov     rbx, rcx
//   0x507C56 mov     qword ptr [rsp+78h+var_50], 0; int
//   0x507C5F mov     dword ptr [rsp+78h+var_48], 0FFFFFFFFh; int
//   0x507C67 movups  xmmword ptr [rsp+78h+var_60], xmm0; int
//   0x507C6C mov     rax, [r15+8]
//   0x507C70 mov     [rsp+78h+ptr], 0; int
//   0x507C79 mov     r14, [r15]
//   0x507C7C shl     rax, 4
//   0x507C80 jz      short loc_507CAF
//   0x507C82 nop     word ptr [rax+rax+00000000h]
//   0x507C8D nop     dword ptr [rax]
//   0x507C90 mov     rsi, [r14]; int
//   0x507C93 mov     rdi, rbp; int
//   0x507C96 call    _rangeset_t_add
//   0x507C9B mov     rax, [r15+8]
//   0x507C9F add     r14, 10h
//   0x507CA3 shl     rax, 4
//   0x507CA7 add     rax, [r15]
//   0x507CAA cmp     r14, rax
//   0x507CAD jnz     short loc_507C90
//   0x507CAF mov     qword ptr [rsp+78h+var_78], r12; int
//   0x507CB3 mov     rsi, rsp; int
//   0x507CB6 add     r12, rbx
//   0x507CB9 mov     rdi, rbp; int
//   0x507CBC mov     qword ptr [rsp+78h+var_70], r12; int
//   0x507CC1 call    _rangeset_t_sub
//   0x507CC6 add     rbx, r13
//   0x507CC9 xor     edx, edx
//   0x507CCB mov     rsi, rsp
//   0x507CCE mov     rdi, rbp
//   0x507CD1 mov     qword ptr [rsp+78h+var_78], r13
//   0x507CD5 mov     qword ptr [rsp+78h+var_70], rbx
//   0x507CDA call    _rangeset_t_has_common
//   0x507CDF mov     rdi, [rsp+78h+ptr]; ptr
//   0x507CE4 mov     ebx, eax
//   0x507CE6 test    rdi, rdi
//   0x507CE9 jz      short loc_507CF9
//   0x507CEB mov     qword ptr [rsp+78h+var_60], 0
//   0x507CF4 call    _qfree
//   0x507CF9 mov     eax, ebx
//   0x507CFB xor     eax, 1
//   0x507CFE mov     rdx, qword ptr [rsp+78h+var_40]
//   0x507D03 sub     rdx, fs:28h
//   0x507D0C jnz     short loc_507D1D
//   0x507D0E add     rsp, 48h
//   0x507D12 pop     rbx
//   0x507D13 pop     rbp
//   0x507D14 pop     r12
//   0x507D16 pop     r13
//   0x507D18 pop     r14
//   0x507D1A pop     r15
//   0x507D1C retn
//   0x507D1D call    ___stack_chk_fail
//   0x507D22 mov     rbx, rax
//   0x507D25 jmp     loc_2C011E
// ============================================================

void sub_507C10(/* signature unknown */)
{
    // see disassembly above
}

