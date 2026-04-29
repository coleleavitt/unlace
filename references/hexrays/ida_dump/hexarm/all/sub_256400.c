// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x256400
// Name:           sub_256400
// Function size:  511 bytes (114 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x256400 push    r15
//   0x256402 mov     esi, 1
//   0x256407 push    r14
//   0x256409 push    r13
//   0x25640B push    r12
//   0x25640D push    rbp
//   0x25640E push    rbx
//   0x25640F sub     rsp, 98h
//   0x256416 mov     r14, fs:28h
//   0x25641F mov     [rsp+0C8h+var_40], r14
//   0x256427 mov     r14, rdi
//   0x25642A call    sub_284050
//   0x25642F mov     rdi, r14
//   0x256432 call    sub_284E50
//   0x256437 mov     rdi, r14
//   0x25643A call    sub_270C20
//   0x25643F mov     ebx, eax
//   0x256441 test    al, al
//   0x256443 jnz     short loc_256470
//   0x256445 mov     rax, [rsp+0C8h+var_40]
//   0x25644D sub     rax, fs:28h
//   0x256456 jnz     loc_2565EA
//   0x25645C add     rsp, 98h
//   0x256463 mov     eax, ebx
//   0x256465 pop     rbx
//   0x256466 pop     rbp
//   0x256467 pop     r12
//   0x256469 pop     r13
//   0x25646B pop     r14
//   0x25646D pop     r15
//   0x25646F retn
//   0x256470 xor     esi, esi
//   0x256472 mov     rdi, r14
//   0x256475 lea     rbp, [r14+10h]
//   0x256479 mov     r12, rsp
//   0x25647C call    sub_2851B0
//   0x256481 xor     esi, esi
//   0x256483 mov     rdi, r14
//   0x256486 lea     r13, off_4DA218
//   0x25648D call    sub_284050
//   0x256492 pxor    xmm0, xmm0
//   0x256496 xor     edx, edx
//   0x256498 mov     rsi, rbp
//   0x25649B mov     rdi, rsp
//   0x25649E mov     [rsp+0C8h+var_C8], r13
//   0x2564A2 mov     [rsp+0C8h+var_C0], 0
//   0x2564AA mov     [rsp+0C8h+var_B8], 0
//   0x2564B3 mov     [rsp+0C8h+var_A0], 0
//   0x2564BC movups  [rsp+0C8h+var_B0], xmm0
//   0x2564C1 movaps  [rsp+0C8h+var_98], xmm0
//   0x2564C6 call    sub_255E40
//   0x2564CB mov     rdi, r14
//   0x2564CE call    sub_256330
//   0x2564D3 mov     rdx, [r14+8]
//   0x2564D7 mov     rax, [rdx+1B0h]
//   0x2564DE mov     rdx, [rdx+1B8h]
//   0x2564E5 lea     rcx, [rdx+rdx*2]
//   0x2564E9 lea     rdx, [rdx+rcx*4]
//   0x2564ED shl     rdx, 3
//   0x2564F1 jz      short loc_25652B
//   0x2564F3 nop     word ptr [rax+rax+00000000h]
//   0x2564FE xchg    ax, ax
//   0x256500 and     dword ptr [rax+18h], 0FFFFFFFEh
//   0x256504 mov     rcx, [r14+8]
//   0x256508 add     rax, 68h ; 'h'
//   0x25650C mov     rdx, [rcx+1B8h]
//   0x256513 lea     rsi, [rdx+rdx*2]
//   0x256517 lea     rsi, [rdx+rsi*4]
//   0x25651B mov     rdx, [rcx+1B0h]
//   0x256522 lea     rdx, [rdx+rsi*8]
//   0x256526 cmp     rax, rdx
//   0x256529 jnz     short loc_256500
//   0x25652B lea     r14, [rsp+0C8h+var_88]
//   0x256530 pxor    xmm0, xmm0
//   0x256534 xor     edx, edx
//   0x256536 mov     rsi, rbp
//   0x256539 lea     r15, off_4DA258
//   0x256540 mov     rdi, r14
//   0x256543 mov     [rsp+0C8h+var_80], 0
//   0x25654B mov     [rsp+0C8h+var_78], 0
//   0x256554 mov     [rsp+0C8h+var_60], 0
//   0x25655D mov     [rsp+0C8h+var_88], r15
//   0x256562 movups  [rsp+0C8h+var_70], xmm0
//   0x256567 movaps  [rsp+0C8h+var_58], xmm0
//   0x25656C call    sub_255E40
//   0x256571 mov     rdi, [rsp+0C8h+var_60]
//   0x256576 lea     rbp, off_4D63B8
//   0x25657D mov     [rsp+0C8h+var_88], rbp
//   0x256582 test    rdi, rdi
//   0x256585 jz      short loc_256595
//   0x256587 mov     qword ptr [rsp+0C8h+var_58], 0
//   0x256590 call    _qfree
//   0x256595 mov     rdi, [rsp+0C8h+var_78]
//   0x25659A test    rdi, rdi
//   0x25659D jz      short loc_2565AD
//   0x25659F mov     qword ptr [rsp+0C8h+var_70], 0
//   0x2565A8 call    _qfree
//   0x2565AD mov     rdi, [rsp+0C8h+var_A0]
//   0x2565B2 mov     [rsp+0C8h+var_C8], rbp
//   0x2565B6 test    rdi, rdi
//   0x2565B9 jz      short loc_2565C9
//   0x2565BB mov     qword ptr [rsp+0C8h+var_98], 0
//   0x2565C4 call    _qfree
//   0x2565C9 mov     rdi, [rsp+0C8h+var_B8]
//   0x2565CE test    rdi, rdi
//   0x2565D1 jz      loc_256445
//   0x2565D7 mov     qword ptr [rsp+0C8h+var_B0], 0
//   0x2565E0 call    _qfree
//   0x2565E5 jmp     loc_256445
//   0x2565EA call    ___stack_chk_fail
//   0x2565EF mov     rbx, rax
//   0x2565F2 jmp     loc_4A801
//   0x2565F7 mov     rbx, rax
//   0x2565FA jmp     loc_4A7F4
// ============================================================

void sub_256400(/* signature unknown */)
{
    // see disassembly above
}

