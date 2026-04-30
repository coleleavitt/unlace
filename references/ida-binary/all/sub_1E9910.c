// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x1E9910
// Name:           sub_1E9910
// Function size:  97 bytes (29 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x1E9910 push    rbp
//   0x1E9911 push    rbx
//   0x1E9912 mov     rbx, rdi
//   0x1E9915 sub     rsp, 8
//   0x1E9919 lea     rbp, dword_8CD7F0
//   0x1E9920 mov     byte ptr [rdi], 0
//   0x1E9923 mov     edi, [rbp+0]
//   0x1E9926 call    _get_module_data
//   0x1E992B test    rax, rax
//   0x1E992E jz      short loc_1E9940
//   0x1E9930 add     rsp, 8
//   0x1E9934 pop     rbx
//   0x1E9935 pop     rbp
//   0x1E9936 retn
//   0x1E9937 align 20h
//   0x1E9940 mov     byte ptr [rbx], 1
//   0x1E9943 mov     edi, 398h; unsigned __int64
//   0x1E9948 call    __Znwm; operator new(ulong)
//   0x1E994D mov     rdi, rax
//   0x1E9950 mov     rbx, rax
//   0x1E9953 call    sub_30BC80
//   0x1E9958 add     rsp, 8
//   0x1E995C mov     rsi, rbx
//   0x1E995F mov     rdi, rbp
//   0x1E9962 pop     rbx
//   0x1E9963 pop     rbp
//   0x1E9964 jmp     _set_module_data
//   0x1E9969 mov     rbp, rax
//   0x1E996C jmp     loc_12487C
// ============================================================

void sub_1E9910(/* signature unknown */)
{
    // see disassembly above
}

