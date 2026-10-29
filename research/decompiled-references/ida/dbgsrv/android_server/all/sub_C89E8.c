/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_C89E8
// Address: 0x00000000000C89E8

//----- (00000000000C89E8) ----------------------------------------------------
__int64 __fastcall sub_C89E8(__int64 a1)
{
  unsigned int v2; // w19
  __int64 v3; // x20
  __int64 v4; // x10
  unsigned int v5; // w9
  __int64 v6; // x8
  unsigned __int16 *v7; // x8
  int v8; // w9
  int v9; // w10
  int v10; // w9

  v2 = sub_C9194(a1);
  if ( !v2 )
  {
    v3 = *(_QWORD *)(a1 + 56);
    v4 = *(_QWORD *)(v3 + 120);
    v5 = *(_DWORD *)(v3 + 132) - 1;
    *(_QWORD *)(v3 + 104) = 2LL * *(unsigned int *)(v3 + 80);
    *(_WORD *)(v4 + 2LL * v5) = 0;
    memset(*(void **)(v3 + 120), 0, 2LL * (unsigned int)(*(_DWORD *)(v3 + 132) - 1));
    v6 = *(int *)(v3 + 196);
    *(_DWORD *)(v3 + 160) = 2;
    v7 = (unsigned __int16 *)&qword_1604B0[2 * v6];
    v8 = v7[3];
    v9 = v7[1];
    *(_QWORD *)(v3 + 152) = 0;
    *(_DWORD *)(v3 + 5932) = 0;
    *(_DWORD *)(v3 + 188) = v8;
    *(_DWORD *)(v3 + 192) = v9;
    v10 = *v7;
    LODWORD(v7) = v7[2];
    *(_QWORD *)(v3 + 168) = 0;
    *(_QWORD *)(v3 + 180) = 0x200000000LL;
    *(_DWORD *)(v3 + 128) = 0;
    *(_DWORD *)(v3 + 204) = v10;
    *(_DWORD *)(v3 + 208) = (_DWORD)v7;
  }
  return v2;
}
// 1604B0: using guessed type __int64 qword_1604B0[];
