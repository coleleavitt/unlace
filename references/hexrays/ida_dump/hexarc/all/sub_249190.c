// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x249190
// Name:           sub_249190
// Function size:  633 bytes (150 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x249190 push    rbp
//   0x249191 mov     ebp, ecx
//   0x249193 push    rbx
//   0x249194 mov     rbx, rdi
//   0x249197 sub     rsp, 8
//   0x24919B test    rdx, rdx
//   0x24919E jz      short loc_2491E8
//   0x2491A0 mov     r8d, [rdi+158h]
//   0x2491A7 lea     eax, [r8+1]
//   0x2491AB mov     [rdi+158h], eax
//   0x2491B1 cmp     eax, 3FFh
//   0x2491B6 jg      loc_46290
//   0x2491BC mov     rax, [rbx+130h]
//   0x2491C3 movsxd  rdi, esi
//   0x2491C6 cmp     dword ptr [rax+rdi*4], 11h; switch 18 cases
//   0x2491CA ja      def_2491E1; jumptable 00000000002491E1 default case
//   0x2491D0 mov     eax, [rax+rdi*4]
//   0x2491D3 lea     rcx, jpt_2491E1
//   0x2491DA movsxd  rax, ds:(jpt_2491E1 - 401144h)[rcx+rax*4]
//   0x2491DE add     rax, rcx
//   0x2491E1 jmp     rax; switch jump
//   0x2491E3 align 8
//   0x2491E8 test    cl, cl
//   0x2491EA jz      loc_2493EF
//   0x2491F0 call    sub_248C50
//   0x2491F5 test    rax, rax
//   0x2491F8 setnz   dl
//   0x2491FB cmp     bpl, dl
//   0x2491FE jnz     loc_2493BB
//   0x249204 add     rsp, 8
//   0x249208 pop     rbx
//   0x249209 pop     rbp
//   0x24920A retn
//   0x24920B align 10h
//   0x249210 mov     rdi, rbx; jumptable 00000000002491E1 cases 2-4,16,17
//   0x249213 call    sub_24A3E0
//   0x249218 mov     eax, [rbx+158h]
//   0x24921E xor     edx, edx
//   0x249220 lea     r8d, [rax-1]
//   0x249224 xor     eax, eax
//   0x249226 nop     word ptr [rax+rax+00000000h]
//   0x249230 mov     [rbx+158h], r8d
//   0x249237 jmp     short loc_2491FB
//   0x249239 align 20h
//   0x249240 mov     rdi, rbx; jumptable 00000000002491E1 cases 6-9
//   0x249243 call    sub_248FD0
//   0x249248 mov     ecx, [rbx+158h]
//   0x24924E test    rax, rax
//   0x249251 lea     r8d, [rcx-1]
//   0x249255 setnz   dl
//   0x249258 jmp     short loc_249230
//   0x24925A align 20h
//   0x249260 mov     rdi, rbx; jumptable 00000000002491E1 cases 10-12
//   0x249263 call    sub_24A7E0
//   0x249268 mov     eax, [rbx+158h]
//   0x24926E xor     edx, edx
//   0x249270 lea     r8d, [rax-1]
//   0x249274 xor     eax, eax
//   0x249276 jmp     short loc_249230
//   0x249278 align 20h
//   0x249280 mov     rdi, rbx; jumptable 00000000002491E1 cases 13,14
//   0x249283 call    sub_249410
//   0x249288 mov     eax, [rbx+158h]
//   0x24928E xor     edx, edx
//   0x249290 lea     r8d, [rax-1]
//   0x249294 xor     eax, eax
//   0x249296 jmp     short loc_249230
//   0x249298 align 20h
//   0x2492A0 mov     rdi, rbx; jumptable 00000000002491E1 case 5
//   0x2492A3 call    sub_249680
//   0x2492A8 mov     eax, [rbx+158h]
//   0x2492AE xor     edx, edx
//   0x2492B0 lea     r8d, [rax-1]
//   0x2492B4 xor     eax, eax
//   0x2492B6 jmp     loc_249230
//   0x2492BB align 20h
//   0x2492C0 mov     rdi, rbx; jumptable 00000000002491E1 case 15
//   0x2492C3 call    sub_24A1A0
//   0x2492C8 mov     eax, [rbx+158h]
//   0x2492CE xor     edx, edx
//   0x2492D0 lea     r8d, [rax-1]
//   0x2492D4 xor     eax, eax
//   0x2492D6 jmp     loc_249230
//   0x2492DB align 20h
//   0x2492E0 mov     rax, [rbx+0B0h]; jumptable 00000000002491E1 case 0
//   0x2492E7 mov     rax, [rax+8]
//   0x2492EB cmp     [rax+40h], esi
//   0x2492EE jg      short loc_249358
//   0x2492F0 mov     rdx, [rbx+0F0h]
//   0x2492F7 test    rdx, rdx
//   0x2492FA jz      short loc_249312
//   0x2492FC mov     rax, [rdx]
//   0x2492FF and     rax, 0FFFFFFFFFFFFFFFCh
//   0x249303 jz      loc_249389
//   0x249309 test    byte ptr [rax], 2
//   0x24930C jz      loc_249398
//   0x249312 mov     rax, cs:under_debugger_ptr
//   0x249319 cmp     byte ptr [rax], 0
//   0x24931C jnz     loc_4628E
//   0x249322 mov     edi, 0C4C7h
//   0x249327 call    sub_37B760
//   0x24932C align 10h
//   0x249330 movzx   ecx, bpl; jumptable 00000000002491E1 case 1
//   0x249334 mov     rdi, rbx
//   0x249337 call    sub_24A290
//   0x24933C mov     ecx, [rbx+158h]
//   0x249342 test    rax, rax
//   0x249345 lea     r8d, [rcx-1]
//   0x249349 setnz   dl
//   0x24934C jmp     loc_249230
//   0x249351 align 8
//   0x249358 mov     rax, [rax+210h]
//   0x24935F movzx   ecx, bpl
//   0x249363 mov     rsi, [rax+rdi*8]
//   0x249367 mov     rdi, rbx
//   0x24936A call    sub_248730
//   0x24936F mov     ecx, [rbx+158h]
//   0x249375 test    rax, rax
//   0x249378 lea     r8d, [rcx-1]
//   0x24937C setnz   dl
//   0x24937F jmp     loc_249230
//   0x249384 cmp     rax, rdx
//   0x249387 jz      short loc_249312
//   0x249389 xor     edx, edx
//   0x24938B xor     eax, eax
//   0x24938D jmp     loc_249230
//   0x249392 align 8
//   0x249398 cmp     [rax+18h], esi
//   0x24939B jle     short loc_2493B0
//   0x24939D mov     rax, [rax+8]
//   0x2493A1 jmp     loc_249309
//   0x2493A6 align 10h
//   0x2493B0 jge     short loc_249384
//   0x2493B2 mov     rax, [rax+10h]
//   0x2493B6 jmp     loc_249309
//   0x2493BB mov     rax, cs:under_debugger_ptr
//   0x2493C2 cmp     byte ptr [rax], 0
//   0x2493C5 jnz     loc_4628E
//   0x2493CB mov     edi, 0C4C9h
//   0x2493D0 call    sub_37B760
//   0x2493D5 mov     rax, cs:under_debugger_ptr; jumptable 00000000002491E1 default case
//   0x2493DC cmp     byte ptr [rax], 0
//   0x2493DF jnz     loc_4628E
//   0x2493E5 mov     edi, 0C4C8h
//   0x2493EA call    sub_37B760
//   0x2493EF mov     rax, cs:under_debugger_ptr
//   0x2493F6 cmp     byte ptr [rax], 0
//   0x2493F9 jnz     loc_4628E
//   0x2493FF mov     edi, 0C4C6h
//   0x249404 call    sub_37B760
// ============================================================

void sub_249190(/* signature unknown */)
{
    // see disassembly above
}

