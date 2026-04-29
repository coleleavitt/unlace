// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x268180
// Name:           sub_268180
// Function size:  391 bytes (88 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x268180 push    r12
//   0x268182 add     rsi, 30h ; '0'
//   0x268186 push    rbp
//   0x268187 lea     rbp, [rdi+88h]
//   0x26818E push    rbx
//   0x26818F sub     rsp, 10h
//   0x268193 mov     rbx, fs:28h
//   0x26819C mov     [rsp+28h+var_20], rbx
//   0x2681A1 mov     rbx, rdi
//   0x2681A4 mov     rdi, rbp
//   0x2681A7 call    _copy_tinfo_t
//   0x2681AC mov     esi, 2
//   0x2681B1 mov     dword ptr [rbx+1BCh], 0
//   0x2681BB mov     rdi, [rbx+88h]
//   0x2681C2 call    _get_tinfo_property
//   0x2681C7 mov     rdi, [rbx+88h]
//   0x2681CE and     eax, 0Fh
//   0x2681D1 cmp     al, 0Ah
//   0x2681D3 jnz     loc_268260
//   0x2681D9 mov     esi, 9
//   0x2681DE mov     [rsp+28h+var_28], 0
//   0x2681E6 call    _get_tinfo_property
//   0x2681EB mov     rsi, rsp
//   0x2681EE mov     rdi, rbp
//   0x2681F1 mov     [rsp+28h+var_28], rax
//   0x2681F5 mov     r12, rsp
//   0x2681F8 call    _copy_tinfo_t
//   0x2681FD mov     rdi, rsp
//   0x268200 call    _clear_tinfo_t
//   0x268205 mov     rdi, rbp
//   0x268208 call    sub_328AF0
//   0x26820D test    al, al
//   0x26820F jnz     loc_2682B0
//   0x268215 mov     dword ptr [rbx+1BCh], 1
//   0x26821F mov     rdi, [rbx+88h]
//   0x268226 call    _verify_tinfo
//   0x26822B test    eax, eax
//   0x26822D jnz     loc_2682D0
//   0x268233 mov     rsi, [rbx+88h]
//   0x26823A xor     edx, edx
//   0x26823C xor     edi, edi
//   0x26823E call    _get_tinfo_size
//   0x268243 mov     rdx, [rsp+28h+var_20]
//   0x268248 sub     rdx, fs:28h
//   0x268251 jnz     loc_2682DA
//   0x268257 add     rsp, 10h
//   0x26825B pop     rbx
//   0x26825C pop     rbp
//   0x26825D pop     r12
//   0x26825F retn
//   0x268260 mov     esi, 2
//   0x268265 call    _get_tinfo_property
//   0x26826A and     eax, 0Fh
//   0x26826D cmp     al, 0Bh
//   0x26826F jnz     short loc_26821F
//   0x268271 mov     rdi, [rbx+88h]
//   0x268278 mov     esi, 0Bh
//   0x26827D mov     [rsp+28h+var_28], 0
//   0x268285 call    _get_tinfo_property
//   0x26828A mov     rsi, rsp
//   0x26828D mov     rdi, rbp
//   0x268290 mov     [rsp+28h+var_28], rax
//   0x268294 mov     r12, rsp
//   0x268297 call    _copy_tinfo_t
//   0x26829C mov     rdi, rsp
//   0x26829F call    _clear_tinfo_t
//   0x2682A4 or      dword ptr [rbx+1BCh], 2
//   0x2682AB jmp     loc_26821F
//   0x2682B0 mov     rsi, rsp
//   0x2682B3 mov     rdi, rbp
//   0x2682B6 mov     [rsp+28h+var_28], 1
//   0x2682BE call    _copy_tinfo_t
//   0x2682C3 mov     rdi, rsp
//   0x2682C6 call    _clear_tinfo_t
//   0x2682CB jmp     loc_268215
//   0x2682D0 mov     eax, 0FFFFFFFFh
//   0x2682D5 jmp     loc_268243
//   0x2682DA call    ___stack_chk_fail
//   0x2682DF mov     rbx, rax
//   0x2682E2 jmp     loc_48FAE
//   0x2682E7 mov     rbx, rax
//   0x2682EA jmp     loc_48FD2
//   0x2682EF mov     rbx, rax
//   0x2682F2 jmp     loc_4901C
//   0x2682F7 mov     rbx, rax
//   0x2682FA jmp     loc_48FF2
//   0x2682FF mov     rbx, rax
//   0x268302 jmp     loc_4903C
// ============================================================

void sub_268180(/* signature unknown */)
{
    // see disassembly above
}

