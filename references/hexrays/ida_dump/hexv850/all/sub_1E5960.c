// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x1E5960
// Name:           sub_1E5960
// Function size:  239 bytes (54 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x1E5960 push    rbp
//   0x1E5961 xor     ebp, ebp
//   0x1E5963 push    rbx
//   0x1E5964 sub     rsp, 38h
//   0x1E5968 mov     rax, fs:28h
//   0x1E5971 mov     [rsp+48h+var_20], rax
//   0x1E5976 mov     rax, [rdi+40h]
//   0x1E597A test    byte ptr [rax+4], 8
//   0x1E597E jnz     short loc_1E59A0
//   0x1E5980 mov     rax, [rsp+48h+var_20]
//   0x1E5985 sub     rax, fs:28h
//   0x1E598E jnz     loc_1E5A42
//   0x1E5994 add     rsp, 38h
//   0x1E5998 mov     eax, ebp
//   0x1E599A pop     rbx
//   0x1E599B pop     rbp
//   0x1E599C retn
//   0x1E599D align 20h
//   0x1E59A0 mov     rdx, [rdi+30h]
//   0x1E59A4 xor     ecx, ecx
//   0x1E59A6 mov     rsi, rsp
//   0x1E59A9 mov     [rsp+48h+var_48], rax
//   0x1E59AD mov     [rsp+48h+var_40], 0
//   0x1E59B6 mov     rbx, rdi
//   0x1E59B9 mov     [rsp+48h+var_38], 0
//   0x1E59C2 mov     [rsp+48h+var_30], 1
//   0x1E59C7 call    sub_1E54B0
//   0x1E59CC lea     rsi, [rbx+1C0h]
//   0x1E59D3 mov     rdi, rsp
//   0x1E59D6 call    sub_1DB8C0
//   0x1E59DB xor     ebp, ebp
//   0x1E59DD test    al, al
//   0x1E59DF jnz     short loc_1E5A14
//   0x1E59E1 lea     rdi, [rbx+1A8h]
//   0x1E59E8 mov     ebp, 1
//   0x1E59ED call    sub_13B0F0
//   0x1E59F2 mov     byte ptr [rbx+1B8h], 1
//   0x1E59F9 lea     rdi, [rbx+1C8h]
//   0x1E5A00 call    sub_13B0F0
//   0x1E5A05 mov     rax, [rbx+40h]
//   0x1E5A09 mov     byte ptr [rbx+1D8h], 1
//   0x1E5A10 and     dword ptr [rax+4], 0FFFFFFF7h
//   0x1E5A14 cmp     [rsp+48h+var_40], 0
//   0x1E5A1A jz      loc_1E5980
//   0x1E5A20 lea     rdi, [rsp+48h+var_40]
//   0x1E5A25 call    sub_13B0F0
//   0x1E5A2A mov     rdi, [rsp+48h+var_40]
//   0x1E5A2F test    rdi, rdi
//   0x1E5A32 jz      loc_1E5980
//   0x1E5A38 call    _qfree
//   0x1E5A3D jmp     loc_1E5980
//   0x1E5A42 call    ___stack_chk_fail
//   0x1E5A47 mov     rbx, rax
//   0x1E5A4A jmp     loc_41B7A
// ============================================================

void sub_1E5960(/* signature unknown */)
{
    // see disassembly above
}

