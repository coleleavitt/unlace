// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x27B160
// Name:           sub_27B160
// Function size:  385 bytes (103 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x27B160 push    r14
//   0x27B162 push    r13
//   0x27B164 push    r12
//   0x27B166 push    rbp
//   0x27B167 push    rbx
//   0x27B168 sub     rsp, 10h
//   0x27B16C test    rcx, rcx
//   0x27B16F mov     rbx, fs:28h
//   0x27B178 mov     [rsp+38h+var_30], rbx
//   0x27B17D mov     rbx, rcx
//   0x27B180 lea     rax, [rsp+38h+var_31]
//   0x27B185 cmovz   rbx, rax
//   0x27B189 cmp     dword ptr [rsi+8], 33h ; '3'
//   0x27B18D jz      short loc_27B1B8
//   0x27B18F xor     ebp, ebp
//   0x27B191 mov     rax, [rsp+38h+var_30]
//   0x27B196 sub     rax, fs:28h
//   0x27B19F jnz     loc_27B2DC
//   0x27B1A5 add     rsp, 10h
//   0x27B1A9 mov     eax, ebp
//   0x27B1AB pop     rbx
//   0x27B1AC pop     rbp
//   0x27B1AD pop     r12
//   0x27B1AF pop     r13
//   0x27B1B1 pop     r14
//   0x27B1B3 retn
//   0x27B1B4 align 8
//   0x27B1B8 mov     r12, rsi
//   0x27B1BB mov     rsi, [rsi+30h]
//   0x27B1BF mov     rbp, rdx
//   0x27B1C2 mov     r13, rdi
//   0x27B1C5 xor     edx, edx
//   0x27B1C7 xor     edi, edi
//   0x27B1C9 call    _get_tinfo_size
//   0x27B1CE mov     rsi, [rbp+0]
//   0x27B1D2 xor     edx, edx
//   0x27B1D4 xor     edi, edi
//   0x27B1D6 mov     r14, rax
//   0x27B1D9 call    _get_tinfo_size
//   0x27B1DE cmp     r14, rax
//   0x27B1E1 jnz     short loc_27B18F
//   0x27B1E3 lea     rdi, [r12+30h]
//   0x27B1E8 call    sub_327FB0
//   0x27B1ED mov     ebp, eax
//   0x27B1EF test    al, al
//   0x27B1F1 jnz     short loc_27B18F
//   0x27B1F3 mov     r12, [r12+18h]
//   0x27B1F8 mov     byte ptr [rbx], 0
//   0x27B1FB mov     eax, [r12+8]
//   0x27B200 cmp     eax, 33h ; '3'
//   0x27B203 jnz     short loc_27B23A
//   0x27B205 mov     edx, [r13+54h]
//   0x27B209 nop     word ptr [rax+rax+00000000h]
//   0x27B214 nop     word ptr [rax+rax+00000000h]
//   0x27B21F nop
//   0x27B220 cmp     [r12+28h], edx
//   0x27B225 jnz     loc_27B191
//   0x27B22B mov     r12, [r12+18h]
//   0x27B230 mov     eax, [r12+8]
//   0x27B235 cmp     eax, 33h ; '3'
//   0x27B238 jz      short loc_27B220
//   0x27B23A cmp     eax, 30h ; '0'
//   0x27B23D jz      short loc_27B2A8
//   0x27B23F sub     eax, 23h ; '#'
//   0x27B242 cmp     eax, 1
//   0x27B245 ja      loc_27B191
//   0x27B24B mov     rax, [r12+18h]
//   0x27B250 mov     esi, 2
//   0x27B255 mov     rdi, [rax+30h]
//   0x27B259 call    _get_tinfo_property
//   0x27B25E and     eax, 0Fh
//   0x27B261 sub     eax, 0Ah
//   0x27B264 cmp     al, 1
//   0x27B266 ja      short loc_27B2B4
//   0x27B268 mov     rax, [r12+18h]
//   0x27B26D test    rax, rax
//   0x27B270 jz      loc_27B191
//   0x27B276 cmp     dword ptr [rax+8], 30h ; '0'
//   0x27B27A jnz     loc_27B191
//   0x27B280 mov     rsi, [rax+30h]
//   0x27B284 mov     rdi, [r12+30h]
//   0x27B289 xor     edx, edx
//   0x27B28B call    _lexcompare_tinfo
//   0x27B290 test    eax, eax
//   0x27B292 jnz     loc_27B191
//   0x27B298 mov     byte ptr [rbx], 1
//   0x27B29B mov     ebp, 1
//   0x27B2A0 jmp     loc_27B191
//   0x27B2A5 align 8
//   0x27B2A8 test    r12, r12
//   0x27B2AB setnz   bpl
//   0x27B2AF jmp     loc_27B191
//   0x27B2B4 mov     rax, [r12+20h]
//   0x27B2B9 mov     esi, 2
//   0x27B2BE mov     rdi, [rax+30h]
//   0x27B2C2 call    _get_tinfo_property
//   0x27B2C7 and     eax, 0Fh
//   0x27B2CA sub     eax, 0Ah
//   0x27B2CD cmp     al, 1
//   0x27B2CF ja      loc_27B191
//   0x27B2D5 mov     rax, [r12+20h]
//   0x27B2DA jmp     short loc_27B26D
//   0x27B2DC call    ___stack_chk_fail
// ============================================================

void sub_27B160(/* signature unknown */)
{
    // see disassembly above
}

