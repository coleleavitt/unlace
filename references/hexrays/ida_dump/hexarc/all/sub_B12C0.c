// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0xB12C0
// Name:           sub_B12C0
// Function size:  324 bytes (86 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0xB12C0 push    rbp
//   0xB12C1 push    rbx
//   0xB12C2 mov     rbx, rdi
//   0xB12C5 sub     rsp, 8
//   0xB12C9 mov     rdx, [rdi+20h]
//   0xB12CD mov     rdi, [rdi+28h]
//   0xB12D1 mov     eax, [rdi+44h]
//   0xB12D4 cmp     [rdx+44h], eax
//   0xB12D7 jle     short loc_B12E8
//   0xB12D9 add     rsp, 8
//   0xB12DD xor     eax, eax
//   0xB12DF pop     rbx
//   0xB12E0 pop     rbp
//   0xB12E1 retn
//   0xB12E2 align 8
//   0xB12E8 mov     rax, [rbx+8]
//   0xB12EC mov     ecx, 9
//   0xB12F1 mov     rbp, [rax+5E0h]
//   0xB12F8 mov     rsi, rbp
//   0xB12FB call    sub_11F4D0
//   0xB1300 mov     rdi, [rbx+28h]
//   0xB1304 test    al, al
//   0xB1306 jz      short loc_B1360
//   0xB1308 mov     rax, [rbx+20h]
//   0xB130C mov     ecx, [rdi+44h]
//   0xB130F mov     edx, 0Ah
//   0xB1314 cmp     [rax+44h], ecx
//   0xB1317 jz      loc_B13E0
//   0xB131D mov     [rax], edx
//   0xB131F mov     rax, [rbx+28h]
//   0xB1323 lea     rsi, [rax+40h]
//   0xB1327 mov     rax, [rbx+20h]
//   0xB132B lea     rdi, [rax+20h]
//   0xB132F call    sub_11EAC0
//   0xB1334 mov     rax, [rbx+20h]
//   0xB1338 lea     rdi, [rax+30h]
//   0xB133C call    sub_1166E0
//   0xB1341 mov     rdi, [rbx+20h]
//   0xB1345 cmp     dword ptr [rdi], 0Ah
//   0xB1348 jz      loc_B13F0
//   0xB134E add     dword ptr [rbx+30h], 1
//   0xB1352 add     rsp, 8
//   0xB1356 xor     eax, eax
//   0xB1358 pop     rbx
//   0xB1359 pop     rbp
//   0xB135A retn
//   0xB135B align 20h
//   0xB1360 cmp     dword ptr [rdi], 0Dh
//   0xB1363 jnz     loc_B12D9
//   0xB1369 mov     rdx, [rbx+20h]
//   0xB136D mov     eax, [rdx]
//   0xB136F sub     eax, 2Bh ; '+'
//   0xB1372 cmp     eax, 1
//   0xB1375 ja      loc_B12D9
//   0xB137B mov     ecx, 2
//   0xB1380 mov     rsi, rbp
//   0xB1383 call    sub_11F4D0
//   0xB1388 test    al, al
//   0xB138A jz      loc_B12D9
//   0xB1390 mov     rax, [rbx+28h]
//   0xB1394 lea     rsi, [rax+40h]
//   0xB1398 mov     rax, [rbx+20h]
//   0xB139C lea     rdi, [rax+20h]
//   0xB13A0 call    sub_11EAC0
//   0xB13A5 mov     rax, [rbx+20h]
//   0xB13A9 lea     rdi, [rax+30h]
//   0xB13AD call    sub_1166E0
//   0xB13B2 mov     rax, [rbx+20h]
//   0xB13B6 xor     r9d, r9d
//   0xB13B9 xor     edx, edx
//   0xB13BB mov     r8, 0FFFFFFFFFFFFFFFFh
//   0xB13C2 mov     rsi, rbp
//   0xB13C5 mov     ecx, [rax+24h]
//   0xB13C8 lea     rdi, [rax+30h]
//   0xB13CC call    sub_11A350
//   0xB13D1 jmp     loc_B134E
//   0xB13D6 align 20h
//   0xB13E0 mov     edx, 4
//   0xB13E5 jmp     loc_B131D
//   0xB13EA align 10h
//   0xB13F0 xor     r8d, r8d
//   0xB13F3 xor     ecx, ecx
//   0xB13F5 xor     edx, edx
//   0xB13F7 mov     rsi, rbp
//   0xB13FA call    sub_1271C0
//   0xB13FF jmp     loc_B134E
// ============================================================

void sub_B12C0(/* signature unknown */)
{
    // see disassembly above
}

