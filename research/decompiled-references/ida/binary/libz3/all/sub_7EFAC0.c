void __fastcall sub_7EFAC0(__int64 a1)
{
  __int64 v1; // rsi
  __m128i *v2; // rdx
  __m128i *v3; // rax
  __m128i *v4; // rcx
  __int64 v5; // rdx
  __int64 *v6; // rax

  v1 = *(_QWORD *)(a1 + 16);
  v2 = *(__m128i **)(v1 + 48);
  if ( v2 == (__m128i *)v2->m128i_i64[0] )
  {
    *(_QWORD *)(v1 + 48) = 0;
    *(__m128i *)*(_QWORD *)(a1 + 24) = _mm_unpacklo_epi64(
                                         (__m128i)*(unsigned __int64 *)(a1 + 24),
                                         (__m128i)*(unsigned __int64 *)(a1 + 24));
  }
  else
  {
    v3 = *(__m128i **)(a1 + 24);
    v4 = v3;
    if ( v3 == v2 )
    {
      *(_QWORD *)(v1 + 48) = v3->m128i_i64[0];
      v4 = *(__m128i **)(a1 + 24);
    }
    v5 = v3->m128i_i64[0];
    v6 = (__int64 *)v3->m128i_i64[1];
    *v6 = v5;
    *(_QWORD *)(v5 + 8) = v6;
    *v4 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v4, (__m128i)(unsigned __int64)v4);
  }
}

