__int64 __fastcall sub_760170(__m128i *a1, _QWORD *a2, const __m128i *a3, const void *a4, __int64 a5)
{
  __m128i v7; // xmm0
  __int64 result; // rax
  __m128i v10; // xmm0
  char *v11; // rdi
  char *v12; // rdx

  v7 = _mm_loadu_si128(a3);
  a1[2].m128i_i16[0] = 392;
  result = (unsigned int)a5;
  *a1 = v7;
  v10 = _mm_loadu_si128(a3 + 1);
  a1[2].m128i_i8[2] &= 0xE0u;
  a1[1] = v10;
  a1[2].m128i_i32[1] = a5;
  v11 = (char *)a2[274];
  a2[284] += (unsigned int)a5;
  v12 = &v11[(unsigned int)a5];
  if ( a2[275] >= (unsigned __int64)v12 && v11 )
  {
    a2[274] = v12;
  }
  else
  {
    result = sub_722150((__int64)(a2 + 274), (unsigned int)a5, 0);
    v11 = (char *)result;
  }
  a1[2].m128i_i64[1] = (__int64)v11;
  if ( a5 )
    return (__int64)memcpy(v11, a4, a1[2].m128i_u32[1]);
  return result;
}

