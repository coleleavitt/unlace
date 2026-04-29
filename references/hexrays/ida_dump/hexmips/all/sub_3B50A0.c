// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x3B50A0
// Name:           sub_3B50A0
// Function size:  104 bytes (27 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x3B50A0 push    rbx
//   0x3B50A1 cmp     rsi, [rdi+0E8h]
//   0x3B50A8 jnb     short loc_3B50ED
//   0x3B50AA mov     rax, [rdi+0E0h]
//   0x3B50B1 lea     rdx, [rsi+rsi*4]
//   0x3B50B5 lea     rbx, [rax+rdx*8]
//   0x3B50B9 test    rbx, rbx
//   0x3B50BC jz      short loc_3B50ED
//   0x3B50BE mov     rdi, [rbx]
//   0x3B50C1 xor     esi, esi
//   0x3B50C3 call    sub_396120
//   0x3B50C8 mov     rsi, [rbx+8]
//   0x3B50CC cmp     rsi, 0FFFFFFFFFFFFFFFFh
//   0x3B50D0 jz      short loc_3B50ED
//   0x3B50D2 mov     r8, cs:callui_ptr
//   0x3B50D9 mov     ecx, 1
//   0x3B50DE mov     edx, 0FFFFFFFFh
//   0x3B50E3 xor     eax, eax
//   0x3B50E5 mov     edi, 73h ; 's'
//   0x3B50EA call    qword ptr [r8]
//   0x3B50ED xor     ecx, ecx
//   0x3B50EF mov     rax, 0FFFFFFFFFFFFFFFFh
//   0x3B50F6 pop     rbx
//   0x3B50F7 mov     rsi, 0FFFFFFFF00000000h
//   0x3B5101 and     rcx, rsi
//   0x3B5104 mov     rdx, rcx
//   0x3B5107 retn
// ============================================================

void sub_3B50A0(/* signature unknown */)
{
    // see disassembly above
}

