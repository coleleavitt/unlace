__int64 __fastcall sub_3CCF90(__int64 *a1, __int64 a2)
{
  void *v2; // r13
  size_t v3; // rbp
  __int64 v4; // rdx
  __int64 v5; // rsi
  __int64 result; // rax
  __int64 v7; // rax

  v2 = 0;
  v3 = *(_QWORD *)(a2 + 8);
  if ( v3 )
  {
    v2 = (void *)qalloc_or_throw();
    memcpy(v2, *(const void **)a2, v3);
  }
  v4 = a1[1];
  v5 = *a1;
  if ( a1[2] < (unsigned __int64)(v4 + 1) )
  {
    v7 = qvector_reserve();
    *a1 = v7;
    v4 = a1[1];
    v5 = v7;
  }
  result = v5 + 24 * v4;
  *(_QWORD *)result = v2;
  *(__m128i *)(result + 8) = _mm_unpacklo_epi64((__m128i)v3, (__m128i)v3);
  ++a1[1];
  return result;
}
