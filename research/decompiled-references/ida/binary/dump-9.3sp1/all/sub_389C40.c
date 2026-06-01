// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x389C40
// Name:           sub_389C40
// Function size:  177 bytes (55 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x389C40 push    rbp
//   0x389C41 xor     eax, eax
//   0x389C43 mov     rbp, rdi
//   0x389C46 mov     edi, 3Dh ; '='
//   0x389C4B push    rbx
//   0x389C4C sub     rsp, 8
//   0x389C50 mov     rdx, cs:callui_ptr
//   0x389C57 call    qword ptr [rdx]
//   0x389C59 mov     rbx, rax
//   0x389C5C call    _get_merge_state
//   0x389C61 test    al, 3
//   0x389C63 jz      short loc_389CC0
//   0x389C65 test    rbx, rbx
//   0x389C68 jz      short loc_389CD0
//   0x389C6A mov     rdx, [rbp+3F0h]
//   0x389C71 mov     rax, [rdx+28h]
//   0x389C75 mov     rdx, [rdx+30h]
//   0x389C79 lea     rcx, [rax+rdx*8]
//   0x389C7D cmp     rax, rcx
//   0x389C80 jz      short loc_389CAD
//   0x389C82 nop     word ptr [rax+rax+00000000h]
//   0x389C8D nop     dword ptr [rax]
//   0x389C90 mov     rdx, [rax]
//   0x389C93 test    rdx, rdx
//   0x389C96 jz      short loc_389CA4
//   0x389C98 cmp     rbx, [rdx+8]
//   0x389C9C jz      short loc_389CAF
//   0x389C9E cmp     rbx, [rdx+10h]
//   0x389CA2 jz      short loc_389CAF
//   0x389CA4 add     rax, 8
//   0x389CA8 cmp     rcx, rax
//   0x389CAB jnz     short loc_389C90
//   0x389CAD xor     edx, edx
//   0x389CAF add     rsp, 8
//   0x389CB3 mov     rax, rdx
//   0x389CB6 pop     rbx
//   0x389CB7 pop     rbp
//   0x389CB8 retn
//   0x389CB9 align 20h
//   0x389CC0 test    rbx, rbx
//   0x389CC3 jnz     short loc_389C6A
//   0x389CC5 xor     edx, edx
//   0x389CC7 jmp     short loc_389CAF
//   0x389CC9 align 10h
//   0x389CD0 mov     rax, [rbp+3F0h]
//   0x389CD7 xor     edx, edx
//   0x389CD9 cmp     qword ptr [rax+30h], 0
//   0x389CDE jz      short loc_389CAF
//   0x389CE0 mov     rax, [rax+28h]
//   0x389CE4 mov     rdx, [rax]
//   0x389CE7 add     rsp, 8
//   0x389CEB pop     rbx
//   0x389CEC pop     rbp
//   0x389CED mov     rax, rdx
//   0x389CF0 retn
// ============================================================

void sub_389C40(/* signature unknown */)
{
    // see disassembly above
}

