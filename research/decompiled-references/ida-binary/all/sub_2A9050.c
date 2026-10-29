// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x2A9050
// Name:           sub_2A9050
// Function size:  155 bytes (40 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x2A9050 push    r12
//   0x2A9052 mov     r12, rcx
//   0x2A9055 push    rbp
//   0x2A9056 mov     rbp, rdi
//   0x2A9059 push    rbx
//   0x2A905A mov     rax, [rdi+10h]
//   0x2A905E movsxd  rbx, edx
//   0x2A9061 lea     rdi, [rax+180h]
//   0x2A9068 call    sub_1EA6C0
//   0x2A906D pxor    xmm0, xmm0
//   0x2A9071 cvtsi2sd xmm0, dword ptr [rbp+1B0h]
//   0x2A9079 mulsd   xmm0, qword ptr [rax]
//   0x2A907D comisd  xmm0, cs:qword_5DBE88
//   0x2A9085 jbe     short loc_2A9090
//   0x2A9087 cmp     rbx, 8Bh
//   0x2A908E jbe     short loc_2A90A0
//   0x2A9090 mov     eax, 1
//   0x2A9095 pop     rbx
//   0x2A9096 pop     rbp
//   0x2A9097 pop     r12
//   0x2A9099 retn
//   0x2A909A align 20h
//   0x2A90A0 mov     rax, 0CCCCCCCCCCCCCCCDh
//   0x2A90AA mul     rbx
//   0x2A90AD shr     rdx, 4
//   0x2A90B1 lea     rax, [rdx+rdx*4]
//   0x2A90B5 shl     rax, 2
//   0x2A90B9 sub     rbx, rax
//   0x2A90BC xor     eax, eax
//   0x2A90BE cmp     rbx, 10h
//   0x2A90C2 ja      short loc_2A9095
//   0x2A90C4 mov     rax, [rbp+1B8h]
//   0x2A90CB movsxd  rcx, dword ptr [r12+0Ch]
//   0x2A90D0 mov     rax, [rax+70h]
//   0x2A90D4 mov     eax, [rax+rcx*4]
//   0x2A90D7 bt      eax, edx
//   0x2A90DA jnb     short loc_2A9090
//   0x2A90DC mov     dword ptr [r12], 3
//   0x2A90E4 mov     [r12+10h], edx
//   0x2A90E9 jmp     short loc_2A9090
// ============================================================

void sub_2A9050(/* signature unknown */)
{
    // see disassembly above
}

