void __fastcall sub_7ACBB0(unsigned __int32 *a1, __m128i *a2, __int64 a3)
{
  __int64 v3; // r8
  __int64 v4; // r12
  __m128i *v6; // rdi
  __int64 v7; // rax
  __int64 v8; // r8
  __int64 v9; // rax
  unsigned __int32 *v10; // rsi
  unsigned __int32 v11; // edx
  unsigned __int32 v12; // r8d
  unsigned __int32 v13; // eax
  unsigned __int32 v14; // ecx
  __m128i *v15; // rbx
  unsigned __int32 v16; // eax
  unsigned __int32 v17; // esi
  __m128i *v18; // rsi
  __m128i *v19; // rax
  unsigned __int32 i; // esi
  __int32 v21; // edx
  __int32 v22; // edx
  __int32 v23; // eax
  __int64 v24; // r8
  __int64 v25; // r10
  const __m128i *v26; // r11
  __int64 v27; // rsi
  bool v28; // bl
  __m128i v29; // xmm0
  __m128i *v30; // r12
  unsigned int v31; // r9d
  __int64 j; // rcx
  __int64 v33; // rax
  __int32 v34; // r13d
  __int32 *v35; // rdx
  __int64 v36; // rcx
  unsigned int *v37; // r12
  unsigned int *v38; // rax
  unsigned __int32 v39; // edx
  unsigned __int32 v40; // eax
  __m128i v41; // xmm0
  __int64 v42; // r9
  unsigned int v43; // r8d
  __int64 v44; // r12
  __int64 k; // rcx
  __int64 v46; // rax
  unsigned __int32 *v47; // rsi
  unsigned __int32 v48; // r10d
  unsigned __int32 *v49; // rdx
  __int64 v50; // rcx
  unsigned int *v51; // rsi
  unsigned int *v52; // rax
  __int64 v53; // rax
  __int64 v54; // rcx
  unsigned __int32 *v55; // rax
  unsigned __int32 v56; // edx
  __int64 v57; // rdx
  __int32 *v58; // rdx
  __int32 v59; // ecx

  v3 = (char *)a2 - (char *)a1;
  v4 = a3;
  v6 = a2;
  if ( v3 <= 128 )
    return;
  v7 = v3;
  v8 = v3 >> 4;
  v9 = v7 >> 3;
  if ( a3 )
  {
    do
    {
      v10 = &a1[2 * v8];
      v11 = a1[2];
      v12 = v6[-1].m128i_u32[2];
      --v4;
      v13 = *v10;
      v14 = *a1;
      v15 = (__m128i *)(a1 + 2);
      if ( *v10 >= v11 )
      {
        if ( v12 >= v11 )
        {
          if ( v12 >= v13 )
          {
LABEL_35:
            *a1 = v13;
            v39 = v10[1];
            *v10 = v14;
            v40 = a1[1];
            v14 = a1[2];
            a1[1] = v39;
            v10[1] = v40;
            v11 = *a1;
            goto LABEL_7;
          }
LABEL_16:
          *a1 = v12;
          v22 = v6[-1].m128i_i32[3];
          v6[-1].m128i_i32[2] = v14;
          v23 = a1[1];
          v14 = a1[2];
          a1[1] = v22;
          v6[-1].m128i_i32[3] = v23;
          v11 = *a1;
          goto LABEL_7;
        }
      }
      else
      {
        if ( v12 < v13 )
          goto LABEL_35;
        if ( v12 < v11 )
          goto LABEL_16;
      }
      v16 = a1[1];
      v17 = a1[3];
      *a1 = v11;
      a1[2] = v14;
      a1[1] = v17;
      a1[3] = v16;
LABEL_7:
      v18 = v6;
      while ( 1 )
      {
        while ( v11 < v14 )
        {
          v14 = v15->m128i_u32[2];
          v15 = (__m128i *)((char *)v15 + 8);
        }
        v19 = (__m128i *)((char *)v18 - 8);
        for ( i = v18[-1].m128i_u32[2]; i < v11; v19 = (__m128i *)((char *)v19 - 8) )
          i = v19[-1].m128i_u32[2];
        if ( v15 >= v19 )
          break;
        v15->m128i_i32[0] = i;
        v18 = v19;
        v15 = (__m128i *)((char *)v15 + 8);
        v19->m128i_i32[0] = v14;
        v21 = v15[-1].m128i_i32[3];
        v15[-1].m128i_i32[3] = v19->m128i_i32[1];
        v14 = v15->m128i_i32[0];
        v19->m128i_i32[1] = v21;
        v11 = *a1;
      }
      sub_7ACBB0(v15, v6, v4);
      if ( (char *)v15 - (char *)a1 <= 128 )
        return;
      v6 = v15;
      v8 = ((char *)v15 - (char *)a1) >> 4;
      v9 = ((char *)v15 - (char *)a1) >> 3;
    }
    while ( v4 );
  }
  v24 = v8 - 1;
  v25 = (v9 - 1) >> 1;
  v26 = (const __m128i *)&a1[2 * v24];
  v27 = v24;
  v28 = (v9 & 1) == 0;
  while ( 1 )
  {
    v29 = _mm_loadl_epi64(v26);
    v30 = (__m128i *)v26;
    v31 = _mm_cvtsi128_si32(v29);
    if ( v27 >= v25 )
    {
      if ( v24 != v27 || !v28 )
      {
LABEL_63:
        v30->m128i_i64[0] = v29.m128i_i64[0];
        goto LABEL_34;
      }
      v33 = v27;
LABEL_60:
      v57 = v33 + 1;
      v33 = 2 * (v33 + 1) - 1;
      v58 = (__int32 *)&a1[4 * v57 - 2];
      v59 = *v58;
      LODWORD(v58) = v58[1];
      v30->m128i_i32[0] = v59;
      v30->m128i_i32[1] = (int)v58;
      v30 = (__m128i *)&a1[2 * v33];
      goto LABEL_28;
    }
    for ( j = v27; ; j = v33 )
    {
      v33 = 2 * (j + 1);
      v30 = (__m128i *)&a1[4 * j + 4];
      v34 = v30->m128i_i32[0];
      if ( v30[-1].m128i_i32[2] < (unsigned __int32)v30->m128i_i32[0] )
      {
        --v33;
        v30 = (__m128i *)&a1[2 * v33];
        v34 = v30->m128i_i32[0];
      }
      v35 = (__int32 *)&a1[2 * j];
      *v35 = v34;
      v35[1] = v30->m128i_i32[1];
      if ( v33 >= v25 )
        break;
    }
    if ( v24 == v33 && v28 )
      goto LABEL_60;
LABEL_28:
    v36 = (v33 - 1) >> 1;
    if ( v27 >= v33 )
      goto LABEL_63;
    while ( 1 )
    {
      v37 = &a1[2 * v36];
      v38 = &a1[2 * v33];
      if ( v31 >= *v37 )
        break;
      *v38 = *v37;
      v38[1] = v37[1];
      v33 = v36;
      if ( v27 >= v36 )
      {
        v38 = &a1[2 * v36];
        break;
      }
      v36 = (v36 - 1) / 2;
    }
    *(_QWORD *)v38 = v29.m128i_i64[0];
    if ( !v27 )
      break;
LABEL_34:
    --v27;
    v26 = (const __m128i *)((char *)v26 - 8);
  }
  if ( (char *)v6 - (char *)a1 > 8 )
  {
    do
    {
LABEL_37:
      while ( 1 )
      {
        v6 = (__m128i *)((char *)v6 - 8);
        v41 = _mm_loadl_epi64(v6);
        v42 = (char *)v6 - (char *)a1;
        v6->m128i_i32[0] = *a1;
        v43 = _mm_cvtsi128_si32(v41);
        v44 = ((char *)v6 - (char *)a1) >> 3;
        v6->m128i_i32[1] = a1[1];
        if ( (char *)v6 - (char *)a1 <= 16 )
          break;
        for ( k = 0; ; k = v46 )
        {
          v46 = 2 * (k + 1);
          v47 = &a1[4 * k + 4];
          v48 = *v47;
          if ( *(v47 - 2) < *v47 )
          {
            --v46;
            v47 = &a1[2 * v46];
            v48 = *v47;
          }
          v49 = &a1[2 * k];
          *v49 = v48;
          v49[1] = v47[1];
          if ( v46 >= (v44 - 1) / 2 )
            break;
        }
        if ( (v44 & 1) == 0 && (v44 - 2) >> 1 == v46 )
          goto LABEL_58;
        v50 = (v46 - 1) / 2;
        if ( v46 )
          goto LABEL_49;
        *(_QWORD *)v47 = v41.m128i_i64[0];
      }
      v52 = a1;
      if ( (v44 & 1) == 0 && (unsigned __int64)(v44 - 1) <= 2 )
      {
        v47 = a1;
        v46 = 0;
LABEL_58:
        v53 = v46 + 1;
        v54 = 2 * v53;
        v55 = &a1[4 * v53 - 2];
        v56 = *v55;
        v47[1] = v55[1];
        v46 = v54 - 1;
        *v47 = v56;
        v50 = (v54 >> 1) - 1;
LABEL_49:
        while ( 1 )
        {
          v51 = &a1[2 * v50];
          v52 = &a1[2 * v46];
          if ( v43 >= *v51 )
            break;
          *v52 = *v51;
          v52[1] = v51[1];
          v46 = v50;
          if ( !v50 )
          {
            *(_QWORD *)v51 = v41.m128i_i64[0];
            if ( v42 > 8 )
              goto LABEL_37;
            return;
          }
          v50 = (v50 - 1) / 2;
        }
      }
      *(_QWORD *)v52 = v41.m128i_i64[0];
    }
    while ( v42 > 8 );
  }
}

