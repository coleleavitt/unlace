unsigned __int64 __fastcall sub_751E40(const __m128i *a1, _QWORD *a2)
{
  __int64 v2; // rdx
  unsigned __int64 result; // rax
  __int64 v4; // rcx
  __m128i v5; // xmm0
  char v6; // dl
  __m128i v7; // xmm0
  char v8; // dl
  char v9; // dl
  char v10; // dl

  v2 = a2[274];
  a2[284] += 48LL;
  result = (v2 + 7) & 0xFFFFFFFFFFFFFFF8LL;
  if ( a2[275] >= result + 48 && v2 )
    a2[274] = result + 48;
  else
    result = sub_722150((__int64)(a2 + 274), 48, 3);
  v4 = a1[2].m128i_i64[1];
  v5 = _mm_loadu_si128(a1);
  *(_WORD *)(result + 32) = 327;
  v6 = *(_BYTE *)(result + 34);
  *(__m128i *)result = v5;
  v7 = _mm_loadu_si128(a1 + 1);
  *(_QWORD *)(result + 40) = v4;
  v8 = v6 & 0xE0 | 0x18;
  *(__m128i *)(result + 16) = v7;
  *(_BYTE *)(result + 34) = v8;
  v9 = a1[2].m128i_i8[2] & 1 | v8;
  *(_BYTE *)(result + 34) = v9;
  v10 = a1[2].m128i_i8[2] & 2 | v9;
  *(_BYTE *)(result + 34) = v10;
  *(_BYTE *)(result + 34) = a1[2].m128i_i8[2] & 4 | v10;
  return result;
}

