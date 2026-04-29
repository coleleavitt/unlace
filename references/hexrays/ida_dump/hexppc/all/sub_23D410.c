// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x23D410
// Name:           sub_23D410
// Function size:  270 bytes (75 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x23D410 push    r12
//   0x23D412 push    rbp
//   0x23D413 push    rbx
//   0x23D414 movsxd  rbx, esi
//   0x23D417 mov     esi, 0Dh
//   0x23D41C sub     rsp, 10h
//   0x23D420 mov     rdi, [rdi]
//   0x23D423 mov     rbp, fs:28h
//   0x23D42C mov     [rsp+28h+var_20], rbp
//   0x23D431 mov     ebp, edx
//   0x23D433 mov     [rsp+28h+var_28], 0
//   0x23D43B call    _get_tinfo_property
//   0x23D440 mov     [rsp+28h+var_28], rax
//   0x23D444 mov     r12, rsp
//   0x23D447 test    al, al
//   0x23D449 jnz     short loc_23D478
//   0x23D44B xor     ebx, ebx
//   0x23D44D mov     rdi, r12
//   0x23D450 call    _clear_tinfo_t
//   0x23D455 mov     rax, [rsp+28h+var_20]
//   0x23D45A sub     rax, fs:28h
//   0x23D463 jnz     loc_23D509
//   0x23D469 add     rsp, 10h
//   0x23D46D mov     eax, ebx
//   0x23D46F pop     rbx
//   0x23D470 pop     rbp
//   0x23D471 pop     r12
//   0x23D473 retn
//   0x23D474 align 8
//   0x23D478 mov     rdi, rax
//   0x23D47B call    _verify_tinfo
//   0x23D480 test    eax, eax
//   0x23D482 jnz     short loc_23D44B
//   0x23D484 mov     rdi, rsp
//   0x23D487 call    sub_3296F0
//   0x23D48C test    al, al
//   0x23D48E jnz     short loc_23D44B
//   0x23D490 cmp     ebx, 0FFFFFFFFh
//   0x23D493 jz      short loc_23D4E0
//   0x23D495 and     ebp, 2
//   0x23D498 jnz     short loc_23D4AF
//   0x23D49A mov     rdi, [rsp+28h+var_28]
//   0x23D49E mov     esi, 2
//   0x23D4A3 call    _get_tinfo_property
//   0x23D4A8 and     eax, 0Fh
//   0x23D4AB cmp     al, 0Bh
//   0x23D4AD jz      short loc_23D4E0
//   0x23D4AF mov     rdi, [rsp+28h+var_28]
//   0x23D4B3 mov     esi, 2
//   0x23D4B8 call    _get_tinfo_property
//   0x23D4BD and     eax, 0Fh
//   0x23D4C0 cmp     al, 0Bh
//   0x23D4C2 jz      short loc_23D4F0
//   0x23D4C4 mov     rsi, [rsp+28h+var_28]
//   0x23D4C8 xor     edx, edx
//   0x23D4CA xor     edi, edi
//   0x23D4CC call    _get_tinfo_size
//   0x23D4D1 cmp     rbx, rax
//   0x23D4D4 setz    bl
//   0x23D4D7 jmp     loc_23D44D
//   0x23D4DC align 20h
//   0x23D4E0 mov     ebx, 1
//   0x23D4E5 jmp     loc_23D44D
//   0x23D4EA align 10h
//   0x23D4F0 mov     rdi, [rsp+28h+var_28]
//   0x23D4F4 mov     esi, 0Ch
//   0x23D4F9 call    _get_tinfo_property
//   0x23D4FE cmp     eax, 1
//   0x23D501 jnz     loc_23D44B
//   0x23D507 jmp     short loc_23D4C4
//   0x23D509 call    ___stack_chk_fail
//   0x23D50E mov     rbx, rax
//   0x23D511 jmp     loc_45D10
//   0x23D516 mov     rbx, rax
//   0x23D519 jmp     loc_45D30
// ============================================================

void sub_23D410(/* signature unknown */)
{
    // see disassembly above
}

