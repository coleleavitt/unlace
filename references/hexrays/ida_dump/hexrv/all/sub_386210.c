// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x386210
// Name:           sub_386210
// Function size:  179 bytes (58 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x386210 mov     rax, [rdi+8]
//   0x386214 mov     dword ptr [rdi+38h], 0
//   0x38621B mov     dword ptr [rdi+50h], 0
//   0x386222 mov     dword ptr [rdi+68h], 0
//   0x386229 test    rax, rax
//   0x38622C jz      loc_3862C0
//   0x386232 push    r12
//   0x386234 xor     r12d, r12d
//   0x386237 test    esi, esi
//   0x386239 lea     rcx, [rdi+30h]
//   0x38623D push    rbp
//   0x38623E mov     rbp, cs:callui_ptr
//   0x386245 setnz   r12b
//   0x386249 lea     r8, [rdi+34h]
//   0x38624D push    rbx
//   0x38624E mov     rsi, rax
//   0x386251 mov     rbx, rdi
//   0x386254 xor     eax, eax
//   0x386256 mov     edx, r12d
//   0x386259 mov     edi, 38h ; '8'
//   0x38625E call    qword ptr [rbp+0]
//   0x386261 test    rax, rax
//   0x386264 jz      short loc_3862B8
//   0x386266 mov     eax, [rax+0Ch]
//   0x386269 mov     rsi, [rbx+8]
//   0x38626D mov     edx, r12d
//   0x386270 mov     edi, 46h ; 'F'
//   0x386275 mov     [rbx+2Ch], eax
//   0x386278 xor     eax, eax
//   0x38627A call    qword ptr [rbp+0]
//   0x38627D mov     rdi, [rbx+20h]
//   0x386281 xor     ecx, ecx
//   0x386283 mov     edx, [rbx+30h]
//   0x386286 mov     rsi, rax
//   0x386289 lea     r9, [rbx+50h]
//   0x38628D lea     r8, [rbx+38h]
//   0x386291 mov     eax, [rdi+98h]
//   0x386297 cmp     [rbx+2Ch], eax
//   0x38629A lea     rax, [rbx+68h]
//   0x38629E setnl   cl
//   0x3862A1 sub     rsp, 8
//   0x3862A5 push    rax
//   0x3862A6 call    sub_385510
//   0x3862AB pop     rdx
//   0x3862AC pop     rcx
//   0x3862AD pop     rbx
//   0x3862AE pop     rbp
//   0x3862AF pop     r12
//   0x3862B1 retn
//   0x3862B2 align 8
//   0x3862B8 pop     rbx
//   0x3862B9 xor     eax, eax
//   0x3862BB pop     rbp
//   0x3862BC pop     r12
//   0x3862BE retn
//   0x3862BF align 20h
//   0x3862C0 xor     eax, eax
//   0x3862C2 retn
// ============================================================

void sub_386210(/* signature unknown */)
{
    // see disassembly above
}

