// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x3D62E0
// Name:           sub_3D62E0
// Function size:  654 bytes (160 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x3D62E0 push    r12
//   0x3D62E2 mov     r12, cs:callui_ptr
//   0x3D62E9 lea     rdx, aMvLowermicro; "mv:LowerMicro"
//   0x3D62F0 xor     eax, eax
//   0x3D62F2 push    rbp
//   0x3D62F3 mov     rbp, rdi
//   0x3D62F6 mov     edi, 84h
//   0x3D62FB push    rbx
//   0x3D62FC mov     rbx, rsi
//   0x3D62FF mov     rsi, [rsi]
//   0x3D6302 call    qword ptr [r12]
//   0x3D6306 mov     rsi, [rbx]
//   0x3D6309 lea     rdx, aMvRaisemicro; "mv:RaiseMicro"
//   0x3D6310 xor     eax, eax
//   0x3D6312 mov     edi, 84h
//   0x3D6317 call    qword ptr [r12]
//   0x3D631B mov     rsi, [rbx]
//   0x3D631E lea     rdx, aMvHighestmicro; "mv:HighestMicro"
//   0x3D6325 xor     eax, eax
//   0x3D6327 mov     edi, 84h
//   0x3D632C call    qword ptr [r12]
//   0x3D6330 mov     rsi, [rbx]
//   0x3D6333 lea     rdx, aMvJmpxref; "mv:JmpXref"
//   0x3D633A xor     eax, eax
//   0x3D633C mov     edi, 84h
//   0x3D6341 call    qword ptr [r12]
//   0x3D6345 mov     rsi, [rbx]
//   0x3D6348 lea     rdx, aMvJmpxreffrom; "mv:JmpXrefFrom"
//   0x3D634F xor     eax, eax
//   0x3D6351 mov     edi, 84h
//   0x3D6356 call    qword ptr [r12]
//   0x3D635A mov     rsi, [rbx]
//   0x3D635D lea     rdx, aMvEditblockcmt; "mv:EditBlockCmt"
//   0x3D6364 xor     eax, eax
//   0x3D6366 mov     edi, 84h
//   0x3D636B call    qword ptr [r12]
//   0x3D636F mov     rsi, [rbx]
//   0x3D6372 lea     rdx, aMvEditcmt; "mv:EditCmt"
//   0x3D6379 xor     eax, eax
//   0x3D637B mov     edi, 84h
//   0x3D6380 call    qword ptr [r12]
//   0x3D6384 mov     rsi, [rbx]
//   0x3D6387 lea     rdx, aMvInsertinsn; "mv:InsertInsn"
//   0x3D638E xor     eax, eax
//   0x3D6390 mov     edi, 84h
//   0x3D6395 call    qword ptr [r12]
//   0x3D6399 mov     rsi, [rbx]
//   0x3D639C lea     rdx, aMvDeleteinsn; "mv:DeleteInsn"
//   0x3D63A3 xor     eax, eax
//   0x3D63A5 mov     edi, 84h
//   0x3D63AA call    qword ptr [r12]
//   0x3D63AE mov     rsi, [rbx]
//   0x3D63B1 lea     rdx, aMvStructuralan; "mv:StructuralAna"
//   0x3D63B8 xor     eax, eax
//   0x3D63BA mov     edi, 84h
//   0x3D63BF call    qword ptr [r12]
//   0x3D63C3 mov     rsi, [rbx]
//   0x3D63C6 lea     rdx, aMvDisplaychain; "mv:DisplayChains"
//   0x3D63CD xor     eax, eax
//   0x3D63CF mov     edi, 84h
//   0x3D63D4 call    qword ptr [r12]
//   0x3D63D8 mov     rsi, [rbx]
//   0x3D63DB lea     rdx, aMvDisplayvdtyp; "mv:DisplayVdTypes"
//   0x3D63E2 xor     eax, eax
//   0x3D63E4 mov     edi, 84h
//   0x3D63E9 call    qword ptr [r12]
//   0x3D63ED mov     rsi, [rbx]
//   0x3D63F0 lea     rdx, aMvDisplaymcgra; "mv:DisplayMCGraph"
//   0x3D63F7 xor     eax, eax
//   0x3D63F9 mov     edi, 84h
//   0x3D63FE call    qword ptr [r12]
//   0x3D6402 mov     rsi, [rbx]
//   0x3D6405 lea     rdx, aMvDisplayctree; "mv:DisplayCTree"
//   0x3D640C xor     eax, eax
//   0x3D640E mov     edi, 84h
//   0x3D6413 call    qword ptr [r12]
//   0x3D6417 mov     rsi, [rbx]
//   0x3D641A lea     rdx, aMvToggleviewsh; "mv:ToggleViewShort"
//   0x3D6421 xor     eax, eax
//   0x3D6423 mov     edi, 84h
//   0x3D6428 call    qword ptr [r12]
//   0x3D642C mov     rsi, [rbx]
//   0x3D642F lea     rdx, aMvToggledispla; "mv:ToggleDisplayNumorig"
//   0x3D6436 xor     eax, eax
//   0x3D6438 mov     edi, 84h
//   0x3D643D call    qword ptr [r12]
//   0x3D6441 xor     eax, eax
//   0x3D6443 mov     rsi, [rbx]
//   0x3D6446 lea     rdx, aMvToggledispla_0; "mv:ToggleDisplayValnums"
//   0x3D644D mov     edi, 84h
//   0x3D6452 call    qword ptr [r12]
//   0x3D6456 mov     rsi, [rbx]
//   0x3D6459 lea     rdx, aMvToggledispla_1; "mv:ToggleDisplayEA"
//   0x3D6460 xor     eax, eax
//   0x3D6462 mov     edi, 84h
//   0x3D6467 call    qword ptr [r12]
//   0x3D646B mov     rsi, [rbx]
//   0x3D646E lea     rdx, aMvRefresh; "mv:Refresh"
//   0x3D6475 xor     eax, eax
//   0x3D6477 mov     edi, 84h
//   0x3D647C call    qword ptr [r12]
//   0x3D6480 mov     edx, [rbx+8]
//   0x3D6483 mov     rax, [rbp+828h]
//   0x3D648A lea     rax, [rax+rdx*8]
//   0x3D648E mov     rbx, [rax]
//   0x3D6491 mov     qword ptr [rax], 0
//   0x3D6498 test    rbx, rbx
//   0x3D649B jz      short loc_3D64E0
//   0x3D649D mov     rdi, [rbx+50h]
//   0x3D64A1 mov     qword ptr [rbx], 0
//   0x3D64A8 mov     qword ptr [rbx+58h], 0
//   0x3D64B0 test    rdi, rdi
//   0x3D64B3 jz      short loc_3D64BA
//   0x3D64B5 call    _qfree
//   0x3D64BA mov     rdi, [rbx+48h]
//   0x3D64BE test    rdi, rdi
//   0x3D64C1 jz      short loc_3D64C8
//   0x3D64C3 call    sub_3D56E0
//   0x3D64C8 mov     rdi, [rbx+10h]
//   0x3D64CC test    rdi, rdi
//   0x3D64CF jz      short loc_3D6550
//   0x3D64D1 mov     qword ptr [rbx+18h], 0
//   0x3D64D9 call    _qfree
//   0x3D64DE jmp     short loc_3D6550
//   0x3D64E0 mov     rax, [rbp+830h]
//   0x3D64E7 test    rax, rax
//   0x3D64EA jz      short loc_3D6569
//   0x3D64EC mov     rdx, [rbp+828h]
//   0x3D64F3 cmp     qword ptr [rdx+rax*8-8], 0
//   0x3D64F9 jnz     short loc_3D6569
//   0x3D64FB sub     rax, 1
//   0x3D64FF mov     [rbp+830h], rax
//   0x3D6506 mov     rbx, [rdx+rax*8]
//   0x3D650A test    rbx, rbx
//   0x3D650D jz      short loc_3D64E0
//   0x3D650F mov     rdi, [rbx+50h]
//   0x3D6513 mov     qword ptr [rbx], 0
//   0x3D651A mov     qword ptr [rbx+58h], 0
//   0x3D6522 test    rdi, rdi
//   0x3D6525 jz      short loc_3D652C
//   0x3D6527 call    _qfree
//   0x3D652C mov     rdi, [rbx+48h]
//   0x3D6530 test    rdi, rdi
//   0x3D6533 jz      short loc_3D653A
//   0x3D6535 call    sub_3D56E0
//   0x3D653A mov     rdi, [rbx+10h]
//   0x3D653E test    rdi, rdi
//   0x3D6541 jz      short loc_3D6550
//   0x3D6543 mov     qword ptr [rbx+18h], 0
//   0x3D654B call    _qfree
//   0x3D6550 mov     esi, 60h ; '`'; unsigned __int64
//   0x3D6555 mov     rdi, rbx; void *
//   0x3D6558 call    __ZdlPvm; operator delete(void *,ulong)
//   0x3D655D mov     rax, [rbp+830h]
//   0x3D6564 test    rax, rax
//   0x3D6567 jnz     short loc_3D64EC
//   0x3D6569 pop     rbx
//   0x3D656A pop     rbp
//   0x3D656B pop     r12
//   0x3D656D retn
// ============================================================

void sub_3D62E0(/* signature unknown */)
{
    // see disassembly above
}

