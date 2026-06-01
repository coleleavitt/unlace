unsigned __int64 __fastcall sub_10BCAF0(__int64 a1, int *a2)
{
  __int64 v2; // rax
  __int64 v3; // rdi
  int v4; // ecx
  __int64 v5; // rdx
  __m128i v6; // xmm0
  __int64 i; // rsi
  __m128i v9; // [rsp+0h] [rbp-18h] BYREF

  v2 = *(_QWORD *)(a1 + 16);
  v3 = a1 + 8;
  if ( v2 )
  {
    v4 = *a2;
    while ( 1 )
    {
      while ( v4 > *(_DWORD *)(v2 + 32) )
      {
        v2 = *(_QWORD *)(v2 + 24);
        if ( !v2 )
          goto LABEL_7;
      }
      v5 = *(_QWORD *)(v2 + 16);
      if ( v4 >= *(_DWORD *)(v2 + 32) )
        break;
      v3 = v2;
      v2 = *(_QWORD *)(v2 + 16);
      if ( !v5 )
        goto LABEL_7;
    }
    for ( i = *(_QWORD *)(v2 + 24); i; i = *(_QWORD *)(i + 24) )
    {
      while ( v4 < *(_DWORD *)(i + 32) )
      {
        v3 = i;
        i = *(_QWORD *)(i + 16);
        if ( !i )
          goto LABEL_13;
      }
    }
LABEL_13:
    while ( v5 )
    {
      while ( v4 <= *(_DWORD *)(v5 + 32) )
      {
        v5 = *(_QWORD *)(v5 + 16);
        if ( !v5 )
          goto LABEL_16;
      }
      v5 = *(_QWORD *)(v5 + 24);
    }
LABEL_16:
    v9.m128i_i64[0] = v3;
    return _mm_loadh_ps((const double *)v9.m128i_i64).m128_u64[0];
  }
  else
  {
LABEL_7:
    v9.m128i_i64[0] = v3;
    v6 = _mm_loadl_epi64(&v9);
    return _mm_unpacklo_epi64(v6, v6).m128i_u64[0];
  }
}

