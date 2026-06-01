unsigned __int64 __fastcall sub_7409D0(__int64 a1, _QWORD *a2)
{
  __int64 v2; // rdx
  unsigned __int64 result; // rax
  __m128i v4; // xmm0
  __int64 v5; // rcx
  __int64 v6; // rsi
  char v7; // dl
  __m128i v8; // xmm0
  char v9; // dl
  char v10; // dl

  v2 = a2[274];
  a2[284] += 56LL;
  result = (v2 + 7) & 0xFFFFFFFFFFFFFFF8LL;
  if ( a2[275] >= result + 56 && v2 )
    a2[274] = result + 56;
  else
    result = sub_722150((__int64)(a2 + 274), 56, 3);
  v4 = _mm_loadu_si128((const __m128i *)a1);
  v5 = *(_QWORD *)(a1 + 48);
  v6 = *(_QWORD *)(a1 + 36);
  *(_WORD *)(result + 32) = 408;
  v7 = *(_BYTE *)(result + 34);
  *(__m128i *)result = v4;
  v8 = _mm_loadu_si128((const __m128i *)(a1 + 16));
  *(_QWORD *)(result + 36) = v6;
  v7 &= 0xE0u;
  *(_QWORD *)(result + 48) = v5;
  *(_BYTE *)(result + 34) = v7;
  *(__m128i *)(result + 16) = v8;
  v9 = *(_BYTE *)(a1 + 34) & 1 | v7;
  *(_BYTE *)(result + 34) = v9;
  v10 = *(_BYTE *)(a1 + 34) & 2 | v9;
  *(_BYTE *)(result + 34) = v10;
  *(_BYTE *)(result + 34) = *(_BYTE *)(a1 + 34) & 4 | v10;
  return result;
}

