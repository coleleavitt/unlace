unsigned __int64 __fastcall sub_761350(_QWORD *a1, int a2, const __m128i *a3)
{
  __int64 v4; // rdx
  unsigned __int64 result; // rax
  __m128i v6; // xmm0
  __m128i v7; // xmm0
  char v8; // dl

  v4 = a1[274];
  a1[284] += 40LL;
  result = (v4 + 7) & 0xFFFFFFFFFFFFFFF8LL;
  if ( a1[275] >= result + 40 && v4 )
    a1[274] = result + 40;
  else
    result = sub_722150((__int64)(a1 + 274), 40, 3);
  v6 = _mm_loadu_si128(a3);
  *(_WORD *)(result + 32) = 399;
  *(__m128i *)result = v6;
  v7 = _mm_loadu_si128(a3 + 1);
  *(_BYTE *)(result + 34) &= 0xE0u;
  *(__m128i *)(result + 16) = v7;
  v8 = *(_BYTE *)(result + 30);
  *(_DWORD *)(result + 36) = a2;
  if ( (~v8 & 0xF0) == 0 && !*(_QWORD *)result )
    *(_BYTE *)(result + 30) = v8 & 0xF;
  return result;
}

