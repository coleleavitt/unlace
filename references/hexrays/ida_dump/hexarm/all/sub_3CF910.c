// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x3CF910
// Name:           sub_3CF910
// Function size:  93 bytes (31 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x3CF910 mov     rdx, [rsi+40h]
//   0x3CF914 test    rdx, rdx
//   0x3CF917 jz      short loc_3CF968
//   0x3CF919 mov     eax, [rdx+3Ch]
//   0x3CF91C xor     ecx, ecx
//   0x3CF91E sub     eax, 1
//   0x3CF921 cmp     eax, 1
//   0x3CF924 ja      short loc_3CF96A
//   0x3CF926 mov     rsi, [rdx+40h]
//   0x3CF92A test    rsi, rsi
//   0x3CF92D jz      short loc_3CF96A
//   0x3CF92F push    rbx
//   0x3CF930 mov     rax, [rdi]
//   0x3CF933 mov     rbx, rdi
//   0x3CF936 call    qword ptr [rax+30h]
//   0x3CF939 mov     rcx, [rbx+28h]
//   0x3CF93D mov     rsi, [rbx+18h]
//   0x3CF941 mov     edx, 1
//   0x3CF946 mov     r8, cs:callui_ptr
//   0x3CF94D test    al, al
//   0x3CF94F mov     edi, 8Ch
//   0x3CF954 cmovnz  rcx, [rbx+20h]
//   0x3CF959 xor     eax, eax
//   0x3CF95B call    qword ptr [r8]
//   0x3CF95E mov     eax, 1
//   0x3CF963 pop     rbx
//   0x3CF964 retn
//   0x3CF965 align 8
//   0x3CF968 xor     ecx, ecx
//   0x3CF96A mov     eax, ecx
//   0x3CF96C retn
// ============================================================

void sub_3CF910(/* signature unknown */)
{
    // see disassembly above
}

