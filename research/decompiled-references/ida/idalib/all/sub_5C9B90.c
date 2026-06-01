// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x5C9B90
// Name:           sub_5C9B90
// Function size:  186 bytes (60 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x5C9B90 push    r13
//   0x5C9B92 push    r12
//   0x5C9B94 push    rbp
//   0x5C9B95 mov     rbp, rdi
//   0x5C9B98 push    rbx
//   0x5C9B99 mov     rbx, rsi
//   0x5C9B9C sub     rsp, 8
//   0x5C9BA0 call    sub_63F420
//   0x5C9BA5 mov     eax, [rbx+60h]
//   0x5C9BA8 test    eax, eax
//   0x5C9BAA jle     loc_5C9C3F
//   0x5C9BB0 xor     r12d, r12d
//   0x5C9BB3 jmp     short loc_5C9BC2
//   0x5C9BB5 align 8
//   0x5C9BB8 add     r12d, 1
//   0x5C9BBC cmp     [rbx+60h], r12d
//   0x5C9BC0 jle     short loc_5C9C3F
//   0x5C9BC2 movsxd  rax, r12d
//   0x5C9BC5 mov     rsi, rbx
//   0x5C9BC8 mov     rdi, rbp
//   0x5C9BCB shl     rax, 4
//   0x5C9BCF add     rax, [rbx+68h]
//   0x5C9BD3 mov     r13, [rax]
//   0x5C9BD6 mov     rdx, r13
//   0x5C9BD9 call    sub_5C9B30
//   0x5C9BDE test    eax, eax
//   0x5C9BE0 jns     short loc_5C9BB8
//   0x5C9BE2 xor     ecx, ecx
//   0x5C9BE4 mov     rdx, r13
//   0x5C9BE7 mov     rsi, rbx
//   0x5C9BEA mov     rdi, rbp
//   0x5C9BED call    sub_63F740
//   0x5C9BF2 mov     esi, 1
//   0x5C9BF7 mov     rdi, r13
//   0x5C9BFA call    sub_4CB340
//   0x5C9BFF mov     edx, 4
//   0x5C9C04 mov     rsi, r13
//   0x5C9C07 mov     rdi, rbp
//   0x5C9C0A call    sub_3BE900
//   0x5C9C0F test    ah, 10h
//   0x5C9C12 jz      short loc_5C9BBC
//   0x5C9C14 xor     ecx, ecx
//   0x5C9C16 xor     edx, edx
//   0x5C9C18 xor     edi, edi
//   0x5C9C1A mov     rsi, r13
//   0x5C9C1D call    _get_ea_name
//   0x5C9C22 test    rax, rax
//   0x5C9C25 jle     short loc_5C9BBC
//   0x5C9C27 mov     rdx, r13
//   0x5C9C2A mov     rsi, 0FFFFFFFFFFFFFFFFh
//   0x5C9C31 mov     rdi, rbp; int
//   0x5C9C34 call    sub_4D9890
//   0x5C9C39 cmp     [rbx+60h], r12d
//   0x5C9C3D jg      short loc_5C9BC2
//   0x5C9C3F add     rsp, 8
//   0x5C9C43 pop     rbx
//   0x5C9C44 pop     rbp
//   0x5C9C45 pop     r12
//   0x5C9C47 pop     r13
//   0x5C9C49 retn
// ============================================================

void sub_5C9B90(/* signature unknown */)
{
    // see disassembly above
}

