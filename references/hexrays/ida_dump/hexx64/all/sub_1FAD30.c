// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x1FAD30
// Name:           sub_1FAD30
// Function size:  798 bytes (172 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x1FAD30 push    r12
//   0x1FAD32 push    rbp
//   0x1FAD33 push    rbx
//   0x1FAD34 sub     rsp, 50h
//   0x1FAD38 mov     rax, fs:28h
//   0x1FAD41 mov     [rsp+68h+var_20], rax
//   0x1FAD46 xor     eax, eax
//   0x1FAD48 test    byte ptr [rdi+2], 8
//   0x1FAD4C jnz     short loc_1FAD5A
//   0x1FAD4E cmp     dword ptr [rdi+138h], 7
//   0x1FAD55 mov     rbx, rdi
//   0x1FAD58 jle     short loc_1FAD80
//   0x1FAD5A mov     rax, [rsp+68h+var_20]
//   0x1FAD5F sub     rax, fs:28h
//   0x1FAD68 jnz     loc_1FB017
//   0x1FAD6E add     rsp, 50h
//   0x1FAD72 pop     rbx
//   0x1FAD73 pop     rbp
//   0x1FAD74 pop     r12
//   0x1FAD76 retn
//   0x1FAD77 align 20h
//   0x1FAD80 mov     rbp, [rdi+3A8h]
//   0x1FAD87 mov     rdi, [rbp+18h]
//   0x1FAD8B test    rdi, rdi
//   0x1FAD8E jz      short loc_1FADAD
//   0x1FAD90 mov     qword ptr [rbp+20h], 0
//   0x1FAD98 call    _qfree
//   0x1FAD9D mov     qword ptr [rbp+18h], 0
//   0x1FADA5 mov     qword ptr [rbp+28h], 0
//   0x1FADAD mov     dword ptr [rbp+30h], 0FFFFFFFFh
//   0x1FADB4 mov     rdi, rbx
//   0x1FADB7 call    sub_1FAB30
//   0x1FADBC test    eax, eax
//   0x1FADBE jnz     loc_1FB01C
//   0x1FADC4 cmp     byte ptr [rbx+140h], 0
//   0x1FADCB mov     rbp, rsp
//   0x1FADCE jnz     loc_1FAE5D
//   0x1FADD4 mov     rdi, rbx
//   0x1FADD7 lea     r12, off_4DE3D8
//   0x1FADDE call    sub_37E500
//   0x1FADE3 mov     rdi, rbx
//   0x1FADE6 call    sub_372D00
//   0x1FADEB pxor    xmm0, xmm0
//   0x1FADEF mov     rsi, rsp
//   0x1FADF2 mov     rdi, rbx
//   0x1FADF5 mov     [rsp+68h+var_60], 0
//   0x1FADFE mov     [rsp+68h+var_58], 0
//   0x1FAE07 mov     [rsp+68h+var_50], 0
//   0x1FAE10 mov     [rsp+68h+var_48], 0
//   0x1FAE19 mov     [rsp+68h+var_68], r12
//   0x1FAE1D mov     [rsp+68h+var_40], 0
//   0x1FAE26 mov     [rsp+68h+var_28], 0
//   0x1FAE2F movaps  [rsp+68h+var_38], xmm0
//   0x1FAE34 call    sub_31B5F0
//   0x1FAE39 mov     rdi, rbx
//   0x1FAE3C call    sub_1F1600
//   0x1FAE41 mov     rdi, [rsp+68h+var_40]
//   0x1FAE46 mov     [rsp+68h+var_68], r12
//   0x1FAE4A test    rdi, rdi
//   0x1FAE4D jz      short loc_1FAE5D
//   0x1FAE4F mov     qword ptr [rsp+68h+var_38], 0
//   0x1FAE58 call    _qfree
//   0x1FAE5D mov     rdi, rbx
//   0x1FAE60 call    sub_FF080
//   0x1FAE65 or      dword ptr [rbx], 80000h
//   0x1FAE6B mov     rdi, rbx
//   0x1FAE6E call    sub_1F3950
//   0x1FAE73 mov     rdi, rbx
//   0x1FAE76 call    sub_13C740
//   0x1FAE7B mov     rdi, rbx
//   0x1FAE7E call    sub_213420
//   0x1FAE83 mov     rdi, rbx
//   0x1FAE86 call    sub_213650
//   0x1FAE8B mov     rdi, rbx
//   0x1FAE8E call    sub_213790
//   0x1FAE93 mov     rdi, rbx
//   0x1FAE96 call    sub_219BD0
//   0x1FAE9B mov     rsi, rbp
//   0x1FAE9E lea     rax, off_4DEB90
//   0x1FAEA5 mov     rdi, rbx
//   0x1FAEA8 mov     [rsp+68h+var_60], 0
//   0x1FAEB1 mov     [rsp+68h+var_58], 0
//   0x1FAEBA mov     [rsp+68h+var_50], 0
//   0x1FAEC3 mov     [rsp+68h+var_48], 0
//   0x1FAECC mov     [rsp+68h+var_68], rax
//   0x1FAED0 call    sub_11F9E0
//   0x1FAED5 mov     rdi, rbx
//   0x1FAED8 call    sub_21A2C0
//   0x1FAEDD mov     rdi, rbx
//   0x1FAEE0 call    sub_2139A0
//   0x1FAEE5 mov     rsi, rbp
//   0x1FAEE8 mov     rdi, rbx
//   0x1FAEEB mov     byte ptr [rsp+68h+var_40], 0
//   0x1FAEF0 mov     [rsp+68h+var_60], 0
//   0x1FAEF9 lea     rax, off_4DEC58
//   0x1FAF00 mov     [rsp+68h+var_58], 0
//   0x1FAF09 mov     [rsp+68h+var_50], 0
//   0x1FAF12 mov     [rsp+68h+var_48], 0
//   0x1FAF1B mov     [rsp+68h+var_68], rax
//   0x1FAF1F call    sub_11FBB0
//   0x1FAF24 mov     rdi, rbx
//   0x1FAF27 call    sub_1F1240
//   0x1FAF2C mov     rdi, rbx
//   0x1FAF2F call    sub_21B2A0
//   0x1FAF34 mov     eax, [rbx+48h]
//   0x1FAF37 cmp     eax, 10h
//   0x1FAF3A jbe     loc_1FB008
//   0x1FAF40 cmp     eax, 0B0h
//   0x1FAF45 jz      short loc_1FAFB0
//   0x1FAF47 cmp     eax, 100h
//   0x1FAF4C jz      short loc_1FAFB0
//   0x1FAF4E mov     rax, [rbx+1B8h]
//   0x1FAF55 mov     rbp, [rbx+1B0h]
//   0x1FAF5C lea     rdx, [rax+rax*2]
//   0x1FAF60 lea     rax, [rax+rdx*4]
//   0x1FAF64 lea     r12, [rbp+rax*8+0]
//   0x1FAF69 cmp     r12, rbp
//   0x1FAF6C jnz     short loc_1FAF79
//   0x1FAF6E jmp     short loc_1FAFB0
//   0x1FAF70 add     rbp, 68h ; 'h'
//   0x1FAF74 cmp     r12, rbp
//   0x1FAF77 jz      short loc_1FAFB0
//   0x1FAF79 test    byte ptr [rbp+19h], 1
//   0x1FAF7D jz      short loc_1FAF70
//   0x1FAF7F mov     rdi, [rbp+50h]
//   0x1FAF83 mov     esi, 2
//   0x1FAF88 call    _get_tinfo_property
//   0x1FAF8D and     eax, 0Fh
//   0x1FAF90 cmp     al, 0Bh
//   0x1FAF92 jnz     short loc_1FAF70
//   0x1FAF94 mov     edx, 15h
//   0x1FAF99 mov     rsi, 0FFFFFFFFFFFFFFFFh
//   0x1FAFA0 mov     rdi, rbx
//   0x1FAFA3 xor     eax, eax
//   0x1FAFA5 call    sub_3311F0
//   0x1FAFAA nop     word ptr [rax+rax+00h]
//   0x1FAFB0 mov     rdi, [rbx+3A8h]
//   0x1FAFB7 mov     rax, [rdi]
//   0x1FAFBA call    qword ptr [rax+40h]
//   0x1FAFBD mov     esi, 8
//   0x1FAFC2 mov     rdi, rbx
//   0x1FAFC5 call    sub_330F20
//   0x1FAFCA xor     esi, esi
//   0x1FAFCC xor     eax, eax
//   0x1FAFCE lea     rdx, aAfterAllocLvar; "after alloc_lvar"
//   0x1FAFD5 mov     rdi, rbx
//   0x1FAFD8 call    sub_66FA0
//   0x1FAFDD mov     rax, [rsp+68h+var_20]
//   0x1FAFE2 sub     rax, fs:28h
//   0x1FAFEB jnz     short loc_1FB017
//   0x1FAFED add     rsp, 50h
//   0x1FAFF1 mov     rdi, rbx
//   0x1FAFF4 mov     esi, 1
//   0x1FAFF9 pop     rbx
//   0x1FAFFA pop     rbp
//   0x1FAFFB pop     r12
//   0x1FAFFD jmp     sub_321ED0
//   0x1FB002 align 8
//   0x1FB008 mov     edi, 63h ; 'c'
//   0x1FB00D call    _getinf
//   0x1FB012 jmp     loc_1FAF40
//   0x1FB017 call    ___stack_chk_fail
//   0x1FB01C mov     rax, cs:under_debugger_ptr
//   0x1FB023 cmp     byte ptr [rax], 0
//   0x1FB026 jnz     loc_43D76
//   0x1FB02C mov     rax, [rsp+68h+var_20]
//   0x1FB031 sub     rax, fs:28h
//   0x1FB03A jnz     short loc_1FB017
//   0x1FB03C mov     edi, 0C4B4h
//   0x1FB041 call    sub_383060
//   0x1FB046 mov     rbx, rax
//   0x1FB049 jmp     loc_43D78
// ============================================================

void sub_1FAD30(/* signature unknown */)
{
    // see disassembly above
}

