void __fastcall sub_43B2A0(
        __int64 a1,
        const __m128i *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        double a7,
        __m128 a8,
        __m128 a9)
{
  __int64 v10; // rdx
  __int64 v12; // r12
  __int64 v13; // rax
  _BYTE *v14; // r9
  _BYTE *v15; // rdx
  __m128i *v16; // r11
  const __m128i *v17; // r12
  _BYTE *v18; // r8
  _BYTE *v19; // rcx
  _BYTE *v20; // rax
  __int64 v21; // r14
  _BYTE *v22; // rdi
  __int64 v23; // r13
  _BYTE *v24; // r10
  _BYTE *v25; // r15
  _BYTE *v26; // rdi
  __int64 v27; // r10
  _BYTE *v28; // rax
  __m128i v29; // xmm0
  __int64 v30; // rax
  __m128i *v31; // r11
  _BYTE *v32; // rdi
  signed __int64 v33; // r9
  __m128 v34; // xmm0
  _BYTE *v35; // rax
  unsigned __int64 v36; // rdx
  _BYTE *v37; // rcx
  __m128i *j; // rax
  _BYTE *v39; // rdx
  signed __int64 v40; // r8
  _BYTE *v41; // rcx
  bool v42; // cc
  _BYTE *v43; // r8
  __int64 v44; // rdx
  _BYTE *v45; // r15
  _BYTE *v46; // rdi
  __int64 v47; // r10
  _BYTE *v48; // rax
  __int64 v49; // rax
  __int64 v50; // rdx
  __m128i v51; // xmm0
  __int64 v52; // rax
  __int64 i; // rbp
  __m128i *v54; // rbp
  __m128i v55; // xmm1
  __int128 v56; // xmm0
  __int64 v57; // r12
  __int64 v58; // rax
  __int128 v59; // [rsp+20h] [rbp-58h]

  v10 = (__int64)a2->m128i_i64 - a1;
  if ( (__int64)a2->m128i_i64 - a1 <= 384 )
    return;
  while ( 2 )
  {
    v12 = 0xAAAAAAAAAAAAAAABLL * (v10 >> 3);
    v13 = v12 >> 1;
    if ( !a3 )
    {
      for ( i = v13 - 1; ; --i )
      {
        v59 = (__int128)_mm_loadu_si128((const __m128i *)(a1 + 24 * i));
        sub_43A3D0(
          a1,
          i,
          v12,
          *(double *)&v59,
          *(double *)a8.m128_u64,
          a9,
          a4,
          a5,
          a6,
          v59,
          *(_QWORD *)(a1 + 24 * i + 16));
        if ( !i )
          break;
      }
      v54 = (__m128i *)&a2[-2].m128i_u64[1];
      if ( (__int64)a2->m128i_i64 - a1 > 24 )
      {
        do
        {
          v55 = _mm_loadu_si128((const __m128i *)a1);
          v56 = (__int128)_mm_loadu_si128(v54);
          v57 = (__int64)v54->m128i_i64 - a1;
          v58 = v54[1].m128i_i64[0];
          *v54 = v55;
          v54 = (__m128i *)((char *)v54 - 24);
          v54[2].m128i_i64[1] = *(_QWORD *)(a1 + 16);
          sub_43A3D0(
            a1,
            0,
            0xAAAAAAAAAAAAAAABLL * (v57 >> 3),
            *(double *)&v56,
            *(double *)v55.m128i_i64,
            a9,
            a4,
            a5,
            a6,
            v56,
            v58);
        }
        while ( v57 > 24 );
      }
      return;
    }
    v14 = *(_BYTE **)(a1 + 32);
    v15 = *(_BYTE **)(a1 + 24);
    --a3;
    v16 = (__m128i *)(a1 + 24 * v13);
    v17 = (const __m128i *)(a1 + 24);
    v18 = (_BYTE *)v16->m128i_i64[1];
    v19 = (_BYTE *)v16->m128i_i64[0];
    v20 = v15;
    v21 = v14 - v15;
    v22 = (_BYTE *)v16->m128i_i64[0];
    v23 = (__int64)&v18[-v16->m128i_i64[0]];
    v24 = &v15[v23];
    if ( v14 - v15 <= v23 )
      v24 = *(_BYTE **)(a1 + 32);
    if ( v15 != v24 )
    {
      while ( *v20 >= *v22 )
      {
        if ( *v20 > *v22 )
          goto LABEL_44;
        ++v20;
        ++v22;
        if ( v20 == v24 )
          goto LABEL_43;
      }
      goto LABEL_10;
    }
LABEL_43:
    if ( v18 != v22 )
    {
LABEL_10:
      v25 = (_BYTE *)a2[-1].m128i_i64[0];
      v26 = (_BYTE *)a2[-2].m128i_i64[1];
      v27 = v25 - v26;
      if ( v23 > v25 - v26 )
        v18 = &v19[v27];
      v28 = (_BYTE *)a2[-2].m128i_i64[1];
      if ( v19 != v18 )
      {
        while ( *v19 >= *v28 )
        {
          if ( *v19 > *v28 )
            goto LABEL_53;
          ++v19;
          ++v28;
          if ( v19 == v18 )
            goto LABEL_52;
        }
        goto LABEL_17;
      }
LABEL_52:
      if ( v25 != v28 )
      {
LABEL_17:
        a8 = (__m128)_mm_loadu_si128(v16);
        v29 = _mm_loadu_si128((const __m128i *)a1);
        v30 = *(_QWORD *)(a1 + 16);
        *(__m128 *)a1 = a8;
        *(_QWORD *)(a1 + 16) = v16[1].m128i_i64[0];
        v16[1].m128i_i64[0] = v30;
        *v16 = v29;
        goto LABEL_18;
      }
LABEL_53:
      if ( v21 > v27 )
        v14 = &v15[v27];
      if ( v15 != v14 )
      {
        while ( *v15 >= *v26 )
        {
          if ( *v15 > *v26 )
            goto LABEL_51;
          ++v15;
          ++v26;
          if ( v15 == v14 )
            goto LABEL_78;
        }
        goto LABEL_60;
      }
LABEL_78:
      if ( v25 != v26 )
        goto LABEL_60;
      goto LABEL_51;
    }
LABEL_44:
    v45 = (_BYTE *)a2[-1].m128i_i64[0];
    v46 = (_BYTE *)a2[-2].m128i_i64[1];
    v47 = v45 - v46;
    if ( v21 > v45 - v46 )
      v14 = &v15[v47];
    v48 = (_BYTE *)a2[-2].m128i_i64[1];
    if ( v15 != v14 )
    {
      while ( *v15 >= *v48 )
      {
        if ( *v15 > *v48 )
          goto LABEL_62;
        ++v15;
        ++v48;
        if ( v15 == v14 )
          goto LABEL_61;
      }
      goto LABEL_51;
    }
LABEL_61:
    if ( v45 != v48 )
    {
LABEL_51:
      v49 = *(_QWORD *)(a1 + 16);
      a8 = (__m128)_mm_loadu_si128((const __m128i *)(a1 + 24));
      v50 = *(_QWORD *)(a1 + 40);
      *(__m128i *)(a1 + 24) = _mm_loadu_si128((const __m128i *)a1);
      *(_QWORD *)(a1 + 16) = v50;
      *(_QWORD *)(a1 + 40) = v49;
      *(__m128 *)a1 = a8;
      goto LABEL_18;
    }
LABEL_62:
    if ( v23 > v47 )
      v18 = &v19[v47];
    if ( v19 != v18 )
    {
      while ( *v19 >= *v46 )
      {
        if ( *v19 > *v46 )
          goto LABEL_17;
        ++v19;
        ++v46;
        if ( v19 == v18 )
          goto LABEL_76;
      }
      goto LABEL_60;
    }
LABEL_76:
    if ( v45 == v46 )
      goto LABEL_17;
LABEL_60:
    a8 = (__m128)_mm_loadu_si128((const __m128i *)((char *)a2 - 24));
    v51 = _mm_loadu_si128((const __m128i *)a1);
    v52 = *(_QWORD *)(a1 + 16);
    *(__m128 *)a1 = a8;
    *(_QWORD *)(a1 + 16) = a2[-1].m128i_i64[1];
    a2[-1].m128i_i64[1] = v52;
    *(__m128i *)((char *)a2 - 24) = v51;
LABEL_18:
    v31 = (__m128i *)a2;
    while ( 2 )
    {
      v32 = *(_BYTE **)a1;
      v33 = *(_QWORD *)(a1 + 8) - *(_QWORD *)a1;
      while ( 1 )
      {
        v34 = (__m128)_mm_loadu_si128(v17);
        a9 = _mm_movehl_ps(a9, v34);
        v35 = (_BYTE *)v34.m128_u64[0];
        v36 = a9.m128_u64[0];
        if ( (signed __int64)(a9.m128_u64[0] - v34.m128_u64[0]) > v33 )
          v36 = v34.m128_u64[0] + v33;
        v37 = *(_BYTE **)a1;
        if ( v34.m128_u64[0] == v36 )
          break;
        while ( *v35 >= *v37 )
        {
          if ( *v35 > *v37 )
            goto LABEL_29;
          ++v35;
          ++v37;
          if ( v35 == (_BYTE *)v36 )
            goto LABEL_28;
        }
LABEL_27:
        v17 = (const __m128i *)((char *)v17 + 24);
      }
LABEL_28:
      if ( *(_BYTE **)(a1 + 8) != v37 )
        goto LABEL_27;
LABEL_29:
      for ( j = (__m128i *)((char *)v31 - 24); ; j = (__m128i *)((char *)j - 24) )
      {
        v39 = (_BYTE *)j->m128i_i64[0];
        v31 = j;
        v40 = j->m128i_i64[1] - j->m128i_i64[0];
        v41 = &v32[v40];
        v42 = v33 <= v40;
        v43 = *(_BYTE **)a1;
        if ( v42 )
          v41 = *(_BYTE **)(a1 + 8);
        if ( v32 == v41 )
          break;
        while ( *v43 >= *v39 )
        {
          if ( *v43 > *v39 )
            goto LABEL_39;
          ++v43;
          ++v39;
          if ( v43 == v41 )
            goto LABEL_38;
        }
LABEL_37:
        ;
      }
LABEL_38:
      if ( (_BYTE *)j->m128i_i64[1] != v39 )
        goto LABEL_37;
LABEL_39:
      if ( v17 < j )
      {
        a8 = (__m128)_mm_loadu_si128(j);
        v44 = v17[1].m128i_i64[0];
        v17 = (const __m128i *)((char *)v17 + 24);
        *(__m128 *)((char *)v17 - 24) = a8;
        v17[-1].m128i_i64[1] = j[1].m128i_i64[0];
        j[1].m128i_i64[0] = v44;
        *j = (__m128i)v34;
        continue;
      }
      break;
    }
    sub_43B2A0(v17, a2, a3);
    v10 = (__int64)v17->m128i_i64 - a1;
    if ( (__int64)v17->m128i_i64 - a1 > 384 )
    {
      a2 = v17;
      continue;
    }
    break;
  }
}
