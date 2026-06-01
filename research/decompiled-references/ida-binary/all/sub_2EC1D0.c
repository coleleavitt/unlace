// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x2EC1D0
// Name:           sub_2EC1D0
// Function size:  293 bytes (69 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x2EC1D0 push    rbp; int
//   0x2EC1D1 push    rbx; int
//   0x2EC1D2 sub     rsp, 38h
//   0x2EC1D6 mov     rbx, fs:28h
//   0x2EC1DF mov     qword ptr [rsp+48h+var_20], rbx; int
//   0x2EC1E4 mov     rbx, rdi
//   0x2EC1E7 mov     rax, [rsp+48h+arg_10]
//   0x2EC1EC movdqu  xmm0, [rsp+48h+arg_0]
//   0x2EC1F2 lea     rbp, [rsp+48h+ptr]
//   0x2EC1F7 mov     [rdi+98h], rax
//   0x2EC1FE movups  xmmword ptr [rdi+88h], xmm0
//   0x2EC205 call    sub_2E7F10
//   0x2EC20A xor     esi, esi
//   0x2EC20C mov     rdi, rbx
//   0x2EC20F call    sub_2EA290
//   0x2EC214 mov     rdi, [rbx+40h]; this
//   0x2EC218 call    __ZN2QT9QLineEdit9selectAllEv; QT::QLineEdit::selectAll(void)
//   0x2EC21D mov     rsi, [rbx+40h]
//   0x2EC221 mov     rdi, rbp; this
//   0x2EC224 call    __ZNK2QT9QLineEdit4textEv; QT::QLineEdit::text(void)
//   0x2EC229 cmp     [rsp+48h+var_28], 0
//   0x2EC22F jnz     loc_2EC2D8
//   0x2EC235 mov     rdi, [rbx+30h]
//   0x2EC239 mov     rax, [rdi]
//   0x2EC23C call    qword ptr [rax+0E0h]
//   0x2EC242 mov     rdx, [rax+20h]
//   0x2EC246 mov     rax, [rbx+20h]
//   0x2EC24A lea     rsi, [rsp+48h+var_40]
//   0x2EC24F mov     rdi, rbx
//   0x2EC252 movq    xmm1, qword ptr [rdx+14h]
//   0x2EC257 movq    xmm0, qword ptr [rdx+1Ch]
//   0x2EC25C movq    xmm2, qword ptr [rax+1Ch]
//   0x2EC261 psubd   xmm0, xmm1
//   0x2EC265 movq    xmm1, qword ptr [rax+14h]
//   0x2EC26A psubd   xmm1, xmm2
//   0x2EC26E paddd   xmm0, xmm1
//   0x2EC272 pxor    xmm1, xmm1
//   0x2EC276 pcmpgtd xmm1, xmm0
//   0x2EC27A psubd   xmm0, xmm1
//   0x2EC27E psrad   xmm0, 1
//   0x2EC283 movq    [rsp+48h+var_40], xmm0
//   0x2EC289 call    __ZN2QT7QWidget4moveERKNS_6QPointE; QT::QWidget::move(QT::QPoint const&)
//   0x2EC28E mov     rax, [rbx]
//   0x2EC291 mov     rdi, rbx
//   0x2EC294 call    qword ptr [rax+1A8h]
//   0x2EC29A mov     rax, [rsp+48h+ptr]
//   0x2EC29F test    rax, rax
//   0x2EC2A2 jz      short loc_2EC2AA
//   0x2EC2A4 lock sub dword ptr [rax], 1
//   0x2EC2A8 jz      short loc_2EC2C8
//   0x2EC2AA mov     rax, qword ptr [rsp+48h+var_20]
//   0x2EC2AF sub     rax, fs:28h
//   0x2EC2B8 jnz     short loc_2EC2E8
//   0x2EC2BA add     rsp, 38h
//   0x2EC2BE pop     rbx
//   0x2EC2BF pop     rbp
//   0x2EC2C0 retn
//   0x2EC2C1 align 8
//   0x2EC2C8 mov     rdi, [rsp+48h+ptr]; ptr
//   0x2EC2CD call    _free
//   0x2EC2D2 jmp     short loc_2EC2AA
//   0x2EC2D4 align 8
//   0x2EC2D8 mov     rsi, rbp
//   0x2EC2DB mov     rdi, rbx
//   0x2EC2DE call    sub_2EBA40
//   0x2EC2E3 jmp     loc_2EC235
//   0x2EC2E8 call    ___stack_chk_fail
//   0x2EC2ED mov     rbx, rax
//   0x2EC2F0 jmp     loc_1349CA
// ============================================================

void sub_2EC1D0(/* signature unknown */)
{
    // see disassembly above
}

