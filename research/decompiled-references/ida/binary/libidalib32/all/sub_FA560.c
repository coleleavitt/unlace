void __fastcall sub_FA560(__m128i *a1)
{
  __m128i v1; // xmm3
  __m128i v2; // xmm2
  __m128i v4; // xmm0
  unsigned __int64 v5; // r12
  void **v6; // rbx
  void *v7; // rdi
  __m128i v8; // xmm4
  __m128i v9; // xmm5
  __m128i v10; // xmm1
  __m128i v11; // xmm0
  __m128i *v12; // rsi
  void *v13; // rdi
  void **v14; // rbx
  unsigned __int64 v15; // r12
  void *v16; // rdi
  __int64 v17; // rdx
  __int64 v18; // r12
  __int64 i; // rbx
  _QWORD *v20; // rax
  void (*v21)(); // rdx
  __int64 v22; // r12
  __int64 j; // rbx
  _QWORD *v24; // rax
  __m128i v25; // [rsp+0h] [rbp-98h] BYREF
  __m128i v26; // [rsp+10h] [rbp-88h] BYREF
  __m128i v27; // [rsp+20h] [rbp-78h] BYREF
  __m128i v28; // [rsp+30h] [rbp-68h]
  __m128i v29; // [rsp+40h] [rbp-58h] BYREF
  __m128i v30; // [rsp+50h] [rbp-48h]
  unsigned __int64 v31; // [rsp+68h] [rbp-30h]

  v1 = _mm_loadu_si128(a1 + 16);
  v2 = _mm_loadu_si128(a1 + 17);
  v31 = __readfsqword(0x28u);
  a1->m128i_i64[0] = (__int64)&off_236560;
  v4 = _mm_loadu_si128(a1 + 19);
  v26 = v1;
  v27 = _mm_loadu_si128(a1 + 18);
  v28 = v4;
  v29 = v1;
  v25 = v2;
  v30 = v2;
  sub_FA1C0(&v29, &v27);
  v5 = a1[19].m128i_i64[1] + 8;
  v6 = (void **)(v2.m128i_i64[1] + 8);
  if ( v2.m128i_i64[1] + 8 < v5 )
  {
    do
    {
      v7 = *v6++;
      operator delete(v7, 0x190u);
    }
    while ( (unsigned __int64)v6 < v5 );
  }
  v8 = _mm_load_si128(&v26);
  v9 = _mm_load_si128(&v25);
  a1[20].m128i_i32[0] = 0;
  v10 = _mm_loadu_si128(a1 + 16);
  v11 = _mm_loadu_si128(a1 + 17);
  v12 = &v27;
  a1[18] = v8;
  a1[19] = v9;
  v27 = v8;
  v28 = v9;
  v29 = v10;
  v30 = v11;
  sub_FA1C0(&v29, &v27);
  v13 = (void *)a1[15].m128i_i64[0];
  if ( v13 )
  {
    v14 = (void **)a1[17].m128i_i64[1];
    v15 = a1[19].m128i_i64[1] + 8;
    if ( (unsigned __int64)v14 < v15 )
    {
      do
      {
        v16 = *v14++;
        operator delete(v16, 0x190u);
      }
      while ( (unsigned __int64)v14 < v15 );
      v13 = (void *)a1[15].m128i_i64[0];
    }
    v12 = (__m128i *)(8 * a1[15].m128i_i64[1]);
    operator delete(v13, (unsigned __int64)v12);
  }
  linearray_t_dtr();
  if ( a1[13].m128i_i64[0] )
  {
    a1[13].m128i_i64[1] = 0;
    qfree();
  }
  v17 = a1[10].m128i_i64[0];
  if ( v17 )
  {
    v18 = a1[10].m128i_i64[1];
    if ( v18 )
    {
      for ( i = 0; i != v18; ++i )
      {
        v20 = (_QWORD *)(v17 + 24 * i);
        if ( *v20 )
        {
          v20[1] = 0;
          qfree();
          v17 = a1[10].m128i_i64[0];
        }
      }
    }
    a1[10].m128i_i64[1] = 0;
    qfree();
  }
  linearray_t_dtr();
  if ( a1[8].m128i_i64[0] )
  {
    a1[8].m128i_i64[1] = 0;
    qfree();
  }
  v21 = (void (*)())a1[5].m128i_i64[0];
  if ( v21 )
  {
    v22 = a1[5].m128i_i64[1];
    if ( v22 )
    {
      for ( j = 0; j != v22; ++j )
      {
        v24 = (_QWORD *)((char *)v21 + 24 * j);
        if ( *v24 )
        {
          v24[1] = 0;
          qfree();
          v21 = (void (*)())a1[5].m128i_i64[0];
        }
      }
    }
    a1[5].m128i_i64[1] = 0;
    qfree();
  }
  sub_90B20(a1, (__int64)v12, v21);
}

