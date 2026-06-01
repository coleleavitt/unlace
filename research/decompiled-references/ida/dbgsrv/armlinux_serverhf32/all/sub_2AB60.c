/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_2AB60
// Address: 0x0002AB60

//----- (0002AB60) --------------------------------------------------------
void __fastcall sub_2AB60(int a1, int a2, int *a3)
{
  __int64 v3; // r6
  __int64 v5; // r2
  int v7; // r0
  int v8; // r1
  int v9; // r2
  int v10; // r3
  _DWORD *v11; // r4
  _DWORD *v12; // r5
  int v13; // r1
  int v14; // r2
  int v15; // r3

  v3 = *(_QWORD *)a3;
  if ( *(__int64 *)a3 >= 1 && *((_QWORD *)a3 + 2) )
  {
    v5 = *(_QWORD *)a2;
    if ( *(__int64 *)a2 >= 1 && *(_QWORD *)(a2 + 16) )
    {
      if ( v3 == v5 )
        return;
      sub_23388(
        (int)"The dynamic section string table from section header (%08llX) differs from DT_STRTAB's one (%08llX), using the latter",
        *(_DWORD *)(a2 + 20) | *(_DWORD *)(a2 + 16),
        v5,
        SHIDWORD(v5));
    }
    v7 = *a3;
    v8 = a3[1];
    v9 = a3[2];
    v10 = a3[3];
    v11 = a3 + 4;
    *(_DWORD *)a2 = v7;
    *(_DWORD *)(a2 + 4) = v8;
    *(_DWORD *)(a2 + 8) = v9;
    *(_DWORD *)(a2 + 12) = v10;
    v12 = (_DWORD *)(a2 + 16);
    v13 = v11[1];
    v14 = v11[2];
    v15 = v11[3];
    *v12 = *v11;
    v12[1] = v13;
    v12[2] = v14;
    v12[3] = v15;
  }
}
