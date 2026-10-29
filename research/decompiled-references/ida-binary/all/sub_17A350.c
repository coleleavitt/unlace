// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x17A350
// Name:           sub_17A350
// Function size:  137 bytes (37 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x17A350 push    rbx
//   0x17A351 sub     rsp, 20h
//   0x17A355 mov     rbx, fs:28h
//   0x17A35E mov     [rsp+28h+var_10], rbx
//   0x17A363 mov     rbx, rsi
//   0x17A366 call    sub_1A1870
//   0x17A36B test    al, al
//   0x17A36D jnz     short loc_17A397
//   0x17A36F lea     rax, unk_8CD7E8
//   0x17A376 mov     rdi, [rax]
//   0x17A379 test    rdi, rdi
//   0x17A37C jz      short loc_17A397
//   0x17A37E mov     rdx, [rbx+58h]
//   0x17A382 mov     rsi, rsp
//   0x17A385 mov     ecx, 2
//   0x17A38A call    sub_27E0B0
//   0x17A38F lea     edx, [rax-1]
//   0x17A392 cmp     edx, 1
//   0x17A395 jbe     short loc_17A3C8
//   0x17A397 mov     rdx, [rbx+78h]
//   0x17A39B mov     eax, 7
//   0x17A3A0 test    rdx, rdx
//   0x17A3A3 jz      short loc_17A3AB
//   0x17A3A5 test    byte ptr [rdx+2Ch], 4
//   0x17A3A9 jnz     short loc_17A3CD
//   0x17A3AB mov     rdx, [rsp+28h+var_10]
//   0x17A3B0 sub     rdx, fs:28h
//   0x17A3B9 jnz     short loc_17A3D4
//   0x17A3BB add     rsp, 20h
//   0x17A3BF pop     rbx
//   0x17A3C0 retn
//   0x17A3C1 align 8
//   0x17A3C8 cmp     eax, 2
//   0x17A3CB jnz     short loc_17A397
//   0x17A3CD mov     eax, 3
//   0x17A3D2 jmp     short loc_17A3AB
//   0x17A3D4 call    ___stack_chk_fail
// ============================================================

void sub_17A350(/* signature unknown */)
{
    // see disassembly above
}

