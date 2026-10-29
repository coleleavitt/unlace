/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100071260
// Address: 0x0000000100071260

//----- (0000000100071260) ----------------------------------------------------
__int64 __fastcall sub_100071260(__int64 a1, void *__dst, size_t __n)
{
  signed __int64 v5; // x1
  size_t v6; // x19
  __int64 v7; // x9
  unsigned __int64 v9; // x8
  __int64 v10; // x10
  unsigned __int64 v11; // x9
  unsigned __int64 v12; // x23
  unsigned __int64 v13; // x24
  int v14; // w26
  unsigned __int64 v15; // x28
  __int64 v16; // x8
  __int64 v17; // x1
  unsigned __int64 v18; // x8
  int v19; // w8
  const char *v20; // x0
  int v21; // w1

  if ( (__n & 0x8000000000000000LL) == 0 )
  {
    v5 = *(_QWORD *)(a1 + 24);
    if ( v5 < 0 )
      return 0;
    v6 = __n;
    v7 = v5 + __n;
    if ( (__int64)(v5 + __n) < v5 )
      return 0;
    v9 = *(_QWORD *)(a1 + 48);
    if ( v9 )
    {
      v10 = *(_QWORD *)(a1 + 16);
      if ( v7 > v10 )
      {
        v6 = v10 - v5;
        if ( v10 <= v5 )
          return 0;
        v7 = *(_QWORD *)(a1 + 16);
      }
      v11 = v9 + v7 - 1;
      v12 = v5 / v9;
      v13 = v11 / v9;
      if ( (int)(v5 / v9) <= (int)(v11 / v9) )
      {
        v14 = -1;
        do
        {
          if ( (_DWORD)v12 == (_DWORD)v13
            || ((*(unsigned __int8 *)(*(_QWORD *)(a1 + 32) + ((unsigned __int64)(int)v12 >> 3)) >> (v12 & 7)) & 1) != 0 )
          {
            if ( v14 != -1 )
            {
              v15 = v14;
              v16 = *(_QWORD *)(a1 + 48);
              v17 = v16 * v14;
              v18 = v16 * (int)v12;
              if ( v18 >= *(_QWORD *)(a1 + 16) )
                v18 = *(_QWORD *)(a1 + 16);
              v19 = v18 - v17;
              if ( v19 < 0
                || (***(__int64 (__fastcall ****)(_QWORD, __int64, __int64, _QWORD))(a1 + 8))(
                     *(_QWORD *)(a1 + 8),
                     v17,
                     *(_QWORD *)(a1 + 40) + v17,
                     v19 & 0x7FFFFFFF) != (v19 & 0x7FFFFFFF) )
              {
                return -1;
              }
              if ( v14 < (int)v12 )
              {
                do
                {
                  *(_BYTE *)(*(_QWORD *)(a1 + 32) + (v15 >> 3)) |= 1 << (v15 & 7);
                  ++v15;
                }
                while ( (__int64)v15 < (int)v12 );
              }
            }
            v14 = -1;
          }
          else if ( v14 == -1 )
          {
            v14 = v12;
          }
          LODWORD(v12) = v12 + 1;
        }
        while ( (int)v12 <= (int)v13 );
        v5 = *(_QWORD *)(a1 + 24);
      }
      memcpy(__dst, (const void *)(*(_QWORD *)(a1 + 40) + v5), v6);
    }
    else
    {
      v6 = (***(__int64 (__fastcall ****)(_QWORD))(a1 + 8))(*(_QWORD *)(a1 + 8));
      if ( (v6 & 0x8000000000000000LL) != 0 )
        return v6;
    }
    *(_QWORD *)(a1 + 24) += v6;
    return v6;
  }
  if ( under_debugger == 1 )
    __break(1u);
  interr(1225);
  return open_linput(v20, v21);
}
// 100071481: variable 'v20' is possibly undefined
// 100071481: variable 'v21' is possibly undefined
// 1000A590D: using guessed type char under_debugger;
