// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x3BA4E0
// Name:           sub_3BA4E0
// Function size:  104 bytes (27 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x3BA4E0 push    rbx
//   0x3BA4E1 cmp     rsi, [rdi+0E8h]
//   0x3BA4E8 jnb     short loc_3BA52D
//   0x3BA4EA mov     rax, [rdi+0E0h]
//   0x3BA4F1 lea     rdx, [rsi+rsi*4]
//   0x3BA4F5 lea     rbx, [rax+rdx*8]
//   0x3BA4F9 test    rbx, rbx
//   0x3BA4FC jz      short loc_3BA52D
//   0x3BA4FE mov     rdi, [rbx]
//   0x3BA501 xor     esi, esi
//   0x3BA503 call    sub_39B560
//   0x3BA508 mov     rsi, [rbx+8]
//   0x3BA50C cmp     rsi, 0FFFFFFFFFFFFFFFFh
//   0x3BA510 jz      short loc_3BA52D
//   0x3BA512 mov     r8, cs:callui_ptr
//   0x3BA519 mov     ecx, 1
//   0x3BA51E mov     edx, 0FFFFFFFFh
//   0x3BA523 xor     eax, eax
//   0x3BA525 mov     edi, 73h ; 's'
//   0x3BA52A call    qword ptr [r8]
//   0x3BA52D xor     ecx, ecx
//   0x3BA52F mov     rax, 0FFFFFFFFFFFFFFFFh
//   0x3BA536 pop     rbx
//   0x3BA537 mov     rsi, 0FFFFFFFF00000000h
//   0x3BA541 and     rcx, rsi
//   0x3BA544 mov     rdx, rcx
//   0x3BA547 retn
// ============================================================

void sub_3BA4E0(/* signature unknown */)
{
    // see disassembly above
}

