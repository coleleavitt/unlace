_QWORD *__fastcall sub_756020(__m128i *a1, _QWORD *a2, const __m128i *a3, __int64 a4, _QWORD *a5, unsigned __int32 a6)
{
  __int8 v9; // al
  __m128i v10; // xmm0
  unsigned __int64 v11; // rsi
  _QWORD *result; // rax
  _QWORD *v13; // rdi
  bool v14; // zf

  a1[2].m128i_i16[0] = 350;
  v9 = a1[2].m128i_i8[2];
  *a1 = _mm_loadu_si128(a3);
  v10 = _mm_loadu_si128(a3 + 1);
  a1[3].m128i_i32[0] = a6;
  a1[1] = v10;
  v11 = a6;
  a1[2].m128i_i8[2] = v9 & 0xE0 | 0x18;
  result = (_QWORD *)a2[274];
  a1[2].m128i_i64[1] = a4;
  a2[284] += v11 * 8;
  v13 = (_QWORD *)(((unsigned __int64)result + 15) & 0xFFFFFFFFFFFFFFF0LL);
  if ( a2[275] >= (unsigned __int64)&v13[v11] && result )
  {
    a2[274] = &v13[v11];
    a1[3].m128i_i64[1] = (__int64)v13;
    v14 = v11 == 1;
    if ( v11 > 1 )
      return memmove(v13, a5, v11 * 8);
  }
  else
  {
    result = (_QWORD *)sub_722150((__int64)(a2 + 274), v11 * 8, 4);
    v13 = result;
    v11 = a1[3].m128i_u32[0];
    a1[3].m128i_i64[1] = (__int64)result;
    v14 = v11 == 1;
    if ( v11 > 1 )
      return memmove(v13, a5, v11 * 8);
  }
  if ( v14 )
  {
    result = (_QWORD *)*a5;
    *v13 = *a5;
  }
  return result;
}

