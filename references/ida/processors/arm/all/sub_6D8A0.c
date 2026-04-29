__int64 __fastcall sub_6D8A0(const __m128i *a1)
{
  __int64 result; // rax
  __m128i *v2; // rax
  __int8 v3; // dl
  __int16 v4; // cx

  result = 0;
  if ( a1[2].m128i_i16[4] == 14
    && (a1[3].m128i_i8[0] & 0xF) == 0xE
    && a1[2].m128i_i16[5] == 2
    && a1[3].m128i_i8[9] == 1
    && a1[3].m128i_i16[7] == 15
    && !a1[8].m128i_i8[9] )
  {
    v2 = (__m128i *)a1[54].m128i_i64[0];
    if ( a1[6].m128i_i8[1] != 8 || a1[8].m128i_i8[1] || a1[6].m128i_i64[1] )
    {
      *v2 = _mm_loadu_si128(a1 + 6);
      v2[1] = _mm_loadu_si128(a1 + 7);
      v2[2].m128i_i32[0] = a1[8].m128i_i32[0];
    }
    else
    {
      v3 = a1[6].m128i_i8[5];
      v4 = a1[6].m128i_i16[3];
      v2->m128i_i8[1] = 1;
      *(_WORD *)(a1[54].m128i_i64[0] + 6) = v4;
      *(_BYTE *)(a1[54].m128i_i64[0] + 5) = v3;
    }
    *(_QWORD *)(a1[23].m128i_i64[1] + 8) = a1[2].m128i_i64[0] + 2;
    *(_DWORD *)a1[23].m128i_i64[1] &= 0xFFFFFBFB;
    return 1;
  }
  return result;
}
