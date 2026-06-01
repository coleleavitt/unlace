__m128i *__fastcall sub_39A270(__m128i *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  unsigned __int64 v5; // rbp
  __int64 v6; // rax

  v5 = *(_QWORD *)(a2 + 8);
  v6 = sub_15DE060(v5, *(_QWORD *)(v5 + 864), a3, a4, a5);
  *a1 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v6, (__m128i)v5);
  if ( v6 )
    ++*(_DWORD *)(v6 + 8);
  return a1;
}

