__int64 __fastcall sub_7BA050(__int64 a1)
{
  unsigned __int64 v1; // rax
  unsigned __int64 v2; // rax
  const __m128i *v3; // rax
  __m128i v5; // [rsp+0h] [rbp-18h] BYREF

  v1 = *(_QWORD *)(a1 + 120);
  if ( !v1 )
  {
    sub_7B9840((unsigned __int64 *)(*(_QWORD *)(a1 + 96) + 88LL), *(_QWORD *)(a1 + 96));
    v1 = *(_QWORD *)(a1 + 120);
  }
  if ( v1 <= 7 )
    return 0;
  v2 = v1 & 0xFFFFFFFFFFFFFFF8LL;
  if ( (*(_BYTE *)(v2 + 72) & 1) != 0 )
  {
    sub_7B7DB0(a1);
    v2 = *(_QWORD *)(a1 + 120) & 0xFFFFFFFFFFFFFFF8LL;
  }
  v3 = *(const __m128i **)(v2 + 8);
  if ( !v3 )
    return 0;
  v5 = _mm_unpacklo_epi64(_mm_loadl_epi64(v3), (__m128i)(unsigned __int64)&v3->m128i_u64[1]);
  return sub_B1E2D0(&v5);
}

