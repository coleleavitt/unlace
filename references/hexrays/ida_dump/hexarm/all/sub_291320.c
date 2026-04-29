// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x291320
// Name:           sub_291320
// Function size:  951 bytes (245 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x291320 push    r15
//   0x291322 push    r14
//   0x291324 push    r13
//   0x291326 push    r12
//   0x291328 push    rbp
//   0x291329 mov     rbp, rdi
//   0x29132C push    rbx
//   0x29132D sub     rsp, 28h
//   0x291331 mov     rdx, [rdi+18h]
//   0x291335 mov     rax, [rdi+10h]
//   0x291339 mov     rbx, fs:28h
//   0x291342 mov     [rsp+58h+var_40], rbx
//   0x291347 mov     rbx, rsi
//   0x29134A lea     r12, [rsp+58h+var_50]
//   0x29134F mov     r15, [rax+rdx*8-8]
//   0x291354 mov     rsi, r12
//   0x291357 mov     [rsp+58h+var_50], 0
//   0x291360 mov     rdx, rbx
//   0x291363 call    sub_284CC0
//   0x291368 test    al, al
//   0x29136A jnz     short loc_2913B3
//   0x29136C cmp     dword ptr [r15+8], 10h
//   0x291371 jnz     loc_291540
//   0x291377 cmp     [r15+18h], rbx
//   0x29137B jz      loc_291540
//   0x291381 mov     rdi, [rbx+30h]
//   0x291385 mov     esi, 2
//   0x29138A call    _get_tinfo_property
//   0x29138F and     eax, 3Fh
//   0x291392 cmp     al, 1
//   0x291394 jz      loc_291540
//   0x29139A mov     rax, [r15+20h]
//   0x29139E lea     rsi, [rax+30h]
//   0x2913A2 cmp     rax, rbx
//   0x2913A5 jz      loc_291668
//   0x2913AB mov     rdi, r12
//   0x2913AE call    _copy_tinfo_t
//   0x2913B3 mov     rsi, [rbx+30h]
//   0x2913B7 xor     edx, edx
//   0x2913B9 xor     edi, edi
//   0x2913BB call    _get_tinfo_size
//   0x2913C0 mov     rsi, [rsp+58h+var_50]
//   0x2913C5 xor     edx, edx
//   0x2913C7 xor     edi, edi
//   0x2913C9 mov     r13, rax
//   0x2913CC call    _get_tinfo_size
//   0x2913D1 cmp     dword ptr [r15+8], 39h ; '9'
//   0x2913D6 mov     r14, rax
//   0x2913D9 jnz     short loc_291430
//   0x2913DB cmp     rbx, [r15+18h]
//   0x2913DF jz      short loc_291430
//   0x2913E1 xor     edx, edx
//   0x2913E3 mov     rsi, rbx
//   0x2913E6 mov     rdi, r15
//   0x2913E9 call    sub_284720
//   0x2913EE movzx   r15d, byte ptr [rax+3Ch]
//   0x2913F3 test    r15b, r15b
//   0x2913F6 jz      short loc_291430
//   0x2913F8 lea     r14, [rbx+30h]
//   0x2913FC mov     rdx, rbx
//   0x2913FF mov     rsi, rbx
//   0x291402 mov     rdi, rbp
//   0x291405 mov     rcx, r14
//   0x291408 call    sub_290330
//   0x29140D test    al, al
//   0x29140F jnz     loc_291540
//   0x291415 cmp     dword ptr [rbx+8], 30h ; '0'
//   0x291419 jz      loc_2915D0
//   0x29141F mov     rsi, r12
//   0x291422 mov     rdi, rbx
//   0x291425 call    sub_245230
//   0x29142A jmp     loc_291543
//   0x29142F align 10h
//   0x291430 mov     rax, [rbp+48h]
//   0x291434 mov     edx, [rbx+8]
//   0x291437 mov     rsi, [rax+70h]
//   0x29143B cmp     edx, 33h ; '3'
//   0x29143E jnz     loc_291578
//   0x291444 mov     ecx, [rsi+54h]
//   0x291447 mov     rax, rbx
//   0x29144A jmp     short loc_291470
//   0x29144C align 20h
//   0x291460 mov     rax, [rax+18h]
//   0x291464 mov     edx, [rax+8]
//   0x291467 cmp     edx, 33h ; '3'
//   0x29146A jnz     loc_291578
//   0x291470 cmp     [rax+28h], ecx
//   0x291473 jz      short loc_291460
//   0x291475 mov     rdi, [rbp+18h]
//   0x291479 mov     esi, [rsi+54h]
//   0x29147C mov     r8, [rbp+10h]
//   0x291480 mov     eax, edi
//   0x291482 sub     eax, 1
//   0x291485 js      loc_2916B4
//   0x29148B mov     edx, eax
//   0x29148D lea     rcx, [r8+rdx*8]
//   0x291491 jmp     short loc_2914A9
//   0x291493 align 8
//   0x291498 cmp     esi, [rdx+28h]
//   0x29149B jnz     short loc_2914B2
//   0x29149D sub     eax, 1
//   0x2914A0 sub     rcx, 8
//   0x2914A4 cmp     eax, 0FFFFFFFFh
//   0x2914A7 jz      short loc_2914C3
//   0x2914A9 mov     rdx, [rcx]
//   0x2914AC cmp     dword ptr [rdx+8], 33h ; '3'
//   0x2914B0 jz      short loc_291498
//   0x2914B2 movsxd  rdx, eax
//   0x2914B5 mov     rcx, [r8+rdx*8]
//   0x2914B9 cmp     dword ptr [rcx+8], 39h ; '9'
//   0x2914BD jz      loc_291678
//   0x2914C3 cmp     r13d, 0FFFFFFFFh
//   0x2914C7 jz      loc_2915B0
//   0x2914CD cmp     r14d, 0FFFFFFFFh
//   0x2914D1 jz      short loc_291540
//   0x2914D3 mov     rdi, [rbp+48h]
//   0x2914D7 lea     rcx, [rbx+30h]
//   0x2914DB mov     rdx, r12
//   0x2914DE mov     rsi, rbx
//   0x2914E1 call    sub_280F40
//   0x2914E6 test    al, al
//   0x2914E8 jz      short loc_291540
//   0x2914EA mov     rdi, [rbx+30h]
//   0x2914EE mov     esi, 2
//   0x2914F3 call    _get_tinfo_property
//   0x2914F8 and     eax, 0Fh
//   0x2914FB cmp     al, 0Ah
//   0x2914FD jnz     loc_291590
//   0x291503 cmp     dword ptr [rbx+8], 30h ; '0'
//   0x291507 jz      loc_291590
//   0x29150D mov     rdi, [rsp+58h+var_50]
//   0x291512 mov     esi, 9
//   0x291517 mov     [rsp+58h+var_48], 0
//   0x291520 call    _get_tinfo_property
//   0x291525 mov     [rsp+58h+var_48], rax
//   0x29152A test    al, 0Eh
//   0x29152C jnz     short loc_291586
//   0x29152E test    al, 30h
//   0x291530 jz      short loc_291586
//   0x291532 lea     rdi, [rsp+58h+var_48]
//   0x291537 call    _clear_tinfo_t
//   0x29153C nop     dword ptr [rax+00h]
//   0x291540 xor     r15d, r15d
//   0x291543 mov     rdi, r12
//   0x291546 call    _clear_tinfo_t
//   0x29154B mov     rax, [rsp+58h+var_40]
//   0x291550 sub     rax, fs:28h
//   0x291559 jnz     loc_2916C2
//   0x29155F add     rsp, 28h
//   0x291563 mov     eax, r15d
//   0x291566 pop     rbx
//   0x291567 pop     rbp
//   0x291568 pop     r12
//   0x29156A pop     r13
//   0x29156C pop     r14
//   0x29156E pop     r15
//   0x291570 retn
//   0x291571 align 8
//   0x291578 cmp     edx, 30h ; '0'
//   0x29157B jz      loc_2914C3
//   0x291581 jmp     loc_291475
//   0x291586 lea     rdi, [rsp+58h+var_48]
//   0x29158B call    _clear_tinfo_t
//   0x291590 cmp     r13d, r14d
//   0x291593 jnz     short loc_2915B0
//   0x291595 mov     rdi, r12
//   0x291598 call    sub_32DD50
//   0x29159D test    al, al
//   0x29159F jnz     short loc_291540
//   0x2915A1 nop     word ptr [rax+rax+00000000h]
//   0x2915AC nop     dword ptr [rax+00h]
//   0x2915B0 mov     rsi, [rbp+48h]
//   0x2915B4 mov     rdx, r12
//   0x2915B7 mov     rdi, rbx
//   0x2915BA call    sub_246F00
//   0x2915BF mov     r15d, eax
//   0x2915C2 jmp     loc_291543
//   0x2915C7 align 10h
//   0x2915D0 mov     rax, [rbx+18h]
//   0x2915D4 xor     edx, edx
//   0x2915D6 xor     edi, edi
//   0x2915D8 mov     rsi, [rax+30h]
//   0x2915DC call    _get_tinfo_size
//   0x2915E1 movsxd  r13, r13d
//   0x2915E4 cmp     r13, rax
//   0x2915E7 jnz     loc_29141F
//   0x2915ED mov     rax, [rbx+18h]
//   0x2915F1 mov     esi, 2
//   0x2915F6 mov     rdi, [rax+30h]
//   0x2915FA call    _get_tinfo_property
//   0x2915FF and     eax, 0Fh
//   0x291602 mov     rdi, [rbx+30h]
//   0x291606 mov     esi, 2
//   0x29160B cmp     al, 9
//   0x29160D setz    bpl
//   0x291611 call    _get_tinfo_property
//   0x291616 and     eax, 0Fh
//   0x291619 cmp     al, 9
//   0x29161B setz    al
//   0x29161E cmp     bpl, al
//   0x291621 jnz     loc_29141F
//   0x291627 mov     rax, [rbx+18h]
//   0x29162B mov     esi, 3
//   0x291630 mov     rdi, [rax+30h]
//   0x291634 call    _get_tinfo_property
//   0x291639 mov     rdi, [rbx+30h]
//   0x29163D mov     esi, 3
//   0x291642 mov     rbp, rax
//   0x291645 call    _get_tinfo_property
//   0x29164A cmp     ebp, eax
//   0x29164C jnz     loc_29141F
//   0x291652 mov     rsi, r12
//   0x291655 mov     rdi, r14
//   0x291658 call    _copy_tinfo_t
//   0x29165D jmp     loc_291543
//   0x291662 align 8
//   0x291668 mov     rax, [r15+28h]
//   0x29166C lea     rsi, [rax+30h]
//   0x291670 jmp     loc_2913AB
//   0x291675 align 8
//   0x291678 sub     rdi, 1
//   0x29167C mov     rsi, [rcx+18h]
//   0x291680 mov     rcx, rbx
//   0x291683 cmp     rdx, rdi
//   0x291686 jz      short loc_291691
//   0x291688 add     eax, 1
//   0x29168B cdqe
//   0x29168D mov     rcx, [r8+rax*8]
//   0x291691 cmp     rsi, rcx
//   0x291694 jnz     loc_2914C3
//   0x29169A xor     edx, edx
//   0x29169C mov     rsi, r12
//   0x29169F mov     rdi, rbx
//   0x2916A2 call    sub_2805A0
//   0x2916A7 test    al, al
//   0x2916A9 jnz     loc_2914C3
//   0x2916AF jmp     loc_291540
//   0x2916B4 cmp     eax, 0FFFFFFFFh
//   0x2916B7 jz      loc_2914C3
//   0x2916BD jmp     loc_2914B2
//   0x2916C2 call    ___stack_chk_fail
//   0x2916C7 mov     rbx, rax
//   0x2916CA jmp     loc_4E9C6
//   0x2916CF mov     rbx, rax
//   0x2916D2 jmp     loc_4E9D0
// ============================================================

void sub_291320(/* signature unknown */)
{
    // see disassembly above
}

