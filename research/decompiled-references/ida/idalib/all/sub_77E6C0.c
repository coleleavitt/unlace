// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x77E6C0
// Name:           sub_77E6C0
// Function size:  295 bytes (78 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x77E6C0 shr     rdx, 10h
//   0x77E6C4 cmp     rdx, 0FFFFh
//   0x77E6CB jbe     short loc_77E6D0
//   0x77E6CD xor     eax, eax
//   0x77E6CF retn
//   0x77E6D0 push    r15; int
//   0x77E6D2 mov     r15, rdx
//   0x77E6D5 push    r14; int
//   0x77E6D7 push    r13; int
//   0x77E6D9 push    r12; int
//   0x77E6DB mov     r12, rsi
//   0x77E6DE lea     rsi, [rdx+1]
//   0x77E6E2 push    rbp; int
//   0x77E6E3 push    rbx; int
//   0x77E6E4 mov     rbx, rdi
//   0x77E6E7 lea     rdi, [rdi+30h]
//   0x77E6EB sub     rsp, 8
//   0x77E6EF mov     rbp, [rdi+8]
//   0x77E6F3 call    sub_77D7A0
//   0x77E6F8 cmp     rbp, r15
//   0x77E6FB jnb     loc_77E798
//   0x77E701 lea     rax, [rbp+rbp*4+0]
//   0x77E706 lea     r13, [rbx+48h]
//   0x77E70A lea     r14, [rbp+rax*2+0]
//   0x77E70F shl     r14, 4
//   0x77E713 jmp     short loc_77E759
//   0x77E715 align 40h
//   0x77E740 mov     [rsi+rax*8], rbp
//   0x77E744 add     rbp, 1
//   0x77E748 add     r14, 0B0h
//   0x77E74F add     qword ptr [rbx+50h], 1
//   0x77E754 cmp     rbp, r15
//   0x77E757 jz      short loc_77E798
//   0x77E759 mov     rax, [rbx+30h]
//   0x77E75D add     rax, r14
//   0x77E760 or      dword ptr [rax+0A8h], 2
//   0x77E767 mov     rax, [rbx+50h]
//   0x77E76B mov     rsi, [rbx+48h]
//   0x77E76F lea     rdx, [rax+1]
//   0x77E773 cmp     [rbx+58h], rdx
//   0x77E777 jnb     short loc_77E740
//   0x77E779 mov     ecx, 8
//   0x77E77E mov     rdi, r13
//   0x77E781 call    _qvector_reserve
//   0x77E786 mov     [rbx+48h], rax
//   0x77E78A mov     rsi, rax
//   0x77E78D mov     rax, [rbx+50h]
//   0x77E791 jmp     short loc_77E740
//   0x77E793 align 8
//   0x77E798 lea     rax, [r15+r15*4]
//   0x77E79C mov     rsi, r12
//   0x77E79F lea     rdi, [r15+rax*2]
//   0x77E7A3 shl     rdi, 4
//   0x77E7A7 add     rdi, [rbx+30h]
//   0x77E7AB call    sub_775C30
//   0x77E7B0 test    al, al
//   0x77E7B2 jz      short loc_77E7C8
//   0x77E7B4 add     rsp, 8
//   0x77E7B8 pop     rbx
//   0x77E7B9 pop     rbp
//   0x77E7BA pop     r12
//   0x77E7BC pop     r13
//   0x77E7BE pop     r14
//   0x77E7C0 pop     r15
//   0x77E7C2 retn
//   0x77E7C3 align 8
//   0x77E7C8 xor     eax, eax
//   0x77E7CA lea     rdi, aWrongDirectory; "wrong directory structure\n"
//   0x77E7D1 call    sub_84F5B0
//   0x77E7D6 add     rsp, 8
//   0x77E7DA xor     eax, eax
//   0x77E7DC pop     rbx
//   0x77E7DD pop     rbp
//   0x77E7DE pop     r12
//   0x77E7E0 pop     r13
//   0x77E7E2 pop     r14
//   0x77E7E4 pop     r15
//   0x77E7E6 retn
// ============================================================

void sub_77E6C0(/* signature unknown */)
{
    // see disassembly above
}

