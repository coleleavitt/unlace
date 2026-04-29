// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x3849C0
// Name:           sub_3849C0
// Function size:  177 bytes (55 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x3849C0 push    rbp
//   0x3849C1 xor     eax, eax
//   0x3849C3 mov     rbp, rdi
//   0x3849C6 mov     edi, 3Dh ; '='
//   0x3849CB push    rbx
//   0x3849CC sub     rsp, 8
//   0x3849D0 mov     rdx, cs:callui_ptr
//   0x3849D7 call    qword ptr [rdx]
//   0x3849D9 mov     rbx, rax
//   0x3849DC call    _get_merge_state
//   0x3849E1 test    al, 3
//   0x3849E3 jz      short loc_384A40
//   0x3849E5 test    rbx, rbx
//   0x3849E8 jz      short loc_384A50
//   0x3849EA mov     rdx, [rbp+3F0h]
//   0x3849F1 mov     rax, [rdx+28h]
//   0x3849F5 mov     rdx, [rdx+30h]
//   0x3849F9 lea     rcx, [rax+rdx*8]
//   0x3849FD cmp     rax, rcx
//   0x384A00 jz      short loc_384A2D
//   0x384A02 nop     word ptr [rax+rax+00000000h]
//   0x384A0D nop     dword ptr [rax]
//   0x384A10 mov     rdx, [rax]
//   0x384A13 test    rdx, rdx
//   0x384A16 jz      short loc_384A24
//   0x384A18 cmp     rbx, [rdx+8]
//   0x384A1C jz      short loc_384A2F
//   0x384A1E cmp     rbx, [rdx+10h]
//   0x384A22 jz      short loc_384A2F
//   0x384A24 add     rax, 8
//   0x384A28 cmp     rcx, rax
//   0x384A2B jnz     short loc_384A10
//   0x384A2D xor     edx, edx
//   0x384A2F add     rsp, 8
//   0x384A33 mov     rax, rdx
//   0x384A36 pop     rbx
//   0x384A37 pop     rbp
//   0x384A38 retn
//   0x384A39 align 20h
//   0x384A40 test    rbx, rbx
//   0x384A43 jnz     short loc_3849EA
//   0x384A45 xor     edx, edx
//   0x384A47 jmp     short loc_384A2F
//   0x384A49 align 10h
//   0x384A50 mov     rax, [rbp+3F0h]
//   0x384A57 xor     edx, edx
//   0x384A59 cmp     qword ptr [rax+30h], 0
//   0x384A5E jz      short loc_384A2F
//   0x384A60 mov     rax, [rax+28h]
//   0x384A64 mov     rdx, [rax]
//   0x384A67 add     rsp, 8
//   0x384A6B pop     rbx
//   0x384A6C pop     rbp
//   0x384A6D mov     rax, rdx
//   0x384A70 retn
// ============================================================

void sub_3849C0(/* signature unknown */)
{
    // see disassembly above
}

