// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x38A320
// Name:           sub_38A320
// Function size:  120 bytes (35 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x38A320 lea     rax, dword_4EB8F8
//   0x38A327 push    rbx
//   0x38A328 mov     rbx, rdi
//   0x38A32B mov     edi, [rax]
//   0x38A32D call    _get_module_data
//   0x38A332 mov     rdx, [rax+3F0h]
//   0x38A339 mov     rax, [rdx+28h]
//   0x38A33D mov     rdx, [rdx+30h]
//   0x38A341 lea     rcx, [rax+rdx*8]
//   0x38A345 cmp     rax, rcx
//   0x38A348 jz      short loc_38A36D
//   0x38A34A nop     word ptr [rax+rax+00h]
//   0x38A350 mov     rdx, [rax]
//   0x38A353 test    rdx, rdx
//   0x38A356 jz      short loc_38A364
//   0x38A358 cmp     rbx, [rdx+8]
//   0x38A35C jz      short loc_38A378
//   0x38A35E cmp     rbx, [rdx+10h]
//   0x38A362 jz      short loc_38A378
//   0x38A364 add     rax, 8
//   0x38A368 cmp     rcx, rax
//   0x38A36B jnz     short loc_38A350
//   0x38A36D xor     eax, eax
//   0x38A36F pop     rbx
//   0x38A370 retn
//   0x38A371 align 8
//   0x38A378 mov     rcx, cs:callui_ptr
//   0x38A37F mov     rsi, [rdx+10h]
//   0x38A383 mov     edi, 3Ah ; ':'
//   0x38A388 mov     edx, 9
//   0x38A38D xor     eax, eax
//   0x38A38F call    qword ptr [rcx]
//   0x38A391 mov     eax, 1
//   0x38A396 pop     rbx
//   0x38A397 retn
// ============================================================

void sub_38A320(/* signature unknown */)
{
    // see disassembly above
}

