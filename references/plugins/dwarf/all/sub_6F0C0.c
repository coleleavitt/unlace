// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x6F0C0
// Name:           sub_6F0C0
// Function size:  630 bytes (152 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x6F0C0 push    r14
//   0x6F0C2 push    r13
//   0x6F0C4 push    r12
//   0x6F0C6 push    rbp
//   0x6F0C7 push    rbx
//   0x6F0C8 sub     rsp, 30h
//   0x6F0CC mov     rax, fs:28h
//   0x6F0D5 mov     [rsp+58h+var_30], rax
//   0x6F0DA xor     eax, eax
//   0x6F0DC cmp     qword ptr [rdi+48h], 0
//   0x6F0E1 jz      loc_6F2EA
//   0x6F0E7 mov     rbx, [rdx+0D8h]
//   0x6F0EE mov     rbp, rdi
//   0x6F0F1 mov     r12, rdx
//   0x6F0F4 mov     [rsp+58h+var_50], rbx
//   0x6F0F9 test    rbx, rbx
//   0x6F0FC jz      loc_6F2B8
//   0x6F102 add     dword ptr [rbx+8], 1
//   0x6F106 mov     rdi, rbx
//   0x6F109 call    sub_A2E60
//   0x6F10E mov     qword ptr [rsp+58h+var_48], rax
//   0x6F113 mov     qword ptr [rsp+58h+var_48+8], rdx
//   0x6F118 sub     dword ptr [rbx+8], 1
//   0x6F11C jnz     loc_6F200
//   0x6F122 mov     rax, [rbx]
//   0x6F125 lea     rcx, sub_15E30
//   0x6F12C mov     rdx, [rax]
//   0x6F12F cmp     rdx, rcx
//   0x6F132 jnz     loc_6F2D0
//   0x6F138 mov     rax, [rax+10h]
//   0x6F13C lea     rdx, sub_15D70
//   0x6F143 cmp     rax, rdx
//   0x6F146 jnz     loc_6F2E0
//   0x6F14C mov     r14, [rbx+80h]
//   0x6F153 lea     rax, off_C71D8
//   0x6F15A mov     [rbx], rax
//   0x6F15D test    r14, r14
//   0x6F160 jz      short loc_6F197
//   0x6F162 mov     r13, [r14+10h]
//   0x6F166 test    r13, r13
//   0x6F169 jz      short loc_6F18A
//   0x6F16B mov     rdi, [r13+18h]
//   0x6F16F call    sub_68210
//   0x6F174 mov     rdi, r13; void *
//   0x6F177 mov     r13, [r13+10h]
//   0x6F17B mov     esi, 30h ; '0'; unsigned __int64
//   0x6F180 call    __ZdlPvm; operator delete(void *,ulong)
//   0x6F185 test    r13, r13
//   0x6F188 jnz     short loc_6F16B
//   0x6F18A mov     esi, 30h ; '0'; unsigned __int64
//   0x6F18F mov     rdi, r14; void *
//   0x6F192 call    __ZdlPvm; operator delete(void *,ulong)
//   0x6F197 mov     r13, [rbx+98h]
//   0x6F19E test    r13, r13
//   0x6F1A1 jz      short loc_6F1DB
//   0x6F1A3 mov     rdi, [r13+18h]
//   0x6F1A7 mov     r14, r13
//   0x6F1AA call    sub_68C00
//   0x6F1AF mov     rdi, [r14+20h]
//   0x6F1B3 mov     r13, [r13+10h]
//   0x6F1B7 test    rdi, rdi
//   0x6F1BA jz      short loc_6F1C9
//   0x6F1BC mov     qword ptr [r14+28h], 0
//   0x6F1C4 call    _qfree
//   0x6F1C9 mov     esi, 48h ; 'H'; unsigned __int64
//   0x6F1CE mov     rdi, r14; void *
//   0x6F1D1 call    __ZdlPvm; operator delete(void *,ulong)
//   0x6F1D6 test    r13, r13
//   0x6F1D9 jnz     short loc_6F1A3
//   0x6F1DB mov     rdi, [rbx+60h]
//   0x6F1DF test    rdi, rdi
//   0x6F1E2 jz      short loc_6F1F1
//   0x6F1E4 mov     qword ptr [rbx+68h], 0
//   0x6F1EC call    _qfree
//   0x6F1F1 mov     esi, 0C0h; unsigned __int64
//   0x6F1F6 mov     rdi, rbx; void *
//   0x6F1F9 call    __ZdlPvm; operator delete(void *,ulong)
//   0x6F1FE xchg    ax, ax
//   0x6F200 mov     rax, qword ptr [rsp+58h+var_48]
//   0x6F205 mov     rdx, rax
//   0x6F208 btr     rdx, 3Fh ; '?'
//   0x6F20D test    rdx, rdx
//   0x6F210 jz      short loc_6F218
//   0x6F212 cmp     rax, 0FFFFFFFFFFFFFFFFh
//   0x6F216 jnz     short loc_6F240
//   0x6F218 xor     ebx, ebx
//   0x6F21A mov     rax, [rsp+58h+var_30]
//   0x6F21F sub     rax, fs:28h
//   0x6F228 jnz     loc_6F314
//   0x6F22E add     rsp, 30h
//   0x6F232 mov     rax, rbx
//   0x6F235 pop     rbx
//   0x6F236 pop     rbp
//   0x6F237 pop     r12
//   0x6F239 pop     r13
//   0x6F23B pop     r14
//   0x6F23D retn
//   0x6F23E align 20h
//   0x6F240 mov     edi, 38h ; '8'; unsigned __int64
//   0x6F245 call    __Znwm; operator new(ulong)
//   0x6F24A mov     edi, 108h; unsigned __int64
//   0x6F24F mov     dword ptr [rax+8], 1
//   0x6F256 mov     rbx, rax
//   0x6F259 mov     [rax+10h], rbp
//   0x6F25D lea     rax, off_C8808
//   0x6F264 mov     [rbx], rax
//   0x6F267 mov     [rbx+18h], r12
//   0x6F26B call    __Znwm; operator new(ulong)
//   0x6F270 mov     rdi, rax
//   0x6F273 mov     rbp, rax
//   0x6F276 call    sub_84A60
//   0x6F27B mov     [rbx+20h], rbp
//   0x6F27F lea     rdi, [rsp+58h+var_48]
//   0x6F284 mov     rsi, rbp
//   0x6F287 mov     qword ptr [rbx+28h], 0
//   0x6F28F mov     qword ptr [rbx+30h], 0
//   0x6F297 call    sub_98E20
//   0x6F29C test    al, al
//   0x6F29E jz      loc_6F21A
//   0x6F2A4 movdqa  xmm0, [rsp+58h+var_48]
//   0x6F2AA movups  xmmword ptr [rbx+28h], xmm0
//   0x6F2AE jmp     loc_6F21A
//   0x6F2B3 align 8
//   0x6F2B8 xor     edi, edi
//   0x6F2BA call    sub_A2E60
//   0x6F2BF mov     qword ptr [rsp+58h+var_48], rax
//   0x6F2C4 mov     qword ptr [rsp+58h+var_48+8], rdx
//   0x6F2C9 jmp     loc_6F200
//   0x6F2CE align 10h
//   0x6F2D0 mov     rdi, rbx
//   0x6F2D3 call    rdx
//   0x6F2D5 jmp     loc_6F200
//   0x6F2DA align 20h
//   0x6F2E0 mov     rdi, rbx
//   0x6F2E3 call    rax
//   0x6F2E5 jmp     loc_6F200
//   0x6F2EA mov     rax, cs:under_debugger_ptr
//   0x6F2F1 cmp     byte ptr [rax], 0
//   0x6F2F4 jnz     loc_FF50
//   0x6F2FA mov     rax, [rsp+58h+var_30]
//   0x6F2FF sub     rax, fs:28h
//   0x6F308 jnz     short loc_6F319
//   0x6F30A mov     edi, 7719h
//   0x6F30F call    _interr
//   0x6F314 call    ___stack_chk_fail
//   0x6F319 call    ___stack_chk_fail
//   0x6F31E mov     r12, rax
//   0x6F321 jmp     loc_FF5F
//   0x6F326 mov     r12, rax
//   0x6F329 jmp     loc_FF52
//   0x6F32E mov     rbx, rax
//   0x6F331 jmp     loc_FF84
// ============================================================

void sub_6F0C0(/* signature unknown */)
{
    // see disassembly above
}

