/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_3E018
// Address: 0x000000000003E018

//----- (000000000003E018) ----------------------------------------------------
void __fastcall sub_3E018(_QWORD *a1, __int64 a2, int a3)
{
  _QWORD *v5; // x21
  __int64 v6; // x8
  __int64 v7; // x10
  unsigned __int64 v8; // x9
  __int64 v9; // x0
  unsigned __int64 v10; // x9
  __int64 v11; // x12
  __int64 *v12; // x8
  __int64 v13; // x10
  __int64 v14; // x0
  __int64 v15; // x0

  if ( a3 != 1 )
  {
    v10 = a1[4];
    if ( !v10 )
    {
      sub_477B4((__int64)a1);
      v10 = a1[4];
    }
    v11 = a1[1];
    v12 = (__int64 *)(v11 + 8 * (v10 / 0x38));
    v13 = *v12;
    if ( a1[2] == v11 )
    {
      v14 = 0;
      if ( v13 )
        goto LABEL_12;
    }
    else
    {
      v14 = v13 + 72 * (v10 % 0x38);
      if ( v14 != v13 )
      {
LABEL_12:
        *(_QWORD *)(v14 - 72) = 0xFFFFFFFFLL;
        v15 = v14 - 72;
        *(_QWORD *)(v15 + 8) = -1;
        *(_BYTE *)(v15 + 16) = 0;
        *(_DWORD *)(v15 + 20) = 0;
        copy_debug_event(v15, a2);
        v5 = a1 + 5;
        --a1[4];
        goto LABEL_13;
      }
    }
    v14 = *(v12 - 1) + 4032;
    goto LABEL_12;
  }
  v5 = a1 + 5;
  v6 = a1[1];
  v7 = 56 * ((a1[2] - v6) >> 3) - 1;
  if ( a1[2] == v6 )
    v7 = 0;
  v8 = a1[5] + a1[4];
  if ( v7 == v8 )
  {
    sub_4825C((__int64)a1);
    v6 = a1[1];
    v8 = a1[4] + a1[5];
  }
  v9 = *(_QWORD *)(v6 + 8 * (v8 / 0x38)) + 72 * (v8 % 0x38);
  *(_QWORD *)v9 = 0xFFFFFFFFLL;
  *(_QWORD *)(v9 + 8) = -1;
  *(_BYTE *)(v9 + 16) = 0;
  *(_DWORD *)(v9 + 20) = 0;
  copy_debug_event(v9, a2);
LABEL_13:
  ++*v5;
}
