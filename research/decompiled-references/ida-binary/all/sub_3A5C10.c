unsigned __int64 __fastcall sub_3A5C10(__int64 a1)
{
  char **v2; // r15
  void *v3; // r14
  __m128i v4; // xmm0
  __m128i v5; // xmm1
  char *v6; // rax
  void *v7; // rdi
  const char *v8; // r13
  size_t v9; // rax
  __int64 v10; // r12
  size_t v11; // r14
  unsigned __int64 v12; // rdx
  unsigned __int64 v13; // rdi
  __m128i v14; // xmm0
  char *v15; // rax
  __int64 v17; // rax
  __int64 v18; // rax
  const char *v19; // rsi
  __int64 v20; // rax
  __int64 v21; // [rsp+0h] [rbp-70h]
  __m128i v22; // [rsp+8h] [rbp-68h] BYREF
  void *v23; // [rsp+18h] [rbp-58h] BYREF
  __m128i v24; // [rsp+20h] [rbp-50h] BYREF
  unsigned __int64 v25; // [rsp+30h] [rbp-40h]

  v25 = __readfsqword(0x28u);
  *(_QWORD *)a1 = 0;
  *(_QWORD *)(a1 + 24) = 0;
  *(_QWORD *)(a1 + 32) = 0;
  *(_DWORD *)(a1 + 56) = 0;
  *(_OWORD *)(a1 + 8) = 0;
  *(_OWORD *)(a1 + 40) = 0;
  v21 = a1 + 32;
  *(_QWORD *)(a1 + 32) = qvector_reserve(a1 + 32, 0, 5, 24);
  v2 = &off_8BCBC0;
  do
  {
    while ( 1 )
    {
      v23 = nullptr;
      v8 = *v2;
      v24 = 0;
      if ( v8 )
      {
        v9 = strlen(v8);
        v10 = v9 + 1;
        v11 = v9;
        v23 = (void *)qvector_reserve(&v23, 0, v9 + 1, 1);
        v24.m128i_i64[0] = v10;
        memmove(v23, v8, v11);
        *((_BYTE *)v23 + v11) = 0;
      }
      v20 = *(_QWORD *)(a1 + 40);
      v19 = *(const char **)(a1 + 32);
      v12 = *(_QWORD *)(a1 + 48);
      v13 = v20 + 1;
      if ( &v23 < (void **)v19 || &v23 >= (void **)&v19[24 * v12] )
        break;
      v3 = v23;
      v4 = _mm_loadl_epi64(&v24);
      v23 = nullptr;
      v5 = _mm_loadl_epi64((const __m128i *)&v24.m128i_u64[1]);
      v24 = 0;
      if ( v12 < v13 )
      {
        v22.m128i_i64[1] = v5.m128i_i64[0];
        v22.m128i_i64[0] = v4.m128i_i64[0];
        v18 = qvector_reserve(v21, v19, v20 + 1, 24);
        *(_QWORD *)(a1 + 32) = v18;
        v19 = (const char *)v18;
        v5 = _mm_loadl_epi64((const __m128i *)&v22.m128i_u64[1]);
        v20 = *(_QWORD *)(a1 + 40);
        v4 = _mm_loadl_epi64(&v22);
      }
      v6 = (char *)&v19[24 * v20];
      *(_QWORD *)v6 = v3;
      v7 = v23;
      *(__m128i *)(v6 + 8) = _mm_unpacklo_epi64(v4, v5);
      ++*(_QWORD *)(a1 + 40);
      if ( v7 )
      {
        v24.m128i_i64[0] = 0;
        qfree(v7, v19);
      }
      if ( &off_8BCBE8 == (_UNKNOWN **)++v2 )
        return v25 - __readfsqword(0x28u);
    }
    if ( v12 < v13 )
    {
      v17 = qvector_reserve(v21, v19, v20 + 1, 24);
      *(_QWORD *)(a1 + 32) = v17;
      v19 = (const char *)v17;
      v20 = *(_QWORD *)(a1 + 40);
    }
    v14 = _mm_loadu_si128(&v24);
    ++v2;
    v15 = (char *)&v19[24 * v20];
    *(_QWORD *)v15 = v23;
    *(__m128i *)(v15 + 8) = v14;
    ++*(_QWORD *)(a1 + 40);
  }
  while ( &off_8BCBE8 != (_UNKNOWN **)v2 );
  return v25 - __readfsqword(0x28u);
}
