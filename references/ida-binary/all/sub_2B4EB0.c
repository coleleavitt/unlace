// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x2B4EB0
// Name:           sub_2B4EB0
// Function size:  71 bytes (23 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x2B4EB0 push    r12
//   0x2B4EB2 push    rbp
//   0x2B4EB3 push    rbx
//   0x2B4EB4 mov     rbx, rdi
//   0x2B4EB7 mov     rdi, [rdi+10h]; this
//   0x2B4EBB call    __ZNK2QT19QAbstractScrollArea8viewportEv; QT::QAbstractScrollArea::viewport(void)
//   0x2B4EC0 mov     rdi, [rbx+10h]
//   0x2B4EC4 mov     rax, [rax+20h]
//   0x2B4EC8 add     rdi, 180h
//   0x2B4ECF mov     r12d, [rax+20h]
//   0x2B4ED3 mov     ebp, [rax+1Ch]
//   0x2B4ED6 sub     r12d, [rax+18h]
//   0x2B4EDA sub     ebp, [rax+14h]
//   0x2B4EDD call    sub_1EA6C0
//   0x2B4EE2 pop     rbx
//   0x2B4EE3 mov     r8d, r12d
//   0x2B4EE6 mov     ecx, ebp
//   0x2B4EE8 mov     rdi, rax
//   0x2B4EEB pop     rbp
//   0x2B4EEC xor     edx, edx
//   0x2B4EEE xor     esi, esi
//   0x2B4EF0 pop     r12
//   0x2B4EF2 jmp     sub_2B3240
// ============================================================

void sub_2B4EB0(/* signature unknown */)
{
    // see disassembly above
}

