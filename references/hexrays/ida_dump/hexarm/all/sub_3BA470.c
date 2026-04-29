// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x3BA470
// Name:           sub_3BA470
// Function size:  104 bytes (27 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x3BA470 push    rbx
//   0x3BA471 cmp     rsi, [rdi+0C8h]
//   0x3BA478 jnb     short loc_3BA4BD
//   0x3BA47A lea     rax, [rsi+rsi*2]
//   0x3BA47E shl     rax, 4
//   0x3BA482 add     rax, [rdi+0C0h]
//   0x3BA489 mov     rbx, rax
//   0x3BA48C jz      short loc_3BA4BD
//   0x3BA48E mov     rdi, [rax]
//   0x3BA491 xor     esi, esi
//   0x3BA493 call    sub_39B560
//   0x3BA498 mov     rsi, [rbx+8]
//   0x3BA49C cmp     rsi, 0FFFFFFFFFFFFFFFFh
//   0x3BA4A0 jz      short loc_3BA4BD
//   0x3BA4A2 mov     r8, cs:callui_ptr
//   0x3BA4A9 mov     ecx, 1
//   0x3BA4AE mov     edx, 0FFFFFFFFh
//   0x3BA4B3 xor     eax, eax
//   0x3BA4B5 mov     edi, 73h ; 's'
//   0x3BA4BA call    qword ptr [r8]
//   0x3BA4BD xor     ecx, ecx
//   0x3BA4BF mov     rax, 0FFFFFFFFFFFFFFFFh
//   0x3BA4C6 pop     rbx
//   0x3BA4C7 mov     rsi, 0FFFFFFFF00000000h
//   0x3BA4D1 and     rcx, rsi
//   0x3BA4D4 mov     rdx, rcx
//   0x3BA4D7 retn
// ============================================================

void sub_3BA470(/* signature unknown */)
{
    // see disassembly above
}

