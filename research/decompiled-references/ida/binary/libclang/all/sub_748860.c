unsigned __int64 __fastcall sub_748860(
        __m128i *a1,
        __int64 a2,
        const __m128i *a3,
        __int32 a4,
        __int64 a5,
        unsigned __int64 *a6,
        unsigned __int32 a7,
        unsigned __int64 *a8,
        unsigned __int32 a9,
        unsigned __int64 *a10,
        unsigned __int32 a11,
        unsigned __int64 *a12,
        unsigned __int32 a13,
        unsigned int *a14,
        unsigned __int32 a15,
        _QWORD *a16,
        unsigned __int32 a17)
{
  __m128i v18; // xmm0
  __m128i v19; // xmm0
  unsigned __int64 v20; // rax
  unsigned __int64 v21; // rax
  unsigned __int64 v22; // rax
  unsigned __int64 result; // rax
  __int64 v24; // rdx
  unsigned __int64 *v25; // rdi
  size_t v26; // rdx
  unsigned __int64 *v27; // rdi
  size_t v28; // rdx
  unsigned __int64 *v29; // rdi
  size_t v30; // rdx
  unsigned __int64 *v31; // rdi
  size_t v32; // rdx
  _DWORD *v33; // rdi
  size_t v34; // rdx
  _QWORD *v35; // rdi
  size_t v36; // rdx

  v18 = _mm_loadu_si128(a3);
  a1[2].m128i_i8[2] &= 0xE0u;
  *a1 = v18;
  v19 = _mm_loadu_si128(a3 + 1);
  a1[3].m128i_i32[0] = a7;
  a1[2].m128i_i32[1] = a4;
  a1[2].m128i_i64[1] = a5;
  a1[2].m128i_i16[0] = 413;
  a1[1] = v19;
  a1[3].m128i_i64[1] = sub_722290(a2 + 2192, 8LL * a7, 4);
  a1[4].m128i_i32[0] = a9;
  v20 = sub_722290(a2 + 2192, 8LL * a9, 4);
  a1[5].m128i_i32[0] = a11;
  a1[4].m128i_i64[1] = v20;
  v21 = sub_722290(a2 + 2192, 8LL * a11, 4);
  a1[6].m128i_i32[0] = a13;
  a1[5].m128i_i64[1] = v21;
  v22 = sub_722290(a2 + 2192, 8LL * a13, 4);
  a1[7].m128i_i32[0] = a15;
  a1[6].m128i_i64[1] = v22;
  a1[7].m128i_i64[1] = sub_722290(a2 + 2192, 4LL * a15, 4);
  a1[8].m128i_i32[0] = a17;
  result = sub_722290(a2 + 2192, 8LL * a17, 4);
  v24 = a1[3].m128i_u32[0];
  v25 = (unsigned __int64 *)a1[3].m128i_i64[1];
  a1[8].m128i_i64[1] = result;
  v26 = 8 * v24;
  if ( v26 <= 8 )
  {
    if ( v26 == 8 )
    {
      result = *a6;
      *v25 = *a6;
    }
  }
  else
  {
    result = (unsigned __int64)memmove(v25, a6, v26);
  }
  v27 = (unsigned __int64 *)a1[4].m128i_i64[1];
  v28 = 8LL * a1[4].m128i_u32[0];
  if ( v28 <= 8 )
  {
    if ( v28 == 8 )
    {
      result = *a8;
      *v27 = *a8;
    }
  }
  else
  {
    result = (unsigned __int64)memmove(v27, a8, v28);
  }
  v29 = (unsigned __int64 *)a1[5].m128i_i64[1];
  v30 = 8LL * a1[5].m128i_u32[0];
  if ( v30 <= 8 )
  {
    if ( v30 == 8 )
    {
      result = *a10;
      *v29 = *a10;
    }
  }
  else
  {
    result = (unsigned __int64)memmove(v29, a10, v30);
  }
  v31 = (unsigned __int64 *)a1[6].m128i_i64[1];
  v32 = 8LL * a1[6].m128i_u32[0];
  if ( v32 <= 8 )
  {
    if ( v32 == 8 )
    {
      result = *a12;
      *v31 = *a12;
    }
  }
  else
  {
    result = (unsigned __int64)memmove(v31, a12, v32);
  }
  v33 = (_DWORD *)a1[7].m128i_i64[1];
  v34 = 4LL * a1[7].m128i_u32[0];
  if ( v34 <= 4 )
  {
    if ( v34 == 4 )
    {
      result = *a14;
      *v33 = result;
    }
  }
  else
  {
    result = (unsigned __int64)memmove(v33, a14, v34);
  }
  v35 = (_QWORD *)a1[8].m128i_i64[1];
  v36 = 8LL * a1[8].m128i_u32[0];
  if ( v36 > 8 )
    return (unsigned __int64)memmove(v35, a16, v36);
  if ( v36 == 8 )
  {
    result = *a16;
    *v35 = *a16;
  }
  return result;
}

