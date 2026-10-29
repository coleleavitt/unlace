__int64 __fastcall sub_11BFF60(__int64 a1, const __m128i *a2, const void *a3, __int64 a4)
{
  unsigned int v4; // ebx
  size_t v5; // r8
  __int64 v7; // rax

  v4 = *(unsigned __int8 *)(a1 + 40);
  if ( (_BYTE)v4 )
    return 0;
  v5 = *(_QWORD *)(a1 + 8);
  if ( v5 != a4 || v5 && memcmp(*(const void **)a1, a3, v5) )
    return v4;
  *(__m128i *)(a1 + 16) = _mm_loadu_si128(a2);
  v7 = a2[1].m128i_i64[0];
  *(_BYTE *)(a1 + 40) = 1;
  *(_QWORD *)(a1 + 32) = v7;
  return 1;
}
