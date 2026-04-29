// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x384D40
// Name:           sub_384D40
// Function size:  177 bytes (55 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x384D40 push    rbp
//   0x384D41 xor     eax, eax
//   0x384D43 mov     rbp, rdi
//   0x384D46 mov     edi, 3Dh ; '='
//   0x384D4B push    rbx
//   0x384D4C sub     rsp, 8
//   0x384D50 mov     rdx, cs:callui_ptr
//   0x384D57 call    qword ptr [rdx]
//   0x384D59 mov     rbx, rax
//   0x384D5C call    _get_merge_state
//   0x384D61 test    al, 3
//   0x384D63 jz      short loc_384DC0
//   0x384D65 test    rbx, rbx
//   0x384D68 jz      short loc_384DD0
//   0x384D6A mov     rdx, [rbp+3F0h]
//   0x384D71 mov     rax, [rdx+28h]
//   0x384D75 mov     rdx, [rdx+30h]
//   0x384D79 lea     rcx, [rax+rdx*8]
//   0x384D7D cmp     rax, rcx
//   0x384D80 jz      short loc_384DAD
//   0x384D82 nop     word ptr [rax+rax+00000000h]
//   0x384D8D nop     dword ptr [rax]
//   0x384D90 mov     rdx, [rax]
//   0x384D93 test    rdx, rdx
//   0x384D96 jz      short loc_384DA4
//   0x384D98 cmp     rbx, [rdx+8]
//   0x384D9C jz      short loc_384DAF
//   0x384D9E cmp     rbx, [rdx+10h]
//   0x384DA2 jz      short loc_384DAF
//   0x384DA4 add     rax, 8
//   0x384DA8 cmp     rcx, rax
//   0x384DAB jnz     short loc_384D90
//   0x384DAD xor     edx, edx
//   0x384DAF add     rsp, 8
//   0x384DB3 mov     rax, rdx
//   0x384DB6 pop     rbx
//   0x384DB7 pop     rbp
//   0x384DB8 retn
//   0x384DB9 align 20h
//   0x384DC0 test    rbx, rbx
//   0x384DC3 jnz     short loc_384D6A
//   0x384DC5 xor     edx, edx
//   0x384DC7 jmp     short loc_384DAF
//   0x384DC9 align 10h
//   0x384DD0 mov     rax, [rbp+3F0h]
//   0x384DD7 xor     edx, edx
//   0x384DD9 cmp     qword ptr [rax+30h], 0
//   0x384DDE jz      short loc_384DAF
//   0x384DE0 mov     rax, [rax+28h]
//   0x384DE4 mov     rdx, [rax]
//   0x384DE7 add     rsp, 8
//   0x384DEB pop     rbx
//   0x384DEC pop     rbp
//   0x384DED mov     rax, rdx
//   0x384DF0 retn
// ============================================================

void sub_384D40(/* signature unknown */)
{
    // see disassembly above
}

