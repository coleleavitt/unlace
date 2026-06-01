// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x2C2F20
// Name:           sub_2C2F20
// Function size:  430 bytes (110 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x2C2F20 push    r12
//   0x2C2F22 mov     r12, rdi
//   0x2C2F25 push    rbp
//   0x2C2F26 mov     rbp, rdx
//   0x2C2F29 push    rbx
//   0x2C2F2A sar     rbp, 20h
//   0x2C2F2E sub     rsp, 10h
//   0x2C2F32 mov     rbx, fs:28h
//   0x2C2F3B mov     [rsp+28h+var_20], rbx
//   0x2C2F40 mov     rbx, rsi
//   0x2C2F43 test    byte ptr [rsi+23h], 4
//   0x2C2F47 jz      short loc_2C2F70
//   0x2C2F49 test    ebp, ebp
//   0x2C2F4B jnz     short loc_2C2FC0
//   0x2C2F4D mov     rax, [rsp+28h+var_20]
//   0x2C2F52 sub     rax, fs:28h
//   0x2C2F5B jnz     loc_2C30C9
//   0x2C2F61 add     rsp, 10h
//   0x2C2F65 xor     eax, eax
//   0x2C2F67 pop     rbx
//   0x2C2F68 pop     rbp
//   0x2C2F69 pop     r12
//   0x2C2F6B retn
//   0x2C2F6C align 10h
//   0x2C2F70 test    edx, edx
//   0x2C2F72 jnz     loc_2C3040
//   0x2C2F78 test    ebp, ebp
//   0x2C2F7A jz      short loc_2C2F4D
//   0x2C2F7C mov     eax, ebp
//   0x2C2F7E movzx   esi, byte ptr [rbx+23h]
//   0x2C2F82 pxor    xmm0, xmm0
//   0x2C2F86 mov     rdi, r12
//   0x2C2F89 neg     eax
//   0x2C2F8B cmovs   eax, ebp
//   0x2C2F8E xor     edx, edx
//   0x2C2F90 test    ebp, ebp
//   0x2C2F92 setnle  dl
//   0x2C2F95 shr     sil, 3
//   0x2C2F99 cvtsi2sd xmm0, eax
//   0x2C2F9D mulsd   xmm0, cs:qword_5DBFA0
//   0x2C2FA5 and     esi, 1
//   0x2C2FA8 divsd   xmm0, cs:qword_5DBE80
//   0x2C2FB0 call    sub_2B7740
//   0x2C2FB5 jmp     short loc_2C2F4D
//   0x2C2FB7 align 20h
//   0x2C2FC0 mov     rdi, [rdi+10h]; this
//   0x2C2FC4 call    __ZNK2QT19QAbstractScrollArea8viewportEv; QT::QAbstractScrollArea::viewport(void)
//   0x2C2FC9 mov     rdi, rax
//   0x2C2FCC call    sub_1C7B10
//   0x2C2FD1 lea     rdx, sub_2B2520
//   0x2C2FD8 mov     [rsp+28h+var_28], rax
//   0x2C2FDC mov     rax, [r12]
//   0x2C2FE0 mov     rax, [rax+138h]
//   0x2C2FE7 cmp     rax, rdx
//   0x2C2FEA jnz     loc_2C30A8
//   0x2C2FF0 mov     rax, [r12+10h]
//   0x2C2FF5 lea     rdi, [rax+180h]
//   0x2C2FFC call    sub_1EA6C0
//   0x2C3001 movsd   xmm1, qword ptr [rax]
//   0x2C3005 pxor    xmm0, xmm0
//   0x2C3009 movzx   eax, byte ptr [rbx+4Fh]
//   0x2C300D cvtsi2sd xmm0, ebp
//   0x2C3011 shr     al, 4
//   0x2C3014 and     eax, 7
//   0x2C3017 mulsd   xmm0, xmm1
//   0x2C301B divsd   xmm0, cs:qword_5DBF00
//   0x2C3023 addsd   xmm0, xmm1
//   0x2C3027 cmp     al, 4
//   0x2C3029 jz      short loc_2C3080
//   0x2C302B mov     rsi, rsp
//   0x2C302E xor     edx, edx
//   0x2C3030 mov     rdi, r12
//   0x2C3033 call    sub_2C2BB0
//   0x2C3038 jmp     loc_2C2F4D
//   0x2C303D align 20h
//   0x2C3040 mov     eax, edx
//   0x2C3042 pxor    xmm0, xmm0
//   0x2C3046 mov     esi, 1
//   0x2C304B neg     eax
//   0x2C304D cmovs   eax, edx
//   0x2C3050 test    edx, edx
//   0x2C3052 setnle  dl
//   0x2C3055 cvtsi2sd xmm0, eax
//   0x2C3059 mulsd   xmm0, cs:qword_5DBFA0
//   0x2C3061 movzx   edx, dl
//   0x2C3064 divsd   xmm0, cs:qword_5DBE80
//   0x2C306C call    sub_2B7740
//   0x2C3071 test    ebp, ebp
//   0x2C3073 jz      loc_2C2F4D
//   0x2C3079 jmp     loc_2C2F7C
//   0x2C307E align 20h
//   0x2C3080 movsd   xmm2, cs:dbl_5DC300
//   0x2C3088 comisd  xmm1, xmm2
//   0x2C308C jb      short loc_2C3094
//   0x2C308E comisd  xmm2, xmm0
//   0x2C3092 ja      short loc_2C30C0
//   0x2C3094 comisd  xmm2, xmm1
//   0x2C3098 jb      short loc_2C302B
//   0x2C309A minsd   xmm2, xmm0
//   0x2C309E movapd  xmm0, xmm2
//   0x2C30A2 jmp     short loc_2C302B
//   0x2C30A4 align 8
//   0x2C30A8 mov     rdi, r12
//   0x2C30AB call    rax
//   0x2C30AD movapd  xmm1, xmm0
//   0x2C30B1 jmp     loc_2C3005
//   0x2C30B6 align 20h
//   0x2C30C0 movapd  xmm0, xmm2
//   0x2C30C4 jmp     loc_2C302B
//   0x2C30C9 call    ___stack_chk_fail
// ============================================================

void sub_2C2F20(/* signature unknown */)
{
    // see disassembly above
}

