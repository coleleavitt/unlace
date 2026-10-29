__m128i *__fastcall sub_7275E0(const __m128i *a1, _QWORD *a2)
{
  __int64 v2; // rdx
  __m128i *result; // rax
  __int64 v4; // rcx
  bool v5; // zf
  __int32 v6; // edx
  __int8 v7; // dl
  __int8 v8; // dl

  v2 = a2[274];
  a2[284] += 56LL;
  result = (__m128i *)((v2 + 7) & 0xFFFFFFFFFFFFFFF8LL);
  if ( a2[275] >= (unsigned __int64)&result[3].m128i_u64[1] && v2 )
    a2[274] = (char *)result + 56;
  else
    result = (__m128i *)sub_722150((__int64)(a2 + 274), 56, 3);
  v4 = a1[2].m128i_i64[1];
  v5 = a1[2].m128i_i8[3] == 0;
  v6 = result[2].m128i_i32[0];
  *result = _mm_loadu_si128(a1);
  result[1] = _mm_loadu_si128(a1 + 1);
  result[3].m128i_i8[4] = 0;
  result[2].m128i_i64[1] = v4;
  if ( v5 )
    result[2].m128i_i32[0] = v6 & 0xE00000 | 0x76;
  else
    result[2].m128i_i32[0] = v6 & 0xE00000 | 0x1000076;
  v7 = a1[2].m128i_i8[2] & 1 | result[2].m128i_i8[2] & 0xFE;
  result[2].m128i_i8[2] = v7;
  v8 = a1[2].m128i_i8[2] & 2 | v7 & 0xFD;
  result[2].m128i_i8[2] = v8;
  result[2].m128i_i8[2] = a1[2].m128i_i8[2] & 4 | v8 & 0xFB;
  return result;
}

