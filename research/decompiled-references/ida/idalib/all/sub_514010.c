// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x514010
// Name:           sub_514010
// Function size:  564 bytes (138 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x514010 push    r14
//   0x514012 lea     r14, aAWrongSegmentN; "%a: wrong segment name or class index\n"
//   0x514019 push    r13
//   0x51401B mov     r13, rdi
//   0x51401E push    r12
//   0x514020 lea     r12, [r13+658h]
//   0x514027 push    rbp
//   0x514028 push    rbx
//   0x514029 mov     rax, [rdi]
//   0x51402C mov     rbp, [rax+6E0h]
//   0x514033 mov     rdi, rbp
//   0x514036 call    sub_513C70
//   0x51403B mov     rdi, r12
//   0x51403E call    sub_506150
//   0x514043 mov     rbx, rax
//   0x514046 test    rax, rax
//   0x514049 jnz     short loc_5140C8
//   0x51404B jmp     loc_514120
//   0x514050 mov     qword ptr [rbx+10h], 0
//   0x514058 mov     rdi, r14; src
//   0x51405B xor     eax, eax
//   0x51405D call    sub_84F5B0
//   0x514062 mov     rdi, rbx
//   0x514065 call    _update_segm
//   0x51406A mov     rax, [rbx+18h]
//   0x51406E test    rax, rax
//   0x514071 jz      short loc_5140B5
//   0x514073 cmp     rax, [rbp+98h]
//   0x51407A jnb     short loc_514098
//   0x51407C lea     rdx, ds:0[rax*8]
//   0x514084 sub     rdx, rax
//   0x514087 mov     rax, [rbp+90h]
//   0x51408E lea     rax, [rax+rdx*8]
//   0x514092 cmp     byte ptr [rax+34h], 0
//   0x514096 jz      short loc_514110
//   0x514098 mov     qword ptr [rbx+18h], 0
//   0x5140A0 mov     rsi, [rbx]
//   0x5140A3 mov     rdi, r14; src
//   0x5140A6 xor     eax, eax
//   0x5140A8 call    sub_84F5B0
//   0x5140AD mov     rdi, rbx
//   0x5140B0 call    _update_segm
//   0x5140B5 mov     rsi, [rbx]
//   0x5140B8 mov     rdi, r12
//   0x5140BB call    sub_505EB0
//   0x5140C0 mov     rbx, rax
//   0x5140C3 test    rax, rax
//   0x5140C6 jz      short loc_514120
//   0x5140C8 mov     rax, [rbx+10h]
//   0x5140CC test    rax, rax
//   0x5140CF jz      short loc_51406A
//   0x5140D1 mov     rsi, [rbx]
//   0x5140D4 cmp     rax, [rbp+98h]
//   0x5140DB jnb     loc_514050
//   0x5140E1 lea     rdx, ds:0[rax*8]
//   0x5140E9 sub     rdx, rax
//   0x5140EC mov     rax, [rbp+90h]
//   0x5140F3 lea     rdi, [rax+rdx*8]
//   0x5140F7 cmp     byte ptr [rdi+34h], 0
//   0x5140FB jnz     loc_514050
//   0x514101 add     rdi, 18h
//   0x514105 call    sub_50D070
//   0x51410A jmp     loc_51406A
//   0x51410F align 10h
//   0x514110 add     dword ptr [rax+30h], 1
//   0x514114 jmp     short loc_5140B5
//   0x514116 align 20h
//   0x514120 mov     eax, [rbp+98h]
//   0x514126 lea     ebx, [rax-1]
//   0x514129 test    ebx, ebx
//   0x51412B jle     short loc_51413F
//   0x51412D nop     dword ptr [rax]
//   0x514130 mov     esi, ebx
//   0x514132 mov     rdi, rbp
//   0x514135 call    sub_512070
//   0x51413A sub     ebx, 1
//   0x51413D jnz     short loc_514130
//   0x51413F mov     rdi, [r13+0]
//   0x514143 lea     rsi, sub_50DE90
//   0x51414A lea     rbx, sub_513790
//   0x514151 call    sub_7AF6E0
//   0x514156 mov     ecx, 1
//   0x51415B xor     edx, edx
//   0x51415D lea     rsi, sub_50D160
//   0x514164 mov     edi, 7Ah ; 'z'
//   0x514169 call    _register_undo_handler
//   0x51416E mov     ecx, 1
//   0x514173 xor     edx, edx
//   0x514175 lea     rsi, sub_50D360
//   0x51417C mov     edi, 7Bh ; '{'
//   0x514181 call    _register_undo_handler
//   0x514186 mov     ecx, 1
//   0x51418B xor     edx, edx
//   0x51418D lea     rsi, sub_50D390
//   0x514194 mov     edi, 7Ch ; '|'
//   0x514199 call    _register_undo_handler
//   0x51419E mov     rsi, rbx
//   0x5141A1 mov     ecx, 1
//   0x5141A6 xor     edx, edx
//   0x5141A8 mov     edi, 7Dh ; '}'
//   0x5141AD call    _register_undo_handler
//   0x5141B2 mov     rsi, rbx
//   0x5141B5 mov     ecx, 1
//   0x5141BA xor     edx, edx
//   0x5141BC lea     rbx, sub_50D550
//   0x5141C3 mov     edi, 7Eh ; '~'
//   0x5141C8 call    _register_undo_handler
//   0x5141CD mov     rsi, rbx
//   0x5141D0 mov     ecx, 1
//   0x5141D5 xor     edx, edx
//   0x5141D7 mov     edi, 7Fh
//   0x5141DC call    _register_undo_handler
//   0x5141E1 mov     rsi, rbx
//   0x5141E4 mov     ecx, 1
//   0x5141E9 xor     edx, edx
//   0x5141EB lea     rbx, sub_50CEB0
//   0x5141F2 mov     edi, 80h
//   0x5141F7 call    _register_undo_handler
//   0x5141FC mov     rsi, rbx
//   0x5141FF mov     ecx, 1
//   0x514204 xor     edx, edx
//   0x514206 mov     edi, 81h
//   0x51420B call    _register_undo_handler
//   0x514210 mov     rsi, rbx
//   0x514213 mov     ecx, 1
//   0x514218 xor     edx, edx
//   0x51421A mov     edi, 82h
//   0x51421F call    _register_undo_handler
//   0x514224 pop     rbx
//   0x514225 mov     ecx, 1
//   0x51422A pop     rbp
//   0x51422B xor     edx, edx
//   0x51422D pop     r12
//   0x51422F lea     rsi, sub_50D3C0
//   0x514236 pop     r13
//   0x514238 mov     edi, 83h
//   0x51423D pop     r14
//   0x51423F jmp     _register_undo_handler
// ============================================================

void sub_514010(/* signature unknown */)
{
    // see disassembly above
}

