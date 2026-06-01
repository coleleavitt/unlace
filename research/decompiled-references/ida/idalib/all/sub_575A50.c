// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x575A50
// Name:           sub_575A50
// Function size:  180 bytes (44 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x575A50 push    rbp; int
//   0x575A51 pxor    xmm0, xmm0
//   0x575A55 movsxd  rdx, edx; int
//   0x575A58 xor     r8d, r8d; int
//   0x575A5B push    rbx; int
//   0x575A5C mov     ecx, 8; int
//   0x575A61 sub     rsp, 38h
//   0x575A65 mov     rbp, fs:28h
//   0x575A6E mov     qword ptr [rsp+48h+var_20], rbp; int
//   0x575A73 mov     rbp, rdi
//   0x575A76 mov     qword ptr [rsp+48h+var_40], rsi; int
//   0x575A7B lea     rdi, [rsp+48h+ptr]; int
//   0x575A80 lea     rsi, [rsp+48h+var_40]; int
//   0x575A85 mov     [rsp+48h+ptr], 0; int
//   0x575A8E movups  xmmword ptr [rsp+48h+var_30], xmm0; int
//   0x575A93 call    _format_charlit
//   0x575A98 mov     ebx, eax
//   0x575A9A test    al, al
//   0x575A9C jz      short loc_575ABA
//   0x575A9E cmp     qword ptr [rsp+48h+var_30], 0
//   0x575AA4 lea     rsi, haystack
//   0x575AAB jnz     short loc_575AF0
//   0x575AAD mov     edx, 400h
//   0x575AB2 mov     rdi, rbp
//   0x575AB5 call    _qstrncpy
//   0x575ABA mov     rdi, [rsp+48h+ptr]; ptr
//   0x575ABF test    rdi, rdi
//   0x575AC2 jz      short loc_575AD2
//   0x575AC4 mov     qword ptr [rsp+48h+var_30], 0
//   0x575ACD call    _qfree
//   0x575AD2 mov     rax, qword ptr [rsp+48h+var_20]
//   0x575AD7 sub     rax, fs:28h
//   0x575AE0 jnz     short loc_575AF7
//   0x575AE2 add     rsp, 38h
//   0x575AE6 mov     eax, ebx
//   0x575AE8 pop     rbx
//   0x575AE9 pop     rbp
//   0x575AEA retn
//   0x575AEB align 10h
//   0x575AF0 mov     rsi, [rsp+48h+ptr]
//   0x575AF5 jmp     short loc_575AAD
//   0x575AF7 call    ___stack_chk_fail
//   0x575AFC mov     rbx, rax
//   0x575AFF jmp     loc_2C5694
// ============================================================

void sub_575A50(/* signature unknown */)
{
    // see disassembly above
}

