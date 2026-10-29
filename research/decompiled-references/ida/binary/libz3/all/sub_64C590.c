__m128i *__fastcall sub_64C590(__m128i *a1, __int64 a2)
{
  __int64 v2; // rdx
  unsigned __int64 v3; // rbp
  __int64 v4; // rsi
  __int64 v5; // rax

  v2 = *(_QWORD *)(a2 + 2944);
  v3 = *(_QWORD *)(a2 + 2936);
  if ( v2 )
    v4 = *(unsigned int *)(v2 - 4);
  else
    v4 = 0;
  v5 = sub_15EC1C0(v3, v4);
  *a1 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v5, (__m128i)v3);
  if ( v5 )
    ++*(_DWORD *)(v5 + 8);
  return a1;
}

