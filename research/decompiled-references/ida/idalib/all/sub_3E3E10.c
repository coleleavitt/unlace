// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x3E3E10
// Name:           sub_3E3E10
// Function size:  109 bytes (31 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x3E3E10 push    rbp; int
//   0x3E3E11 mov     edx, 4
//   0x3E3E16 mov     rbp, rsi
//   0x3E3E19 push    rbx; int
//   0x3E3E1A mov     rbx, rdi
//   0x3E3E1D sub     rsp, 8
//   0x3E3E21 call    sub_3BE900
//   0x3E3E26 and     eax, 600h
//   0x3E3E2B cmp     rax, 600h
//   0x3E3E31 jz      short loc_3E3E58
//   0x3E3E33 xor     edx, edx
//   0x3E3E35 cmp     rax, 400h
//   0x3E3E3B jz      short loc_3E3E70
//   0x3E3E3D mov     qword ptr [rbx+8A0h], 0FFFFFFFFFFFFFFFFh
//   0x3E3E48 add     rsp, 8
//   0x3E3E4C mov     eax, edx
//   0x3E3E4E pop     rbx
//   0x3E3E4F pop     rbp
//   0x3E3E50 retn
//   0x3E3E51 align 8
//   0x3E3E58 xor     edx, edx
//   0x3E3E5A mov     rsi, rbp; int
//   0x3E3E5D mov     rdi, rbx; int
//   0x3E3E60 call    sub_577F80
//   0x3E3E65 mov     edx, 1
//   0x3E3E6A jmp     short loc_3E3E3D
//   0x3E3E6C align 10h
//   0x3E3E70 mov     rdi, [rbx]
//   0x3E3E73 mov     rsi, rbp
//   0x3E3E76 call    sub_410D30
//   0x3E3E7B jmp     short loc_3E3E65
// ============================================================

void sub_3E3E10(/* signature unknown */)
{
    // see disassembly above
}

