// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x23C000
// Name:           sub_23C000
// Function size:  413 bytes (107 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x23C000 push    r15
//   0x23C002 push    r14
//   0x23C004 push    r13
//   0x23C006 mov     r13, rsi
//   0x23C009 push    r12
//   0x23C00B mov     r12, rdx
//   0x23C00E push    rbp
//   0x23C00F mov     ebp, ecx
//   0x23C011 push    rbx
//   0x23C012 mov     edx, ebp
//   0x23C014 mov     rbx, rdi
//   0x23C017 sub     rsp, 48h
//   0x23C01B mov     rcx, [rsi]
//   0x23C01E mov     [rsp+78h+var_6C], r8d
//   0x23C023 lea     r14, [rsp+78h+var_50]
//   0x23C028 mov     r8, r14
//   0x23C02B mov     rax, fs:28h
//   0x23C034 mov     [rsp+78h+var_40], rax
//   0x23C039 xor     eax, eax
//   0x23C03B lea     rax, [rsi+8]
//   0x23C03F mov     rsi, r12
//   0x23C042 mov     [rsp+78h+var_50], 0
//   0x23C04B mov     rdi, rax
//   0x23C04E mov     [rsp+78h+var_68], rax
//   0x23C053 call    sub_253420
//   0x23C058 mov     r15d, eax
//   0x23C05B test    eax, eax
//   0x23C05D jz      loc_23C0E0
//   0x23C063 or      byte ptr [r13+0Dh], 20h
//   0x23C068 mov     rdi, [rsp+78h+var_50]
//   0x23C06D mov     esi, 3
//   0x23C072 call    _get_tinfo_property
//   0x23C077 xor     edx, edx
//   0x23C079 mov     rdi, [r13+0]
//   0x23C07D cmp     eax, 1
//   0x23C080 mov     esi, ebp
//   0x23C082 setz    dl
//   0x23C085 call    sub_325C90
//   0x23C08A mov     [r13+0], rax
//   0x23C08E mov     rdx, rax
//   0x23C091 movzx   eax, byte ptr [r13+0Dh]
//   0x23C096 test    al, 18h
//   0x23C098 jnz     loc_23C128
//   0x23C09E cmp     r15d, 2
//   0x23C0A2 jz      short loc_23C0C0
//   0x23C0A4 mov     qword ptr [rbx], 0
//   0x23C0AB mov     rsi, r14
//   0x23C0AE mov     rdi, rbx
//   0x23C0B1 call    _copy_tinfo_t
//   0x23C0B6 jmp     short loc_23C0F8
//   0x23C0B8 align 20h
//   0x23C0C0 mov     rsi, r14
//   0x23C0C3 mov     rdi, r13
//   0x23C0C6 mov     [rsp+78h+var_60], rdx
//   0x23C0CB call    sub_2511B0
//   0x23C0D0 mov     rdx, [rsp+78h+var_60]
//   0x23C0D5 cmp     rdx, rax
//   0x23C0D8 jz      short loc_23C138
//   0x23C0DA nop     word ptr [rax+rax+00h]
//   0x23C0E0 and     byte ptr [r13+0Dh], 0DFh
//   0x23C0E5 mov     ecx, [rsp+78h+var_6C]
//   0x23C0E9 mov     edx, ebp
//   0x23C0EB mov     rdi, rbx
//   0x23C0EE mov     rsi, [r12+70h]
//   0x23C0F3 call    sub_327500
//   0x23C0F8 mov     rdi, r14
//   0x23C0FB call    _clear_tinfo_t
//   0x23C100 mov     rax, [rsp+78h+var_40]
//   0x23C105 sub     rax, fs:28h
//   0x23C10E jnz     short loc_23C188
//   0x23C110 add     rsp, 48h
//   0x23C114 mov     rax, rbx
//   0x23C117 pop     rbx
//   0x23C118 pop     rbp
//   0x23C119 pop     r12
//   0x23C11B pop     r13
//   0x23C11D pop     r14
//   0x23C11F pop     r15
//   0x23C121 retn
//   0x23C122 align 8
//   0x23C128 test    al, 6
//   0x23C12A jnz     loc_23C09E
//   0x23C130 jmp     loc_23C0A4
//   0x23C135 align 8
//   0x23C138 lea     r15, [rsp+78h+var_48]
//   0x23C13D xor     ecx, ecx
//   0x23C13F xor     esi, esi
//   0x23C141 mov     rdi, r13
//   0x23C144 mov     [rsp+78h+var_48], 0
//   0x23C14D mov     rdx, r15
//   0x23C150 call    sub_261220
//   0x23C155 mov     rdi, r15
//   0x23C158 mov     byte ptr [rsp+78h+var_60], al
//   0x23C15C call    _clear_tinfo_t
//   0x23C161 movzx   eax, byte ptr [rsp+78h+var_60]
//   0x23C166 test    al, al
//   0x23C168 jz      loc_23C0E0
//   0x23C16E mov     rsi, [r13+28h]
//   0x23C172 mov     rdi, [rsp+78h+var_68]
//   0x23C177 and     rsi, 0FFFFFFFFFFFDFFFFh
//   0x23C17E call    sub_324F00
//   0x23C183 jmp     loc_23C0A4
//   0x23C188 call    ___stack_chk_fail
//   0x23C18D mov     rbx, rax
//   0x23C190 jmp     loc_45C64
//   0x23C195 mov     rbx, rax
//   0x23C198 jmp     loc_45C5C
// ============================================================

void sub_23C000(/* signature unknown */)
{
    // see disassembly above
}

