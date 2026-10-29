// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x6003A0
// Name:           sub_6003A0
// Function size:  492 bytes (127 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x6003A0 push    r15; __int64
//   0x6003A2 push    r14; ptr
//   0x6003A4 push    r13; int
//   0x6003A6 mov     r13d, edi
//   0x6003A9 push    r12; char
//   0x6003AB mov     r12, rsi
//   0x6003AE push    rbp; int
//   0x6003AF push    rbx; int
//   0x6003B0 sub     rsp, 28h
//   0x6003B4 mov     rax, cs:debug_ptr
//   0x6003BB mov     rbp, fs:28h
//   0x6003C4 mov     qword ptr [rsp+58h+var_41+1], rbp; int
//   0x6003C9 mov     ebp, edx
//   0x6003CB test    byte ptr [rax], 80h
//   0x6003CE jz      loc_6004D0
//   0x6003D4 test    rsi, rsi
//   0x6003D7 jz      loc_600530
//   0x6003DD mov     edx, edi
//   0x6003DF xor     eax, eax
//   0x6003E1 lea     rdi, aCfgProcessConf; "cfg: process config directives \"%s\" n"...
//   0x6003E8 call    sub_3879F0
//   0x6003ED xor     esi, esi
//   0x6003EF xor     edi, edi
//   0x6003F1 call    sub_7477F0
//   0x6003F6 xor     edx, edx
//   0x6003F8 mov     rsi, r12
//   0x6003FB mov     rbx, rax
//   0x6003FE mov     rdi, rax
//   0x600401 call    _lex_init_string
//   0x600406 cmp     ebp, 2
//   0x600409 lea     rax, sub_5FEFA0
//   0x600410 mov     rdi, rbx
//   0x600413 lea     rbp, sub_5FEFF0
//   0x60041A cmovz   rbp, rax
//   0x60041E call    sub_747530
//   0x600423 mov     rdi, r12; s
//   0x600426 mov     r14, rax
//   0x600429 call    _strlen
//   0x60042E mov     r15, rax
//   0x600431 test    rax, rax
//   0x600434 jnz     loc_600500
//   0x60043A mov     qword ptr [r14+8], 0
//   0x600442 mov     byte ptr [rsp+58h+var_41], 0
//   0x600447 lea     r12, dword_2CCC020
//   0x60044E test    r13d, r13d
//   0x600451 jnz     loc_6004F0
//   0x600457 lea     r14, [rsp+58h+var_41]
//   0x60045C lea     r13, off_2B31240; "DEFAULT_PROCESSOR"
//   0x600463 mov     rdx, r13; int
//   0x600466 mov     r9, r12; int
//   0x600469 mov     r8, rbp; int
//   0x60046C mov     ecx, 77h ; 'w'; int
//   0x600471 mov     rsi, rbx; int
//   0x600474 mov     rdi, r14; int
//   0x600477 call    sub_749060
//   0x60047C mov     edx, eax
//   0x60047E movzx   eax, byte ptr [rsp+58h+var_41]
//   0x600483 test    dl, dl
//   0x600485 jz      short loc_6004E0
//   0x600487 test    al, al
//   0x600489 jz      short loc_600463
//   0x60048B lea     rdi, [r12+1C8h]
//   0x600493 call    _dto_copy_to_inf
//   0x600498 nop     dword ptr [rax+rax+00000000h]
//   0x6004A0 mov     rdi, rbx; void *
//   0x6004A3 call    sub_747AE0
//   0x6004A8 mov     rax, qword ptr [rsp+58h+var_41+1]
//   0x6004AD sub     rax, fs:28h
//   0x6004B6 jnz     loc_600587
//   0x6004BC add     rsp, 28h
//   0x6004C0 pop     rbx
//   0x6004C1 pop     rbp
//   0x6004C2 pop     r12
//   0x6004C4 pop     r13
//   0x6004C6 pop     r14
//   0x6004C8 pop     r15
//   0x6004CA retn
//   0x6004CB align 10h
//   0x6004D0 test    rsi, rsi
//   0x6004D3 jnz     loc_6003ED
//   0x6004D9 jmp     short loc_6004A8
//   0x6004DB align 20h
//   0x6004E0 test    al, al
//   0x6004E2 jz      short loc_6004A0
//   0x6004E4 jmp     short loc_60048B
//   0x6004E6 align 10h
//   0x6004F0 call    _get_current_config
//   0x6004F5 mov     r12, rax
//   0x6004F8 jmp     loc_600457
//   0x6004FD align 20h
//   0x600500 mov     rdi, [r14]; dest
//   0x600503 lea     rdx, [rax+1]
//   0x600507 cmp     [r14+10h], rdx
//   0x60050B jb      short loc_600565
//   0x60050D mov     [r14+8], rdx
//   0x600511 mov     rsi, r12; src
//   0x600514 mov     rdx, r15; n
//   0x600517 call    _memmove
//   0x60051C mov     rax, [r14]
//   0x60051F mov     byte ptr [rax+r15], 0
//   0x600524 jmp     loc_600442
//   0x600529 align 10h
//   0x600530 mov     rax, qword ptr [rsp+58h+var_41+1]
//   0x600535 sub     rax, fs:28h
//   0x60053E jnz     short loc_600587
//   0x600540 add     rsp, 28h
//   0x600544 mov     edx, edi
//   0x600546 lea     rsi, aUnknown; "[unknown]"
//   0x60054D xor     eax, eax
//   0x60054F pop     rbx
//   0x600550 lea     rdi, aCfgProcessConf; "cfg: process config directives \"%s\" n"...
//   0x600557 pop     rbp
//   0x600558 pop     r12
//   0x60055A pop     r13
//   0x60055C pop     r14
//   0x60055E pop     r15
//   0x600560 jmp     sub_3879F0
//   0x600565 mov     rsi, rdi
//   0x600568 mov     ecx, 1
//   0x60056D mov     rdi, r14
//   0x600570 mov     [rsp+58h+var_50], rdx
//   0x600575 call    _qvector_reserve
//   0x60057A mov     rdx, [rsp+58h+var_50]
//   0x60057F mov     [r14], rax
//   0x600582 mov     rdi, rax
//   0x600585 jmp     short loc_60050D
//   0x600587 call    ___stack_chk_fail
// ============================================================

void sub_6003A0(/* signature unknown */)
{
    // see disassembly above
}

