void __fastcall sub_2277050(__int64 a1, _QWORD *a2)
{
  _BYTE *v2; // rdi
  __int64 v3; // rdx
  __int64 v4; // rdx
  __int64 v5; // [rsp+8h] [rbp-40h] BYREF
  __m128i src; // [rsp+10h] [rbp-38h] BYREF
  _QWORD v7[5]; // [rsp+20h] [rbp-28h] BYREF

  sub_226F7A0(&src, **(_QWORD **)(a1 + 672));
  v2 = (_BYTE *)*a2;
  if ( (_QWORD *)src.m128i_i64[0] == v7 )
  {
    v4 = src.m128i_i64[1];
    if ( src.m128i_i64[1] )
    {
      if ( src.m128i_i64[1] == 1 )
        *v2 = v7[0];
      else
        memcpy(v2, (const void *)src.m128i_i64[0], src.m128i_u64[1]);
      v4 = src.m128i_i64[1];
      v2 = (_BYTE *)*a2;
    }
    a2[1] = v4;
    v2[v4] = 0;
    v2 = (_BYTE *)src.m128i_i64[0];
  }
  else
  {
    if ( v2 == (_BYTE *)(a2 + 2) )
    {
      v5 = v7[0];
      *a2 = src.m128i_i64[0];
      *(__m128 *)(a2 + 1) = _mm_loadh_ps((const double *)&v5);
    }
    else
    {
      v5 = v7[0];
      v3 = a2[2];
      *a2 = src.m128i_i64[0];
      *(__m128 *)(a2 + 1) = _mm_loadh_ps((const double *)&v5);
      if ( v2 )
      {
        src.m128i_i64[0] = (__int64)v2;
        v7[0] = v3;
        goto LABEL_5;
      }
    }
    v2 = v7;
    src.m128i_i64[0] = (__int64)v7;
  }
LABEL_5:
  src.m128i_i64[1] = 0;
  *v2 = 0;
  if ( (_QWORD *)src.m128i_i64[0] != v7 )
    operator delete((void *)src.m128i_i64[0]);
}
