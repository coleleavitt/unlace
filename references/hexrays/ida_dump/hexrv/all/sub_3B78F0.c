// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x3B78F0
// Name:           sub_3B78F0
// Function size:  137 bytes (43 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x3B78F0 push    rbp
//   0x3B78F1 push    rbx
//   0x3B78F2 mov     rbx, rdi
//   0x3B78F5 sub     rsp, 8
//   0x3B78F9 mov     rbp, [rsi]
//   0x3B78FC mov     rdi, [rdi+10h]
//   0x3B7900 mov     rsi, rbp
//   0x3B7903 call    sub_384970
//   0x3B7908 test    rax, rax
//   0x3B790B jz      short loc_3B7968
//   0x3B790D mov     rsi, rax
//   0x3B7910 mov     eax, [rbx+18h]
//   0x3B7913 test    eax, eax
//   0x3B7915 jz      short loc_3B7927
//   0x3B7917 cmp     eax, 1
//   0x3B791A jnz     short loc_3B7974
//   0x3B791C mov     eax, 6
//   0x3B7921 cmp     rbp, [rsi+8]
//   0x3B7925 jnz     short loc_3B795A
//   0x3B7927 mov     rax, [rbx]
//   0x3B792A mov     rdi, rbx
//   0x3B792D call    qword ptr [rax+30h]
//   0x3B7930 mov     rcx, [rbx+30h]
//   0x3B7934 mov     rsi, [rbx+20h]
//   0x3B7938 mov     edx, 1
//   0x3B793D mov     r8, cs:callui_ptr
//   0x3B7944 test    al, al
//   0x3B7946 mov     edi, 8Ch
//   0x3B794B cmovnz  rcx, [rbx+28h]
//   0x3B7950 xor     eax, eax
//   0x3B7952 call    qword ptr [r8]
//   0x3B7955 mov     eax, 3
//   0x3B795A add     rsp, 8
//   0x3B795E pop     rbx
//   0x3B795F pop     rbp
//   0x3B7960 retn
//   0x3B7961 align 8
//   0x3B7968 add     rsp, 8
//   0x3B796C mov     eax, 6
//   0x3B7971 pop     rbx
//   0x3B7972 pop     rbp
//   0x3B7973 retn
//   0x3B7974 call    sub_3B5750
// ============================================================

void sub_3B78F0(/* signature unknown */)
{
    // see disassembly above
}

