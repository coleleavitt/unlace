__int8 *__fastcall sub_6C0AA0(__m128i *a1, const __m128i *a2)
{
  __int32 v2; // edx
  __int32 v3; // eax
  __int64 v4; // rdx
  __int64 v5; // rax
  __int8 v6; // cl
  __int8 v7; // cl
  __int64 v8; // rdx
  __int64 v9; // rax
  char v10; // cl
  __int8 *result; // rax
  __int64 v13; // rdi

  *a1 = _mm_loadu_si128(a2);
  a1[1].m128i_i32[0] = a2[1].m128i_i32[0];
  v2 = a2[2].m128i_i32[0];
  a1[1].m128i_i64[1] = a2[1].m128i_i64[1];
  v3 = a1[2].m128i_i32[0];
  a1[2].m128i_i32[0] = v2;
  v4 = a2[2].m128i_i64[1];
  a2[2].m128i_i32[0] = v3;
  v5 = a1[2].m128i_i64[1];
  a1[2].m128i_i64[1] = v4;
  v6 = a2[2].m128i_i8[4];
  a2[2].m128i_i64[1] = v5;
  LOBYTE(v4) = a1[2].m128i_i8[4];
  a1[2].m128i_i8[4] = v6 & 2 | v4 & 0xFD;
  LOBYTE(v5) = v4 & 2 | a2[2].m128i_i8[4] & 0xFD;
  a2[2].m128i_i8[4] = v5;
  v7 = a1[2].m128i_i8[4];
  a1[2].m128i_i8[4] = v5 & 1 | v7 & 0xFE;
  LODWORD(v4) = a2[3].m128i_i32[0];
  a2[2].m128i_i8[4] = v7 & 1 | a2[2].m128i_i8[4] & 0xFE;
  LODWORD(v5) = a1[3].m128i_i32[0];
  a1[3].m128i_i32[0] = v4;
  v8 = a2[3].m128i_i64[1];
  a2[3].m128i_i32[0] = v5;
  v9 = a1[3].m128i_i64[1];
  a1[3].m128i_i64[1] = v8;
  a2[3].m128i_i64[1] = v9;
  LOBYTE(v8) = a1[3].m128i_i8[4];
  a1[3].m128i_i8[4] = a2[3].m128i_i8[4] & 2 | v8 & 0xFD;
  LOBYTE(v9) = v8 & 2 | a2[3].m128i_i8[4] & 0xFD;
  a2[3].m128i_i8[4] = v9;
  v10 = a1[3].m128i_i8[4] & 1;
  a1[3].m128i_i8[4] = v9 & 1 | a1[3].m128i_i8[4] & 0xFE;
  a2[3].m128i_i8[4] = v10 | a2[3].m128i_i8[4] & 0xFE;
  a1[4].m128i_i64[0] = a2[4].m128i_i64[0];
  result = &a2[4].m128i_i8[8];
  if ( &a1[4].m128i_u64[1] != &a2[4].m128i_u64[1] )
  {
    v13 = a1[4].m128i_i64[1];
    if ( v13 )
      sub_186B220((void *)(v13 - 8));
    a1[4].m128i_i64[1] = 0;
    result = (__int8 *)a2[4].m128i_i64[1];
    a1[4].m128i_i64[1] = (__int64)result;
    a2[4].m128i_i64[1] = 0;
  }
  return result;
}

