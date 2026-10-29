_QWORD *__fastcall sub_72B1A0(__m128i *a1, _QWORD *a2, const __m128i *a3, __int64 a4, unsigned __int32 a5)
{
  __int64 v5; // r12
  __int64 v7; // rbx
  __m128i v8; // xmm0
  __m128i v9; // xmm0
  __int64 v10; // rdx
  _QWORD *result; // rax
  _QWORD *v12; // rdx
  __int64 v13; // r13
  __int64 v14; // rbx
  size_t v15; // r12
  char *v16; // rcx
  const void *v17; // r9
  void *v18; // rcx
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // [rsp+0h] [rbp-48h]
  const void *v22; // [rsp+8h] [rbp-40h]

  v5 = a5;
  v7 = 2LL * a5;
  v8 = _mm_loadu_si128(a3);
  a1[2].m128i_i16[0] = 129;
  v21 = (__int64)(a2 + 274);
  *a1 = v8;
  v9 = _mm_loadu_si128(a3 + 1);
  a1[2].m128i_i8[2] &= 0xE0u;
  a1[1] = v9;
  v10 = a2[274];
  a2[284] += v7 * 8;
  a1[2].m128i_i32[1] = a5;
  result = (_QWORD *)((v10 + 15) & 0xFFFFFFFFFFFFFFF0LL);
  if ( a2[275] >= (unsigned __int64)&result[v7] && v10 )
    a2[274] = &result[v7];
  else
    result = (_QWORD *)sub_722150(v21, 16LL * a5, 4);
  if ( v5 )
  {
    v12 = result;
    do
    {
      *v12 = 0;
      v12 += 2;
      *(v12 - 1) = 0;
    }
    while ( &result[v7] != v12 );
  }
  v13 = a1[2].m128i_u32[1];
  a1[2].m128i_i64[1] = (__int64)result;
  if ( v13 )
  {
    v14 = 0;
    do
    {
      while ( 1 )
      {
        v15 = *(_QWORD *)(a4 + 8);
        if ( v15 )
          break;
        ++v14;
        a4 += 16;
        if ( v13 == v14 )
          return result;
      }
      v16 = (char *)a2[274];
      v17 = *(const void **)a4;
      a2[284] += v15;
      if ( a2[275] >= (unsigned __int64)&v16[v15] && v16 )
      {
        a2[274] = &v16[v15];
      }
      else
      {
        v22 = v17;
        v20 = sub_722150(v21, v15, 0);
        v17 = v22;
        v16 = (char *)v20;
      }
      a4 += 16;
      v18 = memcpy(v16, v17, v15);
      v19 = v14++;
      result = (_QWORD *)(a1[2].m128i_i64[1] + 16 * v19);
      *result = v18;
      result[1] = v15;
    }
    while ( v13 != v14 );
  }
  return result;
}

