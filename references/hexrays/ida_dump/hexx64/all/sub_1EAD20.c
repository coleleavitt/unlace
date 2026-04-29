// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x1EAD20
// Name:           sub_1EAD20
// Function size:  239 bytes (54 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x1EAD20 push    rbp
//   0x1EAD21 xor     ebp, ebp
//   0x1EAD23 push    rbx
//   0x1EAD24 sub     rsp, 38h
//   0x1EAD28 mov     rax, fs:28h
//   0x1EAD31 mov     [rsp+48h+var_20], rax
//   0x1EAD36 mov     rax, [rdi+40h]
//   0x1EAD3A test    byte ptr [rax+4], 8
//   0x1EAD3E jnz     short loc_1EAD60
//   0x1EAD40 mov     rax, [rsp+48h+var_20]
//   0x1EAD45 sub     rax, fs:28h
//   0x1EAD4E jnz     loc_1EAE02
//   0x1EAD54 add     rsp, 38h
//   0x1EAD58 mov     eax, ebp
//   0x1EAD5A pop     rbx
//   0x1EAD5B pop     rbp
//   0x1EAD5C retn
//   0x1EAD5D align 20h
//   0x1EAD60 mov     rdx, [rdi+30h]
//   0x1EAD64 xor     ecx, ecx
//   0x1EAD66 mov     rsi, rsp
//   0x1EAD69 mov     [rsp+48h+var_48], rax
//   0x1EAD6D mov     [rsp+48h+var_40], 0
//   0x1EAD76 mov     rbx, rdi
//   0x1EAD79 mov     [rsp+48h+var_38], 0
//   0x1EAD82 mov     [rsp+48h+var_30], 1
//   0x1EAD87 call    sub_1EA870
//   0x1EAD8C lea     rsi, [rbx+1C0h]
//   0x1EAD93 mov     rdi, rsp
//   0x1EAD96 call    sub_1E0CA0
//   0x1EAD9B xor     ebp, ebp
//   0x1EAD9D test    al, al
//   0x1EAD9F jnz     short loc_1EADD4
//   0x1EADA1 lea     rdi, [rbx+1A8h]
//   0x1EADA8 mov     ebp, 1
//   0x1EADAD call    sub_13FCB0
//   0x1EADB2 mov     byte ptr [rbx+1B8h], 1
//   0x1EADB9 lea     rdi, [rbx+1C8h]
//   0x1EADC0 call    sub_13FCB0
//   0x1EADC5 mov     rax, [rbx+40h]
//   0x1EADC9 mov     byte ptr [rbx+1D8h], 1
//   0x1EADD0 and     dword ptr [rax+4], 0FFFFFFF7h
//   0x1EADD4 cmp     [rsp+48h+var_40], 0
//   0x1EADDA jz      loc_1EAD40
//   0x1EADE0 lea     rdi, [rsp+48h+var_40]
//   0x1EADE5 call    sub_13FCB0
//   0x1EADEA mov     rdi, [rsp+48h+var_40]
//   0x1EADEF test    rdi, rdi
//   0x1EADF2 jz      loc_1EAD40
//   0x1EADF8 call    _qfree
//   0x1EADFD jmp     loc_1EAD40
//   0x1EAE02 call    ___stack_chk_fail
//   0x1EAE07 mov     rbx, rax
//   0x1EAE0A jmp     loc_42D90
// ============================================================

void sub_1EAD20(/* signature unknown */)
{
    // see disassembly above
}

