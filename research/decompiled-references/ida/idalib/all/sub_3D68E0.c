// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x3D68E0
// Name:           sub_3D68E0
// Function size:  530 bytes (140 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x3D68E0 push    r15; int
//   0x3D68E2 push    r14; int
//   0x3D68E4 push    r13; int
//   0x3D68E6 push    r12; int
//   0x3D68E8 push    rbp; __int64
//   0x3D68E9 push    rbx; void *
//   0x3D68EA sub     rsp, 48h
//   0x3D68EE movzx   r15d, word ptr [rsi+1Ah]
//   0x3D68F3 mov     rax, fs:28h
//   0x3D68FC mov     [rsp+78h+var_40], rax; int
//   0x3D6901 xor     eax, eax
//   0x3D6903 test    r15w, r15w
//   0x3D6907 jnz     short loc_3D6938
//   0x3D6909 xor     r12d, r12d
//   0x3D690C mov     rax, [rsp+78h+var_40]
//   0x3D6911 sub     rax, fs:28h
//   0x3D691A jnz     loc_3D6ADD
//   0x3D6920 add     rsp, 48h
//   0x3D6924 mov     eax, r12d
//   0x3D6927 pop     rbx
//   0x3D6928 pop     rbp
//   0x3D6929 pop     r12
//   0x3D692B pop     r13
//   0x3D692D pop     r14
//   0x3D692F pop     r15
//   0x3D6931 retn
//   0x3D6932 align 8
//   0x3D6938 mov     r13, [rsi+10h]
//   0x3D693C mov     rbx, rsi
//   0x3D693F mov     r12, rdx
//   0x3D6942 mov     edx, 1
//   0x3D6947 mov     rbp, rdi
//   0x3D694A mov     rsi, r13
//   0x3D694D call    sub_3BE900
//   0x3D6952 test    ah, 1
//   0x3D6955 jz      short loc_3D6909
//   0x3D6957 mov     rax, [r12+10h]
//   0x3D695C pxor    xmm0, xmm0
//   0x3D6960 mov     [rsp+78h+ptr], 0
//   0x3D6969 lea     r14, [rsp+78h+var_68]
//   0x3D696E mov     [rsp+78h+ptr+8], 0; ptr
//   0x3D6977 movaps  xmmword ptr [rsp+78h+var_68], xmm0; int
//   0x3D697C test    rax, rax
//   0x3D697F jz      short loc_3D699A
//   0x3D6981 mov     edx, 2
//   0x3D6986 mov     rsi, r12
//   0x3D6989 mov     rdi, r14
//   0x3D698C call    rax
//   0x3D698E movdqu  xmm0, xmmword ptr [r12+10h]
//   0x3D6995 movaps  xmmword ptr [rsp+78h+ptr], xmm0; int
//   0x3D699A mov     r8, r14
//   0x3D699D xor     ecx, ecx
//   0x3D699F mov     rdx, r15
//   0x3D69A2 mov     rsi, r13
//   0x3D69A5 mov     rdi, rbp; int
//   0x3D69A8 call    sub_3D4AC0
//   0x3D69AD mov     r12d, eax
//   0x3D69B0 mov     rax, [rsp+78h+ptr]
//   0x3D69B5 test    rax, rax
//   0x3D69B8 jz      short loc_3D69C7
//   0x3D69BA mov     edx, 3
//   0x3D69BF mov     rsi, r14
//   0x3D69C2 mov     rdi, r14
//   0x3D69C5 call    rax
//   0x3D69C7 test    r12b, r12b
//   0x3D69CA jz      loc_3D6909
//   0x3D69D0 mov     rsi, rbx
//   0x3D69D3 mov     edi, 31h ; '1'
//   0x3D69D8 xor     eax, eax
//   0x3D69DA call    sub_39ADA0
//   0x3D69DF xor     edx, edx
//   0x3D69E1 mov     rsi, r13
//   0x3D69E4 mov     rdi, rbp
//   0x3D69E7 call    sub_3BE900
//   0x3D69EC mov     rbx, rax
//   0x3D69EF test    ah, 4
//   0x3D69F2 jz      short loc_3D6A47
//   0x3D69F4 mov     r14, rax
//   0x3D69F7 and     r14d, 600h
//   0x3D69FE cmp     r14, 400h
//   0x3D6A05 jz      loc_3D6909
//   0x3D6A0B mov     rax, [rbp+408h]
//   0x3D6A12 mov     rdi, r13
//   0x3D6A15 mov     qword ptr [rsp+78h+var_70], rax; int
//   0x3D6A1A call    _get_item_end
//   0x3D6A1F sub     rax, r13
//   0x3D6A22 cmp     r15, rax
//   0x3D6A25 jz      short loc_3D6A68
//   0x3D6A27 mov     rax, rbx
//   0x3D6A2A and     eax, 0C000h
//   0x3D6A2F cmp     rax, 8000h
//   0x3D6A35 jz      short loc_3D6A90
//   0x3D6A37 mov     rdx, qword ptr [rsp+78h+var_70]
//   0x3D6A3C mov     rsi, r13
//   0x3D6A3F mov     rdi, rbp
//   0x3D6A42 call    sub_3D0260
//   0x3D6A47 or      bh, 6
//   0x3D6A4A mov     rsi, r13
//   0x3D6A4D mov     rdi, rbp
//   0x3D6A50 mov     rdx, rbx
//   0x3D6A53 call    sub_3D07C0
//   0x3D6A58 xor     ecx, ecx
//   0x3D6A5A mov     rdx, r15
//   0x3D6A5D mov     rsi, r13
//   0x3D6A60 mov     rdi, rbp; int
//   0x3D6A63 call    sub_3D3420
//   0x3D6A68 mov     rsi, r13
//   0x3D6A6B mov     rdi, rbp
//   0x3D6A6E call    sub_5CD8C0
//   0x3D6A73 mov     rdi, [rbp+0]
//   0x3D6A77 lea     rdx, [r15+r13]
//   0x3D6A7B mov     rsi, r13
//   0x3D6A7E call    sub_359AE0
//   0x3D6A83 jmp     loc_3D690C
//   0x3D6A88 align 10h
//   0x3D6A90 cmp     r14, 600h
//   0x3D6A97 jz      short loc_3D6ACF
//   0x3D6A99 test    bh, 10h
//   0x3D6A9C jnz     short loc_3D6A37
//   0x3D6A9E mov     rdx, r15
//   0x3D6AA1 mov     rsi, r13
//   0x3D6AA4 mov     rdi, rbp
//   0x3D6AA7 call    sub_3C1E00
//   0x3D6AAC test    al, al
//   0x3D6AAE jnz     short loc_3D6A37
//   0x3D6AB0 mov     ecx, 100h
//   0x3D6AB5 mov     rsi, r13; int
//   0x3D6AB8 mov     rdi, rbp; int
//   0x3D6ABB and     bh, 7Fh
//   0x3D6ABE lea     rdx, byte_22F0C30; src
//   0x3D6AC5 call    sub_4D7EC0
//   0x3D6ACA jmp     loc_3D6A37
//   0x3D6ACF test    ebx, 10000000h
//   0x3D6AD5 jnz     loc_3D6A37
//   0x3D6ADB jmp     short loc_3D6A99
//   0x3D6ADD call    ___stack_chk_fail
//   0x3D6AE2 mov     rbx, rax
//   0x3D6AE5 jmp     loc_2B4924
//   0x3D6AEA mov     rbx, rax
//   0x3D6AED jmp     loc_2B4944
// ============================================================

void sub_3D68E0(/* signature unknown */)
{
    // see disassembly above
}

