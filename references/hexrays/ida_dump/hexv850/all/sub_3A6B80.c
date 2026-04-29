// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x3A6B80
// Name:           sub_3A6B80
// Function size:  158 bytes (51 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x3A6B80 cmp     dword ptr [rdi+50h], 1
//   0x3A6B84 jnz     loc_3A6C18
//   0x3A6B8A push    r12
//   0x3A6B8C push    rbp
//   0x3A6B8D push    rbx
//   0x3A6B8E mov     rdx, [rdi+58h]
//   0x3A6B92 mov     rbx, rdi
//   0x3A6B95 mov     eax, [rdx+0Ch]
//   0x3A6B98 cmp     eax, 0FFFFFFFFh
//   0x3A6B9B jz      short loc_3A6BA3
//   0x3A6B9D cmp     dword ptr [rdi+78h], 49h ; 'I'
//   0x3A6BA1 jz      short loc_3A6BFC
//   0x3A6BA3 cmp     dword ptr [rdx+8], 51h ; 'Q'
//   0x3A6BA7 jnz     short loc_3A6C08
//   0x3A6BA9 mov     rcx, cs:callui_ptr
//   0x3A6BB0 mov     rsi, [rbx+8]
//   0x3A6BB4 xor     edx, edx
//   0x3A6BB6 xor     eax, eax
//   0x3A6BB8 mov     edi, 46h ; 'F'
//   0x3A6BBD call    qword ptr [rcx]
//   0x3A6BBF mov     r12, rax
//   0x3A6BC2 test    rax, rax
//   0x3A6BC5 jz      short loc_3A6C08
//   0x3A6BC7 lea     rsi, aGoto; "goto"
//   0x3A6BCE mov     rdi, rax; haystack
//   0x3A6BD1 call    _strstr
//   0x3A6BD6 mov     rbp, rax
//   0x3A6BD9 test    rax, rax
//   0x3A6BDC jz      short loc_3A6C08
//   0x3A6BDE mov     esi, [rbx+30h]
//   0x3A6BE1 mov     rdi, r12
//   0x3A6BE4 add     rbp, 5
//   0x3A6BE8 call    _tag_advance
//   0x3A6BED cmp     rbp, rax
//   0x3A6BF0 ja      short loc_3A6C08
//   0x3A6BF2 mov     rax, [rbx+58h]
//   0x3A6BF6 mov     rax, [rax+18h]
//   0x3A6BFA mov     eax, [rax]
//   0x3A6BFC pop     rbx
//   0x3A6BFD pop     rbp
//   0x3A6BFE pop     r12
//   0x3A6C00 retn
//   0x3A6C01 align 8
//   0x3A6C08 pop     rbx
//   0x3A6C09 mov     eax, 0FFFFFFFFh
//   0x3A6C0E pop     rbp
//   0x3A6C0F pop     r12
//   0x3A6C11 retn
//   0x3A6C12 align 8
//   0x3A6C18 mov     eax, 0FFFFFFFFh
//   0x3A6C1D retn
// ============================================================

void sub_3A6B80(/* signature unknown */)
{
    // see disassembly above
}

