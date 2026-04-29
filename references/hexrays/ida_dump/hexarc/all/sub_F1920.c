// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0xF1920
// Name:           sub_F1920
// Function size:  114 bytes (39 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0xF1920 push    r13
//   0xF1922 mov     r13, rdi
//   0xF1925 push    r12
//   0xF1927 mov     r12, rsi
//   0xF192A push    rbp
//   0xF192B xor     ebp, ebp
//   0xF192D push    rbx
//   0xF192E xor     ebx, ebx
//   0xF1930 sub     rsp, 8
//   0xF1934 mov     eax, [rdi+40h]
//   0xF1937 test    eax, eax
//   0xF1939 jg      short loc_F1948
//   0xF193B jmp     short loc_F196B
//   0xF193D align 20h
//   0xF1940 add     rbx, 1
//   0xF1944 cmp     ebx, eax
//   0xF1946 jnb     short loc_F1978
//   0xF1948 mov     rax, [r13+210h]
//   0xF194F mov     rsi, r12
//   0xF1952 mov     rdi, [rax+rbx*8]
//   0xF1956 call    sub_168A40
//   0xF195B lea     edx, [rbx+1]
//   0xF195E movzx   eax, al
//   0xF1961 add     ebp, eax
//   0xF1963 mov     eax, [r13+40h]
//   0xF1967 cmp     eax, edx
//   0xF1969 jg      short loc_F1940
//   0xF196B add     rsp, 8
//   0xF196F mov     eax, ebp
//   0xF1971 pop     rbx
//   0xF1972 pop     rbp
//   0xF1973 pop     r12
//   0xF1975 pop     r13
//   0xF1977 retn
//   0xF1978 mov     rax, cs:under_debugger_ptr
//   0xF197F cmp     byte ptr [rax], 0
//   0xF1982 jnz     loc_33112
//   0xF1988 mov     edi, 0CDEFh
//   0xF198D call    sub_37B760
// ============================================================

void sub_F1920(/* signature unknown */)
{
    // see disassembly above
}

