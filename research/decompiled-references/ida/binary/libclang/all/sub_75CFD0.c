__int64 __fastcall sub_75CFD0(__m128i *a1, _QWORD *a2, const __m128i *a3, const void *a4, __int64 a5, __int32 a6)
{
  __m128i v10; // xmm0
  __int64 result; // rax
  __m128i v12; // xmm0
  char *v13; // rdi
  char *v14; // rdx

  v10 = _mm_loadu_si128(a3);
  a1[2].m128i_i16[0] = 376;
  result = (unsigned int)a5;
  *a1 = v10;
  v12 = _mm_loadu_si128(a3 + 1);
  a1[2].m128i_i8[2] &= 0xE0u;
  a1[1] = v12;
  a1[2].m128i_i32[1] = a5;
  v13 = (char *)a2[274];
  a2[284] += (unsigned int)a5;
  v14 = &v13[(unsigned int)a5];
  if ( a2[275] >= (unsigned __int64)v14 && v13 )
  {
    a2[274] = v14;
  }
  else
  {
    result = sub_722150((__int64)(a2 + 274), (unsigned int)a5, 0);
    v13 = (char *)result;
  }
  a1[2].m128i_i64[1] = (__int64)v13;
  a1[3].m128i_i32[0] = a6;
  if ( a5 )
    return (__int64)memcpy(v13, a4, a1[2].m128i_u32[1]);
  return result;
}

