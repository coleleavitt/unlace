// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x151B0
// Name:           sub_151B0
// Function size:  601 bytes (136 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x151B0 push    r14
//   0x151B2 push    r13
//   0x151B4 push    r12
//   0x151B6 push    rbp
//   0x151B7 push    rbx
//   0x151B8 sub     rsp, 50h
//   0x151BC mov     rax, fs:28h
//   0x151C5 mov     [rsp+78h+var_30], rax
//   0x151CA xor     eax, eax
//   0x151CC cmp     byte ptr [rdx], 0Eh; switch 15 cases
//   0x151CF ja      def_151EF; jumptable 00000000000151EF default case, cases 0,3,7-13
//   0x151D5 movzx   eax, byte ptr [rdx]
//   0x151D8 mov     rbx, rdx
//   0x151DB lea     rdx, jpt_151EF
//   0x151E2 mov     rbp, rdi
//   0x151E5 mov     r12, rsi
//   0x151E8 movsxd  rax, ds:(jpt_151EF - 44A64h)[rdx+rax*4]
//   0x151EC add     rax, rdx
//   0x151EF jmp     rax; switch jump
//   0x151F1 align 8
//   0x151F8 mov     rdx, rbx; jumptable 00000000000151EF cases 1,5,6
//   0x151FB call    sub_14D00
//   0x15200 mov     rax, [rsp+78h+var_30]
//   0x15205 sub     rax, fs:28h
//   0x1520E jnz     loc_153E3
//   0x15214 add     rsp, 50h
//   0x15218 mov     rax, rbp
//   0x1521B pop     rbx
//   0x1521C pop     rbp
//   0x1521D pop     r12
//   0x1521F pop     r13
//   0x15221 pop     r14
//   0x15223 retn
//   0x15224 align 8
//   0x15228 lea     r14, [rsi+18h]; jumptable 00000000000151EF case 2
//   0x1522C mov     esi, [rbx+4]
//   0x1522F mov     rax, [rbx+8]
//   0x15233 mov     rdi, [r12+20h]
//   0x15238 shl     esi, 3
//   0x1523B mov     r13, [rax+10h]
//   0x1523F call    _Z3_mk_bv_sort
//   0x15244 mov     rdi, [r12+20h]
//   0x15249 mov     rbx, rax
//   0x1524C call    _Z3_get_error_code
//   0x15251 test    eax, eax
//   0x15253 jnz     loc_153A8
//   0x15259 mov     rdi, [r12+20h]
//   0x1525E mov     rsi, rbx
//   0x15261 mov     [rsp+78h+var_40], r14
//   0x15266 mov     [rsp+78h+var_38], rbx
//   0x1526B call    _Z3_inc_ref
//   0x15270 mov     rdi, [r12+20h]
//   0x15275 mov     rdx, rbx
//   0x15278 mov     rsi, r13
//   0x1527B lea     rax, off_4D870
//   0x15282 mov     [rsp+78h+var_48], rax
//   0x15287 call    _Z3_mk_unsigned_int64
//   0x1528C mov     rdi, [r12+20h]
//   0x15291 mov     r13, rax
//   0x15294 call    _Z3_get_error_code
//   0x15299 test    eax, eax
//   0x1529B jnz     loc_15390
//   0x152A1 lea     rax, off_4D850
//   0x152A8 mov     [rbp+8], r14
//   0x152AC mov     rdi, [r12+20h]
//   0x152B1 mov     rsi, r13
//   0x152B4 mov     [rbp+0], rax
//   0x152B8 mov     [rbp+10h], r13
//   0x152BC call    _Z3_inc_ref
//   0x152C1 lea     rax, off_4D890
//   0x152C8 mov     [rbp+0], rax
//   0x152CC test    rbx, rbx
//   0x152CF jz      loc_15200
//   0x152D5 mov     rdi, [r12+20h]
//   0x152DA mov     rsi, rbx
//   0x152DD call    _Z3_dec_ref
//   0x152E2 jmp     loc_15200
//   0x152E7 align 10h
//   0x152F0 mov     rax, [rbx+8]; jumptable 00000000000151EF case 14
//   0x152F4 lea     r13, [rsp+78h+var_68]
//   0x152F9 lea     r14, [rsp+78h+var_48]
//   0x152FE mov     rdi, r13
//   0x15301 lea     rdx, [rax+10h]
//   0x15305 call    sub_151B0
//   0x1530A mov     rdx, [rbx+8]
//   0x1530E mov     rsi, r12
//   0x15311 mov     rdi, r14
//   0x15314 call    sub_151B0
//   0x15319 mov     rdx, r14
//   0x1531C mov     rsi, r13
//   0x1531F mov     rdi, rbp
//   0x15322 call    sub_12670
//   0x15327 mov     rsi, [rsp+78h+var_38]
//   0x1532C lea     rbx, off_4D850
//   0x15333 mov     [rsp+78h+var_48], rbx
//   0x15338 test    rsi, rsi
//   0x1533B jz      short loc_1534B
//   0x1533D mov     rax, [rsp+78h+var_40]
//   0x15342 mov     rdi, [rax+8]
//   0x15346 call    _Z3_dec_ref
//   0x1534B mov     rsi, [rsp+78h+var_58]
//   0x15350 mov     [rsp+78h+var_68], rbx
//   0x15355 test    rsi, rsi
//   0x15358 jz      loc_15200
//   0x1535E mov     rax, [rsp+78h+var_60]
//   0x15363 mov     rdi, [rax+8]
//   0x15367 call    _Z3_dec_ref
//   0x1536C jmp     loc_15200
//   0x15371 align 8
//   0x15378 mov     rdx, [rbx+8]; jumptable 00000000000151EF case 4
//   0x1537C call    sub_15410
//   0x15381 jmp     loc_15200
//   0x15386 align 10h
//   0x15390 cmp     byte ptr [r12+18h], 0
//   0x15396 jz      loc_152A1
//   0x1539C jmp     loc_5173
//   0x153A1 align 8
//   0x153A8 cmp     byte ptr [r12+18h], 0
//   0x153AE jz      loc_15259
//   0x153B4 jmp     loc_511F
//   0x153B9 mov     rax, cs:under_debugger_ptr; jumptable 00000000000151EF default case, cases 0,3,7-13
//   0x153C0 cmp     byte ptr [rax], 0
//   0x153C3 jnz     loc_50F4
//   0x153C9 mov     rax, [rsp+78h+var_30]
//   0x153CE sub     rax, fs:28h
//   0x153D7 jnz     short loc_153E8
//   0x153D9 mov     edi, 77E8h
//   0x153DE call    _interr
//   0x153E3 call    ___stack_chk_fail
//   0x153E8 call    ___stack_chk_fail
//   0x153ED mov     rbx, rax
//   0x153F0 lea     rbp, off_4D890
//   0x153F7 jmp     loc_50CA
//   0x153FC mov     rbx, rax
//   0x153FF jmp     loc_50B6
//   0x15404 jmp     loc_50F6
// ============================================================

void sub_151B0(/* signature unknown */)
{
    // see disassembly above
}

