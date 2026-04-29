// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x3BA660
// Name:           sub_3BA660
// Function size:  90 bytes (30 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x3BA660 push    rbp
//   0x3BA661 mov     rbp, rdi
//   0x3BA664 push    rbx
//   0x3BA665 mov     rbx, rsi
//   0x3BA668 xor     esi, esi
//   0x3BA66A mov     rdi, rbx
//   0x3BA66D sub     rsp, 8
//   0x3BA671 call    sub_387310
//   0x3BA676 mov     rdi, [rbp+10h]
//   0x3BA67A lea     rsi, [rbx+50h]
//   0x3BA67E call    sub_3BA460
//   0x3BA683 mov     edx, eax
//   0x3BA685 xor     eax, eax
//   0x3BA687 test    edx, edx
//   0x3BA689 jg      short loc_3BA698
//   0x3BA68B add     rsp, 8
//   0x3BA68F pop     rbx
//   0x3BA690 pop     rbp
//   0x3BA691 retn
//   0x3BA692 align 8
//   0x3BA698 mov     r8, cs:callui_ptr
//   0x3BA69F xor     ecx, ecx
//   0x3BA6A1 mov     esi, 0Ah
//   0x3BA6A6 mov     edi, 0C2h
//   0x3BA6AB call    qword ptr [r8]
//   0x3BA6AE add     rsp, 8
//   0x3BA6B2 mov     eax, 1
//   0x3BA6B7 pop     rbx
//   0x3BA6B8 pop     rbp
//   0x3BA6B9 retn
// ============================================================

void sub_3BA660(/* signature unknown */)
{
    // see disassembly above
}

