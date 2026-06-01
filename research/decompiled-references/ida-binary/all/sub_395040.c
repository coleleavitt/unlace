__int64 *__fastcall sub_395040(
        const char *a1,
        const char *a2,
        __int64 a3,
        __int64 a4,
        __int64 *a5,
        unsigned __int8 (__fastcall *a6)(__int64, const char *))
{
  const char *v7; // r13
  const char *v10; // rbx
  __int64 v12; // rax
  __m128i v13; // xmm0
  __int64 v14; // rdi
  __int64 v15; // rax
  __m128i v16; // xmm0
  __int64 v17; // rdi
  __int64 v18; // r13
  unsigned __int64 v19; // r15
  __int64 *v20; // r13
  __int128 v21; // xmm1
  __int64 v22; // rdx
  __m128i v23; // xmm0
  __int64 v24; // rdi
  unsigned __int64 v25; // r15
  __int64 v26; // r14
  unsigned __int64 v27; // r15
  unsigned __int64 v28; // r13
  __int64 *v29; // rbx
  __int128 v30; // xmm1
  __int64 v31; // r14
  __m128i v32; // xmm0
  __int64 v33; // rdi
  __int64 v34; // r15
  __m128i v36; // [rsp+0h] [rbp-68h] BYREF
  __m128i v37; // [rsp+10h] [rbp-58h] BYREF
  unsigned __int64 v38; // [rsp+28h] [rbp-40h]

  v7 = a2;
  v10 = a1;
  if ( a1 != a2 )
  {
    while ( a3 != a4 )
    {
      a2 = v10;
      if ( a6(a3, v10) )
      {
        v12 = *(_QWORD *)a3;
        v13 = _mm_loadu_si128((const __m128i *)(a3 + 8));
        *(_QWORD *)a3 = 0;
        *(_OWORD *)(a3 + 8) = 0;
        v14 = *a5;
        if ( *a5 )
        {
          a5[1] = 0;
          v36.m128i_i64[0] = v12;
          v37 = v13;
          qfree(v14, v10);
          v13 = _mm_load_si128(&v37);
          v12 = v36.m128i_i64[0];
        }
        *a5 = v12;
        a3 += 48;
        a5 += 6;
        *(__m128i *)(a5 - 5) = v13;
        *(a5 - 3) = *(_QWORD *)(a3 - 24);
        *(a5 - 2) = *(_QWORD *)(a3 - 16);
        *(a5 - 1) = *(_QWORD *)(a3 - 8);
        if ( v10 == v7 )
          break;
      }
      else
      {
        v15 = *(_QWORD *)v10;
        v16 = _mm_loadu_si128((const __m128i *)(v10 + 8));
        *(_QWORD *)v10 = 0;
        *(_OWORD *)(v10 + 8) = 0;
        v17 = *a5;
        if ( *a5 )
        {
          a5[1] = 0;
          v36.m128i_i64[0] = v15;
          v37 = v16;
          qfree(v17, v10);
          v16 = _mm_load_si128(&v37);
          v15 = v36.m128i_i64[0];
        }
        *a5 = v15;
        v10 += 48;
        a5 += 6;
        *(__m128i *)(a5 - 5) = v16;
        *(a5 - 3) = *((_QWORD *)v10 - 3);
        *(a5 - 2) = *((_QWORD *)v10 - 2);
        *(a5 - 1) = *((_QWORD *)v10 - 1);
        if ( v10 == v7 )
          break;
      }
    }
  }
  v18 = v7 - v10;
  v19 = 0xAAAAAAAAAAAAAAABLL * (v18 >> 4);
  v38 = v19;
  if ( v18 > 0 )
  {
    v20 = a5;
    v21 = 0;
    do
    {
      v22 = *(_QWORD *)v10;
      v23 = _mm_loadu_si128((const __m128i *)(v10 + 8));
      *(_QWORD *)v10 = 0;
      *(_OWORD *)(v10 + 8) = v21;
      v24 = *v20;
      if ( *v20 )
      {
        v20[1] = 0;
        v36.m128i_i64[0] = v22;
        v37 = v23;
        qfree(v24, a2);
        v23 = _mm_load_si128(&v37);
        v22 = v36.m128i_i64[0];
        v21 = 0;
      }
      *v20 = v22;
      v10 += 48;
      v20 += 6;
      *(__m128i *)(v20 - 5) = v23;
      *(v20 - 3) = *((_QWORD *)v10 - 3);
      *(v20 - 2) = *((_QWORD *)v10 - 2);
      *(v20 - 1) = *((_QWORD *)v10 - 1);
      --v19;
    }
    while ( v19 );
    v25 = v38 - 1;
    if ( (__int64)(v38 - 1) < 0 )
      v25 = 0;
    a5 += 6 * v25 + 6;
  }
  v26 = a4 - a3;
  v27 = 0xAAAAAAAAAAAAAAABLL * (v26 >> 4);
  if ( v26 > 0 )
  {
    v28 = 0xAAAAAAAAAAAAAAABLL * (v26 >> 4);
    v29 = a5;
    v30 = 0;
    do
    {
      v31 = *(_QWORD *)a3;
      v32 = _mm_loadu_si128((const __m128i *)(a3 + 8));
      *(_OWORD *)(a3 + 8) = v30;
      *(_QWORD *)a3 = 0;
      v33 = *v29;
      if ( *v29 )
      {
        v29[1] = 0;
        v36 = v32;
        qfree(v33, a2);
        v32 = _mm_load_si128(&v36);
        v30 = 0;
      }
      *v29 = v31;
      a3 += 48;
      v29 += 6;
      *(__m128i *)(v29 - 5) = v32;
      *(v29 - 3) = *(_QWORD *)(a3 - 24);
      *(v29 - 2) = *(_QWORD *)(a3 - 16);
      *(v29 - 1) = *(_QWORD *)(a3 - 8);
      --v28;
    }
    while ( v28 );
    v34 = v27 - 1;
    if ( v34 < 0 )
      v34 = 0;
    a5 += 6 * v34 + 6;
  }
  return a5;
}
