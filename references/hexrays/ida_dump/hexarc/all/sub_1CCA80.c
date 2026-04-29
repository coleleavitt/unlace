unsigned __int64 __fastcall sub_1CCA80(__int64 a1, __int64 a2, unsigned __int64 *a3)
{
  __int64 v4; // r15
  const __m128i *v5; // r13
  const __m128i *i; // r15
  __int64 v8; // rax
  __m128i v9; // xmm0
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // rsi
  unsigned __int64 v12; // rax
  __m128i v14; // [rsp+0h] [rbp-68h] BYREF
  __int64 v15; // [rsp+10h] [rbp-58h] BYREF
  __int128 v16; // [rsp+18h] [rbp-50h]
  unsigned __int64 v17; // [rsp+28h] [rbp-40h]

  v4 = *(_QWORD *)(a1 + 8);
  v5 = *(const __m128i **)a1;
  v17 = __readfsqword(0x28u);
  v16 = 0;
  v15 = 0;
  for ( i = &v5[v4]; i != v5; ++v5 )
  {
    v9 = _mm_loadu_si128(v5);
    v10 = a3[1];
    v14 = v9;
    if ( v9.m128i_i64[1] )
    {
      if ( v10 )
      {
        v11 = *a3;
        if ( v14.m128i_i64[0] + v9.m128i_i64[1] - 1 >= *a3 )
        {
          v12 = v11 + v10;
          if ( v12 - 1 >= v14.m128i_i64[0] )
          {
            if ( !__CFADD__(a2 + v14.m128i_i64[0], v9.m128i_i64[1]) && v12 > a2 + v14.m128i_i64[0] + v9.m128i_i64[1] )
              v12 = a2 + v14.m128i_i64[0] + v9.m128i_i64[1];
            if ( a2 + v14.m128i_i64[0] >= v11 )
              v11 = a2 + v14.m128i_i64[0];
            if ( v11 >= v12 )
            {
              v14.m128i_i64[0] += a2;
              v8 = 0;
            }
            else
            {
              v14.m128i_i64[0] = v11;
              v8 = v12 - v11;
            }
            v14.m128i_i64[1] = v8;
            sub_30F830(&v15, &v14);
          }
        }
      }
    }
  }
  sub_310850(a1, a3);
  sub_30F930(a1, &v15);
  if ( v15 )
  {
    *(_QWORD *)&v16 = 0;
    qfree(v15);
  }
  return v17 - __readfsqword(0x28u);
}
