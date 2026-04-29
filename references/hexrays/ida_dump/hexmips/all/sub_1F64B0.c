// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x1F64B0
// Name:           sub_1F64B0
// Function size:  798 bytes (172 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x1F64B0 push    r12
//   0x1F64B2 push    rbp
//   0x1F64B3 push    rbx
//   0x1F64B4 sub     rsp, 50h
//   0x1F64B8 mov     rax, fs:28h
//   0x1F64C1 mov     [rsp+68h+var_20], rax
//   0x1F64C6 xor     eax, eax
//   0x1F64C8 test    byte ptr [rdi+2], 8
//   0x1F64CC jnz     short loc_1F64DA
//   0x1F64CE cmp     dword ptr [rdi+138h], 7
//   0x1F64D5 mov     rbx, rdi
//   0x1F64D8 jle     short loc_1F6500
//   0x1F64DA mov     rax, [rsp+68h+var_20]
//   0x1F64DF sub     rax, fs:28h
//   0x1F64E8 jnz     loc_1F6797
//   0x1F64EE add     rsp, 50h
//   0x1F64F2 pop     rbx
//   0x1F64F3 pop     rbp
//   0x1F64F4 pop     r12
//   0x1F64F6 retn
//   0x1F64F7 align 20h
//   0x1F6500 mov     rbp, [rdi+3A8h]
//   0x1F6507 mov     rdi, [rbp+18h]
//   0x1F650B test    rdi, rdi
//   0x1F650E jz      short loc_1F652D
//   0x1F6510 mov     qword ptr [rbp+20h], 0
//   0x1F6518 call    _qfree
//   0x1F651D mov     qword ptr [rbp+18h], 0
//   0x1F6525 mov     qword ptr [rbp+28h], 0
//   0x1F652D mov     dword ptr [rbp+30h], 0FFFFFFFFh
//   0x1F6534 mov     rdi, rbx
//   0x1F6537 call    sub_1F62B0
//   0x1F653C test    eax, eax
//   0x1F653E jnz     loc_1F679C
//   0x1F6544 cmp     byte ptr [rbx+140h], 0
//   0x1F654B mov     rbp, rsp
//   0x1F654E jnz     loc_1F65DD
//   0x1F6554 mov     rdi, rbx
//   0x1F6557 lea     r12, off_4BEB58
//   0x1F655E call    sub_379600
//   0x1F6563 mov     rdi, rbx
//   0x1F6566 call    sub_36DE00
//   0x1F656B pxor    xmm0, xmm0
//   0x1F656F mov     rsi, rsp
//   0x1F6572 mov     rdi, rbx
//   0x1F6575 mov     [rsp+68h+var_60], 0
//   0x1F657E mov     [rsp+68h+var_58], 0
//   0x1F6587 mov     [rsp+68h+var_50], 0
//   0x1F6590 mov     [rsp+68h+var_48], 0
//   0x1F6599 mov     [rsp+68h+var_68], r12
//   0x1F659D mov     [rsp+68h+var_40], 0
//   0x1F65A6 mov     [rsp+68h+var_28], 0
//   0x1F65AF movaps  [rsp+68h+var_38], xmm0
//   0x1F65B4 call    sub_316870
//   0x1F65B9 mov     rdi, rbx
//   0x1F65BC call    sub_1ECD80
//   0x1F65C1 mov     rdi, [rsp+68h+var_40]
//   0x1F65C6 mov     [rsp+68h+var_68], r12
//   0x1F65CA test    rdi, rdi
//   0x1F65CD jz      short loc_1F65DD
//   0x1F65CF mov     qword ptr [rsp+68h+var_38], 0
//   0x1F65D8 call    _qfree
//   0x1F65DD mov     rdi, rbx
//   0x1F65E0 call    sub_FAE80
//   0x1F65E5 or      dword ptr [rbx], 80000h
//   0x1F65EB mov     rdi, rbx
//   0x1F65EE call    sub_1EF0D0
//   0x1F65F3 mov     rdi, rbx
//   0x1F65F6 call    sub_138540
//   0x1F65FB mov     rdi, rbx
//   0x1F65FE call    sub_20EBA0
//   0x1F6603 mov     rdi, rbx
//   0x1F6606 call    sub_20EDD0
//   0x1F660B mov     rdi, rbx
//   0x1F660E call    sub_20EF10
//   0x1F6613 mov     rdi, rbx
//   0x1F6616 call    sub_215350
//   0x1F661B mov     rsi, rbp
//   0x1F661E lea     rax, off_4BF2D0
//   0x1F6625 mov     rdi, rbx
//   0x1F6628 mov     [rsp+68h+var_60], 0
//   0x1F6631 mov     [rsp+68h+var_58], 0
//   0x1F663A mov     [rsp+68h+var_50], 0
//   0x1F6643 mov     [rsp+68h+var_48], 0
//   0x1F664C mov     [rsp+68h+var_68], rax
//   0x1F6650 call    sub_11B7E0
//   0x1F6655 mov     rdi, rbx
//   0x1F6658 call    sub_215A40
//   0x1F665D mov     rdi, rbx
//   0x1F6660 call    sub_20F120
//   0x1F6665 mov     rsi, rbp
//   0x1F6668 mov     rdi, rbx
//   0x1F666B mov     byte ptr [rsp+68h+var_40], 0
//   0x1F6670 mov     [rsp+68h+var_60], 0
//   0x1F6679 lea     rax, off_4BF398
//   0x1F6680 mov     [rsp+68h+var_58], 0
//   0x1F6689 mov     [rsp+68h+var_50], 0
//   0x1F6692 mov     [rsp+68h+var_48], 0
//   0x1F669B mov     [rsp+68h+var_68], rax
//   0x1F669F call    sub_11B9B0
//   0x1F66A4 mov     rdi, rbx
//   0x1F66A7 call    sub_1EC9C0
//   0x1F66AC mov     rdi, rbx
//   0x1F66AF call    sub_216A20
//   0x1F66B4 mov     eax, [rbx+48h]
//   0x1F66B7 cmp     eax, 10h
//   0x1F66BA jbe     loc_1F6788
//   0x1F66C0 cmp     eax, 0B0h
//   0x1F66C5 jz      short loc_1F6730
//   0x1F66C7 cmp     eax, 100h
//   0x1F66CC jz      short loc_1F6730
//   0x1F66CE mov     rax, [rbx+1B8h]
//   0x1F66D5 mov     rbp, [rbx+1B0h]
//   0x1F66DC lea     rdx, [rax+rax*2]
//   0x1F66E0 lea     rax, [rax+rdx*4]
//   0x1F66E4 lea     r12, [rbp+rax*8+0]
//   0x1F66E9 cmp     r12, rbp
//   0x1F66EC jnz     short loc_1F66F9
//   0x1F66EE jmp     short loc_1F6730
//   0x1F66F0 add     rbp, 68h ; 'h'
//   0x1F66F4 cmp     r12, rbp
//   0x1F66F7 jz      short loc_1F6730
//   0x1F66F9 test    byte ptr [rbp+19h], 1
//   0x1F66FD jz      short loc_1F66F0
//   0x1F66FF mov     rdi, [rbp+50h]
//   0x1F6703 mov     esi, 2
//   0x1F6708 call    _get_tinfo_property
//   0x1F670D and     eax, 0Fh
//   0x1F6710 cmp     al, 0Bh
//   0x1F6712 jnz     short loc_1F66F0
//   0x1F6714 mov     edx, 15h
//   0x1F6719 mov     rsi, 0FFFFFFFFFFFFFFFFh
//   0x1F6720 mov     rdi, rbx
//   0x1F6723 xor     eax, eax
//   0x1F6725 call    sub_32C190
//   0x1F672A nop     word ptr [rax+rax+00h]
//   0x1F6730 mov     rdi, [rbx+3A8h]
//   0x1F6737 mov     rax, [rdi]
//   0x1F673A call    qword ptr [rax+40h]
//   0x1F673D mov     esi, 8
//   0x1F6742 mov     rdi, rbx
//   0x1F6745 call    sub_32BEC0
//   0x1F674A xor     esi, esi
//   0x1F674C xor     eax, eax
//   0x1F674E lea     rdx, aAfterAllocLvar; "after alloc_lvar"
//   0x1F6755 mov     rdi, rbx
//   0x1F6758 call    sub_62DA0
//   0x1F675D mov     rax, [rsp+68h+var_20]
//   0x1F6762 sub     rax, fs:28h
//   0x1F676B jnz     short loc_1F6797
//   0x1F676D add     rsp, 50h
//   0x1F6771 mov     rdi, rbx
//   0x1F6774 mov     esi, 1
//   0x1F6779 pop     rbx
//   0x1F677A pop     rbp
//   0x1F677B pop     r12
//   0x1F677D jmp     sub_31D150
//   0x1F6782 align 8
//   0x1F6788 mov     edi, 63h ; 'c'
//   0x1F678D call    _getinf
//   0x1F6792 jmp     loc_1F66C0
//   0x1F6797 call    ___stack_chk_fail
//   0x1F679C mov     rax, cs:under_debugger_ptr
//   0x1F67A3 cmp     byte ptr [rax], 0
//   0x1F67A6 jnz     loc_42BBC
//   0x1F67AC mov     rax, [rsp+68h+var_20]
//   0x1F67B1 sub     rax, fs:28h
//   0x1F67BA jnz     short loc_1F6797
//   0x1F67BC mov     edi, 0C4B4h
//   0x1F67C1 call    sub_37E160
//   0x1F67C6 mov     rbx, rax
//   0x1F67C9 jmp     loc_42BBE
// ============================================================

void sub_1F64B0(/* signature unknown */)
{
    // see disassembly above
}

