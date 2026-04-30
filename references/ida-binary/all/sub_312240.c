// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x312240
// Name:           sub_312240
// Function size:  93 bytes (21 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x312240 lea     rax, qword_8CD750
//   0x312247 push    rbx; int
//   0x312248 cmp     dword ptr [rax], 4
//   0x31224B jnz     short loc_312288
//   0x31224D mov     rsi, [rax+8]
//   0x312251 mov     rbx, rdi
//   0x312254 call    sub_53CF40
//   0x312259 mov     rax, [rbx+160h]
//   0x312260 xor     esi, esi
//   0x312262 mov     rdi, rbx
//   0x312265 mov     dword ptr [rax+94h], 0
//   0x31226F mov     rax, [rbx+160h]
//   0x312276 pop     rbx
//   0x312277 mov     eax, [rax+94h]
//   0x31227D test    eax, eax
//   0x31227F setnz   sil
//   0x312283 jmp     sub_312110
//   0x312288 lea     rsi, aToolbarsLayout; "TOOLBARS_LAYOUT"
//   0x31228F lea     rdi, aTheSDirectiveI; "The %s directive in idagui.cfg is eithe"...
//   0x312296 xor     eax, eax
//   0x312298 call    sub_16B930
// ============================================================

void sub_312240(/* signature unknown */)
{
    // see disassembly above
}

