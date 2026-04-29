// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x3B5030
// Name:           sub_3B5030
// Function size:  104 bytes (27 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x3B5030 push    rbx
//   0x3B5031 cmp     rsi, [rdi+0C8h]
//   0x3B5038 jnb     short loc_3B507D
//   0x3B503A lea     rax, [rsi+rsi*2]
//   0x3B503E shl     rax, 4
//   0x3B5042 add     rax, [rdi+0C0h]
//   0x3B5049 mov     rbx, rax
//   0x3B504C jz      short loc_3B507D
//   0x3B504E mov     rdi, [rax]
//   0x3B5051 xor     esi, esi
//   0x3B5053 call    sub_396120
//   0x3B5058 mov     rsi, [rbx+8]
//   0x3B505C cmp     rsi, 0FFFFFFFFFFFFFFFFh
//   0x3B5060 jz      short loc_3B507D
//   0x3B5062 mov     r8, cs:callui_ptr
//   0x3B5069 mov     ecx, 1
//   0x3B506E mov     edx, 0FFFFFFFFh
//   0x3B5073 xor     eax, eax
//   0x3B5075 mov     edi, 73h ; 's'
//   0x3B507A call    qword ptr [r8]
//   0x3B507D xor     ecx, ecx
//   0x3B507F mov     rax, 0FFFFFFFFFFFFFFFFh
//   0x3B5086 pop     rbx
//   0x3B5087 mov     rsi, 0FFFFFFFF00000000h
//   0x3B5091 and     rcx, rsi
//   0x3B5094 mov     rdx, rcx
//   0x3B5097 retn
// ============================================================

void sub_3B5030(/* signature unknown */)
{
    // see disassembly above
}

