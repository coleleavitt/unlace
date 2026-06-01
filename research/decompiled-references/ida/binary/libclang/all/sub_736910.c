unsigned __int64 __fastcall sub_736910(const __m128i *a1, _QWORD *a2)
{
  __int64 v2; // rdx
  unsigned __int64 result; // rax
  int v4; // edx
  __m128i v5; // xmm0

  v2 = a2[274];
  a2[284] += 40LL;
  result = (v2 + 7) & 0xFFFFFFFFFFFFFFF8LL;
  if ( a2[275] >= result + 40 && v2 )
    a2[274] = result + 40;
  else
    result = sub_722150((__int64)(a2 + 274), 40, 3);
  v4 = *(_DWORD *)(result + 32);
  *(__m128i *)result = _mm_loadu_si128(a1);
  v4 &= 0xE00000u;
  v5 = _mm_loadu_si128(a1 + 1);
  LOBYTE(v4) = v4 | 0xBF;
  *(_DWORD *)(result + 32) = v4;
  LOBYTE(v4) = *(_BYTE *)(result + 34);
  *(__m128i *)(result + 16) = v5;
  LOBYTE(v4) = a1[2].m128i_i8[2] & 1 | v4 & 0xFE;
  *(_BYTE *)(result + 34) = v4;
  LOBYTE(v4) = a1[2].m128i_i8[2] & 2 | v4 & 0xFD;
  *(_BYTE *)(result + 34) = v4;
  *(_BYTE *)(result + 34) = a1[2].m128i_i8[2] & 4 | v4 & 0xFB;
  return result;
}

