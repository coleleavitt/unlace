__m128i *__fastcall sub_40DA80(
        __m128i *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        int a6,
        double a7,
        __m128 a8)
{
  int v8; // eax
  __m128 v9; // xmm0
  __int64 v10; // rsi
  unsigned __int64 v12; // rdx
  unsigned __int64 v13; // rax
  __m128i v14; // [rsp+0h] [rbp-18h] BYREF

  v8 = *(_DWORD *)(a2 + 360);
  if ( v8 == -1 )
  {
    sub_40D7C0(a1, a2, a3, a4, a5, a6);
    return a1;
  }
  else
  {
    if ( v8 == 1 )
    {
      sub_400920(&v14, a2, a7);
      v9 = (__m128)_mm_load_si128(&v14);
      *a1 = (__m128i)v9;
      v10 = _mm_movehl_ps(a8, v9).m128_u64[0];
      if ( v9.m128_u64[0] )
        ++*(_DWORD *)(v9.m128_u64[0] + 8);
      sub_3FCDD0(v9.m128_i64[0], v10);
      return a1;
    }
    v12 = *(_QWORD *)(a2 + 152);
    v13 = *(_QWORD *)(v12 + 856);
    *a1 = _mm_unpacklo_epi64((__m128i)v13, (__m128i)v12);
    if ( !v13 )
      return a1;
    ++*(_DWORD *)(v13 + 8);
    return a1;
  }
}

