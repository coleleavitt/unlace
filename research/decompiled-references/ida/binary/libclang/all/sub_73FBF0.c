__int64 __fastcall sub_73FBF0(__m128i *a1, _QWORD *a2, const __m128i *a3, unsigned int *a4, unsigned __int32 a5)
{
  __m128i v8; // xmm0
  __m128i v9; // xmm0
  __int64 result; // rax
  unsigned __int64 v11; // rsi
  _DWORD *v12; // rdi

  v8 = _mm_loadu_si128(a3);
  a1[2].m128i_i16[0] = 64;
  *a1 = v8;
  v9 = _mm_loadu_si128(a3 + 1);
  a1[2].m128i_i8[2] &= 0xE0u;
  a1[1] = v9;
  result = a2[274];
  a1[2].m128i_i32[1] = a5;
  v11 = a5;
  a2[284] += v11 * 4;
  v12 = (_DWORD *)((result + 15) & 0xFFFFFFFFFFFFFFF0LL);
  if ( a2[275] >= (unsigned __int64)&v12[v11] && result )
  {
    a2[274] = &v12[v11];
  }
  else
  {
    result = sub_722150((__int64)(a2 + 274), v11 * 4, 4);
    v12 = (_DWORD *)result;
    v11 = a1[2].m128i_u32[1];
  }
  a1[2].m128i_i64[1] = (__int64)v12;
  a1[3].m128i_i64[0] = 0;
  a1[3].m128i_i64[1] = 0;
  a1[4].m128i_i64[0] = 0;
  a1[4].m128i_i64[1] = 0;
  if ( v11 > 1 )
    return (__int64)memmove(v12, a4, v11 * 4);
  if ( v11 == 1 )
  {
    result = *a4;
    *v12 = result;
  }
  return result;
}

