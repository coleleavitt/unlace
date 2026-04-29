// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x3B5300
// Name:           sub_3B5300
// Function size:  291 bytes (83 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x3B5300 push    rbp
//   0x3B5301 push    rbx
//   0x3B5302 mov     rbx, rdi
//   0x3B5305 sub     rsp, 8
//   0x3B5309 mov     rbp, [rsi]
//   0x3B530C mov     rdi, [rdi+10h]
//   0x3B5310 mov     rsi, rbp
//   0x3B5313 call    sub_3822F0
//   0x3B5318 test    rax, rax
//   0x3B531B jz      loc_3B5410
//   0x3B5321 mov     edx, [rbx+18h]
//   0x3B5324 test    edx, edx
//   0x3B5326 jz      short loc_3B5348
//   0x3B5328 cmp     edx, 1
//   0x3B532B jnz     loc_3B541E
//   0x3B5331 mov     edx, 6
//   0x3B5336 cmp     rbp, [rax+8]
//   0x3B533A jz      short loc_3B5348
//   0x3B533C add     rsp, 8
//   0x3B5340 mov     eax, edx
//   0x3B5342 pop     rbx
//   0x3B5343 pop     rbp
//   0x3B5344 retn
//   0x3B5345 align 8
//   0x3B5348 mov     rax, [rbx+10h]
//   0x3B534C mov     rax, [rax+370h]
//   0x3B5353 cmp     dword ptr [rax+8], 5; switch 6 cases
//   0x3B5357 ja      short def_3B536A; jumptable 00000000003B536A default case, case 0
//   0x3B5359 mov     eax, [rax+8]
//   0x3B535C lea     rdx, jpt_3B536A
//   0x3B5363 movsxd  rax, ds:(jpt_3B536A - 406790h)[rdx+rax*4]
//   0x3B5367 add     rax, rdx
//   0x3B536A jmp     rax; switch jump
//   0x3B536C align 10h
//   0x3B5370 mov     rcx, [rbx+28h]; jumptable 00000000003B536A default case, case 0
//   0x3B5374 mov     rsi, [rbx+20h]
//   0x3B5378 mov     edx, 1
//   0x3B537D xor     eax, eax
//   0x3B537F mov     r8, cs:callui_ptr
//   0x3B5386 mov     edi, 8Ch
//   0x3B538B call    qword ptr [r8]
//   0x3B538E add     rsp, 8
//   0x3B5392 mov     edx, 7
//   0x3B5397 mov     eax, edx
//   0x3B5399 pop     rbx
//   0x3B539A pop     rbp
//   0x3B539B retn
//   0x3B539C align 20h
//   0x3B53A0 mov     rcx, [rbx+50h]; jumptable 00000000003B536A case 5
//   0x3B53A4 test    rcx, rcx
//   0x3B53A7 jz      short def_3B536A; jumptable 00000000003B536A default case, case 0
//   0x3B53A9 mov     rsi, [rbx+20h]
//   0x3B53AD mov     edx, 1
//   0x3B53B2 mov     edi, 8Ch
//   0x3B53B7 xor     eax, eax
//   0x3B53B9 mov     r8, cs:callui_ptr
//   0x3B53C0 call    qword ptr [r8]
//   0x3B53C3 add     rsp, 8
//   0x3B53C7 mov     edx, 3
//   0x3B53CC mov     eax, edx
//   0x3B53CE pop     rbx
//   0x3B53CF pop     rbp
//   0x3B53D0 retn
//   0x3B53D1 align 8
//   0x3B53D8 mov     rcx, [rbx+30h]; jumptable 00000000003B536A case 1
//   0x3B53DC jmp     short loc_3B53A4
//   0x3B53DE align 20h
//   0x3B53E0 mov     rcx, [rbx+38h]; jumptable 00000000003B536A case 2
//   0x3B53E4 jmp     short loc_3B53A4
//   0x3B53E6 align 10h
//   0x3B53F0 mov     rcx, [rbx+40h]; jumptable 00000000003B536A case 3
//   0x3B53F4 jmp     short loc_3B53A4
//   0x3B53F6 align 20h
//   0x3B5400 mov     rcx, [rbx+48h]; jumptable 00000000003B536A case 4
//   0x3B5404 jmp     short loc_3B53A4
//   0x3B5406 align 10h
//   0x3B5410 add     rsp, 8
//   0x3B5414 mov     edx, 6
//   0x3B5419 mov     eax, edx
//   0x3B541B pop     rbx
//   0x3B541C pop     rbp
//   0x3B541D retn
//   0x3B541E call    sub_3B30D0
// ============================================================

void sub_3B5300(/* signature unknown */)
{
    // see disassembly above
}

