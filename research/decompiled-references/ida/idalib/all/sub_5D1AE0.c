char *__fastcall sub_5D1AE0(const __m128i *a1, unsigned __int64 a2)
{
  char *v3; // rax
  __int64 v4; // r12
  __m128i v5; // xmm0
  __int64 v6; // rdi
  char *v7; // rbx
  __int64 v8; // r12
  char *result; // rax
  __m128i *v10; // rbx
  __m128i v11; // xmm0
  __int64 v12; // rdi
  void *ptr; // [rsp+0h] [rbp-78h] BYREF
  __int128 v14; // [rsp+8h] [rbp-70h]
  __m128i v15; // [rsp+20h] [rbp-58h] BYREF
  __int128 v16; // [rsp+30h] [rbp-48h]
  __int64 v17; // [rsp+40h] [rbp-38h]
  unsigned __int64 v18; // [rsp+48h] [rbp-30h]

  v18 = __readfsqword(0x28u);
  ptr = nullptr;
  v14 = 0;
  if ( !a2 )
    return nullptr;
  v15 = 0;
  v17 = 0;
  v16 = 0;
  v3 = (char *)qvector_reserve(&ptr, 0, a2, 40);
  v4 = v14;
  ptr = v3;
  if ( (unsigned __int64)v14 < a2 )
  {
    while ( 1 )
    {
      v5 = _mm_load_si128(&v15);
      v6 = v16;
      v7 = &v3[40 * v4];
      *((_QWORD *)v7 + 4) = 0;
      *(__m128i *)v7 = v5;
      *((_OWORD *)v7 + 1) = 0;
      *((_QWORD *)v7 + 2) = qstrdup(v6);
      *((_QWORD *)v7 + 3) = qstrdup(*((_QWORD *)&v16 + 1));
      ++v4;
      *((_QWORD *)v7 + 4) = qstrdup(v17);
      if ( a2 == v4 )
        break;
      v3 = (char *)ptr;
    }
  }
  *(_QWORD *)&v14 = a2;
  v8 = 0;
  free_regvar(&v15);
  result = (char *)ptr;
  do
  {
    v10 = (__m128i *)&result[40 * v8];
    if ( v10 != a1 )
    {
      free_regvar(&result[40 * v8]);
      v11 = _mm_loadu_si128(a1);
      v10[2].m128i_i64[0] = 0;
      v12 = a1[1].m128i_i64[0];
      v10[1] = 0;
      *v10 = v11;
      v10[1].m128i_i64[0] = qstrdup(v12);
      v10[1].m128i_i64[1] = qstrdup(a1[1].m128i_i64[1]);
      v10[2].m128i_i64[0] = qstrdup(a1[2].m128i_i64[0]);
      result = (char *)ptr;
    }
    ++v8;
    a1 = (const __m128i *)((char *)a1 + 40);
  }
  while ( a2 != v8 );
  if ( (unsigned __int64)v14 < *((_QWORD *)&v14 + 1) && result && (_QWORD)v14 )
  {
    result = (char *)qrealloc(result);
    if ( !result )
      return (char *)ptr;
  }
  return result;
}
