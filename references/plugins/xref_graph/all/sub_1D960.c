// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x1D960
// Name:           sub_1D960
// Function size:  85 bytes (28 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x1D960 push    r14
//   0x1D962 xor     eax, eax
//   0x1D964 mov     edi, 35h ; '5'
//   0x1D969 push    rbx
//   0x1D96A sub     rsp, 8
//   0x1D96E mov     rdx, cs:callui_ptr
//   0x1D975 call    qword ptr [rdx]
//   0x1D977 test    al, al
//   0x1D979 jz      short loc_1D9A0
//   0x1D97B mov     edi, 718h
//   0x1D980 call    _qalloc_or_throw
//   0x1D985 mov     rdi, rax
//   0x1D988 mov     rbx, rax
//   0x1D98B call    sub_1CA50
//   0x1D990 add     rsp, 8
//   0x1D994 mov     rax, rbx
//   0x1D997 pop     rbx
//   0x1D998 pop     r14
//   0x1D99A retn
//   0x1D99B align 20h
//   0x1D9A0 xor     ebx, ebx
//   0x1D9A2 add     rsp, 8
//   0x1D9A6 mov     rax, rbx
//   0x1D9A9 pop     rbx
//   0x1D9AA pop     r14
//   0x1D9AC retn
//   0x1D9AD mov     r14, rax
//   0x1D9B0 jmp     loc_17886
// ============================================================

void sub_1D960(/* signature unknown */)
{
    // see disassembly above
}

