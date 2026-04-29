// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x3BA400
// Name:           sub_3BA400
// Function size:  104 bytes (27 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x3BA400 push    rbx
//   0x3BA401 cmp     rsi, [rdi+0E8h]
//   0x3BA408 jnb     short loc_3BA44D
//   0x3BA40A lea     rax, [rsi+rsi*2]
//   0x3BA40E shl     rax, 4
//   0x3BA412 add     rax, [rdi+0E0h]
//   0x3BA419 mov     rbx, rax
//   0x3BA41C jz      short loc_3BA44D
//   0x3BA41E mov     rdi, [rax]
//   0x3BA421 xor     esi, esi
//   0x3BA423 call    sub_39B560
//   0x3BA428 mov     rsi, [rbx+8]
//   0x3BA42C cmp     rsi, 0FFFFFFFFFFFFFFFFh
//   0x3BA430 jz      short loc_3BA44D
//   0x3BA432 mov     r8, cs:callui_ptr
//   0x3BA439 mov     ecx, 1
//   0x3BA43E mov     edx, 0FFFFFFFFh
//   0x3BA443 xor     eax, eax
//   0x3BA445 mov     edi, 73h ; 's'
//   0x3BA44A call    qword ptr [r8]
//   0x3BA44D xor     ecx, ecx
//   0x3BA44F mov     rax, 0FFFFFFFFFFFFFFFFh
//   0x3BA456 pop     rbx
//   0x3BA457 mov     rsi, 0FFFFFFFF00000000h
//   0x3BA461 and     rcx, rsi
//   0x3BA464 mov     rdx, rcx
//   0x3BA467 retn
// ============================================================

void sub_3BA400(/* signature unknown */)
{
    // see disassembly above
}

