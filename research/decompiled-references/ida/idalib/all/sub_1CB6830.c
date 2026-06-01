__m128i *__fastcall sub_1CB6830(__int64 *a1, __m128i *a2, char *a3, char *a4)
{
  char *v4; // r8
  signed __int64 v6; // r9
  __int64 v7; // r13
  char *v8; // rbp
  __m128i *v9; // rbx
  __int64 v10; // r10
  __int64 v11; // rcx
  unsigned __int64 v12; // r12
  __int64 v13; // rsi
  unsigned __int64 v14; // r13
  __m128i *v15; // r14
  unsigned __int64 v16; // rdx
  __int64 v17; // rdi
  __int64 v18; // r11
  unsigned __int64 v19; // rax
  size_t v20; // r10
  unsigned __int64 v21; // rcx
  unsigned __int64 v22; // r12
  unsigned int v23; // r13d
  unsigned __int64 v24; // rax
  __int64 v26; // rcx
  __int64 v27; // r12
  const __m128i *v28; // r13
  unsigned __int64 v29; // r8
  const __m128i *v30; // rdx
  __m128i v31; // xmm1
  __int64 v32; // r12
  unsigned __int64 v33; // rcx
  __int64 v34; // rdx
  unsigned __int64 v35; // rdx
  __int8 *v36; // [rsp+0h] [rbp-58h]
  char *v37; // [rsp+8h] [rbp-50h]
  signed __int64 v38; // [rsp+8h] [rbp-50h]
  unsigned __int64 v39; // [rsp+8h] [rbp-50h]
  signed __int64 v40; // [rsp+10h] [rbp-48h]
  char *v41; // [rsp+10h] [rbp-48h]
  signed __int64 v42; // [rsp+10h] [rbp-48h]
  char *v43; // [rsp+18h] [rbp-40h]
  int v44; // [rsp+18h] [rbp-40h]

  v4 = a4;
  v6 = a4 - a3;
  v7 = (a4 - a3) >> 3;
  v8 = a3;
  v9 = a2;
  v10 = *a1;
  v11 = *((unsigned int *)a1 + 2);
  v12 = *((unsigned int *)a1 + 3);
  v36 = &a2->m128i_i8[-*a1];
  v13 = 24 * v11;
  v14 = 0xAAAAAAAAAAAAAAABLL * v7;
  v15 = (__m128i *)(*a1 + 24 * v11);
  v16 = v11 + v14;
  if ( v9 == v15 )
  {
    if ( v16 > v12 )
    {
      v41 = v4;
      v38 = v6;
      sub_2237220(a1, a1 + 2, v16, 24);
      v10 = *a1;
      v11 = *((unsigned int *)a1 + 2);
      v4 = v41;
      v6 = v38;
    }
    if ( v8 != v4 )
    {
      memcpy((void *)(v10 + 24 * v11), v8, v6);
      v10 = *a1;
      LODWORD(v11) = *((_DWORD *)a1 + 2);
    }
    *((_DWORD *)a1 + 2) = v14 + v11;
    return (__m128i *)&v36[v10];
  }
  else
  {
    v17 = *a1;
    v18 = v11;
    v19 = v14;
    if ( v16 > v12 )
    {
      v43 = v4;
      v40 = v6;
      sub_2237220(a1, a1 + 2, v16, 24);
      v18 = *((unsigned int *)a1 + 2);
      v17 = *a1;
      v4 = v43;
      v6 = v40;
      v13 = 24 * v18;
      v9 = (__m128i *)&v36[*a1];
      v19 = v14;
      v15 = (__m128i *)(*a1 + 24 * v18);
    }
    v20 = v13 - (_QWORD)v36;
    v21 = 0xAAAAAAAAAAAAAAABLL * ((v13 - (__int64)v36) >> 3);
    v22 = v21;
    if ( v21 >= v14 )
    {
      v26 = (__int64)v15;
      v27 = v13 - v6;
      v28 = (const __m128i *)(v17 + v13 - v6);
      v29 = 0xAAAAAAAAAAAAAAABLL * (v6 >> 3);
      if ( v29 + v18 > *((unsigned int *)a1 + 3) )
      {
        v44 = -1431655765 * (v6 >> 3);
        v42 = v6;
        v39 = v19;
        sub_2237220(a1, a1 + 2, v29 + v18, 24);
        v18 = *((unsigned int *)a1 + 2);
        LODWORD(v29) = v44;
        v6 = v42;
        v19 = v39;
        v26 = *a1 + 24 * v18;
      }
      if ( v28 != v15 )
      {
        v30 = v28;
        do
        {
          v31 = _mm_loadu_si128(v30);
          v30 = (const __m128i *)((char *)v30 + 24);
          v26 += 24;
          *(__m128i *)(v26 - 24) = v31;
          *(_QWORD *)(v26 - 8) = v30[-1].m128i_i64[1];
        }
        while ( v15 != v30 );
        LODWORD(v18) = *((_DWORD *)a1 + 2);
      }
      v32 = v27 - (_QWORD)v36;
      *((_DWORD *)a1 + 2) = v29 + v18;
      v33 = 0xAAAAAAAAAAAAAAABLL * (v32 >> 3);
      v34 = 0x1FFFFFFFFFFFFFFDLL;
      if ( v32 > 0 )
      {
        do
        {
          *(__m128i *)((char *)v15 + v34 * 8) = _mm_loadu_si128((const __m128i *)((char *)v28 + v34 * 8));
          v15[1].m128i_i64[v34] = v28[1].m128i_i64[v34];
          v34 -= 3;
          --v33;
        }
        while ( v33 );
      }
      if ( v6 > 0 )
      {
        v35 = 0;
        do
        {
          *(__m128i *)((char *)v9 + v35) = _mm_loadu_si128((const __m128i *)&v8[v35]);
          v9[1].m128i_i64[v35 / 8] = *(_QWORD *)&v8[v35 + 16];
          v35 += 24LL;
          --v19;
        }
        while ( v19 );
      }
    }
    else
    {
      v23 = v18 + v14;
      *((_DWORD *)a1 + 2) = v23;
      if ( v15 != v9 )
      {
        v37 = v4;
        memcpy((void *)(v17 + 24LL * v23 - v20), v9, v20);
        v21 = 0xAAAAAAAAAAAAAAABLL * ((v13 - (__int64)v36) >> 3);
        v4 = v37;
        v20 = v13 - (_QWORD)v36;
      }
      if ( v21 )
      {
        v24 = 0;
        do
        {
          *(__m128i *)((char *)v9 + v24) = _mm_loadu_si128((const __m128i *)&v8[v24]);
          v9[1].m128i_i64[v24 / 8] = *(_QWORD *)&v8[v24 + 16];
          v24 += 24LL;
          --v22;
        }
        while ( v22 );
        v8 += v20;
      }
      if ( v4 != v8 )
        memcpy(v15, v8, v4 - v8);
    }
  }
  return v9;
}
