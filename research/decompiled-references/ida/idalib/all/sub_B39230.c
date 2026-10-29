_QWORD *__fastcall sub_B39230(__m128i *a1, __int64 *a2, const __m128i *a3, __int64 a4, unsigned __int32 a5)
{
  __int64 v6; // rbp
  __int64 v7; // rbx
  __int32 v8; // eax
  _QWORD *result; // rax
  __int64 v10; // r9
  _QWORD *v11; // rdx
  __int64 v12; // r15
  __int64 v13; // r15
  __int64 v14; // rbx
  size_t v15; // rbp
  void *v16; // rcx
  const void *v17; // r8
  void *v18; // rcx
  __int64 v19; // rax
  const void *v20; // [rsp+8h] [rbp-40h]

  v6 = a5;
  v7 = 2LL * a5;
  *a1 = _mm_loadu_si128(a3);
  a1[1] = _mm_loadu_si128(a3 + 1);
  v8 = a3[2].m128i_i32[0];
  a1[2].m128i_i8[6] &= 0xE0u;
  a1[2].m128i_i32[0] = v8;
  a1[2].m128i_i16[2] = 8;
  a1[2].m128i_i32[2] = a5;
  result = (_QWORD *)sub_9C3B30(a2 + 294, v7 * 8, 4u);
  if ( v6 )
  {
    v11 = result;
    do
    {
      *v11 = 0;
      v11 += 2;
      *(v11 - 1) = 0;
    }
    while ( &result[v7] != v11 );
  }
  v12 = a1[2].m128i_u32[2];
  a1[3].m128i_i64[0] = (__int64)result;
  if ( v12 )
  {
    v13 = 16 * v12;
    v14 = 0;
    do
    {
      while ( 1 )
      {
        v15 = *(_QWORD *)(a4 + v14 + 8);
        if ( v15 )
          break;
        v14 += 16;
        if ( v14 == v13 )
          return result;
      }
      v16 = (void *)a2[294];
      v17 = *(const void **)(a4 + v14);
      a2[304] += v15;
      if ( a2[295] >= (unsigned __int64)v16 + v15 && v16 )
      {
        a2[294] = (__int64)v16 + v15;
      }
      else
      {
        v20 = v17;
        v19 = sub_986170((__int64)(a2 + 294), v15, v15, 0, (__int64)v17, v10);
        v17 = v20;
        v16 = (void *)v19;
      }
      v18 = memcpy(v16, v17, v15);
      result = (_QWORD *)(v14 + a1[3].m128i_i64[0]);
      v14 += 16;
      *result = v18;
      result[1] = v15;
    }
    while ( v14 != v13 );
  }
  return result;
}
