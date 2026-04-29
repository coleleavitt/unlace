// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x24B150
// Name:           sub_24B150
// Function size:  633 bytes (150 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x24B150 push    rbp
//   0x24B151 mov     ebp, ecx
//   0x24B153 push    rbx
//   0x24B154 mov     rbx, rdi
//   0x24B157 sub     rsp, 8
//   0x24B15B test    rdx, rdx
//   0x24B15E jz      short loc_24B1A8
//   0x24B160 mov     r8d, [rdi+158h]
//   0x24B167 lea     eax, [r8+1]
//   0x24B16B mov     [rdi+158h], eax
//   0x24B171 cmp     eax, 3FFh
//   0x24B176 jg      loc_4730A
//   0x24B17C mov     rax, [rbx+130h]
//   0x24B183 movsxd  rdi, esi
//   0x24B186 cmp     dword ptr [rax+rdi*4], 11h; switch 18 cases
//   0x24B18A ja      def_24B1A1; jumptable 000000000024B1A1 default case
//   0x24B190 mov     eax, [rax+rdi*4]
//   0x24B193 lea     rcx, jpt_24B1A1
//   0x24B19A movsxd  rax, ds:(jpt_24B1A1 - 4071A4h)[rcx+rax*4]
//   0x24B19E add     rax, rcx
//   0x24B1A1 jmp     rax; switch jump
//   0x24B1A3 align 8
//   0x24B1A8 test    cl, cl
//   0x24B1AA jz      loc_24B3AF
//   0x24B1B0 call    sub_24AC10
//   0x24B1B5 test    rax, rax
//   0x24B1B8 setnz   dl
//   0x24B1BB cmp     bpl, dl
//   0x24B1BE jnz     loc_24B37B
//   0x24B1C4 add     rsp, 8
//   0x24B1C8 pop     rbx
//   0x24B1C9 pop     rbp
//   0x24B1CA retn
//   0x24B1CB align 10h
//   0x24B1D0 mov     rdi, rbx; jumptable 000000000024B1A1 cases 2-4,16,17
//   0x24B1D3 call    sub_24C3A0
//   0x24B1D8 mov     eax, [rbx+158h]
//   0x24B1DE xor     edx, edx
//   0x24B1E0 lea     r8d, [rax-1]
//   0x24B1E4 xor     eax, eax
//   0x24B1E6 nop     word ptr [rax+rax+00000000h]
//   0x24B1F0 mov     [rbx+158h], r8d
//   0x24B1F7 jmp     short loc_24B1BB
//   0x24B1F9 align 20h
//   0x24B200 mov     rdi, rbx; jumptable 000000000024B1A1 cases 6-9
//   0x24B203 call    sub_24AF90
//   0x24B208 mov     ecx, [rbx+158h]
//   0x24B20E test    rax, rax
//   0x24B211 lea     r8d, [rcx-1]
//   0x24B215 setnz   dl
//   0x24B218 jmp     short loc_24B1F0
//   0x24B21A align 20h
//   0x24B220 mov     rdi, rbx; jumptable 000000000024B1A1 cases 10-12
//   0x24B223 call    sub_24C7A0
//   0x24B228 mov     eax, [rbx+158h]
//   0x24B22E xor     edx, edx
//   0x24B230 lea     r8d, [rax-1]
//   0x24B234 xor     eax, eax
//   0x24B236 jmp     short loc_24B1F0
//   0x24B238 align 20h
//   0x24B240 mov     rdi, rbx; jumptable 000000000024B1A1 cases 13,14
//   0x24B243 call    sub_24B3D0
//   0x24B248 mov     eax, [rbx+158h]
//   0x24B24E xor     edx, edx
//   0x24B250 lea     r8d, [rax-1]
//   0x24B254 xor     eax, eax
//   0x24B256 jmp     short loc_24B1F0
//   0x24B258 align 20h
//   0x24B260 mov     rdi, rbx; jumptable 000000000024B1A1 case 5
//   0x24B263 call    sub_24B640
//   0x24B268 mov     eax, [rbx+158h]
//   0x24B26E xor     edx, edx
//   0x24B270 lea     r8d, [rax-1]
//   0x24B274 xor     eax, eax
//   0x24B276 jmp     loc_24B1F0
//   0x24B27B align 20h
//   0x24B280 mov     rdi, rbx; jumptable 000000000024B1A1 case 15
//   0x24B283 call    sub_24C160
//   0x24B288 mov     eax, [rbx+158h]
//   0x24B28E xor     edx, edx
//   0x24B290 lea     r8d, [rax-1]
//   0x24B294 xor     eax, eax
//   0x24B296 jmp     loc_24B1F0
//   0x24B29B align 20h
//   0x24B2A0 mov     rax, [rbx+0B0h]; jumptable 000000000024B1A1 case 0
//   0x24B2A7 mov     rax, [rax+8]
//   0x24B2AB cmp     [rax+40h], esi
//   0x24B2AE jg      short loc_24B318
//   0x24B2B0 mov     rdx, [rbx+0F0h]
//   0x24B2B7 test    rdx, rdx
//   0x24B2BA jz      short loc_24B2D2
//   0x24B2BC mov     rax, [rdx]
//   0x24B2BF and     rax, 0FFFFFFFFFFFFFFFCh
//   0x24B2C3 jz      loc_24B349
//   0x24B2C9 test    byte ptr [rax], 2
//   0x24B2CC jz      loc_24B358
//   0x24B2D2 mov     rax, cs:under_debugger_ptr
//   0x24B2D9 cmp     byte ptr [rax], 0
//   0x24B2DC jnz     loc_47308
//   0x24B2E2 mov     edi, 0C4C7h
//   0x24B2E7 call    sub_37CFE0
//   0x24B2EC align 10h
//   0x24B2F0 movzx   ecx, bpl; jumptable 000000000024B1A1 case 1
//   0x24B2F4 mov     rdi, rbx
//   0x24B2F7 call    sub_24C250
//   0x24B2FC mov     ecx, [rbx+158h]
//   0x24B302 test    rax, rax
//   0x24B305 lea     r8d, [rcx-1]
//   0x24B309 setnz   dl
//   0x24B30C jmp     loc_24B1F0
//   0x24B311 align 8
//   0x24B318 mov     rax, [rax+210h]
//   0x24B31F movzx   ecx, bpl
//   0x24B323 mov     rsi, [rax+rdi*8]
//   0x24B327 mov     rdi, rbx
//   0x24B32A call    sub_24A6F0
//   0x24B32F mov     ecx, [rbx+158h]
//   0x24B335 test    rax, rax
//   0x24B338 lea     r8d, [rcx-1]
//   0x24B33C setnz   dl
//   0x24B33F jmp     loc_24B1F0
//   0x24B344 cmp     rax, rdx
//   0x24B347 jz      short loc_24B2D2
//   0x24B349 xor     edx, edx
//   0x24B34B xor     eax, eax
//   0x24B34D jmp     loc_24B1F0
//   0x24B352 align 8
//   0x24B358 cmp     [rax+18h], esi
//   0x24B35B jle     short loc_24B370
//   0x24B35D mov     rax, [rax+8]
//   0x24B361 jmp     loc_24B2C9
//   0x24B366 align 10h
//   0x24B370 jge     short loc_24B344
//   0x24B372 mov     rax, [rax+10h]
//   0x24B376 jmp     loc_24B2C9
//   0x24B37B mov     rax, cs:under_debugger_ptr
//   0x24B382 cmp     byte ptr [rax], 0
//   0x24B385 jnz     loc_47308
//   0x24B38B mov     edi, 0C4C9h
//   0x24B390 call    sub_37CFE0
//   0x24B395 mov     rax, cs:under_debugger_ptr; jumptable 000000000024B1A1 default case
//   0x24B39C cmp     byte ptr [rax], 0
//   0x24B39F jnz     loc_47308
//   0x24B3A5 mov     edi, 0C4C8h
//   0x24B3AA call    sub_37CFE0
//   0x24B3AF mov     rax, cs:under_debugger_ptr
//   0x24B3B6 cmp     byte ptr [rax], 0
//   0x24B3B9 jnz     loc_47308
//   0x24B3BF mov     edi, 0C4C6h
//   0x24B3C4 call    sub_37CFE0
// ============================================================

void sub_24B150(/* signature unknown */)
{
    // see disassembly above
}

