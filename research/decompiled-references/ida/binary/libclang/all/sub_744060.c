_QWORD *__fastcall sub_744060(__m128i *a1, _QWORD *a2, const __m128i *a3, __int64 a4, unsigned __int32 a5)
{
  __int64 v5; // r12
  __int64 v7; // rbx
  __m128i v8; // xmm0
  __int64 v9; // rdx
  _QWORD *result; // rax
  _QWORD *v11; // rdx
  __int64 v12; // r13
  __int64 v13; // rbx
  size_t v14; // r12
  char *v15; // rcx
  const void *v16; // r9
  void *v17; // rcx
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // [rsp+0h] [rbp-48h]
  const void *v21; // [rsp+8h] [rbp-40h]

  v5 = a5;
  v7 = 2LL * a5;
  v8 = _mm_loadu_si128(a3);
  a1[2].m128i_i16[0] = 410;
  a1[2].m128i_i8[2] &= 0xE0u;
  *a1 = v8;
  v20 = (__int64)(a2 + 274);
  a1[1] = _mm_loadu_si128(a3 + 1);
  v9 = a2[274];
  a2[284] += v7 * 8;
  a1[2].m128i_i32[1] = a5;
  result = (_QWORD *)((v9 + 15) & 0xFFFFFFFFFFFFFFF0LL);
  if ( a2[275] >= (unsigned __int64)&result[v7] && v9 )
    a2[274] = &result[v7];
  else
    result = (_QWORD *)sub_722150(v20, 16LL * a5, 4);
  if ( v5 )
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
  v12 = a1[2].m128i_u32[1];
  a1[2].m128i_i64[1] = (__int64)result;
  if ( v12 )
  {
    v13 = 0;
    do
    {
      while ( 1 )
      {
        v14 = *(_QWORD *)(a4 + 8);
        if ( v14 )
          break;
        ++v13;
        a4 += 16;
        if ( v12 == v13 )
          return result;
      }
      v15 = (char *)a2[274];
      v16 = *(const void **)a4;
      a2[284] += v14;
      if ( a2[275] >= (unsigned __int64)&v15[v14] && v15 )
      {
        a2[274] = &v15[v14];
      }
      else
      {
        v21 = v16;
        v19 = sub_722150(v20, v14, 0);
        v16 = v21;
        v15 = (char *)v19;
      }
      a4 += 16;
      v17 = memcpy(v15, v16, v14);
      v18 = v13++;
      result = (_QWORD *)(a1[2].m128i_i64[1] + 16 * v18);
      *result = v17;
      result[1] = v14;
    }
    while ( v12 != v13 );
  }
  return result;
}

