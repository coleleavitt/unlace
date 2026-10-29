/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_442338
// Address: 0x0000000000442338

//----- (0000000000442338) ----------------------------------------------------
__int64 __fastcall sub_442338(__int64 a1, __int64 a2)
{
  _QWORD *v4; // x20
  __int64 v5; // x3
  __int64 v6; // x4
  int v7; // w2
  _QWORD *v8; // x0
  _QWORD *v9; // x1
  _QWORD *v10; // x19
  void *v12; // x0

  v4 = sub_49E050(0x40u);
  v5 = *(_QWORD *)(a2 + 16);
  v6 = *(_QWORD *)(a2 + 8);
  v4[4] = *(_QWORD *)a2;
  v7 = *(_DWORD *)(a2 + 24);
  *(_QWORD *)a2 = 0;
  *(_QWORD *)(a2 + 8) = 0;
  *(_QWORD *)(a2 + 16) = 0;
  v4[5] = v6;
  v4[6] = v5;
  *((_DWORD *)v4 + 14) = v7;
  v8 = sub_442198(a1, (__int64)(v4 + 4));
  v10 = v8;
  if ( v9 )
    return sub_4422A8(a1, (__int64)v8, v9, (__int64)v4);
  v12 = (void *)v4[4];
  if ( v12 )
  {
    v4[5] = 0;
    j__free(v12);
  }
  j__free_0(v4);
  return (__int64)v10;
}
// 442384: variable 'v9' is possibly undefined
