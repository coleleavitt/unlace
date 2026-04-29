unsigned __int64 __fastcall sub_340580(__int64 *a1, const char *a2)
{
  __int64 v3; // rdx
  const char *v4; // r13
  __int64 v5; // r12
  __int64 i; // rbp
  __int64 *v7; // rax
  __int64 v8; // rdi
  size_t v9; // rax
  size_t v10; // r12
  size_t v11; // rbp
  __int64 j; // rax
  void *v13; // r13
  __m128i v14; // xmm0
  __m128i v15; // xmm1
  __int64 v16; // rax
  void *v17; // rdi
  const char *v18; // rax
  const char *v19; // r13
  size_t v20; // r14
  unsigned __int64 v21; // rdx
  unsigned __int64 v22; // rdi
  __m128i v23; // xmm0
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // r12
  __int64 v27; // rbx
  unsigned __int64 v28; // rbp
  unsigned __int64 v29; // rax
  unsigned __int64 v30; // rdx
  __int64 v31; // rbx
  __int64 v32; // rdi
  __int64 v34; // rax
  __int64 v35; // rsi
  __int64 v36; // rax
  __m128i v37; // [rsp+0h] [rbp-98h] BYREF
  char v38[8]; // [rsp+18h] [rbp-80h] BYREF
  void *v39; // [rsp+20h] [rbp-78h] BYREF
  __int128 v40; // [rsp+28h] [rbp-70h]
  void *v41; // [rsp+40h] [rbp-58h] BYREF
  __m128i v42; // [rsp+48h] [rbp-50h] BYREF
  unsigned __int64 v43; // [rsp+58h] [rbp-40h]

  v3 = *a1;
  v43 = __readfsqword(0x28u);
  v4 = a2;
  if ( v3 )
  {
    v5 = a1[1];
    if ( v5 )
    {
      for ( i = 0; i != v5; ++i )
      {
        v7 = (__int64 *)(v3 + 24 * i);
        v8 = *v7;
        if ( *v7 )
        {
          v7[1] = 0;
          qfree(v8);
          v3 = *a1;
        }
      }
    }
    a1[1] = 0;
    qfree(v3);
    *a1 = 0;
    a1[2] = 0;
  }
  v39 = nullptr;
  v40 = 0;
  if ( a2 )
  {
    v9 = strlen(a2);
    v10 = v9 + 1;
    v11 = v9;
    v39 = (void *)qvector_reserve(&v39, 0, v9 + 1, 1);
    *(_QWORD *)&v40 = v10;
    memmove(v39, a2, v11);
    *((_BYTE *)v39 + v11) = 0;
    v4 = (const char *)v39;
  }
  for ( j = qstrtok(v4, ";", v38); j; j = qstrtok(0, ";", v38) )
  {
    v18 = (const char *)trim(j);
    v19 = v18;
    if ( *v18 )
    {
      v41 = nullptr;
      v42 = 0;
      if ( v18 )
      {
        v20 = strlen(v18);
        v37.m128i_i64[0] = v20 + 1;
        v41 = (void *)qvector_reserve(&v41, 0, v20 + 1, 1);
        v42.m128i_i64[0] = v37.m128i_i64[0];
        memmove(v41, v19, v20);
        *((_BYTE *)v41 + v20) = 0;
      }
      v36 = a1[1];
      v35 = *a1;
      v21 = a1[2];
      v22 = v36 + 1;
      if ( (unsigned __int64)&v41 < *a1 || (unsigned __int64)&v41 >= v35 + 24 * v21 )
      {
        if ( v21 < v22 )
        {
          v25 = qvector_reserve(a1, v35, v36 + 1, 24);
          *a1 = v25;
          v35 = v25;
          v36 = a1[1];
        }
        v23 = _mm_loadu_si128(&v42);
        v24 = v35 + 24 * v36;
        *(_QWORD *)v24 = v41;
        *(__m128i *)(v24 + 8) = v23;
        ++a1[1];
      }
      else
      {
        v13 = v41;
        v14 = _mm_loadl_epi64(&v42);
        v41 = nullptr;
        v15 = _mm_loadl_epi64((const __m128i *)&v42.m128i_u64[1]);
        v42 = 0;
        if ( v21 < v22 )
        {
          v37.m128i_i64[1] = v15.m128i_i64[0];
          v37.m128i_i64[0] = v14.m128i_i64[0];
          v34 = qvector_reserve(a1, v35, v36 + 1, 24);
          *a1 = v34;
          v35 = v34;
          v36 = a1[1];
          v15 = _mm_loadl_epi64((const __m128i *)&v37.m128i_u64[1]);
          v14 = _mm_loadl_epi64(&v37);
        }
        v16 = v35 + 24 * v36;
        *(_QWORD *)v16 = v13;
        v17 = v41;
        *(__m128i *)(v16 + 8) = _mm_unpacklo_epi64(v14, v15);
        ++a1[1];
        if ( v17 )
        {
          v42.m128i_i64[0] = 0;
          qfree(v17);
        }
      }
    }
  }
  v26 = *a1;
  v27 = 24 * a1[1];
  v28 = v26 + v27;
  if ( v26 != v26 + v27 )
  {
    v29 = 0xAAAAAAAAAAAAAAABLL * (v27 >> 3);
    if ( v29 )
    {
      _BitScanReverse64(&v30, v29);
      sub_33FEB0(v26, v28, 2LL * (int)v30);
      if ( v27 > 384 )
      {
        v31 = v26 + 384;
        sub_33AB30(v26, v26 + 384);
        do
        {
          v32 = v31;
          v31 += 24;
          sub_33A370(v32);
        }
        while ( v28 != v31 );
        goto LABEL_30;
      }
    }
    else
    {
      sub_33FEB0(v26, v28, -2);
    }
    sub_33AB30(v26, v28);
  }
LABEL_30:
  if ( v39 )
  {
    *(_QWORD *)&v40 = 0;
    qfree(v39);
  }
  return v43 - __readfsqword(0x28u);
}
