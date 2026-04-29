// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x1CB4A0
// Name:           sub_1CB4A0
// Function size:  361 bytes (89 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x1CB4A0 push    r13
//   0x1CB4A2 push    r12
//   0x1CB4A4 push    rbp
//   0x1CB4A5 mov     rbp, rsi
//   0x1CB4A8 mov     rsi, rdx
//   0x1CB4AB push    rbx
//   0x1CB4AC mov     rbx, rdi
//   0x1CB4AF sub     rsp, 28h
//   0x1CB4B3 mov     r12, fs:28h
//   0x1CB4BC mov     [rsp+48h+var_30], r12
//   0x1CB4C1 mov     r12, rdx
//   0x1CB4C4 call    sub_3EBC90
//   0x1CB4C9 mov     r13d, eax
//   0x1CB4CC test    al, al
//   0x1CB4CE jz      loc_1CB56E
//   0x1CB4D4 mov     rdx, [rbx+60h]
//   0x1CB4D8 mov     rax, [rbx+58h]
//   0x1CB4DC lea     rdx, [rdx+rdx*4]
//   0x1CB4E0 shl     rdx, 4
//   0x1CB4E4 add     rdx, rax
//   0x1CB4E7 cmp     rdx, rax
//   0x1CB4EA jnz     short loc_1CB50D
//   0x1CB4EC jmp     loc_1CB590
//   0x1CB4F1 align 20h
//   0x1CB500 add     rax, 50h ; 'P'
//   0x1CB504 cmp     rax, rdx
//   0x1CB507 jz      loc_1CB590
//   0x1CB50D test    byte ptr [rax+48h], 2
//   0x1CB511 jz      short loc_1CB500
//   0x1CB513 movzx   edi, byte ptr [r12+0Dh]
//   0x1CB519 mov     rbx, [rbx+10h]
//   0x1CB51D call    _get_dtype_size
//   0x1CB522 mov     rdi, rbx
//   0x1CB525 mov     edx, 1
//   0x1CB52A movsxd  rsi, eax
//   0x1CB52D call    sub_131A80
//   0x1CB532 mov     ebx, eax
//   0x1CB534 cmp     eax, 0FFFFFFFFh
//   0x1CB537 jz      loc_1CB5D7
//   0x1CB53D movzx   edi, byte ptr [r12+0Dh]
//   0x1CB543 call    _get_dtype_size
//   0x1CB548 mov     rsi, rsp
//   0x1CB54B mov     rdi, rbp
//   0x1CB54E mov     [rsp+48h+var_40], ebx
//   0x1CB552 mov     [rsp+48h+var_48], 1
//   0x1CB55A mov     rbx, rsp
//   0x1CB55D mov     dword ptr [rsp+48h+var_48+4], eax
//   0x1CB561 call    sub_11EAC0
//   0x1CB566 mov     rdi, rsp
//   0x1CB569 call    sub_1166E0
//   0x1CB56E mov     rax, [rsp+48h+var_30]
//   0x1CB573 sub     rax, fs:28h
//   0x1CB57C jnz     short loc_1CB5D2
//   0x1CB57E add     rsp, 28h
//   0x1CB582 mov     eax, r13d
//   0x1CB585 pop     rbx
//   0x1CB586 pop     rbp
//   0x1CB587 pop     r12
//   0x1CB589 pop     r13
//   0x1CB58B retn
//   0x1CB58C align 10h
//   0x1CB590 mov     rax, [rbx+8]
//   0x1CB594 movzx   edi, byte ptr [r12+0Dh]
//   0x1CB59A mov     r13, [rax+70h]
//   0x1CB59E call    _get_dtype_size
//   0x1CB5A3 mov     rcx, rax
//   0x1CB5A6 mov     rax, [rsp+48h+var_30]
//   0x1CB5AB sub     rax, fs:28h
//   0x1CB5B4 jnz     short loc_1CB5D2
//   0x1CB5B6 add     rsp, 28h
//   0x1CB5BA lea     rdx, [rbx+80h]
//   0x1CB5C1 mov     rsi, rbp
//   0x1CB5C4 mov     rdi, r13
//   0x1CB5C7 pop     rbx
//   0x1CB5C8 pop     rbp
//   0x1CB5C9 pop     r12
//   0x1CB5CB pop     r13
//   0x1CB5CD jmp     sub_1CB310
//   0x1CB5D2 call    ___stack_chk_fail
//   0x1CB5D7 mov     rax, cs:under_debugger_ptr
//   0x1CB5DE cmp     byte ptr [rax], 0
//   0x1CB5E1 jnz     loc_3F7FA
//   0x1CB5E7 mov     rax, [rsp+48h+var_30]
//   0x1CB5EC sub     rax, fs:28h
//   0x1CB5F5 jnz     short loc_1CB5D2
//   0x1CB5F7 mov     edi, 0CE3Fh
//   0x1CB5FC call    sub_37B760
//   0x1CB601 mov     rbp, rax
//   0x1CB604 jmp     loc_3F7FC
// ============================================================

void sub_1CB4A0(/* signature unknown */)
{
    // see disassembly above
}

