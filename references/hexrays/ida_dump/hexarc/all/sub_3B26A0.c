// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x3B26A0
// Name:           sub_3B26A0
// Function size:  104 bytes (27 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x3B26A0 push    rbx
//   0x3B26A1 cmp     rsi, [rdi+0E8h]
//   0x3B26A8 jnb     short loc_3B26ED
//   0x3B26AA mov     rax, [rdi+0E0h]
//   0x3B26B1 lea     rdx, [rsi+rsi*4]
//   0x3B26B5 lea     rbx, [rax+rdx*8]
//   0x3B26B9 test    rbx, rbx
//   0x3B26BC jz      short loc_3B26ED
//   0x3B26BE mov     rdi, [rbx]
//   0x3B26C1 xor     esi, esi
//   0x3B26C3 call    sub_393720
//   0x3B26C8 mov     rsi, [rbx+8]
//   0x3B26CC cmp     rsi, 0FFFFFFFFFFFFFFFFh
//   0x3B26D0 jz      short loc_3B26ED
//   0x3B26D2 mov     r8, cs:callui_ptr
//   0x3B26D9 mov     ecx, 1
//   0x3B26DE mov     edx, 0FFFFFFFFh
//   0x3B26E3 xor     eax, eax
//   0x3B26E5 mov     edi, 73h ; 's'
//   0x3B26EA call    qword ptr [r8]
//   0x3B26ED xor     ecx, ecx
//   0x3B26EF mov     rax, 0FFFFFFFFFFFFFFFFh
//   0x3B26F6 pop     rbx
//   0x3B26F7 mov     rsi, 0FFFFFFFF00000000h
//   0x3B2701 and     rcx, rsi
//   0x3B2704 mov     rdx, rcx
//   0x3B2707 retn
// ============================================================

void sub_3B26A0(/* signature unknown */)
{
    // see disassembly above
}

