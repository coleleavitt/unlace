// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x3C59C0
// Name:           sub_3C59C0
// Function size:  289 bytes (73 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x3C59C0 push    r12; __int64
//   0x3C59C2 push    rbp; ptr
//   0x3C59C3 push    rbx; int
//   0x3C59C4 sub     rsp, 20h
//   0x3C59C8 mov     rax, fs:28h
//   0x3C59D1 mov     qword ptr [rsp+38h+var_20], rax; int
//   0x3C59D6 xor     eax, eax
//   0x3C59D8 test    dh, 0C0h
//   0x3C59DB jnz     short loc_3C5A00
//   0x3C59DD mov     rax, qword ptr [rsp+38h+var_20]
//   0x3C59E2 sub     rax, fs:28h
//   0x3C59EB jnz     loc_3C5AD4
//   0x3C59F1 add     rsp, 20h
//   0x3C59F5 pop     rbx
//   0x3C59F6 pop     rbp
//   0x3C59F7 pop     r12
//   0x3C59F9 retn
//   0x3C59FA align 20h
//   0x3C5A00 mov     r12, rdi
//   0x3C5A03 mov     rdi, rsi
//   0x3C5A06 mov     rbp, rsi
//   0x3C5A09 mov     rbx, rdx
//   0x3C5A0C call    _get_aflags
//   0x3C5A11 test    ah, 40h
//   0x3C5A14 jnz     loc_3C5AA8
//   0x3C5A1A and     bh, 40h
//   0x3C5A1D jz      short loc_3C5A72
//   0x3C5A1F pxor    xmm0, xmm0
//   0x3C5A23 mov     rsi, rsp
//   0x3C5A26 xor     r8d, r8d
//   0x3C5A29 mov     ecx, 15h
//   0x3C5A2E mov     rdx, rbp
//   0x3C5A31 mov     rdi, r12
//   0x3C5A34 movups  [rsp+38h+var_30], xmm0
//   0x3C5A39 mov     [rsp+38h+ptr], 0
//   0x3C5A41 call    sub_4CFC20
//   0x3C5A46 mov     rdx, [rsp+38h+ptr]
//   0x3C5A4A mov     rsi, rbp
//   0x3C5A4D lea     rdi, aANameHasBeenDe; "%a: name has been deleted: %s\n"
//   0x3C5A54 xor     eax, eax
//   0x3C5A56 call    sub_368890
//   0x3C5A5B mov     rdi, [rsp+38h+ptr]; ptr
//   0x3C5A5F test    rdi, rdi
//   0x3C5A62 jz      short loc_3C5A72
//   0x3C5A64 mov     qword ptr [rsp+38h+var_30], 0
//   0x3C5A6D call    _qfree
//   0x3C5A72 mov     rax, qword ptr [rsp+38h+var_20]
//   0x3C5A77 sub     rax, fs:28h
//   0x3C5A80 jnz     short loc_3C5AD4
//   0x3C5A82 add     rsp, 20h
//   0x3C5A86 mov     rsi, rbp; int
//   0x3C5A89 mov     rdi, r12; int
//   0x3C5A8C mov     ecx, 100h
//   0x3C5A91 pop     rbx
//   0x3C5A92 lea     rdx, byte_22F0C30; src
//   0x3C5A99 pop     rbp
//   0x3C5A9A pop     r12
//   0x3C5A9C jmp     sub_4D7EC0
//   0x3C5AA1 align 8
//   0x3C5AA8 mov     ecx, 300h
//   0x3C5AAD lea     rdx, byte_22F0C30; src
//   0x3C5AB4 mov     rsi, rbp; int
//   0x3C5AB7 mov     rdi, r12; int
//   0x3C5ABA call    sub_4D7EC0
//   0x3C5ABF xor     edx, edx
//   0x3C5AC1 mov     rsi, rbp
//   0x3C5AC4 mov     rdi, r12
//   0x3C5AC7 call    sub_3BE900
//   0x3C5ACC mov     rbx, rax
//   0x3C5ACF jmp     loc_3C5A1A
//   0x3C5AD4 call    ___stack_chk_fail
//   0x3C5AD9 mov     rbx, rax
//   0x3C5ADC jmp     loc_2B3E6C
// ============================================================

void sub_3C59C0(/* signature unknown */)
{
    // see disassembly above
}

