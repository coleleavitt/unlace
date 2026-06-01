void __fastcall sub_4D99D0(unsigned int *a1, __m128i *a2, __int64 a3)
{
  __int64 v3; // r8
  __int64 v4; // r12
  __int64 i; // rax
  unsigned int *v7; // rax
  unsigned int v8; // edx
  unsigned int v9; // r8d
  unsigned int v10; // ecx
  unsigned int v11; // edi
  __m128i *v12; // rbx
  __int32 v13; // eax
  unsigned int v14; // edi
  unsigned int v15; // ecx
  __m128i *v16; // rax
  __int32 v17; // edx
  __int32 v18; // ecx
  __int32 v19; // edx
  __int64 v20; // r8
  __int64 v21; // r10
  const __m128i *v22; // r11
  __int64 v23; // rdi
  bool v24; // bl
  __m128i v25; // xmm0
  __m128i *v26; // r12
  unsigned int v27; // r9d
  __int64 j; // rcx
  __int64 v29; // rax
  __int64 v30; // rcx
  unsigned int *v31; // r12
  unsigned int *v32; // rax
  unsigned int v33; // ecx
  unsigned int v34; // edx
  __m128i v35; // xmm0
  __int64 v36; // r8
  unsigned int v37; // edi
  __int64 v38; // r11
  __int64 v39; // r10
  __int64 k; // rcx
  __int64 v41; // rax
  unsigned int *v42; // r9
  __int64 v43; // rcx
  unsigned int *v44; // r9
  unsigned int *v45; // rax
  __int64 v46; // rcx
  __int64 v47; // rax
  __int64 v48; // rdx

  if ( (char *)a2 - (char *)a1 <= 128 )
    return;
  v3 = ((char *)a2 - (char *)a1) >> 4;
  v4 = a3;
  for ( i = ((char *)a2 - (char *)a1) >> 3; v4; i = ((char *)v12 - (char *)a1) >> 3 )
  {
    v7 = &a1[2 * v3];
    v8 = a1[3];
    v9 = a2[-1].m128i_u32[3];
    --v4;
    v10 = v7[1];
    v11 = *a1;
    v12 = (__m128i *)(a1 + 2);
    if ( v10 >= v8 )
    {
      if ( v9 < v8 )
        goto LABEL_33;
      if ( v9 < v10 )
      {
LABEL_6:
        *a1 = a2[-1].m128i_u32[2];
        v13 = a2[-1].m128i_i32[3];
        a2[-1].m128i_i32[2] = v11;
        v14 = a1[1];
        a1[1] = v13;
        a2[-1].m128i_i32[3] = v14;
        v15 = a1[3];
        v8 = a1[1];
        goto LABEL_7;
      }
    }
    else if ( v9 >= v10 )
    {
      if ( v9 < v8 )
        goto LABEL_6;
LABEL_33:
      v15 = a1[1];
      *(__m128i *)a1 = _mm_unpacklo_epi64(
                         _mm_unpacklo_epi32(_mm_cvtsi32_si128(a1[2]), _mm_cvtsi32_si128(v8)),
                         _mm_unpacklo_epi32(_mm_cvtsi32_si128(v11), _mm_cvtsi32_si128(v15)));
      v14 = a2[-1].m128i_u32[3];
      goto LABEL_7;
    }
    *a1 = *v7;
    v33 = v7[1];
    *v7 = v11;
    v34 = a1[1];
    a1[1] = v33;
    v7[1] = v34;
    v15 = a1[3];
    v8 = a1[1];
    v14 = a2[-1].m128i_u32[3];
LABEL_7:
    v16 = a2;
    while ( 1 )
    {
      if ( v8 < v15 )
      {
        do
          v12 = (__m128i *)((char *)v12 + 8);
        while ( v8 < v12->m128i_i32[1] );
      }
      v16 = (__m128i *)((char *)v16 - 8);
      if ( v14 < v8 )
      {
        do
          v16 = (__m128i *)((char *)v16 - 8);
        while ( v16->m128i_i32[1] < v8 );
      }
      if ( v12 >= v16 )
        break;
      v17 = v12->m128i_i32[0];
      v12 = (__m128i *)((char *)v12 + 8);
      v12[-1].m128i_i32[2] = v16->m128i_i32[0];
      v18 = v16->m128i_i32[1];
      v16->m128i_i32[0] = v17;
      v19 = v12[-1].m128i_i32[3];
      v12[-1].m128i_i32[3] = v18;
      v14 = v16[-1].m128i_u32[3];
      v16->m128i_i32[1] = v19;
      v15 = v12->m128i_u32[1];
      v8 = a1[1];
    }
    sub_4D99D0(v12, a2, v4);
    if ( (char *)v12 - (char *)a1 <= 128 )
      return;
    a2 = v12;
    v3 = ((char *)v12 - (char *)a1) >> 4;
  }
  v20 = v3 - 1;
  v21 = (i - 1) >> 1;
  v22 = (const __m128i *)&a1[2 * v20];
  v23 = v20;
  v24 = (i & 1) == 0;
  while ( 2 )
  {
    v25 = _mm_loadl_epi64(v22);
    v26 = (__m128i *)v22;
    v27 = _mm_cvtsi128_si32(_mm_shuffle_epi32(v25, 229));
    if ( v23 >= v21 )
    {
      if ( v20 != v23 || !v24 )
      {
LABEL_64:
        v26->m128i_i64[0] = v25.m128i_i64[0];
        goto LABEL_31;
      }
      v29 = v23;
LABEL_61:
      v47 = 2 * v29 + 2;
      v48 = *(_QWORD *)&a1[2 * v47 - 2];
      v29 = v47 - 1;
      v26->m128i_i64[0] = v48;
      v26 = (__m128i *)&a1[2 * v29];
      goto LABEL_25;
    }
    for ( j = v23; ; j = v29 )
    {
      v29 = 2 * (j + 1);
      v26 = (__m128i *)&a1[4 * j + 4];
      if ( v26[-1].m128i_i32[3] >= (unsigned __int32)v26->m128i_i32[1] )
        break;
      --v29;
      v26 = (__m128i *)&a1[2 * v29];
      *(_QWORD *)&a1[2 * j] = v26->m128i_i64[0];
      if ( v29 >= v21 )
        goto LABEL_23;
LABEL_20:
      ;
    }
    *(_QWORD *)&a1[2 * j] = v26->m128i_i64[0];
    if ( v29 < v21 )
      goto LABEL_20;
LABEL_23:
    if ( v20 == v29 && v24 )
      goto LABEL_61;
LABEL_25:
    v30 = (v29 - 1) >> 1;
    if ( v23 >= v29 )
      goto LABEL_64;
    while ( 1 )
    {
      v31 = &a1[2 * v30];
      v32 = &a1[2 * v29];
      if ( v27 >= v31[1] )
        break;
      *(_QWORD *)v32 = *(_QWORD *)v31;
      v29 = v30;
      if ( v23 >= v30 )
      {
        v32 = &a1[2 * v30];
        break;
      }
      v30 = (v30 - 1) / 2;
    }
    *(_QWORD *)v32 = v25.m128i_i64[0];
    if ( v23 )
    {
LABEL_31:
      --v23;
      v22 = (const __m128i *)((char *)v22 - 8);
      continue;
    }
    break;
  }
  if ( (char *)a2 - (char *)a1 > 8 )
  {
LABEL_37:
    while ( 1 )
    {
      a2 = (__m128i *)((char *)a2 - 8);
      v35 = _mm_loadl_epi64(a2);
      v36 = (char *)a2 - (char *)a1;
      a2->m128i_i64[0] = *(_QWORD *)a1;
      v37 = _mm_cvtsi128_si32(_mm_shuffle_epi32(v35, 229));
      v38 = ((char *)a2 - (char *)a1) >> 3;
      v39 = (v38 - 1) / 2;
      if ( (char *)a2 - (char *)a1 > 16 )
        break;
      v45 = a1;
      if ( (v38 & 1) == 0 && (unsigned __int64)(v38 - 1) <= 2 )
      {
        v42 = a1;
        v41 = 0;
        goto LABEL_59;
      }
LABEL_50:
      *(_QWORD *)v45 = v35.m128i_i64[0];
      if ( v36 <= 8 )
        return;
    }
    for ( k = 0; ; k = v41 )
    {
      v41 = 2 * (k + 1);
      v42 = &a1[4 * k + 4];
      if ( *(v42 - 1) < v42[1] )
      {
        --v41;
        v42 = &a1[2 * v41];
        *(_QWORD *)&a1[2 * k] = *(_QWORD *)v42;
        if ( v39 <= v41 )
          goto LABEL_43;
      }
      else
      {
        *(_QWORD *)&a1[2 * k] = *(_QWORD *)v42;
        if ( v39 <= v41 )
        {
LABEL_43:
          if ( (v38 & 1) != 0 || (v38 - 2) >> 1 != v41 )
          {
            v43 = (v41 - 1) / 2;
            if ( v41 )
              goto LABEL_49;
            *(_QWORD *)v42 = v35.m128i_i64[0];
            goto LABEL_37;
          }
LABEL_59:
          v46 = 2 * v41 + 2;
          *(_QWORD *)v42 = *(_QWORD *)&a1[2 * v46 - 2];
          v41 = 2 * v41 + 1;
          v43 = (v46 >> 1) - 1;
LABEL_49:
          while ( 1 )
          {
            v44 = &a1[2 * v43];
            v45 = &a1[2 * v41];
            if ( v37 >= v44[1] )
              goto LABEL_50;
            *(_QWORD *)v45 = *(_QWORD *)v44;
            v41 = v43;
            if ( !v43 )
            {
              *(_QWORD *)v44 = v35.m128i_i64[0];
              if ( v36 > 8 )
                goto LABEL_37;
              return;
            }
            v43 = (v43 - 1) / 2;
          }
        }
      }
    }
  }
}

