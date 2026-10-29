__m128i *__fastcall sub_39A8C0(__m128i *a1, __int64 a2)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  __int64 v4; // rbx
  __int64 v5; // rax

  v2 = *(_QWORD *)(a2 + 8);
  v3 = sub_1674700(a2 + 16, *(unsigned int *)(a2 + 40));
  v4 = v3;
  if ( v3 )
    ++*(_DWORD *)(v3 + 8);
  v5 = sub_15DB5C0(v2, 0, v3);
  *a1 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v5, (__m128i)v2);
  if ( v5 )
    ++*(_DWORD *)(v5 + 8);
  if ( !v4 )
    return a1;
  if ( (*(_DWORD *)(v4 + 8))-- != 1 )
    return a1;
  sub_15D7BC0(v2, v4);
  return a1;
}

