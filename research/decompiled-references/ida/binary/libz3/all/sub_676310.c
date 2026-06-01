__m128i *__fastcall sub_676310(__m128i *a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rdx
  __m128i *result; // rax
  unsigned __int64 v6; // rcx

  v4 = *(_QWORD *)(a2 + 8);
  result = a1;
  if ( *(_QWORD *)(v4 + 840) == a3 )
  {
    v6 = *(_QWORD *)(v4 + 864);
    *a1 = _mm_unpacklo_epi64((__m128i)v6, (__m128i)(unsigned __int64)v4);
    if ( v6 )
      ++*(_DWORD *)(v6 + 8);
  }
  else
  {
    a1->m128i_i64[0] = 0;
    a1->m128i_i64[1] = v4;
  }
  return result;
}

