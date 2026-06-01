__m128i *__fastcall sub_3CCF90(__m128i *a1, __int64 a2)
{
  __m128i *result; // rax
  unsigned __int64 v3; // rcx
  unsigned __int64 v4; // rdx

  result = a1;
  v3 = *(_QWORD *)(*(_QWORD *)(a2 + 48) + 8LL);
  v4 = *(_QWORD *)(v3 + 856);
  *a1 = _mm_unpacklo_epi64((__m128i)v4, (__m128i)v3);
  if ( v4 )
    ++*(_DWORD *)(v4 + 8);
  return result;
}

