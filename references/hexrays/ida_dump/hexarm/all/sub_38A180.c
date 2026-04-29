// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x38A180
// Name:           sub_38A180
// Function size:  177 bytes (55 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x38A180 push    rbp
//   0x38A181 xor     eax, eax
//   0x38A183 mov     rbp, rdi
//   0x38A186 mov     edi, 3Dh ; '='
//   0x38A18B push    rbx
//   0x38A18C sub     rsp, 8
//   0x38A190 mov     rdx, cs:callui_ptr
//   0x38A197 call    qword ptr [rdx]
//   0x38A199 mov     rbx, rax
//   0x38A19C call    _get_merge_state
//   0x38A1A1 test    al, 3
//   0x38A1A3 jz      short loc_38A200
//   0x38A1A5 test    rbx, rbx
//   0x38A1A8 jz      short loc_38A210
//   0x38A1AA mov     rdx, [rbp+3F0h]
//   0x38A1B1 mov     rax, [rdx+28h]
//   0x38A1B5 mov     rdx, [rdx+30h]
//   0x38A1B9 lea     rcx, [rax+rdx*8]
//   0x38A1BD cmp     rax, rcx
//   0x38A1C0 jz      short loc_38A1ED
//   0x38A1C2 nop     word ptr [rax+rax+00000000h]
//   0x38A1CD nop     dword ptr [rax]
//   0x38A1D0 mov     rdx, [rax]
//   0x38A1D3 test    rdx, rdx
//   0x38A1D6 jz      short loc_38A1E4
//   0x38A1D8 cmp     rbx, [rdx+8]
//   0x38A1DC jz      short loc_38A1EF
//   0x38A1DE cmp     rbx, [rdx+10h]
//   0x38A1E2 jz      short loc_38A1EF
//   0x38A1E4 add     rax, 8
//   0x38A1E8 cmp     rcx, rax
//   0x38A1EB jnz     short loc_38A1D0
//   0x38A1ED xor     edx, edx
//   0x38A1EF add     rsp, 8
//   0x38A1F3 mov     rax, rdx
//   0x38A1F6 pop     rbx
//   0x38A1F7 pop     rbp
//   0x38A1F8 retn
//   0x38A1F9 align 20h
//   0x38A200 test    rbx, rbx
//   0x38A203 jnz     short loc_38A1AA
//   0x38A205 xor     edx, edx
//   0x38A207 jmp     short loc_38A1EF
//   0x38A209 align 10h
//   0x38A210 mov     rax, [rbp+3F0h]
//   0x38A217 xor     edx, edx
//   0x38A219 cmp     qword ptr [rax+30h], 0
//   0x38A21E jz      short loc_38A1EF
//   0x38A220 mov     rax, [rax+28h]
//   0x38A224 mov     rdx, [rax]
//   0x38A227 add     rsp, 8
//   0x38A22B pop     rbx
//   0x38A22C pop     rbp
//   0x38A22D mov     rax, rdx
//   0x38A230 retn
// ============================================================

void sub_38A180(/* signature unknown */)
{
    // see disassembly above
}

