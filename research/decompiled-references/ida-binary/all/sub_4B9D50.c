// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x4B9D50
// Name:           sub_4B9D50
// Function size:  191 bytes (49 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x4B9D50 push    rbp
//   0x4B9D51 pxor    xmm0, xmm0
//   0x4B9D55 push    rbx
//   0x4B9D56 mov     rbx, rdi
//   0x4B9D59 sub     rsp, 28h
//   0x4B9D5D mov     rdi, fs:28h
//   0x4B9D66 mov     [rsp+var_s18], rdi
//   0x4B9D6B mov     rdi, rsi
//   0x4B9D6E mov     rsi, rsp
//   0x4B9D71 mov     [rsp+var_s0], 0
//   0x4B9D79 mov     rbp, rsp
//   0x4B9D7C movups  [rsp+var_s8], xmm0
//   0x4B9D81 call    sub_4B9B80
//   0x4B9D86 mov     edx, 1
//   0x4B9D8B mov     rsi, rsp
//   0x4B9D8E mov     rdi, rbx
//   0x4B9D91 call    sub_53CBF0
//   0x4B9D96 mov     rdx, [rsp+var_s0]
//   0x4B9D9A test    rdx, rdx
//   0x4B9D9D jz      short loc_4B9DEB
//   0x4B9D9F mov     rbp, qword ptr [rsp+var_s8]
//   0x4B9DA4 test    rbp, rbp
//   0x4B9DA7 jz      short loc_4B9DDA
//   0x4B9DA9 xor     ebx, ebx
//   0x4B9DAB nop     dword ptr [rax+rax+00h]
//   0x4B9DB0 lea     rax, [rbx+rbx*2]
//   0x4B9DB4 lea     rax, [rdx+rax*8]
//   0x4B9DB8 mov     rdi, [rax]
//   0x4B9DBB test    rdi, rdi
//   0x4B9DBE jz      short loc_4B9DD1
//   0x4B9DC0 mov     qword ptr [rax+8], 0
//   0x4B9DC8 call    _qfree
//   0x4B9DCD mov     rdx, [rsp+var_s0]
//   0x4B9DD1 add     rbx, 1
//   0x4B9DD5 cmp     rbp, rbx
//   0x4B9DD8 jnz     short loc_4B9DB0
//   0x4B9DDA mov     qword ptr [rsp+var_s8], 0
//   0x4B9DE3 mov     rdi, rdx
//   0x4B9DE6 call    _qfree
//   0x4B9DEB mov     rax, [rsp+var_s18]
//   0x4B9DF0 sub     rax, fs:28h
//   0x4B9DF9 jnz     short loc_4B9E02
//   0x4B9DFB add     rsp, 28h
//   0x4B9DFF pop     rbx
//   0x4B9E00 pop     rbp
//   0x4B9E01 retn
//   0x4B9E02 call    ___stack_chk_fail
//   0x4B9E07 mov     rbx, rax
//   0x4B9E0A jmp     loc_155809
// ============================================================

void sub_4B9D50(/* signature unknown */)
{
    // see disassembly above
}

