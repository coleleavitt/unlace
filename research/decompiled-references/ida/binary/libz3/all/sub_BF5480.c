__m128i *__fastcall sub_BF5480(__m128i *a1, _QWORD *a2)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax

  v2 = a2[2];
  v3 = sub_15E1B70(a2[3]);
  *a1 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v3, (__m128i)v2);
  if ( v3 )
    ++*(_DWORD *)(v3 + 8);
  sub_14B9B80(a2[1], a1);
  return a1;
}

