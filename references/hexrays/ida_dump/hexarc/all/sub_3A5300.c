// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x3A5300
// Name:           sub_3A5300
// Function size:  158 bytes (51 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x3A5300 cmp     dword ptr [rdi+50h], 1
//   0x3A5304 jnz     loc_3A5398
//   0x3A530A push    r12
//   0x3A530C push    rbp
//   0x3A530D push    rbx
//   0x3A530E mov     rdx, [rdi+58h]
//   0x3A5312 mov     rbx, rdi
//   0x3A5315 mov     eax, [rdx+0Ch]
//   0x3A5318 cmp     eax, 0FFFFFFFFh
//   0x3A531B jz      short loc_3A5323
//   0x3A531D cmp     dword ptr [rdi+78h], 49h ; 'I'
//   0x3A5321 jz      short loc_3A537C
//   0x3A5323 cmp     dword ptr [rdx+8], 51h ; 'Q'
//   0x3A5327 jnz     short loc_3A5388
//   0x3A5329 mov     rcx, cs:callui_ptr
//   0x3A5330 mov     rsi, [rbx+8]
//   0x3A5334 xor     edx, edx
//   0x3A5336 xor     eax, eax
//   0x3A5338 mov     edi, 46h ; 'F'
//   0x3A533D call    qword ptr [rcx]
//   0x3A533F mov     r12, rax
//   0x3A5342 test    rax, rax
//   0x3A5345 jz      short loc_3A5388
//   0x3A5347 lea     rsi, aGoto; "goto"
//   0x3A534E mov     rdi, rax; haystack
//   0x3A5351 call    _strstr
//   0x3A5356 mov     rbp, rax
//   0x3A5359 test    rax, rax
//   0x3A535C jz      short loc_3A5388
//   0x3A535E mov     esi, [rbx+30h]
//   0x3A5361 mov     rdi, r12
//   0x3A5364 add     rbp, 5
//   0x3A5368 call    _tag_advance
//   0x3A536D cmp     rbp, rax
//   0x3A5370 ja      short loc_3A5388
//   0x3A5372 mov     rax, [rbx+58h]
//   0x3A5376 mov     rax, [rax+18h]
//   0x3A537A mov     eax, [rax]
//   0x3A537C pop     rbx
//   0x3A537D pop     rbp
//   0x3A537E pop     r12
//   0x3A5380 retn
//   0x3A5381 align 8
//   0x3A5388 pop     rbx
//   0x3A5389 mov     eax, 0FFFFFFFFh
//   0x3A538E pop     rbp
//   0x3A538F pop     r12
//   0x3A5391 retn
//   0x3A5392 align 8
//   0x3A5398 mov     eax, 0FFFFFFFFh
//   0x3A539D retn
// ============================================================

void sub_3A5300(/* signature unknown */)
{
    // see disassembly above
}

