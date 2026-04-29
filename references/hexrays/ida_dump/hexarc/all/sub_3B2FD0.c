// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x3B2FD0
// Name:           sub_3B2FD0
// Function size:  178 bytes (64 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x3B2FD0 push    rbp
//   0x3B2FD1 mov     rbp, rdi
//   0x3B2FD4 push    rbx
//   0x3B2FD5 sub     rsp, 8
//   0x3B2FD9 cmp     dword ptr [rdx+8], 1Bh
//   0x3B2FDD jz      short loc_3B3000
//   0x3B2FDF mov     rbx, rsi
//   0x3B2FE2 test    rsi, rsi
//   0x3B2FE5 jz      short loc_3B2FF6
//   0x3B2FE7 mov     eax, [rdi+20h]
//   0x3B2FEA test    al, 1
//   0x3B2FEC jnz     short loc_3B3058
//   0x3B2FEE test    al, 10h
//   0x3B2FF0 jnz     short loc_3B3070
//   0x3B2FF2 test    al, 8
//   0x3B2FF4 jnz     short loc_3B3038
//   0x3B2FF6 xor     eax, eax
//   0x3B2FF8 add     rsp, 8
//   0x3B2FFC pop     rbx
//   0x3B2FFD pop     rbp
//   0x3B2FFE retn
//   0x3B2FFF align 20h
//   0x3B3000 mov     rbx, cs:callui_ptr
//   0x3B3007 mov     edi, 47h ; 'G'
//   0x3B300C xor     eax, eax
//   0x3B300E call    qword ptr [rbx]
//   0x3B3010 mov     edi, 48h ; 'H'
//   0x3B3015 mov     rsi, rax
//   0x3B3018 xor     eax, eax
//   0x3B301A call    qword ptr [rbx]
//   0x3B301C test    al, al
//   0x3B301E jz      short loc_3B2FF6
//   0x3B3020 mov     rdi, [rbp+10h]
//   0x3B3024 call    sub_396ED0
//   0x3B3029 add     rsp, 8
//   0x3B302D mov     eax, 1
//   0x3B3032 pop     rbx
//   0x3B3033 pop     rbp
//   0x3B3034 retn
//   0x3B3035 align 8
//   0x3B3038 lea     rdi, [rsi+38h]
//   0x3B303C call    sub_385E20
//   0x3B3041 mov     rdi, rbx
//   0x3B3044 mov     rsi, rax
//   0x3B3047 call    sub_387E80
//   0x3B304C movzx   eax, al
//   0x3B304F jmp     short loc_3B2FF8
//   0x3B3051 align 8
//   0x3B3058 mov     rdi, rbx
//   0x3B305B lea     rsi, [rsi+70h]
//   0x3B305F call    sub_387F70
//   0x3B3064 add     rsp, 8
//   0x3B3068 movzx   eax, al
//   0x3B306B pop     rbx
//   0x3B306C pop     rbp
//   0x3B306D retn
//   0x3B306E align 10h
//   0x3B3070 mov     rdi, rsi
//   0x3B3073 call    sub_3880E0
//   0x3B3078 add     rsp, 8
//   0x3B307C movzx   eax, al
//   0x3B307F pop     rbx
//   0x3B3080 pop     rbp
//   0x3B3081 retn
// ============================================================

void sub_3B2FD0(/* signature unknown */)
{
    // see disassembly above
}

