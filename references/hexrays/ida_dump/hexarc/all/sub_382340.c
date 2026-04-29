// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x382340
// Name:           sub_382340
// Function size:  177 bytes (55 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x382340 push    rbp
//   0x382341 xor     eax, eax
//   0x382343 mov     rbp, rdi
//   0x382346 mov     edi, 3Dh ; '='
//   0x38234B push    rbx
//   0x38234C sub     rsp, 8
//   0x382350 mov     rdx, cs:callui_ptr
//   0x382357 call    qword ptr [rdx]
//   0x382359 mov     rbx, rax
//   0x38235C call    _get_merge_state
//   0x382361 test    al, 3
//   0x382363 jz      short loc_3823C0
//   0x382365 test    rbx, rbx
//   0x382368 jz      short loc_3823D0
//   0x38236A mov     rdx, [rbp+3F0h]
//   0x382371 mov     rax, [rdx+28h]
//   0x382375 mov     rdx, [rdx+30h]
//   0x382379 lea     rcx, [rax+rdx*8]
//   0x38237D cmp     rax, rcx
//   0x382380 jz      short loc_3823AD
//   0x382382 nop     word ptr [rax+rax+00000000h]
//   0x38238D nop     dword ptr [rax]
//   0x382390 mov     rdx, [rax]
//   0x382393 test    rdx, rdx
//   0x382396 jz      short loc_3823A4
//   0x382398 cmp     rbx, [rdx+8]
//   0x38239C jz      short loc_3823AF
//   0x38239E cmp     rbx, [rdx+10h]
//   0x3823A2 jz      short loc_3823AF
//   0x3823A4 add     rax, 8
//   0x3823A8 cmp     rcx, rax
//   0x3823AB jnz     short loc_382390
//   0x3823AD xor     edx, edx
//   0x3823AF add     rsp, 8
//   0x3823B3 mov     rax, rdx
//   0x3823B6 pop     rbx
//   0x3823B7 pop     rbp
//   0x3823B8 retn
//   0x3823B9 align 20h
//   0x3823C0 test    rbx, rbx
//   0x3823C3 jnz     short loc_38236A
//   0x3823C5 xor     edx, edx
//   0x3823C7 jmp     short loc_3823AF
//   0x3823C9 align 10h
//   0x3823D0 mov     rax, [rbp+3F0h]
//   0x3823D7 xor     edx, edx
//   0x3823D9 cmp     qword ptr [rax+30h], 0
//   0x3823DE jz      short loc_3823AF
//   0x3823E0 mov     rax, [rax+28h]
//   0x3823E4 mov     rdx, [rax]
//   0x3823E7 add     rsp, 8
//   0x3823EB pop     rbx
//   0x3823EC pop     rbp
//   0x3823ED mov     rax, rdx
//   0x3823F0 retn
// ============================================================

void sub_382340(/* signature unknown */)
{
    // see disassembly above
}

