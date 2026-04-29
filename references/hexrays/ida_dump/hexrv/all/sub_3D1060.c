// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x3D1060
// Name:           sub_3D1060
// Function size:  654 bytes (160 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x3D1060 push    r12
//   0x3D1062 mov     r12, cs:callui_ptr
//   0x3D1069 lea     rdx, aMvLowermicro; "mv:LowerMicro"
//   0x3D1070 xor     eax, eax
//   0x3D1072 push    rbp
//   0x3D1073 mov     rbp, rdi
//   0x3D1076 mov     edi, 84h
//   0x3D107B push    rbx
//   0x3D107C mov     rbx, rsi
//   0x3D107F mov     rsi, [rsi]
//   0x3D1082 call    qword ptr [r12]
//   0x3D1086 mov     rsi, [rbx]
//   0x3D1089 lea     rdx, aMvRaisemicro; "mv:RaiseMicro"
//   0x3D1090 xor     eax, eax
//   0x3D1092 mov     edi, 84h
//   0x3D1097 call    qword ptr [r12]
//   0x3D109B mov     rsi, [rbx]
//   0x3D109E lea     rdx, aMvHighestmicro; "mv:HighestMicro"
//   0x3D10A5 xor     eax, eax
//   0x3D10A7 mov     edi, 84h
//   0x3D10AC call    qword ptr [r12]
//   0x3D10B0 mov     rsi, [rbx]
//   0x3D10B3 lea     rdx, aMvJmpxref; "mv:JmpXref"
//   0x3D10BA xor     eax, eax
//   0x3D10BC mov     edi, 84h
//   0x3D10C1 call    qword ptr [r12]
//   0x3D10C5 mov     rsi, [rbx]
//   0x3D10C8 lea     rdx, aMvJmpxreffrom; "mv:JmpXrefFrom"
//   0x3D10CF xor     eax, eax
//   0x3D10D1 mov     edi, 84h
//   0x3D10D6 call    qword ptr [r12]
//   0x3D10DA mov     rsi, [rbx]
//   0x3D10DD lea     rdx, aMvEditblockcmt; "mv:EditBlockCmt"
//   0x3D10E4 xor     eax, eax
//   0x3D10E6 mov     edi, 84h
//   0x3D10EB call    qword ptr [r12]
//   0x3D10EF mov     rsi, [rbx]
//   0x3D10F2 lea     rdx, aMvEditcmt; "mv:EditCmt"
//   0x3D10F9 xor     eax, eax
//   0x3D10FB mov     edi, 84h
//   0x3D1100 call    qword ptr [r12]
//   0x3D1104 mov     rsi, [rbx]
//   0x3D1107 lea     rdx, aMvInsertinsn; "mv:InsertInsn"
//   0x3D110E xor     eax, eax
//   0x3D1110 mov     edi, 84h
//   0x3D1115 call    qword ptr [r12]
//   0x3D1119 mov     rsi, [rbx]
//   0x3D111C lea     rdx, aMvDeleteinsn; "mv:DeleteInsn"
//   0x3D1123 xor     eax, eax
//   0x3D1125 mov     edi, 84h
//   0x3D112A call    qword ptr [r12]
//   0x3D112E mov     rsi, [rbx]
//   0x3D1131 lea     rdx, aMvStructuralan; "mv:StructuralAna"
//   0x3D1138 xor     eax, eax
//   0x3D113A mov     edi, 84h
//   0x3D113F call    qword ptr [r12]
//   0x3D1143 mov     rsi, [rbx]
//   0x3D1146 lea     rdx, aMvDisplaychain; "mv:DisplayChains"
//   0x3D114D xor     eax, eax
//   0x3D114F mov     edi, 84h
//   0x3D1154 call    qword ptr [r12]
//   0x3D1158 mov     rsi, [rbx]
//   0x3D115B lea     rdx, aMvDisplayvdtyp; "mv:DisplayVdTypes"
//   0x3D1162 xor     eax, eax
//   0x3D1164 mov     edi, 84h
//   0x3D1169 call    qword ptr [r12]
//   0x3D116D mov     rsi, [rbx]
//   0x3D1170 lea     rdx, aMvDisplaymcgra; "mv:DisplayMCGraph"
//   0x3D1177 xor     eax, eax
//   0x3D1179 mov     edi, 84h
//   0x3D117E call    qword ptr [r12]
//   0x3D1182 mov     rsi, [rbx]
//   0x3D1185 lea     rdx, aMvDisplayctree; "mv:DisplayCTree"
//   0x3D118C xor     eax, eax
//   0x3D118E mov     edi, 84h
//   0x3D1193 call    qword ptr [r12]
//   0x3D1197 mov     rsi, [rbx]
//   0x3D119A lea     rdx, aMvToggleviewsh; "mv:ToggleViewShort"
//   0x3D11A1 xor     eax, eax
//   0x3D11A3 mov     edi, 84h
//   0x3D11A8 call    qword ptr [r12]
//   0x3D11AC mov     rsi, [rbx]
//   0x3D11AF lea     rdx, aMvToggledispla; "mv:ToggleDisplayNumorig"
//   0x3D11B6 xor     eax, eax
//   0x3D11B8 mov     edi, 84h
//   0x3D11BD call    qword ptr [r12]
//   0x3D11C1 xor     eax, eax
//   0x3D11C3 mov     rsi, [rbx]
//   0x3D11C6 lea     rdx, aMvToggledispla_0; "mv:ToggleDisplayValnums"
//   0x3D11CD mov     edi, 84h
//   0x3D11D2 call    qword ptr [r12]
//   0x3D11D6 mov     rsi, [rbx]
//   0x3D11D9 lea     rdx, aMvToggledispla_1; "mv:ToggleDisplayEA"
//   0x3D11E0 xor     eax, eax
//   0x3D11E2 mov     edi, 84h
//   0x3D11E7 call    qword ptr [r12]
//   0x3D11EB mov     rsi, [rbx]
//   0x3D11EE lea     rdx, aMvRefresh; "mv:Refresh"
//   0x3D11F5 xor     eax, eax
//   0x3D11F7 mov     edi, 84h
//   0x3D11FC call    qword ptr [r12]
//   0x3D1200 mov     edx, [rbx+8]
//   0x3D1203 mov     rax, [rbp+828h]
//   0x3D120A lea     rax, [rax+rdx*8]
//   0x3D120E mov     rbx, [rax]
//   0x3D1211 mov     qword ptr [rax], 0
//   0x3D1218 test    rbx, rbx
//   0x3D121B jz      short loc_3D1260
//   0x3D121D mov     rdi, [rbx+50h]
//   0x3D1221 mov     qword ptr [rbx], 0
//   0x3D1228 mov     qword ptr [rbx+58h], 0
//   0x3D1230 test    rdi, rdi
//   0x3D1233 jz      short loc_3D123A
//   0x3D1235 call    _qfree
//   0x3D123A mov     rdi, [rbx+48h]
//   0x3D123E test    rdi, rdi
//   0x3D1241 jz      short loc_3D1248
//   0x3D1243 call    sub_3D0460
//   0x3D1248 mov     rdi, [rbx+10h]
//   0x3D124C test    rdi, rdi
//   0x3D124F jz      short loc_3D12D0
//   0x3D1251 mov     qword ptr [rbx+18h], 0
//   0x3D1259 call    _qfree
//   0x3D125E jmp     short loc_3D12D0
//   0x3D1260 mov     rax, [rbp+830h]
//   0x3D1267 test    rax, rax
//   0x3D126A jz      short loc_3D12E9
//   0x3D126C mov     rdx, [rbp+828h]
//   0x3D1273 cmp     qword ptr [rdx+rax*8-8], 0
//   0x3D1279 jnz     short loc_3D12E9
//   0x3D127B sub     rax, 1
//   0x3D127F mov     [rbp+830h], rax
//   0x3D1286 mov     rbx, [rdx+rax*8]
//   0x3D128A test    rbx, rbx
//   0x3D128D jz      short loc_3D1260
//   0x3D128F mov     rdi, [rbx+50h]
//   0x3D1293 mov     qword ptr [rbx], 0
//   0x3D129A mov     qword ptr [rbx+58h], 0
//   0x3D12A2 test    rdi, rdi
//   0x3D12A5 jz      short loc_3D12AC
//   0x3D12A7 call    _qfree
//   0x3D12AC mov     rdi, [rbx+48h]
//   0x3D12B0 test    rdi, rdi
//   0x3D12B3 jz      short loc_3D12BA
//   0x3D12B5 call    sub_3D0460
//   0x3D12BA mov     rdi, [rbx+10h]
//   0x3D12BE test    rdi, rdi
//   0x3D12C1 jz      short loc_3D12D0
//   0x3D12C3 mov     qword ptr [rbx+18h], 0
//   0x3D12CB call    _qfree
//   0x3D12D0 mov     esi, 60h ; '`'; unsigned __int64
//   0x3D12D5 mov     rdi, rbx; void *
//   0x3D12D8 call    __ZdlPvm; operator delete(void *,ulong)
//   0x3D12DD mov     rax, [rbp+830h]
//   0x3D12E4 test    rax, rax
//   0x3D12E7 jnz     short loc_3D126C
//   0x3D12E9 pop     rbx
//   0x3D12EA pop     rbp
//   0x3D12EB pop     r12
//   0x3D12ED retn
// ============================================================

void sub_3D1060(/* signature unknown */)
{
    // see disassembly above
}

