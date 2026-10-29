__int64 __fastcall sub_84F940(__m128i *a1, unsigned int *a2, __int64 *a3, __int64 a4, double a5)
{
  __int64 v7; // r12
  __int64 v8; // r12
  __int64 *v9; // rbp
  __m128i v10; // kr00_16
  bool v11; // zf
  unsigned int v12; // r13d
  __int64 *v13; // rbx
  unsigned __int64 v14; // r14
  __int64 v15; // rsi
  __int64 v17; // [rsp+10h] [rbp-58h] BYREF
  __int64 *v18; // [rsp+18h] [rbp-50h]
  __m128i v19[4]; // [rsp+20h] [rbp-48h] BYREF

  v7 = a1[1].m128i_i64[0];
  sub_847B90(a1->m128i_i64, a4, a3);
  v17 = v7;
  v18 = nullptr;
  sub_84E6E0(v19, a1, a4, a3, &v17, 0);
  v8 = v17;
  v9 = v18;
  if ( v19[0].m128i_i64[0] )
  {
    sub_84AB10(a1->m128i_i64, a2, v19, a5);
    v10 = v19[0];
    if ( v19[0].m128i_i64[0] )
    {
      v11 = (*(_DWORD *)(v19[0].m128i_i64[0] + 8))-- == 1;
      if ( v11 )
        sub_15D7BC0(v10.m128i_i64[1], v10.m128i_i64[0]);
    }
    v12 = 1;
  }
  else
  {
    v12 = 0;
  }
  if ( v9 )
  {
    v13 = v9;
    v14 = (unsigned __int64)&v9[*((unsigned int *)v9 - 1)];
    if ( (unsigned __int64)v9 < v14 )
    {
      do
      {
        while ( 1 )
        {
          v15 = *v13;
          if ( *v13 )
          {
            v11 = (*(_DWORD *)(v15 + 8))-- == 1;
            if ( v11 )
              break;
          }
          if ( (unsigned __int64)++v13 >= v14 )
            goto LABEL_13;
        }
        ++v13;
        sub_15D7BC0(v8, v15);
      }
      while ( (unsigned __int64)v13 < v14 );
    }
LABEL_13:
    sub_186B220(v9 - 1);
  }
  return v12;
}

