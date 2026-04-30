// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x2BF000
// Name:           sub_2BF000
// Function size:  86 bytes (21 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x2BF000 push    rbx
//   0x2BF001 mov     rbx, rdi
//   0x2BF004 sub     rsp, 10h
//   0x2BF008 mov     rax, [rdi+10h]
//   0x2BF00C lea     rdi, [rax+180h]
//   0x2BF013 call    sub_1EA6C0
//   0x2BF018 movsd   xmm1, qword ptr [rax]
//   0x2BF01C mov     rax, [rbx+10h]
//   0x2BF020 mov     rdi, [rax+20h]
//   0x2BF024 movsd   [rsp+18h+var_10], xmm1
//   0x2BF02A add     rdi, 38h ; '8'; this
//   0x2BF02E call    __ZNK2QT5QFont10pointSizeFEv; QT::QFont::pointSizeF(void)
//   0x2BF033 movsd   xmm1, [rsp+18h+var_10]
//   0x2BF039 movapd  xmm2, xmm0
//   0x2BF03D movsd   xmm0, cs:qword_5DBF50
//   0x2BF045 divsd   xmm0, xmm2
//   0x2BF049 comisd  xmm1, xmm0
//   0x2BF04D setnbe  al
//   0x2BF050 add     rsp, 10h
//   0x2BF054 pop     rbx
//   0x2BF055 retn
// ============================================================

void sub_2BF000(/* signature unknown */)
{
    // see disassembly above
}

