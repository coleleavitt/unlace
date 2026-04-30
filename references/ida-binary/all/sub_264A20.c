// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x264A20
// Name:           sub_264A20
// Function size:  87 bytes (32 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x264A20 push    r12
//   0x264A22 push    rbp
//   0x264A23 push    rbx
//   0x264A24 mov     rax, [rdi+10h]
//   0x264A28 mov     rbx, [rdi+8]
//   0x264A2C lea     rax, [rax+rax*2]
//   0x264A30 lea     rbp, [rbx+rax*8]
//   0x264A34 cmp     rbp, rbx
//   0x264A37 jz      short loc_264A70
//   0x264A39 lea     r12, s1
//   0x264A40 jmp     short loc_264A51
//   0x264A42 align 8
//   0x264A48 add     rbx, 18h
//   0x264A4C cmp     rbp, rbx
//   0x264A4F jz      short loc_264A70
//   0x264A51 cmp     qword ptr [rbx+8], 0
//   0x264A56 mov     rdi, r12
//   0x264A59 jz      short loc_264A5E
//   0x264A5B mov     rdi, [rbx]; src
//   0x264A5E call    sub_4A0300
//   0x264A63 test    rax, rax
//   0x264A66 jz      short loc_264A48
//   0x264A68 pop     rbx
//   0x264A69 pop     rbp
//   0x264A6A pop     r12
//   0x264A6C retn
//   0x264A6D align 10h
//   0x264A70 pop     rbx
//   0x264A71 xor     eax, eax
//   0x264A73 pop     rbp
//   0x264A74 pop     r12
//   0x264A76 retn
// ============================================================

void sub_264A20(/* signature unknown */)
{
    // see disassembly above
}

