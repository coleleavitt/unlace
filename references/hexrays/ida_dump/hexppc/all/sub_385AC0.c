// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x385AC0
// Name:           sub_385AC0
// Function size:  177 bytes (55 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x385AC0 push    rbp
//   0x385AC1 xor     eax, eax
//   0x385AC3 mov     rbp, rdi
//   0x385AC6 mov     edi, 3Dh ; '='
//   0x385ACB push    rbx
//   0x385ACC sub     rsp, 8
//   0x385AD0 mov     rdx, cs:callui_ptr
//   0x385AD7 call    qword ptr [rdx]
//   0x385AD9 mov     rbx, rax
//   0x385ADC call    _get_merge_state
//   0x385AE1 test    al, 3
//   0x385AE3 jz      short loc_385B40
//   0x385AE5 test    rbx, rbx
//   0x385AE8 jz      short loc_385B50
//   0x385AEA mov     rdx, [rbp+3F0h]
//   0x385AF1 mov     rax, [rdx+28h]
//   0x385AF5 mov     rdx, [rdx+30h]
//   0x385AF9 lea     rcx, [rax+rdx*8]
//   0x385AFD cmp     rax, rcx
//   0x385B00 jz      short loc_385B2D
//   0x385B02 nop     word ptr [rax+rax+00000000h]
//   0x385B0D nop     dword ptr [rax]
//   0x385B10 mov     rdx, [rax]
//   0x385B13 test    rdx, rdx
//   0x385B16 jz      short loc_385B24
//   0x385B18 cmp     rbx, [rdx+8]
//   0x385B1C jz      short loc_385B2F
//   0x385B1E cmp     rbx, [rdx+10h]
//   0x385B22 jz      short loc_385B2F
//   0x385B24 add     rax, 8
//   0x385B28 cmp     rcx, rax
//   0x385B2B jnz     short loc_385B10
//   0x385B2D xor     edx, edx
//   0x385B2F add     rsp, 8
//   0x385B33 mov     rax, rdx
//   0x385B36 pop     rbx
//   0x385B37 pop     rbp
//   0x385B38 retn
//   0x385B39 align 20h
//   0x385B40 test    rbx, rbx
//   0x385B43 jnz     short loc_385AEA
//   0x385B45 xor     edx, edx
//   0x385B47 jmp     short loc_385B2F
//   0x385B49 align 10h
//   0x385B50 mov     rax, [rbp+3F0h]
//   0x385B57 xor     edx, edx
//   0x385B59 cmp     qword ptr [rax+30h], 0
//   0x385B5E jz      short loc_385B2F
//   0x385B60 mov     rax, [rax+28h]
//   0x385B64 mov     rdx, [rax]
//   0x385B67 add     rsp, 8
//   0x385B6B pop     rbx
//   0x385B6C pop     rbp
//   0x385B6D mov     rax, rdx
//   0x385B70 retn
// ============================================================

void sub_385AC0(/* signature unknown */)
{
    // see disassembly above
}

