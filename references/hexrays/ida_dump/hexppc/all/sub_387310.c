// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x387310
// Name:           sub_387310
// Function size:  179 bytes (58 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x387310 mov     rax, [rdi+8]
//   0x387314 mov     dword ptr [rdi+38h], 0
//   0x38731B mov     dword ptr [rdi+50h], 0
//   0x387322 mov     dword ptr [rdi+68h], 0
//   0x387329 test    rax, rax
//   0x38732C jz      loc_3873C0
//   0x387332 push    r12
//   0x387334 xor     r12d, r12d
//   0x387337 test    esi, esi
//   0x387339 lea     rcx, [rdi+30h]
//   0x38733D push    rbp
//   0x38733E mov     rbp, cs:callui_ptr
//   0x387345 setnz   r12b
//   0x387349 lea     r8, [rdi+34h]
//   0x38734D push    rbx
//   0x38734E mov     rsi, rax
//   0x387351 mov     rbx, rdi
//   0x387354 xor     eax, eax
//   0x387356 mov     edx, r12d
//   0x387359 mov     edi, 38h ; '8'
//   0x38735E call    qword ptr [rbp+0]
//   0x387361 test    rax, rax
//   0x387364 jz      short loc_3873B8
//   0x387366 mov     eax, [rax+0Ch]
//   0x387369 mov     rsi, [rbx+8]
//   0x38736D mov     edx, r12d
//   0x387370 mov     edi, 46h ; 'F'
//   0x387375 mov     [rbx+2Ch], eax
//   0x387378 xor     eax, eax
//   0x38737A call    qword ptr [rbp+0]
//   0x38737D mov     rdi, [rbx+20h]
//   0x387381 xor     ecx, ecx
//   0x387383 mov     edx, [rbx+30h]
//   0x387386 mov     rsi, rax
//   0x387389 lea     r9, [rbx+50h]
//   0x38738D lea     r8, [rbx+38h]
//   0x387391 mov     eax, [rdi+98h]
//   0x387397 cmp     [rbx+2Ch], eax
//   0x38739A lea     rax, [rbx+68h]
//   0x38739E setnl   cl
//   0x3873A1 sub     rsp, 8
//   0x3873A5 push    rax
//   0x3873A6 call    sub_386610
//   0x3873AB pop     rdx
//   0x3873AC pop     rcx
//   0x3873AD pop     rbx
//   0x3873AE pop     rbp
//   0x3873AF pop     r12
//   0x3873B1 retn
//   0x3873B2 align 8
//   0x3873B8 pop     rbx
//   0x3873B9 xor     eax, eax
//   0x3873BB pop     rbp
//   0x3873BC pop     r12
//   0x3873BE retn
//   0x3873BF align 20h
//   0x3873C0 xor     eax, eax
//   0x3873C2 retn
// ============================================================

void sub_387310(/* signature unknown */)
{
    // see disassembly above
}

