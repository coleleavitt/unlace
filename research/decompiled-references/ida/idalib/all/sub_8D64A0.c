// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x8D64A0
// Name:           sub_8D64A0
// Function size:  143 bytes (48 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x8D64A0 push    r13; int
//   0x8D64A2 mov     r13, rsi
//   0x8D64A5 push    r12; int
//   0x8D64A7 push    rbp; __int64
//   0x8D64A8 mov     ebp, edx
//   0x8D64AA push    rbx; int
//   0x8D64AB sub     rsp, 18h
//   0x8D64AF mov     qword ptr [rsp+38h+var_30], rdi; int
//   0x8D64B4 mov     edi, 28h ; '('; unsigned __int64
//   0x8D64B9 call    __Znwm; operator new(ulong)
//   0x8D64BE pxor    xmm0, xmm0
//   0x8D64C2 cmp     qword ptr [rsp+38h+var_30], 0
//   0x8D64C8 mov     byte ptr [rax+8], 41h ; 'A'
//   0x8D64CC mov     rbx, rax
//   0x8D64CF mov     r12, rax
//   0x8D64D2 lea     rax, off_2B3EB18
//   0x8D64D9 mov     [rbx], rax
//   0x8D64DC mov     qword ptr [rbx+10h], 0
//   0x8D64E4 movups  xmmword ptr [rbx+18h], xmm0
//   0x8D64E8 jz      short loc_8D6500
//   0x8D64EA lea     rsi, [rsp+38h+var_30]; int
//   0x8D64EF mov     ecx, ebp; int
//   0x8D64F1 mov     rdx, r13; int
//   0x8D64F4 mov     rdi, rbx; int
//   0x8D64F7 call    sub_8EF3A0
//   0x8D64FC test    al, al
//   0x8D64FE jz      short loc_8D6510
//   0x8D6500 add     rsp, 18h
//   0x8D6504 mov     rax, r12
//   0x8D6507 pop     rbx
//   0x8D6508 pop     rbp
//   0x8D6509 pop     r12
//   0x8D650B pop     r13
//   0x8D650D retn
//   0x8D650E align 10h
//   0x8D6510 test    rbx, rbx
//   0x8D6513 jz      short loc_8D651E
//   0x8D6515 mov     rax, [rbx]
//   0x8D6518 mov     rdi, rbx
//   0x8D651B call    qword ptr [rax+8]
//   0x8D651E add     rsp, 18h
//   0x8D6522 xor     r12d, r12d
//   0x8D6525 pop     rbx
//   0x8D6526 mov     rax, r12
//   0x8D6529 pop     rbp
//   0x8D652A pop     r12
//   0x8D652C pop     r13
//   0x8D652E retn
// ============================================================

void sub_8D64A0(/* signature unknown */)
{
    // see disassembly above
}

