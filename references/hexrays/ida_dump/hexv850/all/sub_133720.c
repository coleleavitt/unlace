// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x133720
// Name:           sub_133720
// Function size:  351 bytes (87 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x133720 push    rbp
//   0x133721 push    rbx
//   0x133722 mov     rbx, rdi
//   0x133725 sub     rsp, 8
//   0x133729 cmp     dword ptr [rdi+138h], 1
//   0x133730 jle     short loc_133750
//   0x133732 or      dword ptr [rdi], 200h
//   0x133738 xor     ebp, ebp
//   0x13373A mov     rdi, rbx
//   0x13373D mov     esi, 1
//   0x133742 call    sub_31C610
//   0x133747 add     rsp, 8
//   0x13374B mov     eax, ebp
//   0x13374D pop     rbx
//   0x13374E pop     rbp
//   0x13374F retn
//   0x133750 lea     rdx, aBeforePreoptim; "before preoptimize"
//   0x133757 mov     esi, 1
//   0x13375C xor     eax, eax
//   0x13375E call    sub_62520
//   0x133763 mov     rdi, rbx
//   0x133766 call    nullsub_182
//   0x13376B mov     rbp, [rbx+208h]
//   0x133772 test    rbp, rbp
//   0x133775 jz      short loc_133791
//   0x133777 nop     word ptr [rax+rax+00000000h]
//   0x133780 mov     rdi, rbp
//   0x133783 call    sub_B1700
//   0x133788 mov     rbp, [rbp+8]
//   0x13378C test    rbp, rbp
//   0x13378F jnz     short loc_133780
//   0x133791 mov     rdi, rbx
//   0x133794 call    sub_A2200
//   0x133799 mov     rdi, rbx
//   0x13379C call    sub_A2570
//   0x1337A1 or      dword ptr [rbx], 200h
//   0x1337A7 mov     rdi, rbx
//   0x1337AA xor     eax, eax
//   0x1337AC lea     rdx, aAfterPreoptimi; "after preoptimize"
//   0x1337B3 mov     esi, 1
//   0x1337B8 call    sub_62520
//   0x1337BD mov     rdi, rbx
//   0x1337C0 call    sub_9BD90
//   0x1337C5 test    eax, eax
//   0x1337C7 jnz     short loc_133830
//   0x1337C9 mov     rdi, [rbx+3A0h]
//   0x1337D0 test    rdi, rdi
//   0x1337D3 jz      short loc_133850
//   0x1337D5 call    sub_19B050
//   0x1337DA lea     rdx, nullsub_75
//   0x1337E1 mov     [rbx+3A8h], rax
//   0x1337E8 mov     rdi, rax
//   0x1337EB mov     rax, [rax]
//   0x1337EE mov     rax, [rax+10h]
//   0x1337F2 cmp     rax, rdx
//   0x1337F5 jnz     loc_133878
//   0x1337FB mov     rdi, [rbx+5D8h]
//   0x133802 mov     rdx, rbx
//   0x133805 mov     esi, 4
//   0x13380A xor     eax, eax
//   0x13380C call    sub_3380C0
//   0x133811 mov     ebp, eax
//   0x133813 test    eax, eax
//   0x133815 jnz     loc_13373A
//   0x13381B mov     esi, 2
//   0x133820 mov     rdi, rbx
//   0x133823 call    sub_32B380
//   0x133828 mov     ebp, eax
//   0x13382A jmp     loc_13373A
//   0x13382F align 10h
//   0x133830 lea     rdx, aAfterCombinedO; "after combined operand propagation"
//   0x133837 mov     esi, 1
//   0x13383C mov     rdi, rbx
//   0x13383F xor     eax, eax
//   0x133841 call    sub_62520
//   0x133846 jmp     short loc_1337C9
//   0x133848 align 10h
//   0x133850 mov     rdi, [rbx+5E0h]
//   0x133857 mov     rsi, rbx
//   0x13385A mov     rax, [rdi]
//   0x13385D call    qword ptr [rax+138h]
//   0x133863 mov     [rbx+3A0h], rax
//   0x13386A mov     rdi, rax
//   0x13386D jmp     loc_1337D5
//   0x133872 align 8
//   0x133878 call    rax
//   0x13387A jmp     loc_1337FB
// ============================================================

void sub_133720(/* signature unknown */)
{
    // see disassembly above
}

