// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x60BFC0
// Name:           sub_60BFC0
// Function size:  829 bytes (213 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x60BFC0 push    r15; int
//   0x60BFC2 push    r14; int
//   0x60BFC4 mov     r14d, r9d
//   0x60BFC7 push    r13; __int64
//   0x60BFC9 and     r14d, 4
//   0x60BFCD mov     r13, r8
//   0x60BFD0 push    r12; ptr
//   0x60BFD2 mov     r12, rdi
//   0x60BFD5 push    rbp; int
//   0x60BFD6 mov     rbp, rsi
//   0x60BFD9 push    rbx; int
//   0x60BFDA mov     rbx, rdx
//   0x60BFDD mov     rdx, rcx
//   0x60BFE0 sub     rsp, 48h
//   0x60BFE4 mov     rax, fs:28h
//   0x60BFED mov     [rsp+78h+var_40], rax; void *
//   0x60BFF2 xor     eax, eax
//   0x60BFF4 and     edx, 600h
//   0x60BFFA jz      short loc_60C018
//   0x60BFFC cmp     rbx, 1
//   0x60C000 cmovz   rbx, rax
//   0x60C004 test    r14d, r14d
//   0x60C007 jz      short loc_60C080
//   0x60C009 mov     eax, 1
//   0x60C00E jmp     loc_60C154
//   0x60C013 align 8
//   0x60C018 mov     rdi, [rdi]
//   0x60C01B mov     esi, 34h ; '4'
//   0x60C020 call    sub_631AD0
//   0x60C025 xor     edx, edx
//   0x60C027 mov     rdi, rbp
//   0x60C02A mov     esi, eax
//   0x60C02C mov     r15d, eax
//   0x60C02F call    _get_max_strlit_length
//   0x60C034 test    r14d, r14d
//   0x60C037 jnz     loc_60C148
//   0x60C03D cmp     rax, rbx
//   0x60C040 jnb     loc_60C1D0
//   0x60C046 cmp     rbx, 1
//   0x60C04A jz      loc_60C208
//   0x60C050 mov     rcx, 0FFFFFFFFFFFFFFFFh
//   0x60C057 mov     rdx, rbx
//   0x60C05A xor     esi, esi
//   0x60C05C mov     rdi, rbp
//   0x60C05F call    _create_data
//   0x60C064 mov     edx, 4
//   0x60C069 mov     rsi, rbp
//   0x60C06C mov     rdi, r12
//   0x60C06F call    sub_3BE900
//   0x60C074 mov     rdx, rax
//   0x60C077 mov     rcx, rax
//   0x60C07A and     edx, 600h
//   0x60C080 cmp     rdx, 400h
//   0x60C087 jz      loc_60C1B0
//   0x60C08D mov     rdi, rbp
//   0x60C090 call    _get_item_end
//   0x60C095 sub     rax, rbp
//   0x60C098 cmp     rax, 1
//   0x60C09C jz      loc_60C009
//   0x60C0A2 mov     rdi, [r13+0]
//   0x60C0A6 mov     esi, 2
//   0x60C0AB call    _get_tinfo_property
//   0x60C0B0 and     eax, 0Fh
//   0x60C0B3 cmp     al, 0Bh
//   0x60C0B5 jz      loc_60C009
//   0x60C0BB lea     r14, [rsp+78h+var_58]
//   0x60C0C0 mov     rsi, r13
//   0x60C0C3 mov     [rsp+78h+var_50], 0
//   0x60C0CC mov     rdi, r14
//   0x60C0CF mov     dword ptr [rsp+78h+var_50+4], ebx
//   0x60C0D3 lea     rbx, [rsp+78h+var_60]
//   0x60C0D8 mov     [rsp+78h+var_60], 0
//   0x60C0E1 mov     [rsp+78h+var_58], 0
//   0x60C0EA call    _copy_tinfo_t
//   0x60C0EF mov     rcx, r14
//   0x60C0F2 mov     edx, 0Bh
//   0x60C0F7 mov     esi, 0Bh
//   0x60C0FC mov     rdi, rbx
//   0x60C0FF call    _create_tinfo
//   0x60C104 mov     r13d, eax
//   0x60C107 mov     rdi, r14
//   0x60C10A call    _clear_tinfo_t
//   0x60C10F test    r13b, r13b
//   0x60C112 jz      loc_60C1F8
//   0x60C118 mov     r8d, 1
//   0x60C11E mov     rdx, rbx
//   0x60C121 mov     rsi, rbp
//   0x60C124 mov     rdi, r12
//   0x60C127 mov     ecx, 1
//   0x60C12C call    sub_694E60
//   0x60C131 mov     rdi, rbx
//   0x60C134 mov     byte ptr [rsp+78h+var_70], al
//   0x60C138 call    _clear_tinfo_t
//   0x60C13D movzx   eax, byte ptr [rsp+78h+var_70]
//   0x60C142 jmp     short loc_60C154
//   0x60C144 align 8
//   0x60C148 test    rbx, rbx
//   0x60C14B jz      short loc_60C180
//   0x60C14D cmp     rbx, rax
//   0x60C150 jz      short loc_60C180
//   0x60C152 xor     eax, eax
//   0x60C154 mov     rdx, [rsp+78h+var_40]
//   0x60C159 sub     rdx, fs:28h
//   0x60C162 jnz     loc_60C2E8
//   0x60C168 add     rsp, 48h
//   0x60C16C pop     rbx
//   0x60C16D pop     rbp
//   0x60C16E pop     r12
//   0x60C170 pop     r13
//   0x60C172 pop     r14
//   0x60C174 pop     r15
//   0x60C176 retn
//   0x60C177 align 20h
//   0x60C180 mov     rax, [rsp+78h+var_40]
//   0x60C185 sub     rax, fs:28h
//   0x60C18E jnz     loc_60C2E8
//   0x60C194 add     rsp, 48h
//   0x60C198 mov     edx, r15d; int
//   0x60C19B mov     rsi, rbx; int
//   0x60C19E mov     rdi, rbp; int
//   0x60C1A1 pop     rbx
//   0x60C1A2 pop     rbp
//   0x60C1A3 pop     r12
//   0x60C1A5 pop     r13
//   0x60C1A7 pop     r14
//   0x60C1A9 pop     r15
//   0x60C1AB jmp     _create_strlit
//   0x60C1B0 and     ecx, 0F0000000h
//   0x60C1B6 cmp     rcx, 50000000h
//   0x60C1BD jnz     loc_60C08D
//   0x60C1C3 jmp     loc_60C0A2
//   0x60C1C8 align 10h
//   0x60C1D0 mov     edx, r15d; int
//   0x60C1D3 xor     esi, esi; int
//   0x60C1D5 mov     rdi, rbp; int
//   0x60C1D8 mov     qword ptr [rsp+78h+var_70], rax; int
//   0x60C1DD call    _create_strlit
//   0x60C1E2 mov     rbx, qword ptr [rsp+78h+var_70]
//   0x60C1E7 test    al, al
//   0x60C1E9 jnz     loc_60C064
//   0x60C1EF jmp     loc_60C152
//   0x60C1F4 align 8
//   0x60C1F8 mov     rdi, rbx
//   0x60C1FB call    _clear_tinfo_t
//   0x60C200 jmp     loc_60C009
//   0x60C205 align 8
//   0x60C208 mov     rsi, rbp
//   0x60C20B mov     rdi, r12
//   0x60C20E call    sub_3C0260
//   0x60C213 mov     r14d, eax
//   0x60C216 test    al, al
//   0x60C218 jz      short loc_60C235
//   0x60C21A lea     rsi, [rsp+78h+var_58]
//   0x60C21F mov     rdx, rbp
//   0x60C222 mov     rdi, r12
//   0x60C225 call    sub_3BEB30
//   0x60C22A cmp     byte ptr [rsp+78h+var_58], 0
//   0x60C22F jnz     loc_60C050
//   0x60C235 lea     rdi, [r12+658h]
//   0x60C23D mov     rsi, rbp
//   0x60C240 call    sub_505D70
//   0x60C245 mov     r15, rax
//   0x60C248 test    rax, rax
//   0x60C24B jz      loc_60C152
//   0x60C251 mov     rdx, [rax+8]
//   0x60C255 xor     r8d, r8d
//   0x60C258 mov     rsi, rbp
//   0x60C25B mov     rdi, r12
//   0x60C25E lea     rcx, sub_6057C0
//   0x60C265 call    sub_3C1900
//   0x60C26A mov     rbx, rax
//   0x60C26D cmp     rax, 0FFFFFFFFFFFFFFFFh
//   0x60C271 jnz     short loc_60C277
//   0x60C273 mov     rbx, [r15+8]
//   0x60C277 test    r14b, r14b
//   0x60C27A jz      short loc_60C2E0
//   0x60C27C lea     r14, [rbp+1]
//   0x60C280 cmp     r14, rbx
//   0x60C283 jnb     short loc_60C2E0
//   0x60C285 lea     r15, [rsp+78h+var_58]
//   0x60C28A jmp     short loc_60C2AE
//   0x60C28C align 10h
//   0x60C290 lea     rdi, [r14+1]
//   0x60C294 mov     rsi, rbx
//   0x60C297 mov     ecx, 4
//   0x60C29C xor     edx, edx
//   0x60C29E sub     rsi, rdi
//   0x60C2A1 call    _find_byte
//   0x60C2A6 mov     r14, rax
//   0x60C2A9 cmp     r14, rbx
//   0x60C2AC jnb     short loc_60C2E0
//   0x60C2AE mov     rsi, r14
//   0x60C2B1 mov     rdi, r12
//   0x60C2B4 call    sub_3C0260
//   0x60C2B9 test    al, al
//   0x60C2BB jz      short loc_60C290
//   0x60C2BD mov     rdx, r14
//   0x60C2C0 mov     rsi, r15
//   0x60C2C3 mov     rdi, r12
//   0x60C2C6 call    sub_3BEB30
//   0x60C2CB cmp     byte ptr [rsp+78h+var_58], 0
//   0x60C2D0 jnz     short loc_60C2D8
//   0x60C2D2 add     r14, 1
//   0x60C2D6 jmp     short loc_60C2A9
//   0x60C2D8 mov     rbx, r14
//   0x60C2DB nop     dword ptr [rax+rax+00h]
//   0x60C2E0 sub     rbx, rbp
//   0x60C2E3 jmp     loc_60C050
//   0x60C2E8 call    ___stack_chk_fail
//   0x60C2ED mov     rbp, rax
//   0x60C2F0 jmp     loc_2CC590
//   0x60C2F5 mov     rbp, rax
//   0x60C2F8 jmp     loc_2CC598
// ============================================================

void sub_60BFC0(/* signature unknown */)
{
    // see disassembly above
}

