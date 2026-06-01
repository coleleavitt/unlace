/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10000DFCC
// Address: 0x000000010000DFCC

//----- (000000010000DFCC) ----------------------------------------------------
_QWORD *__fastcall sub_10000DFCC(_QWORD *a1, __int64 a2, __int64 a3)
{
  __int64 v5; // x23
  __int64 v6; // x22
  __int64 v7; // x8
  _QWORD *v8; // x9
  _QWORD *v9; // x21
  __int64 v10; // x8
  __int64 v11; // x8
  unsigned __int64 v12; // x11
  unsigned __int64 v13; // x12
  __int64 v14; // x25
  __int128 v15; // q0
  void *v16; // x0
  __int64 v17; // x25
  __int128 v18; // q0
  void *v19; // x0
  __int128 v21; // [xsp+0h] [xbp-50h]
  __int128 v22; // [xsp+0h] [xbp-50h]

  v5 = 0;
  v6 = (a3 - 2) / 2;
  do
  {
    v8 = &a1[10 * v5];
    v9 = v8 + 10;
    v10 = 2 * v5;
    v5 = (2 * v5) | 1;
    v11 = v10 + 2;
    if ( v11 < a3 )
    {
      v12 = v8[20];
      v13 = v8[10];
      if ( v13 <= v12 && (v13 < v12 || v8[11] < v8[21]) )
      {
        v9 = v8 + 20;
        v5 = v11;
      }
    }
    *(_OWORD *)a1 = *(_OWORD *)v9;
    v14 = v9[2];
    v15 = *(_OWORD *)(v9 + 3);
    v9[2] = 0;
    v9[3] = 0;
    v9[4] = 0;
    v16 = (void *)a1[2];
    if ( v16 )
    {
      a1[3] = 0;
      v21 = v15;
      qfree(v16);
      v15 = v21;
    }
    a1[2] = v14;
    *(_OWORD *)(a1 + 3) = v15;
    v17 = v9[5];
    v18 = *((_OWORD *)v9 + 3);
    v9[5] = 0;
    v9[6] = 0;
    v9[7] = 0;
    v19 = (void *)a1[5];
    if ( v19 )
    {
      a1[6] = 0;
      v22 = v18;
      qfree(v19);
      v18 = v22;
    }
    a1[5] = v17;
    *((_OWORD *)a1 + 3) = v18;
    v7 = v9[8];
    *((_WORD *)a1 + 36) = *((_WORD *)v9 + 36);
    a1[8] = v7;
    a1 = v9;
  }
  while ( v5 <= v6 );
  return v9;
}
