unsigned __int64 __fastcall sub_727F40(const __m128i *a1, _QWORD *a2)
{
  __int64 v2; // rdx
  unsigned __int64 result; // rax
  __m128i v4; // xmm0
  __int32 v5; // ecx
  __int32 v6; // esi
  char v7; // dl
  __m128i v8; // xmm0
  char v9; // dl
  char v10; // dl

  v2 = a2[274];
  a2[284] += 48LL;
  result = (v2 + 7) & 0xFFFFFFFFFFFFFFF8LL;
  if ( a2[275] >= result + 48 && v2 )
    a2[274] = result + 48;
  else
    result = sub_722150((__int64)(a2 + 274), 48, 3);
  v4 = _mm_loadu_si128(a1);
  v5 = a1[2].m128i_i32[2];
  v6 = a1[2].m128i_i32[1];
  *(_WORD *)(result + 32) = 120;
  v7 = *(_BYTE *)(result + 34);
  *(__m128i *)result = v4;
  v8 = _mm_loadu_si128(a1 + 1);
  *(_DWORD *)(result + 36) = v6;
  v7 &= 0xE0u;
  *(_DWORD *)(result + 40) = v5;
  *(_BYTE *)(result + 34) = v7;
  *(__m128i *)(result + 16) = v8;
  v9 = a1[2].m128i_i8[2] & 1 | v7;
  *(_BYTE *)(result + 34) = v9;
  v10 = a1[2].m128i_i8[2] & 2 | v9;
  *(_BYTE *)(result + 34) = v10;
  *(_BYTE *)(result + 34) = a1[2].m128i_i8[2] & 4 | v10;
  return result;
}

