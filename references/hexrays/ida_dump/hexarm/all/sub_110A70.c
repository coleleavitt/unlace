// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x110A70
// Name:           sub_110A70
// Function size:  220 bytes (60 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x110A70 push    r13
//   0x110A72 mov     rcx, rsi
//   0x110A75 mov     rsi, rdi
//   0x110A78 push    r12
//   0x110A7A push    rbp
//   0x110A7B push    rbx
//   0x110A7C sub     rsp, 58h
//   0x110A80 mov     rbp, fs:28h
//   0x110A89 mov     [rsp+78h+var_30], rbp
//   0x110A8E mov     rbp, rdx
//   0x110A91 lea     r12, [rsp+78h+var_68]
//   0x110A96 lea     rdx, [rsp+78h+var_74]
//   0x110A9B mov     [rsp+78h+var_68], 0
//   0x110AA4 mov     rdi, r12
//   0x110AA7 mov     [rsp+78h+var_60], 0
//   0x110AAC call    sub_1E02F0
//   0x110AB1 mov     ebx, eax
//   0x110AB3 test    al, al
//   0x110AB5 jnz     short loc_110AD8
//   0x110AB7 mov     rax, [rsp+78h+var_30]
//   0x110ABC sub     rax, fs:28h
//   0x110AC5 jnz     short loc_110B3F
//   0x110AC7 add     rsp, 58h
//   0x110ACB mov     eax, ebx
//   0x110ACD pop     rbx
//   0x110ACE pop     rbp
//   0x110ACF pop     r12
//   0x110AD1 pop     r13
//   0x110AD3 retn
//   0x110AD4 align 8
//   0x110AD8 mov     eax, [rsp+78h+var_74]
//   0x110ADC lea     r13, [rsp+78h+var_58]
//   0x110AE1 pxor    xmm0, xmm0
//   0x110AE5 xor     ecx, ecx
//   0x110AE7 mov     rdx, r12
//   0x110AEA mov     rsi, r13
//   0x110AED mov     rdi, rbp
//   0x110AF0 movups  [rsp+78h+var_50], xmm0
//   0x110AF5 mov     [rsp+78h+var_58], 0
//   0x110AFD mov     [rsp+78h+var_54], eax
//   0x110B01 mov     [rsp+78h+var_40], 0
//   0x110B0A call    sub_1E0540
//   0x110B0F test    al, al
//   0x110B11 jz      short loc_110B30
//   0x110B13 lea     rsi, [rsp+78h+var_70]
//   0x110B18 mov     rdi, r13
//   0x110B1B call    sub_312EB0
//   0x110B20 test    al, al
//   0x110B22 jz      short loc_110B30
//   0x110B24 cmp     [rsp+78h+var_70], 0
//   0x110B2A setz    bl
//   0x110B2D jmp     short loc_110B32
//   0x110B2F align 10h
//   0x110B30 xor     ebx, ebx
//   0x110B32 mov     rdi, r13
//   0x110B35 call    sub_312F40
//   0x110B3A jmp     loc_110AB7
//   0x110B3F call    ___stack_chk_fail
//   0x110B44 mov     rbx, rax
//   0x110B47 jmp     loc_38C2A
// ============================================================

void sub_110A70(/* signature unknown */)
{
    // see disassembly above
}

