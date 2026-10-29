char __fastcall sub_E73540(
        __m128i *a1,
        const __m128i *a2,
        const __m128i *a3,
        __int64 a4,
        __int64 a5,
        const __m128i *a6,
        char **a7)
{
  __m128i *v7; // r13
  const __m128i *v10; // rbx
  char *v11; // r9
  __int64 v12; // rcx
  unsigned __int64 v13; // rdi
  __int64 v14; // rax
  __m128i *v15; // r14
  __int64 v16; // rax
  unsigned __int64 v17; // rdi
  const __m128i *v18; // r15
  __m128i v19; // xmm0
  __m128i v20; // xmm1
  unsigned int v21; // ecx
  unsigned int v22; // edx
  unsigned int v23; // esi
  char v24; // dl
  __int64 v25; // rcx
  unsigned __int64 v26; // rdi
  __int64 v27; // rax
  unsigned __int64 v28; // rdi
  __int64 v29; // r14
  const __m128i *v30; // rbx
  __int64 *i; // rdx
  __m128i v32; // xmm0
  __m128i v33; // xmm1
  unsigned int v34; // r8d
  unsigned int v35; // esi
  unsigned int v36; // ecx
  unsigned int v37; // edi
  char v38; // si
  bool v39; // cl
  __int64 v40; // rsi
  unsigned __int64 v41; // rdi
  unsigned __int64 v42; // rcx
  __int64 v43; // rcx
  __m128d v44; // xmm0
  unsigned __int64 v45; // rdi
  __int64 v46; // rdi
  __int64 v47; // r15
  __int64 v48; // rdx
  unsigned __int64 v49; // rcx
  unsigned __int64 v50; // rcx
  __int64 v51; // rcx
  const __m128i *v52; // rdi
  __int64 *v53; // rdx
  __int64 v54; // r8
  const __m128i *v55; // rdi
  __int64 *v56; // rdx
  __int64 v57; // r8
  unsigned __int64 v58; // rcx
  unsigned __int64 v59; // rdx
  __m128d v60; // xmm0
  unsigned __int64 v61; // rcx
  __int64 *v62; // rdx
  __int8 *v63; // rcx
  __int64 v64; // rdx
  char *v66; // [rsp+10h] [rbp-48h] BYREF
  char *v67; // [rsp+18h] [rbp-40h] BYREF

  v7 = a1;
  v10 = a2;
  v11 = *a7;
  if ( a4 <= a5 )
  {
    v12 = (char *)a2 - (char *)a1;
    v13 = ((char *)a2 - (char *)a1) >> 3;
    v14 = v13;
    if ( v12 <= 0 )
    {
      if ( !v11 )
        return v14;
      v66 = nullptr;
      LOBYTE(v14) = (unsigned __int8)sub_C7B020(&v66, a7);
      v11 = v66;
      goto LABEL_23;
    }
    v15 = (__m128i *)&v7->m128i_u64[1];
    if ( (unsigned __int64)((char *)a6 - (char *)&v7->m128i_u64[1] + 4) <= 8 )
    {
      v52 = a6;
      v53 = (__int64 *)v7;
      do
      {
        v54 = *v53;
        v52 = (const __m128i *)((char *)v52 + 8);
        ++v53;
        v52[-1].m128i_i64[1] = v54;
        --v14;
      }
      while ( v14 );
      goto LABEL_10;
    }
    if ( v12 <= 8 )
    {
      v17 = 0;
    }
    else
    {
      v16 = 0;
      do
      {
        a6[v16] = _mm_loadu_si128(&v7[v16]);
        ++v16;
      }
      while ( v16 != v13 >> 1 );
      if ( (v13 & 1) == 0 )
        goto LABEL_10;
      v17 = v13 & 0xFFFFFFFFFFFFFFFELL;
    }
    a6->m128i_i64[v17] = v7->m128i_i64[v17];
LABEL_10:
    v14 = (__int64)&a6->m128i_i64[1];
    v18 = (const __m128i *)((char *)a6 + v12);
    if ( v11 )
    {
      v66 = nullptr;
      LOBYTE(v14) = (unsigned __int8)sub_C7B020(&v66, a7);
      v11 = v66;
      if ( v18 != a6 && a2 != a3 )
        goto LABEL_18;
LABEL_67:
      if ( v18 == a6 )
        goto LABEL_23;
      v47 = (char *)v18 - (char *)a6;
      v48 = v47 >> 3;
      if ( v47 <= 0 )
        goto LABEL_23;
      v14 = (__int64)&a6->m128i_i64[1];
LABEL_70:
      if ( (unsigned __int64)v7->m128i_u64 - v14 + 4 <= 8 )
      {
        while ( 1 )
        {
          v51 = a6->m128i_i64[0];
          v7 = (__m128i *)((char *)v7 + 8);
          a6 = (const __m128i *)v14;
          v7[-1].m128i_i64[1] = v51;
          if ( !--v48 )
            break;
          v14 += 8;
        }
      }
      else
      {
        v49 = 1;
        if ( v48 )
          v49 = v48;
        if ( v48 <= 1 )
        {
          v50 = 0;
          goto LABEL_78;
        }
        v14 = 0;
        do
        {
          *(__m128i *)((char *)v7 + v14) = _mm_loadu_si128((const __m128i *)((char *)a6 + v14));
          v14 += 16;
        }
        while ( 16 * (v49 >> 1) != v14 );
        if ( (v49 & 1) != 0 )
        {
          v50 = v49 & 0xFFFFFFFFFFFFFFFELL;
LABEL_78:
          v14 = a6->m128i_i64[v50];
          v7->m128i_i64[v50] = v14;
        }
      }
LABEL_23:
      if ( v11 )
        LOBYTE(v14) = sub_186B220(v11 - 8);
      return v14;
    }
    if ( v18 == a6 || a2 == a3 )
    {
      if ( v18 == a6 )
        return v14;
      v48 = v12 >> 3;
      goto LABEL_70;
    }
    while ( 1 )
    {
LABEL_18:
      v19 = _mm_loadl_epi64(v10);
      v20 = _mm_loadl_epi64(a6);
      v21 = _mm_cvtsi128_si32(_mm_shuffle_epi32(v19, 229));
      v22 = _mm_cvtsi128_si32(v19);
      LODWORD(v14) = _mm_cvtsi128_si32(v20);
      v23 = _mm_cvtsi128_si32(_mm_shuffle_epi32(v20, 229));
      if ( v21 )
      {
        if ( !v23
          || ((v24 = v11[v22], LOBYTE(v14) = v11[(unsigned int)v14] != 0, v24) || !(_BYTE)v14)
          && ((v24 != 0) != (_BYTE)v14 || v21 >= v23) )
        {
LABEL_15:
          a6 = (const __m128i *)((char *)a6 + 8);
          v7->m128i_i64[0] = v20.m128i_i64[0];
          v7 = v15;
          if ( v18 == a6 )
            goto LABEL_23;
          goto LABEL_16;
        }
      }
      else if ( !v23 && v22 >= (unsigned int)v14 )
      {
        goto LABEL_15;
      }
      v7->m128i_i64[0] = v19.m128i_i64[0];
      v10 = (const __m128i *)((char *)v10 + 8);
      v7 = v15;
      if ( v18 == a6 )
        goto LABEL_23;
LABEL_16:
      if ( a3 == v10 )
        goto LABEL_67;
      v15 = (__m128i *)((char *)v15 + 8);
    }
  }
  v25 = (char *)a3 - (char *)a2;
  v26 = ((char *)a3 - (char *)a2) >> 3;
  v14 = v26;
  if ( (char *)a3 - (char *)a2 <= 0 )
  {
    v29 = (__int64)a6;
    if ( !v11 )
      return v14;
    goto LABEL_36;
  }
  if ( (unsigned __int64)((char *)a6 - (char *)a2 - 4) <= 8 )
  {
    v55 = a6;
    v56 = (__int64 *)a2;
    do
    {
      v57 = *v56;
      v55 = (const __m128i *)((char *)v55 + 8);
      ++v56;
      v55[-1].m128i_i64[1] = v57;
      --v14;
    }
    while ( v14 );
  }
  else
  {
    if ( v25 <= 8 )
    {
      v28 = 0;
      goto LABEL_32;
    }
    v27 = 0;
    do
    {
      a6[v27] = _mm_loadu_si128(&a2[v27]);
      ++v27;
    }
    while ( v26 >> 1 != v27 );
    if ( (v26 & 1) != 0 )
    {
      v28 = v26 & 0xFFFFFFFFFFFFFFFELL;
LABEL_32:
      a6->m128i_i64[v28] = a2->m128i_i64[v28];
    }
  }
  v14 = v25 - 8;
  if ( !v25 )
    v14 = 0;
  v29 = (__int64)&a6->m128i_i64[1] + v14;
  if ( v11 )
  {
LABEL_36:
    v67 = nullptr;
    LOBYTE(v14) = (unsigned __int8)sub_C7B020(&v67, a7);
    v11 = v67;
    if ( a2 != v7 )
    {
      if ( a6 == (const __m128i *)v29 )
        goto LABEL_58;
LABEL_38:
      v30 = (const __m128i *)((char *)a2 - 8);
      v14 = v29 - 8;
      for ( i = &a3[-1].m128i_i64[1]; ; --i )
      {
        v32 = _mm_loadl_epi64((const __m128i *)v14);
        v33 = _mm_loadl_epi64(v30);
        v34 = _mm_cvtsi128_si32(_mm_shuffle_epi32(v32, 229));
        v35 = _mm_cvtsi128_si32(v32);
        v36 = _mm_cvtsi128_si32(v33);
        v37 = _mm_cvtsi128_si32(_mm_shuffle_epi32(v33, 229));
        if ( v34 )
        {
          if ( !v37 || ((v38 = v11[v35], v39 = v11[v36] != 0, v38) || !v39) && ((v38 != 0) != v39 || v34 >= v37) )
          {
LABEL_41:
            *i = v32.m128i_i64[0];
            if ( a6 == (const __m128i *)v14 )
              goto LABEL_58;
            v14 -= 8;
            continue;
          }
        }
        else if ( !v37 && v35 >= v36 )
        {
          goto LABEL_41;
        }
        *i = v33.m128i_i64[0];
        if ( v7 == v30 )
        {
          v40 = v14 + 8;
          v41 = (v14 + 8 - (__int64)a6) >> 3;
          v42 = v41;
          if ( v14 + 8 - (__int64)a6 > 0 )
          {
            if ( (unsigned __int64)i - v14 + 4 <= 8 )
            {
              v62 = &i[-v41];
              do
              {
                v14 = *(_QWORD *)(v40 - 8);
                v40 -= 8;
                v62[--v42] = v14;
              }
              while ( v42 );
            }
            else if ( v14 + 8 - (__int64)a6 <= 8 )
            {
              v45 = 0;
LABEL_57:
              v46 = -(__int64)v45;
              v14 = *(_QWORD *)(v14 + 8 * v46);
              i[v46 - 1] = v14;
            }
            else
            {
              v43 = 0;
              do
              {
                v44 = (__m128d)_mm_loadh_ps((const double *)(v14 + v43 * 8 - 8));
                *(__m128d *)&i[v43 - 2] = _mm_shuffle_pd(v44, v44, 1);
                v43 -= 2;
              }
              while ( 0x1FFFFFFFFFFFFFFELL * (v41 >> 1) != v43 );
              if ( (v41 & 1) != 0 )
              {
                v45 = v41 & 0xFFFFFFFFFFFFFFFELL;
                goto LABEL_57;
              }
            }
          }
          goto LABEL_58;
        }
        v30 = (const __m128i *)((char *)v30 - 8);
      }
    }
    v14 = (v29 - (__int64)a6) >> 3;
    if ( v29 - (__int64)a6 <= 0 )
      goto LABEL_58;
    goto LABEL_99;
  }
  if ( a2 != v7 )
  {
    if ( a6 == (const __m128i *)v29 )
      return v14;
    goto LABEL_38;
  }
  v14 = (v14 + 8) >> 3;
  if ( v29 - (__int64)a6 <= 0 )
    return v14;
LABEL_99:
  if ( (unsigned __int64)&a3->m128i_u64[1] - v29 + 4 <= 8 )
  {
    v63 = &a3->m128i_i8[-8 * v14];
    do
    {
      v64 = *(_QWORD *)(v29 - 8);
      v29 -= 8;
      *(_QWORD *)&v63[8 * v14-- - 8] = v64;
    }
    while ( v14 );
    goto LABEL_58;
  }
  v58 = 1;
  if ( v14 )
    v58 = v14;
  if ( v14 <= 1 )
  {
    v61 = 0;
  }
  else
  {
    v59 = 0;
    v14 = -16LL * (v58 >> 1);
    do
    {
      v60 = (__m128d)_mm_loadh_ps((const double *)(v29 + v59 - 16));
      a3[v59 / 0x10 - 1] = (const __m128i)_mm_shuffle_pd(v60, v60, 1);
      v59 -= 16LL;
    }
    while ( v14 != v59 );
    if ( (v58 & 1) == 0 )
      goto LABEL_58;
    v61 = v58 & 0xFFFFFFFFFFFFFFFELL;
  }
  v14 = 8 * ~v61;
  *(__int64 *)((char *)a3->m128i_i64 + v14) = *(_QWORD *)(v29 + v14);
LABEL_58:
  if ( v11 )
    LOBYTE(v14) = sub_186B220(v11 - 8);
  return v14;
}

