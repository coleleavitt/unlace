// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0xB3F40
// Name:           sub_B3F40
// Function size:  324 bytes (86 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0xB3F40 push    rbp
//   0xB3F41 push    rbx
//   0xB3F42 mov     rbx, rdi
//   0xB3F45 sub     rsp, 8
//   0xB3F49 mov     rdx, [rdi+20h]
//   0xB3F4D mov     rdi, [rdi+28h]
//   0xB3F51 mov     eax, [rdi+44h]
//   0xB3F54 cmp     [rdx+44h], eax
//   0xB3F57 jle     short loc_B3F68
//   0xB3F59 add     rsp, 8
//   0xB3F5D xor     eax, eax
//   0xB3F5F pop     rbx
//   0xB3F60 pop     rbp
//   0xB3F61 retn
//   0xB3F62 align 8
//   0xB3F68 mov     rax, [rbx+8]
//   0xB3F6C mov     ecx, 9
//   0xB3F71 mov     rbp, [rax+5E0h]
//   0xB3F78 mov     rsi, rbp
//   0xB3F7B call    sub_122150
//   0xB3F80 mov     rdi, [rbx+28h]
//   0xB3F84 test    al, al
//   0xB3F86 jz      short loc_B3FE0
//   0xB3F88 mov     rax, [rbx+20h]
//   0xB3F8C mov     ecx, [rdi+44h]
//   0xB3F8F mov     edx, 0Ah
//   0xB3F94 cmp     [rax+44h], ecx
//   0xB3F97 jz      loc_B4060
//   0xB3F9D mov     [rax], edx
//   0xB3F9F mov     rax, [rbx+28h]
//   0xB3FA3 lea     rsi, [rax+40h]
//   0xB3FA7 mov     rax, [rbx+20h]
//   0xB3FAB lea     rdi, [rax+20h]
//   0xB3FAF call    sub_121740
//   0xB3FB4 mov     rax, [rbx+20h]
//   0xB3FB8 lea     rdi, [rax+30h]
//   0xB3FBC call    sub_119360
//   0xB3FC1 mov     rdi, [rbx+20h]
//   0xB3FC5 cmp     dword ptr [rdi], 0Ah
//   0xB3FC8 jz      loc_B4070
//   0xB3FCE add     dword ptr [rbx+30h], 1
//   0xB3FD2 add     rsp, 8
//   0xB3FD6 xor     eax, eax
//   0xB3FD8 pop     rbx
//   0xB3FD9 pop     rbp
//   0xB3FDA retn
//   0xB3FDB align 20h
//   0xB3FE0 cmp     dword ptr [rdi], 0Dh
//   0xB3FE3 jnz     loc_B3F59
//   0xB3FE9 mov     rdx, [rbx+20h]
//   0xB3FED mov     eax, [rdx]
//   0xB3FEF sub     eax, 2Bh ; '+'
//   0xB3FF2 cmp     eax, 1
//   0xB3FF5 ja      loc_B3F59
//   0xB3FFB mov     ecx, 2
//   0xB4000 mov     rsi, rbp
//   0xB4003 call    sub_122150
//   0xB4008 test    al, al
//   0xB400A jz      loc_B3F59
//   0xB4010 mov     rax, [rbx+28h]
//   0xB4014 lea     rsi, [rax+40h]
//   0xB4018 mov     rax, [rbx+20h]
//   0xB401C lea     rdi, [rax+20h]
//   0xB4020 call    sub_121740
//   0xB4025 mov     rax, [rbx+20h]
//   0xB4029 lea     rdi, [rax+30h]
//   0xB402D call    sub_119360
//   0xB4032 mov     rax, [rbx+20h]
//   0xB4036 xor     r9d, r9d
//   0xB4039 xor     edx, edx
//   0xB403B mov     r8, 0FFFFFFFFFFFFFFFFh
//   0xB4042 mov     rsi, rbp
//   0xB4045 mov     ecx, [rax+24h]
//   0xB4048 lea     rdi, [rax+30h]
//   0xB404C call    sub_11CFD0
//   0xB4051 jmp     loc_B3FCE
//   0xB4056 align 20h
//   0xB4060 mov     edx, 4
//   0xB4065 jmp     loc_B3F9D
//   0xB406A align 10h
//   0xB4070 xor     r8d, r8d
//   0xB4073 xor     ecx, ecx
//   0xB4075 xor     edx, edx
//   0xB4077 mov     rsi, rbp
//   0xB407A call    sub_129E40
//   0xB407F jmp     loc_B3FCE
// ============================================================

void sub_B3F40(/* signature unknown */)
{
    // see disassembly above
}

