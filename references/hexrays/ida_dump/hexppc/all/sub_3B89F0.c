// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x3B89F0
// Name:           sub_3B89F0
// Function size:  137 bytes (43 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x3B89F0 push    rbp
//   0x3B89F1 push    rbx
//   0x3B89F2 mov     rbx, rdi
//   0x3B89F5 sub     rsp, 8
//   0x3B89F9 mov     rbp, [rsi]
//   0x3B89FC mov     rdi, [rdi+10h]
//   0x3B8A00 mov     rsi, rbp
//   0x3B8A03 call    sub_385A70
//   0x3B8A08 test    rax, rax
//   0x3B8A0B jz      short loc_3B8A68
//   0x3B8A0D mov     rsi, rax
//   0x3B8A10 mov     eax, [rbx+18h]
//   0x3B8A13 test    eax, eax
//   0x3B8A15 jz      short loc_3B8A27
//   0x3B8A17 cmp     eax, 1
//   0x3B8A1A jnz     short loc_3B8A74
//   0x3B8A1C mov     eax, 6
//   0x3B8A21 cmp     rbp, [rsi+8]
//   0x3B8A25 jnz     short loc_3B8A5A
//   0x3B8A27 mov     rax, [rbx]
//   0x3B8A2A mov     rdi, rbx
//   0x3B8A2D call    qword ptr [rax+30h]
//   0x3B8A30 mov     rcx, [rbx+30h]
//   0x3B8A34 mov     rsi, [rbx+20h]
//   0x3B8A38 mov     edx, 1
//   0x3B8A3D mov     r8, cs:callui_ptr
//   0x3B8A44 test    al, al
//   0x3B8A46 mov     edi, 8Ch
//   0x3B8A4B cmovnz  rcx, [rbx+28h]
//   0x3B8A50 xor     eax, eax
//   0x3B8A52 call    qword ptr [r8]
//   0x3B8A55 mov     eax, 3
//   0x3B8A5A add     rsp, 8
//   0x3B8A5E pop     rbx
//   0x3B8A5F pop     rbp
//   0x3B8A60 retn
//   0x3B8A61 align 8
//   0x3B8A68 add     rsp, 8
//   0x3B8A6C mov     eax, 6
//   0x3B8A71 pop     rbx
//   0x3B8A72 pop     rbp
//   0x3B8A73 retn
//   0x3B8A74 call    sub_3B6850
// ============================================================

void sub_3B89F0(/* signature unknown */)
{
    // see disassembly above
}

