unsigned __int64 __fastcall sub_50D4C0(const __m128i *a1, __int64 a2, const __m128i *a3)
{
  __m128i *v3; // rax
  const __m128i *v4; // rbp
  unsigned __int64 v5; // r13
  const __m128i *v6; // r12
  const __m128i *v7; // rcx
  __int64 *v8; // rdx
  __int64 v9; // rsi
  __int64 v10; // rsi
  __int64 v11; // rsi
  unsigned __int64 v12; // rdx
  __m128i v13; // xmm0
  __int64 v14; // rdx
  void *v15; // r15
  __int64 v16; // rbx
  __int64 v17; // rcx
  __int64 j; // r14
  volatile signed __int32 *v19; // rax
  volatile signed __int32 ***v20; // rax
  volatile signed __int32 *v21; // rax
  __int64 v22; // rbx
  __int64 k; // r13
  volatile signed __int32 *v24; // rax
  volatile signed __int32 **v25; // rbp
  __int64 v26; // rdx
  __int64 v27; // r12
  volatile signed __int32 *v28; // rdx
  volatile signed __int32 *v29; // rbx
  volatile signed __int32 *m; // r13
  volatile signed __int32 *v31; // rax
  const __m128i *v33; // [rsp+8h] [rbp-60h] BYREF
  volatile signed __int32 ***i; // [rsp+10h] [rbp-58h]
  volatile signed __int32 **v35; // [rsp+18h] [rbp-50h] BYREF
  const __m128i *v36; // [rsp+20h] [rbp-48h] BYREF
  unsigned __int64 v37; // [rsp+28h] [rbp-40h]

  v3 = (__m128i *)a3;
  v4 = a1;
  v33 = a3;
  v37 = __readfsqword(0x28u);
  v35 = (volatile signed __int32 **)a3;
  i = (volatile signed __int32 ***)&v33;
  v5 = (unsigned __int64)a3 + 24 * a2;
  if ( (unsigned __int64)a1 >= v5 )
  {
    v6 = a1;
    a1 = (const __m128i *)((char *)a3 + 24 * a2);
    if ( (const __m128i *)v5 == a3 )
    {
      v20 = &v35;
      v36 = (const __m128i *)((char *)a3 + 24 * a2);
      i = &v35;
      goto LABEL_26;
    }
  }
  else
  {
    v6 = (const __m128i *)((char *)a3 + 24 * a2);
    if ( a1 == a3 )
    {
      v36 = a1;
      i = (volatile signed __int32 ***)&v36;
      goto LABEL_6;
    }
  }
  v7 = a3;
  v8 = (__int64 *)v4;
  do
  {
    v9 = *v8;
    v7 = (const __m128i *)((char *)v7 + 24);
    *v8 = 0;
    v8 += 3;
    v7[-2].m128i_i64[1] = v9;
    v10 = *(v8 - 2);
    *(v8 - 2) = 0;
    v7[-1].m128i_i64[0] = v10;
    v11 = *(v8 - 1);
    *(v8 - 1) = 0;
    v7[-1].m128i_i64[1] = v11;
  }
  while ( a1 != v7 );
  v36 = a1;
  v12 = ((char *)a1 - (char *)v3 - 24) & 0xFFFFFFFFFFFFFFF8LL;
  v3 = (__m128i *)((char *)v3 + v12 + 24);
  v4 = (const __m128i *)((char *)v4 + v12 + 24);
  v33 = v3;
  for ( i = (volatile signed __int32 ***)&v36; (__m128i *)v5 != v3; v33 = v3 )
  {
LABEL_6:
    v13 = _mm_loadu_si128(v4);
    v14 = v4[1].m128i_i64[0];
    v4[1].m128i_i64[0] = 0;
    *v4 = 0;
    v15 = (void *)v3->m128i_i64[0];
    v16 = v3->m128i_i64[1];
    v17 = v3[1].m128i_i64[0];
    *v3 = v13;
    v3[1].m128i_i64[0] = v14;
    if ( v15 && !_InterlockedSub((volatile signed __int32 *)v15, 1u) )
    {
      for ( j = v16 + 96 * v17; j != v16; v16 += 96 )
      {
        v19 = *(volatile signed __int32 **)(v16 + 56);
        if ( v19 && !_InterlockedSub(v19, 1u) )
          free(*(void **)(v16 + 56));
      }
      free(v15);
    }
    v4 = (const __m128i *)((char *)v4 + 24);
    v3 = (__m128i *)&v33[1].m128i_u64[1];
  }
  v20 = &v35;
  i = &v35;
  if ( v6 != v4 )
  {
    do
    {
      v21 = (volatile signed __int32 *)v4[-2].m128i_i64[1];
      v4 = (const __m128i *)((char *)v4 - 24);
      if ( v21 && !_InterlockedSub(v21, 1u) )
      {
        v22 = v4->m128i_i64[1];
        for ( k = v22 + 96 * v4[1].m128i_i64[0]; k != v22; v22 += 96 )
        {
          v24 = *(volatile signed __int32 **)(v22 + 56);
          if ( v24 && !_InterlockedSub(v24, 1u) )
            free(*(void **)(v22 + 56));
        }
        free((void *)v4->m128i_i64[0]);
      }
    }
    while ( v4 != v6 );
    v20 = i;
  }
LABEL_26:
  v25 = *v20;
  if ( *v20 < v35 )
  {
    v26 = 1;
  }
  else
  {
    v26 = -1;
    if ( *v20 == v35 )
      return v37 - __readfsqword(0x28u);
  }
  v27 = 3 * v26;
  do
  {
    *v20 = &v25[v27];
    v20 = i;
    v25 = *i;
    v28 = **i;
    if ( v28 )
    {
      if ( !_InterlockedSub(v28, 1u) )
      {
        v29 = v25[1];
        for ( m = &v29[24 * (_QWORD)v25[2]]; m != v29; v29 += 24 )
        {
          v31 = *((volatile signed __int32 **)v29 + 7);
          if ( v31 && !_InterlockedSub(v31, 1u) )
            free(*((void **)v29 + 7));
        }
        free((void *)*v25);
      }
      v20 = i;
      v25 = *i;
    }
  }
  while ( v25 != v35 );
  return v37 - __readfsqword(0x28u);
}
