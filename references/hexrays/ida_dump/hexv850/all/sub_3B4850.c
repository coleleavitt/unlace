// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x3B4850
// Name:           sub_3B4850
// Function size:  178 bytes (64 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x3B4850 push    rbp
//   0x3B4851 mov     rbp, rdi
//   0x3B4854 push    rbx
//   0x3B4855 sub     rsp, 8
//   0x3B4859 cmp     dword ptr [rdx+8], 1Bh
//   0x3B485D jz      short loc_3B4880
//   0x3B485F mov     rbx, rsi
//   0x3B4862 test    rsi, rsi
//   0x3B4865 jz      short loc_3B4876
//   0x3B4867 mov     eax, [rdi+20h]
//   0x3B486A test    al, 1
//   0x3B486C jnz     short loc_3B48D8
//   0x3B486E test    al, 10h
//   0x3B4870 jnz     short loc_3B48F0
//   0x3B4872 test    al, 8
//   0x3B4874 jnz     short loc_3B48B8
//   0x3B4876 xor     eax, eax
//   0x3B4878 add     rsp, 8
//   0x3B487C pop     rbx
//   0x3B487D pop     rbp
//   0x3B487E retn
//   0x3B487F align 20h
//   0x3B4880 mov     rbx, cs:callui_ptr
//   0x3B4887 mov     edi, 47h ; 'G'
//   0x3B488C xor     eax, eax
//   0x3B488E call    qword ptr [rbx]
//   0x3B4890 mov     edi, 48h ; 'H'
//   0x3B4895 mov     rsi, rax
//   0x3B4898 xor     eax, eax
//   0x3B489A call    qword ptr [rbx]
//   0x3B489C test    al, al
//   0x3B489E jz      short loc_3B4876
//   0x3B48A0 mov     rdi, [rbp+10h]
//   0x3B48A4 call    sub_398750
//   0x3B48A9 add     rsp, 8
//   0x3B48AD mov     eax, 1
//   0x3B48B2 pop     rbx
//   0x3B48B3 pop     rbp
//   0x3B48B4 retn
//   0x3B48B5 align 8
//   0x3B48B8 lea     rdi, [rsi+38h]
//   0x3B48BC call    sub_3876A0
//   0x3B48C1 mov     rdi, rbx
//   0x3B48C4 mov     rsi, rax
//   0x3B48C7 call    sub_389700
//   0x3B48CC movzx   eax, al
//   0x3B48CF jmp     short loc_3B4878
//   0x3B48D1 align 8
//   0x3B48D8 mov     rdi, rbx
//   0x3B48DB lea     rsi, [rsi+70h]
//   0x3B48DF call    sub_3897F0
//   0x3B48E4 add     rsp, 8
//   0x3B48E8 movzx   eax, al
//   0x3B48EB pop     rbx
//   0x3B48EC pop     rbp
//   0x3B48ED retn
//   0x3B48EE align 10h
//   0x3B48F0 mov     rdi, rsi
//   0x3B48F3 call    sub_389960
//   0x3B48F8 add     rsp, 8
//   0x3B48FC movzx   eax, al
//   0x3B48FF pop     rbx
//   0x3B4900 pop     rbp
//   0x3B4901 retn
// ============================================================

void sub_3B4850(/* signature unknown */)
{
    // see disassembly above
}

