// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x241450
// Name:           sub_241450
// Function size:  270 bytes (75 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x241450 push    r12
//   0x241452 push    rbp
//   0x241453 push    rbx
//   0x241454 movsxd  rbx, esi
//   0x241457 mov     esi, 0Dh
//   0x24145C sub     rsp, 10h
//   0x241460 mov     rdi, [rdi]
//   0x241463 mov     rbp, fs:28h
//   0x24146C mov     [rsp+28h+var_20], rbp
//   0x241471 mov     ebp, edx
//   0x241473 mov     [rsp+28h+var_28], 0
//   0x24147B call    _get_tinfo_property
//   0x241480 mov     [rsp+28h+var_28], rax
//   0x241484 mov     r12, rsp
//   0x241487 test    al, al
//   0x241489 jnz     short loc_2414B8
//   0x24148B xor     ebx, ebx
//   0x24148D mov     rdi, r12
//   0x241490 call    _clear_tinfo_t
//   0x241495 mov     rax, [rsp+28h+var_20]
//   0x24149A sub     rax, fs:28h
//   0x2414A3 jnz     loc_241549
//   0x2414A9 add     rsp, 10h
//   0x2414AD mov     eax, ebx
//   0x2414AF pop     rbx
//   0x2414B0 pop     rbp
//   0x2414B1 pop     r12
//   0x2414B3 retn
//   0x2414B4 align 8
//   0x2414B8 mov     rdi, rax
//   0x2414BB call    _verify_tinfo
//   0x2414C0 test    eax, eax
//   0x2414C2 jnz     short loc_24148B
//   0x2414C4 mov     rdi, rsp
//   0x2414C7 call    sub_32DD50
//   0x2414CC test    al, al
//   0x2414CE jnz     short loc_24148B
//   0x2414D0 cmp     ebx, 0FFFFFFFFh
//   0x2414D3 jz      short loc_241520
//   0x2414D5 and     ebp, 2
//   0x2414D8 jnz     short loc_2414EF
//   0x2414DA mov     rdi, [rsp+28h+var_28]
//   0x2414DE mov     esi, 2
//   0x2414E3 call    _get_tinfo_property
//   0x2414E8 and     eax, 0Fh
//   0x2414EB cmp     al, 0Bh
//   0x2414ED jz      short loc_241520
//   0x2414EF mov     rdi, [rsp+28h+var_28]
//   0x2414F3 mov     esi, 2
//   0x2414F8 call    _get_tinfo_property
//   0x2414FD and     eax, 0Fh
//   0x241500 cmp     al, 0Bh
//   0x241502 jz      short loc_241530
//   0x241504 mov     rsi, [rsp+28h+var_28]
//   0x241508 xor     edx, edx
//   0x24150A xor     edi, edi
//   0x24150C call    _get_tinfo_size
//   0x241511 cmp     rbx, rax
//   0x241514 setz    bl
//   0x241517 jmp     loc_24148D
//   0x24151C align 20h
//   0x241520 mov     ebx, 1
//   0x241525 jmp     loc_24148D
//   0x24152A align 10h
//   0x241530 mov     rdi, [rsp+28h+var_28]
//   0x241534 mov     esi, 0Ch
//   0x241539 call    _get_tinfo_property
//   0x24153E cmp     eax, 1
//   0x241541 jnz     loc_24148B
//   0x241547 jmp     short loc_241504
//   0x241549 call    ___stack_chk_fail
//   0x24154E mov     rbx, rax
//   0x241551 jmp     loc_48E48
//   0x241556 mov     rbx, rax
//   0x241559 jmp     loc_48E68
// ============================================================

void sub_241450(/* signature unknown */)
{
    // see disassembly above
}

