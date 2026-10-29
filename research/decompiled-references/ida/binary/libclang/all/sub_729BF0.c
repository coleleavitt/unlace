unsigned __int64 __fastcall sub_729BF0(const __m128i *a1, _QWORD *a2)
{
  __int64 v2; // rdx
  unsigned __int64 result; // rax
  __m128i v5; // xmm0
  __int8 v6; // cl
  __int64 v7; // r8
  __int32 v8; // edi
  __int32 v9; // esi
  char v10; // dl
  __m128i v11; // xmm0
  char v12; // dl
  char v13; // dl

  v2 = a2[274];
  a2[284] += 64LL;
  result = (v2 + 7) & 0xFFFFFFFFFFFFFFF8LL;
  if ( a2[275] >= result + 64 && v2 )
    a2[274] = result + 64;
  else
    result = sub_722150((__int64)(a2 + 274), 64, 3);
  v5 = _mm_loadu_si128(a1);
  v6 = a1[3].m128i_i8[8];
  v7 = a1[2].m128i_i64[1];
  v8 = a1[3].m128i_i32[0];
  v9 = a1[3].m128i_i32[1];
  *(_WORD *)(result + 32) = 126;
  v10 = *(_BYTE *)(result + 34);
  *(__m128i *)result = v5;
  v11 = _mm_loadu_si128(a1 + 1);
  *(_QWORD *)(result + 40) = v7;
  v10 &= 0xE0u;
  *(_DWORD *)(result + 48) = v8;
  *(_BYTE *)(result + 34) = v10;
  *(_DWORD *)(result + 52) = v9;
  *(_BYTE *)(result + 56) = v6;
  *(__m128i *)(result + 16) = v11;
  v12 = a1[2].m128i_i8[2] & 1 | v10;
  *(_BYTE *)(result + 34) = v12;
  v13 = a1[2].m128i_i8[2] & 2 | v12;
  *(_BYTE *)(result + 34) = v13;
  *(_BYTE *)(result + 34) = a1[2].m128i_i8[2] & 4 | v13;
  return result;
}

