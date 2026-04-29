// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x15080
// Name:           sub_15080
// Function size:  154 bytes (39 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x15080 mov     rax, cs:under_debugger_ptr
//   0x15087 cmp     byte ptr [rax], 0
//   0x1508A jnz     loc_9D22
//   0x15090 sub     rsp, 8
//   0x15094 mov     edi, 4EAAh
//   0x15099 call    _interr
//   0x1509E xchg    ax, ax
//   0x150A0 cmp     qword ptr [rdi+1A0h], 0FFFFFFFFFFFFFFFFh
//   0x150A8 jz      short loc_150B0
//   0x150AA mov     eax, 1
//   0x150AF retn
//   0x150B0 push    rbx
//   0x150B1 mov     rbx, rdi
//   0x150B4 sub     rsp, 10h
//   0x150B8 mov     rax, [rdi+10h]
//   0x150BC cmp     byte ptr [rax+0F8h], 0
//   0x150C3 jz      short loc_150D6
//   0x150C5 cmp     qword ptr [rax+78h], 0
//   0x150CA jz      short loc_150D6
//   0x150CC cmp     word ptr [rax+208h], 1
//   0x150D4 jz      short loc_150E8
//   0x150D6 add     rsp, 10h
//   0x150DA mov     eax, 1
//   0x150DF pop     rbx
//   0x150E0 retn
//   0x150E1 align 8
//   0x150E8 cmp     qword ptr [rsi+10h], 0
//   0x150ED jnz     short loc_150D6
//   0x150EF test    byte ptr [rsi+0Bh], 10h
//   0x150F3 jz      short loc_150D6
//   0x150F5 mov     rdi, [rdi+8]
//   0x150F9 mov     rdx, rsi
//   0x150FC mov     rsi, rax
//   0x150FF mov     [rsp+20h+var_18], rcx
//   0x15104 call    sub_41B70
//   0x15109 mov     rcx, [rsp+20h+var_18]
//   0x1510E mov     [rcx], rax
//   0x15111 mov     [rbx+1A0h], rax
//   0x15118 jmp     short loc_150D6
// ============================================================

void sub_15080(/* signature unknown */)
{
    // see disassembly above
}

