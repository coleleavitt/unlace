// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x1E6120
// Name:           sub_1E6120
// Function size:  239 bytes (54 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x1E6120 push    rbp
//   0x1E6121 xor     ebp, ebp
//   0x1E6123 push    rbx
//   0x1E6124 sub     rsp, 38h
//   0x1E6128 mov     rax, fs:28h
//   0x1E6131 mov     [rsp+48h+var_20], rax
//   0x1E6136 mov     rax, [rdi+40h]
//   0x1E613A test    byte ptr [rax+4], 8
//   0x1E613E jnz     short loc_1E6160
//   0x1E6140 mov     rax, [rsp+48h+var_20]
//   0x1E6145 sub     rax, fs:28h
//   0x1E614E jnz     loc_1E6202
//   0x1E6154 add     rsp, 38h
//   0x1E6158 mov     eax, ebp
//   0x1E615A pop     rbx
//   0x1E615B pop     rbp
//   0x1E615C retn
//   0x1E615D align 20h
//   0x1E6160 mov     rdx, [rdi+30h]
//   0x1E6164 xor     ecx, ecx
//   0x1E6166 mov     rsi, rsp
//   0x1E6169 mov     [rsp+48h+var_48], rax
//   0x1E616D mov     [rsp+48h+var_40], 0
//   0x1E6176 mov     rbx, rdi
//   0x1E6179 mov     [rsp+48h+var_38], 0
//   0x1E6182 mov     [rsp+48h+var_30], 1
//   0x1E6187 call    sub_1E5C70
//   0x1E618C lea     rsi, [rbx+1C0h]
//   0x1E6193 mov     rdi, rsp
//   0x1E6196 call    sub_1DC080
//   0x1E619B xor     ebp, ebp
//   0x1E619D test    al, al
//   0x1E619F jnz     short loc_1E61D4
//   0x1E61A1 lea     rdi, [rbx+1A8h]
//   0x1E61A8 mov     ebp, 1
//   0x1E61AD call    sub_13B7F0
//   0x1E61B2 mov     byte ptr [rbx+1B8h], 1
//   0x1E61B9 lea     rdi, [rbx+1C8h]
//   0x1E61C0 call    sub_13B7F0
//   0x1E61C5 mov     rax, [rbx+40h]
//   0x1E61C9 mov     byte ptr [rbx+1D8h], 1
//   0x1E61D0 and     dword ptr [rax+4], 0FFFFFFF7h
//   0x1E61D4 cmp     [rsp+48h+var_40], 0
//   0x1E61DA jz      loc_1E6140
//   0x1E61E0 lea     rdi, [rsp+48h+var_40]
//   0x1E61E5 call    sub_13B7F0
//   0x1E61EA mov     rdi, [rsp+48h+var_40]
//   0x1E61EF test    rdi, rdi
//   0x1E61F2 jz      loc_1E6140
//   0x1E61F8 call    _qfree
//   0x1E61FD jmp     loc_1E6140
//   0x1E6202 call    ___stack_chk_fail
//   0x1E6207 mov     rbx, rax
//   0x1E620A jmp     loc_41BA8
// ============================================================

void sub_1E6120(/* signature unknown */)
{
    // see disassembly above
}

