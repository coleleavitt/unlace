// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x386530
// Name:           sub_386530
// Function size:  83 bytes (29 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x386530 mov     rax, [rdi+8]
//   0x386534 test    rax, rax
//   0x386537 jz      short loc_386580
//   0x386539 mov     r9, cs:callui_ptr
//   0x386540 xor     edx, edx
//   0x386542 test    esi, esi
//   0x386544 push    rbx
//   0x386545 setnz   dl
//   0x386548 mov     rbx, rdi
//   0x38654B lea     rcx, [rdi+30h]
//   0x38654F mov     rsi, rax
//   0x386552 lea     r8, [rdi+34h]
//   0x386556 xor     eax, eax
//   0x386558 mov     edi, 38h ; '8'
//   0x38655D call    qword ptr [r9]
//   0x386560 test    rax, rax
//   0x386563 jz      short loc_386578
//   0x386565 mov     eax, [rax+0Ch]
//   0x386568 mov     [rbx+2Ch], eax
//   0x38656B mov     eax, 1
//   0x386570 pop     rbx
//   0x386571 retn
//   0x386572 align 8
//   0x386578 xor     eax, eax
//   0x38657A pop     rbx
//   0x38657B retn
//   0x38657C align 20h
//   0x386580 xor     eax, eax
//   0x386582 retn
// ============================================================

void sub_386530(/* signature unknown */)
{
    // see disassembly above
}

