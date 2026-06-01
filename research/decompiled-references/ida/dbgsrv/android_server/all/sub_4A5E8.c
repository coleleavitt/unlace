/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4A5E8
// Address: 0x000000000004A5E8

//----- (000000000004A5E8) ----------------------------------------------------
_QWORD *__fastcall sub_4A5E8(_QWORD *a1, __int64 a2, __int64 *a3, __int64 a4, _QWORD *a5, __int64 a6)
{
  __int64 v6; // x21
  __int64 *v7; // x19
  __int64 v8; // x8
  __int64 v9; // t1
  signed __int64 v10; // x9
  __int64 v11; // x28
  __int64 v12; // x0
  unsigned __int64 v13; // x29
  __int64 v14; // x1
  unsigned __int64 v15; // x8
  signed __int64 v16; // x8

  if ( a4 != a2 )
  {
    v6 = 56 * (a3 - a1) - 0x71C71C71C71C71C7LL * ((a4 - *a3) >> 3) + (a2 - *a1) / -72;
    v7 = a3;
    if ( v6 >= 1 )
    {
      do
      {
        while ( 1 )
        {
          while ( 1 )
          {
            v8 = *v7;
            if ( *v7 == a4 )
            {
              v9 = *--v7;
              v8 = v9;
              a4 = v9 + 4032;
            }
            v10 = 0x8E38E38E38E38E39LL * ((a4 - v8) >> 3);
            v11 = a4 - 72;
            v12 = v10 <= v6 ? v8 : a4 - 72 * v6;
            v13 = v10 <= v6 ? 0x8E38E38E38E38E39LL * ((a4 - v8) >> 3) : v6;
            a5 = sub_4AA8C(v12, a4, a5, a6);
            a6 = v14;
            v6 -= v13;
            if ( v13 != 1 )
              break;
            a4 = v11;
            if ( v6 <= 0 )
              return a5;
          }
          v15 = 0x8E38E38E38E38E39LL * ((v11 - *v7) >> 3) - (v13 - 1);
          if ( (__int64)v15 < 1 )
            break;
          v7 += v15 / 0x38;
          a4 = *v7 + 72 * (v15 % 0x38);
          if ( v6 <= 0 )
            return a5;
        }
        v16 = 55 - v15;
        v7 += v16 / -56;
        a4 = *v7 + 72 * (56 * (v16 / 56) - v16) + 3960;
      }
      while ( v6 > 0 );
    }
  }
  return a5;
}
// 4A6F8: variable 'v14' is possibly undefined
