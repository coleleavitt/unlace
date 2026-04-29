// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x385410
// Name:           sub_385410
// Function size:  179 bytes (58 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x385410 mov     rax, [rdi+8]
//   0x385414 mov     dword ptr [rdi+38h], 0
//   0x38541B mov     dword ptr [rdi+50h], 0
//   0x385422 mov     dword ptr [rdi+68h], 0
//   0x385429 test    rax, rax
//   0x38542C jz      loc_3854C0
//   0x385432 push    r12
//   0x385434 xor     r12d, r12d
//   0x385437 test    esi, esi
//   0x385439 lea     rcx, [rdi+30h]
//   0x38543D push    rbp
//   0x38543E mov     rbp, cs:callui_ptr
//   0x385445 setnz   r12b
//   0x385449 lea     r8, [rdi+34h]
//   0x38544D push    rbx
//   0x38544E mov     rsi, rax
//   0x385451 mov     rbx, rdi
//   0x385454 xor     eax, eax
//   0x385456 mov     edx, r12d
//   0x385459 mov     edi, 38h ; '8'
//   0x38545E call    qword ptr [rbp+0]
//   0x385461 test    rax, rax
//   0x385464 jz      short loc_3854B8
//   0x385466 mov     eax, [rax+0Ch]
//   0x385469 mov     rsi, [rbx+8]
//   0x38546D mov     edx, r12d
//   0x385470 mov     edi, 46h ; 'F'
//   0x385475 mov     [rbx+2Ch], eax
//   0x385478 xor     eax, eax
//   0x38547A call    qword ptr [rbp+0]
//   0x38547D mov     rdi, [rbx+20h]
//   0x385481 xor     ecx, ecx
//   0x385483 mov     edx, [rbx+30h]
//   0x385486 mov     rsi, rax
//   0x385489 lea     r9, [rbx+50h]
//   0x38548D lea     r8, [rbx+38h]
//   0x385491 mov     eax, [rdi+98h]
//   0x385497 cmp     [rbx+2Ch], eax
//   0x38549A lea     rax, [rbx+68h]
//   0x38549E setnl   cl
//   0x3854A1 sub     rsp, 8
//   0x3854A5 push    rax
//   0x3854A6 call    sub_384710
//   0x3854AB pop     rdx
//   0x3854AC pop     rcx
//   0x3854AD pop     rbx
//   0x3854AE pop     rbp
//   0x3854AF pop     r12
//   0x3854B1 retn
//   0x3854B2 align 8
//   0x3854B8 pop     rbx
//   0x3854B9 xor     eax, eax
//   0x3854BB pop     rbp
//   0x3854BC pop     r12
//   0x3854BE retn
//   0x3854BF align 20h
//   0x3854C0 xor     eax, eax
//   0x3854C2 retn
// ============================================================

void sub_385410(/* signature unknown */)
{
    // see disassembly above
}

