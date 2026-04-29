// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x1BFF0
// Name:           sub_1BFF0
// Function size:  683 bytes (166 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x1BFF0 push    r15
//   0x1BFF2 push    r14
//   0x1BFF4 push    r13
//   0x1BFF6 push    r12
//   0x1BFF8 push    rbp
//   0x1BFF9 mov     rbp, rsi
//   0x1BFFC push    rbx
//   0x1BFFD mov     rbx, rdi
//   0x1C000 sub     rsp, 168h
//   0x1C007 mov     r12, fs:28h
//   0x1C010 mov     [rsp+198h+var_40], r12
//   0x1C018 mov     r12, rdx
//   0x1C01B call    sub_84CC0
//   0x1C020 test    al, al
//   0x1C022 jz      short loc_1C070
//   0x1C024 mov     rax, cs:debug_ptr
//   0x1C02B mov     eax, [rax]
//   0x1C02D test    eax, 400000h
//   0x1C032 jnz     loc_1C150
//   0x1C038 mov     rax, [rsp+198h+var_40]
//   0x1C040 sub     rax, fs:28h
//   0x1C049 jnz     loc_1C27E
//   0x1C04F add     rsp, 168h
//   0x1C056 lea     rdi, aCouldnTApplyAl; "Couldn't apply all types, globals or fu"...
//   0x1C05D xor     eax, eax
//   0x1C05F pop     rbx
//   0x1C060 pop     rbp
//   0x1C061 pop     r12
//   0x1C063 pop     r13
//   0x1C065 pop     r14
//   0x1C067 pop     r15
//   0x1C069 jmp     sub_16F70
//   0x1C06E align 10h
//   0x1C070 lea     r13, [rsp+198h+var_148]
//   0x1C075 lea     r15, [rsp+198h+var_170]
//   0x1C07A mov     rdi, r13
//   0x1C07D call    sub_84A60
//   0x1C082 mov     rax, [rbx]
//   0x1C085 lea     rcx, [rsp+198h+var_168]
//   0x1C08A mov     rdx, r15
//   0x1C08D mov     [rsp+198h+var_168], 0
//   0x1C096 mov     esi, 49h ; 'I'
//   0x1C09B mov     dword ptr [rsp+198h+var_170], 0
//   0x1C0A3 mov     rdi, [rax+18h]
//   0x1C0A7 mov     rax, [rbx+100h]
//   0x1C0AE mov     [rsp+198h+var_198], rcx
//   0x1C0B2 call    qword ptr [rax+70h]
//   0x1C0B5 test    eax, eax
//   0x1C0B7 jnz     short loc_1C0C5
//   0x1C0B9 mov     ecx, dword ptr [rsp+198h+var_170]
//   0x1C0BD test    ecx, ecx
//   0x1C0BF jnz     loc_1C148
//   0x1C0C5 mov     rsi, r13
//   0x1C0C8 mov     rdi, rbx
//   0x1C0CB call    sub_9AB20
//   0x1C0D0 mov     rdx, r13
//   0x1C0D3 test    al, al
//   0x1C0D5 jz      short loc_1C148
//   0x1C0D7 lea     r14, [rsp+198h+var_178]
//   0x1C0DC mov     rdi, rbp
//   0x1C0DF mov     [rsp+198h+var_178], 0
//   0x1C0E8 mov     rsi, r14
//   0x1C0EB call    sub_62AC0
//   0x1C0F0 test    al, al
//   0x1C0F2 jnz     loc_1C170
//   0x1C0F8 mov     rax, cs:debug_ptr
//   0x1C0FF mov     eax, [rax]
//   0x1C101 test    eax, 400000h
//   0x1C106 jnz     loc_1C260
//   0x1C10C mov     rdi, r14
//   0x1C10F call    _clear_tinfo_t
//   0x1C114 mov     rdi, r13
//   0x1C117 call    sub_1B750
//   0x1C11C mov     rax, [rsp+198h+var_40]
//   0x1C124 sub     rax, fs:28h
//   0x1C12D jnz     loc_1C27E
//   0x1C133 add     rsp, 168h
//   0x1C13A pop     rbx
//   0x1C13B pop     rbp
//   0x1C13C pop     r12
//   0x1C13E pop     r13
//   0x1C140 pop     r14
//   0x1C142 pop     r15
//   0x1C144 retn
//   0x1C145 align 8
//   0x1C148 mov     rdx, rbx
//   0x1C14B jmp     short loc_1C0D7
//   0x1C14D align 10h
//   0x1C150 mov     rdi, rbx
//   0x1C153 call    sub_81C40
//   0x1C158 lea     rdi, aGlobalVariable; "Global variable @ %s has failed relocat"...
//   0x1C15F mov     rsi, rax
//   0x1C162 xor     eax, eax
//   0x1C164 call    sub_88B80
//   0x1C169 jmp     loc_1C038
//   0x1C16E align 10h
//   0x1C170 lea     rax, [rsp+198h+var_160]
//   0x1C175 lea     rbp, off_C7558
//   0x1C17C mov     rsi, r14
//   0x1C17F mov     [rsp+198h+var_160], 0
//   0x1C188 mov     rdi, rax
//   0x1C18B mov     [rsp+198h+var_168], rbp
//   0x1C190 mov     [rsp+198h+var_190], rax
//   0x1C195 call    _copy_tinfo_t
//   0x1C19A mov     rax, [rbx]
//   0x1C19D mov     [rsp+198h+var_150], r12
//   0x1C1A2 lea     r12, [rsp+198h+var_17C]
//   0x1C1A7 mov     rcx, r15
//   0x1C1AA mov     [rsp+198h+var_158], 0
//   0x1C1AF mov     rdx, r12
//   0x1C1B2 mov     esi, 2
//   0x1C1B7 mov     [rsp+198h+var_170], 0
//   0x1C1C0 mov     [rsp+198h+var_17C], 0
//   0x1C1C8 mov     rdi, [rax+18h]
//   0x1C1CC mov     rax, [rbx+100h]
//   0x1C1D3 call    qword ptr [rax+70h]
//   0x1C1D6 test    eax, eax
//   0x1C1D8 jnz     short loc_1C1E2
//   0x1C1DA mov     edx, [rsp+198h+var_17C]
//   0x1C1DE test    edx, edx
//   0x1C1E0 jnz     short loc_1C238
//   0x1C1E2 mov     rax, [rbx]
//   0x1C1E5 mov     rcx, r15
//   0x1C1E8 mov     rdx, r12
//   0x1C1EB mov     esi, 11h
//   0x1C1F0 mov     [rsp+198h+var_170], 0
//   0x1C1F9 mov     [rsp+198h+var_17C], 0
//   0x1C201 mov     rdi, [rax+18h]
//   0x1C205 mov     rax, [rbx+100h]
//   0x1C20C call    qword ptr [rax+70h]
//   0x1C20F test    eax, eax
//   0x1C211 jnz     short loc_1C249
//   0x1C213 mov     eax, [rsp+198h+var_17C]
//   0x1C217 test    eax, eax
//   0x1C219 jz      short loc_1C249
//   0x1C21B mov     rdi, rbx
//   0x1C21E call    sub_9A0A0
//   0x1C223 mov     rdi, [rsp+198h+var_198]
//   0x1C227 mov     rdx, rax
//   0x1C22A mov     rsi, rbx
//   0x1C22D call    sub_1BAC0
//   0x1C232 jmp     short loc_1C249
//   0x1C234 align 8
//   0x1C238 mov     rdx, [rsp+198h+var_198]
//   0x1C23C mov     esi, 2
//   0x1C241 mov     rdi, rbx
//   0x1C244 call    sub_94760
//   0x1C249 mov     rdi, [rsp+198h+var_190]
//   0x1C24E mov     [rsp+198h+var_168], rbp
//   0x1C253 call    _clear_tinfo_t
//   0x1C258 jmp     loc_1C10C
//   0x1C25D align 20h
//   0x1C260 mov     rdi, rbx
//   0x1C263 call    sub_81C40
//   0x1C268 mov     rsi, rax
//   0x1C26B lea     rdi, aCouldnTDetermi_0; "Couldn't determine type for global vari"...
//   0x1C272 xor     eax, eax
//   0x1C274 call    sub_88B80
//   0x1C279 jmp     loc_1C10C
//   0x1C27E call    ___stack_chk_fail
//   0x1C283 mov     rbx, rax
//   0x1C286 jmp     loc_B250
//   0x1C28B mov     rbx, rax
//   0x1C28E jmp     loc_B239
//   0x1C293 mov     rbx, rax
//   0x1C296 jmp     loc_B248
// ============================================================

void sub_1BFF0(/* signature unknown */)
{
    // see disassembly above
}

