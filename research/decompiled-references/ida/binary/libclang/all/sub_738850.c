__int64 __fastcall sub_738850(__m128i *a1, _QWORD *a2, const __m128i *a3, const void *a4, __int64 a5)
{
  __m128i v7; // xmm0
  __int8 v9; // al
  __m128i v10; // xmm0
  char *v11; // rdi
  __int64 result; // rax
  char *v13; // rdx

  v7 = _mm_loadu_si128(a3);
  a1[2].m128i_i16[0] = 202;
  v9 = a1[2].m128i_i8[2];
  *a1 = v7;
  v10 = _mm_loadu_si128(a3 + 1);
  a1[2].m128i_i32[1] = a5;
  a1[1] = v10;
  a1[2].m128i_i8[2] = v9 & 0xE0 | 0x10;
  v11 = (char *)a2[274];
  result = (unsigned int)a5;
  a2[284] += (unsigned int)a5;
  v13 = &v11[(unsigned int)a5];
  if ( a2[275] >= (unsigned __int64)v13 && v11 )
  {
    a2[274] = v13;
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

