// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x840D80
// Name:           verror
// Function size:  92 bytes (23 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x840D80 sub     rsp, 8
//   0x840D84 test    rdi, rdi
//   0x840D87 jz      short loc_840DAD
//   0x840D89 mov     rax, cs:callui_ptr
//   0x840D90 mov     r8, [rax]
//   0x840D93 test    r8, r8
//   0x840D96 jz      short loc_840DC1
//   0x840D98 mov     rcx, rsi
//   0x840D9B mov     rdx, rdi
//   0x840D9E mov     esi, 3
//   0x840DA3 mov     edi, 18h
//   0x840DA8 xor     eax, eax
//   0x840DAA call    r8
//   0x840DAD mov     rax, cs:errorexit_ptr
//   0x840DB4 mov     edi, 1; status
//   0x840DB9 add     dword ptr [rax], 1
//   0x840DBC call    _qexit
//   0x840DC1 call    _qveprintf
//   0x840DC6 mov     rax, cs:stderr_ptr
//   0x840DCD mov     edi, 0Ah
//   0x840DD2 mov     rsi, [rax]
//   0x840DD5 call    _qfputc
//   0x840DDA jmp     short loc_840DAD
// ============================================================

void verror(/* signature unknown */)
{
    // see disassembly above
}

