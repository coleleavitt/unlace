// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x1EB0E0
// Name:           sub_1EB0E0
// Function size:  239 bytes (54 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x1EB0E0 push    rbp
//   0x1EB0E1 xor     ebp, ebp
//   0x1EB0E3 push    rbx
//   0x1EB0E4 sub     rsp, 38h
//   0x1EB0E8 mov     rax, fs:28h
//   0x1EB0F1 mov     [rsp+48h+var_20], rax
//   0x1EB0F6 mov     rax, [rdi+40h]
//   0x1EB0FA test    byte ptr [rax+4], 8
//   0x1EB0FE jnz     short loc_1EB120
//   0x1EB100 mov     rax, [rsp+48h+var_20]
//   0x1EB105 sub     rax, fs:28h
//   0x1EB10E jnz     loc_1EB1C2
//   0x1EB114 add     rsp, 38h
//   0x1EB118 mov     eax, ebp
//   0x1EB11A pop     rbx
//   0x1EB11B pop     rbp
//   0x1EB11C retn
//   0x1EB11D align 20h
//   0x1EB120 mov     rdx, [rdi+30h]
//   0x1EB124 xor     ecx, ecx
//   0x1EB126 mov     rsi, rsp
//   0x1EB129 mov     [rsp+48h+var_48], rax
//   0x1EB12D mov     [rsp+48h+var_40], 0
//   0x1EB136 mov     rbx, rdi
//   0x1EB139 mov     [rsp+48h+var_38], 0
//   0x1EB142 mov     [rsp+48h+var_30], 1
//   0x1EB147 call    sub_1EAC30
//   0x1EB14C lea     rsi, [rbx+1C0h]
//   0x1EB153 mov     rdi, rsp
//   0x1EB156 call    sub_1E1060
//   0x1EB15B xor     ebp, ebp
//   0x1EB15D test    al, al
//   0x1EB15F jnz     short loc_1EB194
//   0x1EB161 lea     rdi, [rbx+1A8h]
//   0x1EB168 mov     ebp, 1
//   0x1EB16D call    sub_13F6F0
//   0x1EB172 mov     byte ptr [rbx+1B8h], 1
//   0x1EB179 lea     rdi, [rbx+1C8h]
//   0x1EB180 call    sub_13F6F0
//   0x1EB185 mov     rax, [rbx+40h]
//   0x1EB189 mov     byte ptr [rbx+1D8h], 1
//   0x1EB190 and     dword ptr [rax+4], 0FFFFFFF7h
//   0x1EB194 cmp     [rsp+48h+var_40], 0
//   0x1EB19A jz      loc_1EB100
//   0x1EB1A0 lea     rdi, [rsp+48h+var_40]
//   0x1EB1A5 call    sub_13F6F0
//   0x1EB1AA mov     rdi, [rsp+48h+var_40]
//   0x1EB1AF test    rdi, rdi
//   0x1EB1B2 jz      loc_1EB100
//   0x1EB1B8 call    _qfree
//   0x1EB1BD jmp     loc_1EB100
//   0x1EB1C2 call    ___stack_chk_fail
//   0x1EB1C7 mov     rbx, rax
//   0x1EB1CA jmp     loc_44D44
// ============================================================

void sub_1EB0E0(/* signature unknown */)
{
    // see disassembly above
}

