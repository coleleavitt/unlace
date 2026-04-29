// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x3CE9E0
// Name:           sub_3CE9E0
// Function size:  654 bytes (160 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x3CE9E0 push    r12
//   0x3CE9E2 mov     r12, cs:callui_ptr
//   0x3CE9E9 lea     rdx, aMvLowermicro; "mv:LowerMicro"
//   0x3CE9F0 xor     eax, eax
//   0x3CE9F2 push    rbp
//   0x3CE9F3 mov     rbp, rdi
//   0x3CE9F6 mov     edi, 84h
//   0x3CE9FB push    rbx
//   0x3CE9FC mov     rbx, rsi
//   0x3CE9FF mov     rsi, [rsi]
//   0x3CEA02 call    qword ptr [r12]
//   0x3CEA06 mov     rsi, [rbx]
//   0x3CEA09 lea     rdx, aMvRaisemicro; "mv:RaiseMicro"
//   0x3CEA10 xor     eax, eax
//   0x3CEA12 mov     edi, 84h
//   0x3CEA17 call    qword ptr [r12]
//   0x3CEA1B mov     rsi, [rbx]
//   0x3CEA1E lea     rdx, aMvHighestmicro; "mv:HighestMicro"
//   0x3CEA25 xor     eax, eax
//   0x3CEA27 mov     edi, 84h
//   0x3CEA2C call    qword ptr [r12]
//   0x3CEA30 mov     rsi, [rbx]
//   0x3CEA33 lea     rdx, aMvJmpxref; "mv:JmpXref"
//   0x3CEA3A xor     eax, eax
//   0x3CEA3C mov     edi, 84h
//   0x3CEA41 call    qword ptr [r12]
//   0x3CEA45 mov     rsi, [rbx]
//   0x3CEA48 lea     rdx, aMvJmpxreffrom; "mv:JmpXrefFrom"
//   0x3CEA4F xor     eax, eax
//   0x3CEA51 mov     edi, 84h
//   0x3CEA56 call    qword ptr [r12]
//   0x3CEA5A mov     rsi, [rbx]
//   0x3CEA5D lea     rdx, aMvEditblockcmt; "mv:EditBlockCmt"
//   0x3CEA64 xor     eax, eax
//   0x3CEA66 mov     edi, 84h
//   0x3CEA6B call    qword ptr [r12]
//   0x3CEA6F mov     rsi, [rbx]
//   0x3CEA72 lea     rdx, aMvEditcmt; "mv:EditCmt"
//   0x3CEA79 xor     eax, eax
//   0x3CEA7B mov     edi, 84h
//   0x3CEA80 call    qword ptr [r12]
//   0x3CEA84 mov     rsi, [rbx]
//   0x3CEA87 lea     rdx, aMvInsertinsn; "mv:InsertInsn"
//   0x3CEA8E xor     eax, eax
//   0x3CEA90 mov     edi, 84h
//   0x3CEA95 call    qword ptr [r12]
//   0x3CEA99 mov     rsi, [rbx]
//   0x3CEA9C lea     rdx, aMvDeleteinsn; "mv:DeleteInsn"
//   0x3CEAA3 xor     eax, eax
//   0x3CEAA5 mov     edi, 84h
//   0x3CEAAA call    qword ptr [r12]
//   0x3CEAAE mov     rsi, [rbx]
//   0x3CEAB1 lea     rdx, aMvStructuralan; "mv:StructuralAna"
//   0x3CEAB8 xor     eax, eax
//   0x3CEABA mov     edi, 84h
//   0x3CEABF call    qword ptr [r12]
//   0x3CEAC3 mov     rsi, [rbx]
//   0x3CEAC6 lea     rdx, aMvDisplaychain; "mv:DisplayChains"
//   0x3CEACD xor     eax, eax
//   0x3CEACF mov     edi, 84h
//   0x3CEAD4 call    qword ptr [r12]
//   0x3CEAD8 mov     rsi, [rbx]
//   0x3CEADB lea     rdx, aMvDisplayvdtyp; "mv:DisplayVdTypes"
//   0x3CEAE2 xor     eax, eax
//   0x3CEAE4 mov     edi, 84h
//   0x3CEAE9 call    qword ptr [r12]
//   0x3CEAED mov     rsi, [rbx]
//   0x3CEAF0 lea     rdx, aMvDisplaymcgra; "mv:DisplayMCGraph"
//   0x3CEAF7 xor     eax, eax
//   0x3CEAF9 mov     edi, 84h
//   0x3CEAFE call    qword ptr [r12]
//   0x3CEB02 mov     rsi, [rbx]
//   0x3CEB05 lea     rdx, aMvDisplayctree; "mv:DisplayCTree"
//   0x3CEB0C xor     eax, eax
//   0x3CEB0E mov     edi, 84h
//   0x3CEB13 call    qword ptr [r12]
//   0x3CEB17 mov     rsi, [rbx]
//   0x3CEB1A lea     rdx, aMvToggleviewsh; "mv:ToggleViewShort"
//   0x3CEB21 xor     eax, eax
//   0x3CEB23 mov     edi, 84h
//   0x3CEB28 call    qword ptr [r12]
//   0x3CEB2C mov     rsi, [rbx]
//   0x3CEB2F lea     rdx, aMvToggledispla; "mv:ToggleDisplayNumorig"
//   0x3CEB36 xor     eax, eax
//   0x3CEB38 mov     edi, 84h
//   0x3CEB3D call    qword ptr [r12]
//   0x3CEB41 xor     eax, eax
//   0x3CEB43 mov     rsi, [rbx]
//   0x3CEB46 lea     rdx, aMvToggledispla_0; "mv:ToggleDisplayValnums"
//   0x3CEB4D mov     edi, 84h
//   0x3CEB52 call    qword ptr [r12]
//   0x3CEB56 mov     rsi, [rbx]
//   0x3CEB59 lea     rdx, aMvToggledispla_1; "mv:ToggleDisplayEA"
//   0x3CEB60 xor     eax, eax
//   0x3CEB62 mov     edi, 84h
//   0x3CEB67 call    qword ptr [r12]
//   0x3CEB6B mov     rsi, [rbx]
//   0x3CEB6E lea     rdx, aMvRefresh; "mv:Refresh"
//   0x3CEB75 xor     eax, eax
//   0x3CEB77 mov     edi, 84h
//   0x3CEB7C call    qword ptr [r12]
//   0x3CEB80 mov     edx, [rbx+8]
//   0x3CEB83 mov     rax, [rbp+828h]
//   0x3CEB8A lea     rax, [rax+rdx*8]
//   0x3CEB8E mov     rbx, [rax]
//   0x3CEB91 mov     qword ptr [rax], 0
//   0x3CEB98 test    rbx, rbx
//   0x3CEB9B jz      short loc_3CEBE0
//   0x3CEB9D mov     rdi, [rbx+50h]
//   0x3CEBA1 mov     qword ptr [rbx], 0
//   0x3CEBA8 mov     qword ptr [rbx+58h], 0
//   0x3CEBB0 test    rdi, rdi
//   0x3CEBB3 jz      short loc_3CEBBA
//   0x3CEBB5 call    _qfree
//   0x3CEBBA mov     rdi, [rbx+48h]
//   0x3CEBBE test    rdi, rdi
//   0x3CEBC1 jz      short loc_3CEBC8
//   0x3CEBC3 call    sub_3CDDE0
//   0x3CEBC8 mov     rdi, [rbx+10h]
//   0x3CEBCC test    rdi, rdi
//   0x3CEBCF jz      short loc_3CEC50
//   0x3CEBD1 mov     qword ptr [rbx+18h], 0
//   0x3CEBD9 call    _qfree
//   0x3CEBDE jmp     short loc_3CEC50
//   0x3CEBE0 mov     rax, [rbp+830h]
//   0x3CEBE7 test    rax, rax
//   0x3CEBEA jz      short loc_3CEC69
//   0x3CEBEC mov     rdx, [rbp+828h]
//   0x3CEBF3 cmp     qword ptr [rdx+rax*8-8], 0
//   0x3CEBF9 jnz     short loc_3CEC69
//   0x3CEBFB sub     rax, 1
//   0x3CEBFF mov     [rbp+830h], rax
//   0x3CEC06 mov     rbx, [rdx+rax*8]
//   0x3CEC0A test    rbx, rbx
//   0x3CEC0D jz      short loc_3CEBE0
//   0x3CEC0F mov     rdi, [rbx+50h]
//   0x3CEC13 mov     qword ptr [rbx], 0
//   0x3CEC1A mov     qword ptr [rbx+58h], 0
//   0x3CEC22 test    rdi, rdi
//   0x3CEC25 jz      short loc_3CEC2C
//   0x3CEC27 call    _qfree
//   0x3CEC2C mov     rdi, [rbx+48h]
//   0x3CEC30 test    rdi, rdi
//   0x3CEC33 jz      short loc_3CEC3A
//   0x3CEC35 call    sub_3CDDE0
//   0x3CEC3A mov     rdi, [rbx+10h]
//   0x3CEC3E test    rdi, rdi
//   0x3CEC41 jz      short loc_3CEC50
//   0x3CEC43 mov     qword ptr [rbx+18h], 0
//   0x3CEC4B call    _qfree
//   0x3CEC50 mov     esi, 60h ; '`'; unsigned __int64
//   0x3CEC55 mov     rdi, rbx; void *
//   0x3CEC58 call    __ZdlPvm; operator delete(void *,ulong)
//   0x3CEC5D mov     rax, [rbp+830h]
//   0x3CEC64 test    rax, rax
//   0x3CEC67 jnz     short loc_3CEBEC
//   0x3CEC69 pop     rbx
//   0x3CEC6A pop     rbp
//   0x3CEC6B pop     r12
//   0x3CEC6D retn
// ============================================================

void sub_3CE9E0(/* signature unknown */)
{
    // see disassembly above
}

