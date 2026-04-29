// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x1E64A0
// Name:           sub_1E64A0
// Function size:  239 bytes (54 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x1E64A0 push    rbp
//   0x1E64A1 xor     ebp, ebp
//   0x1E64A3 push    rbx
//   0x1E64A4 sub     rsp, 38h
//   0x1E64A8 mov     rax, fs:28h
//   0x1E64B1 mov     [rsp+48h+var_20], rax
//   0x1E64B6 mov     rax, [rdi+40h]
//   0x1E64BA test    byte ptr [rax+4], 8
//   0x1E64BE jnz     short loc_1E64E0
//   0x1E64C0 mov     rax, [rsp+48h+var_20]
//   0x1E64C5 sub     rax, fs:28h
//   0x1E64CE jnz     loc_1E6582
//   0x1E64D4 add     rsp, 38h
//   0x1E64D8 mov     eax, ebp
//   0x1E64DA pop     rbx
//   0x1E64DB pop     rbp
//   0x1E64DC retn
//   0x1E64DD align 20h
//   0x1E64E0 mov     rdx, [rdi+30h]
//   0x1E64E4 xor     ecx, ecx
//   0x1E64E6 mov     rsi, rsp
//   0x1E64E9 mov     [rsp+48h+var_48], rax
//   0x1E64ED mov     [rsp+48h+var_40], 0
//   0x1E64F6 mov     rbx, rdi
//   0x1E64F9 mov     [rsp+48h+var_38], 0
//   0x1E6502 mov     [rsp+48h+var_30], 1
//   0x1E6507 call    sub_1E5FF0
//   0x1E650C lea     rsi, [rbx+1C0h]
//   0x1E6513 mov     rdi, rsp
//   0x1E6516 call    sub_1DC400
//   0x1E651B xor     ebp, ebp
//   0x1E651D test    al, al
//   0x1E651F jnz     short loc_1E6554
//   0x1E6521 lea     rdi, [rbx+1A8h]
//   0x1E6528 mov     ebp, 1
//   0x1E652D call    sub_13BAB0
//   0x1E6532 mov     byte ptr [rbx+1B8h], 1
//   0x1E6539 lea     rdi, [rbx+1C8h]
//   0x1E6540 call    sub_13BAB0
//   0x1E6545 mov     rax, [rbx+40h]
//   0x1E6549 mov     byte ptr [rbx+1D8h], 1
//   0x1E6550 and     dword ptr [rax+4], 0FFFFFFF7h
//   0x1E6554 cmp     [rsp+48h+var_40], 0
//   0x1E655A jz      loc_1E64C0
//   0x1E6560 lea     rdi, [rsp+48h+var_40]
//   0x1E6565 call    sub_13BAB0
//   0x1E656A mov     rdi, [rsp+48h+var_40]
//   0x1E656F test    rdi, rdi
//   0x1E6572 jz      loc_1E64C0
//   0x1E6578 call    _qfree
//   0x1E657D jmp     loc_1E64C0
//   0x1E6582 call    ___stack_chk_fail
//   0x1E6587 mov     rbx, rax
//   0x1E658A jmp     loc_41BD6
// ============================================================

void sub_1E64A0(/* signature unknown */)
{
    // see disassembly above
}

