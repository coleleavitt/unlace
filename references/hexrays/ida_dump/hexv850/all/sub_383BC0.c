// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x383BC0
// Name:           sub_383BC0
// Function size:  177 bytes (55 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x383BC0 push    rbp
//   0x383BC1 xor     eax, eax
//   0x383BC3 mov     rbp, rdi
//   0x383BC6 mov     edi, 3Dh ; '='
//   0x383BCB push    rbx
//   0x383BCC sub     rsp, 8
//   0x383BD0 mov     rdx, cs:callui_ptr
//   0x383BD7 call    qword ptr [rdx]
//   0x383BD9 mov     rbx, rax
//   0x383BDC call    _get_merge_state
//   0x383BE1 test    al, 3
//   0x383BE3 jz      short loc_383C40
//   0x383BE5 test    rbx, rbx
//   0x383BE8 jz      short loc_383C50
//   0x383BEA mov     rdx, [rbp+3F0h]
//   0x383BF1 mov     rax, [rdx+28h]
//   0x383BF5 mov     rdx, [rdx+30h]
//   0x383BF9 lea     rcx, [rax+rdx*8]
//   0x383BFD cmp     rax, rcx
//   0x383C00 jz      short loc_383C2D
//   0x383C02 nop     word ptr [rax+rax+00000000h]
//   0x383C0D nop     dword ptr [rax]
//   0x383C10 mov     rdx, [rax]
//   0x383C13 test    rdx, rdx
//   0x383C16 jz      short loc_383C24
//   0x383C18 cmp     rbx, [rdx+8]
//   0x383C1C jz      short loc_383C2F
//   0x383C1E cmp     rbx, [rdx+10h]
//   0x383C22 jz      short loc_383C2F
//   0x383C24 add     rax, 8
//   0x383C28 cmp     rcx, rax
//   0x383C2B jnz     short loc_383C10
//   0x383C2D xor     edx, edx
//   0x383C2F add     rsp, 8
//   0x383C33 mov     rax, rdx
//   0x383C36 pop     rbx
//   0x383C37 pop     rbp
//   0x383C38 retn
//   0x383C39 align 20h
//   0x383C40 test    rbx, rbx
//   0x383C43 jnz     short loc_383BEA
//   0x383C45 xor     edx, edx
//   0x383C47 jmp     short loc_383C2F
//   0x383C49 align 10h
//   0x383C50 mov     rax, [rbp+3F0h]
//   0x383C57 xor     edx, edx
//   0x383C59 cmp     qword ptr [rax+30h], 0
//   0x383C5E jz      short loc_383C2F
//   0x383C60 mov     rax, [rax+28h]
//   0x383C64 mov     rdx, [rax]
//   0x383C67 add     rsp, 8
//   0x383C6B pop     rbx
//   0x383C6C pop     rbp
//   0x383C6D mov     rax, rdx
//   0x383C70 retn
// ============================================================

void sub_383BC0(/* signature unknown */)
{
    // see disassembly above
}

