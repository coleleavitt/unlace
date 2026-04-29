// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x3C9500
// Name:           sub_3C9500
// Function size:  155 bytes (49 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x3C9500 mov     rdx, [rdi+10h]
//   0x3C9504 mov     rsi, [rsi]
//   0x3C9507 mov     rax, [rdx+828h]
//   0x3C950E mov     rdx, [rdx+830h]
//   0x3C9515 lea     rdx, [rax+rdx*8]
//   0x3C9519 cmp     rax, rdx
//   0x3C951C jz      short loc_3C9595
//   0x3C951E push    rbp
//   0x3C951F mov     rbp, rdi
//   0x3C9522 push    rbx
//   0x3C9523 sub     rsp, 8
//   0x3C9527 nop     word ptr [rax+rax+00000000h]
//   0x3C9530 mov     rbx, [rax]
//   0x3C9533 test    rbx, rbx
//   0x3C9536 jz      short loc_3C953D
//   0x3C9538 cmp     rsi, [rbx]
//   0x3C953B jz      short loc_3C9558
//   0x3C953D add     rax, 8
//   0x3C9541 cmp     rdx, rax
//   0x3C9544 jnz     short loc_3C9530
//   0x3C9546 add     rsp, 8
//   0x3C954A mov     eax, 7
//   0x3C954F pop     rbx
//   0x3C9550 pop     rbp
//   0x3C9551 retn
//   0x3C9552 align 8
//   0x3C9558 mov     r9, cs:callui_ptr
//   0x3C955F xor     edx, edx
//   0x3C9561 xor     r8d, r8d
//   0x3C9564 xor     ecx, ecx
//   0x3C9566 mov     edi, 38h ; '8'
//   0x3C956B xor     eax, eax
//   0x3C956D call    qword ptr [r9]
//   0x3C9570 mov     rdx, rax
//   0x3C9573 test    rax, rax
//   0x3C9576 jz      short loc_3C9546
//   0x3C9578 mov     rax, [rbp+0]
//   0x3C957C mov     rsi, rbx
//   0x3C957F mov     rdi, rbp
//   0x3C9582 call    qword ptr [rax+20h]
//   0x3C9585 test    al, al
//   0x3C9587 jz      short loc_3C9546
//   0x3C9589 add     rsp, 8
//   0x3C958D mov     eax, 3
//   0x3C9592 pop     rbx
//   0x3C9593 pop     rbp
//   0x3C9594 retn
//   0x3C9595 mov     eax, 7
//   0x3C959A retn
// ============================================================

void sub_3C9500(/* signature unknown */)
{
    // see disassembly above
}

