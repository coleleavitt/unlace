// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x1348A0
// Name:           sub_1348A0
// Function size:  351 bytes (87 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x1348A0 push    rbp
//   0x1348A1 push    rbx
//   0x1348A2 mov     rbx, rdi
//   0x1348A5 sub     rsp, 8
//   0x1348A9 cmp     dword ptr [rdi+138h], 1
//   0x1348B0 jle     short loc_1348D0
//   0x1348B2 or      dword ptr [rdi], 200h
//   0x1348B8 xor     ebp, ebp
//   0x1348BA mov     rdi, rbx
//   0x1348BD mov     esi, 1
//   0x1348C2 call    sub_31DD50
//   0x1348C7 add     rsp, 8
//   0x1348CB mov     eax, ebp
//   0x1348CD pop     rbx
//   0x1348CE pop     rbp
//   0x1348CF retn
//   0x1348D0 lea     rdx, aBeforePreoptim; "before preoptimize"
//   0x1348D7 mov     esi, 1
//   0x1348DC xor     eax, eax
//   0x1348DE call    sub_63560
//   0x1348E3 mov     rdi, rbx
//   0x1348E6 call    nullsub_182
//   0x1348EB mov     rbp, [rbx+208h]
//   0x1348F2 test    rbp, rbp
//   0x1348F5 jz      short loc_134911
//   0x1348F7 nop     word ptr [rax+rax+00000000h]
//   0x134900 mov     rdi, rbp
//   0x134903 call    sub_B2880
//   0x134908 mov     rbp, [rbp+8]
//   0x13490C test    rbp, rbp
//   0x13490F jnz     short loc_134900
//   0x134911 mov     rdi, rbx
//   0x134914 call    sub_A3380
//   0x134919 mov     rdi, rbx
//   0x13491C call    sub_A36F0
//   0x134921 or      dword ptr [rbx], 200h
//   0x134927 mov     rdi, rbx
//   0x13492A xor     eax, eax
//   0x13492C lea     rdx, aAfterPreoptimi; "after preoptimize"
//   0x134933 mov     esi, 1
//   0x134938 call    sub_63560
//   0x13493D mov     rdi, rbx
//   0x134940 call    sub_9CF10
//   0x134945 test    eax, eax
//   0x134947 jnz     short loc_1349B0
//   0x134949 mov     rdi, [rbx+3A0h]
//   0x134950 test    rdi, rdi
//   0x134953 jz      short loc_1349D0
//   0x134955 call    sub_19C310
//   0x13495A lea     rdx, nullsub_75
//   0x134961 mov     [rbx+3A8h], rax
//   0x134968 mov     rdi, rax
//   0x13496B mov     rax, [rax]
//   0x13496E mov     rax, [rax+10h]
//   0x134972 cmp     rax, rdx
//   0x134975 jnz     loc_1349F8
//   0x13497B mov     rdi, [rbx+5D8h]
//   0x134982 mov     rdx, rbx
//   0x134985 mov     esi, 4
//   0x13498A xor     eax, eax
//   0x13498C call    sub_339EC0
//   0x134991 mov     ebp, eax
//   0x134993 test    eax, eax
//   0x134995 jnz     loc_1348BA
//   0x13499B mov     esi, 2
//   0x1349A0 mov     rdi, rbx
//   0x1349A3 call    sub_32CAC0
//   0x1349A8 mov     ebp, eax
//   0x1349AA jmp     loc_1348BA
//   0x1349AF align 10h
//   0x1349B0 lea     rdx, aAfterCombinedO; "after combined operand propagation"
//   0x1349B7 mov     esi, 1
//   0x1349BC mov     rdi, rbx
//   0x1349BF xor     eax, eax
//   0x1349C1 call    sub_63560
//   0x1349C6 jmp     short loc_134949
//   0x1349C8 align 10h
//   0x1349D0 mov     rdi, [rbx+5E0h]
//   0x1349D7 mov     rsi, rbx
//   0x1349DA mov     rax, [rdi]
//   0x1349DD call    qword ptr [rax+138h]
//   0x1349E3 mov     [rbx+3A0h], rax
//   0x1349EA mov     rdi, rax
//   0x1349ED jmp     loc_134955
//   0x1349F2 align 8
//   0x1349F8 call    rax
//   0x1349FA jmp     loc_13497B
// ============================================================

void sub_1348A0(/* signature unknown */)
{
    // see disassembly above
}

