/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100005620
// Address: 0x0000000100005620

//----- (0000000100005620) ----------------------------------------------------
double __fastcall sub_100005620(
        __int64 a1,
        _QWORD **a2,
        int a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8)
{
  _QWORD *v9; // x26
  _OWORD *v10; // x22
  __int64 *v12; // x24
  __int64 v13; // x9
  unsigned __int64 v14; // x8
  __int64 v15; // x27
  unsigned int v16; // w10
  unsigned __int64 v17; // x1
  size_t v18; // x21
  size_t v19; // x21
  _QWORD *v20; // x9
  _QWORD *v21; // x8
  bool v22; // zf
  double result; // d0
  _QWORD v24[5]; // [xsp+8h] [xbp-B8h] BYREF
  __int128 v25; // [xsp+30h] [xbp-90h]
  __int128 v26; // [xsp+40h] [xbp-80h]
  __int128 v27; // [xsp+50h] [xbp-70h]
  __int64 v28; // [xsp+60h] [xbp-60h]

  if ( a3 )
  {
    v9 = *(_QWORD **)(a1 + 1856);
    v10 = (_OWORD *)(a1 + 1864);
    if ( v9 != (_QWORD *)(a1 + 1864) )
    {
      v12 = (__int64 *)(a1 + 1840);
      do
      {
        v13 = *v12;
        if ( *v12 )
        {
          v14 = v9[4];
          v15 = a1 + 1840;
          do
          {
            if ( *(_QWORD *)(v13 + 32) < v14 )
            {
              v16 = 1;
            }
            else
            {
              v15 = v13;
              v16 = 0;
            }
            v13 = *(_QWORD *)(v13 + 8LL * v16);
          }
          while ( v13 );
          if ( (__int64 *)v15 != v12 && v14 >= *(_QWORD *)(v15 + 32) )
          {
            if ( !a2 )
              goto LABEL_26;
            v17 = *(_QWORD *)(v15 + 40);
            if ( *(_QWORD *)(a1 + 1616) != v17 )
            {
              if ( !*(_QWORD *)(a1 + 1712) || !rangeset_t_find_range(a1 + 1704, v17) )
              {
LABEL_26:
                LODWORD(v24[1]) = 4;
                memset((char *)&v24[1] + 4, 0, 24);
                v25 = 0u;
                v26 = 0u;
                v27 = 0u;
                v24[0] = off_10009CB80;
                v28 = a1;
                sub_100005398(a1, (__int64)v24, (unsigned __int64 *)(v15 + 40), a4, a5, a6, a7, a8);
                v24[0] = off_10009CBD0;
                if ( *((_QWORD *)&v25 + 1) )
                {
                  *(_QWORD *)&v26 = 0;
                  qfree(*((void **)&v25 + 1));
                }
                goto LABEL_28;
              }
              v17 = *(_QWORD *)(v15 + 40);
            }
            v24[0] = v17;
            memset(&v24[1], 0, 24);
            v18 = *(_QWORD *)(v15 + 64);
            if ( v18 )
            {
              v24[1] = qalloc_or_throw(*(_QWORD *)(v15 + 64));
              v24[3] = v18;
              memcpy((void *)v24[1], *(const void **)(v15 + 56), v18);
              v24[2] = v18;
            }
            v24[4] = 0;
            v25 = 0u;
            v19 = *(_QWORD *)(v15 + 88);
            if ( v19 )
            {
              v24[4] = qalloc_or_throw(*(_QWORD *)(v15 + 88));
              *((_QWORD *)&v25 + 1) = v19;
              memcpy((void *)v24[4], *(const void **)(v15 + 80), v19);
              *(_QWORD *)&v25 = v19;
            }
            sub_1000058F0(a2, v24);
            if ( v24[4] )
            {
              *(_QWORD *)&v25 = 0;
              qfree((void *)v24[4]);
              v24[4] = 0;
              *((_QWORD *)&v25 + 1) = 0;
            }
            if ( v24[1] )
            {
              v24[2] = 0;
              qfree((void *)v24[1]);
            }
          }
        }
LABEL_28:
        v20 = (_QWORD *)v9[1];
        if ( v20 )
        {
          do
          {
            v21 = v20;
            v20 = (_QWORD *)*v20;
          }
          while ( v20 );
        }
        else
        {
          do
          {
            v21 = (_QWORD *)v9[2];
            v22 = *v21 == (_QWORD)v9;
            v9 = v21;
          }
          while ( !v22 );
        }
        v9 = v21;
      }
      while ( v21 != (_QWORD *)v10 );
    }
    sub_10000BC38(a1 + 1856, *(_QWORD **)(a1 + 1864));
    *(_QWORD *)(a1 + 1856) = v10;
    *v10 = 0u;
    return 0.0;
  }
  return result;
}
// 1000057DC: variable 'a4' is possibly undefined
// 1000057DC: variable 'a5' is possibly undefined
// 1000057DC: variable 'a6' is possibly undefined
// 1000057DC: variable 'a7' is possibly undefined
// 1000057DC: variable 'a8' is possibly undefined
// 10009CB80: using guessed type __int64 (__fastcall *off_10009CB80[8])();
// 10009CBD0: using guessed type __int64 (__fastcall *off_10009CBD0[8])();
