void __fastcall sub_5B0340(__m128i *a1, unsigned int *a2, __int64 a3, __int64 a4)
{
  unsigned int *v4; // r8
  __int64 v5; // r13
  __int64 v7; // rdi
  __int64 v9; // rax
  __int64 v10; // rdi
  __int64 v11; // rax
  unsigned int *v12; // r9
  __int64 v13; // rcx
  __m128i v14; // xmm0
  unsigned int *v15; // rbx
  unsigned int v16; // esi
  __int64 v17; // r11
  unsigned int v18; // edi
  __int64 v19; // r10
  unsigned int v20; // eax
  unsigned __int64 v21; // xmm1_8
  unsigned int v22; // edx
  unsigned int v23; // esi
  unsigned int *v24; // rax
  unsigned int v25; // ecx
  __int64 v26; // rdi
  __int64 v27; // rdi
  __int64 v28; // rdi
  __int32 *v29; // r11
  __int64 v30; // r10
  __int64 v31; // rsi
  unsigned __int32 v32; // r13d
  __int32 *v33; // rcx
  __int64 i; // r9
  __int64 v35; // rax
  __int64 v36; // r15
  __int64 v37; // rdx
  __int32 *v38; // rax
  __int64 v39; // r15
  unsigned __int32 v40; // r9d
  __int64 v41; // rdi
  __int64 v42; // r13
  __int64 v43; // r11
  __int64 v44; // rcx
  __int64 v45; // rax
  __m128i *v46; // rsi
  __int64 v47; // r14
  __int64 v48; // rcx
  __int32 *v49; // rsi
  __m128i *v50; // rax
  __int64 v51; // r11
  __int64 v52; // rcx
  __int64 v53; // rax
  __int32 v54; // edx
  bool v55; // [rsp+Fh] [rbp-39h]

  v4 = a2;
  v5 = a3;
  v7 = (char *)a2 - (char *)a1;
  if ( v7 <= 64 )
    return;
  v9 = v7;
  v10 = v7 >> 3;
  v11 = v9 >> 2;
  if ( a3 )
  {
    do
    {
      v12 = (unsigned int *)a1 + v10;
      v13 = a1->m128i_u32[1];
      --v5;
      v14 = _mm_loadl_epi64(a1);
      v15 = &a1->m128i_u32[1];
      v16 = *(_DWORD *)(a4 + 4 * v13);
      v17 = *(v4 - 1);
      v18 = *(_DWORD *)(a4 + 4 * v17);
      v19 = *v12;
      v20 = *(_DWORD *)(a4 + 4 * v19);
      v21 = _mm_shuffle_epi32(v14, 225).m128i_u64[0];
      v22 = _mm_cvtsi128_si32(v14);
      if ( v16 >= v20 )
      {
        if ( v16 < v18 )
        {
LABEL_6:
          a1->m128i_i64[0] = v21;
          v23 = *(v4 - 1);
          goto LABEL_7;
        }
        if ( v20 < v18 )
          goto LABEL_16;
      }
      else if ( v20 >= v18 )
      {
        if ( v16 >= v18 )
          goto LABEL_6;
LABEL_16:
        a1->m128i_i32[0] = v17;
        v23 = v22;
        *(v4 - 1) = v22;
        v22 = a1->m128i_u32[1];
        v13 = a1->m128i_u32[0];
        goto LABEL_7;
      }
      a1->m128i_i32[0] = v19;
      *v12 = v22;
      v22 = a1->m128i_u32[1];
      v23 = *(v4 - 1);
      v13 = a1->m128i_u32[0];
LABEL_7:
      v24 = v4;
      while ( 1 )
      {
        v25 = *(_DWORD *)(a4 + 4 * v13);
        if ( *(_DWORD *)(a4 + 4LL * v22) < v25 )
        {
          do
          {
            v26 = v15[1];
            ++v15;
            v22 = v26;
          }
          while ( *(_DWORD *)(a4 + 4 * v26) < v25 );
        }
        --v24;
        if ( v25 < *(_DWORD *)(a4 + 4LL * v23) )
        {
          do
          {
            v27 = *--v24;
            v23 = v27;
          }
          while ( v25 < *(_DWORD *)(a4 + 4 * v27) );
        }
        if ( v15 >= v24 )
          break;
        *v15++ = v23;
        v23 = *(v24 - 1);
        *v24 = v22;
        v22 = *v15;
        v13 = a1->m128i_u32[0];
      }
      sub_5B0340(v15, v4, v5, a4);
      if ( (char *)v15 - (char *)a1 <= 64 )
        return;
      v4 = v15;
      v10 = ((char *)v15 - (char *)a1) >> 3;
      v11 = ((char *)v15 - (char *)a1) >> 2;
    }
    while ( v5 );
  }
  v28 = v10 - 1;
  v29 = &a1->m128i_i32[v28];
  v30 = (v11 - 1) >> 1;
  v31 = v28;
  v32 = *v29;
  v33 = v29;
  v55 = (v11 & 1) == 0;
  if ( v28 >= v30 )
    goto LABEL_34;
LABEL_20:
  for ( i = v31; ; i = v35 )
  {
    v35 = 2 * (i + 1);
    v33 = &a1->m128i_i32[2 * i + 2];
    v36 = (unsigned int)*v33;
    if ( *(_DWORD *)(a4 + 4 * v36) >= *(_DWORD *)(a4 + 4LL * (unsigned int)*(v33 - 1)) )
      break;
    v33 = &a1->m128i_i32[--v35];
    a1->m128i_i32[i] = *v33;
    if ( v35 >= v30 )
      goto LABEL_25;
LABEL_22:
    ;
  }
  a1->m128i_i32[i] = v36;
  if ( v35 < v30 )
    goto LABEL_22;
LABEL_25:
  if ( v28 == v35 && v55 )
  {
LABEL_62:
    v53 = 2 * v35 + 2;
    v54 = a1->m128i_i32[v53 - 1];
    v35 = v53 - 1;
    *v33 = v54;
    v33 = &a1->m128i_i32[v35];
  }
  v37 = (v35 - 1) >> 1;
  if ( v31 >= v35 )
  {
    while ( 1 )
    {
      *v33 = v32;
LABEL_33:
      --v29;
      --v31;
      v32 = *v29;
      v33 = v29;
      if ( v31 < v30 )
        goto LABEL_20;
LABEL_34:
      if ( v28 == v31 && v55 )
      {
        v35 = v31;
        goto LABEL_62;
      }
    }
  }
  while ( 1 )
  {
    v38 = &a1->m128i_i32[v35];
    v39 = a1->m128i_u32[v37];
    if ( *(_DWORD *)(a4 + 4 * v39) >= *(_DWORD *)(a4 + 4LL * v32) )
      break;
    *v38 = v39;
    v35 = v37;
    if ( v31 >= v37 )
    {
      v38 = &a1->m128i_i32[v37];
      break;
    }
    v37 = (v37 - 1) / 2;
  }
  *v38 = v32;
  if ( v31 )
    goto LABEL_33;
  if ( (char *)v4 - (char *)a1 <= 4 )
    return;
  while ( 2 )
  {
    while ( 2 )
    {
      while ( 1 )
      {
        v40 = *--v4;
        v41 = (char *)v4 - (char *)a1;
        *v4 = a1->m128i_i32[0];
        v42 = ((char *)v4 - (char *)a1) >> 2;
        v43 = (v42 - 1) / 2;
        if ( (char *)v4 - (char *)a1 > 8 )
          break;
        v50 = a1;
        if ( (v42 & 1) == 0 && (unsigned __int64)(v42 - 1) <= 2 )
        {
          v46 = a1;
          v45 = 0;
LABEL_60:
          v52 = 2 * v45 + 2;
          v46->m128i_i32[0] = a1->m128i_i32[v52 - 1];
          v45 = 2 * v45 + 1;
          v48 = (v52 >> 1) - 1;
          goto LABEL_51;
        }
LABEL_52:
        v50->m128i_i32[0] = v40;
        if ( v41 <= 4 )
          return;
      }
      v44 = 0;
      while ( 2 )
      {
        v45 = 2 * (v44 + 1);
        v46 = (__m128i *)&a1->m128i_u64[v44 + 1];
        v47 = v46->m128i_u32[0];
        if ( *(_DWORD *)(a4 + 4 * v47) < *(_DWORD *)(a4 + 4LL * v46[-1].m128i_u32[3]) )
        {
          --v45;
          v46 = (__m128i *)((char *)a1 + 4 * v45);
          a1->m128i_i32[v44] = v46->m128i_i32[0];
          if ( v43 <= v45 )
            break;
          goto LABEL_42;
        }
        a1->m128i_i32[v44] = v47;
        if ( v43 > v45 )
        {
LABEL_42:
          v44 = v45;
          continue;
        }
        break;
      }
      if ( (v42 & 1) == 0 && (v42 - 2) >> 1 == v45 )
        goto LABEL_60;
      v48 = (v45 - 1) / 2;
      if ( !v45 )
      {
        v46->m128i_i32[0] = v40;
        continue;
      }
      break;
    }
    while ( 1 )
    {
LABEL_51:
      v49 = &a1->m128i_i32[v48];
      v50 = (__m128i *)((char *)a1 + 4 * v45);
      v51 = (unsigned int)*v49;
      if ( *(_DWORD *)(a4 + 4 * v51) >= *(_DWORD *)(a4 + 4LL * v40) )
        goto LABEL_52;
      v50->m128i_i32[0] = v51;
      v45 = v48;
      if ( !v48 )
        break;
      v48 = (v48 - 1) / 2;
    }
    *v49 = v40;
    if ( v41 > 4 )
      continue;
    break;
  }
}

