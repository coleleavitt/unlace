/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4BC30
// Address: 0x000000000004BC30

//----- (000000000004BC30) ----------------------------------------------------
_QWORD *__fastcall sub_4BC30(_QWORD *a1, __int64 a2, __int64 *a3, __int64 a4, _QWORD *a5, __int64 a6)
{
  __int64 v7; // rbp
  __int64 *v8; // r14
  __int64 v9; // r15
  __int64 v10; // rax
  signed __int64 v11; // rbx
  __int64 v12; // rdi
  __int64 v13; // rsi
  __int64 v14; // rdx
  signed __int64 v15; // rbx
  unsigned __int64 v16; // rbp
  unsigned __int64 v17; // rdx
  __int64 v18; // rsi
  __int64 v19; // rdi

  if ( a4 != a2 )
  {
    v7 = a4;
    v8 = a3;
    v9 = 56 * (a3 - a1) - 0x71C71C71C71C71C7LL * ((a4 - *a3) >> 3) + (a2 - *a1) / -72;
    if ( v9 > 0 )
    {
      while ( 1 )
      {
        v10 = *v8;
        if ( *v8 == v7 )
        {
          v10 = *--v8;
          v7 = v10 + 4032;
        }
        v11 = 0x8E38E38E38E38E39LL * ((v7 - v10) >> 3);
        v12 = v7 - 72 * v9;
        if ( v11 <= v9 )
          v12 = v10;
        else
          v11 = v9;
        v13 = v7;
        v7 -= 72;
        a5 = sub_4C120(v12, v13, a5, a6);
        a6 = v14;
        v9 -= v11;
        v15 = v11 - 1;
        if ( !v15 )
          goto LABEL_11;
        v16 = 0x8E38E38E38E38E39LL * ((v7 - *v8) >> 3) - v15;
        if ( (__int64)v16 <= 0 )
        {
          v18 = (__int64)(55 - v16) / -56;
          v19 = v8[v18];
          v8 += v18;
          v7 = v19 + 72 * (56 * ((__int64)(55 - v16) / 56) - (55 - v16)) + 3960;
          if ( v9 <= 0 )
            return a5;
        }
        else
        {
          v17 = v16 / 0x38;
          v7 = v8[v16 / 0x38] + 72 * (v16 % 0x38);
          v8 += v17;
LABEL_11:
          if ( v9 <= 0 )
            return a5;
        }
      }
    }
  }
  return a5;
}
// 4BD07: variable 'v14' is possibly undefined
