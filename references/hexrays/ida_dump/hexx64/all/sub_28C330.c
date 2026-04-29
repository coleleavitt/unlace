// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x28C330
// Name:           sub_28C330
// Function size:  406 bytes (111 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x28C330 push    r12
//   0x28C332 mov     r12, rdi
//   0x28C335 push    rbp
//   0x28C336 lea     rbp, jpt_28C354
//   0x28C33D push    rbx
//   0x28C33E mov     rbx, rsi
//   0x28C341 mov     eax, [rbx+8]
//   0x28C344 sub     eax, 46h ; 'F'; switch 12 cases
//   0x28C347 cmp     eax, 0Bh
//   0x28C34A ja      short def_28C354; jumptable 000000000028C354 default case, cases 71,74,76-79
//   0x28C34C movsxd  rax, ss:(jpt_28C354 - 42D0B4h)[rbp+rax*4]
//   0x28C351 add     rax, rbp
//   0x28C354 jmp     rax; switch jump
//   0x28C356 align 20h
//   0x28C360 mov     rsi, rbx; jumptable 000000000028C354 case 72
//   0x28C363 mov     rdi, r12
//   0x28C366 call    sub_28BC80
//   0x28C36B test    al, al
//   0x28C36D jnz     short loc_28C341
//   0x28C36F nop
//   0x28C370 xor     eax, eax; jumptable 000000000028C354 default case, cases 71,74,76-79
//   0x28C372 pop     rbx
//   0x28C373 pop     rbp
//   0x28C374 pop     r12
//   0x28C376 retn
//   0x28C377 align 20h
//   0x28C380 mov     rax, [rbx+18h]; jumptable 000000000028C354 case 81
//   0x28C384 mov     rsi, rbx
//   0x28C387 mov     rdi, r12
//   0x28C38A mov     edx, [rax]
//   0x28C38C call    sub_283EA0
//   0x28C391 test    al, al
//   0x28C393 jz      loc_28C490
//   0x28C399 mov     rdi, [rbx+18h]
//   0x28C39D test    rdi, rdi
//   0x28C3A0 jz      short loc_28C3A7
//   0x28C3A2 call    j__qfree
//   0x28C3A7 mov     dword ptr [rbx+8], 4Eh ; 'N'
//   0x28C3AE add     dword ptr [r12+54h], 1
//   0x28C3B4 jmp     short loc_28C341
//   0x28C3B6 align 20h
//   0x28C3C0 mov     rsi, rbx; jumptable 000000000028C354 case 80
//   0x28C3C3 mov     rdi, r12
//   0x28C3C6 call    sub_28BA30
//   0x28C3CB test    al, al
//   0x28C3CD jz      loc_28C470
//   0x28C3D3 add     dword ptr [r12+54h], 1
//   0x28C3D9 jmp     loc_28C341
//   0x28C3DE align 20h
//   0x28C3E0 mov     rsi, rbx; jumptable 000000000028C354 case 75
//   0x28C3E3 mov     rdi, r12
//   0x28C3E6 call    sub_2975B0
//   0x28C3EB test    al, al
//   0x28C3ED jnz     short loc_28C3D3
//   0x28C3EF mov     rsi, rbx
//   0x28C3F2 mov     rdi, r12
//   0x28C3F5 call    sub_297D60
//   0x28C3FA test    al, al
//   0x28C3FC jnz     loc_28C341
//   0x28C402 mov     rsi, rbx
//   0x28C405 mov     rdi, r12
//   0x28C408 call    sub_296E50
//   0x28C40D test    al, al
//   0x28C40F jz      def_28C354; jumptable 000000000028C354 default case, cases 71,74,76-79
//   0x28C415 jmp     short loc_28C3D3
//   0x28C417 align 20h
//   0x28C420 mov     rsi, rbx; jumptable 000000000028C354 case 70
//   0x28C423 mov     rdi, r12
//   0x28C426 call    sub_28B4E0
//   0x28C42B pop     rbx
//   0x28C42C pop     rbp
//   0x28C42D movzx   eax, al
//   0x28C430 pop     r12
//   0x28C432 retn
//   0x28C433 align 8
//   0x28C438 mov     rsi, rbx; jumptable 000000000028C354 case 73
//   0x28C43B mov     rdi, r12
//   0x28C43E call    sub_298460
//   0x28C443 test    al, al
//   0x28C445 jnz     short loc_28C3D3
//   0x28C447 mov     rsi, rbx
//   0x28C44A mov     rdi, r12
//   0x28C44D call    sub_287A90
//   0x28C452 test    al, al
//   0x28C454 jnz     loc_28C341
//   0x28C45A mov     rsi, rbx
//   0x28C45D mov     rdi, r12
//   0x28C460 call    sub_2884E0
//   0x28C465 movzx   eax, al
//   0x28C468 jmp     loc_28C372
//   0x28C46D align 10h
//   0x28C470 mov     rsi, rbx
//   0x28C473 mov     rdi, r12
//   0x28C476 call    sub_28C040
//   0x28C47B test    al, al
//   0x28C47D jz      def_28C354; jumptable 000000000028C354 default case, cases 71,74,76-79
//   0x28C483 jmp     loc_28C341
//   0x28C488 align 10h
//   0x28C490 mov     rsi, rbx
//   0x28C493 mov     rdi, r12
//   0x28C496 call    sub_283FC0
//   0x28C49B test    al, al
//   0x28C49D jnz     loc_28C3D3
//   0x28C4A3 mov     rsi, rbx
//   0x28C4A6 mov     rdi, r12
//   0x28C4A9 call    sub_28B740
//   0x28C4AE test    al, al
//   0x28C4B0 jz      def_28C354; jumptable 000000000028C354 default case, cases 71,74,76-79
//   0x28C4B6 add     dword ptr [r12+54h], 1
//   0x28C4BC mov     eax, 1
//   0x28C4C1 jmp     loc_28C372
// ============================================================

void sub_28C330(/* signature unknown */)
{
    // see disassembly above
}

