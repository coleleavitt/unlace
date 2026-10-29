/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4A7BC
// Address: 0x000000000004A7BC

//----- (000000000004A7BC) ----------------------------------------------------
_QWORD *__fastcall sub_4A7BC(_QWORD *a1, __int64 a2, _QWORD *a3, __int64 a4, _QWORD *a5, __int64 a6)
{
  __int64 v8; // x26
  __int64 v9; // x23
  signed __int64 v10; // x10
  __int64 v11; // x28
  signed __int64 v12; // x9
  __int64 v13; // x8
  signed __int64 v14; // x10
  __int64 v15; // x8
  __int64 v16; // x22
  unsigned __int64 v17; // x20
  __int64 v18; // x24
  __int64 v19; // x8
  __int64 v20; // x8
  __int64 v21; // x8
  __int64 v22; // x8
  __int64 v24; // [xsp+8h] [xbp-78h]
  _QWORD *v25; // [xsp+10h] [xbp-70h]
  signed __int64 v26; // [xsp+18h] [xbp-68h]

  if ( a4 != a2 )
  {
    v8 = 56 * (a3 - a1) - 0x71C71C71C71C71C7LL * ((a4 - *a3) >> 3) + (a2 - *a1) / -72;
    v9 = a2;
    if ( v8 >= 1 )
    {
      do
      {
        while ( 1 )
        {
          while ( 1 )
          {
            v24 = v9;
            v25 = a1;
            v10 = 0x8E38E38E38E38E39LL * ((*a1 + 4032LL - v9) >> 3);
            if ( v10 <= v8 )
              v11 = *a1 + 4032LL;
            else
              v11 = v9 + 72 * v8;
            if ( v10 > v8 )
              v10 = v8;
            v26 = v10;
            if ( v11 != v9 )
            {
              do
              {
                v12 = 0x8E38E38E38E38E39LL * ((v11 - v9) >> 3);
                v13 = *a5 + 4032LL - a6;
                v14 = 0x8E38E38E38E38E39LL * (v13 >> 3);
                v15 = v9 + v13;
                if ( v12 <= v14 )
                  v16 = v11;
                else
                  v16 = v15;
                if ( v12 <= v14 )
                  v17 = 0x8E38E38E38E38E39LL * ((v11 - v9) >> 3);
                else
                  v17 = v14;
                if ( v9 != v16 )
                {
                  v18 = a6;
                  do
                  {
                    copy_debug_event(v18, v9);
                    v9 += 72;
                    v18 += 72;
                  }
                  while ( v16 != v9 );
                }
                if ( v17 )
                {
                  v19 = v17 - 0x71C71C71C71C71C7LL * ((a6 - *a5) >> 3);
                  if ( v19 < 1 )
                  {
                    v20 = 55 - v19;
                    a5 += v20 / -56;
                    a6 = *a5 + 72 * (56 * (v20 / 56) - v20) + 3960;
                  }
                  else
                  {
                    a5 += v19 / 0x38uLL;
                    a6 = *a5 + 72 * (v19 % 0x38uLL);
                  }
                }
                v9 = v16;
              }
              while ( v16 != v11 );
            }
            v8 -= v26;
            if ( v26 )
              break;
            v9 = v24;
            a1 = v25;
            if ( v8 <= 0 )
              return a5;
          }
          v21 = v26 - 0x71C71C71C71C71C7LL * ((v24 - *v25) >> 3);
          if ( v21 < 1 )
            break;
          a1 = &v25[v21 / 0x38uLL];
          v9 = *a1 + 72 * (v21 % 0x38uLL);
          if ( v8 <= 0 )
            return a5;
        }
        v22 = 55 - v21;
        a1 = &v25[v22 / -56];
        v9 = *a1 + 72 * (56 * (v22 / 56) - v22) + 3960;
      }
      while ( v8 > 0 );
    }
  }
  return a5;
}
