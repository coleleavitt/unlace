// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x3BC0C0
// Name:           sub_3BC0C0
// Function size:  314 bytes (80 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x3BC0C0 push    r12
//   0x3BC0C2 push    rbp
//   0x3BC0C3 push    rbx
//   0x3BC0C4 sub     rsp, 20h
//   0x3BC0C8 mov     rbx, fs:28h
//   0x3BC0D1 mov     [rsp+38h+var_20], rbx
//   0x3BC0D6 mov     rbx, rdi
//   0x3BC0D9 mov     [rsp+38h+var_38], rsi
//   0x3BC0DD mov     r12, rsp
//   0x3BC0E0 mov     [rsp+38h+var_30], rdx
//   0x3BC0E5 call    _is_cvt64
//   0x3BC0EA mov     rsi, [rsp+38h+var_30]
//   0x3BC0EF mov     rdi, rsp
//   0x3BC0F2 test    al, al
//   0x3BC0F4 jnz     loc_3BC1B8
//   0x3BC0FA call    _unpack_dq
//   0x3BC0FF mov     rbp, rax
//   0x3BC102 mov     [rbx], rbp
//   0x3BC105 call    _is_cvt64
//   0x3BC10A mov     rsi, [rsp+38h+var_30]
//   0x3BC10F mov     rdi, r12
//   0x3BC112 test    al, al
//   0x3BC114 jnz     short loc_3BC190
//   0x3BC116 call    _unpack_dq
//   0x3BC11B add     rax, rbp
//   0x3BC11E mov     rdi, [rsp+38h+var_38]
//   0x3BC122 mov     rdx, [rsp+38h+var_30]
//   0x3BC127 mov     [rbx+8], rax
//   0x3BC12B mov     rax, rdi
//   0x3BC12E jmp     short loc_3BC13A
//   0x3BC130 add     rax, 1
//   0x3BC134 cmp     byte ptr [rax-1], 0
//   0x3BC138 jz      short loc_3BC160
//   0x3BC13A cmp     rax, rdx
//   0x3BC13D jb      short loc_3BC130
//   0x3BC13F mov     rsi, [rbx]
//   0x3BC142 lea     rdi, aAFailedToUnpac; "%a: failed to unpack sourcefile_t\n"
//   0x3BC149 xor     eax, eax
//   0x3BC14B call    sub_84F5B0
//   0x3BC150 lea     rdi, byte_22F0C30
//   0x3BC157 jmp     short loc_3BC169
//   0x3BC159 align 20h
//   0x3BC160 mov     [rsp+38h+var_38], rax
//   0x3BC164 test    rdi, rdi
//   0x3BC167 jz      short loc_3BC13F
//   0x3BC169 call    _qstrdup
//   0x3BC16E mov     [rbx+10h], rax
//   0x3BC172 test    rax, rax
//   0x3BC175 jz      short loc_3BC1D7
//   0x3BC177 mov     rax, [rsp+38h+var_20]
//   0x3BC17C sub     rax, fs:28h
//   0x3BC185 jnz     short loc_3BC1F5
//   0x3BC187 add     rsp, 20h
//   0x3BC18B pop     rbx
//   0x3BC18C pop     rbp
//   0x3BC18D pop     r12
//   0x3BC18F retn
//   0x3BC190 call    _unpack_dd
//   0x3BC195 mov     edx, 0FFFFFFFFh
//   0x3BC19A add     eax, ebp
//   0x3BC19C mov     eax, eax
//   0x3BC19E cmp     rax, rdx
//   0x3BC1A1 mov     rdx, 0FFFFFFFFFFFFFFFFh
//   0x3BC1A8 cmovz   rax, rdx
//   0x3BC1AC jmp     loc_3BC11E
//   0x3BC1B1 align 8
//   0x3BC1B8 call    _unpack_dd
//   0x3BC1BD mov     ebp, eax
//   0x3BC1BF mov     eax, 0FFFFFFFFh
//   0x3BC1C4 cmp     rbp, rax
//   0x3BC1C7 mov     rax, 0FFFFFFFFFFFFFFFFh
//   0x3BC1CE cmovz   rbp, rax
//   0x3BC1D2 jmp     loc_3BC102
//   0x3BC1D7 mov     rax, [rsp+38h+var_20]
//   0x3BC1DC sub     rax, fs:28h
//   0x3BC1E5 jnz     short loc_3BC1F5
//   0x3BC1E7 lea     rdi, aUserClosedSour+0Ch; "source files"
//   0x3BC1EE xor     eax, eax
//   0x3BC1F0 call    sub_3BC000
//   0x3BC1F5 call    ___stack_chk_fail
// ============================================================

void sub_3BC0C0(/* signature unknown */)
{
    // see disassembly above
}

