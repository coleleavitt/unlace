// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x387300
// Name:           sub_387300
// Function size:  72 bytes (23 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x387300 push    rbp
//   0x387301 mov     ebp, esi
//   0x387303 xor     esi, esi
//   0x387305 push    rbx
//   0x387306 mov     rbx, rdi
//   0x387309 sub     rsp, 8
//   0x38730D call    sub_386590
//   0x387312 lea     rcx, [rbx+68h]
//   0x387316 lea     rdx, [rbx+50h]
//   0x38731A mov     rdi, rbx
//   0x38731D lea     rsi, [rbx+38h]
//   0x387321 call    sub_3872A0
//   0x387326 mov     r8, cs:callui_ptr
//   0x38732D mov     ecx, ebp
//   0x38732F mov     edx, 0FFFFFFFFh
//   0x387334 mov     rsi, rax
//   0x387337 mov     edi, 73h ; 's'
//   0x38733C xor     eax, eax
//   0x38733E call    qword ptr [r8]
//   0x387341 add     rsp, 8
//   0x387345 pop     rbx
//   0x387346 pop     rbp
//   0x387347 retn
// ============================================================

void sub_387300(/* signature unknown */)
{
    // see disassembly above
}

