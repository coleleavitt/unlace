__int64 __fastcall sub_DA3980(__int64 a1, const __m128i *a2)
{
  __int64 v3; // rax
  __int64 v4; // rsi
  __m128i v5; // xmm1

  v3 = a2->m128i_i64[1];
  if ( v3 )
    ++*(_DWORD *)((v3 & 0xFFFFFFFFFFFFFFFELL) + 4);
  v4 = *(_QWORD *)(a1 + 8);
  if ( v4 )
  {
    sub_DAAB00(**(_QWORD **)a1, v4 & 0xFFFFFFFFFFFFFFFELL);
    v3 = a2->m128i_i64[1];
  }
  v5 = (__m128i)(unsigned __int64)v3;
  *(__m128i *)a1 = _mm_unpacklo_epi64(_mm_loadl_epi64(a2), v5);
  return a1;
}

