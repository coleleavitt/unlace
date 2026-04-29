// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x1E39A0
// Name:           sub_1E39A0
// Function size:  239 bytes (54 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x1E39A0 push    rbp
//   0x1E39A1 xor     ebp, ebp
//   0x1E39A3 push    rbx
//   0x1E39A4 sub     rsp, 38h
//   0x1E39A8 mov     rax, fs:28h
//   0x1E39B1 mov     [rsp+48h+var_20], rax
//   0x1E39B6 mov     rax, [rdi+40h]
//   0x1E39BA test    byte ptr [rax+4], 8
//   0x1E39BE jnz     short loc_1E39E0
//   0x1E39C0 mov     rax, [rsp+48h+var_20]
//   0x1E39C5 sub     rax, fs:28h
//   0x1E39CE jnz     loc_1E3A82
//   0x1E39D4 add     rsp, 38h
//   0x1E39D8 mov     eax, ebp
//   0x1E39DA pop     rbx
//   0x1E39DB pop     rbp
//   0x1E39DC retn
//   0x1E39DD align 20h
//   0x1E39E0 mov     rdx, [rdi+30h]
//   0x1E39E4 xor     ecx, ecx
//   0x1E39E6 mov     rsi, rsp
//   0x1E39E9 mov     [rsp+48h+var_48], rax
//   0x1E39ED mov     [rsp+48h+var_40], 0
//   0x1E39F6 mov     rbx, rdi
//   0x1E39F9 mov     [rsp+48h+var_38], 0
//   0x1E3A02 mov     [rsp+48h+var_30], 1
//   0x1E3A07 call    sub_1E34F0
//   0x1E3A0C lea     rsi, [rbx+1C0h]
//   0x1E3A13 mov     rdi, rsp
//   0x1E3A16 call    sub_1D9900
//   0x1E3A1B xor     ebp, ebp
//   0x1E3A1D test    al, al
//   0x1E3A1F jnz     short loc_1E3A54
//   0x1E3A21 lea     rdi, [rbx+1A8h]
//   0x1E3A28 mov     ebp, 1
//   0x1E3A2D call    sub_1395F0
//   0x1E3A32 mov     byte ptr [rbx+1B8h], 1
//   0x1E3A39 lea     rdi, [rbx+1C8h]
//   0x1E3A40 call    sub_1395F0
//   0x1E3A45 mov     rax, [rbx+40h]
//   0x1E3A49 mov     byte ptr [rbx+1D8h], 1
//   0x1E3A50 and     dword ptr [rax+4], 0FFFFFFF7h
//   0x1E3A54 cmp     [rsp+48h+var_40], 0
//   0x1E3A5A jz      loc_1E39C0
//   0x1E3A60 lea     rdi, [rsp+48h+var_40]
//   0x1E3A65 call    sub_1395F0
//   0x1E3A6A mov     rdi, [rsp+48h+var_40]
//   0x1E3A6F test    rdi, rdi
//   0x1E3A72 jz      loc_1E39C0
//   0x1E3A78 call    _qfree
//   0x1E3A7D jmp     loc_1E39C0
//   0x1E3A82 call    ___stack_chk_fail
//   0x1E3A87 mov     rbx, rax
//   0x1E3A8A jmp     loc_40B00
// ============================================================

void sub_1E39A0(/* signature unknown */)
{
    // see disassembly above
}

