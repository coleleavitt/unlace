// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x17F030
// Name:           sub_17F030
// Function size:  166 bytes (47 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x17F030 push    r14
//   0x17F032 push    r13
//   0x17F034 mov     r13, rcx
//   0x17F037 push    r12
//   0x17F039 mov     r12, rdx
//   0x17F03C push    rbp
//   0x17F03D mov     rbp, rsi
//   0x17F040 mov     rsi, rdx
//   0x17F043 push    rbx
//   0x17F044 mov     rbx, rdi
//   0x17F047 lea     r14, [rbx+18h]
//   0x17F04B call    sub_532110
//   0x17F050 lea     rax, ida_action_execution_data_t___vtable
//   0x17F057 mov     rsi, r13
//   0x17F05A mov     rdi, r14
//   0x17F05D mov     [rbx], rax
//   0x17F060 mov     qword ptr [rbx+10h], 0
//   0x17F068 call    sub_277780
//   0x17F06D pxor    xmm0, xmm0
//   0x17F071 mov     byte ptr [rbx+1Ch], 0
//   0x17F075 mov     qword ptr [rbx+20h], 0
//   0x17F07D mov     byte ptr [rbx+38h], 0
//   0x17F081 mov     qword ptr [rbx+40h], 0
//   0x17F089 movups  xmmword ptr [rbx+28h], xmm0
//   0x17F08D movups  xmmword ptr [rbx+48h], xmm0
//   0x17F091 test    rbp, rbp
//   0x17F094 jz      short loc_17F0B5
//   0x17F096 mov     edi, 58h ; 'X'; unsigned __int64
//   0x17F09B call    __Znwm; operator new(ulong)
//   0x17F0A0 mov     rdx, r12
//   0x17F0A3 mov     rsi, rbp
//   0x17F0A6 mov     rdi, rax; char *
//   0x17F0A9 mov     r13, rax
//   0x17F0AC call    sub_17EF70
//   0x17F0B1 mov     [rbx+10h], r13
//   0x17F0B5 pop     rbx
//   0x17F0B6 pop     rbp
//   0x17F0B7 pop     r12
//   0x17F0B9 pop     r13
//   0x17F0BB pop     r14
//   0x17F0BD retn
//   0x17F0BE mov     rbp, rax
//   0x17F0C1 jmp     loc_11D2DD
//   0x17F0C6 mov     rbp, rax
//   0x17F0C9 jmp     loc_11D2A0
//   0x17F0CE mov     rbp, rax
//   0x17F0D1 jmp     loc_11D2AD
// ============================================================

void sub_17F030(/* signature unknown */)
{
    // see disassembly above
}

