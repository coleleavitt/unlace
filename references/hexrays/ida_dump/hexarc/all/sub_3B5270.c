// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x3B5270
// Name:           sub_3B5270
// Function size:  137 bytes (43 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x3B5270 push    rbp
//   0x3B5271 push    rbx
//   0x3B5272 mov     rbx, rdi
//   0x3B5275 sub     rsp, 8
//   0x3B5279 mov     rbp, [rsi]
//   0x3B527C mov     rdi, [rdi+10h]
//   0x3B5280 mov     rsi, rbp
//   0x3B5283 call    sub_3822F0
//   0x3B5288 test    rax, rax
//   0x3B528B jz      short loc_3B52E8
//   0x3B528D mov     rsi, rax
//   0x3B5290 mov     eax, [rbx+18h]
//   0x3B5293 test    eax, eax
//   0x3B5295 jz      short loc_3B52A7
//   0x3B5297 cmp     eax, 1
//   0x3B529A jnz     short loc_3B52F4
//   0x3B529C mov     eax, 6
//   0x3B52A1 cmp     rbp, [rsi+8]
//   0x3B52A5 jnz     short loc_3B52DA
//   0x3B52A7 mov     rax, [rbx]
//   0x3B52AA mov     rdi, rbx
//   0x3B52AD call    qword ptr [rax+30h]
//   0x3B52B0 mov     rcx, [rbx+30h]
//   0x3B52B4 mov     rsi, [rbx+20h]
//   0x3B52B8 mov     edx, 1
//   0x3B52BD mov     r8, cs:callui_ptr
//   0x3B52C4 test    al, al
//   0x3B52C6 mov     edi, 8Ch
//   0x3B52CB cmovnz  rcx, [rbx+28h]
//   0x3B52D0 xor     eax, eax
//   0x3B52D2 call    qword ptr [r8]
//   0x3B52D5 mov     eax, 3
//   0x3B52DA add     rsp, 8
//   0x3B52DE pop     rbx
//   0x3B52DF pop     rbp
//   0x3B52E0 retn
//   0x3B52E1 align 8
//   0x3B52E8 add     rsp, 8
//   0x3B52EC mov     eax, 6
//   0x3B52F1 pop     rbx
//   0x3B52F2 pop     rbp
//   0x3B52F3 retn
//   0x3B52F4 call    sub_3B30D0
// ============================================================

void sub_3B5270(/* signature unknown */)
{
    // see disassembly above
}

