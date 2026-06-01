__int64 __fastcall sub_22AB890(__int64 a1, __int64 a2)
{
  __int64 v2; // r13
  __int64 v3; // rbx
  __m128i v4; // xmm0
  __int64 v6; // r14
  __int64 i; // rbp
  __m128i v8[3]; // [rsp+0h] [rbp-38h] BYREF

  v2 = a1 + 8;
  v3 = *(_QWORD *)(a1 + 16);
  if ( v3 )
  {
    while ( 1 )
    {
      while ( sub_2234B00(v3 + 32, a2) )
      {
        v3 = *(_QWORD *)(v3 + 24);
        if ( !v3 )
          goto LABEL_7;
      }
      if ( !sub_2234B00(a2, v3 + 32) )
        break;
      v2 = v3;
      v3 = *(_QWORD *)(v3 + 16);
      if ( !v3 )
        goto LABEL_7;
    }
    v6 = *(_QWORD *)(v3 + 24);
    for ( i = *(_QWORD *)(v3 + 16); v6; v6 = *(_QWORD *)(v6 + 24) )
    {
      while ( sub_2234B00(a2, v6 + 32) )
      {
        v2 = v6;
        v6 = *(_QWORD *)(v6 + 16);
        if ( !v6 )
          goto LABEL_14;
      }
    }
LABEL_14:
    while ( i )
    {
      while ( !sub_2234B00(i + 32, a2) )
      {
        i = *(_QWORD *)(i + 16);
        if ( !i )
          goto LABEL_17;
      }
      i = *(_QWORD *)(i + 24);
    }
LABEL_17:
    v8[0].m128i_i64[0] = v2;
    v8[0] = (__m128i)_mm_loadh_ps((const double *)v8[0].m128i_i64);
  }
  else
  {
LABEL_7:
    v8[0].m128i_i64[0] = v2;
    v4 = _mm_loadl_epi64(v8);
    v8[0] = _mm_unpacklo_epi64(v4, v4);
  }
  return v8[0].m128i_i64[0];
}
