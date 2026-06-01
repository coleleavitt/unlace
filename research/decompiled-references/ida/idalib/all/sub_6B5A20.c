// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x6B5A20
// Name:           sub_6B5A20
// Function size:  624 bytes (172 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x6B5A20 push    r15
//   0x6B5A22 mov     r15, rsi
//   0x6B5A25 push    r14
//   0x6B5A27 push    r13
//   0x6B5A29 push    r12
//   0x6B5A2B mov     r12, rdi
//   0x6B5A2E push    rbp
//   0x6B5A2F push    rbx
//   0x6B5A30 sub     rsp, 8
//   0x6B5A34 mov     rdi, [rdi]
//   0x6B5A37 call    sub_5C7D50
//   0x6B5A3C mov     rdx, [r15+18h]
//   0x6B5A40 cmp     rdx, 0FFFFFFFFFFFFFFFFh
//   0x6B5A44 jnz     loc_6B5BE0
//   0x6B5A4A mov     eax, [r15+20h]
//   0x6B5A4E mov     ebx, eax
//   0x6B5A50 sub     ebx, 1
//   0x6B5A53 js      loc_6B5B04
//   0x6B5A59 movsxd  rbp, ebx
//   0x6B5A5C shl     rbp, 3
//   0x6B5A60 jmp     short loc_6B5A9D
//   0x6B5A62 align 8
//   0x6B5A68 mov     rdx, [r15]
//   0x6B5A6B mov     rdi, [r12]
//   0x6B5A6F mov     rsi, rax
//   0x6B5A72 call    sub_5C93A0
//   0x6B5A77 test    rax, rax
//   0x6B5A7A jz      loc_6B5B20
//   0x6B5A80 mov     rcx, r15
//   0x6B5A83 mov     rdx, rax
//   0x6B5A86 mov     rsi, r14
//   0x6B5A89 mov     rdi, r12
//   0x6B5A8C call    sub_6B4640
//   0x6B5A91 sub     ebx, 1
//   0x6B5A94 sub     rbp, 8
//   0x6B5A98 cmp     ebx, 0FFFFFFFFh
//   0x6B5A9B jz      short loc_6B5B00
//   0x6B5A9D mov     rax, [r15+28h]
//   0x6B5AA1 mov     rdi, [r12]
//   0x6B5AA5 mov     r13, [rax+rbp]
//   0x6B5AA9 mov     rsi, r13
//   0x6B5AAC call    sub_5CAA10
//   0x6B5AB1 mov     r14, rax
//   0x6B5AB4 test    rax, rax
//   0x6B5AB7 jnz     short loc_6B5A68
//   0x6B5AB9 cmp     byte ptr [r12+28h], 0
//   0x6B5ABF jz      loc_6B5B60
//   0x6B5AC5 mov     eax, [r15+20h]
//   0x6B5AC9 lea     edx, [rax-1]
//   0x6B5ACC mov     [r15+20h], edx
//   0x6B5AD0 sub     edx, ebx
//   0x6B5AD2 test    edx, edx
//   0x6B5AD4 jle     short loc_6B5A91
//   0x6B5AD6 mov     rcx, [r15+28h]
//   0x6B5ADA lea     eax, [rbx+1]
//   0x6B5ADD movsxd  rdx, edx
//   0x6B5AE0 sub     ebx, 1
//   0x6B5AE3 cdqe
//   0x6B5AE5 shl     rdx, 3; n
//   0x6B5AE9 lea     rdi, [rcx+rbp]; dest
//   0x6B5AED lea     rsi, [rcx+rax*8]; src
//   0x6B5AF1 sub     rbp, 8
//   0x6B5AF5 call    _memcpy
//   0x6B5AFA cmp     ebx, 0FFFFFFFFh
//   0x6B5AFD jnz     short loc_6B5A9D
//   0x6B5AFF nop
//   0x6B5B00 mov     eax, [r15+20h]
//   0x6B5B04 test    eax, eax
//   0x6B5B06 jz      loc_6B5BB8
//   0x6B5B0C add     rsp, 8
//   0x6B5B10 pop     rbx
//   0x6B5B11 pop     rbp
//   0x6B5B12 pop     r12
//   0x6B5B14 pop     r13
//   0x6B5B16 pop     r14
//   0x6B5B18 pop     r15
//   0x6B5B1A retn
//   0x6B5B1B align 20h
//   0x6B5B20 cmp     byte ptr [r12+28h], 0
//   0x6B5B26 mov     rsi, [r15]
//   0x6B5B29 jnz     short loc_6B5B80
//   0x6B5B2B cmp     [r15+18h], r13
//   0x6B5B2F lea     rax, aGetFchunkRefer+0Bh; "referer"
//   0x6B5B36 mov     r8, [r14]
//   0x6B5B39 mov     rdi, r12
//   0x6B5B3C lea     rcx, aSetTailOwner_0+9; "owner"
//   0x6B5B43 lea     rdx, aTailDoesNotBel; "tail does not belong to its %s %a)"
//   0x6B5B4A cmovnz  rcx, rax
//   0x6B5B4E xor     eax, eax
//   0x6B5B50 call    sub_6B4500
//   0x6B5B55 jmp     loc_6B5A91
//   0x6B5B5A align 20h
//   0x6B5B60 mov     rcx, [r15]
//   0x6B5B63 mov     r8, [r15+8]
//   0x6B5B67 lea     rdx, aMissingReferre; "missing referrer function of tail chunk"...
//   0x6B5B6E xor     eax, eax
//   0x6B5B70 mov     rsi, r13
//   0x6B5B73 mov     rdi, r12
//   0x6B5B76 call    sub_6B4500
//   0x6B5B7B jmp     loc_6B5A91
//   0x6B5B80 mov     rcx, [r15+8]
//   0x6B5B84 mov     rdi, [r12]; int
//   0x6B5B88 mov     rdx, rsi
//   0x6B5B8B mov     rsi, r14
//   0x6B5B8E call    sub_5CF110
//   0x6B5B93 test    al, al
//   0x6B5B95 jnz     loc_6B5A91
//   0x6B5B9B mov     rax, cs:under_debugger_ptr
//   0x6B5BA2 cmp     byte ptr [rax], 0
//   0x6B5BA5 jnz     loc_2D594E
//   0x6B5BAB mov     edi, 97Eh
//   0x6B5BB0 call    _interr
//   0x6B5BB5 align 8
//   0x6B5BB8 cmp     byte ptr [r12+28h], 0
//   0x6B5BBE jz      loc_6B5C50
//   0x6B5BC4 mov     rdi, [r12]; int
//   0x6B5BC8 add     rsp, 8
//   0x6B5BCC mov     rsi, r15
//   0x6B5BCF pop     rbx
//   0x6B5BD0 pop     rbp
//   0x6B5BD1 pop     r12
//   0x6B5BD3 pop     r13
//   0x6B5BD5 pop     r14
//   0x6B5BD7 pop     r15
//   0x6B5BD9 jmp     sub_5D4820
//   0x6B5BDE align 20h
//   0x6B5BE0 mov     rdi, [r12]
//   0x6B5BE4 mov     rsi, r15
//   0x6B5BE7 call    sub_5CB330
//   0x6B5BEC test    al, al
//   0x6B5BEE jnz     loc_6B5A4A
//   0x6B5BF4 mov     rcx, [r15+18h]
//   0x6B5BF8 mov     rsi, [r15]
//   0x6B5BFB lea     rdx, aOwnerAOfTailIs; "owner %a of tail is not present in tail"...
//   0x6B5C02 mov     rdi, r12
//   0x6B5C05 call    sub_6B4500
//   0x6B5C0A cmp     byte ptr [r12+28h], 0
//   0x6B5C10 jz      loc_6B5A4A
//   0x6B5C16 mov     rsi, [r15+18h]
//   0x6B5C1A mov     rdi, [r12]
//   0x6B5C1E call    sub_5CAA10
//   0x6B5C23 mov     edx, [r15+20h]
//   0x6B5C27 test    edx, edx
//   0x6B5C29 jnz     short loc_6B5C72
//   0x6B5C2B mov     qword ptr [r15+18h], 0FFFFFFFFFFFFFFFFh
//   0x6B5C33 test    rax, rax
//   0x6B5C36 jz      short loc_6B5BB8
//   0x6B5C38 mov     rsi, rax
//   0x6B5C3B mov     rdi, r12
//   0x6B5C3E call    sub_6B5540
//   0x6B5C43 jmp     loc_6B5A4A
//   0x6B5C48 align 10h
//   0x6B5C50 mov     rsi, [r15]
//   0x6B5C53 add     rsp, 8
//   0x6B5C57 mov     rdi, r12
//   0x6B5C5A xor     eax, eax
//   0x6B5C5C pop     rbx
//   0x6B5C5D lea     rdx, aTailHasNoRefer; "tail has no referers"
//   0x6B5C64 pop     rbp
//   0x6B5C65 pop     r12
//   0x6B5C67 pop     r13
//   0x6B5C69 pop     r14
//   0x6B5C6B pop     r15
//   0x6B5C6D jmp     sub_6B4500
//   0x6B5C72 mov     rax, [r15+28h]
//   0x6B5C76 mov     rsi, [rax]
//   0x6B5C79 mov     [r15+18h], rsi
//   0x6B5C7D mov     rdi, [r12]
//   0x6B5C81 call    sub_5CAA10
//   0x6B5C86 test    rax, rax
//   0x6B5C89 jnz     short loc_6B5C38
//   0x6B5C8B jmp     loc_6B5A4A
// ============================================================

void sub_6B5A20(/* signature unknown */)
{
    // see disassembly above
}

