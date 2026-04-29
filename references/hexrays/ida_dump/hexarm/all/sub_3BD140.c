// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x3BD140
// Name:           sub_3BD140
// Function size:  291 bytes (83 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x3BD140 push    rbp
//   0x3BD141 push    rbx
//   0x3BD142 mov     rbx, rdi
//   0x3BD145 sub     rsp, 8
//   0x3BD149 mov     rbp, [rsi]
//   0x3BD14C mov     rdi, [rdi+10h]
//   0x3BD150 mov     rsi, rbp
//   0x3BD153 call    sub_38A130
//   0x3BD158 test    rax, rax
//   0x3BD15B jz      loc_3BD250
//   0x3BD161 mov     edx, [rbx+18h]
//   0x3BD164 test    edx, edx
//   0x3BD166 jz      short loc_3BD188
//   0x3BD168 cmp     edx, 1
//   0x3BD16B jnz     loc_3BD25E
//   0x3BD171 mov     edx, 6
//   0x3BD176 cmp     rbp, [rax+8]
//   0x3BD17A jz      short loc_3BD188
//   0x3BD17C add     rsp, 8
//   0x3BD180 mov     eax, edx
//   0x3BD182 pop     rbx
//   0x3BD183 pop     rbp
//   0x3BD184 retn
//   0x3BD185 align 8
//   0x3BD188 mov     rax, [rbx+10h]
//   0x3BD18C mov     rax, [rax+370h]
//   0x3BD193 cmp     dword ptr [rax+8], 5; switch 6 cases
//   0x3BD197 ja      short def_3BD1AA; jumptable 00000000003BD1AA default case, case 0
//   0x3BD199 mov     eax, [rax+8]
//   0x3BD19C lea     rdx, jpt_3BD1AA
//   0x3BD1A3 movsxd  rax, ds:(jpt_3BD1AA - 42BF70h)[rdx+rax*4]
//   0x3BD1A7 add     rax, rdx
//   0x3BD1AA jmp     rax; switch jump
//   0x3BD1AC align 10h
//   0x3BD1B0 mov     rcx, [rbx+28h]; jumptable 00000000003BD1AA default case, case 0
//   0x3BD1B4 mov     rsi, [rbx+20h]
//   0x3BD1B8 mov     edx, 1
//   0x3BD1BD xor     eax, eax
//   0x3BD1BF mov     r8, cs:callui_ptr
//   0x3BD1C6 mov     edi, 8Ch
//   0x3BD1CB call    qword ptr [r8]
//   0x3BD1CE add     rsp, 8
//   0x3BD1D2 mov     edx, 7
//   0x3BD1D7 mov     eax, edx
//   0x3BD1D9 pop     rbx
//   0x3BD1DA pop     rbp
//   0x3BD1DB retn
//   0x3BD1DC align 20h
//   0x3BD1E0 mov     rcx, [rbx+50h]; jumptable 00000000003BD1AA case 5
//   0x3BD1E4 test    rcx, rcx
//   0x3BD1E7 jz      short def_3BD1AA; jumptable 00000000003BD1AA default case, case 0
//   0x3BD1E9 mov     rsi, [rbx+20h]
//   0x3BD1ED mov     edx, 1
//   0x3BD1F2 mov     edi, 8Ch
//   0x3BD1F7 xor     eax, eax
//   0x3BD1F9 mov     r8, cs:callui_ptr
//   0x3BD200 call    qword ptr [r8]
//   0x3BD203 add     rsp, 8
//   0x3BD207 mov     edx, 3
//   0x3BD20C mov     eax, edx
//   0x3BD20E pop     rbx
//   0x3BD20F pop     rbp
//   0x3BD210 retn
//   0x3BD211 align 8
//   0x3BD218 mov     rcx, [rbx+30h]; jumptable 00000000003BD1AA case 1
//   0x3BD21C jmp     short loc_3BD1E4
//   0x3BD21E align 20h
//   0x3BD220 mov     rcx, [rbx+38h]; jumptable 00000000003BD1AA case 2
//   0x3BD224 jmp     short loc_3BD1E4
//   0x3BD226 align 10h
//   0x3BD230 mov     rcx, [rbx+40h]; jumptable 00000000003BD1AA case 3
//   0x3BD234 jmp     short loc_3BD1E4
//   0x3BD236 align 20h
//   0x3BD240 mov     rcx, [rbx+48h]; jumptable 00000000003BD1AA case 4
//   0x3BD244 jmp     short loc_3BD1E4
//   0x3BD246 align 10h
//   0x3BD250 add     rsp, 8
//   0x3BD254 mov     edx, 6
//   0x3BD259 mov     eax, edx
//   0x3BD25B pop     rbx
//   0x3BD25C pop     rbp
//   0x3BD25D retn
//   0x3BD25E call    sub_3BAF10
// ============================================================

void sub_3BD140(/* signature unknown */)
{
    // see disassembly above
}

