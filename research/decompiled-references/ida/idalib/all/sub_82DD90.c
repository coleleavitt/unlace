void __fastcall sub_82DD90(__int64 a1)
{
  __int64 v1; // rbx
  __m128i v2; // xmm2
  const char *v3; // r13
  const char *v4; // rsi
  const char *v5; // rdi
  void *v6; // rdi
  __int64 v7; // r15
  __m128i v8; // xmm0
  void *v9; // rdi
  __m128i si128; // xmm3
  __m128i v11; // [rsp+0h] [rbp-58h] BYREF
  __m128i v12[4]; // [rsp+10h] [rbp-48h] BYREF

  v1 = a1;
  v2 = _mm_loadu_si128((const __m128i *)(a1 + 8));
  v3 = *(const char **)a1;
  *(_OWORD *)(a1 + 8) = 0;
  *(_QWORD *)a1 = 0;
  v12[0] = v2;
  while ( 1 )
  {
    if ( *(_QWORD *)(v1 - 16) )
    {
      v4 = *(const char **)(v1 - 24);
      v5 = haystack;
      if ( !v2.m128i_i64[0] )
        goto LABEL_3;
      goto LABEL_10;
    }
    if ( !v2.m128i_i64[0] )
      break;
    v4 = haystack;
LABEL_10:
    v5 = v3;
LABEL_3:
    if ( strcmp(v5, v4) >= 0 )
      break;
    v6 = *(void **)v1;
    v7 = *(_QWORD *)(v1 - 24);
    v8 = (__m128i)_mm_loadh_ps((const double *)(v1 - 8));
    *(_QWORD *)(v1 - 24) = 0;
    *(_OWORD *)(v1 - 16) = 0;
    if ( v6 )
    {
      *(_QWORD *)(v1 + 8) = 0;
      v11 = v8;
      qfree(v6);
      v8 = _mm_load_si128(&v11);
    }
    *(_QWORD *)v1 = v7;
    v1 -= 24;
    *(__m128i *)(v1 + 32) = v8;
  }
  v9 = *(void **)v1;
  if ( *(_QWORD *)v1 )
  {
    *(_QWORD *)(v1 + 8) = 0;
    qfree(v9);
  }
  si128 = _mm_load_si128(v12);
  *(_QWORD *)v1 = v3;
  *(__m128i *)(v1 + 8) = si128;
}
