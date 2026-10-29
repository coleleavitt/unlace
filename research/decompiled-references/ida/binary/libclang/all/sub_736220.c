unsigned __int64 __fastcall sub_736220(const __m128i *a1, _QWORD *a2)
{
  __int64 v2; // rdx
  unsigned __int64 result; // rax
  __int32 v4; // ecx
  __int64 v5; // rsi
  __m128i v6; // xmm0
  char v7; // dl
  __m128i v8; // xmm0
  char v9; // dl
  char v10; // dl
  char v11; // dl

  v2 = a2[274];
  a2[284] += 56LL;
  result = (v2 + 7) & 0xFFFFFFFFFFFFFFF8LL;
  if ( a2[275] >= result + 56 && v2 )
    a2[274] = result + 56;
  else
    result = sub_722150((__int64)(a2 + 274), 56, 3);
  v4 = a1[3].m128i_i32[0];
  v5 = a1[2].m128i_i64[1];
  v6 = _mm_loadu_si128(a1);
  *(_WORD *)(result + 32) = 60;
  v7 = *(_BYTE *)(result + 34);
  *(__m128i *)result = v6;
  v8 = _mm_loadu_si128(a1 + 1);
  *(_QWORD *)(result + 40) = v5;
  v9 = v7 & 0xE0 | 8;
  *(_DWORD *)(result + 48) = v4;
  *(_BYTE *)(result + 34) = v9;
  *(__m128i *)(result + 16) = v8;
  v10 = a1[2].m128i_i8[2] & 1 | v9;
  *(_BYTE *)(result + 34) = v10;
  v11 = a1[2].m128i_i8[2] & 2 | v10;
  *(_BYTE *)(result + 34) = v11;
  *(_BYTE *)(result + 34) = a1[2].m128i_i8[2] & 4 | v11;
  return result;
}

