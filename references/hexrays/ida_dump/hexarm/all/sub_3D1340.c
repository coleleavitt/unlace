// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x3D1340
// Name:           sub_3D1340
// Function size:  155 bytes (49 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x3D1340 mov     rdx, [rdi+10h]
//   0x3D1344 mov     rsi, [rsi]
//   0x3D1347 mov     rax, [rdx+828h]
//   0x3D134E mov     rdx, [rdx+830h]
//   0x3D1355 lea     rdx, [rax+rdx*8]
//   0x3D1359 cmp     rax, rdx
//   0x3D135C jz      short loc_3D13D5
//   0x3D135E push    rbp
//   0x3D135F mov     rbp, rdi
//   0x3D1362 push    rbx
//   0x3D1363 sub     rsp, 8
//   0x3D1367 nop     word ptr [rax+rax+00000000h]
//   0x3D1370 mov     rbx, [rax]
//   0x3D1373 test    rbx, rbx
//   0x3D1376 jz      short loc_3D137D
//   0x3D1378 cmp     rsi, [rbx]
//   0x3D137B jz      short loc_3D1398
//   0x3D137D add     rax, 8
//   0x3D1381 cmp     rdx, rax
//   0x3D1384 jnz     short loc_3D1370
//   0x3D1386 add     rsp, 8
//   0x3D138A mov     eax, 7
//   0x3D138F pop     rbx
//   0x3D1390 pop     rbp
//   0x3D1391 retn
//   0x3D1392 align 8
//   0x3D1398 mov     r9, cs:callui_ptr
//   0x3D139F xor     edx, edx
//   0x3D13A1 xor     r8d, r8d
//   0x3D13A4 xor     ecx, ecx
//   0x3D13A6 mov     edi, 38h ; '8'
//   0x3D13AB xor     eax, eax
//   0x3D13AD call    qword ptr [r9]
//   0x3D13B0 mov     rdx, rax
//   0x3D13B3 test    rax, rax
//   0x3D13B6 jz      short loc_3D1386
//   0x3D13B8 mov     rax, [rbp+0]
//   0x3D13BC mov     rsi, rbx
//   0x3D13BF mov     rdi, rbp
//   0x3D13C2 call    qword ptr [rax+20h]
//   0x3D13C5 test    al, al
//   0x3D13C7 jz      short loc_3D1386
//   0x3D13C9 add     rsp, 8
//   0x3D13CD mov     eax, 3
//   0x3D13D2 pop     rbx
//   0x3D13D3 pop     rbp
//   0x3D13D4 retn
//   0x3D13D5 mov     eax, 7
//   0x3D13DA retn
// ============================================================

void sub_3D1340(/* signature unknown */)
{
    // see disassembly above
}

