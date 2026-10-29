void __fastcall sub_9CA580(__int64 a1, const __m128i *a2)
{
  const __m128i *v2; // r14
  char *v4; // rbp
  __m128i *v5; // rbx
  __int8 *v6; // rdx
  unsigned __int64 v7; // rsi
  unsigned __int64 v8; // r13
  __int64 v9; // rax
  unsigned __int64 v10; // r13
  unsigned __int64 v11; // r15
  __int64 v12; // rcx
  char *v13; // rax
  const __m128i *v14; // rdx
  _OWORD *v15; // rax
  __int64 v16; // rdi
  __int64 v17; // rsi
  __int64 v18; // rdi
  __int64 v19; // rsi
  const __m128i *v20; // rax
  unsigned __int64 v21; // rdi
  unsigned __int64 v22; // rdx
  __m128i v23; // xmm1
  __m128i v24; // xmm2
  __m128i v25; // xmm3
  unsigned __int64 v26; // rdx
  _QWORD *v27; // rax
  __int64 v28; // rdx
  __int64 v29; // rdx
  void **v30; // r14
  unsigned __int64 v31; // [rsp+0h] [rbp-48h] BYREF
  __int8 *v32; // [rsp+8h] [rbp-40h]

  v2 = a2;
  v4 = *(char **)(a1 + 8);
  v5 = *(__m128i **)a1;
  v6 = &a2->m128i_i8[-*(_QWORD *)a1];
  if ( !(0xAAAAAAAAAAAAAAABLL * ((__int64)&v4[-*(_QWORD *)a1] >> 3)) )
  {
    v7 = 1;
    goto LABEL_27;
  }
  v7 = 0x5555555555555556LL * ((__int64)(*(_QWORD *)(a1 + 8) - *(_QWORD *)a1) >> 3);
  v8 = -16;
  if ( 0xAAAAAAAAAAAAAAABLL * ((__int64)&v4[-*(_QWORD *)a1] >> 3) > 0x5555555555555556LL
                                                                  * ((__int64)&v4[-*(_QWORD *)a1] >> 3)
    || v7 > 0xAAAAAAAAAAAAAAALL )
  {
    goto LABEL_3;
  }
  if ( v7 )
  {
LABEL_27:
    v8 = 24 * v7;
LABEL_3:
    v32 = v6;
    v9 = operator new(v8);
    v6 = v32;
    v31 = v9;
    v10 = v9 + v8;
    v11 = v9 + 24;
    v12 = v9;
    goto LABEL_4;
  }
  v31 = 0;
  v11 = 24;
  v10 = 0;
  v12 = 0;
LABEL_4:
  v13 = &v6[v12];
  *(_OWORD *)v13 = 0;
  *((_QWORD *)v13 + 2) = 0;
  if ( v2 != v5 )
  {
    v14 = v5;
    v15 = (_OWORD *)v12;
    do
    {
      *v15 = 0;
      v14 = (const __m128i *)((char *)v14 + 24);
      v15 = (_OWORD *)((char *)v15 + 24);
      *((_QWORD *)v15 - 1) = 0;
      *((_QWORD *)v15 - 3) = v14[-2].m128i_i64[1];
      v16 = v14[-1].m128i_i64[0];
      v14[-2].m128i_i64[1] = 0;
      v17 = *((_QWORD *)v15 - 2);
      *((_QWORD *)v15 - 2) = v16;
      v18 = v14[-1].m128i_i64[1];
      v14[-1].m128i_i64[0] = v17;
      v19 = *((_QWORD *)v15 - 1);
      *((_QWORD *)v15 - 1) = v18;
      v14[-1].m128i_i64[1] = v19;
    }
    while ( v2 != v14 );
    v11 = v31 + 8 * ((unsigned __int64)((char *)&v2[-2].m128i_u64[1] - (char *)v5) >> 3) + 48;
  }
  if ( v2 != (const __m128i *)v4 )
  {
    v20 = v2;
    v21 = ((0xAAAAAAAAAAAAAABLL * ((unsigned __int64)(v4 - (char *)v2 - 24) >> 3)) & 0x1FFFFFFFFFFFFFFFLL) + 1;
    if ( ((0xAAAAAAAAAAAAAABLL * ((unsigned __int64)(v4 - (char *)v2 - 24) >> 3)) & 0x1FFFFFFFFFFFFFFFLL) != 0 )
    {
      v22 = v11;
      do
      {
        v23 = _mm_loadu_si128(v20);
        v24 = _mm_loadu_si128(v20 + 1);
        *v20 = 0;
        v20 += 3;
        v25 = _mm_loadu_si128(v20 - 1);
        v20[-2] = 0;
        v22 += 48LL;
        v20[-1] = 0;
        *(__m128i *)(v22 - 48) = v23;
        *(__m128i *)(v22 - 32) = v24;
        *(__m128i *)(v22 - 16) = v25;
      }
      while ( v20 != &v2[3 * (v21 >> 1)] );
      v26 = 24 * (v21 & 0xFFFFFFFFFFFFFFFELL);
      v27 = (_QWORD *)(v11 + v26);
      v2 = (const __m128i *)((char *)v2 + v26);
      if ( v21 == (v21 & 0xFFFFFFFFFFFFFFFELL) )
        goto LABEL_14;
    }
    else
    {
      v27 = (_QWORD *)v11;
    }
    *v27 = v2->m128i_i64[0];
    v28 = v2->m128i_i64[1];
    v2->m128i_i64[0] = 0;
    v27[1] = v28;
    v29 = v2[1].m128i_i64[0];
    v2->m128i_i64[1] = 0;
    v27[2] = v29;
    v2[1].m128i_i64[0] = 0;
LABEL_14:
    v11 += 24 * v21;
  }
  v30 = (void **)v5;
  if ( v5 != (__m128i *)v4 )
  {
    do
    {
      while ( *v30 )
      {
        operator delete(*v30);
        v30 += 3;
        if ( v4 == (char *)v30 )
          goto LABEL_18;
      }
      v30 += 3;
    }
    while ( v30 != (void **)v4 );
  }
LABEL_18:
  if ( v5 )
    operator delete(v5);
  v31 = v11;
  *(_QWORD *)(a1 + 16) = v10;
  *(__m128 *)a1 = _mm_loadh_ps((const double *)&v31);
}

