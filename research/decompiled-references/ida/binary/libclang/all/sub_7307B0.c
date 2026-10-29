_QWORD *__fastcall sub_7307B0(__m128i *a1, _QWORD *a2, const __m128i *a3, _QWORD *a4, unsigned __int32 a5)
{
  __m128i v8; // xmm0
  __m128i v9; // xmm0
  _QWORD *result; // rax
  unsigned __int64 v11; // rsi
  _QWORD *v12; // rdi
  bool v13; // zf

  v8 = _mm_loadu_si128(a3);
  a1[2].m128i_i16[0] = 152;
  *a1 = v8;
  v9 = _mm_loadu_si128(a3 + 1);
  a1[2].m128i_i8[2] &= 0xE0u;
  a1[1] = v9;
  result = (_QWORD *)a2[274];
  a1[2].m128i_i32[1] = a5;
  v11 = a5;
  a2[284] += v11 * 8;
  v12 = (_QWORD *)(((unsigned __int64)result + 15) & 0xFFFFFFFFFFFFFFF0LL);
  if ( a2[275] >= (unsigned __int64)&v12[v11] && result )
  {
    a2[274] = &v12[v11];
    a1[2].m128i_i64[1] = (__int64)v12;
    v13 = v11 == 1;
    if ( v11 > 1 )
      return memmove(v12, a4, v11 * 8);
  }
  else
  {
    result = (_QWORD *)sub_722150((__int64)(a2 + 274), v11 * 8, 4);
    v12 = result;
    v11 = a1[2].m128i_u32[1];
    a1[2].m128i_i64[1] = (__int64)result;
    v13 = v11 == 1;
    if ( v11 > 1 )
      return memmove(v12, a4, v11 * 8);
  }
  if ( v13 )
  {
    result = (_QWORD *)*a4;
    *v12 = *a4;
  }
  return result;
}

