// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x3B5650
// Name:           sub_3B5650
// Function size:  178 bytes (64 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x3B5650 push    rbp
//   0x3B5651 mov     rbp, rdi
//   0x3B5654 push    rbx
//   0x3B5655 sub     rsp, 8
//   0x3B5659 cmp     dword ptr [rdx+8], 1Bh
//   0x3B565D jz      short loc_3B5680
//   0x3B565F mov     rbx, rsi
//   0x3B5662 test    rsi, rsi
//   0x3B5665 jz      short loc_3B5676
//   0x3B5667 mov     eax, [rdi+20h]
//   0x3B566A test    al, 1
//   0x3B566C jnz     short loc_3B56D8
//   0x3B566E test    al, 10h
//   0x3B5670 jnz     short loc_3B56F0
//   0x3B5672 test    al, 8
//   0x3B5674 jnz     short loc_3B56B8
//   0x3B5676 xor     eax, eax
//   0x3B5678 add     rsp, 8
//   0x3B567C pop     rbx
//   0x3B567D pop     rbp
//   0x3B567E retn
//   0x3B567F align 20h
//   0x3B5680 mov     rbx, cs:callui_ptr
//   0x3B5687 mov     edi, 47h ; 'G'
//   0x3B568C xor     eax, eax
//   0x3B568E call    qword ptr [rbx]
//   0x3B5690 mov     edi, 48h ; 'H'
//   0x3B5695 mov     rsi, rax
//   0x3B5698 xor     eax, eax
//   0x3B569A call    qword ptr [rbx]
//   0x3B569C test    al, al
//   0x3B569E jz      short loc_3B5676
//   0x3B56A0 mov     rdi, [rbp+10h]
//   0x3B56A4 call    sub_399550
//   0x3B56A9 add     rsp, 8
//   0x3B56AD mov     eax, 1
//   0x3B56B2 pop     rbx
//   0x3B56B3 pop     rbp
//   0x3B56B4 retn
//   0x3B56B5 align 8
//   0x3B56B8 lea     rdi, [rsi+38h]
//   0x3B56BC call    sub_3884A0
//   0x3B56C1 mov     rdi, rbx
//   0x3B56C4 mov     rsi, rax
//   0x3B56C7 call    sub_38A500
//   0x3B56CC movzx   eax, al
//   0x3B56CF jmp     short loc_3B5678
//   0x3B56D1 align 8
//   0x3B56D8 mov     rdi, rbx
//   0x3B56DB lea     rsi, [rsi+70h]
//   0x3B56DF call    sub_38A5F0
//   0x3B56E4 add     rsp, 8
//   0x3B56E8 movzx   eax, al
//   0x3B56EB pop     rbx
//   0x3B56EC pop     rbp
//   0x3B56ED retn
//   0x3B56EE align 10h
//   0x3B56F0 mov     rdi, rsi
//   0x3B56F3 call    sub_38A760
//   0x3B56F8 add     rsp, 8
//   0x3B56FC movzx   eax, al
//   0x3B56FF pop     rbx
//   0x3B5700 pop     rbp
//   0x3B5701 retn
// ============================================================

void sub_3B5650(/* signature unknown */)
{
    // see disassembly above
}

