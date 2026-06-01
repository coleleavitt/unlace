// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x1F5E70
// Name:           sub_1F5E70
// Function size:  292 bytes (70 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x1F5E70 push    r12
//   0x1F5E72 push    rbp
//   0x1F5E73 push    rbx
//   0x1F5E74 sub     rsp, 40h
//   0x1F5E78 mov     rbx, fs:28h
//   0x1F5E81 mov     [rsp+58h+var_20], rbx
//   0x1F5E86 mov     ebx, esi
//   0x1F5E88 call    sub_17D870
//   0x1F5E8D test    rax, rax
//   0x1F5E90 jz      loc_1F5F40
//   0x1F5E96 cmp     qword ptr [rax+1A8h], 0
//   0x1F5E9E jz      loc_1F5F77
//   0x1F5EA4 mov     edx, [rax+1A0h]
//   0x1F5EAA cmp     edx, 1
//   0x1F5EAD jz      loc_1F5F40
//   0x1F5EB3 cmp     edx, 2
//   0x1F5EB6 jz      loc_1F5F60
//   0x1F5EBC cmp     edx, 3
//   0x1F5EBF jnz     short loc_1F5F40
//   0x1F5EC1 mov     rbp, [rax+388h]
//   0x1F5EC8 test    rbp, rbp
//   0x1F5ECB jz      short loc_1F5F40
//   0x1F5ECD mov     rsi, rax
//   0x1F5ED0 mov     rdi, rsp; char *
//   0x1F5ED3 mov     r8d, 0FFFF8000h
//   0x1F5ED9 xor     ecx, ecx
//   0x1F5EDB mov     edx, 0Ah
//   0x1F5EE0 mov     r12, rsp
//   0x1F5EE3 call    sub_1E95D0
//   0x1F5EE8 movzx   esi, bl
//   0x1F5EEB mov     rdi, rbp
//   0x1F5EEE call    sub_2B7100
//   0x1F5EF3 mov     rdi, rbp
//   0x1F5EF6 call    sub_2BF7F0
//   0x1F5EFB cmp     [rsp+58h+var_40], 0
//   0x1F5F00 jnz     short loc_1F5F24
//   0x1F5F02 mov     rax, [rsp+58h+var_48]
//   0x1F5F07 test    rax, rax
//   0x1F5F0A jz      short loc_1F5F24
//   0x1F5F0C mov     rdx, [rsp+58h+var_38]
//   0x1F5F11 mov     [rax+3B4h], rdx
//   0x1F5F18 movzx   edx, [rsp+58h+var_30]
//   0x1F5F1D mov     [rax+3BCh], dx
//   0x1F5F24 lea     rax, _ZTV26object_lifecycle_monitor_t; `vtable for'object_lifecycle_monitor_t
//   0x1F5F2B mov     rdi, r12; this
//   0x1F5F2E add     rax, 10h
//   0x1F5F32 mov     [rsp+58h+var_58], rax
//   0x1F5F36 call    __ZN2QT7QObjectD2Ev; QT::QObject::~QObject()
//   0x1F5F3B nop     dword ptr [rax+rax+00h]
//   0x1F5F40 mov     rax, [rsp+58h+var_20]
//   0x1F5F45 sub     rax, fs:28h
//   0x1F5F4E jnz     short loc_1F5F72
//   0x1F5F50 add     rsp, 40h
//   0x1F5F54 mov     eax, 1
//   0x1F5F59 pop     rbx
//   0x1F5F5A pop     rbp
//   0x1F5F5B pop     r12
//   0x1F5F5D retn
//   0x1F5F5E align 20h
//   0x1F5F60 mov     rbp, [rax+380h]
//   0x1F5F67 test    rbp, rbp
//   0x1F5F6A jnz     loc_1F5ECD
//   0x1F5F70 jmp     short loc_1F5F40
//   0x1F5F72 call    ___stack_chk_fail
//   0x1F5F77 mov     rax, [rsp+58h+var_20]
//   0x1F5F7C sub     rax, fs:28h
//   0x1F5F85 jnz     short loc_1F5F72
//   0x1F5F87 call    sub_1E69C0
//   0x1F5F8C mov     rbx, rax
//   0x1F5F8F jmp     loc_12531F
// ============================================================

void sub_1F5E70(/* signature unknown */)
{
    // see disassembly above
}

