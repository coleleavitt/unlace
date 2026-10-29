void __fastcall sub_51BF20(__m128i *a1, char *a2, __int64 a3)
{
  __int64 v3; // r8
  __int64 v4; // r12
  unsigned int *v6; // rdi
  __int64 v7; // rax
  __int64 v8; // r8
  __int64 v9; // rax
  unsigned int *v10; // r8
  unsigned int v11; // esi
  unsigned int *v12; // rbx
  __m128i v13; // xmm0
  unsigned __int32 v14; // eax
  unsigned int v15; // ecx
  unsigned __int64 v16; // xmm1_8
  unsigned int v17; // edx
  unsigned int v18; // esi
  unsigned int *v19; // rax
  __int64 v20; // r8
  __int32 *v21; // r11
  __int64 v22; // r10
  __int64 v23; // rsi
  unsigned __int32 v24; // r9d
  bool v25; // bl
  __int32 *v26; // r12
  __int64 i; // rcx
  __int64 v28; // rax
  __int64 v29; // rcx
  __int32 *v30; // rax
  unsigned __int32 v31; // edx
  unsigned __int32 v32; // esi
  __int64 v33; // r8
  __int64 v34; // rbx
  __int64 v35; // r11
  __int64 j; // rcx
  __int64 v37; // rax
  __m128i *v38; // r9
  __int64 v39; // rcx
  __int32 *v40; // r9
  __m128i *v41; // rax
  __int64 v42; // rax
  __int32 v43; // edx
  __int64 v44; // rcx

  v3 = a2 - (char *)a1;
  v4 = a3;
  v6 = (unsigned int *)a2;
  if ( v3 <= 64 )
    return;
  v7 = v3;
  v8 = v3 >> 3;
  v9 = v7 >> 2;
  if ( a3 )
  {
    do
    {
      v10 = (unsigned int *)a1 + v8;
      v11 = *(v6 - 1);
      --v4;
      v12 = &a1->m128i_u32[1];
      v13 = _mm_loadl_epi64(a1);
      v14 = *v10;
      v15 = _mm_cvtsi128_si32(_mm_shuffle_epi32(v13, 229));
      v16 = _mm_shuffle_epi32(v13, 225).m128i_u64[0];
      v17 = _mm_cvtsi128_si32(v13);
      if ( v15 >= *v10 )
      {
        if ( v15 < v11 )
        {
LABEL_6:
          a1->m128i_i64[0] = v16;
          v18 = *(v6 - 1);
          goto LABEL_7;
        }
        if ( v14 < v11 )
          goto LABEL_16;
      }
      else if ( v14 >= v11 )
      {
        if ( v15 >= v11 )
          goto LABEL_6;
LABEL_16:
        a1->m128i_i32[0] = v11;
        v18 = v17;
        *(v6 - 1) = v17;
        v15 = a1->m128i_i32[0];
        v17 = a1->m128i_u32[1];
        goto LABEL_7;
      }
      a1->m128i_i32[0] = v14;
      *v10 = v17;
      v17 = a1->m128i_u32[1];
      v15 = a1->m128i_i32[0];
      v18 = *(v6 - 1);
LABEL_7:
      v19 = v6;
      while ( 1 )
      {
        while ( v17 < v15 )
        {
          v17 = v12[1];
          ++v12;
        }
        for ( --v19; v15 < v18; --v19 )
          v18 = *(v19 - 1);
        if ( v12 >= v19 )
          break;
        *v12++ = v18;
        v18 = *(v19 - 1);
        *v19 = v17;
        v17 = *v12;
        v15 = a1->m128i_i32[0];
      }
      sub_51BF20(v12, v6, v4);
      if ( (char *)v12 - (char *)a1 <= 64 )
        return;
      v6 = v12;
      v8 = ((char *)v12 - (char *)a1) >> 3;
      v9 = ((char *)v12 - (char *)a1) >> 2;
    }
    while ( v4 );
  }
  v20 = v8 - 1;
  v21 = &a1->m128i_i32[v20];
  v22 = (v9 - 1) >> 1;
  v23 = v20;
  v24 = *v21;
  v25 = (v9 & 1) == 0;
  v26 = v21;
  if ( v20 >= v22 )
    goto LABEL_34;
LABEL_20:
  for ( i = v23; ; i = v28 )
  {
    v28 = 2 * (i + 1);
    v26 = &a1->m128i_i32[2 * i + 2];
    if ( *v26 >= (unsigned int)*(v26 - 1) )
      break;
    v26 = &a1->m128i_i32[--v28];
    a1->m128i_i32[i] = *v26;
    if ( v28 >= v22 )
      goto LABEL_25;
LABEL_22:
    ;
  }
  a1->m128i_i32[i] = *v26;
  if ( v28 < v22 )
    goto LABEL_22;
LABEL_25:
  if ( v20 == v28 && v25 )
    goto LABEL_56;
LABEL_27:
  v29 = (v28 - 1) >> 1;
  if ( v23 >= v28 )
    goto LABEL_36;
  while ( 1 )
  {
    v30 = &a1->m128i_i32[v28];
    v31 = a1->m128i_u32[v29];
    if ( v31 >= v24 )
      break;
    *v30 = v31;
    v28 = v29;
    if ( v23 >= v29 )
    {
      v30 = &a1->m128i_i32[v29];
      break;
    }
    v29 = (v29 - 1) / 2;
  }
  *v30 = v24;
  if ( v23 )
  {
    while ( 1 )
    {
      --v21;
      --v23;
      v24 = *v21;
      v26 = v21;
      if ( v23 < v22 )
        goto LABEL_20;
LABEL_34:
      if ( v20 == v23 && v25 )
      {
        v28 = v23;
LABEL_56:
        v42 = 2 * v28 + 2;
        v43 = a1->m128i_i32[v42 - 1];
        v28 = v42 - 1;
        *v26 = v43;
        v26 = &a1->m128i_i32[v28];
        goto LABEL_27;
      }
LABEL_36:
      *v26 = v24;
    }
  }
  if ( (char *)v6 - (char *)a1 > 4 )
  {
LABEL_39:
    while ( 1 )
    {
      v32 = *--v6;
      v33 = (char *)v6 - (char *)a1;
      *v6 = a1->m128i_i32[0];
      v34 = ((char *)v6 - (char *)a1) >> 2;
      v35 = (v34 - 1) / 2;
      if ( (char *)v6 - (char *)a1 > 8 )
        break;
      v41 = a1;
      if ( (v34 & 1) == 0 && (unsigned __int64)(v34 - 1) <= 2 )
      {
        v38 = a1;
        v37 = 0;
        goto LABEL_62;
      }
LABEL_52:
      v41->m128i_i32[0] = v32;
      if ( v33 <= 4 )
        return;
    }
    for ( j = 0; ; j = v37 )
    {
      v37 = 2 * (j + 1);
      v38 = (__m128i *)&a1->m128i_u64[j + 1];
      if ( v38->m128i_i32[0] < (unsigned __int32)v38[-1].m128i_i32[3] )
      {
        --v37;
        v38 = (__m128i *)((char *)a1 + 4 * v37);
        a1->m128i_i32[j] = v38->m128i_i32[0];
        if ( v35 <= v37 )
          goto LABEL_45;
      }
      else
      {
        a1->m128i_i32[j] = v38->m128i_i32[0];
        if ( v35 <= v37 )
        {
LABEL_45:
          if ( (v34 & 1) != 0 || (v34 - 2) >> 1 != v37 )
          {
            v39 = (v37 - 1) / 2;
            if ( v37 )
              goto LABEL_51;
            v38->m128i_i32[0] = v32;
            goto LABEL_39;
          }
LABEL_62:
          v44 = 2 * v37 + 2;
          v38->m128i_i32[0] = a1->m128i_i32[v44 - 1];
          v37 = 2 * v37 + 1;
          v39 = (v44 >> 1) - 1;
LABEL_51:
          while ( 1 )
          {
            v40 = &a1->m128i_i32[v39];
            v41 = (__m128i *)((char *)a1 + 4 * v37);
            if ( *v40 >= v32 )
              goto LABEL_52;
            v41->m128i_i32[0] = *v40;
            v37 = v39;
            if ( !v39 )
            {
              *v40 = v32;
              if ( v33 > 4 )
                goto LABEL_39;
              return;
            }
            v39 = (v39 - 1) / 2;
          }
        }
      }
    }
  }
}

