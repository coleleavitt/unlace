// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x2791A0
// Name:           sub_2791A0
// Function size:  385 bytes (103 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x2791A0 push    r14
//   0x2791A2 push    r13
//   0x2791A4 push    r12
//   0x2791A6 push    rbp
//   0x2791A7 push    rbx
//   0x2791A8 sub     rsp, 10h
//   0x2791AC test    rcx, rcx
//   0x2791AF mov     rbx, fs:28h
//   0x2791B8 mov     [rsp+38h+var_30], rbx
//   0x2791BD mov     rbx, rcx
//   0x2791C0 lea     rax, [rsp+38h+var_31]
//   0x2791C5 cmovz   rbx, rax
//   0x2791C9 cmp     dword ptr [rsi+8], 33h ; '3'
//   0x2791CD jz      short loc_2791F8
//   0x2791CF xor     ebp, ebp
//   0x2791D1 mov     rax, [rsp+38h+var_30]
//   0x2791D6 sub     rax, fs:28h
//   0x2791DF jnz     loc_27931C
//   0x2791E5 add     rsp, 10h
//   0x2791E9 mov     eax, ebp
//   0x2791EB pop     rbx
//   0x2791EC pop     rbp
//   0x2791ED pop     r12
//   0x2791EF pop     r13
//   0x2791F1 pop     r14
//   0x2791F3 retn
//   0x2791F4 align 8
//   0x2791F8 mov     r12, rsi
//   0x2791FB mov     rsi, [rsi+30h]
//   0x2791FF mov     rbp, rdx
//   0x279202 mov     r13, rdi
//   0x279205 xor     edx, edx
//   0x279207 xor     edi, edi
//   0x279209 call    _get_tinfo_size
//   0x27920E mov     rsi, [rbp+0]
//   0x279212 xor     edx, edx
//   0x279214 xor     edi, edi
//   0x279216 mov     r14, rax
//   0x279219 call    _get_tinfo_size
//   0x27921E cmp     r14, rax
//   0x279221 jnz     short loc_2791CF
//   0x279223 lea     rdi, [r12+30h]
//   0x279228 call    sub_3264F0
//   0x27922D mov     ebp, eax
//   0x27922F test    al, al
//   0x279231 jnz     short loc_2791CF
//   0x279233 mov     r12, [r12+18h]
//   0x279238 mov     byte ptr [rbx], 0
//   0x27923B mov     eax, [r12+8]
//   0x279240 cmp     eax, 33h ; '3'
//   0x279243 jnz     short loc_27927A
//   0x279245 mov     edx, [r13+54h]
//   0x279249 nop     word ptr [rax+rax+00000000h]
//   0x279254 nop     word ptr [rax+rax+00000000h]
//   0x27925F nop
//   0x279260 cmp     [r12+28h], edx
//   0x279265 jnz     loc_2791D1
//   0x27926B mov     r12, [r12+18h]
//   0x279270 mov     eax, [r12+8]
//   0x279275 cmp     eax, 33h ; '3'
//   0x279278 jz      short loc_279260
//   0x27927A cmp     eax, 30h ; '0'
//   0x27927D jz      short loc_2792E8
//   0x27927F sub     eax, 23h ; '#'
//   0x279282 cmp     eax, 1
//   0x279285 ja      loc_2791D1
//   0x27928B mov     rax, [r12+18h]
//   0x279290 mov     esi, 2
//   0x279295 mov     rdi, [rax+30h]
//   0x279299 call    _get_tinfo_property
//   0x27929E and     eax, 0Fh
//   0x2792A1 sub     eax, 0Ah
//   0x2792A4 cmp     al, 1
//   0x2792A6 ja      short loc_2792F4
//   0x2792A8 mov     rax, [r12+18h]
//   0x2792AD test    rax, rax
//   0x2792B0 jz      loc_2791D1
//   0x2792B6 cmp     dword ptr [rax+8], 30h ; '0'
//   0x2792BA jnz     loc_2791D1
//   0x2792C0 mov     rsi, [rax+30h]
//   0x2792C4 mov     rdi, [r12+30h]
//   0x2792C9 xor     edx, edx
//   0x2792CB call    _lexcompare_tinfo
//   0x2792D0 test    eax, eax
//   0x2792D2 jnz     loc_2791D1
//   0x2792D8 mov     byte ptr [rbx], 1
//   0x2792DB mov     ebp, 1
//   0x2792E0 jmp     loc_2791D1
//   0x2792E5 align 8
//   0x2792E8 test    r12, r12
//   0x2792EB setnz   bpl
//   0x2792EF jmp     loc_2791D1
//   0x2792F4 mov     rax, [r12+20h]
//   0x2792F9 mov     esi, 2
//   0x2792FE mov     rdi, [rax+30h]
//   0x279302 call    _get_tinfo_property
//   0x279307 and     eax, 0Fh
//   0x27930A sub     eax, 0Ah
//   0x27930D cmp     al, 1
//   0x27930F ja      loc_2791D1
//   0x279315 mov     rax, [r12+20h]
//   0x27931A jmp     short loc_2792AD
//   0x27931C call    ___stack_chk_fail
// ============================================================

void sub_2791A0(/* signature unknown */)
{
    // see disassembly above
}

