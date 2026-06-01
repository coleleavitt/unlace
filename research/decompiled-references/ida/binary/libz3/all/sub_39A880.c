__m128i *__fastcall sub_39A880(__m128i *a1, __int64 a2)
{
  unsigned __int64 v2; // rbp
  __int64 v3; // rax

  v2 = *(_QWORD *)(a2 + 8);
  v3 = sub_1674700(a2 + 16, *(unsigned int *)(a2 + 40));
  *a1 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v3, (__m128i)v2);
  if ( v3 )
    ++*(_DWORD *)(v3 + 8);
  return a1;
}

