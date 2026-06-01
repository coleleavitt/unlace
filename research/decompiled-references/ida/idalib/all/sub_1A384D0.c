unsigned __int64 __fastcall sub_1A384D0(__int64 a1, __int64 a2, unsigned __int64 *a3)
{
  __int64 v3; // rsi
  __int64 v4; // rax
  unsigned __int64 v5; // r8
  __int64 v6; // rdx
  __int64 v7; // rsi
  __int64 v8; // rcx
  __m128i v9; // xmm0
  __int64 v11; // rdx
  bool v12; // zf
  __int64 v13; // rsi
  __int64 v14; // r10
  __int64 v15; // r9
  __int64 v16; // rcx
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rdi
  __int64 v20; // rax
  __m128i v21; // [rsp+0h] [rbp-18h] BYREF

  v3 = a2 - a1;
  v4 = v3 >> 4;
  if ( v3 <= 0 )
  {
LABEL_7:
    v21.m128i_i64[0] = a1;
    v9 = _mm_loadl_epi64(&v21);
    return _mm_unpacklo_epi64(v9, v9).m128i_u64[0];
  }
  else
  {
    v5 = *a3;
    while ( 1 )
    {
      while ( 1 )
      {
        v6 = v4 >> 1;
        v7 = 16 * (v4 >> 1);
        v8 = a1 + v7;
        if ( v5 <= *(_QWORD *)(a1 + v7 + 8) )
          break;
        a1 = v8 + 16;
        v4 = v4 - v6 - 1;
        if ( v4 <= 0 )
          goto LABEL_7;
      }
      if ( v5 >= *(_QWORD *)(a1 + v7 + 8) )
        break;
      v4 >>= 1;
      if ( v6 <= 0 )
        goto LABEL_7;
    }
    v11 = v7 >> 4;
    v12 = v7 == 0;
    v13 = a1;
    if ( !v12 )
    {
      do
      {
        while ( 1 )
        {
          v14 = v11 >> 1;
          v15 = v13 + 16 * (v11 >> 1);
          if ( v5 <= *(_QWORD *)(v15 + 8) )
            break;
          v13 = v15 + 16;
          v11 = v11 - v14 - 1;
          if ( v11 <= 0 )
            goto LABEL_11;
        }
        v11 >>= 1;
      }
      while ( v14 );
    }
LABEL_11:
    v16 = v8 + 16;
    v17 = a1 + 16 * v4 - v16;
    v18 = v17 >> 4;
    if ( v17 > 0 )
    {
      do
      {
        while ( 1 )
        {
          v19 = v18 >> 1;
          v20 = v16 + 16 * (v18 >> 1);
          if ( v5 < *(_QWORD *)(v20 + 8) )
            break;
          v16 = v20 + 16;
          v18 = v18 - v19 - 1;
          if ( v18 <= 0 )
            goto LABEL_14;
        }
        v18 >>= 1;
      }
      while ( v19 );
    }
LABEL_14:
    v21.m128i_i64[0] = v16;
    return _mm_loadh_ps((const double *)v21.m128i_i64).m128_u64[0];
  }
}
