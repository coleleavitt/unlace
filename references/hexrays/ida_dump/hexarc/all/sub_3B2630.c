// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x3B2630
// Name:           sub_3B2630
// Function size:  104 bytes (27 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x3B2630 push    rbx
//   0x3B2631 cmp     rsi, [rdi+0C8h]
//   0x3B2638 jnb     short loc_3B267D
//   0x3B263A lea     rax, [rsi+rsi*2]
//   0x3B263E shl     rax, 4
//   0x3B2642 add     rax, [rdi+0C0h]
//   0x3B2649 mov     rbx, rax
//   0x3B264C jz      short loc_3B267D
//   0x3B264E mov     rdi, [rax]
//   0x3B2651 xor     esi, esi
//   0x3B2653 call    sub_393720
//   0x3B2658 mov     rsi, [rbx+8]
//   0x3B265C cmp     rsi, 0FFFFFFFFFFFFFFFFh
//   0x3B2660 jz      short loc_3B267D
//   0x3B2662 mov     r8, cs:callui_ptr
//   0x3B2669 mov     ecx, 1
//   0x3B266E mov     edx, 0FFFFFFFFh
//   0x3B2673 xor     eax, eax
//   0x3B2675 mov     edi, 73h ; 's'
//   0x3B267A call    qword ptr [r8]
//   0x3B267D xor     ecx, ecx
//   0x3B267F mov     rax, 0FFFFFFFFFFFFFFFFh
//   0x3B2686 pop     rbx
//   0x3B2687 mov     rsi, 0FFFFFFFF00000000h
//   0x3B2691 and     rcx, rsi
//   0x3B2694 mov     rdx, rcx
//   0x3B2697 retn
// ============================================================

void sub_3B2630(/* signature unknown */)
{
    // see disassembly above
}

