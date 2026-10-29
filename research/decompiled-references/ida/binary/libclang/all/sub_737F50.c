__int64 __fastcall sub_737F50(__m128i *a1, _QWORD *a2, const __m128i *a3, __int64 a4, const void *a5, __int64 a6)
{
  __m128i v8; // xmm0
  __int64 result; // rax
  __m128i v11; // xmm0
  char *v12; // rdi
  char *v13; // rdx

  v8 = _mm_loadu_si128(a3);
  a1[2].m128i_i16[0] = 200;
  result = (unsigned int)a6;
  *a1 = v8;
  v11 = _mm_loadu_si128(a3 + 1);
  a1[2].m128i_i8[2] &= 0xE0u;
  a1[1] = v11;
  a1[2].m128i_i64[1] = a4;
  a1[3].m128i_i32[0] = a6;
  v12 = (char *)a2[274];
  a2[284] += (unsigned int)a6;
  v13 = &v12[(unsigned int)a6];
  if ( a2[275] >= (unsigned __int64)v13 && v12 )
  {
    a2[274] = v13;
  }
  else
  {
    result = sub_722150((__int64)(a2 + 274), (unsigned int)a6, 0);
    v12 = (char *)result;
  }
  a1[3].m128i_i64[1] = (__int64)v12;
  if ( a6 )
    return (__int64)memcpy(v12, a5, a1[3].m128i_u32[0]);
  return result;
}

