unsigned __int64 __fastcall sub_72E190(const __m128i *a1, _QWORD *a2)
{
  __int64 v2; // rdx
  unsigned __int64 result; // rax
  __m128i v4; // xmm0
  char v5; // dl
  __m128i v6; // xmm0
  char v7; // dl
  char v8; // dl

  v2 = a2[274];
  a2[284] += 40LL;
  result = (v2 + 7) & 0xFFFFFFFFFFFFFFF8LL;
  if ( a2[275] >= result + 40 && v2 )
    a2[274] = result + 40;
  else
    result = sub_722150((__int64)(a2 + 274), 40, 3);
  v4 = _mm_loadu_si128(a1);
  *(_WORD *)(result + 32) = 138;
  v5 = *(_BYTE *)(result + 34);
  *(__m128i *)result = v4;
  v6 = _mm_loadu_si128(a1 + 1);
  v5 &= 0xE0u;
  *(_BYTE *)(result + 34) = v5;
  *(__m128i *)(result + 16) = v6;
  v7 = a1[2].m128i_i8[2] & 1 | v5;
  *(_BYTE *)(result + 34) = v7;
  v8 = a1[2].m128i_i8[2] & 2 | v7;
  *(_BYTE *)(result + 34) = v8;
  *(_BYTE *)(result + 34) = a1[2].m128i_i8[2] & 4 | v8;
  return result;
}

