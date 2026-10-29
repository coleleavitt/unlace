unsigned __int64 __fastcall sub_747050(_QWORD *a1, const __m128i *a2)
{
  __int64 v2; // rdx
  unsigned __int64 result; // rax
  __m128i v4; // xmm0
  __m128i v5; // xmm0

  v2 = a1[274];
  a1[284] += 40LL;
  result = (v2 + 7) & 0xFFFFFFFFFFFFFFF8LL;
  if ( a1[275] >= result + 40 && v2 )
    a1[274] = result + 40;
  else
    result = sub_722150((__int64)(a1 + 274), 40, 3);
  v4 = _mm_loadu_si128(a2);
  *(_WORD *)(result + 32) = 281;
  *(__m128i *)result = v4;
  v5 = _mm_loadu_si128(a2 + 1);
  *(_BYTE *)(result + 34) &= 0xE0u;
  *(__m128i *)(result + 16) = v5;
  if ( (~*(_BYTE *)(result + 30) & 0xF0) == 0 && !*(_QWORD *)result )
    *(_BYTE *)(result + 30) &= 0xFu;
  return result;
}

