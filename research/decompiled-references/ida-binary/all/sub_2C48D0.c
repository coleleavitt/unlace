__int64 __fastcall sub_2C48D0(
        __int64 a1,
        __int64 a2,
        const void *a3,
        double a4,
        __m128 a5,
        __m128 a6,
        __m128 a7,
        double a8,
        double a9,
        __m128 a10,
        __m128 a11)
{
  const char *v11; // rsi
  __int64 v13; // rbx
  size_t v14; // rax
  __int64 v15; // r13
  __int64 v16; // r12
  __int64 v17; // r15
  __int64 v18; // rsi
  __m128i v19; // xmm0
  __m128i v20; // xmm0
  __int64 v21; // rdi
  double v23; // xmm4_8
  double v24; // xmm5_8
  void *v25; // r13
  __int64 v26; // rbx
  __int64 v27; // rax
  unsigned __int64 v28; // r15
  __int64 v29; // rdi
  __m128i v30; // xmm0
  size_t v31; // rax
  size_t v32; // r12
  unsigned int v33; // r13d
  __int64 v34; // rdi
  __int64 v35; // r12
  __int64 v36; // rbp
  __int64 *v37; // rbx
  __int64 v38; // rdi
  __int64 v39; // rdi
  void *v41; // rdi
  size_t v42; // r15
  __int64 v43; // rax
  __m128i v44; // [rsp+0h] [rbp-98h] BYREF
  size_t n; // [rsp+10h] [rbp-88h]
  __int64 v46; // [rsp+18h] [rbp-80h]
  __int64 v47; // [rsp+20h] [rbp-78h] BYREF
  __int128 v48; // [rsp+28h] [rbp-70h]
  unsigned int *v49; // [rsp+40h] [rbp-58h] BYREF
  __int128 v50; // [rsp+48h] [rbp-50h]
  unsigned __int64 v51; // [rsp+58h] [rbp-40h]

  v46 = a1;
  v44.m128i_i64[0] = a2;
  v11 = nullptr;
  v51 = __readfsqword(0x28u);
  v48 = 0;
  v47 = 0;
  v13 = qvector_reserve(&v47, 0, 1, 48);
  v14 = *((_QWORD *)&v48 + 1);
  *((_QWORD *)&v48 + 1) = 0;
  v15 = v47;
  n = v14;
  v16 = v48 - 1;
  if ( (__int64)v48 - 1 >= 0 )
  {
    v17 = v13;
    a5 = 0;
    do
    {
      v18 = *(_QWORD *)v15;
      v19 = _mm_loadu_si128((const __m128i *)(v15 + 8));
      *(_QWORD *)v15 = 0;
      *(__m128 *)(v15 + 8) = a5;
      *(_QWORD *)v17 = v18;
      *(__m128i *)(v17 + 8) = v19;
      v11 = *(const char **)(v15 + 24);
      v20 = _mm_loadu_si128((const __m128i *)(v15 + 32));
      *(_QWORD *)(v15 + 24) = 0;
      *(_QWORD *)(v17 + 24) = v11;
      *(__m128i *)(v17 + 32) = v20;
      v21 = *(_QWORD *)v15;
      *(_QWORD *)(v15 + 40) = 0;
      if ( v21 )
      {
        *(_QWORD *)(v15 + 8) = 0;
        qfree(v21, v11);
        a5 = 0;
      }
      v15 += 48;
      v17 += 48;
    }
    while ( v16-- != 0 );
    v15 = v47;
  }
  qfree(v15, v11);
  v47 = v13;
  v25 = nullptr;
  *((_QWORD *)&v48 + 1) = n;
  v26 = 48 * v48 + v13;
  v27 = v44.m128i_i64[0];
  *(_QWORD *)v26 = 0;
  *(_OWORD *)(v26 + 8) = 0;
  *(_QWORD *)(v26 + 24) = 0;
  *(_OWORD *)(v26 + 32) = 0;
  v28 = *(_QWORD *)(v27 + 8);
  *(_QWORD *)&v48 = v48 + 1;
  if ( v28 )
  {
    n = 4 * v28;
    v25 = (void *)qalloc_or_throw(4 * v28);
    v11 = *(const char **)v44.m128i_i64[0];
    memcpy(v25, *(const void **)v44.m128i_i64[0], 4 * v28);
  }
  v29 = *(_QWORD *)v26;
  v30 = _mm_unpacklo_epi64((__m128i)v28, (__m128i)v28);
  if ( *(_QWORD *)v26 )
  {
    *(_QWORD *)(v26 + 8) = 0;
    v44 = v30;
    qfree(v29, v11);
    v30 = _mm_load_si128(&v44);
  }
  *(_QWORD *)v26 = v25;
  *(__m128i *)(v26 + 8) = v30;
  if ( a3 && (v31 = strlen((const char *)a3), (v32 = v31) != 0) )
  {
    v41 = *(void **)(v26 + 24);
    v42 = v31 + 1;
    if ( *(_QWORD *)(v26 + 40) < v31 + 1 )
    {
      v43 = qvector_reserve(v26 + 24, *(_QWORD *)(v26 + 24), v42, 1);
      *(_QWORD *)(v26 + 24) = v43;
      v41 = (void *)v43;
    }
    *(_QWORD *)(v26 + 32) = v42;
    memmove(v41, a3, v32);
    *(_BYTE *)(*(_QWORD *)(v26 + 24) + v32) = 0;
  }
  else
  {
    *(_QWORD *)(v26 + 32) = 0;
  }
  v49 = nullptr;
  v50 = 0;
  if ( (unsigned __int8)sub_2C4650(v46, (__int64 *)&v49, &v47, (__m128)0LL, a5, a6, a7, v23, v24, a10, a11) )
    v33 = *v49;
  else
    v33 = -1;
  if ( v49 )
  {
    *(_QWORD *)&v50 = 0;
    qfree(v49, (const char *)&v49);
  }
  v34 = v47;
  if ( v47 )
  {
    v35 = v48;
    if ( (_QWORD)v48 )
    {
      v36 = 0;
      do
      {
        v37 = (__int64 *)(v34 + 48 * v36);
        v38 = v37[3];
        if ( v38 )
        {
          v37[4] = 0;
          qfree(v38, (const char *)&v49);
        }
        v39 = *v37;
        if ( *v37 )
        {
          v37[1] = 0;
          qfree(v39, (const char *)&v49);
        }
        ++v36;
        v34 = v47;
      }
      while ( v35 != v36 );
    }
    *(_QWORD *)&v48 = 0;
    qfree(v34, (const char *)&v49);
  }
  return v33;
}
