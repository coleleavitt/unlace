// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x38B430
// Name:           sub_38B430
// Function size:  83 bytes (29 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x38B430 mov     rax, [rdi+8]
//   0x38B434 test    rax, rax
//   0x38B437 jz      short loc_38B480
//   0x38B439 mov     r9, cs:callui_ptr
//   0x38B440 xor     edx, edx
//   0x38B442 test    esi, esi
//   0x38B444 push    rbx
//   0x38B445 setnz   dl
//   0x38B448 mov     rbx, rdi
//   0x38B44B lea     rcx, [rdi+30h]
//   0x38B44F mov     rsi, rax
//   0x38B452 lea     r8, [rdi+34h]
//   0x38B456 xor     eax, eax
//   0x38B458 mov     edi, 38h ; '8'
//   0x38B45D call    qword ptr [r9]
//   0x38B460 test    rax, rax
//   0x38B463 jz      short loc_38B478
//   0x38B465 mov     eax, [rax+0Ch]
//   0x38B468 mov     [rbx+2Ch], eax
//   0x38B46B mov     eax, 1
//   0x38B470 pop     rbx
//   0x38B471 retn
//   0x38B472 align 8
//   0x38B478 xor     eax, eax
//   0x38B47A pop     rbx
//   0x38B47B retn
//   0x38B47C align 20h
//   0x38B480 xor     eax, eax
//   0x38B482 retn
// ============================================================

void sub_38B430(/* signature unknown */)
{
    // see disassembly above
}

