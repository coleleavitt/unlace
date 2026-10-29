// ============================================================
// RAW DISASSEMBLY FALLBACK
// ============================================================
// Hex-Rays decompilation failed: call analysis failed
// Address:        0x3E3D90
// Name:           create_xrefs_from
// Function size:  126 bytes (35 instructions)
// Why this fallback: tier-1 (decompile) and tier-2/3 (Python
//   patch + microcode lift) both failed. This is the last
//   resort - raw disassembly emitted as comments so the
//   analyst still has visibility on the function body.
// ============================================================
//
// Instructions:
//   0x3E3D90 push    rbp; int
//   0x3E3D91 mov     rsi, rdi
//   0x3E3D94 mov     edx, 4
//   0x3E3D99 push    rbx; int
//   0x3E3D9A mov     rbx, rdi
//   0x3E3D9D sub     rsp, 8
//   0x3E3DA1 lea     rax, qword_2CCB598
//   0x3E3DA8 mov     rax, [rax]
//   0x3E3DAB mov     rbp, [rax+688h]
//   0x3E3DB2 mov     rdi, rbp
//   0x3E3DB5 call    sub_3BE900
//   0x3E3DBA and     eax, 600h
//   0x3E3DBF cmp     rax, 600h
//   0x3E3DC5 jz      short loc_3E3DE8
//   0x3E3DC7 xor     edx, edx
//   0x3E3DC9 cmp     rax, 400h
//   0x3E3DCF jz      short loc_3E3E00
//   0x3E3DD1 mov     qword ptr [rbp+8A0h], 0FFFFFFFFFFFFFFFFh
//   0x3E3DDC add     rsp, 8
//   0x3E3DE0 mov     eax, edx
//   0x3E3DE2 pop     rbx
//   0x3E3DE3 pop     rbp
//   0x3E3DE4 retn
//   0x3E3DE5 align 8
//   0x3E3DE8 xor     edx, edx
//   0x3E3DEA mov     rsi, rbx; int
//   0x3E3DED mov     rdi, rbp; int
//   0x3E3DF0 call    sub_577F80
//   0x3E3DF5 mov     edx, 1
//   0x3E3DFA jmp     short loc_3E3DD1
//   0x3E3DFC align 20h
//   0x3E3E00 mov     rdi, [rbp+0]
//   0x3E3E04 mov     rsi, rbx
//   0x3E3E07 call    sub_410D30
//   0x3E3E0C jmp     short loc_3E3DF5
// ============================================================

void create_xrefs_from(/* signature unknown */)
{
    // see disassembly above
}

