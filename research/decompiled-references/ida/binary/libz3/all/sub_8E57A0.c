void __fastcall sub_8E57A0(__m128i *a1, char *a2, __int64 a3)
{
  __int64 v3; // r8
  __int64 v4; // r12
  double *v6; // rdi
  __int64 v7; // rax
  __int64 v8; // r8
  __int64 v9; // rax
  unsigned int *v10; // r10
  char *v11; // rbx
  __int64 *v12; // r8
  __m128d v13; // xmm0
  unsigned int v14; // ecx
  unsigned int v15; // esi
  double v16; // rdx
  unsigned int v17; // eax
  __m128d v18; // xmm1
  double v19; // rsi
  char *v20; // rax
  __int64 v21; // r8
  __int64 *v22; // r10
  __int64 v23; // r9
  __int64 v24; // rsi
  unsigned int *v25; // rbx
  bool v26; // r11
  __m128i *v27; // r12
  __int64 i; // rcx
  __int64 v29; // rax
  __int64 v30; // rcx
  unsigned int v31; // r13d
  __int64 *v32; // r12
  __int64 *v33; // rax
  unsigned int *v34; // r8
  __int64 v35; // rsi
  __int64 v36; // r11
  __int64 v37; // r12
  __int64 v38; // rcx
  __int64 v39; // rax
  __m128i *v40; // r9
  __int64 v41; // rcx
  unsigned int v42; // r10d
  __int64 *v43; // r9
  __int64 *v44; // rax
  __int64 v45; // rax
  _DWORD *v46; // rdx
  __int64 v47; // rcx

  v3 = a2 - (char *)a1;
  v4 = a3;
  v6 = (double *)a2;
  if ( v3 <= 128 )
    return;
  v7 = v3;
  v8 = v3 >> 4;
  v9 = v7 >> 3;
  if ( a3 )
  {
    do
    {
      v10 = *((unsigned int **)v6 - 1);
      --v4;
      v11 = &a1->m128i_i8[8];
      v12 = &a1->m128i_i64[v8];
      v13 = (__m128d)_mm_loadu_si128(a1);
      v14 = *(_DWORD *)a1->m128i_i64[1];
      v15 = *v10;
      v16 = v13.m128d_f64[0];
      v17 = *(_DWORD *)*v12;
      v18 = _mm_shuffle_pd(v13, v13, 1);
      if ( v14 >= v17 )
      {
        if ( v14 < v15 )
        {
LABEL_6:
          *(__m128d *)a1 = v18;
          v19 = *(v6 - 1);
          goto LABEL_7;
        }
        if ( v17 < v15 )
          goto LABEL_16;
      }
      else if ( v17 >= v15 )
      {
        if ( v14 >= v15 )
          goto LABEL_6;
LABEL_16:
        a1->m128i_i64[0] = (__int64)v10;
        v19 = v13.m128d_f64[0];
        *(v6 - 1) = v13.m128d_f64[0];
        v16 = *(double *)&a1->m128i_i64[1];
        v14 = *(_DWORD *)a1->m128i_i64[0];
        goto LABEL_7;
      }
      a1->m128i_i64[0] = *v12;
      *v12 = *(_QWORD *)&v13.m128d_f64[0];
      v16 = *(double *)&a1->m128i_i64[1];
      v19 = *(v6 - 1);
      v14 = *(_DWORD *)a1->m128i_i64[0];
LABEL_7:
      v20 = (char *)v6;
      while ( 1 )
      {
        while ( **(_DWORD **)&v16 < v14 )
        {
          v16 = *((double *)v11 + 1);
          v11 += 8;
        }
        for ( v20 -= 8; v14 < **(_DWORD **)&v19; v20 -= 8 )
          v19 = *((double *)v20 - 1);
        if ( v11 >= v20 )
          break;
        *(double *)v11 = v19;
        v11 += 8;
        v19 = *((double *)v20 - 1);
        *(double *)v20 = v16;
        v16 = *(double *)v11;
        v14 = *(_DWORD *)a1->m128i_i64[0];
      }
      sub_8E57A0(v11, v6, v4);
      if ( v11 - (char *)a1 <= 128 )
        return;
      v6 = (double *)v11;
      v8 = (v11 - (char *)a1) >> 4;
      v9 = (v11 - (char *)a1) >> 3;
    }
    while ( v4 );
  }
  v21 = v8 - 1;
  v22 = &a1->m128i_i64[v21];
  v23 = (v9 - 1) >> 1;
  v24 = v21;
  v25 = (unsigned int *)*v22;
  v26 = (v9 & 1) == 0;
  v27 = (__m128i *)v22;
  if ( v21 >= v23 )
    goto LABEL_34;
LABEL_20:
  for ( i = v24; ; i = v29 )
  {
    v29 = 2 * (i + 1);
    v27 = &a1[i + 1];
    if ( *(_DWORD *)v27->m128i_i64[0] >= *(_DWORD *)v27[-1].m128i_i64[1] )
      break;
    --v29;
    v27 = (__m128i *)((char *)a1 + 8 * v29);
    a1->m128i_i64[i] = v27->m128i_i64[0];
    if ( v29 >= v23 )
      goto LABEL_25;
LABEL_22:
    ;
  }
  a1->m128i_i64[i] = v27->m128i_i64[0];
  if ( v29 < v23 )
    goto LABEL_22;
LABEL_25:
  if ( v21 == v29 && v26 )
  {
LABEL_56:
    v45 = 2 * v29 + 2;
    v46 = (_DWORD *)a1->m128i_i64[v45 - 1];
    v29 = v45 - 1;
    v27->m128i_i64[0] = (__int64)v46;
    v27 = (__m128i *)((char *)a1 + 8 * v29);
  }
  v30 = (v29 - 1) >> 1;
  if ( v24 >= v29 )
  {
    while ( 1 )
    {
      v27->m128i_i64[0] = (__int64)v25;
LABEL_33:
      --v22;
      --v24;
      v25 = (unsigned int *)*v22;
      v27 = (__m128i *)v22;
      if ( v24 < v23 )
        goto LABEL_20;
LABEL_34:
      if ( v21 == v24 && v26 )
      {
        v29 = v24;
        goto LABEL_56;
      }
    }
  }
  v31 = *v25;
  while ( 1 )
  {
    v32 = &a1->m128i_i64[v30];
    v33 = &a1->m128i_i64[v29];
    if ( *(_DWORD *)*v32 >= v31 )
      break;
    *v33 = *v32;
    v29 = v30;
    if ( v24 >= v30 )
    {
      v33 = &a1->m128i_i64[v30];
      break;
    }
    v30 = (v30 - 1) / 2;
  }
  *v33 = (__int64)v25;
  if ( v24 )
    goto LABEL_33;
  if ( (char *)v6 - (char *)a1 <= 8 )
    return;
LABEL_39:
  while ( 2 )
  {
    while ( 2 )
    {
      v34 = *(unsigned int **)--v6;
      v35 = (char *)v6 - (char *)a1;
      *v6 = *(double *)a1->m128i_i64;
      v36 = ((char *)v6 - (char *)a1) >> 3;
      v37 = (v36 - 1) / 2;
      if ( (char *)v6 - (char *)a1 <= 16 )
      {
        v44 = (__int64 *)a1;
        if ( (v36 & 1) != 0 || (unsigned __int64)(v36 - 1) > 2 )
          goto LABEL_52;
        v40 = a1;
        v39 = 0;
LABEL_62:
        v47 = 2 * v39 + 2;
        v40->m128i_i64[0] = a1->m128i_i64[v47 - 1];
        v39 = 2 * v39 + 1;
        v41 = (v47 >> 1) - 1;
        break;
      }
      v38 = 0;
      while ( 2 )
      {
        v39 = 2 * (v38 + 1);
        v40 = &a1[v38 + 1];
        if ( *(_DWORD *)v40->m128i_i64[0] < *(_DWORD *)v40[-1].m128i_i64[1] )
        {
          --v39;
          v40 = (__m128i *)((char *)a1 + 8 * v39);
          a1->m128i_i64[v38] = v40->m128i_i64[0];
          if ( v37 <= v39 )
            break;
          goto LABEL_42;
        }
        a1->m128i_i64[v38] = v40->m128i_i64[0];
        if ( v37 > v39 )
        {
LABEL_42:
          v38 = v39;
          continue;
        }
        break;
      }
      if ( (v36 & 1) == 0 && (v36 - 2) >> 1 == v39 )
        goto LABEL_62;
      v41 = (v39 - 1) / 2;
      if ( !v39 )
      {
        v40->m128i_i64[0] = (__int64)v34;
        continue;
      }
      break;
    }
    v42 = *v34;
    while ( 1 )
    {
      v43 = &a1->m128i_i64[v41];
      v44 = &a1->m128i_i64[v39];
      if ( *(_DWORD *)*v43 >= v42 )
        break;
      *v44 = *v43;
      v39 = v41;
      if ( !v41 )
      {
        *v43 = (__int64)v34;
        if ( v35 > 8 )
          goto LABEL_39;
        return;
      }
      v41 = (v41 - 1) / 2;
    }
LABEL_52:
    *v44 = (__int64)v34;
    if ( v35 > 8 )
      continue;
    break;
  }
}

