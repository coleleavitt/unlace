// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x4A04F0
// Name:           sub_4A04F0
// Function size:  276 bytes (67 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x4A04F0 push    r13; int
//   0x4A04F2 push    r12; int
//   0x4A04F4 mov     r12, rsi
//   0x4A04F7 push    rbp; int
//   0x4A04F8 push    rbx; int
//   0x4A04F9 mov     rbx, rdi
//   0x4A04FC sub     rsp, 28h
//   0x4A0500 mov     rax, [rdi]
//   0x4A0503 mov     rbp, fs:28h
//   0x4A050C mov     qword ptr [rsp+48h+var_30], rbp; int
//   0x4A0511 mov     rbp, rdx
//   0x4A0514 lea     rdx, nullsub_263
//   0x4A051B mov     rax, [rax+2A0h]
//   0x4A0522 cmp     rax, rdx
//   0x4A0525 jnz     loc_4A05F0
//   0x4A052B mov     r13, [rbp+8]
//   0x4A052F pxor    xmm0, xmm0
//   0x4A0533 mov     [rsp+48h+var_48], 0; __int64
//   0x4A053B movups  xmmword ptr [rsp+48h+var_40], xmm0; int
//   0x4A0540 test    r13, r13
//   0x4A0543 jnz     short loc_4A05C0
//   0x4A0545 cmp     dword ptr [rbx+948h], 2
//   0x4A054C jz      short loc_4A05A8
//   0x4A054E mov     rdi, [rbx+9A8h]; this
//   0x4A0555 call    __ZNK2QT10QTableView16horizontalHeaderEv; QT::QTableView::horizontalHeader(void)
//   0x4A055A mov     rsi, rax
//   0x4A055D mov     rdx, rsp
//   0x4A0560 mov     ecx, 0Ah
//   0x4A0565 mov     rdi, r12; this
//   0x4A0568 call    sub_4E71E0
//   0x4A056D mov     rdi, [rsp+48h+var_48]
//   0x4A0571 mov     ebx, eax
//   0x4A0573 test    rdi, rdi
//   0x4A0576 jz      short loc_4A0586
//   0x4A0578 mov     qword ptr [rsp+48h+var_40], 0
//   0x4A0581 call    _qfree
//   0x4A0586 mov     rax, qword ptr [rsp+48h+var_30]
//   0x4A058B sub     rax, fs:28h
//   0x4A0594 jnz     short loc_4A05F7
//   0x4A0596 add     rsp, 28h
//   0x4A059A mov     eax, ebx
//   0x4A059C pop     rbx
//   0x4A059D pop     rbp
//   0x4A059E pop     r12
//   0x4A05A0 pop     r13
//   0x4A05A2 retn
//   0x4A05A3 align 8
//   0x4A05A8 mov     rdi, [rbx+950h]; this
//   0x4A05AF call    __ZNK2QT9QTreeView6headerEv; QT::QTreeView::header(void)
//   0x4A05B4 jmp     short loc_4A055A
//   0x4A05B6 align 20h
//   0x4A05C0 mov     rdi, r13
//   0x4A05C3 call    _qalloc_or_throw
//   0x4A05C8 mov     rsi, [rbp+0]; src
//   0x4A05CC mov     rdx, r13; n
//   0x4A05CF mov     qword ptr [rsp+48h+var_40+8], r13
//   0x4A05D4 mov     rdi, rax; dest
//   0x4A05D7 mov     [rsp+48h+var_48], rax
//   0x4A05DB call    _memcpy
//   0x4A05E0 mov     qword ptr [rsp+48h+var_40], r13
//   0x4A05E5 jmp     loc_4A0545
//   0x4A05EA align 10h
//   0x4A05F0 call    rax
//   0x4A05F2 jmp     loc_4A052B
//   0x4A05F7 call    ___stack_chk_fail
//   0x4A05FC mov     rbx, rax
//   0x4A05FF jmp     loc_153902
// ============================================================

void sub_4A04F0(/* signature unknown */)
{
    // see disassembly above
}

