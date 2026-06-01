__int64 __fastcall sub_737130(
        __m128i *a1,
        _QWORD *a2,
        const __m128i *a3,
        __int64 a4,
        unsigned int *a5,
        unsigned __int32 a6)
{
  __m128i v9; // xmm0
  __m128i v10; // xmm0
  __int64 result; // rax
  unsigned __int64 v12; // rsi
  _DWORD *v13; // rdi
  bool v14; // zf

  v9 = _mm_loadu_si128(a3);
  a1[2].m128i_i16[0] = 195;
  *a1 = v9;
  v10 = _mm_loadu_si128(a3 + 1);
  a1[2].m128i_i8[2] &= 0xE0u;
  a1[1] = v10;
  result = a2[274];
  a1[3].m128i_i32[0] = a6;
  a1[2].m128i_i64[1] = a4;
  v12 = a6;
  v13 = (_DWORD *)((result + 15) & 0xFFFFFFFFFFFFFFF0LL);
  a2[284] += v12 * 4;
  if ( a2[275] >= (unsigned __int64)&v13[v12] && result )
  {
    a2[274] = &v13[v12];
    a1[3].m128i_i64[1] = (__int64)v13;
    v14 = v12 == 1;
    if ( v12 > 1 )
      return (__int64)memmove(v13, a5, v12 * 4);
  }
  else
  {
    result = sub_722150((__int64)(a2 + 274), v12 * 4, 4);
    v13 = (_DWORD *)result;
    v12 = a1[3].m128i_u32[0];
    a1[3].m128i_i64[1] = result;
    v14 = v12 == 1;
    if ( v12 > 1 )
      return (__int64)memmove(v13, a5, v12 * 4);
  }
  if ( v14 )
  {
    result = *a5;
    *v13 = result;
  }
  return result;
}

