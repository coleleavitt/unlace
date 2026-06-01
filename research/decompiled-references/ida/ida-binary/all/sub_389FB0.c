const char *__fastcall sub_389FB0(const char *a1, const char *a2, const char *a3, __int64 a4, __int64 a5, __int64 a6)
{
  const char *v6; // rcx
  signed __int64 v7; // rbx
  __int64 v8; // rbp
  char *v9; // r15
  char *v10; // r12
  __int64 v11; // r14
  __m128i v12; // xmm6
  __int64 v13; // r13
  __int64 v14; // rax
  const char *v15; // rsi
  __m128i v16; // xmm7
  __m128i v17; // xmm0
  __int64 v18; // rdi
  const char *v19; // rsi
  const char *v20; // rdi
  __int64 v21; // rax
  __m128i v22; // xmm3
  __m128i v23; // xmm1
  char *v24; // r12
  const char **v25; // r15
  __int64 v26; // r14
  __int64 v27; // r13
  __int64 v28; // rax
  __m128i v29; // xmm2
  __m128i v30; // xmm6
  const char *v31; // rsi
  __m128i v32; // xmm0
  const char *v33; // rdi
  const char *v34; // rsi
  const char *v35; // rdi
  __m128i v36; // xmm7
  __int64 v37; // rax
  __m128i v38; // xmm3
  const char *v40; // rbx
  __int128 v41; // xmm0
  char *v42; // rax
  __int64 v43; // r12
  __int64 v44; // rbp
  __m128i v45; // xmm2
  __m128i v46; // xmm1
  __int64 v47; // r13
  __m128i v48; // xmm3
  __int64 v49; // rdi
  __int64 v50; // rdi
  const char *v51; // rax
  __m128i v52; // [rsp+0h] [rbp-B8h] BYREF
  __m128i v53; // [rsp+10h] [rbp-A8h] BYREF
  __m128i v54; // [rsp+20h] [rbp-98h] BYREF
  __m128i v55; // [rsp+30h] [rbp-88h] BYREF
  __m128i v56; // [rsp+40h] [rbp-78h] BYREF
  unsigned __int64 v57; // [rsp+58h] [rbp-60h]
  const char *v58; // [rsp+60h] [rbp-58h]
  char *v59; // [rsp+68h] [rbp-50h]
  const char *v60; // [rsp+70h] [rbp-48h]
  const char *v61; // [rsp+78h] [rbp-40h]

  v59 = (char *)a1;
  v60 = a2;
  v61 = a3;
  if ( a1 == a2 )
    return v61;
  if ( a2 == a3 )
    return v59;
  v6 = (const char *)(a2 - a1);
  v58 = a1;
  v7 = 0xAAAAAAAAAAAAAAABLL * ((a2 - a1) >> 4);
  v57 = 0xAAAAAAAAAAAAAAABLL * ((a3 - a1) >> 4);
  if ( v7 == v57 - v7 )
  {
    v40 = a2;
    v41 = 0;
    do
    {
      v42 = v59;
      v43 = *(_QWORD *)v59;
      v44 = *((_QWORD *)v59 + 3);
      *(_QWORD *)v59 = 0;
      v45 = _mm_loadu_si128((const __m128i *)(v42 + 8));
      v46 = _mm_loadu_si128((const __m128i *)v42 + 2);
      *(_OWORD *)(v42 + 8) = v41;
      v47 = *(_QWORD *)v40;
      v48 = _mm_loadu_si128((const __m128i *)(v40 + 8));
      *(_QWORD *)v40 = 0;
      *(_OWORD *)(v40 + 8) = v41;
      v49 = *(_QWORD *)v42;
      if ( *(_QWORD *)v42 )
      {
        *((_QWORD *)v42 + 1) = 0;
        qfree(v49, a2, a3, v6, a5, a6, *(_OWORD *)&v46, *(_OWORD *)&v48, *(_OWORD *)&v45);
        v45 = _mm_load_si128(&v54);
        v48 = _mm_load_si128(&v53);
        v41 = 0;
        v46 = _mm_load_si128(&v52);
      }
      v6 = v59;
      *(_QWORD *)v59 = v47;
      *(__m128i *)(v6 + 8) = v48;
      *((_QWORD *)v6 + 3) = *((_QWORD *)v40 + 3);
      *((_QWORD *)v6 + 4) = *((_QWORD *)v40 + 4);
      *((_QWORD *)v6 + 5) = *((_QWORD *)v40 + 5);
      v50 = *(_QWORD *)v40;
      if ( *(_QWORD *)v40 )
      {
        *((_QWORD *)v40 + 1) = 0;
        qfree(v50, a2, a3, v6, a5, a6, *(double *)&v41, *(_OWORD *)&v46, *(_OWORD *)&v45);
        v45 = _mm_load_si128(&v53);
        v46 = _mm_load_si128(&v52);
        v41 = 0;
      }
      v59 += 48;
      v40 += 48;
      v51 = v59;
      *((_QWORD *)v40 - 6) = v43;
      *(__m128i *)(v40 - 40) = v45;
      *((_QWORD *)v40 - 3) = v44;
      *((__m128i *)v40 - 1) = v46;
    }
    while ( v60 != v51 );
    return v60;
  }
  else
  {
    v8 = v57 - v7;
    if ( v7 >= (__int64)(v57 - v7) )
      goto LABEL_16;
    while ( 1 )
    {
      v9 = (char *)v58;
      v10 = (char *)&v58[48 * v7];
      if ( v8 > 0 )
      {
        v11 = 0;
        do
        {
          v12 = _mm_loadu_si128((const __m128i *)(v9 + 8));
          v13 = *(_QWORD *)v9;
          *(_QWORD *)v9 = 0;
          *(_OWORD *)(v9 + 8) = 0;
          v14 = *((_QWORD *)v9 + 3);
          v15 = *(const char **)v10;
          v16 = _mm_loadu_si128((const __m128i *)v9 + 2);
          v17 = _mm_loadu_si128((const __m128i *)(v10 + 8));
          *(_OWORD *)(v10 + 8) = 0;
          *(_QWORD *)v10 = 0;
          v18 = *(_QWORD *)v9;
          v52.m128i_i64[0] = v14;
          v54 = v12;
          v53 = v16;
          if ( v18 )
          {
            *((_QWORD *)v9 + 1) = 0;
            v55.m128i_i64[0] = (__int64)v15;
            v56 = v17;
            qfree(v18, v15);
            v17 = _mm_load_si128(&v56);
            v15 = (const char *)v55.m128i_i64[0];
          }
          *(_QWORD *)v9 = v15;
          *(__m128i *)(v9 + 8) = v17;
          *((_QWORD *)v9 + 3) = *((_QWORD *)v10 + 3);
          *((_QWORD *)v9 + 4) = *((_QWORD *)v10 + 4);
          v19 = *((const char **)v10 + 5);
          *((_QWORD *)v9 + 5) = v19;
          v20 = *(const char **)v10;
          if ( *(_QWORD *)v10 )
          {
            *((_QWORD *)v10 + 1) = 0;
            qfree(v20, v19);
          }
          v21 = v52.m128i_i64[0];
          ++v11;
          *(_QWORD *)v10 = v13;
          v9 += 48;
          v22 = _mm_load_si128(&v54);
          v23 = _mm_load_si128(&v53);
          v10 += 48;
          *((_QWORD *)v10 - 3) = v21;
          *(__m128i *)(v10 - 40) = v22;
          *((__m128i *)v10 - 1) = v23;
        }
        while ( v8 != v11 );
        v58 += 48 * v8;
      }
      if ( !(v57 % v7) )
        break;
      v8 = v7;
      v7 -= v57 % v7;
      while ( 1 )
      {
        v57 = v8;
        v8 -= v7;
        if ( v7 < v8 )
          break;
LABEL_16:
        v24 = (char *)&v58[48 * v57];
        v58 = &v24[-48 * v8];
        if ( v7 > 0 )
        {
          v25 = (const char **)&v24[-48 * v8];
          v26 = 0;
          do
          {
            v24 -= 48;
            v27 = (__int64)*(v25 - 6);
            v28 = (__int64)*(v25 - 3);
            v29 = _mm_loadu_si128((const __m128i *)(v25 - 5));
            *(v25 - 6) = nullptr;
            v25 -= 6;
            *(_OWORD *)(v25 + 1) = 0;
            v30 = _mm_loadu_si128((const __m128i *)v25 + 2);
            v31 = *(const char **)v24;
            v32 = _mm_loadu_si128((const __m128i *)(v24 + 8));
            *(_QWORD *)v24 = 0;
            *(_OWORD *)(v24 + 8) = 0;
            v33 = *v25;
            v52.m128i_i64[0] = v28;
            v53 = v29;
            v54 = v30;
            if ( v33 )
            {
              v25[1] = nullptr;
              v56.m128i_i64[0] = (__int64)v31;
              v55 = v32;
              qfree(v33, v31);
              v31 = (const char *)v56.m128i_i64[0];
              v32 = _mm_load_si128(&v55);
            }
            *v25 = v31;
            *(__m128i *)(v25 + 1) = v32;
            v25[3] = *((const char **)v24 + 3);
            v25[4] = *((const char **)v24 + 4);
            v34 = *((const char **)v24 + 5);
            v25[5] = v34;
            v35 = *(const char **)v24;
            if ( *(_QWORD *)v24 )
            {
              *((_QWORD *)v24 + 1) = 0;
              qfree(v35, v34);
            }
            v36 = _mm_load_si128(&v53);
            v37 = v52.m128i_i64[0];
            ++v26;
            *(_QWORD *)v24 = v27;
            v38 = _mm_load_si128(&v54);
            *((_QWORD *)v24 + 3) = v37;
            *(__m128i *)(v24 + 8) = v36;
            *((__m128i *)v24 + 2) = v38;
          }
          while ( v7 != v26 );
          v58 -= 48 * v7;
        }
        v7 = v57 % v8;
        if ( !(v57 % v8) )
          return &v59[v61 - v60];
      }
    }
    return &v59[v61 - v60];
  }
}
