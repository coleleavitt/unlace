/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_C55D0
// Address: 0x00000000000C55D0

//----- (00000000000C55D0) ----------------------------------------------------
__int64 __fastcall sub_C55D0(__int64 a1, unsigned __int64 a2, unsigned __int64 a3, unsigned __int64 a4)
{
  unsigned __int64 *v5; // x8
  unsigned __int64 v6; // x9
  __int64 v7; // x9
  unsigned __int64 v8; // x11
  unsigned __int64 v9; // x12
  unsigned __int64 *v10; // x13
  unsigned __int64 v11; // x14
  unsigned __int64 *v12; // x13
  unsigned __int64 v13; // x10
  __int64 v14; // x13
  unsigned __int64 *v15; // x12
  __int64 v16; // x11
  unsigned __int64 v17; // x12

  if ( a2 == a3 )
    return 0;
  v5 = *(unsigned __int64 **)(a1 + 24);
  if ( !v5 || *v5 > a2 || (v6 = v5[1], v6 <= a2) )
  {
    v7 = *(_QWORD *)(a1 + 8);
    if ( 16 * v7 )
    {
      v8 = (16 * v7) >> 4;
      v5 = *(unsigned __int64 **)a1;
      do
      {
        v9 = v8 >> 1;
        v10 = &v5[2 * (v8 >> 1)];
        v11 = v10[1];
        v12 = v10 + 2;
        v8 += ~(v8 >> 1);
        if ( v11 <= a2 )
          v5 = v12;
        else
          v8 = v9;
      }
      while ( v8 );
    }
    else
    {
      v5 = *(unsigned __int64 **)a1;
    }
    if ( v5 == (unsigned __int64 *)(*(_QWORD *)a1 + 16 * v7) )
      return 0xFFFFFFFFLL;
    if ( *v5 > a2 )
      return 0xFFFFFFFFLL;
    if ( v5[1] <= a2 )
      return 0xFFFFFFFFLL;
    *(_QWORD *)(a1 + 24) = v5;
    v6 = v5[1];
  }
  v13 = a4 + a2;
  if ( v6 < a4 + a2 )
    return 4294967294LL;
  if ( a4 + a3 > a3 )
  {
    v14 = 16LL * *(_QWORD *)(a1 + 8);
    if ( !v14 )
      return 0;
    v15 = *(unsigned __int64 **)a1;
    v16 = *(_QWORD *)a1 + v14;
    while ( v15[1] <= a3 )
    {
      v14 -= 16;
      v15 += 2;
      if ( !v14 )
        return 0;
    }
    if ( *v15 <= a3 )
    {
      if ( v5 == v15 )
      {
        v17 = *v5;
        if ( (v6 == v13 || v17 == a2)
          && (a3 >= a2 || v17 == a2)
          && (a3 <= a2 || v6 == v13)
          && (v5 == (unsigned __int64 *)(v16 - 16) || v5[2] - a3 >= a4) )
        {
          return 0;
        }
      }
    }
    else if ( v5 == v15 || *v15 - a3 >= a4 )
    {
      return 0;
    }
  }
  return 4294967293LL;
}
