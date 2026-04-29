// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x1CD5E0
// Name:           sub_1CD5E0
// Function size:  361 bytes (89 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x1CD5E0 push    r13
//   0x1CD5E2 push    r12
//   0x1CD5E4 push    rbp
//   0x1CD5E5 mov     rbp, rsi
//   0x1CD5E8 mov     rsi, rdx
//   0x1CD5EB push    rbx
//   0x1CD5EC mov     rbx, rdi
//   0x1CD5EF sub     rsp, 28h
//   0x1CD5F3 mov     r12, fs:28h
//   0x1CD5FC mov     [rsp+48h+var_30], r12
//   0x1CD601 mov     r12, rdx
//   0x1CD604 call    sub_3F1370
//   0x1CD609 mov     r13d, eax
//   0x1CD60C test    al, al
//   0x1CD60E jz      loc_1CD6AE
//   0x1CD614 mov     rdx, [rbx+60h]
//   0x1CD618 mov     rax, [rbx+58h]
//   0x1CD61C lea     rdx, [rdx+rdx*4]
//   0x1CD620 shl     rdx, 4
//   0x1CD624 add     rdx, rax
//   0x1CD627 cmp     rdx, rax
//   0x1CD62A jnz     short loc_1CD64D
//   0x1CD62C jmp     loc_1CD6D0
//   0x1CD631 align 20h
//   0x1CD640 add     rax, 50h ; 'P'
//   0x1CD644 cmp     rax, rdx
//   0x1CD647 jz      loc_1CD6D0
//   0x1CD64D test    byte ptr [rax+48h], 2
//   0x1CD651 jz      short loc_1CD640
//   0x1CD653 movzx   edi, byte ptr [r12+0Dh]
//   0x1CD659 mov     rbx, [rbx+10h]
//   0x1CD65D call    _get_dtype_size
//   0x1CD662 mov     rdi, rbx
//   0x1CD665 mov     edx, 1
//   0x1CD66A movsxd  rsi, eax
//   0x1CD66D call    sub_133580
//   0x1CD672 mov     ebx, eax
//   0x1CD674 cmp     eax, 0FFFFFFFFh
//   0x1CD677 jz      loc_1CD717
//   0x1CD67D movzx   edi, byte ptr [r12+0Dh]
//   0x1CD683 call    _get_dtype_size
//   0x1CD688 mov     rsi, rsp
//   0x1CD68B mov     rdi, rbp
//   0x1CD68E mov     [rsp+48h+var_40], ebx
//   0x1CD692 mov     [rsp+48h+var_48], 1
//   0x1CD69A mov     rbx, rsp
//   0x1CD69D mov     dword ptr [rsp+48h+var_48+4], eax
//   0x1CD6A1 call    sub_1205C0
//   0x1CD6A6 mov     rdi, rsp
//   0x1CD6A9 call    sub_1181E0
//   0x1CD6AE mov     rax, [rsp+48h+var_30]
//   0x1CD6B3 sub     rax, fs:28h
//   0x1CD6BC jnz     short loc_1CD712
//   0x1CD6BE add     rsp, 28h
//   0x1CD6C2 mov     eax, r13d
//   0x1CD6C5 pop     rbx
//   0x1CD6C6 pop     rbp
//   0x1CD6C7 pop     r12
//   0x1CD6C9 pop     r13
//   0x1CD6CB retn
//   0x1CD6CC align 10h
//   0x1CD6D0 mov     rax, [rbx+8]
//   0x1CD6D4 movzx   edi, byte ptr [r12+0Dh]
//   0x1CD6DA mov     r13, [rax+70h]
//   0x1CD6DE call    _get_dtype_size
//   0x1CD6E3 mov     rcx, rax
//   0x1CD6E6 mov     rax, [rsp+48h+var_30]
//   0x1CD6EB sub     rax, fs:28h
//   0x1CD6F4 jnz     short loc_1CD712
//   0x1CD6F6 add     rsp, 28h
//   0x1CD6FA lea     rdx, [rbx+80h]
//   0x1CD701 mov     rsi, rbp
//   0x1CD704 mov     rdi, r13
//   0x1CD707 pop     rbx
//   0x1CD708 pop     rbp
//   0x1CD709 pop     r12
//   0x1CD70B pop     r13
//   0x1CD70D jmp     sub_1CD450
//   0x1CD712 call    ___stack_chk_fail
//   0x1CD717 mov     rax, cs:under_debugger_ptr
//   0x1CD71E cmp     byte ptr [rax], 0
//   0x1CD721 jnz     loc_4087A
//   0x1CD727 mov     rax, [rsp+48h+var_30]
//   0x1CD72C sub     rax, fs:28h
//   0x1CD735 jnz     short loc_1CD712
//   0x1CD737 mov     edi, 0CE3Fh
//   0x1CD73C call    sub_37CFE0
//   0x1CD741 mov     rbp, rax
//   0x1CD744 jmp     loc_4087C
// ============================================================

void sub_1CD5E0(/* signature unknown */)
{
    // see disassembly above
}

