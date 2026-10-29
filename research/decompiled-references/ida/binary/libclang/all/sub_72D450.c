unsigned __int64 __fastcall sub_72D450(__int64 a1, _QWORD *a2)
{
  __int64 v2; // rdx
  unsigned __int64 result; // rax
  __m128i v4; // xmm1
  __m128i v5; // xmm0
  char v6; // dl
  __m128i v7; // xmm1
  char v8; // dl
  char v9; // dl

  v2 = a2[274];
  a2[284] += 56LL;
  result = (v2 + 7) & 0xFFFFFFFFFFFFFFF8LL;
  if ( a2[275] >= result + 56 && v2 )
    a2[274] = result + 56;
  else
    result = sub_722150((__int64)(a2 + 274), 56, 3);
  v4 = _mm_loadu_si128((const __m128i *)a1);
  v5 = _mm_loadu_si128((const __m128i *)(a1 + 40));
  *(_WORD *)(result + 32) = 135;
  v6 = *(_BYTE *)(result + 34);
  *(__m128i *)result = v4;
  v7 = _mm_loadu_si128((const __m128i *)(a1 + 16));
  v6 &= 0xE0u;
  *(__m128i *)(result + 40) = v5;
  *(_BYTE *)(result + 34) = v6;
  *(__m128i *)(result + 16) = v7;
  v8 = *(_BYTE *)(a1 + 34) & 1 | v6;
  *(_BYTE *)(result + 34) = v8;
  v9 = *(_BYTE *)(a1 + 34) & 2 | v8;
  *(_BYTE *)(result + 34) = v9;
  *(_BYTE *)(result + 34) = *(_BYTE *)(a1 + 34) & 4 | v9;
  return result;
}

