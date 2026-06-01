// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x2B5870
// Name:           sub_2B5870
// Function size:  140 bytes (34 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x2B5870 push    rbx
//   0x2B5871 lea     rdx, sub_2B2520
//   0x2B5878 sub     rsp, 10h
//   0x2B587C mov     rax, [rdi]
//   0x2B587F mov     rbx, fs:28h
//   0x2B5888 mov     [rsp+18h+var_10], rbx
//   0x2B588D mov     rbx, rdi
//   0x2B5890 mov     rax, [rax+138h]
//   0x2B5897 cmp     rax, rdx
//   0x2B589A jnz     short loc_2B58F0
//   0x2B589C mov     rax, [rbx+10h]
//   0x2B58A0 lea     rdi, [rax+180h]
//   0x2B58A7 call    sub_1EA6C0
//   0x2B58AC movsd   xmm0, qword ptr [rax]
//   0x2B58B0 pxor    xmm1, xmm1
//   0x2B58B4 mov     rax, qword ptr cs:xmmword_5DC310+8
//   0x2B58BB comisd  xmm1, xmm0
//   0x2B58BF jnb     short loc_2B58DA
//   0x2B58C1 mov     rdx, rsp
//   0x2B58C4 xor     esi, esi
//   0x2B58C6 mov     rdi, rbx
//   0x2B58C9 mov     [rsp+18h+var_18], 0
//   0x2B58D1 call    sub_1761D0
//   0x2B58D6 mov     rax, [rsp+18h+var_18]
//   0x2B58DA mov     rdx, [rsp+18h+var_10]
//   0x2B58DF sub     rdx, fs:28h
//   0x2B58E8 jnz     short loc_2B58F7
//   0x2B58EA add     rsp, 10h
//   0x2B58EE pop     rbx
//   0x2B58EF retn
//   0x2B58F0 mov     rdi, rbx
//   0x2B58F3 call    rax
//   0x2B58F5 jmp     short loc_2B58B0
//   0x2B58F7 call    ___stack_chk_fail
// ============================================================

void sub_2B5870(/* signature unknown */)
{
    // see disassembly above
}

