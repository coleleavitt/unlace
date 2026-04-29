// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x3D0260
// Name:           sub_3D0260
// Function size:  654 bytes (160 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x3D0260 push    r12
//   0x3D0262 mov     r12, cs:callui_ptr
//   0x3D0269 lea     rdx, aMvLowermicro; "mv:LowerMicro"
//   0x3D0270 xor     eax, eax
//   0x3D0272 push    rbp
//   0x3D0273 mov     rbp, rdi
//   0x3D0276 mov     edi, 84h
//   0x3D027B push    rbx
//   0x3D027C mov     rbx, rsi
//   0x3D027F mov     rsi, [rsi]
//   0x3D0282 call    qword ptr [r12]
//   0x3D0286 mov     rsi, [rbx]
//   0x3D0289 lea     rdx, aMvRaisemicro; "mv:RaiseMicro"
//   0x3D0290 xor     eax, eax
//   0x3D0292 mov     edi, 84h
//   0x3D0297 call    qword ptr [r12]
//   0x3D029B mov     rsi, [rbx]
//   0x3D029E lea     rdx, aMvHighestmicro; "mv:HighestMicro"
//   0x3D02A5 xor     eax, eax
//   0x3D02A7 mov     edi, 84h
//   0x3D02AC call    qword ptr [r12]
//   0x3D02B0 mov     rsi, [rbx]
//   0x3D02B3 lea     rdx, aMvJmpxref; "mv:JmpXref"
//   0x3D02BA xor     eax, eax
//   0x3D02BC mov     edi, 84h
//   0x3D02C1 call    qword ptr [r12]
//   0x3D02C5 mov     rsi, [rbx]
//   0x3D02C8 lea     rdx, aMvJmpxreffrom; "mv:JmpXrefFrom"
//   0x3D02CF xor     eax, eax
//   0x3D02D1 mov     edi, 84h
//   0x3D02D6 call    qword ptr [r12]
//   0x3D02DA mov     rsi, [rbx]
//   0x3D02DD lea     rdx, aMvEditblockcmt; "mv:EditBlockCmt"
//   0x3D02E4 xor     eax, eax
//   0x3D02E6 mov     edi, 84h
//   0x3D02EB call    qword ptr [r12]
//   0x3D02EF mov     rsi, [rbx]
//   0x3D02F2 lea     rdx, aMvEditcmt; "mv:EditCmt"
//   0x3D02F9 xor     eax, eax
//   0x3D02FB mov     edi, 84h
//   0x3D0300 call    qword ptr [r12]
//   0x3D0304 mov     rsi, [rbx]
//   0x3D0307 lea     rdx, aMvInsertinsn; "mv:InsertInsn"
//   0x3D030E xor     eax, eax
//   0x3D0310 mov     edi, 84h
//   0x3D0315 call    qword ptr [r12]
//   0x3D0319 mov     rsi, [rbx]
//   0x3D031C lea     rdx, aMvDeleteinsn; "mv:DeleteInsn"
//   0x3D0323 xor     eax, eax
//   0x3D0325 mov     edi, 84h
//   0x3D032A call    qword ptr [r12]
//   0x3D032E mov     rsi, [rbx]
//   0x3D0331 lea     rdx, aMvStructuralan; "mv:StructuralAna"
//   0x3D0338 xor     eax, eax
//   0x3D033A mov     edi, 84h
//   0x3D033F call    qword ptr [r12]
//   0x3D0343 mov     rsi, [rbx]
//   0x3D0346 lea     rdx, aMvDisplaychain; "mv:DisplayChains"
//   0x3D034D xor     eax, eax
//   0x3D034F mov     edi, 84h
//   0x3D0354 call    qword ptr [r12]
//   0x3D0358 mov     rsi, [rbx]
//   0x3D035B lea     rdx, aMvDisplayvdtyp; "mv:DisplayVdTypes"
//   0x3D0362 xor     eax, eax
//   0x3D0364 mov     edi, 84h
//   0x3D0369 call    qword ptr [r12]
//   0x3D036D mov     rsi, [rbx]
//   0x3D0370 lea     rdx, aMvDisplaymcgra; "mv:DisplayMCGraph"
//   0x3D0377 xor     eax, eax
//   0x3D0379 mov     edi, 84h
//   0x3D037E call    qword ptr [r12]
//   0x3D0382 mov     rsi, [rbx]
//   0x3D0385 lea     rdx, aMvDisplayctree; "mv:DisplayCTree"
//   0x3D038C xor     eax, eax
//   0x3D038E mov     edi, 84h
//   0x3D0393 call    qword ptr [r12]
//   0x3D0397 mov     rsi, [rbx]
//   0x3D039A lea     rdx, aMvToggleviewsh; "mv:ToggleViewShort"
//   0x3D03A1 xor     eax, eax
//   0x3D03A3 mov     edi, 84h
//   0x3D03A8 call    qword ptr [r12]
//   0x3D03AC mov     rsi, [rbx]
//   0x3D03AF lea     rdx, aMvToggledispla; "mv:ToggleDisplayNumorig"
//   0x3D03B6 xor     eax, eax
//   0x3D03B8 mov     edi, 84h
//   0x3D03BD call    qword ptr [r12]
//   0x3D03C1 xor     eax, eax
//   0x3D03C3 mov     rsi, [rbx]
//   0x3D03C6 lea     rdx, aMvToggledispla_0; "mv:ToggleDisplayValnums"
//   0x3D03CD mov     edi, 84h
//   0x3D03D2 call    qword ptr [r12]
//   0x3D03D6 mov     rsi, [rbx]
//   0x3D03D9 lea     rdx, aMvToggledispla_1; "mv:ToggleDisplayEA"
//   0x3D03E0 xor     eax, eax
//   0x3D03E2 mov     edi, 84h
//   0x3D03E7 call    qword ptr [r12]
//   0x3D03EB mov     rsi, [rbx]
//   0x3D03EE lea     rdx, aMvRefresh; "mv:Refresh"
//   0x3D03F5 xor     eax, eax
//   0x3D03F7 mov     edi, 84h
//   0x3D03FC call    qword ptr [r12]
//   0x3D0400 mov     edx, [rbx+8]
//   0x3D0403 mov     rax, [rbp+828h]
//   0x3D040A lea     rax, [rax+rdx*8]
//   0x3D040E mov     rbx, [rax]
//   0x3D0411 mov     qword ptr [rax], 0
//   0x3D0418 test    rbx, rbx
//   0x3D041B jz      short loc_3D0460
//   0x3D041D mov     rdi, [rbx+50h]
//   0x3D0421 mov     qword ptr [rbx], 0
//   0x3D0428 mov     qword ptr [rbx+58h], 0
//   0x3D0430 test    rdi, rdi
//   0x3D0433 jz      short loc_3D043A
//   0x3D0435 call    _qfree
//   0x3D043A mov     rdi, [rbx+48h]
//   0x3D043E test    rdi, rdi
//   0x3D0441 jz      short loc_3D0448
//   0x3D0443 call    sub_3CF660
//   0x3D0448 mov     rdi, [rbx+10h]
//   0x3D044C test    rdi, rdi
//   0x3D044F jz      short loc_3D04D0
//   0x3D0451 mov     qword ptr [rbx+18h], 0
//   0x3D0459 call    _qfree
//   0x3D045E jmp     short loc_3D04D0
//   0x3D0460 mov     rax, [rbp+830h]
//   0x3D0467 test    rax, rax
//   0x3D046A jz      short loc_3D04E9
//   0x3D046C mov     rdx, [rbp+828h]
//   0x3D0473 cmp     qword ptr [rdx+rax*8-8], 0
//   0x3D0479 jnz     short loc_3D04E9
//   0x3D047B sub     rax, 1
//   0x3D047F mov     [rbp+830h], rax
//   0x3D0486 mov     rbx, [rdx+rax*8]
//   0x3D048A test    rbx, rbx
//   0x3D048D jz      short loc_3D0460
//   0x3D048F mov     rdi, [rbx+50h]
//   0x3D0493 mov     qword ptr [rbx], 0
//   0x3D049A mov     qword ptr [rbx+58h], 0
//   0x3D04A2 test    rdi, rdi
//   0x3D04A5 jz      short loc_3D04AC
//   0x3D04A7 call    _qfree
//   0x3D04AC mov     rdi, [rbx+48h]
//   0x3D04B0 test    rdi, rdi
//   0x3D04B3 jz      short loc_3D04BA
//   0x3D04B5 call    sub_3CF660
//   0x3D04BA mov     rdi, [rbx+10h]
//   0x3D04BE test    rdi, rdi
//   0x3D04C1 jz      short loc_3D04D0
//   0x3D04C3 mov     qword ptr [rbx+18h], 0
//   0x3D04CB call    _qfree
//   0x3D04D0 mov     esi, 60h ; '`'; unsigned __int64
//   0x3D04D5 mov     rdi, rbx; void *
//   0x3D04D8 call    __ZdlPvm; operator delete(void *,ulong)
//   0x3D04DD mov     rax, [rbp+830h]
//   0x3D04E4 test    rax, rax
//   0x3D04E7 jnz     short loc_3D046C
//   0x3D04E9 pop     rbx
//   0x3D04EA pop     rbp
//   0x3D04EB pop     r12
//   0x3D04ED retn
// ============================================================

void sub_3D0260(/* signature unknown */)
{
    // see disassembly above
}

