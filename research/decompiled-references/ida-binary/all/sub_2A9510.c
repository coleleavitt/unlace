// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x2A9510
// Name:           sub_2A9510
// Function size:  129 bytes (43 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x2A9510 test    ecx, ecx
//   0x2A9512 js      short locret_2A9590
//   0x2A9514 push    r13
//   0x2A9516 movsxd  rax, ecx
//   0x2A9519 push    r12
//   0x2A951B mov     r12, rdx
//   0x2A951E push    rbp
//   0x2A951F mov     rbp, rdi
//   0x2A9522 push    rbx
//   0x2A9523 mov     ebx, ecx
//   0x2A9525 sub     rsp, 8
//   0x2A9529 mov     rdx, [rdi+1B8h]
//   0x2A9530 cmp     rax, [rdx+18h]
//   0x2A9534 jb      short loc_2A9548
//   0x2A9536 add     rsp, 8
//   0x2A953A pop     rbx
//   0x2A953B pop     rbp
//   0x2A953C pop     r12
//   0x2A953E pop     r13
//   0x2A9540 retn
//   0x2A9541 align 8
//   0x2A9548 mov     rax, [rdi+10h]
//   0x2A954C mov     r13, rsi
//   0x2A954F lea     rdi, [rax+180h]
//   0x2A9556 call    sub_1EA6C0
//   0x2A955B mov     rdi, rbp
//   0x2A955E mov     rsi, rax
//   0x2A9561 call    sub_2BEFB0
//   0x2A9566 test    al, al
//   0x2A9568 jnz     short loc_2A9536
//   0x2A956A add     rsp, 8
//   0x2A956E mov     ecx, ebx
//   0x2A9570 mov     rdx, r12
//   0x2A9573 mov     rsi, r13
//   0x2A9576 pop     rbx
//   0x2A9577 mov     rdi, rbp
//   0x2A957A xor     r8d, r8d
//   0x2A957D pop     rbp
//   0x2A957E pop     r12
//   0x2A9580 pop     r13
//   0x2A9582 jmp     sub_2A9360
//   0x2A9587 align 10h
//   0x2A9590 retn
// ============================================================

void sub_2A9510(/* signature unknown */)
{
    // see disassembly above
}

