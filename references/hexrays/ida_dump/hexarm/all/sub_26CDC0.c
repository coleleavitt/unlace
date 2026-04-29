// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x26CDC0
// Name:           sub_26CDC0
// Function size:  391 bytes (88 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x26CDC0 push    r12
//   0x26CDC2 add     rsi, 30h ; '0'
//   0x26CDC6 push    rbp
//   0x26CDC7 lea     rbp, [rdi+88h]
//   0x26CDCE push    rbx
//   0x26CDCF sub     rsp, 10h
//   0x26CDD3 mov     rbx, fs:28h
//   0x26CDDC mov     [rsp+28h+var_20], rbx
//   0x26CDE1 mov     rbx, rdi
//   0x26CDE4 mov     rdi, rbp
//   0x26CDE7 call    _copy_tinfo_t
//   0x26CDEC mov     esi, 2
//   0x26CDF1 mov     dword ptr [rbx+1BCh], 0
//   0x26CDFB mov     rdi, [rbx+88h]
//   0x26CE02 call    _get_tinfo_property
//   0x26CE07 mov     rdi, [rbx+88h]
//   0x26CE0E and     eax, 0Fh
//   0x26CE11 cmp     al, 0Ah
//   0x26CE13 jnz     loc_26CEA0
//   0x26CE19 mov     esi, 9
//   0x26CE1E mov     [rsp+28h+var_28], 0
//   0x26CE26 call    _get_tinfo_property
//   0x26CE2B mov     rsi, rsp
//   0x26CE2E mov     rdi, rbp
//   0x26CE31 mov     [rsp+28h+var_28], rax
//   0x26CE35 mov     r12, rsp
//   0x26CE38 call    _copy_tinfo_t
//   0x26CE3D mov     rdi, rsp
//   0x26CE40 call    _clear_tinfo_t
//   0x26CE45 mov     rdi, rbp
//   0x26CE48 call    sub_32DD50
//   0x26CE4D test    al, al
//   0x26CE4F jnz     loc_26CEF0
//   0x26CE55 mov     dword ptr [rbx+1BCh], 1
//   0x26CE5F mov     rdi, [rbx+88h]
//   0x26CE66 call    _verify_tinfo
//   0x26CE6B test    eax, eax
//   0x26CE6D jnz     loc_26CF10
//   0x26CE73 mov     rsi, [rbx+88h]
//   0x26CE7A xor     edx, edx
//   0x26CE7C xor     edi, edi
//   0x26CE7E call    _get_tinfo_size
//   0x26CE83 mov     rdx, [rsp+28h+var_20]
//   0x26CE88 sub     rdx, fs:28h
//   0x26CE91 jnz     loc_26CF1A
//   0x26CE97 add     rsp, 10h
//   0x26CE9B pop     rbx
//   0x26CE9C pop     rbp
//   0x26CE9D pop     r12
//   0x26CE9F retn
//   0x26CEA0 mov     esi, 2
//   0x26CEA5 call    _get_tinfo_property
//   0x26CEAA and     eax, 0Fh
//   0x26CEAD cmp     al, 0Bh
//   0x26CEAF jnz     short loc_26CE5F
//   0x26CEB1 mov     rdi, [rbx+88h]
//   0x26CEB8 mov     esi, 0Bh
//   0x26CEBD mov     [rsp+28h+var_28], 0
//   0x26CEC5 call    _get_tinfo_property
//   0x26CECA mov     rsi, rsp
//   0x26CECD mov     rdi, rbp
//   0x26CED0 mov     [rsp+28h+var_28], rax
//   0x26CED4 mov     r12, rsp
//   0x26CED7 call    _copy_tinfo_t
//   0x26CEDC mov     rdi, rsp
//   0x26CEDF call    _clear_tinfo_t
//   0x26CEE4 or      dword ptr [rbx+1BCh], 2
//   0x26CEEB jmp     loc_26CE5F
//   0x26CEF0 mov     rsi, rsp
//   0x26CEF3 mov     rdi, rbp
//   0x26CEF6 mov     [rsp+28h+var_28], 1
//   0x26CEFE call    _copy_tinfo_t
//   0x26CF03 mov     rdi, rsp
//   0x26CF06 call    _clear_tinfo_t
//   0x26CF0B jmp     loc_26CE55
//   0x26CF10 mov     eax, 0FFFFFFFFh
//   0x26CF15 jmp     loc_26CE83
//   0x26CF1A call    ___stack_chk_fail
//   0x26CF1F mov     rbx, rax
//   0x26CF22 jmp     loc_4C11C
//   0x26CF27 mov     rbx, rax
//   0x26CF2A jmp     loc_4C140
//   0x26CF2F mov     rbx, rax
//   0x26CF32 jmp     loc_4C18A
//   0x26CF37 mov     rbx, rax
//   0x26CF3A jmp     loc_4C160
//   0x26CF3F mov     rbx, rax
//   0x26CF42 jmp     loc_4C1AA
// ============================================================

void sub_26CDC0(/* signature unknown */)
{
    // see disassembly above
}

