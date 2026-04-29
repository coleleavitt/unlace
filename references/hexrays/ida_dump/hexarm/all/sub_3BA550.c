// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x3BA550
// Name:           sub_3BA550
// Function size:  104 bytes (27 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x3BA550 push    rbx
//   0x3BA551 cmp     rsi, [rdi+0C8h]
//   0x3BA558 jnb     short loc_3BA59D
//   0x3BA55A mov     rax, [rdi+0C0h]
//   0x3BA561 lea     rdx, [rsi+rsi*4]
//   0x3BA565 lea     rbx, [rax+rdx*8]
//   0x3BA569 test    rbx, rbx
//   0x3BA56C jz      short loc_3BA59D
//   0x3BA56E mov     rdi, [rbx]
//   0x3BA571 xor     esi, esi
//   0x3BA573 call    sub_39B560
//   0x3BA578 mov     rsi, [rbx+8]
//   0x3BA57C cmp     rsi, 0FFFFFFFFFFFFFFFFh
//   0x3BA580 jz      short loc_3BA59D
//   0x3BA582 mov     r8, cs:callui_ptr
//   0x3BA589 mov     ecx, 1
//   0x3BA58E mov     edx, 0FFFFFFFFh
//   0x3BA593 xor     eax, eax
//   0x3BA595 mov     edi, 73h ; 's'
//   0x3BA59A call    qword ptr [r8]
//   0x3BA59D xor     ecx, ecx
//   0x3BA59F mov     rax, 0FFFFFFFFFFFFFFFFh
//   0x3BA5A6 pop     rbx
//   0x3BA5A7 mov     rsi, 0FFFFFFFF00000000h
//   0x3BA5B1 and     rcx, rsi
//   0x3BA5B4 mov     rdx, rcx
//   0x3BA5B7 retn
// ============================================================

void sub_3BA550(/* signature unknown */)
{
    // see disassembly above
}

