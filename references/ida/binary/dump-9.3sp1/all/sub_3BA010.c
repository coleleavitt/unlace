// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x3BA010
// Name:           sub_3BA010
// Function size:  104 bytes (27 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x3BA010 push    rbx
//   0x3BA011 cmp     rsi, [rdi+0C8h]
//   0x3BA018 jnb     short loc_3BA05D
//   0x3BA01A mov     rax, [rdi+0C0h]
//   0x3BA021 lea     rdx, [rsi+rsi*4]
//   0x3BA025 lea     rbx, [rax+rdx*8]
//   0x3BA029 test    rbx, rbx
//   0x3BA02C jz      short loc_3BA05D
//   0x3BA02E mov     rdi, [rbx]
//   0x3BA031 xor     esi, esi
//   0x3BA033 call    sub_39B020
//   0x3BA038 mov     rsi, [rbx+8]
//   0x3BA03C cmp     rsi, 0FFFFFFFFFFFFFFFFh
//   0x3BA040 jz      short loc_3BA05D
//   0x3BA042 mov     r8, cs:callui_ptr
//   0x3BA049 mov     ecx, 1
//   0x3BA04E mov     edx, 0FFFFFFFFh
//   0x3BA053 xor     eax, eax
//   0x3BA055 mov     edi, 73h ; 's'
//   0x3BA05A call    qword ptr [r8]
//   0x3BA05D xor     ecx, ecx
//   0x3BA05F mov     rax, 0FFFFFFFFFFFFFFFFh
//   0x3BA066 pop     rbx
//   0x3BA067 mov     rsi, 0FFFFFFFF00000000h
//   0x3BA071 and     rcx, rsi
//   0x3BA074 mov     rdx, rcx
//   0x3BA077 retn
// ============================================================

void sub_3BA010(/* signature unknown */)
{
    // see disassembly above
}

