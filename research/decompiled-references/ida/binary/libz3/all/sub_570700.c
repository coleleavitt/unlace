void __fastcall sub_570700(__m128i *a1, char *a2, __int64 a3, double a4, double a5, __m128 a6)
{
  __int64 v6; // r8
  __int64 v7; // r12
  unsigned __int64 *v9; // rdi
  __int64 v10; // rax
  __int64 v11; // r8
  __int64 v12; // rax
  __m128 v13; // xmm0
  unsigned __int64 v14; // rsi
  unsigned __int64 *v15; // rbx
  __int64 *v16; // r8
  unsigned __int64 v17; // rax
  unsigned __int64 v18; // rdx
  unsigned __int64 v19; // rcx
  __m128d v20; // xmm1
  unsigned __int64 v21; // rsi
  unsigned __int64 *v22; // rax
  __int64 v23; // r8
  __int64 *v24; // r11
  __int64 v25; // r10
  __int64 v26; // rsi
  unsigned __int64 v27; // r9
  bool v28; // bl
  __m128i *v29; // r12
  __int64 i; // rcx
  __int64 v31; // rax
  __int64 v32; // rcx
  __int64 *v33; // r12
  __int64 *v34; // rax
  unsigned __int64 v35; // rsi
  __int64 v36; // r8
  __int64 v37; // rbx
  __int64 v38; // r11
  __int64 j; // rcx
  __int64 v40; // rax
  __m128i *v41; // r9
  __int64 v42; // rcx
  __int64 *v43; // r9
  __int64 *v44; // rax
  __int64 v45; // rax
  __int64 v46; // rdx
  __int64 v47; // rcx

  v6 = a2 - (char *)a1;
  v7 = a3;
  v9 = (unsigned __int64 *)a2;
  if ( v6 <= 128 )
    return;
  v10 = v6;
  v11 = v6 >> 4;
  v12 = v10 >> 3;
  if ( a3 )
  {
    do
    {
      v13 = (__m128)_mm_loadu_si128(a1);
      v14 = *(v9 - 1);
      --v7;
      v15 = &a1->m128i_u64[1];
      v16 = &a1->m128i_i64[v11];
      a6 = _mm_movehl_ps(a6, v13);
      v17 = *v16;
      v18 = v13.m128_u64[0];
      v19 = a6.m128_u64[0];
      v20 = _mm_shuffle_pd((__m128d)v13, (__m128d)v13, 1);
      if ( a6.m128_u64[0] >= *v16 )
      {
        if ( a6.m128_u64[0] < v14 )
        {
LABEL_6:
          *(__m128d *)a1 = v20;
          v21 = *(v9 - 1);
          goto LABEL_7;
        }
        if ( v17 < v14 )
          goto LABEL_16;
      }
      else if ( v17 >= v14 )
      {
        if ( a6.m128_u64[0] >= v14 )
          goto LABEL_6;
LABEL_16:
        a1->m128i_i64[0] = v14;
        v21 = v13.m128_u64[0];
        *(v9 - 1) = v13.m128_u64[0];
        v19 = a1->m128i_i64[0];
        v18 = a1->m128i_u64[1];
        goto LABEL_7;
      }
      a1->m128i_i64[0] = v17;
      *v16 = v13.m128_u64[0];
      v18 = a1->m128i_u64[1];
      v19 = a1->m128i_i64[0];
      v21 = *(v9 - 1);
LABEL_7:
      v22 = v9;
      while ( 1 )
      {
        while ( v18 < v19 )
        {
          v18 = v15[1];
          ++v15;
        }
        for ( --v22; v19 < v21; --v22 )
          v21 = *(v22 - 1);
        if ( v15 >= v22 )
          break;
        *v15++ = v21;
        v21 = *(v22 - 1);
        *v22 = v18;
        v18 = *v15;
        v19 = a1->m128i_i64[0];
      }
      sub_570700(v15, v9, v7);
      if ( (char *)v15 - (char *)a1 <= 128 )
        return;
      v9 = v15;
      v11 = ((char *)v15 - (char *)a1) >> 4;
      v12 = ((char *)v15 - (char *)a1) >> 3;
    }
    while ( v7 );
  }
  v23 = v11 - 1;
  v24 = &a1->m128i_i64[v23];
  v25 = (v12 - 1) >> 1;
  v26 = v23;
  v27 = *v24;
  v28 = (v12 & 1) == 0;
  v29 = (__m128i *)v24;
  if ( v23 >= v25 )
    goto LABEL_34;
LABEL_20:
  for ( i = v26; ; i = v31 )
  {
    v31 = 2 * (i + 1);
    v29 = &a1[i + 1];
    if ( v29->m128i_i64[0] >= (unsigned __int64)v29[-1].m128i_i64[1] )
      break;
    --v31;
    v29 = (__m128i *)((char *)a1 + 8 * v31);
    a1->m128i_i64[i] = v29->m128i_i64[0];
    if ( v31 >= v25 )
      goto LABEL_25;
LABEL_22:
    ;
  }
  a1->m128i_i64[i] = v29->m128i_i64[0];
  if ( v31 < v25 )
    goto LABEL_22;
LABEL_25:
  if ( v23 == v31 && v28 )
    goto LABEL_56;
LABEL_27:
  v32 = (v31 - 1) >> 1;
  if ( v26 >= v31 )
    goto LABEL_36;
  while ( 1 )
  {
    v33 = &a1->m128i_i64[v32];
    v34 = &a1->m128i_i64[v31];
    if ( *v33 >= v27 )
      break;
    *v34 = *v33;
    v31 = v32;
    if ( v26 >= v32 )
    {
      v34 = &a1->m128i_i64[v32];
      break;
    }
    v32 = (v32 - 1) / 2;
  }
  *v34 = v27;
  if ( v26 )
  {
    while ( 1 )
    {
      --v24;
      --v26;
      v27 = *v24;
      v29 = (__m128i *)v24;
      if ( v26 < v25 )
        goto LABEL_20;
LABEL_34:
      if ( v23 == v26 && v28 )
      {
        v31 = v26;
LABEL_56:
        v45 = 2 * v31 + 2;
        v46 = a1->m128i_i64[v45 - 1];
        v31 = v45 - 1;
        v29->m128i_i64[0] = v46;
        v29 = (__m128i *)((char *)a1 + 8 * v31);
        goto LABEL_27;
      }
LABEL_36:
      v29->m128i_i64[0] = v27;
    }
  }
  if ( (char *)v9 - (char *)a1 > 8 )
  {
LABEL_39:
    while ( 1 )
    {
      v35 = *--v9;
      v36 = (char *)v9 - (char *)a1;
      *v9 = a1->m128i_i64[0];
      v37 = ((char *)v9 - (char *)a1) >> 3;
      v38 = (v37 - 1) / 2;
      if ( (char *)v9 - (char *)a1 > 16 )
        break;
      v44 = (__int64 *)a1;
      if ( (v37 & 1) == 0 && (unsigned __int64)(v37 - 1) <= 2 )
      {
        v41 = a1;
        v40 = 0;
        goto LABEL_62;
      }
LABEL_52:
      *v44 = v35;
      if ( v36 <= 8 )
        return;
    }
    for ( j = 0; ; j = v40 )
    {
      v40 = 2 * (j + 1);
      v41 = &a1[j + 1];
      if ( v41->m128i_i64[0] < (unsigned __int64)v41[-1].m128i_i64[1] )
      {
        --v40;
        v41 = (__m128i *)((char *)a1 + 8 * v40);
        a1->m128i_i64[j] = v41->m128i_i64[0];
        if ( v38 <= v40 )
          goto LABEL_45;
      }
      else
      {
        a1->m128i_i64[j] = v41->m128i_i64[0];
        if ( v38 <= v40 )
        {
LABEL_45:
          if ( (v37 & 1) != 0 || (v37 - 2) >> 1 != v40 )
          {
            v42 = (v40 - 1) / 2;
            if ( v40 )
              goto LABEL_51;
            v41->m128i_i64[0] = v35;
            goto LABEL_39;
          }
LABEL_62:
          v47 = 2 * v40 + 2;
          v41->m128i_i64[0] = a1->m128i_i64[v47 - 1];
          v40 = 2 * v40 + 1;
          v42 = (v47 >> 1) - 1;
LABEL_51:
          while ( 1 )
          {
            v43 = &a1->m128i_i64[v42];
            v44 = &a1->m128i_i64[v40];
            if ( *v43 >= v35 )
              goto LABEL_52;
            *v44 = *v43;
            v40 = v42;
            if ( !v42 )
            {
              *v43 = v35;
              if ( v36 > 8 )
                goto LABEL_39;
              return;
            }
            v42 = (v42 - 1) / 2;
          }
        }
      }
    }
  }
}

