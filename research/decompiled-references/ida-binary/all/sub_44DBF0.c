// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x44DBF0
// Name:           sub_44DBF0
// Function size:  156 bytes (45 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x44DBF0 push    r12; int
//   0x44DBF2 lea     rdx, form_actions_impl_t____vfunc_9
//   0x44DBF9 push    rbp; int
//   0x44DBFA mov     ebp, edi
//   0x44DBFC push    rbx; __int64
//   0x44DBFD mov     rax, [rsi]
//   0x44DC00 mov     rbx, rsi
//   0x44DC03 mov     rax, [rax+48h]
//   0x44DC07 cmp     rax, rdx
//   0x44DC0A jnz     short loc_44DC50
//   0x44DC0C mov     r12, [rsi+20h]
//   0x44DC10 lea     eax, [rbp+1]
//   0x44DC13 and     eax, 0FFFFFFFDh
//   0x44DC16 jz      short loc_44DC28
//   0x44DC18 pop     rbx
//   0x44DC19 mov     eax, 1
//   0x44DC1E pop     rbp
//   0x44DC1F pop     r12
//   0x44DC21 retn
//   0x44DC22 align 8
//   0x44DC28 cmp     ebp, 0FFFFFFFFh
//   0x44DC2B jz      short loc_44DC60
//   0x44DC2D mov     rsi, rbx
//   0x44DC30 mov     rdi, r12
//   0x44DC33 mov     edx, 1
//   0x44DC38 call    sub_44DAA0
//   0x44DC3D pop     rbx
//   0x44DC3E mov     eax, 1
//   0x44DC43 pop     rbp
//   0x44DC44 pop     r12
//   0x44DC46 retn
//   0x44DC47 align 10h
//   0x44DC50 mov     rdi, rsi
//   0x44DC53 call    rax
//   0x44DC55 mov     r12, rax
//   0x44DC58 jmp     short loc_44DC10
//   0x44DC5A align 20h
//   0x44DC60 lea     rdi, aCommitFilesToN; "Commit files to new worklist"
//   0x44DC67 call    sub_4A0300
//   0x44DC6C test    rax, rax
//   0x44DC6F jz      short loc_44DC2D
//   0x44DC71 lea     rcx, off_86B880; "diff_vault_local"
//   0x44DC78 mov     qword ptr [rax+868h], 2
//   0x44DC83 mov     [rax+860h], rcx
//   0x44DC8A jmp     short loc_44DC2D
// ============================================================

void sub_44DBF0(/* signature unknown */)
{
    // see disassembly above
}

