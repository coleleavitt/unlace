// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x3D2160
// Name:           sub_3D2160
// Function size:  654 bytes (160 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x3D2160 push    r12
//   0x3D2162 mov     r12, cs:callui_ptr
//   0x3D2169 lea     rdx, aMvLowermicro; "mv:LowerMicro"
//   0x3D2170 xor     eax, eax
//   0x3D2172 push    rbp
//   0x3D2173 mov     rbp, rdi
//   0x3D2176 mov     edi, 84h
//   0x3D217B push    rbx
//   0x3D217C mov     rbx, rsi
//   0x3D217F mov     rsi, [rsi]
//   0x3D2182 call    qword ptr [r12]
//   0x3D2186 mov     rsi, [rbx]
//   0x3D2189 lea     rdx, aMvRaisemicro; "mv:RaiseMicro"
//   0x3D2190 xor     eax, eax
//   0x3D2192 mov     edi, 84h
//   0x3D2197 call    qword ptr [r12]
//   0x3D219B mov     rsi, [rbx]
//   0x3D219E lea     rdx, aMvHighestmicro; "mv:HighestMicro"
//   0x3D21A5 xor     eax, eax
//   0x3D21A7 mov     edi, 84h
//   0x3D21AC call    qword ptr [r12]
//   0x3D21B0 mov     rsi, [rbx]
//   0x3D21B3 lea     rdx, aMvJmpxref; "mv:JmpXref"
//   0x3D21BA xor     eax, eax
//   0x3D21BC mov     edi, 84h
//   0x3D21C1 call    qword ptr [r12]
//   0x3D21C5 mov     rsi, [rbx]
//   0x3D21C8 lea     rdx, aMvJmpxreffrom; "mv:JmpXrefFrom"
//   0x3D21CF xor     eax, eax
//   0x3D21D1 mov     edi, 84h
//   0x3D21D6 call    qword ptr [r12]
//   0x3D21DA mov     rsi, [rbx]
//   0x3D21DD lea     rdx, aMvEditblockcmt; "mv:EditBlockCmt"
//   0x3D21E4 xor     eax, eax
//   0x3D21E6 mov     edi, 84h
//   0x3D21EB call    qword ptr [r12]
//   0x3D21EF mov     rsi, [rbx]
//   0x3D21F2 lea     rdx, aMvEditcmt; "mv:EditCmt"
//   0x3D21F9 xor     eax, eax
//   0x3D21FB mov     edi, 84h
//   0x3D2200 call    qword ptr [r12]
//   0x3D2204 mov     rsi, [rbx]
//   0x3D2207 lea     rdx, aMvInsertinsn; "mv:InsertInsn"
//   0x3D220E xor     eax, eax
//   0x3D2210 mov     edi, 84h
//   0x3D2215 call    qword ptr [r12]
//   0x3D2219 mov     rsi, [rbx]
//   0x3D221C lea     rdx, aMvDeleteinsn; "mv:DeleteInsn"
//   0x3D2223 xor     eax, eax
//   0x3D2225 mov     edi, 84h
//   0x3D222A call    qword ptr [r12]
//   0x3D222E mov     rsi, [rbx]
//   0x3D2231 lea     rdx, aMvStructuralan; "mv:StructuralAna"
//   0x3D2238 xor     eax, eax
//   0x3D223A mov     edi, 84h
//   0x3D223F call    qword ptr [r12]
//   0x3D2243 mov     rsi, [rbx]
//   0x3D2246 lea     rdx, aMvDisplaychain; "mv:DisplayChains"
//   0x3D224D xor     eax, eax
//   0x3D224F mov     edi, 84h
//   0x3D2254 call    qword ptr [r12]
//   0x3D2258 mov     rsi, [rbx]
//   0x3D225B lea     rdx, aMvDisplayvdtyp; "mv:DisplayVdTypes"
//   0x3D2262 xor     eax, eax
//   0x3D2264 mov     edi, 84h
//   0x3D2269 call    qword ptr [r12]
//   0x3D226D mov     rsi, [rbx]
//   0x3D2270 lea     rdx, aMvDisplaymcgra; "mv:DisplayMCGraph"
//   0x3D2277 xor     eax, eax
//   0x3D2279 mov     edi, 84h
//   0x3D227E call    qword ptr [r12]
//   0x3D2282 mov     rsi, [rbx]
//   0x3D2285 lea     rdx, aMvDisplayctree; "mv:DisplayCTree"
//   0x3D228C xor     eax, eax
//   0x3D228E mov     edi, 84h
//   0x3D2293 call    qword ptr [r12]
//   0x3D2297 mov     rsi, [rbx]
//   0x3D229A lea     rdx, aMvToggleviewsh; "mv:ToggleViewShort"
//   0x3D22A1 xor     eax, eax
//   0x3D22A3 mov     edi, 84h
//   0x3D22A8 call    qword ptr [r12]
//   0x3D22AC mov     rsi, [rbx]
//   0x3D22AF lea     rdx, aMvToggledispla; "mv:ToggleDisplayNumorig"
//   0x3D22B6 xor     eax, eax
//   0x3D22B8 mov     edi, 84h
//   0x3D22BD call    qword ptr [r12]
//   0x3D22C1 xor     eax, eax
//   0x3D22C3 mov     rsi, [rbx]
//   0x3D22C6 lea     rdx, aMvToggledispla_0; "mv:ToggleDisplayValnums"
//   0x3D22CD mov     edi, 84h
//   0x3D22D2 call    qword ptr [r12]
//   0x3D22D6 mov     rsi, [rbx]
//   0x3D22D9 lea     rdx, aMvToggledispla_1; "mv:ToggleDisplayEA"
//   0x3D22E0 xor     eax, eax
//   0x3D22E2 mov     edi, 84h
//   0x3D22E7 call    qword ptr [r12]
//   0x3D22EB mov     rsi, [rbx]
//   0x3D22EE lea     rdx, aMvRefresh; "mv:Refresh"
//   0x3D22F5 xor     eax, eax
//   0x3D22F7 mov     edi, 84h
//   0x3D22FC call    qword ptr [r12]
//   0x3D2300 mov     edx, [rbx+8]
//   0x3D2303 mov     rax, [rbp+828h]
//   0x3D230A lea     rax, [rax+rdx*8]
//   0x3D230E mov     rbx, [rax]
//   0x3D2311 mov     qword ptr [rax], 0
//   0x3D2318 test    rbx, rbx
//   0x3D231B jz      short loc_3D2360
//   0x3D231D mov     rdi, [rbx+50h]
//   0x3D2321 mov     qword ptr [rbx], 0
//   0x3D2328 mov     qword ptr [rbx+58h], 0
//   0x3D2330 test    rdi, rdi
//   0x3D2333 jz      short loc_3D233A
//   0x3D2335 call    _qfree
//   0x3D233A mov     rdi, [rbx+48h]
//   0x3D233E test    rdi, rdi
//   0x3D2341 jz      short loc_3D2348
//   0x3D2343 call    sub_3D1560
//   0x3D2348 mov     rdi, [rbx+10h]
//   0x3D234C test    rdi, rdi
//   0x3D234F jz      short loc_3D23D0
//   0x3D2351 mov     qword ptr [rbx+18h], 0
//   0x3D2359 call    _qfree
//   0x3D235E jmp     short loc_3D23D0
//   0x3D2360 mov     rax, [rbp+830h]
//   0x3D2367 test    rax, rax
//   0x3D236A jz      short loc_3D23E9
//   0x3D236C mov     rdx, [rbp+828h]
//   0x3D2373 cmp     qword ptr [rdx+rax*8-8], 0
//   0x3D2379 jnz     short loc_3D23E9
//   0x3D237B sub     rax, 1
//   0x3D237F mov     [rbp+830h], rax
//   0x3D2386 mov     rbx, [rdx+rax*8]
//   0x3D238A test    rbx, rbx
//   0x3D238D jz      short loc_3D2360
//   0x3D238F mov     rdi, [rbx+50h]
//   0x3D2393 mov     qword ptr [rbx], 0
//   0x3D239A mov     qword ptr [rbx+58h], 0
//   0x3D23A2 test    rdi, rdi
//   0x3D23A5 jz      short loc_3D23AC
//   0x3D23A7 call    _qfree
//   0x3D23AC mov     rdi, [rbx+48h]
//   0x3D23B0 test    rdi, rdi
//   0x3D23B3 jz      short loc_3D23BA
//   0x3D23B5 call    sub_3D1560
//   0x3D23BA mov     rdi, [rbx+10h]
//   0x3D23BE test    rdi, rdi
//   0x3D23C1 jz      short loc_3D23D0
//   0x3D23C3 mov     qword ptr [rbx+18h], 0
//   0x3D23CB call    _qfree
//   0x3D23D0 mov     esi, 60h ; '`'; unsigned __int64
//   0x3D23D5 mov     rdi, rbx; void *
//   0x3D23D8 call    __ZdlPvm; operator delete(void *,ulong)
//   0x3D23DD mov     rax, [rbp+830h]
//   0x3D23E4 test    rax, rax
//   0x3D23E7 jnz     short loc_3D236C
//   0x3D23E9 pop     rbx
//   0x3D23EA pop     rbp
//   0x3D23EB pop     r12
//   0x3D23ED retn
// ============================================================

void sub_3D2160(/* signature unknown */)
{
    // see disassembly above
}

