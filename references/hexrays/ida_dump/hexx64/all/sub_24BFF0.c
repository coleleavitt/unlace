// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x24BFF0
// Name:           sub_24BFF0
// Function size:  451 bytes (114 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x24BFF0 push    rbp
//   0x24BFF1 mov     rbp, rsp
//   0x24BFF4 push    r15
//   0x24BFF6 push    r14
//   0x24BFF8 push    r13
//   0x24BFFA mov     r13d, edx
//   0x24BFFD push    r12
//   0x24BFFF mov     r12, rdi
//   0x24C002 push    rbx
//   0x24C003 mov     rbx, rcx
//   0x24C006 sub     rsp, 28h
//   0x24C00A mov     [rbp+var_48], rsi
//   0x24C00E cmp     byte ptr [rsi+30h], 0
//   0x24C012 mov     r14, fs:28h
//   0x24C01B mov     [rbp+var_38], r14
//   0x24C01F mov     r14d, r8d
//   0x24C022 jz      short loc_24C090
//   0x24C024 lea     r15, [rbp+var_40]
//   0x24C028 xor     r9d, r9d
//   0x24C02B xor     edx, edx
//   0x24C02D mov     [rbp+var_40], 0
//   0x24C035 mov     r8, r15
//   0x24C038 call    sub_24B3A0
//   0x24C03D mov     rdi, r15
//   0x24C040 mov     rbx, rax
//   0x24C043 call    _clear_tinfo_t
//   0x24C048 mov     rsi, [r12+148h]
//   0x24C050 mov     edx, r13d
//   0x24C053 mov     rdi, rbx
//   0x24C056 call    sub_2495A0
//   0x24C05B test    r14b, r14b
//   0x24C05E jnz     loc_24C150
//   0x24C064 mov     rax, [rbp+var_38]
//   0x24C068 sub     rax, fs:28h
//   0x24C071 jnz     loc_24C196
//   0x24C077 lea     rsp, [rbp-28h]
//   0x24C07B mov     rax, rbx
//   0x24C07E pop     rbx
//   0x24C07F pop     r12
//   0x24C081 pop     r13
//   0x24C083 pop     r14
//   0x24C085 pop     r15
//   0x24C087 pop     rbp
//   0x24C088 retn
//   0x24C089 align 10h
//   0x24C090 mov     rax, [rbp+var_48]
//   0x24C094 xor     r9d, r9d
//   0x24C097 mov     r8, rcx
//   0x24C09A mov     rsi, [rax+18h]
//   0x24C09E lea     rdx, [rax+20h]
//   0x24C0A2 call    sub_249AF0
//   0x24C0A7 mov     esi, 3
//   0x24C0AC mov     rdi, [rax+30h]
//   0x24C0B0 mov     r15, rax
//   0x24C0B3 call    _get_tinfo_property
//   0x24C0B8 cmp     eax, 1
//   0x24C0BB jnz     short loc_24C138
//   0x24C0BD mov     edi, 40h ; '@'
//   0x24C0C2 call    j__qalloc_or_throw
//   0x24C0C7 sub     rsp, 8
//   0x24C0CB xor     r8d, r8d
//   0x24C0CE xor     edx, edx
//   0x24C0D0 mov     rdi, [r12+148h]
//   0x24C0D8 push    0
//   0x24C0DA mov     r9d, 1
//   0x24C0E0 xor     esi, esi
//   0x24C0E2 mov     rcx, 0FFFFFFFFFFFFFFFFh
//   0x24C0E9 mov     rbx, rax
//   0x24C0EC call    sub_240F50
//   0x24C0F1 pop     rdx
//   0x24C0F2 pop     rcx
//   0x24C0F3 mov     [rbx+20h], rax
//   0x24C0F7 mov     rax, [rbp+var_48]
//   0x24C0FB mov     qword ptr [rbx], 0FFFFFFFFFFFFFFFFh
//   0x24C102 mov     [rbx+8], r13d
//   0x24C106 mov     qword ptr [rbx+0Ch], 0FFFFFFFFFFFFFFFFh
//   0x24C10E mov     [rbx+18h], r15
//   0x24C112 mov     qword ptr [rbx+28h], 0
//   0x24C11A mov     qword ptr [rbx+30h], 0
//   0x24C122 mov     dword ptr [rbx+38h], 0
//   0x24C129 mov     rax, [rax+18h]
//   0x24C12D mov     [rbx], rax
//   0x24C130 jmp     loc_24C048
//   0x24C135 align 8
//   0x24C138 mov     rdi, r15
//   0x24C13B mov     rsi, rbx
//   0x24C13E call    sub_244E70
//   0x24C143 mov     r15, rax
//   0x24C146 jmp     loc_24C0BD
//   0x24C14B align 10h
//   0x24C150 mov     r14, [rbp+var_48]
//   0x24C154 mov     rax, [r12+148h]
//   0x24C15C lea     r15, [rbp+var_40]
//   0x24C160 mov     rdi, r15
//   0x24C163 mov     edx, [r14+44h]
//   0x24C167 mov     rsi, [rax+70h]
//   0x24C16B call    sub_32C270
//   0x24C170 mov     rsi, [r14+18h]
//   0x24C174 lea     rdx, [r14+40h]
//   0x24C178 mov     r8, rbx
//   0x24C17B mov     rcx, r15
//   0x24C17E mov     rdi, r12
//   0x24C181 call    sub_24AA50
//   0x24C186 mov     rdi, r15
//   0x24C189 mov     rbx, rax
//   0x24C18C call    _clear_tinfo_t
//   0x24C191 jmp     loc_24C064
//   0x24C196 call    ___stack_chk_fail
//   0x24C19B mov     rbx, rax
//   0x24C19E jmp     loc_47E7A
//   0x24C1A3 mov     r15, rax
//   0x24C1A6 jmp     loc_47E99
//   0x24C1AB mov     rbx, rax
//   0x24C1AE jmp     loc_47EB8
// ============================================================

void sub_24BFF0(/* signature unknown */)
{
    // see disassembly above
}

