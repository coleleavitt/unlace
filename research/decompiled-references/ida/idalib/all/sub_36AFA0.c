// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x36AFA0
// Name:           sub_36AFA0
// Function size:  70 bytes (20 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x36AFA0 push    rbx
//   0x36AFA1 mov     rcx, [rdi+50h]
//   0x36AFA5 mov     rbx, rsi
//   0x36AFA8 mov     rax, [rdi+8]
//   0x36AFAC test    rcx, rcx
//   0x36AFAF jz      short loc_36AFD8
//   0x36AFB1 mov     rdx, [rdi+48h]
//   0x36AFB5 mov     rsi, [rdi+28h]
//   0x36AFB9 mov     r8d, 53h ; 'S'
//   0x36AFBF mov     rdi, rax
//   0x36AFC2 call    _netnode_supset
//   0x36AFC7 movzx   eax, al
//   0x36AFCA mov     [rbx+8], rax
//   0x36AFCE xor     eax, eax
//   0x36AFD0 pop     rbx
//   0x36AFD1 retn
//   0x36AFD2 align 8
//   0x36AFD8 mov     ecx, 1
//   0x36AFDD lea     rdx, haystack
//   0x36AFE4 jmp     short loc_36AFB5
// ============================================================

void sub_36AFA0(/* signature unknown */)
{
    // see disassembly above
}

