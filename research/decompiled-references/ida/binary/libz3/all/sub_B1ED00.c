void __fastcall sub_B1ED00(__m128i *a1, unsigned int *a2, __int64 a3, __int64 a4)
{
  unsigned int *v5; // rdi
  __int64 v6; // rsi
  __int64 v7; // r14
  __int64 v8; // rbp
  __int64 v10; // rax
  __int64 i; // rsi
  __int32 *v12; // rax
  __m128i v13; // xmm0
  char *v14; // rbx
  double v15; // xmm2_8
  unsigned __int64 v16; // xmm3_8
  unsigned int v17; // edx
  double v18; // xmm0_8
  double v19; // xmm1_8
  unsigned int v20; // ecx
  unsigned int *v21; // rax
  __int64 v22; // rsi
  __int64 v23; // rsi
  __int64 v24; // rsi
  __int32 *v25; // r9
  __int64 v26; // r8
  __int64 v27; // rcx
  unsigned __int32 v28; // r11d
  bool v29; // r10
  __int32 *v30; // r12
  __int64 j; // rbx
  __int64 v32; // rax
  __int64 v33; // r15
  __int64 v34; // rbx
  double v35; // xmm1_8
  __int32 *v36; // rax
  __int64 v37; // r14
  unsigned __int32 v38; // r9d
  __int64 v39; // r8
  __int64 v40; // r12
  __int64 v41; // r11
  __int64 v42; // rcx
  __int64 v43; // rax
  __m128i *v44; // rsi
  __int64 v45; // r14
  __int64 v46; // rcx
  double v47; // xmm1_8
  __int32 *v48; // rsi
  __m128i *v49; // rax
  __int64 v50; // r10
  __int64 v51; // rcx
  __int64 v52; // rax
  __int32 v53; // edx

  v5 = a2;
  v6 = (char *)a2 - (char *)a1;
  if ( v6 <= 64 )
    return;
  v7 = a3;
  v8 = *(_QWORD *)(a4 + 8880);
  v10 = v6 >> 2;
  for ( i = v6 >> 3; v7; v10 = (v14 - (char *)a1) >> 2 )
  {
    v12 = &a1->m128i_i32[i];
    --v7;
    v13 = _mm_loadl_epi64(a1);
    v14 = &a1->m128i_i8[4];
    v15 = *(double *)(v8 + 8LL * *(v5 - 1));
    v16 = _mm_shuffle_epi32(v13, 225).m128i_u64[0];
    v17 = _mm_cvtsi128_si32(v13);
    v18 = *(double *)(v8 + 8LL * a1->m128i_u32[1]);
    v19 = *(double *)(v8 + 8LL * (unsigned int)*v12);
    if ( v18 <= v19 )
    {
      if ( v18 > v15 )
      {
LABEL_6:
        a1->m128i_i64[0] = v16;
        v20 = *(v5 - 1);
        goto LABEL_7;
      }
      if ( v19 > v15 )
        goto LABEL_16;
    }
    else if ( v19 <= v15 )
    {
      if ( v18 <= v15 )
        goto LABEL_6;
LABEL_16:
      a1->m128i_i32[0] = *(v5 - 1);
      v20 = v17;
      *(v5 - 1) = v17;
      v17 = a1->m128i_u32[1];
      v18 = *(double *)(v8 + 8LL * a1->m128i_u32[0]);
      goto LABEL_7;
    }
    a1->m128i_i32[0] = *v12;
    *v12 = v17;
    v17 = a1->m128i_u32[1];
    v20 = *(v5 - 1);
    v18 = *(double *)(v8 + 8LL * a1->m128i_u32[0]);
LABEL_7:
    v21 = v5;
    while ( 1 )
    {
      if ( *(double *)(v8 + 8LL * v17) > v18 )
      {
        do
        {
          v22 = *((unsigned int *)v14 + 1);
          v14 += 4;
          v17 = v22;
        }
        while ( *(double *)(v8 + 8 * v22) > v18 );
      }
      --v21;
      if ( v18 > *(double *)(v8 + 8LL * v20) )
      {
        do
        {
          v23 = *--v21;
          v20 = v23;
        }
        while ( v18 > *(double *)(v8 + 8 * v23) );
      }
      if ( v14 >= (char *)v21 )
        break;
      *(_DWORD *)v14 = v20;
      v14 += 4;
      v20 = *(v21 - 1);
      *v21 = v17;
      v18 = *(double *)(v8 + 8LL * a1->m128i_u32[0]);
      v17 = *(_DWORD *)v14;
    }
    sub_B1ED00(v14, v5, v7, a4);
    if ( v14 - (char *)a1 <= 64 )
      return;
    v5 = (unsigned int *)v14;
    i = (v14 - (char *)a1) >> 3;
  }
  v24 = i - 1;
  v25 = &a1->m128i_i32[v24];
  v26 = (v10 - 1) >> 1;
  v27 = v24;
  v28 = *v25;
  v29 = (v10 & 1) == 0;
  v30 = v25;
  if ( v24 >= v26 )
    goto LABEL_34;
LABEL_20:
  for ( j = v27; ; j = v32 )
  {
    v32 = 2 * (j + 1);
    v30 = &a1->m128i_i32[2 * j + 2];
    v33 = (unsigned int)*v30;
    if ( *(double *)(v8 + 8 * v33) <= *(double *)(v8 + 8LL * (unsigned int)*(v30 - 1)) )
      break;
    v30 = &a1->m128i_i32[--v32];
    a1->m128i_i32[j] = *v30;
    if ( v32 >= v26 )
      goto LABEL_25;
LABEL_22:
    ;
  }
  a1->m128i_i32[j] = v33;
  if ( v32 < v26 )
    goto LABEL_22;
LABEL_25:
  if ( v24 == v32 && v29 )
  {
LABEL_62:
    v52 = 2 * v32 + 2;
    v53 = a1->m128i_i32[v52 - 1];
    v32 = v52 - 1;
    *v30 = v53;
    v30 = &a1->m128i_i32[v32];
  }
  v34 = (v32 - 1) >> 1;
  if ( v27 >= v32 )
  {
    while ( 1 )
    {
      *v30 = v28;
LABEL_33:
      --v25;
      --v27;
      v28 = *v25;
      v30 = v25;
      if ( v27 < v26 )
        goto LABEL_20;
LABEL_34:
      if ( v24 == v27 && v29 )
      {
        v32 = v27;
        goto LABEL_62;
      }
    }
  }
  v35 = *(double *)(v8 + 8LL * v28);
  while ( 1 )
  {
    v36 = &a1->m128i_i32[v32];
    v37 = a1->m128i_u32[v34];
    if ( *(double *)(v8 + 8 * v37) <= v35 )
      break;
    *v36 = v37;
    v32 = v34;
    if ( v27 >= v34 )
    {
      v36 = &a1->m128i_i32[v34];
      break;
    }
    v34 = (v34 - 1) / 2;
  }
  *v36 = v28;
  if ( v27 )
    goto LABEL_33;
  if ( (char *)v5 - (char *)a1 <= 4 )
    return;
LABEL_39:
  while ( 2 )
  {
    while ( 2 )
    {
      v38 = *--v5;
      v39 = (char *)v5 - (char *)a1;
      *v5 = a1->m128i_i32[0];
      v40 = ((char *)v5 - (char *)a1) >> 2;
      v41 = (v40 - 1) / 2;
      if ( (char *)v5 - (char *)a1 <= 8 )
      {
        v49 = a1;
        if ( (v40 & 1) != 0 || (unsigned __int64)(v40 - 1) > 2 )
          goto LABEL_52;
        v44 = a1;
        v43 = 0;
LABEL_60:
        v51 = 2 * v43 + 2;
        v44->m128i_i32[0] = a1->m128i_i32[v51 - 1];
        v43 = 2 * v43 + 1;
        v46 = (v51 >> 1) - 1;
        break;
      }
      v42 = 0;
      while ( 2 )
      {
        v43 = 2 * (v42 + 1);
        v44 = (__m128i *)&a1->m128i_u64[v42 + 1];
        v45 = v44->m128i_u32[0];
        if ( *(double *)(v8 + 8 * v45) > *(double *)(v8 + 8LL * v44[-1].m128i_u32[3]) )
        {
          --v43;
          v44 = (__m128i *)((char *)a1 + 4 * v43);
          a1->m128i_i32[v42] = v44->m128i_i32[0];
          if ( v41 <= v43 )
            break;
          goto LABEL_42;
        }
        a1->m128i_i32[v42] = v45;
        if ( v41 > v43 )
        {
LABEL_42:
          v42 = v43;
          continue;
        }
        break;
      }
      if ( (v40 & 1) == 0 && (v40 - 2) >> 1 == v43 )
        goto LABEL_60;
      v46 = (v43 - 1) / 2;
      if ( !v43 )
      {
        v44->m128i_i32[0] = v38;
        continue;
      }
      break;
    }
    v47 = *(double *)(v8 + 8LL * v38);
    while ( 1 )
    {
      v48 = &a1->m128i_i32[v46];
      v49 = (__m128i *)((char *)a1 + 4 * v43);
      v50 = (unsigned int)*v48;
      if ( *(double *)(v8 + 8 * v50) <= v47 )
        break;
      v49->m128i_i32[0] = v50;
      v43 = v46;
      if ( !v46 )
      {
        *v48 = v38;
        if ( v39 > 4 )
          goto LABEL_39;
        return;
      }
      v46 = (v46 - 1) / 2;
    }
LABEL_52:
    v49->m128i_i32[0] = v38;
    if ( v39 > 4 )
      continue;
    break;
  }
}

