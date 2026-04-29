// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x3D6820
// Name:           sub_3D6820
// Function size:  654 bytes (160 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x3D6820 push    r12
//   0x3D6822 mov     r12, cs:callui_ptr
//   0x3D6829 lea     rdx, aMvLowermicro; "mv:LowerMicro"
//   0x3D6830 xor     eax, eax
//   0x3D6832 push    rbp
//   0x3D6833 mov     rbp, rdi
//   0x3D6836 mov     edi, 84h
//   0x3D683B push    rbx
//   0x3D683C mov     rbx, rsi
//   0x3D683F mov     rsi, [rsi]
//   0x3D6842 call    qword ptr [r12]
//   0x3D6846 mov     rsi, [rbx]
//   0x3D6849 lea     rdx, aMvRaisemicro; "mv:RaiseMicro"
//   0x3D6850 xor     eax, eax
//   0x3D6852 mov     edi, 84h
//   0x3D6857 call    qword ptr [r12]
//   0x3D685B mov     rsi, [rbx]
//   0x3D685E lea     rdx, aMvHighestmicro; "mv:HighestMicro"
//   0x3D6865 xor     eax, eax
//   0x3D6867 mov     edi, 84h
//   0x3D686C call    qword ptr [r12]
//   0x3D6870 mov     rsi, [rbx]
//   0x3D6873 lea     rdx, aMvJmpxref; "mv:JmpXref"
//   0x3D687A xor     eax, eax
//   0x3D687C mov     edi, 84h
//   0x3D6881 call    qword ptr [r12]
//   0x3D6885 mov     rsi, [rbx]
//   0x3D6888 lea     rdx, aMvJmpxreffrom; "mv:JmpXrefFrom"
//   0x3D688F xor     eax, eax
//   0x3D6891 mov     edi, 84h
//   0x3D6896 call    qword ptr [r12]
//   0x3D689A mov     rsi, [rbx]
//   0x3D689D lea     rdx, aMvEditblockcmt; "mv:EditBlockCmt"
//   0x3D68A4 xor     eax, eax
//   0x3D68A6 mov     edi, 84h
//   0x3D68AB call    qword ptr [r12]
//   0x3D68AF mov     rsi, [rbx]
//   0x3D68B2 lea     rdx, aMvEditcmt; "mv:EditCmt"
//   0x3D68B9 xor     eax, eax
//   0x3D68BB mov     edi, 84h
//   0x3D68C0 call    qword ptr [r12]
//   0x3D68C4 mov     rsi, [rbx]
//   0x3D68C7 lea     rdx, aMvInsertinsn; "mv:InsertInsn"
//   0x3D68CE xor     eax, eax
//   0x3D68D0 mov     edi, 84h
//   0x3D68D5 call    qword ptr [r12]
//   0x3D68D9 mov     rsi, [rbx]
//   0x3D68DC lea     rdx, aMvDeleteinsn; "mv:DeleteInsn"
//   0x3D68E3 xor     eax, eax
//   0x3D68E5 mov     edi, 84h
//   0x3D68EA call    qword ptr [r12]
//   0x3D68EE mov     rsi, [rbx]
//   0x3D68F1 lea     rdx, aMvStructuralan; "mv:StructuralAna"
//   0x3D68F8 xor     eax, eax
//   0x3D68FA mov     edi, 84h
//   0x3D68FF call    qword ptr [r12]
//   0x3D6903 mov     rsi, [rbx]
//   0x3D6906 lea     rdx, aMvDisplaychain; "mv:DisplayChains"
//   0x3D690D xor     eax, eax
//   0x3D690F mov     edi, 84h
//   0x3D6914 call    qword ptr [r12]
//   0x3D6918 mov     rsi, [rbx]
//   0x3D691B lea     rdx, aMvDisplayvdtyp; "mv:DisplayVdTypes"
//   0x3D6922 xor     eax, eax
//   0x3D6924 mov     edi, 84h
//   0x3D6929 call    qword ptr [r12]
//   0x3D692D mov     rsi, [rbx]
//   0x3D6930 lea     rdx, aMvDisplaymcgra; "mv:DisplayMCGraph"
//   0x3D6937 xor     eax, eax
//   0x3D6939 mov     edi, 84h
//   0x3D693E call    qword ptr [r12]
//   0x3D6942 mov     rsi, [rbx]
//   0x3D6945 lea     rdx, aMvDisplayctree; "mv:DisplayCTree"
//   0x3D694C xor     eax, eax
//   0x3D694E mov     edi, 84h
//   0x3D6953 call    qword ptr [r12]
//   0x3D6957 mov     rsi, [rbx]
//   0x3D695A lea     rdx, aMvToggleviewsh; "mv:ToggleViewShort"
//   0x3D6961 xor     eax, eax
//   0x3D6963 mov     edi, 84h
//   0x3D6968 call    qword ptr [r12]
//   0x3D696C mov     rsi, [rbx]
//   0x3D696F lea     rdx, aMvToggledispla; "mv:ToggleDisplayNumorig"
//   0x3D6976 xor     eax, eax
//   0x3D6978 mov     edi, 84h
//   0x3D697D call    qword ptr [r12]
//   0x3D6981 xor     eax, eax
//   0x3D6983 mov     rsi, [rbx]
//   0x3D6986 lea     rdx, aMvToggledispla_0; "mv:ToggleDisplayValnums"
//   0x3D698D mov     edi, 84h
//   0x3D6992 call    qword ptr [r12]
//   0x3D6996 mov     rsi, [rbx]
//   0x3D6999 lea     rdx, aMvToggledispla_1; "mv:ToggleDisplayEA"
//   0x3D69A0 xor     eax, eax
//   0x3D69A2 mov     edi, 84h
//   0x3D69A7 call    qword ptr [r12]
//   0x3D69AB mov     rsi, [rbx]
//   0x3D69AE lea     rdx, aMvRefresh; "mv:Refresh"
//   0x3D69B5 xor     eax, eax
//   0x3D69B7 mov     edi, 84h
//   0x3D69BC call    qword ptr [r12]
//   0x3D69C0 mov     edx, [rbx+8]
//   0x3D69C3 mov     rax, [rbp+828h]
//   0x3D69CA lea     rax, [rax+rdx*8]
//   0x3D69CE mov     rbx, [rax]
//   0x3D69D1 mov     qword ptr [rax], 0
//   0x3D69D8 test    rbx, rbx
//   0x3D69DB jz      short loc_3D6A20
//   0x3D69DD mov     rdi, [rbx+50h]
//   0x3D69E1 mov     qword ptr [rbx], 0
//   0x3D69E8 mov     qword ptr [rbx+58h], 0
//   0x3D69F0 test    rdi, rdi
//   0x3D69F3 jz      short loc_3D69FA
//   0x3D69F5 call    _qfree
//   0x3D69FA mov     rdi, [rbx+48h]
//   0x3D69FE test    rdi, rdi
//   0x3D6A01 jz      short loc_3D6A08
//   0x3D6A03 call    sub_3D5C20
//   0x3D6A08 mov     rdi, [rbx+10h]
//   0x3D6A0C test    rdi, rdi
//   0x3D6A0F jz      short loc_3D6A90
//   0x3D6A11 mov     qword ptr [rbx+18h], 0
//   0x3D6A19 call    _qfree
//   0x3D6A1E jmp     short loc_3D6A90
//   0x3D6A20 mov     rax, [rbp+830h]
//   0x3D6A27 test    rax, rax
//   0x3D6A2A jz      short loc_3D6AA9
//   0x3D6A2C mov     rdx, [rbp+828h]
//   0x3D6A33 cmp     qword ptr [rdx+rax*8-8], 0
//   0x3D6A39 jnz     short loc_3D6AA9
//   0x3D6A3B sub     rax, 1
//   0x3D6A3F mov     [rbp+830h], rax
//   0x3D6A46 mov     rbx, [rdx+rax*8]
//   0x3D6A4A test    rbx, rbx
//   0x3D6A4D jz      short loc_3D6A20
//   0x3D6A4F mov     rdi, [rbx+50h]
//   0x3D6A53 mov     qword ptr [rbx], 0
//   0x3D6A5A mov     qword ptr [rbx+58h], 0
//   0x3D6A62 test    rdi, rdi
//   0x3D6A65 jz      short loc_3D6A6C
//   0x3D6A67 call    _qfree
//   0x3D6A6C mov     rdi, [rbx+48h]
//   0x3D6A70 test    rdi, rdi
//   0x3D6A73 jz      short loc_3D6A7A
//   0x3D6A75 call    sub_3D5C20
//   0x3D6A7A mov     rdi, [rbx+10h]
//   0x3D6A7E test    rdi, rdi
//   0x3D6A81 jz      short loc_3D6A90
//   0x3D6A83 mov     qword ptr [rbx+18h], 0
//   0x3D6A8B call    _qfree
//   0x3D6A90 mov     esi, 60h ; '`'; unsigned __int64
//   0x3D6A95 mov     rdi, rbx; void *
//   0x3D6A98 call    __ZdlPvm; operator delete(void *,ulong)
//   0x3D6A9D mov     rax, [rbp+830h]
//   0x3D6AA4 test    rax, rax
//   0x3D6AA7 jnz     short loc_3D6A2C
//   0x3D6AA9 pop     rbx
//   0x3D6AAA pop     rbp
//   0x3D6AAB pop     r12
//   0x3D6AAD retn
// ============================================================

void sub_3D6820(/* signature unknown */)
{
    // see disassembly above
}

