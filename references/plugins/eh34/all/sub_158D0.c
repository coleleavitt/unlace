// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x158D0
// Name:           sub_158D0
// Function size:  147 bytes (36 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x158D0 push    rbx
//   0x158D1 lea     rax, off_8BB08
//   0x158D8 cmp     byte ptr [rdi+28h], 0
//   0x158DC mov     rbx, rdi
//   0x158DF mov     [rdi], rax
//   0x158E2 jz      short loc_15918
//   0x158E4 mov     rax, [rdi+20h]
//   0x158E8 lea     rdx, s1
//   0x158EF cmp     qword ptr [rax+8], 0
//   0x158F4 jnz     short loc_15950
//   0x158F6 cmp     qword ptr [rbx+10h], 0
//   0x158FB lea     rsi, s1
//   0x15902 jnz     short loc_15940
//   0x15904 mov     rcx, cs:callui_ptr
//   0x1590B mov     edi, 82h
//   0x15910 xor     eax, eax
//   0x15912 call    qword ptr [rcx]
//   0x15914 mov     byte ptr [rbx+28h], 0
//   0x15918 mov     rdi, [rbx+8]
//   0x1591C test    rdi, rdi
//   0x1591F jz      short loc_1592E
//   0x15921 mov     qword ptr [rbx+10h], 0
//   0x15929 call    _qfree
//   0x1592E mov     rdi, rbx; void *
//   0x15931 mov     esi, 30h ; '0'; unsigned __int64
//   0x15936 pop     rbx
//   0x15937 jmp     __ZdlPvm; operator delete(void *,ulong)
//   0x1593C align 20h
//   0x15940 mov     rsi, [rbx+8]
//   0x15944 jmp     short loc_15904
//   0x15946 align 10h
//   0x15950 cmp     qword ptr [rbx+10h], 0
//   0x15955 mov     rdx, [rax]
//   0x15958 lea     rsi, s1
//   0x1595F jz      short loc_15904
//   0x15961 jmp     short loc_15940
// ============================================================

void sub_158D0(/* signature unknown */)
{
    // see disassembly above
}

