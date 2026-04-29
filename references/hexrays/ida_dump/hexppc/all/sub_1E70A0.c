// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x1E70A0
// Name:           sub_1E70A0
// Function size:  239 bytes (54 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x1E70A0 push    rbp
//   0x1E70A1 xor     ebp, ebp
//   0x1E70A3 push    rbx
//   0x1E70A4 sub     rsp, 38h
//   0x1E70A8 mov     rax, fs:28h
//   0x1E70B1 mov     [rsp+48h+var_20], rax
//   0x1E70B6 mov     rax, [rdi+40h]
//   0x1E70BA test    byte ptr [rax+4], 8
//   0x1E70BE jnz     short loc_1E70E0
//   0x1E70C0 mov     rax, [rsp+48h+var_20]
//   0x1E70C5 sub     rax, fs:28h
//   0x1E70CE jnz     loc_1E7182
//   0x1E70D4 add     rsp, 38h
//   0x1E70D8 mov     eax, ebp
//   0x1E70DA pop     rbx
//   0x1E70DB pop     rbp
//   0x1E70DC retn
//   0x1E70DD align 20h
//   0x1E70E0 mov     rdx, [rdi+30h]
//   0x1E70E4 xor     ecx, ecx
//   0x1E70E6 mov     rsi, rsp
//   0x1E70E9 mov     [rsp+48h+var_48], rax
//   0x1E70ED mov     [rsp+48h+var_40], 0
//   0x1E70F6 mov     rbx, rdi
//   0x1E70F9 mov     [rsp+48h+var_38], 0
//   0x1E7102 mov     [rsp+48h+var_30], 1
//   0x1E7107 call    sub_1E6BF0
//   0x1E710C lea     rsi, [rbx+1C0h]
//   0x1E7113 mov     rdi, rsp
//   0x1E7116 call    sub_1DD020
//   0x1E711B xor     ebp, ebp
//   0x1E711D test    al, al
//   0x1E711F jnz     short loc_1E7154
//   0x1E7121 lea     rdi, [rbx+1A8h]
//   0x1E7128 mov     ebp, 1
//   0x1E712D call    sub_13C270
//   0x1E7132 mov     byte ptr [rbx+1B8h], 1
//   0x1E7139 lea     rdi, [rbx+1C8h]
//   0x1E7140 call    sub_13C270
//   0x1E7145 mov     rax, [rbx+40h]
//   0x1E7149 mov     byte ptr [rbx+1D8h], 1
//   0x1E7150 and     dword ptr [rax+4], 0FFFFFFF7h
//   0x1E7154 cmp     [rsp+48h+var_40], 0
//   0x1E715A jz      loc_1E70C0
//   0x1E7160 lea     rdi, [rsp+48h+var_40]
//   0x1E7165 call    sub_13C270
//   0x1E716A mov     rdi, [rsp+48h+var_40]
//   0x1E716F test    rdi, rdi
//   0x1E7172 jz      loc_1E70C0
//   0x1E7178 call    _qfree
//   0x1E717D jmp     loc_1E70C0
//   0x1E7182 call    ___stack_chk_fail
//   0x1E7187 mov     rbx, rax
//   0x1E718A jmp     loc_41C0C
// ============================================================

void sub_1E70A0(/* signature unknown */)
{
    // see disassembly above
}

