// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x414AD0
// Name:           sub_414AD0
// Function size:  585 bytes (141 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x414AD0 push    r15; int
//   0x414AD2 push    r14; int
//   0x414AD4 push    r13; int
//   0x414AD6 push    r12; int
//   0x414AD8 push    rbp; int
//   0x414AD9 push    rbx; int
//   0x414ADA sub     rsp, 58h
//   0x414ADE mov     r12, fs:28h
//   0x414AE7 mov     [rsp+88h+ptr], r12; ptr
//   0x414AEC mov     r12, rdx
//   0x414AEF mov     dword ptr [rsi], 0
//   0x414AF5 cmp     rdx, [rdi+8]
//   0x414AF9 jnb     loc_414CF0
//   0x414AFF mov     rbx, rsi
//   0x414B02 mov     r14, rdi
//   0x414B05 mov     rsi, rdi; int
//   0x414B08 mov     rdx, r12; int
//   0x414B0B mov     rdi, rbx; int
//   0x414B0E lea     rbp, ds:0[r12*8]
//   0x414B16 mov     r13, rcx
//   0x414B19 call    sub_537B70
//   0x414B1E sub     rbp, r12
//   0x414B21 mov     r15, [r14]
//   0x414B24 shl     rbp, 3
//   0x414B28 add     r15, rbp
//   0x414B2B test    r13, r13
//   0x414B2E jz      short loc_414B44
//   0x414B30 mov     rdi, r13; s
//   0x414B33 call    _strlen
//   0x414B38 mov     r12, rax
//   0x414B3B test    rax, rax
//   0x414B3E jnz     loc_414C00
//   0x414B44 mov     qword ptr [r15+20h], 0
//   0x414B4C add     rbp, [r14]
//   0x414B4F xor     r14d, r14d
//   0x414B52 mov     r13, [rbp+8]
//   0x414B56 test    r13, r13
//   0x414B59 jnz     loc_414C3D
//   0x414B5F mov     r12, [rbp+20h]
//   0x414B63 xor     r15d, r15d
//   0x414B66 test    r12, r12
//   0x414B69 jnz     loc_414C67
//   0x414B6F mov     rbp, [rbp+30h]
//   0x414B73 mov     rdx, [rbx+98h]
//   0x414B7A mov     rsi, [rbx+90h]
//   0x414B81 mov     [rsp+88h+var_48], rbp
//   0x414B86 lea     rax, [rdx+1]
//   0x414B8A cmp     [rbx+0A0h], rax
//   0x414B91 jb      loc_414C90
//   0x414B97 lea     rcx, ds:0[rdx*8]
//   0x414B9F movq    xmm0, r13
//   0x414BA4 sub     rcx, rdx
//   0x414BA7 punpcklqdq xmm0, xmm0
//   0x414BAB lea     rax, [rsi+rcx*8]
//   0x414BAF movups  xmmword ptr [rax+8], xmm0
//   0x414BB3 movq    xmm0, r12
//   0x414BB8 punpcklqdq xmm0, xmm0
//   0x414BBC mov     [rax], r14
//   0x414BBF mov     [rax+18h], r15
//   0x414BC3 mov     [rax+30h], rbp
//   0x414BC7 movups  xmmword ptr [rax+20h], xmm0
//   0x414BCB xor     eax, eax
//   0x414BCD add     qword ptr [rbx+98h], 1
//   0x414BD5 mov     dword ptr [rbx], 9
//   0x414BDB mov     rdx, [rsp+88h+ptr]
//   0x414BE0 sub     rdx, fs:28h
//   0x414BE9 jnz     loc_414D04
//   0x414BEF add     rsp, 58h
//   0x414BF3 pop     rbx
//   0x414BF4 pop     rbp
//   0x414BF5 pop     r12
//   0x414BF7 pop     r13
//   0x414BF9 pop     r14
//   0x414BFB pop     r15
//   0x414BFD retn
//   0x414BFE align 20h
//   0x414C00 mov     rdi, [r15+18h]; dest
//   0x414C04 lea     rdx, [rax+1]
//   0x414C08 cmp     [r15+28h], rdx
//   0x414C0C jb      loc_414CC0
//   0x414C12 mov     [r15+20h], rdx
//   0x414C16 mov     rsi, r13; src
//   0x414C19 mov     rdx, r12; n
//   0x414C1C call    _memmove
//   0x414C21 mov     rax, [r15+18h]
//   0x414C25 mov     byte ptr [rax+r12], 0
//   0x414C2A add     rbp, [r14]
//   0x414C2D xor     r14d, r14d
//   0x414C30 mov     r13, [rbp+8]
//   0x414C34 test    r13, r13
//   0x414C37 jz      loc_414B5F
//   0x414C3D mov     rdi, r13
//   0x414C40 xor     r15d, r15d
//   0x414C43 call    _qalloc_or_throw
//   0x414C48 mov     rsi, [rbp+0]; src
//   0x414C4C mov     rdx, r13; n
//   0x414C4F mov     rdi, rax; dest
//   0x414C52 mov     r14, rax
//   0x414C55 call    _memcpy
//   0x414C5A mov     r12, [rbp+20h]
//   0x414C5E test    r12, r12
//   0x414C61 jz      loc_414B6F
//   0x414C67 mov     rdi, r12
//   0x414C6A call    _qalloc_or_throw
//   0x414C6F mov     rsi, [rbp+18h]; src
//   0x414C73 mov     rdx, r12; n
//   0x414C76 mov     rdi, rax; dest
//   0x414C79 mov     r15, rax
//   0x414C7C call    _memcpy
//   0x414C81 jmp     loc_414B6F
//   0x414C86 align 10h
//   0x414C90 lea     rdi, [rbx+90h]
//   0x414C97 mov     ecx, 38h ; '8'
//   0x414C9C mov     rdx, rax
//   0x414C9F call    _qvector_reserve
//   0x414CA4 mov     [rbx+90h], rax
//   0x414CAB mov     rdx, [rbx+98h]
//   0x414CB2 mov     rsi, rax
//   0x414CB5 jmp     loc_414B97
//   0x414CBA align 20h
//   0x414CC0 lea     rax, [r15+18h]
//   0x414CC4 mov     rsi, rdi
//   0x414CC7 mov     ecx, 1
//   0x414CCC mov     [rsp+88h+var_80], rdx
//   0x414CD1 mov     rdi, rax
//   0x414CD4 call    _qvector_reserve
//   0x414CD9 mov     rdx, [rsp+88h+var_80]
//   0x414CDE mov     [r15+18h], rax
//   0x414CE2 mov     rdi, rax
//   0x414CE5 jmp     loc_414C12
//   0x414CEA align 10h
//   0x414CF0 mov     rsi, r12
//   0x414CF3 xor     edi, edi
//   0x414CF5 call    _set_error_data
//   0x414CFA mov     eax, 0FFFFFFF9h
//   0x414CFF jmp     loc_414BDB
//   0x414D04 call    ___stack_chk_fail
//   0x414D09 mov     rbx, rax
//   0x414D0C jmp     loc_2B6178
//   0x414D11 mov     rbx, rax
//   0x414D14 jmp     loc_2B61C0
// ============================================================

void sub_414AD0(/* signature unknown */)
{
    // see disassembly above
}

