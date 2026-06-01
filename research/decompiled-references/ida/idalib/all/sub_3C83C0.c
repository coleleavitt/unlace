// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x3C83C0
// Name:           sub_3C83C0
// Function size:  370 bytes (91 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x3C83C0 push    r14
//   0x3C83C2 push    r13
//   0x3C83C4 mov     r13, rsi
//   0x3C83C7 push    r12
//   0x3C83C9 push    rbp
//   0x3C83CA push    rbx
//   0x3C83CB mov     rbx, rdi
//   0x3C83CE sub     rsp, 30h
//   0x3C83D2 mov     rsi, [rcx+8]
//   0x3C83D6 mov     rbp, fs:28h
//   0x3C83DF mov     [rsp+58h+var_30], rbp
//   0x3C83E4 mov     rbp, rdx
//   0x3C83E7 lea     r12, [rsp+58h+var_50]
//   0x3C83EC xor     edx, edx
//   0x3C83EE mov     [rsp+58h+var_50], 0
//   0x3C83F7 mov     rcx, r12
//   0x3C83FA call    sub_6BD6E0
//   0x3C83FF test    eax, eax
//   0x3C8401 jnz     short loc_3C8430
//   0x3C8403 mov     rdi, r12
//   0x3C8406 call    _clear_tinfo_t
//   0x3C840B mov     rax, [rsp+58h+var_30]
//   0x3C8410 sub     rax, fs:28h
//   0x3C8419 jnz     loc_3C850D
//   0x3C841F add     rsp, 30h
//   0x3C8423 pop     rbx
//   0x3C8424 pop     rbp
//   0x3C8425 pop     r12
//   0x3C8427 pop     r13
//   0x3C8429 pop     r14
//   0x3C842B retn
//   0x3C842C align 10h
//   0x3C8430 mov     rdi, [rsp+58h+var_50]
//   0x3C8435 mov     esi, 2
//   0x3C843A call    _get_tinfo_property
//   0x3C843F and     eax, 2Fh
//   0x3C8442 cmp     al, 0Dh
//   0x3C8444 jnz     short loc_3C8403
//   0x3C8446 mov     r9d, 1
//   0x3C844C lea     r8, [rsp+58h+var_48]
//   0x3C8451 xor     ecx, ecx
//   0x3C8453 mov     rsi, r12
//   0x3C8456 lea     rdx, ds:0[rbp*8]
//   0x3C845E lea     rbp, [rsp+58h+var_40]
//   0x3C8463 mov     [rsp+58h+var_40], 0
//   0x3C846C mov     rdi, rbp
//   0x3C846F call    _tinfo_get_innermost_udm
//   0x3C8474 mov     rdi, [rsp+58h+var_40]
//   0x3C8479 test    dil, dil
//   0x3C847C jz      loc_3C8500
//   0x3C8482 cmp     [rsp+58h+var_48], 0
//   0x3C8488 jnz     short loc_3C8500
//   0x3C848A mov     [rsp+58h+var_38], 0
//   0x3C8493 mov     esi, 9
//   0x3C8498 call    _get_tinfo_property
//   0x3C849D mov     rdi, rax
//   0x3C84A0 mov     esi, 2
//   0x3C84A5 mov     [rsp+58h+var_38], rax
//   0x3C84AA lea     r14, [rsp+58h+var_38]
//   0x3C84AF call    _get_tinfo_property
//   0x3C84B4 and     eax, 0Fh
//   0x3C84B7 cmp     al, 0Ch
//   0x3C84B9 jnz     short loc_3C84F0
//   0x3C84BB lea     r14, [rsp+58h+var_38]
//   0x3C84C0 mov     rsi, r13
//   0x3C84C3 mov     rdi, rbx
//   0x3C84C6 mov     rdx, r14
//   0x3C84C9 call    sub_610740
//   0x3C84CE mov     rdi, r14
//   0x3C84D1 call    _clear_tinfo_t
//   0x3C84D6 mov     rdi, rbp
//   0x3C84D9 call    _clear_tinfo_t
//   0x3C84DE mov     rdi, r12
//   0x3C84E1 call    _clear_tinfo_t
//   0x3C84E6 jmp     loc_3C840B
//   0x3C84EB align 10h
//   0x3C84F0 lea     rdi, [rsp+58h+var_38]
//   0x3C84F5 call    _clear_tinfo_t
//   0x3C84FA nop     word ptr [rax+rax+00h]
//   0x3C8500 mov     rdi, rbp
//   0x3C8503 call    _clear_tinfo_t
//   0x3C8508 jmp     loc_3C8403
//   0x3C850D call    ___stack_chk_fail
//   0x3C8512 mov     rbx, rax
//   0x3C8515 jmp     loc_2B3EA0
//   0x3C851A mov     rbx, rax
//   0x3C851D jmp     loc_2B3ED0
//   0x3C8522 mov     rbx, rax
//   0x3C8525 jmp     loc_2B3EDF
//   0x3C852A mov     rbx, rax
//   0x3C852D jmp     loc_2B3EB0
// ============================================================

void sub_3C83C0(/* signature unknown */)
{
    // see disassembly above
}

