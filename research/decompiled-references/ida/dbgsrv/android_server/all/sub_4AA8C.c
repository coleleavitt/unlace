/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4AA8C
// Address: 0x000000000004AA8C

//----- (000000000004AA8C) ----------------------------------------------------
_QWORD *__fastcall sub_4AA8C(__int64 a1, __int64 a2, _QWORD *a3, __int64 a4)
{
  __int64 v6; // x22
  __int64 v8; // x8
  bool v9; // cc
  unsigned __int64 v10; // x8
  unsigned __int64 v11; // x10
  unsigned __int64 v12; // x11
  __int64 *v13; // x8
  __int64 v14; // x9
  __int64 v15; // x10
  signed __int64 v16; // x10
  __int64 v17; // x8
  __int64 v18; // x23
  signed __int64 v19; // x8
  signed __int64 v20; // x9
  __int64 v21; // x29
  unsigned __int64 v22; // x28
  __int64 v23; // x8
  __int64 v24; // x8

  if ( a2 != a1 )
  {
    v6 = a2;
    do
    {
      v8 = a4 - *a3;
      v9 = v8 < 73;
      v10 = 0x8E38E38E38E38E39LL * (v8 >> 3);
      if ( v9 )
      {
        v16 = 56 - v10;
        v17 = (unsigned __int128)((__int64)(56 - v10) * (__int128)(__int64)0xB6DB6DB6DB6DB6DBLL) >> 64;
        v13 = &a3[(v17 >> 4) + ((unsigned __int64)v17 >> 63)];
        v14 = *v13;
        v15 = 56 * (v16 / 56) - v16 + 55;
      }
      else
      {
        v11 = v10 - 1;
        v12 = (v10 - 1) / 0x38;
        v13 = &a3[v12];
        v14 = *v13;
        v15 = v11 - 56 * v12;
      }
      v18 = v14 + 72 * v15;
      v19 = 0x8E38E38E38E38E39LL * ((v18 + 72 - *v13) >> 3);
      v20 = 0x8E38E38E38E38E39LL * ((v6 - a1) >> 3);
      if ( v20 <= v19 )
        v21 = a1;
      else
        v21 = v6 - 72 * v19;
      if ( v20 <= v19 )
        v22 = 0x8E38E38E38E38E39LL * ((v6 - a1) >> 3);
      else
        v22 = v19;
      for ( ; v21 != v6; v18 -= 72 )
      {
        v6 -= 72;
        copy_debug_event(v18, v6);
      }
      if ( v22 )
      {
        v23 = 0x8E38E38E38E38E39LL * ((a4 - *a3) >> 3) - v22;
        if ( v23 < 1 )
        {
          v24 = 55 - v23;
          a3 += v24 / -56;
          a4 = *a3 + 72 * (56 * (v24 / 56) - v24) + 3960;
        }
        else
        {
          a3 += v23 / 0x38uLL;
          a4 = *a3 + 72 * (v23 % 0x38uLL);
        }
      }
      v6 = v21;
    }
    while ( v21 != a1 );
  }
  return a3;
}
