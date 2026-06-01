// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x3CF3D0
// Name:           sub_3CF3D0
// Function size:  93 bytes (31 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x3CF3D0 mov     rdx, [rsi+40h]
//   0x3CF3D4 test    rdx, rdx
//   0x3CF3D7 jz      short loc_3CF428
//   0x3CF3D9 mov     eax, [rdx+3Ch]
//   0x3CF3DC xor     ecx, ecx
//   0x3CF3DE sub     eax, 1
//   0x3CF3E1 cmp     eax, 1
//   0x3CF3E4 ja      short loc_3CF42A
//   0x3CF3E6 mov     rsi, [rdx+40h]
//   0x3CF3EA test    rsi, rsi
//   0x3CF3ED jz      short loc_3CF42A
//   0x3CF3EF push    rbx
//   0x3CF3F0 mov     rax, [rdi]
//   0x3CF3F3 mov     rbx, rdi
//   0x3CF3F6 call    qword ptr [rax+30h]
//   0x3CF3F9 mov     rcx, [rbx+28h]
//   0x3CF3FD mov     rsi, [rbx+18h]
//   0x3CF401 mov     edx, 1
//   0x3CF406 mov     r8, cs:callui_ptr
//   0x3CF40D test    al, al
//   0x3CF40F mov     edi, 8Ch
//   0x3CF414 cmovnz  rcx, [rbx+20h]
//   0x3CF419 xor     eax, eax
//   0x3CF41B call    qword ptr [r8]
//   0x3CF41E mov     eax, 1
//   0x3CF423 pop     rbx
//   0x3CF424 retn
//   0x3CF425 align 8
//   0x3CF428 xor     ecx, ecx
//   0x3CF42A mov     eax, ecx
//   0x3CF42C retn
// ============================================================

void sub_3CF3D0(/* signature unknown */)
{
    // see disassembly above
}

