unsigned __int64 __fastcall sub_747360(const __m128i *a1, _QWORD *a2)
{
  __int64 v2; // rdx
  unsigned __int64 result; // rax
  __m128i v4; // xmm0
  __int64 v5; // rcx
  char v6; // dl
  __m128i v7; // xmm0
  char v8; // dl
  char v9; // dl

  v2 = a2[274];
  a2[284] += 48LL;
  result = (v2 + 7) & 0xFFFFFFFFFFFFFFF8LL;
  if ( a2[275] >= result + 48 && v2 )
    a2[274] = result + 48;
  else
    result = sub_722150((__int64)(a2 + 274), 48, 3);
  v4 = _mm_loadu_si128(a1);
  v5 = a1[2].m128i_i64[1];
  *(_WORD *)(result + 32) = 20;
  v6 = *(_BYTE *)(result + 34);
  *(__m128i *)result = v4;
  v7 = _mm_loadu_si128(a1 + 1);
  v6 &= 0xE0u;
  *(_QWORD *)(result + 40) = v5;
  *(_BYTE *)(result + 34) = v6;
  *(__m128i *)(result + 16) = v7;
  v8 = a1[2].m128i_i8[2] & 1 | v6;
  *(_BYTE *)(result + 34) = v8;
  v9 = a1[2].m128i_i8[2] & 2 | v8;
  *(_BYTE *)(result + 34) = v9;
  *(_BYTE *)(result + 34) = a1[2].m128i_i8[2] & 4 | v9;
  return result;
}

