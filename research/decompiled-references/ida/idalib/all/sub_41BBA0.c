// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x41BBA0
// Name:           sub_41BBA0
// Function size:  891 bytes (218 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x41BBA0 push    r15; int
//   0x41BBA2 mov     r15d, r9d
//   0x41BBA5 push    r14; int
//   0x41BBA7 mov     r14d, r8d
//   0x41BBAA push    r13; int
//   0x41BBAC push    r12; int
//   0x41BBAE mov     r12, rdi
//   0x41BBB1 push    rbp; int
//   0x41BBB2 mov     rbp, rdx
//   0x41BBB5 mov     edx, 4
//   0x41BBBA push    rbx; int
//   0x41BBBB mov     rbx, rsi
//   0x41BBBE mov     rsi, rbp
//   0x41BBC1 sub     rsp, 38h
//   0x41BBC5 mov     r13, fs:28h
//   0x41BBCE mov     [rsp+68h+ptr], r13; int
//   0x41BBD3 mov     r13, [rsp+68h+arg_0]
//   0x41BBD8 call    sub_3BE900
//   0x41BBDD mov     edx, [rbx+10h]
//   0x41BBE0 and     eax, 600h
//   0x41BBE5 test    dl, 2
//   0x41BBE8 jz      short loc_41BC28
//   0x41BBEA test    rax, rax
//   0x41BBED jnz     loc_41BDA8
//   0x41BBF3 and     edx, 4
//   0x41BBF6 jnz     loc_41BE10
//   0x41BBFC xor     eax, eax
//   0x41BBFE mov     rdx, [rsp+68h+ptr]
//   0x41BC03 sub     rdx, fs:28h
//   0x41BC0C jnz     loc_41BF16
//   0x41BC12 add     rsp, 38h
//   0x41BC16 pop     rbx
//   0x41BC17 pop     rbp
//   0x41BC18 pop     r12
//   0x41BC1A pop     r13
//   0x41BC1C pop     r14
//   0x41BC1E pop     r15
//   0x41BC20 retn
//   0x41BC21 align 8
//   0x41BC28 test    rax, rax
//   0x41BC2B jnz     short loc_41BC60
//   0x41BC2D movzx   eax, byte ptr [rbx+14h]
//   0x41BC31 cmp     al, 4
//   0x41BC33 jz      loc_41BE28
//   0x41BC39 ja      loc_41BEC8
//   0x41BC3F cmp     al, 1
//   0x41BC41 jz      loc_41BEF8
//   0x41BC47 cmp     al, 2
//   0x41BC49 jnz     short loc_41BBFC
//   0x41BC4B mov     esi, 2
//   0x41BC50 mov     rdi, rbp
//   0x41BC53 call    _create_16bit_data
//   0x41BC58 mov     edx, [rbx+10h]
//   0x41BC5B nop     dword ptr [rax+rax+00h]
//   0x41BC60 mov     edi, [rbx+18h]
//   0x41BC63 mov     eax, edi
//   0x41BC65 or      ah, 2
//   0x41BC68 test    dl, 10h
//   0x41BC6B cmovz   eax, edi
//   0x41BC6E mov     [rsp+68h+var_50], eax; int
//   0x41BC72 movzx   eax, byte ptr [r13+4]
//   0x41BC77 and     eax, 1
//   0x41BC7A and     edx, 8
//   0x41BC7D jz      loc_41BD50
//   0x41BC83 mov     qword ptr [rsp+68h+var_60], 0; int
//   0x41BC8C test    al, al
//   0x41BC8E jnz     loc_41BDC0
//   0x41BC94 mov     rdi, [r13+10h]
//   0x41BC98 cmp     rdi, 0FFFFFFFFFFFFFFFFh
//   0x41BC9C jz      loc_41BEB8
//   0x41BCA2 call    _sel2para
//   0x41BCA7 mov     rcx, qword ptr [rsp+68h+var_60]
//   0x41BCAC shl     rax, 4
//   0x41BCB0 mov     rdx, rax
//   0x41BCB3 nop     word ptr [rax+rax+00000000h]
//   0x41BCBE xchg    ax, ax
//   0x41BCC0 mov     rax, [r12+18h]
//   0x41BCC5 add     rdx, [r13+18h]
//   0x41BCC9 and     rdx, [rax+10h]
//   0x41BCCD mov     rax, [r13+20h]
//   0x41BCD1 mov     qword ptr [rsp+68h+var_68], rdx; int
//   0x41BCD5 mov     qword ptr [rsp+68h+var_58], rax; int
//   0x41BCDA test    rcx, rcx
//   0x41BCDD jz      short loc_41BCF1
//   0x41BCDF mov     rax, [r12+18h]
//   0x41BCE4 movzx   edx, byte ptr [rbx+14h]
//   0x41BCE8 cmp     edx, [rax+18h]
//   0x41BCEB jl      loc_41BE60
//   0x41BCF1 mov     rbx, rsp
//   0x41BCF4 test    r15b, r15b
//   0x41BCF7 jz      short loc_41BD0C
//   0x41BCF9 movzx   edx, byte ptr [rsp+68h+var_50]
//   0x41BCFE and     edx, 4Fh
//   0x41BD01 lea     eax, [rdx-3]
//   0x41BD04 cmp     al, 3
//   0x41BD06 jbe     loc_41BE90
//   0x41BD0C xor     eax, eax
//   0x41BD0E mov     r8, r13
//   0x41BD11 mov     ecx, r14d
//   0x41BD14 mov     rdx, rbp
//   0x41BD17 mov     rsi, rbx
//   0x41BD1A mov     edi, 31h ; '1'
//   0x41BD1F call    sub_3792E0
//   0x41BD24 test    rax, rax
//   0x41BD27 js      loc_41BBFC
//   0x41BD2D mov     rcx, rbx; int
//   0x41BD30 mov     edx, r14d; int
//   0x41BD33 mov     rsi, rbp; int
//   0x41BD36 mov     rdi, r12; int
//   0x41BD39 call    sub_4E2470
//   0x41BD3E mov     eax, 1
//   0x41BD43 jmp     loc_41BBFE
//   0x41BD48 align 10h
//   0x41BD50 test    al, al
//   0x41BD52 jnz     short loc_41BDD0
//   0x41BD54 mov     rax, [r13+10h]
//   0x41BD58 xor     ecx, ecx
//   0x41BD5A cmp     rax, 0FFFFFFFFFFFFFFFFh
//   0x41BD5E jz      short loc_41BD72
//   0x41BD60 mov     rdi, rax
//   0x41BD63 call    _sel2para
//   0x41BD68 mov     edi, [rbx+18h]
//   0x41BD6B shl     rax, 4
//   0x41BD6F mov     rcx, rax
//   0x41BD72 mov     qword ptr [rsp+68h+var_60], rcx
//   0x41BD77 mov     eax, edi
//   0x41BD79 test    dil, 40h
//   0x41BD7D jnz     short loc_41BDE1
//   0x41BD7F cmp     dil, 2
//   0x41BD83 ja      loc_41BE40
//   0x41BD89 mov     rdx, 0FFFFFFFFFFFFFFFFh
//   0x41BD90 test    dil, dil
//   0x41BD93 jnz     loc_41BCCD
//   0x41BD99 mov     rdx, rcx
//   0x41BD9C jmp     loc_41BCC0
//   0x41BDA1 align 8
//   0x41BDA8 cmp     rax, 600h
//   0x41BDAE jz      loc_41BC60
//   0x41BDB4 jmp     loc_41BBFC
//   0x41BDB9 align 20h
//   0x41BDC0 mov     rdx, [r13+8]
//   0x41BDC4 xor     ecx, ecx
//   0x41BDC6 jmp     loc_41BCC0
//   0x41BDCB align 10h
//   0x41BDD0 mov     rcx, [r13+8]
//   0x41BDD4 mov     eax, edi
//   0x41BDD6 mov     qword ptr [rsp+68h+var_60], rcx
//   0x41BDDB test    dil, 40h
//   0x41BDDF jz      short loc_41BD7F
//   0x41BDE1 movzx   edi, dil
//   0x41BDE5 call    _get_custom_refinfo
//   0x41BDEA mov     rcx, qword ptr [rsp+68h+var_60]
//   0x41BDEF test    rax, rax
//   0x41BDF2 jz      short loc_41BD99
//   0x41BDF4 mov     rdx, 0FFFFFFFFFFFFFFFFh
//   0x41BDFB test    byte ptr [rax+18h], 1
//   0x41BDFF jnz     loc_41BCCD
//   0x41BE05 jmp     short loc_41BD99
//   0x41BE07 align 10h
//   0x41BE10 xor     edx, edx
//   0x41BE12 mov     rsi, rbp; int
//   0x41BE15 mov     rdi, r12; int
//   0x41BE18 call    sub_577F80
//   0x41BE1D mov     edx, [rbx+10h]
//   0x41BE20 jmp     loc_41BC60
//   0x41BE25 align 8
//   0x41BE28 mov     esi, 4
//   0x41BE2D mov     rdi, rbp
//   0x41BE30 call    _create_32bit_data
//   0x41BE35 mov     edx, [rbx+10h]
//   0x41BE38 jmp     loc_41BC60
//   0x41BE3D align 20h
//   0x41BE40 sub     eax, 9
//   0x41BE43 mov     rdx, 0FFFFFFFFFFFFFFFFh
//   0x41BE4A cmp     al, 1
//   0x41BE4C jbe     loc_41BCCD
//   0x41BE52 jmp     loc_41BD99
//   0x41BE57 align 20h
//   0x41BE60 lea     rdi, [r12+658h]
//   0x41BE68 mov     rsi, rbp
//   0x41BE6B call    sub_505D70
//   0x41BE70 cmp     byte ptr [rax+2Bh], 0
//   0x41BE74 jz      loc_41BCF1
//   0x41BE7A or      [rsp+68h+var_50], 200h
//   0x41BE82 jmp     loc_41BCF1
//   0x41BE87 align 10h
//   0x41BE90 movzx   eax, al
//   0x41BE93 lea     rcx, unk_23ADAD0
//   0x41BE9A add     edx, 3
//   0x41BE9D mov     rsi, rbp
//   0x41BEA0 movzx   ecx, byte ptr [rcx+rax]
//   0x41BEA4 movzx   edx, dl
//   0x41BEA7 mov     rdi, rsp
//   0x41BEAA call    _handle_fixups_in_macro
//   0x41BEAF jmp     loc_41BD0C
//   0x41BEB4 align 8
//   0x41BEB8 xor     ecx, ecx
//   0x41BEBA xor     edx, edx
//   0x41BEBC jmp     loc_41BCC0
//   0x41BEC1 align 8
//   0x41BEC8 cmp     al, 8
//   0x41BECA jnz     loc_41BBFC
//   0x41BED0 mov     edx, 8
//   0x41BED5 mov     rcx, 0FFFFFFFFFFFFFFFFh
//   0x41BEDC mov     esi, 30000000h
//   0x41BEE1 mov     rdi, rbp
//   0x41BEE4 call    _create_data
//   0x41BEE9 mov     edx, [rbx+10h]
//   0x41BEEC jmp     loc_41BC60
//   0x41BEF1 align 8
//   0x41BEF8 mov     edx, 1
//   0x41BEFD mov     rcx, 0FFFFFFFFFFFFFFFFh
//   0x41BF04 xor     esi, esi
//   0x41BF06 mov     rdi, rbp
//   0x41BF09 call    _create_data
//   0x41BF0E mov     edx, [rbx+10h]
//   0x41BF11 jmp     loc_41BC60
//   0x41BF16 call    ___stack_chk_fail
// ============================================================

void sub_41BBA0(/* signature unknown */)
{
    // see disassembly above
}

