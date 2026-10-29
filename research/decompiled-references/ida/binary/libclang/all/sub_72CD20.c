_QWORD *__fastcall sub_72CD20(__m128i *a1, _QWORD *a2, const __m128i *a3, _QWORD *a4, unsigned __int32 a5)
{
  __int8 v8; // al
  __m128i v9; // xmm0
  unsigned __int64 v10; // rsi
  _QWORD *result; // rax
  _QWORD *v12; // rdi
  bool v13; // zf

  a1[2].m128i_i16[0] = 133;
  v8 = a1[2].m128i_i8[2];
  *a1 = _mm_loadu_si128(a3);
  v9 = _mm_loadu_si128(a3 + 1);
  a1[2].m128i_i32[1] = a5;
  a1[1] = v9;
  v10 = a5;
  a1[2].m128i_i8[2] = v8 & 0xE0 | 0x18;
  result = (_QWORD *)a2[274];
  a2[284] += v10 * 8;
  v12 = (_QWORD *)(((unsigned __int64)result + 15) & 0xFFFFFFFFFFFFFFF0LL);
  if ( a2[275] >= (unsigned __int64)&v12[v10] && result )
  {
    a2[274] = &v12[v10];
    a1[2].m128i_i64[1] = (__int64)v12;
    v13 = v10 == 1;
    if ( v10 > 1 )
      return memmove(v12, a4, v10 * 8);
  }
  else
  {
    result = (_QWORD *)sub_722150((__int64)(a2 + 274), v10 * 8, 4);
    v12 = result;
    v10 = a1[2].m128i_u32[1];
    a1[2].m128i_i64[1] = (__int64)result;
    v13 = v10 == 1;
    if ( v10 > 1 )
      return memmove(v12, a4, v10 * 8);
  }
  if ( v13 )
  {
    result = (_QWORD *)*a4;
    *v12 = *a4;
  }
  return result;
}

