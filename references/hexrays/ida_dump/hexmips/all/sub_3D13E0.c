// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x3D13E0
// Name:           sub_3D13E0
// Function size:  654 bytes (160 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x3D13E0 push    r12
//   0x3D13E2 mov     r12, cs:callui_ptr
//   0x3D13E9 lea     rdx, aMvLowermicro; "mv:LowerMicro"
//   0x3D13F0 xor     eax, eax
//   0x3D13F2 push    rbp
//   0x3D13F3 mov     rbp, rdi
//   0x3D13F6 mov     edi, 84h
//   0x3D13FB push    rbx
//   0x3D13FC mov     rbx, rsi
//   0x3D13FF mov     rsi, [rsi]
//   0x3D1402 call    qword ptr [r12]
//   0x3D1406 mov     rsi, [rbx]
//   0x3D1409 lea     rdx, aMvRaisemicro; "mv:RaiseMicro"
//   0x3D1410 xor     eax, eax
//   0x3D1412 mov     edi, 84h
//   0x3D1417 call    qword ptr [r12]
//   0x3D141B mov     rsi, [rbx]
//   0x3D141E lea     rdx, aMvHighestmicro; "mv:HighestMicro"
//   0x3D1425 xor     eax, eax
//   0x3D1427 mov     edi, 84h
//   0x3D142C call    qword ptr [r12]
//   0x3D1430 mov     rsi, [rbx]
//   0x3D1433 lea     rdx, aMvJmpxref; "mv:JmpXref"
//   0x3D143A xor     eax, eax
//   0x3D143C mov     edi, 84h
//   0x3D1441 call    qword ptr [r12]
//   0x3D1445 mov     rsi, [rbx]
//   0x3D1448 lea     rdx, aMvJmpxreffrom; "mv:JmpXrefFrom"
//   0x3D144F xor     eax, eax
//   0x3D1451 mov     edi, 84h
//   0x3D1456 call    qword ptr [r12]
//   0x3D145A mov     rsi, [rbx]
//   0x3D145D lea     rdx, aMvEditblockcmt; "mv:EditBlockCmt"
//   0x3D1464 xor     eax, eax
//   0x3D1466 mov     edi, 84h
//   0x3D146B call    qword ptr [r12]
//   0x3D146F mov     rsi, [rbx]
//   0x3D1472 lea     rdx, aMvEditcmt; "mv:EditCmt"
//   0x3D1479 xor     eax, eax
//   0x3D147B mov     edi, 84h
//   0x3D1480 call    qword ptr [r12]
//   0x3D1484 mov     rsi, [rbx]
//   0x3D1487 lea     rdx, aMvInsertinsn; "mv:InsertInsn"
//   0x3D148E xor     eax, eax
//   0x3D1490 mov     edi, 84h
//   0x3D1495 call    qword ptr [r12]
//   0x3D1499 mov     rsi, [rbx]
//   0x3D149C lea     rdx, aMvDeleteinsn; "mv:DeleteInsn"
//   0x3D14A3 xor     eax, eax
//   0x3D14A5 mov     edi, 84h
//   0x3D14AA call    qword ptr [r12]
//   0x3D14AE mov     rsi, [rbx]
//   0x3D14B1 lea     rdx, aMvStructuralan; "mv:StructuralAna"
//   0x3D14B8 xor     eax, eax
//   0x3D14BA mov     edi, 84h
//   0x3D14BF call    qword ptr [r12]
//   0x3D14C3 mov     rsi, [rbx]
//   0x3D14C6 lea     rdx, aMvDisplaychain; "mv:DisplayChains"
//   0x3D14CD xor     eax, eax
//   0x3D14CF mov     edi, 84h
//   0x3D14D4 call    qword ptr [r12]
//   0x3D14D8 mov     rsi, [rbx]
//   0x3D14DB lea     rdx, aMvDisplayvdtyp; "mv:DisplayVdTypes"
//   0x3D14E2 xor     eax, eax
//   0x3D14E4 mov     edi, 84h
//   0x3D14E9 call    qword ptr [r12]
//   0x3D14ED mov     rsi, [rbx]
//   0x3D14F0 lea     rdx, aMvDisplaymcgra; "mv:DisplayMCGraph"
//   0x3D14F7 xor     eax, eax
//   0x3D14F9 mov     edi, 84h
//   0x3D14FE call    qword ptr [r12]
//   0x3D1502 mov     rsi, [rbx]
//   0x3D1505 lea     rdx, aMvDisplayctree; "mv:DisplayCTree"
//   0x3D150C xor     eax, eax
//   0x3D150E mov     edi, 84h
//   0x3D1513 call    qword ptr [r12]
//   0x3D1517 mov     rsi, [rbx]
//   0x3D151A lea     rdx, aMvToggleviewsh; "mv:ToggleViewShort"
//   0x3D1521 xor     eax, eax
//   0x3D1523 mov     edi, 84h
//   0x3D1528 call    qword ptr [r12]
//   0x3D152C mov     rsi, [rbx]
//   0x3D152F lea     rdx, aMvToggledispla; "mv:ToggleDisplayNumorig"
//   0x3D1536 xor     eax, eax
//   0x3D1538 mov     edi, 84h
//   0x3D153D call    qword ptr [r12]
//   0x3D1541 xor     eax, eax
//   0x3D1543 mov     rsi, [rbx]
//   0x3D1546 lea     rdx, aMvToggledispla_0; "mv:ToggleDisplayValnums"
//   0x3D154D mov     edi, 84h
//   0x3D1552 call    qword ptr [r12]
//   0x3D1556 mov     rsi, [rbx]
//   0x3D1559 lea     rdx, aMvToggledispla_1; "mv:ToggleDisplayEA"
//   0x3D1560 xor     eax, eax
//   0x3D1562 mov     edi, 84h
//   0x3D1567 call    qword ptr [r12]
//   0x3D156B mov     rsi, [rbx]
//   0x3D156E lea     rdx, aMvRefresh; "mv:Refresh"
//   0x3D1575 xor     eax, eax
//   0x3D1577 mov     edi, 84h
//   0x3D157C call    qword ptr [r12]
//   0x3D1580 mov     edx, [rbx+8]
//   0x3D1583 mov     rax, [rbp+828h]
//   0x3D158A lea     rax, [rax+rdx*8]
//   0x3D158E mov     rbx, [rax]
//   0x3D1591 mov     qword ptr [rax], 0
//   0x3D1598 test    rbx, rbx
//   0x3D159B jz      short loc_3D15E0
//   0x3D159D mov     rdi, [rbx+50h]
//   0x3D15A1 mov     qword ptr [rbx], 0
//   0x3D15A8 mov     qword ptr [rbx+58h], 0
//   0x3D15B0 test    rdi, rdi
//   0x3D15B3 jz      short loc_3D15BA
//   0x3D15B5 call    _qfree
//   0x3D15BA mov     rdi, [rbx+48h]
//   0x3D15BE test    rdi, rdi
//   0x3D15C1 jz      short loc_3D15C8
//   0x3D15C3 call    sub_3D07E0
//   0x3D15C8 mov     rdi, [rbx+10h]
//   0x3D15CC test    rdi, rdi
//   0x3D15CF jz      short loc_3D1650
//   0x3D15D1 mov     qword ptr [rbx+18h], 0
//   0x3D15D9 call    _qfree
//   0x3D15DE jmp     short loc_3D1650
//   0x3D15E0 mov     rax, [rbp+830h]
//   0x3D15E7 test    rax, rax
//   0x3D15EA jz      short loc_3D1669
//   0x3D15EC mov     rdx, [rbp+828h]
//   0x3D15F3 cmp     qword ptr [rdx+rax*8-8], 0
//   0x3D15F9 jnz     short loc_3D1669
//   0x3D15FB sub     rax, 1
//   0x3D15FF mov     [rbp+830h], rax
//   0x3D1606 mov     rbx, [rdx+rax*8]
//   0x3D160A test    rbx, rbx
//   0x3D160D jz      short loc_3D15E0
//   0x3D160F mov     rdi, [rbx+50h]
//   0x3D1613 mov     qword ptr [rbx], 0
//   0x3D161A mov     qword ptr [rbx+58h], 0
//   0x3D1622 test    rdi, rdi
//   0x3D1625 jz      short loc_3D162C
//   0x3D1627 call    _qfree
//   0x3D162C mov     rdi, [rbx+48h]
//   0x3D1630 test    rdi, rdi
//   0x3D1633 jz      short loc_3D163A
//   0x3D1635 call    sub_3D07E0
//   0x3D163A mov     rdi, [rbx+10h]
//   0x3D163E test    rdi, rdi
//   0x3D1641 jz      short loc_3D1650
//   0x3D1643 mov     qword ptr [rbx+18h], 0
//   0x3D164B call    _qfree
//   0x3D1650 mov     esi, 60h ; '`'; unsigned __int64
//   0x3D1655 mov     rdi, rbx; void *
//   0x3D1658 call    __ZdlPvm; operator delete(void *,ulong)
//   0x3D165D mov     rax, [rbp+830h]
//   0x3D1664 test    rax, rax
//   0x3D1667 jnz     short loc_3D15EC
//   0x3D1669 pop     rbx
//   0x3D166A pop     rbp
//   0x3D166B pop     r12
//   0x3D166D retn
// ============================================================

void sub_3D13E0(/* signature unknown */)
{
    // see disassembly above
}

