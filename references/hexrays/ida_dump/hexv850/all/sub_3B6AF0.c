// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x3B6AF0
// Name:           sub_3B6AF0
// Function size:  137 bytes (43 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x3B6AF0 push    rbp
//   0x3B6AF1 push    rbx
//   0x3B6AF2 mov     rbx, rdi
//   0x3B6AF5 sub     rsp, 8
//   0x3B6AF9 mov     rbp, [rsi]
//   0x3B6AFC mov     rdi, [rdi+10h]
//   0x3B6B00 mov     rsi, rbp
//   0x3B6B03 call    sub_383B70
//   0x3B6B08 test    rax, rax
//   0x3B6B0B jz      short loc_3B6B68
//   0x3B6B0D mov     rsi, rax
//   0x3B6B10 mov     eax, [rbx+18h]
//   0x3B6B13 test    eax, eax
//   0x3B6B15 jz      short loc_3B6B27
//   0x3B6B17 cmp     eax, 1
//   0x3B6B1A jnz     short loc_3B6B74
//   0x3B6B1C mov     eax, 6
//   0x3B6B21 cmp     rbp, [rsi+8]
//   0x3B6B25 jnz     short loc_3B6B5A
//   0x3B6B27 mov     rax, [rbx]
//   0x3B6B2A mov     rdi, rbx
//   0x3B6B2D call    qword ptr [rax+30h]
//   0x3B6B30 mov     rcx, [rbx+30h]
//   0x3B6B34 mov     rsi, [rbx+20h]
//   0x3B6B38 mov     edx, 1
//   0x3B6B3D mov     r8, cs:callui_ptr
//   0x3B6B44 test    al, al
//   0x3B6B46 mov     edi, 8Ch
//   0x3B6B4B cmovnz  rcx, [rbx+28h]
//   0x3B6B50 xor     eax, eax
//   0x3B6B52 call    qword ptr [r8]
//   0x3B6B55 mov     eax, 3
//   0x3B6B5A add     rsp, 8
//   0x3B6B5E pop     rbx
//   0x3B6B5F pop     rbp
//   0x3B6B60 retn
//   0x3B6B61 align 8
//   0x3B6B68 add     rsp, 8
//   0x3B6B6C mov     eax, 6
//   0x3B6B71 pop     rbx
//   0x3B6B72 pop     rbp
//   0x3B6B73 retn
//   0x3B6B74 call    sub_3B4950
// ============================================================

void sub_3B6AF0(/* signature unknown */)
{
    // see disassembly above
}

